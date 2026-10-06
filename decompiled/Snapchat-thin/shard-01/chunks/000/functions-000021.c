/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c38020; end: 100c3825b;  */

void FUN_100c38020(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  func_0x000107c61174();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
    goto LAB_100c381b0;
  }
  lVar1 = param_1;
  func_0x000107c4f3b8();
  func_0x000107c61180();
  lVar8 = param_1;
  func_0x000107c4f3d0(param_1);
  func_0x000107c61180();
  lVar2 = lVar8;
  func_0x000107c49804();
  func_0x000107c61170(lVar8);
  lVar8 = param_1;
  func_0x000107c4f3d4(param_1);
  func_0x000107c61180();
  lVar3 = lVar8;
  func_0x000107c49804();
  func_0x000107c61170(lVar8);
  lVar8 = param_1;
  func_0x000107c4f360(param_1);
  func_0x000107c61180();
  lVar4 = lVar8;
  func_0x000107c49804();
  func_0x000107c61170(lVar8);
  lVar8 = param_1;
  func_0x000107c415c0(param_1);
  func_0x000107c61180();
  lVar5 = lVar8;
  func_0x000107c49804();
  func_0x000107c61170(lVar8);
  if (lVar1 == 0) {
LAB_100c38120:
    lVar8 = 0;
  }
  else {
    lVar8 = lVar1;
    func_0x000107c4c078();
    func_0x000107c61180();
    lVar6 = lVar8;
    func_0x000107c49804();
    func_0x000107c61170(lVar8);
    if ((int)lVar6 != 0) goto LAB_100c38120;
    lVar8 = lVar1;
    func_0x000107c4c074();
    func_0x000107c61180();
  }
  puVar7 = PTR_PTR_1126bb3e8;
  func_0x000107c610f4(PTR_PTR_1126bb3e8);
  lVar6 = param_1;
  func_0x000107c5d238(param_1);
  func_0x000107c61180();
  func_0x000107c46f5c(puVar7,param_2,(int)lVar2 == 3,lVar6,lVar2,lVar3,0 < (int)lVar4,lVar5,0);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar1);
LAB_100c381b0:
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100c3825c; end: 100c38597;  */

void FUN_100c3825c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c4275c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4adac();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f4();
    lVar1 = param_1;
    func_0x000107c4275c(param_1);
    func_0x000107c61180();
    func_0x000107c45920(puVar3,param_2,lVar1,0);
    func_0x000107c61170(lVar1);
    puVar8 = puVar3;
    func_0x000107c4adac();
    if (puVar8 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126db2c8;
      func_0x000107c610f4();
      func_0x000107c4636c();
      func_0x000107c61174(0);
      puVar8 = (undefined *)0x0;
      if (puVar4 != (undefined *)0x0) {
        puVar8 = puVar4;
        func_0x000107c44a24();
        if ((int)puVar8 == 0) {
          puVar7 = (undefined *)0x0;
        }
        else {
          puVar8 = puVar4;
          func_0x000107c4e688();
          func_0x000107c61180();
          puVar5 = puVar8;
          func_0x000107c50100();
          func_0x000107c61180();
          puVar7 = puVar5;
          func_0x000107c4adac();
          if (puVar7 == (undefined *)0x0) {
            puVar7 = (undefined *)0x0;
          }
          else {
            puVar9 = puVar4;
            func_0x000107c4e688(puVar4);
            func_0x000107c61180();
            puVar7 = puVar9;
            func_0x000107c50100();
            func_0x000107c61180();
            func_0x000107c61170(puVar9);
          }
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar8);
        }
        puVar8 = puVar4;
        func_0x000107c5aa70(puVar4);
        func_0x000107c61180();
        func_0x000107c44e28();
        func_0x000107c61170(puVar8);
        puVar8 = puVar4;
        func_0x000107c4e688();
        func_0x000107c61180();
        puVar5 = puVar8;
        func_0x000107c3e238();
        func_0x000107c61180();
        puVar9 = puVar5;
        func_0x000107c4adac();
        if (puVar9 == (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
        }
        else {
          puVar6 = puVar4;
          func_0x000107c4e688(puVar4);
          func_0x000107c61180();
          puVar9 = puVar6;
          func_0x000107c3e238();
          func_0x000107c61180();
          func_0x000107c61170(puVar6);
        }
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar8);
        puVar8 = PTR_PTR_1126db2d0;
        func_0x000107c610f4(PTR_PTR_1126db2d0);
        func_0x000107c47e7c();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar7);
      }
      func_0x000107c61170(puVar4);
      func_0x000107c61170(0);
    }
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100c38598; end: 100c3871f;  */

