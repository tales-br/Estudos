package br.tales.native_resources.ui

import android.Manifest
import android.annotation.SuppressLint
import android.content.ContentValues
import android.content.Intent
import android.content.pm.PackageManager
import android.net.Uri
import android.os.Build
import android.os.Bundle
import android.provider.MediaStore
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import br.tales.native_resources.databinding.ActivityImageBinding

@SuppressLint("StaticFieldLeak")
private lateinit var imageBinding: ActivityImageBinding

class Image  : AppCompatActivity() {

    // URI - Unified Resource Identifier
    //Variável global que auxilia no registro da imagem da camera
    private var imageUri: Uri? = null

    companion object
    {
        private const val PERMISSION_IMG_CODE = 1
        private const val IMG_PICK_CODE = 11

        private const val PERMISSION_CAMERA_CODE = 2
        private const val OPEN_CAMERA_CODE = 22
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        imageBinding = ActivityImageBinding.inflate(layoutInflater)
        val imageView = imageBinding.root
        setContentView(imageView)

        setListeners()

    }

    private fun setListeners()
    {
        imageBinding.btImgChange.setOnClickListener {

            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) //Foi a partir da SDK Marshmallow que começaram as permissões
            {
                if(checkSelfPermission(Manifest.permission.READ_EXTERNAL_STORAGE) == PackageManager.PERMISSION_DENIED)
                {
                    val permission = arrayOf(Manifest.permission.READ_EXTERNAL_STORAGE)
                    requestPermissions(permission, PERMISSION_IMG_CODE)
                }
                else
                {
                    pickImgFromGallery()
                }
            }
            else
            {
                pickImgFromGallery()
            }
        }

        imageBinding.btImgPhoto.setOnClickListener{

            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M)
            {
                if(checkSelfPermission(Manifest.permission.CAMERA) == PackageManager.PERMISSION_DENIED || checkSelfPermission(Manifest.permission.WRITE_EXTERNAL_STORAGE) == PackageManager.PERMISSION_DENIED)
                {
                    val permission = arrayOf(Manifest.permission.CAMERA, Manifest.permission.WRITE_EXTERNAL_STORAGE)
                    requestPermissions(permission, PERMISSION_CAMERA_CODE)
                }
                else
                {
                    openCamera()
                }
            }
            else
            {
                openCamera()
            }
        }
    }

    override fun onRequestPermissionsResult(
        requestCode: Int,
        permissions: Array<out String>,
        grantResults: IntArray
    )
    {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults)

        when (requestCode)
        {
            PERMISSION_IMG_CODE ->
            {
                if(grantResults.isNotEmpty() && grantResults[0] == PackageManager.PERMISSION_GRANTED)
                {
                    pickImgFromGallery()
                }
                else
                {
                    Toast.makeText(this,"Permissão negada!",Toast.LENGTH_SHORT).show()
                }
            }

            PERMISSION_CAMERA_CODE ->
            {
                if(grantResults.size > 1  && grantResults[0] == PackageManager.PERMISSION_GRANTED && grantResults[1] == PackageManager.PERMISSION_GRANTED)
                {
                    openCamera()
                }
                else
                {
                    Toast.makeText(this,"Permissão negada!",Toast.LENGTH_SHORT).show()
                }
            }
        }

    }

    private fun openCamera()
    {
        val values = ContentValues()
        values.put(MediaStore.Images.Media.TITLE, "Nova foto")
        values.put(MediaStore.Images.Media.DESCRIPTION, "Capturado da camera")
        imageUri = contentResolver.insert(MediaStore.Images.Media.EXTERNAL_CONTENT_URI, values)

        val intentCamera = Intent(MediaStore.ACTION_IMAGE_CAPTURE)
        intentCamera.putExtra(MediaStore.EXTRA_OUTPUT, imageUri)

        startActivityForResult(intentCamera, OPEN_CAMERA_CODE)
    }

    private fun pickImgFromGallery()
    {
        val intentImg = Intent(Intent.ACTION_PICK)
        intentImg.type = "image/*"
        startActivityForResult(intentImg, IMG_PICK_CODE)
    }

    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)
        if(resultCode == RESULT_OK && requestCode == IMG_PICK_CODE)
        {
            imageBinding.ivImgActivity.setImageURI(data?.data)
        }

        if(resultCode == RESULT_OK && requestCode == OPEN_CAMERA_CODE)
        {
            imageBinding.ivImgActivity.setImageURI(imageUri)
        }
    }

}