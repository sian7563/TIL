//
//  ThirdViewController.swift
//  Diary
//
//  Created by kimsian on 2021/07/18.
//
import UIKit

class ThirdViewControllder: UIViewController {

    
    @IBAction func close(_ sender: Any) {
        dismiss(animated: true, completion: nil)
    }
    
    
    @IBOutlet weak var diaryTextView: UITextView!
    
    @IBAction func save(_ sender: Any) {
    
    guard let diary = diaryTextView.text , diary.count > 0 else {
            return
    }
    
    }
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }
}
