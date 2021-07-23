//
//  SecondTableViewController.swift
//  NotePad2
//
//  Created by kimsian on 2021/06/01.
//

import UIKit

class SecondTableViewController: UITableViewController {
    
    let formatter: DateFormatter = {
        let f = DateFormatter ()
        f.dateStyle = .long
        f.timeStyle = .short
        return f
    }()

    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
        tableView.reloadData()
        print(#function)
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        // #warning Incomplete implementation, return the number of rows
        
        return Memo.dummyMemoList.count
    }
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) ->
    UITableViewCell{
        let cell = tableView.dequeueReusableCell(withIdentifier: "cell", for: indexPath)
        let target = Memo.dummyMemoList[indexPath.row]
        cell.textLabel?.text = target.content
       
    cell.detailTextLabel?.text = formatter.string(from: target.insertDate)
    
        return cell
    }
}