void FUN_100c38598(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000107c4f3cc();
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar1 = param_1;
    func_0x000107c4a1e0();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c3ebcc();
    if ((uVar2 & 1) != 0) goto LAB_100c385e8;
    uVar2 = param_1;
    func_0x000107c4a060();
    func_0x000107c61180();
    uVar5 = uVar2;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    if ((uVar5 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_100c38678;
    }
  }
  else {
LAB_100c385e8:
    func_0x000107c61170(uVar1);
  }
  puVar6 = PTR_PTR_1126db2d8;
  func_0x000107c610f4(PTR_PTR_1126db2d8);
  uVar1 = param_1;
  func_0x000107c4f3cc(param_1);
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c4a1e0(param_1);
  func_0x000107c61180();
  uVar5 = uVar2;
  func_0x000107c3ebcc();
  uVar3 = param_1;
  func_0x000107c4a060(param_1);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c3ebcc();
  func_0x000107c4816c(puVar6,param_2,uVar1,uVar5,uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
LAB_100c38678:
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100c38720; end: 100c387e3;  */

void FUN_100c38720(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c51648();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4adac();
  func_0x000107c61170(lVar1);
  puVar3 = (undefined *)0x0;
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126db2e0;
    func_0x000107c610f4(PTR_PTR_1126db2e0);
    lVar1 = param_1;
    func_0x000107c51648(param_1);
    func_0x000107c61180();
    func_0x000107c48474(puVar3,param_2,lVar1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c387e4; end: 100c387ef; -[SCSnapchatterChangeRequest table] */

undefined * FUN_100c387e4(void)

{
  return &DAT_10f31d310;
}



/* Entry: 100c387f0; end: 100c38963; -[SCSnapchatterChangeRequest createTableWithSQLite:] */

void FUN_100c387f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  func_0x000107c613a0(param_3,&UNK_10df966c2,0x79,&uStack_28,0);
  if ((int)uVar1 == 0) {
    func_0x000107c613a8(uStack_28);
    func_0x000107c61388(uStack_28);
  }
  uVar1 = param_3;
  func_0x000107c613a0(param_3,&UNK_10df9673b,0x62,&uStack_30,0);
  if ((int)uVar1 == 0) {
    func_0x000107c613a8(uStack_30);
    func_0x000107c61388(uStack_30);
    uVar1 = param_3;
    func_0x000107c613a0(param_3,&UNK_10df9679d,0x6a,&uStack_38,0);
    if ((int)uVar1 == 0) {
      func_0x000107c613a8(uStack_38);
      func_0x000107c61388(uStack_38);
    }
  }
  uVar1 = param_3;
  func_0x000107c613a0(param_3,&UNK_10df96807,0x70,&uStack_30,0);
  if ((int)uVar1 == 0) {
    func_0x000107c613a8(uStack_30);
    func_0x000107c61388(uStack_30);
    uVar1 = param_3;
    func_0x000107c613a0(param_3,&UNK_10df96877,0x7f,&uStack_38,0);
    if ((int)uVar1 == 0) {
      func_0x000107c613a8(uStack_38);
      func_0x000107c61388(uStack_38);
    }
  }
  uVar1 = param_3;
  func_0x000107c613a0(param_3,&UNK_10df968f6,0x6e,&uStack_30,0);
  if ((int)uVar1 == 0) {
    func_0x000107c613a8(uStack_30);
    func_0x000107c61388(uStack_30);
    func_0x000107c613a0(param_3,&UNK_10df96964,0x7c,&uStack_38,0);
    if ((int)param_3 == 0) {
      func_0x000107c613a8(uStack_38);
      func_0x000107c61388(uStack_38);
    }
  }
  return;
}



/* Entry: 100c38964; end: 100c393d3; -[SCSnapchatterChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_100c38964(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar7 = param_1;
  if (iVar3 == 1) {
    FUN_100c393d4(param_1);
    func_0x000107c61180();
    lVar8 = param_4;
    FUN_100c39490(param_4,puVar7);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    puVar9 = PTR_PTR_1126b04a8;
    func_0x000107c421f0();
    func_0x000107c61180();
    puVar11 = puVar9;
    func_0x000107c41220();
    func_0x000105660a60();
    func_0x000107c61170(puVar9);
    lVar8 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f50c3b3);
    if (lVar8 == 0) goto LAB_100c392d0;
    func_0x000107c61324(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                        (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                        *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    func_0x000107c61338(lVar8,2,puVar2 + 1,*puVar2,0);
    func_0x000107c613a8();
    if ((int)lVar8 != 0x65) goto LAB_100c392d0;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    func_0x000107c61394();
    if (((ulong)puVar11 & 1) != 0) {
      lVar8 = param_3;
      func_0x0001001b9e08(param_3,&UNK_10f50c1b5);
      func_0x000107c6132c();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
        func_0x000107c61330(lVar8,2);
      }
      else {
        puVar13 = (uint *)((long)piVar1 + uVar10);
        puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
        func_0x000107c61338(lVar8,2,puVar2 + 1,*puVar2,0);
      }
      func_0x000107c613a8();
      if ((int)lVar8 != 0x65) goto LAB_100c392d0;
    }
    if (((uint)puVar11 >> 8 & 1) != 0) {
      lVar8 = param_3;
      func_0x0001001b9e08(param_3,&UNK_10f50c1fd);
      func_0x000107c6132c();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x21) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x10], uVar10 == 0)) {
        func_0x000107c61330(lVar8,2);
      }
      else {
        puVar13 = (uint *)((long)piVar1 + uVar10);
        puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
        func_0x000107c61338(lVar8,2,puVar2 + 1,*puVar2,0);
      }
      func_0x000107c613a8();
      if ((int)lVar8 != 0x65) goto LAB_100c392d0;
    }
    if (((uint)puVar11 >> 0x10 & 1) != 0) {
      func_0x0001001b9e08(param_3,&UNK_10f50c253);
      func_0x000107c6132c();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x23) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x11], uVar10 == 0)) {
        func_0x000107c61330(param_3,2);
      }
      else {
        puVar13 = (uint *)((long)piVar1 + uVar10);
        puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
        func_0x000107c61338(param_3,2,puVar2 + 1,*puVar2,0);
      }
      func_0x000107c613a8();
      if ((int)param_3 != 0x65) goto LAB_100c392d0;
    }
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x000107c57f38(puVar7);
    puVar9 = PTR_PTR_1126b04a8;
    func_0x000107c421f0(PTR_PTR_1126b04a8);
    func_0x000107c61180();
    func_0x000107c61158(PTR_PTR_1126b15c8);
    func_0x000107c5a210(puVar9);
    puVar11 = puVar7;
LAB_100c392a8:
    func_0x000107c61170(puVar9);
    func_0x000107c61174(puVar11);
    puVar7 = puVar11;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar8 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f50c2e0);
        if (lVar8 != 0) {
          func_0x000107c6132c();
          func_0x000107c613a8();
          if ((int)lVar8 == 0x65) {
            lVar8 = param_3;
            func_0x0001001b9e08(param_3,&UNK_10f50c307);
            if (lVar8 != 0) {
              func_0x000107c6132c();
              func_0x000107c613a8();
              if ((int)lVar8 != 0x65) goto LAB_100c38afc;
            }
            lVar8 = param_3;
            func_0x0001001b9e08(param_3,&UNK_10f50c33c);
            if (lVar8 != 0) {
              func_0x000107c6132c();
              func_0x000107c613a8();
              if ((int)lVar8 != 0x65) goto LAB_100c38afc;
            }
            func_0x0001001b9e08(param_3,&UNK_10f50c378);
            if (param_3 != 0) {
              func_0x000107c6132c();
              func_0x000107c613a8();
              if ((int)param_3 != 0x65) goto LAB_100c38afc;
            }
            puVar7 = PTR_PTR_1126b04a8;
            func_0x000107c421f0(PTR_PTR_1126b04a8);
            func_0x000107c61180();
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
            func_0x000107c61180();
            func_0x000107c61158(PTR_PTR_1126b15c8);
            func_0x000107c5a210(puVar7);
            func_0x000107c61170(puVar9);
            func_0x000107c61170(puVar7);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
            func_0x000107c61180();
            goto LAB_100c392dc;
          }
        }
      }
LAB_100c38afc:
      puVar11 = (undefined *)0x0;
      goto LAB_100c392dc;
    }
    FUN_100c393d4();
    func_0x000107c61180();
    lVar8 = param_4;
    FUN_100c39490(param_4,puVar7);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    func_0x000107c61174(puVar7);
    lVar8 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f50c3e7);
    if (lVar8 != 0) {
      func_0x000107c61324(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                          (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                          *(int *)(param_4 + 0x28),0);
      func_0x000107c6132c(lVar8,2,uVar12);
      piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
      puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
      func_0x000107c61338(lVar8,3,puVar2 + 1,*puVar2,0);
      func_0x000107c613a8();
      if ((int)lVar8 == 0x65) {
        puVar9 = PTR_PTR_1126b04a8;
        func_0x000107c421f0();
        func_0x000107c61180();
        func_0x000107c61158(PTR_PTR_1126b15c8);
        puVar11 = puVar9;
        func_0x000107c4d9b8();
        func_0x000107c61180();
        func_0x000107c61170(puVar9);
        puVar9 = puVar11;
        func_0x000107c5db08();
        func_0x000107c61180();
        puVar5 = puVar7;
        func_0x000107c5db08();
        func_0x000107c61180();
        func_0x000107c61174(puVar9);
        func_0x000107c61174(puVar5);
        if (puVar9 == (undefined *)0x0 && puVar5 == (undefined *)0x0) {
LAB_100c38fc0:
          puVar9 = puVar11;
          func_0x000107c4d2ec();
          func_0x000107c61180();
          puVar5 = puVar7;
          func_0x000107c4d2ec();
          func_0x000107c61180();
          func_0x000107c61174(puVar9);
          func_0x000107c61174(puVar5);
          if (puVar9 != (undefined *)0x0 || puVar5 != (undefined *)0x0) {
            if ((puVar9 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) {
              func_0x000107c61170(puVar5);
              func_0x000107c61170(puVar9);
              func_0x000107c61170(puVar5);
              func_0x000107c61170(puVar9);
            }
            else {
              puVar6 = puVar9;
              func_0x000107c49d0c();
              func_0x000107c61170(puVar5);
              func_0x000107c61170(puVar9);
              func_0x000107c61170(puVar5);
              func_0x000107c61170(puVar9);
              if (((ulong)puVar6 & 1) != 0) goto LAB_100c390e0;
            }
            lVar8 = param_3;
            func_0x0001001b9e08(param_3,&UNK_10f50c46d);
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x21) ||
               (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x10], uVar10 == 0)) {
              func_0x000107c61330(lVar8,1);
            }
            else {
              puVar13 = (uint *)((long)piVar1 + uVar10);
              puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
              func_0x000107c61338(lVar8,1,puVar2 + 1,*puVar2,0);
            }
            func_0x000107c6132c(lVar8,2,uVar12);
            func_0x000107c613a8();
            if ((int)lVar8 != 0x65) goto LAB_100c392c0;
          }
LAB_100c390e0:
          puVar9 = puVar11;
          func_0x000107c4ad90();
          func_0x000107c61180();
          puVar5 = puVar7;
          func_0x000107c4ad90();
          func_0x000107c61180();
          func_0x000107c61174(puVar9);
          func_0x000107c61174(puVar5);
          if (puVar9 != (undefined *)0x0 || puVar5 != (undefined *)0x0) {
            if ((puVar9 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) {
              func_0x000107c61170(puVar5);
              func_0x000107c61170(puVar9);
              func_0x000107c61170(puVar5);
              func_0x000107c61170(puVar9);
            }
            else {
              puVar6 = puVar9;
              func_0x000107c49d0c();
              func_0x000107c61170(puVar5);
              func_0x000107c61170(puVar9);
              func_0x000107c61170(puVar5);
              func_0x000107c61170(puVar9);
              if (((ulong)puVar6 & 1) != 0) goto LAB_100c39264;
            }
            func_0x0001001b9e08(param_3,&UNK_10f50c4c3);
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x23) ||
               (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x11], uVar10 == 0)) {
              func_0x000107c61330(param_3,1);
            }
            else {
              puVar13 = (uint *)((long)piVar1 + uVar10);
              puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
              func_0x000107c61338(param_3,1,puVar2 + 1,*puVar2,0);
            }
            func_0x000107c6132c(param_3,2,uVar12);
            func_0x000107c613a8();
            if ((int)param_3 != 0x65) goto LAB_100c392c0;
          }
LAB_100c39264:
          func_0x000107c61170(puVar11);
          func_0x000107c61170(puVar7);
          puVar9 = PTR_PTR_1126b04a8;
          func_0x000107c421f0(PTR_PTR_1126b04a8);
          func_0x000107c61180();
          func_0x000107c61158(PTR_PTR_1126b15c8);
          func_0x000107c5a210(puVar9);
          puVar11 = puVar7;
          goto LAB_100c392a8;
        }
        if ((puVar9 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) {
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar9);
        }
        else {
          puVar6 = puVar9;
          func_0x000107c49d0c();
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar9);
          if (((ulong)puVar6 & 1) != 0) goto LAB_100c38fc0;
        }
        lVar8 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f50c425);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
           (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
          func_0x000107c61330(lVar8,1);
        }
        else {
          puVar13 = (uint *)((long)piVar1 + uVar10);
          puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
          func_0x000107c61338(lVar8,1,puVar2 + 1,*puVar2,0);
        }
        func_0x000107c6132c(lVar8,2,uVar12);
        func_0x000107c613a8();
        if ((int)lVar8 == 0x65) goto LAB_100c38fc0;
LAB_100c392c0:
        func_0x000107c61170(puVar11);
      }
    }
    func_0x000107c61170(puVar7);
LAB_100c392d0:
    puVar11 = (undefined *)0x0;
  }
  func_0x000107c61170(puVar7);
LAB_100c392dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 100c393d4; end: 100c3948f;  */

void FUN_100c393d4(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b15c8;
    func_0x000107c610f4(PTR_PTR_1126b15c8);
    func_0x000107c49278();
    func_0x000107c57f38();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c39490; end: 100c3ac07;  */

ulong FUN_100c39490(ulong param_1,ulong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  ulong uVar7;
  undefined ***pppuVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  undefined4 *puVar33;
  undefined *puVar34;
  undefined8 uVar35;
  long lVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  long lVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined4 *puStack_200;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  ulong uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined *puStack_160;
  long lStack_158;
  long *plStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  code *pcStack_118;
  undefined ***pppuStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  char *pcStack_d8;
  undefined4 uStack_d0;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  ppuStack_120 = &PTR_DAT_110ab8e58;
  pcStack_118 = FUN_100c4d3c4;
  pppuStack_108 = &ppuStack_120;
  uVar7 = param_2;
  func_0x000107c43a60();
  func_0x000107c61180();
  func_0x000107c61174();
  uVar40 = 0;
  lStack_158 = 0;
  puStack_160 = (undefined *)0x0;
  puStack_148 = (undefined *)0x0;
  plStack_150 = (long *)0x0;
  puStack_138 = (undefined8 *)0x0;
  puStack_140 = (undefined8 *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  func_0x000107c61174(uVar7);
  uVar30 = uVar7;
  func_0x000107c4080c();
  if (uVar30 == 0) {
    puStack_200 = (undefined4 *)0x0;
    puVar38 = (undefined4 *)0x0;
  }
  else {
    puStack_200 = (undefined4 *)0x0;
    puVar38 = (undefined4 *)0x0;
    puVar33 = (undefined4 *)0x0;
    lVar39 = *plStack_150;
    do {
      uVar31 = 0;
      do {
        if (*plStack_150 != lVar39) {
          func_0x000107c61128(uVar7);
        }
        puVar34 = *(undefined **)(lStack_158 + uVar31 * 8);
        func_0x000107c61174(puVar34);
        func_0x000107c61174(puVar34);
        puStack_1b8 = puVar34;
        if (pppuStack_108 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_100c3a830;
        }
        pppuVar8 = pppuStack_108;
        (*(code *)(*pppuStack_108)[6])(pppuStack_108,param_1,&puStack_1b8);
        func_0x000107c61170(puStack_1b8);
        if (puVar38 < puVar33) {
          *puVar38 = (int)pppuVar8;
          puVar37 = puStack_200;
        }
        else {
          lVar36 = (long)puVar38 - (long)puStack_200;
          uVar10 = (lVar36 >> 2) + 1;
          if (uVar10 >> 0x3e != 0) {
            func_0x000108c30dac();
LAB_100c3a830:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100c3a834);
            (*pcVar6)();
          }
          uVar32 = (long)puVar33 - (long)puStack_200 >> 1;
          if (uVar32 <= uVar10) {
            uVar32 = uVar10;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar33 - (long)puStack_200)) {
            uVar32 = 0x3fffffffffffffff;
          }
          if (uVar32 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_100c3a830;
          }
          lVar9 = uVar32 << 2;
          func_0x000107c60e20();
          puVar38 = (undefined4 *)(lVar9 + lVar36);
          puVar33 = (undefined4 *)(lVar9 + uVar32 * 4);
          puVar37 = puVar38 + -(lVar36 >> 2);
          *puVar38 = (int)pppuVar8;
          func_0x000107c610b4(puVar37,puStack_200,lVar36);
          if (puStack_200 != (undefined4 *)0x0) {
            func_0x000107c60e14(puStack_200);
          }
        }
        puStack_200 = puVar37;
        puVar38 = puVar38 + 1;
        func_0x000107c61170(puVar34);
        uVar31 = uVar31 + 1;
      } while (uVar30 != uVar31);
      uVar30 = uVar7;
      func_0x000107c4080c();
    } while (uVar30 != 0);
  }
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar7);
  if (pppuStack_108 == &ppuStack_120) {
    lVar39 = 0x20;
  }
  else {
    if (pppuStack_108 == (undefined ***)0x0) goto LAB_100c396c0;
    lVar39 = 0x28;
  }
  (**(code **)((long)*pppuStack_108 + lVar39))();
LAB_100c396c0:
  uVar7 = param_2;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (uVar7 == 0) {
    uStack_248 = 0;
  }
  else {
    uVar30 = param_2;
    func_0x000107c3e9e8(param_2);
    func_0x000107c61180();
    uStack_248 = param_1;
    func_0x000108c308f8(param_1,uVar30);
    func_0x000107c61170(uVar30);
    uStack_248 = uStack_248 & 0xffffffff;
  }
  func_0x000107c61170(uVar7);
  uVar7 = param_2;
  func_0x000107c439a8();
  func_0x000107c61180();
  if (uVar7 == 0) {
    uStack_210 = 0;
  }
  else {
    uVar30 = param_2;
    func_0x000107c439a8(param_2);
    func_0x000107c61180();
    func_0x000107c61174();
    uVar31 = uVar30;
    func_0x000107c5c3a4(uVar30);
    func_0x000107c61180();
    puStack_1d0 = &uStack_180;
    uStack_180 = 0;
    uStack_170 = 0x2020000000;
    uStack_168 = 0;
    puStack_1c8 = &uStack_100;
    uStack_100 = 0;
    uStack_f0 = 0x3812000000;
    puStack_e8 = &UNK_108c30e6c;
    puStack_e0 = &UNK_108c30e78;
    pcStack_d8 = "";
    uStack_d0 = 0;
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uVar40 = 0xc2000000;
    lStack_158 = 0xc2000000;
    plStack_150 = (long *)&UNK_108c30e7c;
    puStack_148 = &UNK_110ab8ef8;
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_1b0 = (undefined *)0xc2000000;
    puStack_1a8 = &UNK_108c3102c;
    puStack_1a0 = &UNK_110ab8f28;
    puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e8 = 0xc2000000;
    pcStack_1e0 = FUN_100c3ac0c;
    puStack_1d8 = &UNK_110ab8f58;
    uStack_1c0 = param_1;
    puStack_198 = puStack_1d0;
    puStack_190 = puStack_1c8;
    uStack_188 = param_1;
    puStack_178 = puStack_1d0;
    puStack_140 = puStack_1d0;
    puStack_138 = puStack_1c8;
    uStack_130 = param_1;
    puStack_f8 = puStack_1c8;
    func_0x000107c4c628();
    uVar1 = *(uint *)(puStack_178 + 3);
    uVar2 = *(undefined4 *)(puStack_f8 + 6);
    func_0x000107c60bcc(&uStack_100,8);
    func_0x000107c60bcc(&uStack_180,8);
    func_0x000107c61170(uVar31);
    func_0x000107c3d6c0(uVar30);
    uVar31 = uVar30;
    uVar41 = uVar40;
    func_0x000107c3f430(uVar30);
    uVar10 = uVar30;
    func_0x000107c4a528(uVar30);
    func_0x000107c4aa00(uVar30);
    uVar32 = uVar30;
    func_0x000107c4a584(uVar30);
    uVar11 = uVar30;
    func_0x000107c499dc(uVar30);
    func_0x000107c4b65c(uVar30);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar3 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x28);
    func_0x0001001ce11c(param_1,0x14);
    func_0x0001001ce11c(uVar41,0,param_1,0xe);
    func_0x0001001ce11c(uVar40,0,param_1,8);
    FUN_100c3b11c(param_1,6,uVar2);
    func_0x000100ab13ac(param_1,0x12,uVar11,0);
    func_0x000100ab13ac(param_1,0x10,uVar32,0);
    func_0x000100ab13ac(param_1,0xc,uVar10,0);
    func_0x000100ab13ac(param_1,10,uVar31,0);
    func_0x000100ab13ac(param_1,4,uVar1 & 0xff,0);
    uStack_210 = param_1;
    func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar30);
    uStack_210 = uStack_210 & 0xffffffff;
  }
  func_0x000107c61170(uVar7);
  uVar7 = param_2;
  func_0x000107c452e8();
  func_0x000107c61180();
  if (uVar7 == 0) {
    uStack_218 = 0;
  }
  else {
    uVar30 = param_2;
    func_0x000107c452e8();
    func_0x000107c61180();
    func_0x000107c61174();
    uVar31 = uVar30;
    func_0x000107c3d888();
    func_0x000107c61180();
    uVar10 = param_1;
    FUN_100c3b18c(param_1,uVar31);
    func_0x000107c3d958(uVar30);
    uVar32 = uVar30;
    uVar41 = uVar40;
    func_0x000107c49dec();
    uVar11 = uVar30;
    func_0x000107c49df0();
    func_0x000107c4f8d0(uVar30);
    uVar12 = uVar30;
    func_0x000107c44a80(uVar30);
    uVar13 = uVar30;
    func_0x000107c49eb8(uVar30);
    uVar14 = uVar30;
    func_0x000107c40254(uVar30);
    uVar15 = uVar30;
    func_0x000107c45220(uVar30);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar3 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x28);
    func_0x0001001ce1c8(param_1,0x16,uVar15,0);
    func_0x0001001ce11c(uVar41,0,param_1,0xe);
    func_0x0001001ce11c(uVar40,0,param_1,6);
    func_0x0001001ce2e4(param_1,4,uVar10 & 0xffffffff);
    func_0x000100ab13ac(param_1,0x14,uVar14,0);
    func_0x000100ab13ac(param_1,0x12,uVar13,0);
    func_0x000100ab13ac(param_1,0x10,uVar12,0);
    func_0x000100ab13ac(param_1,10,uVar11 & 0xffffffff,0);
    func_0x000100ab13ac(param_1,8,uVar32 & 0xffffffff,0);
    uStack_218 = param_1;
    func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
    func_0x000107c61170(uVar31);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar30);
    uStack_218 = uStack_218 & 0xffffffff;
  }
  func_0x000107c61170(uVar7);
  uVar7 = param_2;
  func_0x000107c5c3fc();
  func_0x000107c61180();
  if (uVar7 == 0) {
    uStack_220 = 0;
  }
  else {
    uVar30 = param_2;
    func_0x000107c5c3fc();
    func_0x000107c61180();
    func_0x000107c61174();
    uVar31 = uVar30;
    func_0x000107c5c3dc();
    func_0x000107c61180();
    uVar10 = param_1;
    FUN_100c3b18c();
    uVar32 = uVar30;
    func_0x000107c3ce90();
    func_0x000107c61180();
    uVar11 = param_1;
    FUN_100c3b18c(param_1);
    uVar12 = uVar30;
    func_0x000107c5c404(uVar30);
    func_0x000107c61180();
    uVar13 = param_1;
    FUN_100c3b18c(param_1,uVar12);
    uVar14 = uVar30;
    func_0x000107c4a720();
    uVar15 = uVar30;
    func_0x000107c4a2ec(uVar30);
    uVar16 = uVar30;
    func_0x000107c49eb4(uVar30);
    uVar17 = uVar30;
    func_0x000107c45220(uVar30);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar3 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x28);
    func_0x0001001ce1c8(param_1,0x12,uVar17,0);
    func_0x0001001ce2e4(param_1,8,uVar13 & 0xffffffff);
    func_0x0001001ce2e4(param_1,6,uVar11 & 0xffffffff);
    func_0x0001001ce2e4(param_1,4,uVar10 & 0xffffffff);
    func_0x000100ab13ac(param_1,0x10,uVar16,0);
    func_0x000100ab13ac(param_1,0xe,uVar15,0);
    func_0x000100ab13ac(param_1,10,uVar14 & 0xffffffff,0);
    uStack_220 = param_1;
    func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar32);
    func_0x000107c61170(uVar31);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar30);
    uStack_220 = uStack_220 & 0xffffffff;
  }
  func_0x000107c61170(uVar7);
  uVar7 = param_2;
  func_0x000107c40328();
  func_0x000107c61180();
  if (uVar7 == 0) {
    uStack_228 = 0;
  }
  else {
    uVar30 = param_2;
    func_0x000107c40328();
    func_0x000107c61180();
    func_0x000107c61174();
    uVar31 = uVar30;
    func_0x000107c4e6d0();
    func_0x000107c61180();
    func_0x000107c61174();
    puStack_1b0 = (undefined *)0x0;
    puStack_1a8 = (undefined *)0x0;
    puStack_1b8 = (undefined *)0x0;
    lStack_158 = 0;
    puStack_160 = (undefined *)0x0;
    puStack_148 = (undefined *)0x0;
    plStack_150 = (long *)0x0;
    puStack_138 = (undefined8 *)0x0;
    puStack_140 = (undefined8 *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    func_0x000107c61174(uVar31);
    uVar10 = uVar31;
    func_0x000107c4080c();
    if (uVar10 != 0) {
      lVar39 = *plStack_150;
      do {
        uVar32 = 0;
        do {
          if (*plStack_150 != lVar39) {
            func_0x000107c61128(uVar31);
          }
          uVar11 = param_1;
          FUN_100c3b18c(param_1,*(undefined8 *)(lStack_158 + uVar32 * 8));
          puStack_1f0 = (undefined *)CONCAT44(puStack_1f0._4_4_,(int)uVar11);
          if ((int)uVar11 != 0) {
            FUN_100c47d40(&puStack_1b8,&puStack_1f0);
          }
          uVar32 = uVar32 + 1;
        } while (uVar10 != uVar32);
        uVar10 = uVar31;
        func_0x000107c4080c();
      } while (uVar10 != 0);
    }
    func_0x000107c61170(uVar31);
    func_0x000107c61170(uVar31);
    func_0x000107c61170(uVar31);
    puVar34 = (undefined *)0x1130c2400;
    if ((long)puStack_1b0 - (long)puStack_1b8 != 0) {
      puVar34 = puStack_1b8;
    }
    uVar31 = param_1;
    FUN_100c47e34(param_1,puVar34,(long)puStack_1b0 - (long)puStack_1b8 >> 2);
    uVar10 = uVar30;
    func_0x000107c40330(uVar30);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar3 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x28);
    func_0x0001001ce354(param_1,0xe,uVar10,0);
    FUN_100c47f00(param_1,8,uVar31 & 0xffffffff);
    uStack_228 = param_1;
    func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
    if (puStack_1b8 != (undefined *)0x0) {
      puStack_1b0 = puStack_1b8;
      func_0x000107c60e14();
    }
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar30);
    uStack_228 = uStack_228 & 0xffffffff;
  }
  func_0x000107c61170(uVar7);
  uVar7 = param_2;
  func_0x000107c40cdc();
  func_0x000107c61180();
  if (uVar7 == 0) {
    uStack_250 = 0;
  }
  else {
    uVar30 = param_2;
    func_0x000107c40cdc(param_2);
    func_0x000107c61180();
    uStack_250 = param_1;
    func_0x000108c30bb4(param_1,uVar30);
    func_0x000107c61170(uVar30);
    uStack_250 = uStack_250 & 0xffffffff;
  }
  func_0x000107c61170(uVar7);
  uVar7 = param_2;
  func_0x000107c3d000();
  func_0x000107c61180();
  if (uVar7 == 0) {
    uStack_230 = 0;
  }
  else {
    uVar30 = param_2;
    func_0x000107c3d000(param_2);
    func_0x000107c61180();
    func_0x000107c61174();
    uVar31 = uVar30;
    func_0x000107c4e68c(uVar30);
    func_0x000107c61180();
    uVar10 = param_1;
    FUN_100c3b18c(param_1,uVar31);
    uVar32 = uVar30;
    func_0x000107c5aec0(uVar30);
    uVar11 = uVar30;
    func_0x000107c4e690(uVar30);
    func_0x000107c61180();
    uVar12 = param_1;
    FUN_100c3b18c(param_1,uVar11);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar3 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x28);
    func_0x0001001ce2e4(param_1,8,uVar12 & 0xffffffff);
    func_0x0001001ce2e4(param_1,4,uVar10 & 0xffffffff);
    func_0x000100ab13ac(param_1,6,uVar32,0);
    uStack_230 = param_1;
    func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar31);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar30);
    uStack_230 = uStack_230 & 0xffffffff;
  }
  func_0x000107c61170(uVar7);
  uVar7 = param_2;
  func_0x000107c4ea60();
  func_0x000107c61180();
  if (uVar7 == 0) {
    uStack_238 = 0;
  }
  else {
    uVar30 = param_2;
    func_0x000107c4ea60(param_2);
    func_0x000107c61180();
    func_0x000107c61174();
    uVar31 = uVar30;
    func_0x000107c4f3cc(uVar30);
    func_0x000107c61180();
    uVar10 = param_1;
    FUN_100c3b18c(param_1,uVar31);
    uVar32 = uVar30;
    func_0x000107c4a574(uVar30);
    uVar11 = uVar30;
    func_0x000107c4a060(uVar30);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar3 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x28);
    func_0x0001001ce2e4(param_1,4,uVar10 & 0xffffffff);
    func_0x000100ab13ac(param_1,8,uVar11,0);
    func_0x000100ab13ac(param_1,6,uVar32,0);
    uStack_238 = param_1;
    func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
    func_0x000107c61170(uVar31);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar30);
    uStack_238 = uStack_238 & 0xffffffff;
  }
  func_0x000107c61170(uVar7);
  uVar7 = param_2;
  func_0x000107c51628();
  func_0x000107c61180();
  if (uVar7 == 0) {
    uVar30 = 0;
  }
  else {
    uVar31 = param_2;
    func_0x000107c51628(param_2);
    func_0x000107c61180();
    uVar10 = uVar31;
    func_0x000107c51624();
    func_0x000107c61180();
    uVar30 = param_1;
    FUN_100c3b18c(param_1,uVar10);
    *(undefined1 *)(param_1 + 0x46) = 1;
    uVar40 = *(undefined8 *)(param_1 + 0x28);
    uVar41 = *(undefined8 *)(param_1 + 0x30);
    uVar35 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001001ce2e4(param_1,4,uVar30 & 0xffffffff);
    uVar30 = param_1;
    func_0x0001001ce548(param_1,((int)uVar35 - (int)uVar41) + (int)uVar40);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar31);
    uVar30 = uVar30 & 0xffffffff;
  }
  func_0x000107c61170(uVar7);
  uVar31 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar10 = param_1;
  FUN_100c3b18c();
  uVar32 = param_2;
  func_0x000107c5db08();
  func_0x000107c61180();
  uVar11 = param_1;
  FUN_100c3b18c();
  uVar12 = param_2;
  func_0x000107c42120();
  func_0x000107c61180();
  uVar13 = param_1;
  FUN_100c3b18c();
  uVar14 = param_2;
  func_0x000107c4a1e8();
  uVar7 = (long)puVar38 - (long)puStack_200;
  puVar33 = (undefined4 *)&UNK_10df96bc9;
  if (uVar7 != 0) {
    puVar33 = puStack_200;
  }
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x0001001cddd0(param_1,uVar7,4);
  func_0x0001001cddd0(param_1,uVar7,4);
  if (puStack_200 != puVar38) {
    lVar39 = (long)uVar7 >> 2;
    do {
      iVar3 = puVar33[lVar39 + -1];
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar3) + 4);
      lVar39 = lVar39 + -1;
    } while (lVar39 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar15 = param_1;
  func_0x0001001ce0bc(param_1,uVar7 >> 2);
  uVar7 = param_2;
  func_0x000107c4252c();
  func_0x000107c61180();
  uVar16 = param_1;
  FUN_100c3b18c();
  uVar17 = param_2;
  func_0x000107c49ac4(param_2);
  uVar18 = param_2;
  func_0x000107c5b37c();
  func_0x000107c61180();
  uVar19 = param_1;
  FUN_100c3b18c(param_1);
  uVar20 = param_2;
  func_0x000107c4d2ec();
  func_0x000107c61180();
  uVar21 = param_1;
  FUN_100c3b18c(param_1);
  uVar22 = param_2;
  func_0x000107c4ad90();
  func_0x000107c61180();
  uVar23 = param_1;
  FUN_100c3b18c(param_1);
  uVar24 = param_2;
  func_0x000107c4ea34(param_2);
  uVar25 = param_2;
  func_0x000107c4ebc8();
  func_0x000107c61180();
  uVar26 = param_1;
  FUN_100c3b18c(param_1);
  uVar27 = param_2;
  func_0x000107c4eba8(param_2);
  func_0x000107c61180();
  uVar28 = param_1;
  FUN_100c3b18c(param_1,uVar27);
  uVar29 = param_2;
  func_0x000107c499dc();
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar35 = *(undefined8 *)(param_1 + 0x30);
  uVar40 = *(undefined8 *)(param_1 + 0x20);
  uVar41 = *(undefined8 *)(param_1 + 0x28);
  if (uVar30 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x30,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar30) + 4,0);
  }
  if (uStack_238 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x2e,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uStack_238) + 4,0);
  }
  func_0x0001001ce2e4(param_1,0x2c,uVar28 & 0xffffffff);
  if (uStack_230 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x2a,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uStack_230) + 4,0);
  }
  FUN_100c3b2bc(param_1,0x28,uStack_250);
  func_0x0001001ce2e4(param_1,0x26,uVar26 & 0xffffffff);
  func_0x0001001ce354(param_1,0x24,uVar24,0);
  func_0x0001001ce2e4(param_1,0x22,uVar23 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x20,uVar21 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0x1e,uVar19 & 0xffffffff);
  if (uStack_228 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x1c,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uStack_228) + 4,0);
  }
  if (uStack_220 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x1a,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uStack_220) + 4,0);
  }
  if (uStack_218 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x18,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uStack_218) + 4,0);
  }
  if (uStack_210 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x16,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uStack_210) + 4,0);
  }
  func_0x0001001ce2e4(param_1,0x10,(int)uVar16);
  func_0x000100c3b32c(param_1,0xe,uStack_248);
  if ((int)uVar15 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0xc,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar15) + 4,0);
  }
  func_0x0001001ce2e4(param_1,8,(int)uVar13);
  func_0x0001001ce2e4(param_1,6,(int)uVar11);
  func_0x0001001ce2e4(param_1,4,(int)uVar10);
  func_0x000100ab13ac(param_1,0x32,uVar29 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,0x14,uVar17,0);
  func_0x000100ab13ac(param_1,10,(int)uVar14,0);
  func_0x0001001ce548(param_1,((int)uVar40 - (int)uVar35) + (int)uVar41);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar31);
  if (puStack_200 != (undefined4 *)0x0) {
    func_0x000107c60e14();
  }
  uVar7 = param_2;
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    func_0x000107c60e78();
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar27);
    if (puStack_200 != (undefined4 *)0x0) {
      func_0x000107c60e14(puStack_200);
    }
    func_0x000107c61170(param_2);
    func_0x000107c60bd8(uVar7);
    return uVar7;
  }
  return param_1;
}



