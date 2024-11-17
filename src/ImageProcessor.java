import org.opencv.core.Mat;
import org.opencv.core.MatOfInt;
import org.opencv.imgcodecs.Imgcodecs;
import org.opencv.core.Core;

import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.List;

public class ImageProcessor {
    public static void main(String[] args) throws NoSuchFieldException, IllegalAccessException {
//////// el problem
        System.setProperty("java.library.path", "D:\\Giu  files\\java side project\\MyPhoto\\opencv\\build\\java\\x64");

       System.loadLibrary(Core.NATIVE_LIBRARY_NAME);
        Field fieldSysPath = ClassLoader.class.getDeclaredField("sys_paths");
        fieldSysPath.setAccessible(true);
        fieldSysPath.set(null, null);
        //System.loadLibrary(Core.NATIVE_LIBRARY_NAME);
      //  MatOfInt compressionParams = new MatOfInt(params.stream().mapToInt(i -> i).toArray());
       // boolean isSaved = Imgcodecs.imwrite(outputImagePath, image, compressionParams);
        // Path to your input and output images
        String inputImagePath = "path/to/your/input_image.jpg";
        String outputImagePath = "path/to/your/output_image_compressed.jpg";

        // Load the image
        Mat image = Imgcodecs.imread(inputImagePath);

        if (image.empty()) {
            System.out.println("Could not load image.");
            return;
        }

        // Set compression parameters for JPG
        List<Integer> params = new ArrayList<>();
        params.add(Imgcodecs.IMWRITE_JPEG_QUALITY);  // Set the quality parameter
        params.add(50);  // Set quality to 50 (0-100 scale)

        // Convert params to MatOfInt
        MatOfInt compressionParams = new MatOfInt(params.stream().mapToInt(i -> i).toArray());

// Save the image with reduced quality
        boolean isSaved = Imgcodecs.imwrite(outputImagePath, image, compressionParams);
    }
}
