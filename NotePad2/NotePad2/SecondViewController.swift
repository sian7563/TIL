//
//  SecondViewController.swift
//  NotePad2
//
//  Created by kimsian on 2021/06/01.
//

import UIKit

class SecondViewController: UIViewController {

    
 
    @IBAction func close(_ sender: Any) {
    
    dismiss(animated: true, completion: nil)
    
    }
    
    @IBOutlet weak var memoTextView: UITextView!
    
    @IBAction func save(_ sender: Any) {
        guard let memo = memoTextView.text, memo.count > 0 else {
            
            return
        }
        
        let newMemo = Memo(content: memo)
        Memo.dummyMemoList.append(newMemo)
            
    }
    
    
    
    
    
    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */

}