/* Entry: 100c3ac08; end: 100c3ac0b;  */

void FUN_100c3ac08(void)

{
  return;
}



/* Entry: 100c3ac0c; end: 100c3afdb;  */

/* WARNING: Possible PIC construction at 0x000100c3acf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3ad14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3ad90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3adac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3af4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3adb0) */
/* WARNING: Removing unreachable block (ram,0x000100c3ae5c) */
/* WARNING: Removing unreachable block (ram,0x000100c3ae94) */
/* WARNING: Removing unreachable block (ram,0x000100c3ad94) */
/* WARNING: Removing unreachable block (ram,0x000100c3ad18) */
/* WARNING: Removing unreachable block (ram,0x000100c3ada4) */
/* WARNING: Removing unreachable block (ram,0x000100c3ada8) */
/* WARNING: Removing unreachable block (ram,0x000100c3ad34) */
/* WARNING: Removing unreachable block (ram,0x000100c3acfc) */
/* WARNING: Removing unreachable block (ram,0x000100c3af50) */

void FUN_100c3ac0c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x000107c61174(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 3;
  lVar6 = *(long *)(param_1 + 0x30);
  func_0x000107c61174(param_2);
  lVar4 = param_2;
  func_0x000107c3e934();
  func_0x000107c61180();
  if (lVar4 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c3e934(param_2);
    func_0x000107c61180();
    func_0x000107c61174();
    lVar4 = param_2;
    func_0x000107c4d118(param_2);
    lVar5 = param_2;
    func_0x000107c41378(param_2);
    *(undefined1 *)(lVar6 + 0x46) = 1;
    iVar1 = *(int *)(lVar6 + 0x20);
    iVar2 = *(int *)(lVar6 + 0x30);
    iVar3 = *(int *)(lVar6 + 0x28);
    func_0x000100ab13ac(lVar6,6,lVar5,0);
    func_0x000100ab13ac(lVar6,4,lVar4,0);
    func_0x0001001ce548(lVar6,(iVar1 - iVar2) + iVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c3afdc; end: 100c3afe3; -[SCSnapchattersMutualFriendInfo birthday] */

undefined8 FUN_100c3afdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100c3afe4; end: 100c3afeb; -[SCSnapchattersMutualFriendInfo reverseBestFriendRank] */

undefined8 FUN_100c3afe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100c3afec; end: 100c3aff3; -[SCSnapchattersMutualFriendInfo addedByFriendTimestamp] */

undefined8 FUN_100c3afec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100c3aff4; end: 100c3affb; -[SCSnapchattersMutualFriendInfo isCameosSharingSupported] */

undefined1 FUN_100c3aff4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 100c3affc; end: 100c3b003; -[SCSnapchattersMutualFriendInfo isBitmojiFriendmojiSharingSupported] */

undefined1 FUN_100c3affc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 100c3b004; end: 100c3b00b; -[SCSnapchattersMutualFriendInfo cameosSharingPolicy] */

undefined4 FUN_100c3b004(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 100c3b00c; end: 100c3b013; -[SCSnapchattersMutualFriendInfo isPinnedBestFriend] */

undefined1 FUN_100c3b00c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 100c3b014; end: 100c3b01b; -[SCSnapchattersMutualFriendInfo dreamsGenerationPolicy] */

undefined4 FUN_100c3b014(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 100c3b01c; end: 100c3b023; -[SCSnapchattersMutualFriendInfo canUseMySelfie] */

undefined1 FUN_100c3b01c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 100c3b024; end: 100c3b07b;  */

void FUN_100c3b024(ulong param_1,uint param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if (((int)param_3 == param_4) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar2 = param_1;
  func_0x0001001ce4e8(param_1,param_3);
  puVar3 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar3) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar3 = *(ulong **)(param_1 + 0x38);
  }
  *puVar3 = uVar2 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar1 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar1 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar1;
  return;
}



/* Entry: 100c3b07c; end: 100c3b0eb;  */

void FUN_100c3b07c(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x0001001ce088(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 100c3b0ec; end: 100c3b0f3; -[SCSnapchattersFriendInfo addFriendTimestamp] */

undefined8 FUN_100c3b0ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c3b0f4; end: 100c3b0fb; -[SCSnapchattersFriendInfo canSeeCustomStories] */

undefined1 FUN_100c3b0f4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100c3b0fc; end: 100c3b103; -[SCSnapchattersFriendInfo isStoryMuted] */

undefined1 FUN_100c3b0fc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 100c3b104; end: 100c3b10b; -[SCSnapchattersFriendInfo isSuppressedOnAddedMe] */

undefined1 FUN_100c3b104(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 100c3b10c; end: 100c3b113; -[SCSnapchattersFriendInfo isAiChatbot] */

undefined1 FUN_100c3b10c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 100c3b114; end: 100c3b11b; -[SCSnapchattersFriendInfo linkCreationTimestamp] */

undefined8 FUN_100c3b114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100c3b11c; end: 100c3b18b;  */

void FUN_100c3b11c(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x0001001ce088(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 100c3b18c; end: 100c3b2bb;  */

undefined8 FUN_100c3b18c(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  func_0x000107c61174(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_100c3b26c;
  }
  pcVar1 = param_2;
  func_0x000107c60858(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    func_0x000107c613d0(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_100c3b26c;
  }
  pcVar1 = param_2;
  func_0x000107c412d4();
  func_0x000107c61180();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x000107c412d8();
    func_0x000107c61180();
    if (pcVar1 != (char *)0x0) goto LAB_100c3b22c;
    param_1 = 0;
  }
  else {
LAB_100c3b22c:
    pcVar3 = pcVar1;
    func_0x000107c61178();
    func_0x000107c3eea8();
    pcVar4 = pcVar1;
    func_0x000107c4adac(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  func_0x000107c61170(pcVar1);
LAB_100c3b26c:
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 100c3b2bc; end: 100c3b39b;  */

void FUN_100c3b2bc(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x0001001ce088(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 100c3b39c; end: 100c3b46f;  */

void FUN_100c3b39c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x30;
  func_0x000107c61148(lVar1);
  func_0x000107c6111c(auStack_38,param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar2);
  func_0x000107c43fe4(lVar1);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100c3b470; end: 100c3b4ff; -[SCLocationManager getCurrentAuthorizationStatusWithCompletion:] */

void FUN_100c3b470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100c3b6d4;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_60);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c3b500; end: 100c3b50b;  */

void FUN_100c3b500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100c3b508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 100c3b50c; end: 100c3b5a3;  */

void FUN_100c3b50c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x000107c611ec(lVar3 + 0x10);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c61174(lVar2);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x000107c40fe4(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    func_0x000107c61180();
    func_0x000107c3d8e0();
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(lVar3 + 0x10);
  return;
}



/* Entry: 100c3b5a4; end: 100c3b5e3;  */

void FUN_100c3b5a4(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0x21,0);
  func_0x000107c60b30(0,unaff_x20 + 0x10);
  func_0x000107c614a8(auStack_28);
  return;
}



/* Entry: 100c3b5e4; end: 100c3b60b;  */

void FUN_100c3b5e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c3b60c; end: 100c3b673;  */

/* WARNING: Possible PIC construction at 0x000100c3b638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3b648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3b658: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3b64c) */
/* WARNING: Removing unreachable block (ram,0x000100c3b63c) */
/* WARNING: Removing unreachable block (ram,0x000100c3b65c) */

void FUN_100c3b60c(long param_1)

{
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x60),8);
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 100c3b674; end: 100c3b67b;  */

void FUN_100c3b674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x28);
  return;
}



/* Entry: 100c3b67c; end: 100c3b6cb;  */

/* WARNING: Possible PIC construction at 0x000100c3b6a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3b6b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3b6ac) */
/* WARNING: Removing unreachable block (ram,0x000100c3b6bc) */

void FUN_100c3b67c(long param_1)

{
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x48),8);
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x40),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 100c3b6cc; end: 100c3b6d3;  */

void FUN_100c3b6cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c3b6d4; end: 100c3b75b;  */

/* WARNING: Possible PIC construction at 0x000100c3b744: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3b748) */

void FUN_100c3b6d4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x80) & 1) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x000107c3e488(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100c3b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    return;
  }
  func_0x000107c40794(lVar2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  func_0x000107c61184();
  func_0x000107c3d798(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100c3b75c; end: 100c3b79b; -[KSCrashReportSinkSnapAirAppExtension .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c3b780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3b784) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3b75c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112757dd8,0);
  return;
}



/* Entry: 100c3b79c; end: 100c3b7cb; -[KSCrashReportFilterCombine .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c3b7b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3b7b8) */

void FUN_100c3b79c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100c3b7cc; end: 100c3b7db; -[KSCrashReportFilterSubset .cxx_destruct] */

void FUN_100c3b7cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100c3b7dc; end: 100c3b7fb;  */

void FUN_100c3b7dc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100c3b7fc; end: 100c3b807;  */

void FUN_100c3b7fc(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  uVar3 = lVar1 + 0x10;
  func_0x000107c61618();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    (*pcVar2)();
    if (((uVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      func_0x000107c61170(uVar3);
    }
    else {
      FUN_100c3baf4();
      func_0x000107c61170(uVar3);
      FUN_100c3c730(uVar4);
    }
  }
  return;
}



/* Entry: 100c3b808; end: 100c3b897;  */

void FUN_100c3b808(long param_1,code *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  uVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    (*param_2)();
    if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      func_0x000107c61170(uVar1);
    }
    else {
      FUN_100c3baf4();
      func_0x000107c61170(uVar1);
      FUN_100c3c730(uVar2);
    }
  }
  return;
}



/* Entry: 100c3b898; end: 100c3b8ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100c3b898(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = *(long *)(lVar1 + _DAT_112da0890);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0928);
    uVar5 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar4);
    func_0x000107c6157c(uVar5);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar5);
  }
  FUN_100c3b9b0(0);
  FUN_100c3b9d0(uVar2,uVar4);
  func_0x000107c61170(uVar4);
  return uVar2 | 0x8000000000000000;
}



/* Entry: 100c3b8ac; end: 100c3b9af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100c3b8ac(ulong param_1,long param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(long *)(param_2 + _DAT_112da0890);
    func_0x000107c61174();
    func_0x000107c61170(param_2);
    lVar1 = _DAT_112da0920;
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112da0920);
    func_0x000107c6157c(uVar3);
    func_0x00010006c804();
    func_0x000107c61574(uVar3);
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar2 + lVar1);
    func_0x000107c61174(uVar3);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar2);
    func_0x000107c61574(uVar4);
  }
  FUN_100c3b9b0(0);
  (*param_3)(param_1,uVar3);
  func_0x000107c61170(uVar3);
  return param_1 | 0x8000000000000000;
}



/* Entry: 100c3b9b0; end: 100c3b9cf;  */

void FUN_100c3b9b0(void)

{
  func_0x000107c61168(&PTR_PTR_1129aca10);
  return;
}



/* Entry: 100c3b9d0; end: 100c3b9d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3b9d0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_100c3b9b0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined1 *)(lVar5 + _DAT_113076110) = 6;
  *(undefined8 *)(lVar5 + _DAT_113076118) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076120) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076128) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076130) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076138) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076140) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113076148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113076150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar2 = (long *)(lVar5 + _DAT_113076158);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076160) = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113076168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_113076170) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_40,puVar3);
  return;
}



/* Entry: 100c3b9d4; end: 100c3baf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3b9d4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_100c3b9b0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined1 *)(lVar5 + _DAT_113076110) = 6;
  *(undefined8 *)(lVar5 + _DAT_113076118) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076120) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076128) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076130) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076138) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076140) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113076148);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113076150);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar2 = (long *)(lVar5 + _DAT_113076158);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  *(undefined8 *)(lVar5 + _DAT_113076160) = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113076168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_113076170) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_40,puVar3);
  return;
}



/* Entry: 100c3baf4; end: 100c3bbaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3baf4(ulong param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long unaff_x20;
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da0930));
  uVar4 = (uint)(param_1 >> 0x20);
  plVar3 = (long *)&DAT_112da0960;
  if (uVar4 >> 0x1d != 5) {
    plVar3 = (long *)&DAT_112da0968;
  }
  plVar1 = (long *)&DAT_112da0950;
  if (uVar4 >> 0x1d != 3) {
    plVar1 = (long *)&DAT_112da0958;
  }
  uVar7 = uVar4 >> 0x1d;
  if (uVar7 < 5) {
    plVar3 = plVar1;
  }
  plVar1 = (long *)&DAT_112da0940;
  if (uVar7 != 1) {
    plVar1 = (long *)&DAT_112da0948;
  }
  plVar2 = (long *)&DAT_112da0938;
  uVar5 = param_1;
  if (uVar7 != 0) {
    plVar2 = plVar1;
    uVar5 = param_1 & 0x1fffffffffffffff;
  }
  uVar6 = param_1 & 0x1fffffffffffffff;
  if (uVar4 >> 0x1d < 3) {
    plVar3 = plVar2;
    uVar6 = uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + *plVar3),PTR_s_next__112614028,uVar6);
  return;
}



/* Entry: 100c3bbb0; end: 100c3bbb3; -[SCMainQueuePerformerImpl assertQueue] */

void FUN_100c3bbb0(void)

{
  return;
}



/* Entry: 100c3bbb4; end: 100c3bd4f;  */

void FUN_100c3bbb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1052de30c;
  puStack_70 = &UNK_110872b00;
  func_0x000107c6111c(auStack_68,param_1 + 0x20);
  func_0x000107c4dd10(param_2);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  puStack_a0 = &UNK_1052de354;
  puStack_98 = &UNK_110872b00;
  func_0x000107c6111c(auStack_90,param_1 + 0x20);
  func_0x000107c4dd14(param_2);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_100c3bec4;
  puStack_c0 = &UNK_1108762c0;
  func_0x000107c6111c(auStack_b8,param_1 + 0x20);
  func_0x000107c4dbb4(param_2);
  func_0x000107c6111c(auStack_e0,param_1 + 0x20);
  func_0x000107c4dbd4(param_2);
  func_0x000107c61120(auStack_e0);
  func_0x000107c61120(auStack_b8);
  func_0x000107c61120(auStack_90);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c3bd50; end: 100c3bd9f; -[SCCapturerStateSessionUpdate onSessionDidStartRunning:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3bd50(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_113076110);
  func_0x000107c61174();
  if (cVar1 == '\0') {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113076118));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100c3bda0; end: 100c3bdf3; -[SCCapturerStateSessionUpdate onSessionDidStopRunning:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3bda0(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_113076110);
  func_0x000107c61174();
  if (cVar1 == '\x01') {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113076120));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100c3bdf4; end: 100c3be37; -[SCCapturerStateSessionUpdate onDidAddCaptureInput:] */

void FUN_100c3bdf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  func_0x000107c61174();
  FUN_100c3be3c(FUN_100c3be38,auStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100c3be38; end: 100c3be3b;  */

void FUN_100c3be38(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100c3bec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 100c3be3c; end: 100c3bea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3be3c(code *param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113076110) == '\x06') {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113076158) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c3bea4);
      (*pcVar1)();
    }
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_113076158),
               *(undefined8 *)(unaff_x20 + _DAT_113076160));
  }
  return;
}



