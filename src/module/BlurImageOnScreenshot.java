package module;

import javafx.application.Application;
import javafx.embed.swing.SwingFXUtils;
import javafx.scene.Scene;
import javafx.scene.effect.GaussianBlur;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.image.WritableImage;
import javafx.scene.input.KeyCode;
import javafx.scene.input.KeyCodeCombination;
import javafx.scene.input.KeyCombination;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

import javax.imageio.ImageIO;
import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;

public class BlurImageOnScreenshot extends Application {

    @Override
    public void start(Stage primaryStage) {
        ImageView imageView = new ImageView(new Image(getClass().getResource("Youssefelcool.jpg").toExternalForm()));
        StackPane root = new StackPane();
        root.getChildren().add(imageView);

        Scene scene = new Scene(root, 800, 600);
        primaryStage.setTitle("Blur Image on Screenshot");
        primaryStage.setScene(scene);
        primaryStage.show();

        // Key combination to trigger the screenshot and blur effect  (simulate the screenshot effect by ctrl+s)
        KeyCombination screenshotKeyCombination = new KeyCodeCombination(KeyCode.S, KeyCombination.CONTROL_DOWN);

        scene.setOnKeyPressed(event -> {
            if (screenshotKeyCombination.match(event)) {
                try {
                    // Capture the screenshot of the entire screen
                    Rectangle screenRect = new Rectangle(Toolkit.getDefaultToolkit().getScreenSize());
                    BufferedImage screenCapture = new Robot().createScreenCapture(screenRect);
                    WritableImage screenshot = SwingFXUtils.toFXImage(screenCapture, null);

                    // Apply Gaussian Blur to the screenshot with increased intensity
                    ImageView screenshotView = new ImageView(screenshot);
                    screenshotView.setEffect(new GaussianBlur(30)); // Increased blur radius

                    // Save the blurred screenshot
                    WritableImage blurredScreenshot = new WritableImage((int) screenRect.getWidth(), (int) screenRect.getHeight());
                    screenshotView.snapshot(null, blurredScreenshot);
                    File file = new File("blurred_screenshot.png");
                    ImageIO.write(SwingFXUtils.fromFXImage(blurredScreenshot, null), "png", file);

                    // Display the blurred screenshot in the application
                    root.getChildren().add(screenshotView);
                } catch (AWTException | IOException e) {
                    e.printStackTrace();
                }
            }
        });
    }

    public static void main(String[] args) {
        launch(args);
    }
}