/* Entry: 100c3bea4; end: 100c3bec3;  */

void FUN_100c3bea4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100c3bec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 100c3bec4; end: 100c3bf1b;  */

/* WARNING: Possible PIC construction at 0x000100c3bf04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3bf08) */

void FUN_100c3bec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3b484();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c3bf1c; end: 100c3bf9b; -[SCBatteryLogger _didAddCaptureInput:captureState:] */

void FUN_100c3bf1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c49aec();
  if ((int)uVar1 != 0) {
    func_0x000107c6071c();
    func_0x000107c3e708(param_2);
    func_0x000107c61180();
    func_0x000107c41a1c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 100c3bf9c; end: 100c3bfa3; -[SCBatteryLogger isCameraActive] */

undefined1 FUN_100c3bf9c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa8);
}



/* Entry: 100c3bfa4; end: 100c3c04f; -[SCCapturerStateSessionUpdate onDidRemoveCaptureInput:] */

void FUN_100c3bfa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x000100c3bfe8(FUN_100c3bea4,auStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100c3c050; end: 100c3c14b;  */

void FUN_100c3c050(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  puStack_68 = &UNK_10526fde0;
  puStack_60 = &UNK_110872b00;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  func_0x000107c4dd10(param_2);
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c4dd14(param_2);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c3c14c; end: 100c3c1a3;  */

void FUN_100c3c14c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100c3ddb4;
  puStack_20 = &UNK_1109167d8;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4dbbc(param_2,param_2,&puStack_38);
  return;
}



/* Entry: 100c3c1a4; end: 100c3c26f; -[SCCapturerStateSessionUpdate onDidChangeCaptureDevicePosition:] */

void FUN_100c3c1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x000100c3c1e8(FUN_100c3dd90,auStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100c3c270; end: 100c3c32b;  */

/* WARNING: Possible PIC construction at 0x000100c3c30c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3c310) */

void FUN_100c3c270(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c4dd10(param_2);
    func_0x000107c4dd14(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c3c32c; end: 100c3c333;  */

void FUN_100c3c32c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c3c334; end: 100c3c37f;  */

void FUN_100c3c334(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c3c380; end: 100c3c3ab;  */

void FUN_100c3c380(void)

{
  func_0x000100c3c1e8(FUN_100c3deb4);
  return;
}



/* Entry: 100c3c3ac; end: 100c3c44f;  */

void FUN_100c3c3ac(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4dbbc(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c3c450; end: 100c3c4f3;  */

void FUN_100c3c450(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4dbbc(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c3c4f4; end: 100c3c687;  */

void FUN_100c3c4f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1085a81f0;
  puStack_70 = &UNK_110872b00;
  func_0x000107c6111c(auStack_68,param_1 + 0x20);
  func_0x000107c4dd10(param_2);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  puStack_a0 = &UNK_1085a821c;
  puStack_98 = &UNK_110872b00;
  func_0x000107c6111c(auStack_90,param_1 + 0x20);
  func_0x000107c4dd14(param_2);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x100c716b8;
  puStack_c0 = &UNK_110872b00;
  func_0x000107c6111c(auStack_b8,param_1 + 0x20);
  func_0x000107c4db64(param_2);
  func_0x000107c6111c(auStack_e0,param_1 + 0x20);
  func_0x000107c4db68(param_2);
  func_0x000107c61120(auStack_e0);
  func_0x000107c61120(auStack_b8);
  func_0x000107c61120(auStack_90);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c3c688; end: 100c3c6db; -[SCCapturerStateSessionUpdate onCapturerDidStartRunning:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3c688(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_113076110);
  func_0x000107c61174();
  if (cVar1 == '\x02') {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113076128));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100c3c6dc; end: 100c3c72f; -[SCCapturerStateSessionUpdate onCapturerDidStopRunning:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3c6dc(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_113076110);
  func_0x000107c61174();
  if (cVar1 == '\x03') {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113076130));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100c3c730; end: 100c3c747;  */

void FUN_100c3c730(ulong param_1)

{
  if (((param_1 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1 & 0x1fffffffffffffff);
  return;
}



/* Entry: 100c3c748; end: 100c3c7df; -[SCCapturerStateSessionUpdate .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c3c764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3c784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3c7a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3c7c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3c7a8) */
/* WARNING: Removing unreachable block (ram,0x000100c3c788) */
/* WARNING: Removing unreachable block (ram,0x000100c3c768) */
/* WARNING: Removing unreachable block (ram,0x000100c3c7c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3c748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113076118));
  return;
}



/* Entry: 100c3c7e0; end: 100c3c7ef;  */

void FUN_100c3c7e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c3c7f0; end: 100c3c813;  */

void FUN_100c3c7f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c3c814; end: 100c3c81b;  */

void FUN_100c3c814(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c3c81c; end: 100c3c86b;  */

void FUN_100c3c81c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c3c86c; end: 100c3c86f;  */

void FUN_100c3c86c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c3c870; end: 100c3c893;  */

void FUN_100c3c870(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c3c894; end: 100c3c8c7;  */

void FUN_100c3c894(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  func_0x000107c61148();
  if (param_2 != 0) {
    func_0x0001008e3740();
    *(undefined8 *)(param_2 + 0x128) = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c3c8c8; end: 100c3c8d3;  */

void FUN_100c3c8c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11ae30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_publishState__1126245a8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c3c8d4; end: 100c3c923; -[SCCameraHardwareInitOperation publishState:] */

/* WARNING: Possible PIC construction at 0x000100c3c90c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3c910) */

void FUN_100c3c8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100c3c924(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c3c924; end: 100c3cb87;  */

/* WARNING: Possible PIC construction at 0x000100c3c980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3c9ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3ca80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3cae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3cb40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3ca84) */
/* WARNING: Removing unreachable block (ram,0x000100c3c9f0) */
/* WARNING: Removing unreachable block (ram,0x000100c3c984) */
/* WARNING: Removing unreachable block (ram,0x000100c3c9a4) */
/* WARNING: Removing unreachable block (ram,0x000100c3c9b8) */
/* WARNING: Removing unreachable block (ram,0x000100c3cb44) */
/* WARNING: Removing unreachable block (ram,0x000100c3ca94) */
/* WARNING: Removing unreachable block (ram,0x000100c3caa8) */
/* WARNING: Removing unreachable block (ram,0x000100c3ca58) */
/* WARNING: Removing unreachable block (ram,0x000100c3ca70) */
/* WARNING: Removing unreachable block (ram,0x000100c3cb18) */
/* WARNING: Removing unreachable block (ram,0x000100c3cb30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3c924(void)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  
  if (*(char *)(unaff_x20 + _DAT_112dd8730) != '\x01') {
    return;
  }
  lVar2 = unaff_x20 + _DAT_112dd8718;
  func_0x000107c61618();
  if (lVar2 == 0) {
    if (*(char *)(unaff_x20 + _DAT_112dd8728) == '\x01') {
      lVar1 = *(long *)(unaff_x20 + _DAT_112dd8740);
      lVar2 = *(long *)(lVar1 + 0x10);
      if (lVar2 != 0) {
        func_0x000107c61434(lVar1);
        do {
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
        func_0x000107c6142c(lVar1);
      }
      lVar1 = *(long *)(unaff_x20 + _DAT_112dd8748);
      lVar2 = *(long *)(lVar1 + 0x10);
      if (lVar2 != 0) {
        func_0x000107c61434(lVar1);
        do {
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
        func_0x000107c615e8(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
        return;
      }
    }
    lVar2 = 0;
  }
  else {
    func_0x000107c4c238();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 100c3cb88; end: 100c3cc57; -[SCManagedCapturerSessionStateManagerImpl didChangeCaptureDevicePositionWithOldDevicePosition:newDevicePosition:oldSecondaryDevicePosition:newSecondaryDevicePosition:] */

/* WARNING: Possible PIC construction at 0x000100c3cc30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3cc34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3cb88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112da0890);
  puVar1 = &UNK_1103be660;
  func_0x000107c613fc(&UNK_1103be660,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  puVar2 = &UNK_1103be638;
  func_0x000107c613fc(&UNK_1103be638,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c61174(param_1);
  FUN_100c3cc58(0x100c3d1ac,puVar1,uVar3,puVar2,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 100c3cc58; end: 100c3d19f;  */

/* WARNING: Possible PIC construction at 0x000100c3ccfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3cd2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3cd80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3cdbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3ce5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3ce70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3ce80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3cf9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3d014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3d03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3d0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3cf74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3cf84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3d150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3d160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3d120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3d130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3d0cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3d0e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3d0d0) */
/* WARNING: Removing unreachable block (ram,0x000100c3d134) */
/* WARNING: Removing unreachable block (ram,0x000100c3d124) */
/* WARNING: Removing unreachable block (ram,0x000100c3d164) */
/* WARNING: Removing unreachable block (ram,0x000100c3d154) */
/* WARNING: Removing unreachable block (ram,0x000100c3cf88) */
/* WARNING: Removing unreachable block (ram,0x000100c3cf78) */
/* WARNING: Removing unreachable block (ram,0x000100c3d0f4) */
/* WARNING: Removing unreachable block (ram,0x000100c3d0f8) */
/* WARNING: Removing unreachable block (ram,0x000100c3d040) */
/* WARNING: Removing unreachable block (ram,0x000100c3d018) */
/* WARNING: Removing unreachable block (ram,0x000100c3cfa0) */
/* WARNING: Removing unreachable block (ram,0x000100c3ce84) */
/* WARNING: Removing unreachable block (ram,0x000100c3ce74) */
/* WARNING: Removing unreachable block (ram,0x000100c3ce60) */
/* WARNING: Removing unreachable block (ram,0x000100c3cdc0) */
/* WARNING: Removing unreachable block (ram,0x000100c3cf98) */
/* WARNING: Removing unreachable block (ram,0x000100c3ce34) */
/* WARNING: Removing unreachable block (ram,0x000100c3cd84) */
/* WARNING: Removing unreachable block (ram,0x000100c3cd30) */
/* WARNING: Removing unreachable block (ram,0x000100c3d174) */
/* WARNING: Removing unreachable block (ram,0x000100c3cd68) */
/* WARNING: Removing unreachable block (ram,0x000100c3cd00) */
/* WARNING: Removing unreachable block (ram,0x000100c3d0e4) */
/* WARNING: Removing unreachable block (ram,0x000100c3d0f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3cc58(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &UNK_1103c05e0;
  func_0x000107c613fc(&UNK_1103c05e0,0x28,7);
  *(undefined **)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  *(undefined8 *)(puVar3 + 0x20) = param_6;
  if (param_1 == 0) {
    puVar1 = &UNK_1103be908;
    func_0x000107c613fc(&UNK_1103be908,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_3);
    puVar2 = &UNK_1103c0608;
    func_0x000107c613fc(&UNK_1103c0608,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = 0x101464f6c;
    *(undefined **)(puVar2 + 0x20) = puVar3;
    uVar4 = *(ulong *)(param_3 + _DAT_112da0930);
    func_0x000107c61580(param_4,2);
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c(puVar1);
    func_0x000107c49be8();
    if ((uVar4 & 1) == 0) {
      func_0x000107c61574(puVar1);
      puVar3 = &UNK_1103c0630;
      func_0x000107c613fc(&UNK_1103c0630,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = 0x101465478;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      uStack_70 = 0x101465330;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103c0648;
      puStack_68 = puVar3;
      func_0x000107c60bc4(&puStack_90);
      param_4 = puStack_68;
      func_0x000107c6157c(puVar2);
    }
    else {
      func_0x000107c61428(puVar1 + 0x10,&puStack_90,0,0);
      puVar1 = puVar1 + 0x10;
      func_0x000107c61618();
      if ((puVar1 != (undefined *)0x0) &&
         (puVar3 = param_4, FUN_100c3db60(param_4,param_5,param_6),
         (((ulong)puVar3 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
        FUN_100c3baf4();
        func_0x000107c61170(puVar1);
        param_4 = puVar2;
      }
    }
  }
  else {
    func_0x0001002e8978(0);
    puVar3 = *(undefined **)(param_3 + _DAT_112da0920);
    func_0x000107c61580(param_4,2);
    func_0x000100382e80(param_1,param_2);
    func_0x000107c6157c(puVar3);
    func_0x00010006c804();
    param_4 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4);
  return;
}



/* Entry: 100c3d1a0; end: 100c3d1b7;  */

void FUN_100c3d1a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c3d1b8; end: 100c3d1fb;  */

/* WARNING: Possible PIC construction at 0x000100c3d1e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3d1ec) */

void FUN_100c3d1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001002e9764(param_2);
  func_0x0001002e9780(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c3d1fc; end: 100c3d363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3d1fc(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112da0938);
    FUN_100c3d364(0);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(param_1 + _DAT_112da0920);
    func_0x000107c61174(uVar2);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112da0928);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    uVar4 = uVar5;
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar3);
    func_0x000100070bfc();
    func_0x000107c61574(uVar3);
    FUN_100c3d384(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    (*param_5)(param_2,param_3,param_4);
    if (((param_2 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      FUN_100c3baf4();
      func_0x000107c61170(param_1);
      FUN_100c3c730(param_2);
    }
  }
  return;
}



/* Entry: 100c3d364; end: 100c3d383;  */

void FUN_100c3d364(void)

{
  func_0x000107c61168(&PTR_PTR_1129ac3f0);
  return;
}



/* Entry: 100c3d384; end: 100c3d3db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3d384(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_113075e18) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61154(auStack_30,puVar1);
  return;
}



/* Entry: 100c3d3dc; end: 100c3d3df;  */

void FUN_100c3d3dc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c3d3e0; end: 100c3d487;  */

void FUN_100c3d3e0(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + *param_3);
    puVar1 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    if (param_1 == 0) {
      func_0x000107c4d73c();
    }
    else {
      func_0x000107c4e01c();
    }
    func_0x000107c61180();
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 100c3d488; end: 100c3d4a7;  */

void FUN_100c3d488(void)

{
  FUN_100c3d3e0();
  return;
}


