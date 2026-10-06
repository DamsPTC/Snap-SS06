/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10261a700; end: 10261a773;  */

void FUN_10261a700(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10261a73c,*(undefined8 *)(*unaff_x22 + 0xa8),*(undefined8 *)(*unaff_x22 + 0xb0));
  return;
}



/* Entry: 10261a774; end: 10261a82b;  */

void FUN_10261a774(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSData_1126ae778);
  func_0x00010006c00c(uVar1,uVar2);
  uVar4 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x000107c4635c(puVar3);
  func_0x000107c61170(uVar4);
  func_0x00010006c090(uVar1,uVar2);
  func_0x000107c43b74(uVar5);
  func_0x000107c61170(puVar3);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010261a828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10261a82c; end: 10261a8cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261a82c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar4;
  long unaff_x20;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___UIImagePickerController_1126b4af0;
  func_0x000107c61168();
  iVar2 = (int)puVar3;
  func_0x000107c4a4d0();
  lVar1 = _DAT_112eb0510;
  if (iVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIImagePickerController_1126b4af0;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImagePickerController_1126b4af0);
    func_0x000107c453e4();
    func_0x000107c53fcc();
    func_0x000107c5958c(puVar3,param_2,1);
    func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112eb0508),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  if (*(long *)(unaff_x20 + _DAT_112eb0510) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + _DAT_112eb0510) + 0x40) + 0x28);
    puVar4[1] = 0xc000000000000000;
    *puVar4 = 0;
    func_0x000107c6144c();
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  return;
}



/* Entry: 10261a8d0; end: 10261a8e3; -[_TtC34MapCustomizationTrayImplementation21NativeCameraPresenter presentImageCamera] */

void FUN_10261a8d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = &UNK_11052bb10;
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  func_0x000107c613fc(&UNK_11052bb10,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar1);
  uVar3 = 0x80;
  func_0x0001001ca524(0x80,0,0x3c,4,0,0,&UNK_10dac4ad8,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10261a8e4; end: 10261a97f;  */

void FUN_10261a8e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
  uVar3 = 0x112d45220;
  func_0x00010261bd1c(0x112d45220,0xff,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261a980,uVar2,uVar3);
  return;
}



/* Entry: 10261a980; end: 10261aa27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261a980(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = _DAT_112eb0510;
  lVar4 = *(long *)(unaff_x22 + 0x60);
  *(long *)(unaff_x22 + 0x98) = _DAT_112eb0510;
  lVar2 = *(long *)(lVar4 + lVar1);
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28);
    puVar3[1] = 0xc000000000000000;
    *puVar3 = 0;
    func_0x000107c6144c();
  }
  *(undefined8 *)(lVar4 + lVar1) = 0;
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  if (lVar2 == 0) {
    lVar2 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0xa8) = lVar2;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261aa28,lVar2);
  return;
}



/* Entry: 10261aa28; end: 10261aa7f;  */

void FUN_10261aa28(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x98);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10261aa80;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  *(long *)(lVar3 + lVar2) = lVar1;
  FUN_10261aaf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10261aa80; end: 10261aaf3;  */

void FUN_10261aa80(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10261aabc,*(undefined8 *)(*unaff_x22 + 0xa8),*(undefined8 *)(*unaff_x22 + 0xb0));
  return;
}



/* Entry: 10261aaf4; end: 10261acbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261aaf4(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = 0x112eb0540;
  func_0x0001000285a8(0x112eb0540,&UNK_10dac4ac8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5f880();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar5 - extraout_x12;
  func_0x000107c5f87c(lVar4);
  func_0x000107c5f864(puVar3);
  lVar2 = 0;
  func_0x000107c5f868();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,0,1,lVar2);
  func_0x000107c5f878(puVar3);
  func_0x000107c5f874(1);
  FUN_10261bcdc(0,0x112eb0548,&PTR__OBJC_CLASS___PHPickerViewController_1126bd888);
  (**(code **)(lVar6 + 0x10))(lVar5,lVar4,lVar1);
  func_0x000107c60074();
  func_0x00010261bd1c(0x112eb0550);
  func_0x000107c615f0();
  func_0x000107c60078();
  lVar2 = lVar5;
  func_0x000107c4f044();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c53fcc();
    func_0x000107c61170(lVar2);
  }
  func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112eb0508));
  func_0x000107c61170(lVar5);
  (**(code **)(lVar6 + 8))(lVar4,lVar1);
  return;
}



/* Entry: 10261acbc; end: 10261accf; -[_TtC34MapCustomizationTrayImplementation21NativeCameraPresenter presentImagePicker] */

void FUN_10261acbc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = &UNK_11052bae8;
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  func_0x000107c613fc(&UNK_11052bae8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar1);
  uVar3 = 0x80;
  func_0x0001001ca524(0x80,0,0x3c,4,0,0,&UNK_10dac4ac0,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10261acd0; end: 10261adff;  */

void FUN_10261acd0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  func_0x000107c613fc(param_3,0x20,7);
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined **)(param_3 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar1);
  uVar2 = 0x80;
  func_0x0001001ca524(0x80,0,0x3c,4,0,0,param_4,param_3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10261ae00; end: 10261ae5f; -[_TtC34MapCustomizationTrayImplementation21NativeCameraPresenter init] */

void FUN_10261ae00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapCustomizationTrayImplementation.NativeCameraPresenter",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10261ae2c);
  (*pcVar1)();
}



/* Entry: 10261ae60; end: 10261ae6f; -[_TtC34MapCustomizationTrayImplementation21NativeCameraPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261ae60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb0508));
  return;
}



/* Entry: 10261ae70; end: 10261ae8f;  */

void FUN_10261ae70(void)

{
  func_0x000107c61168(&PTR_PTR_112854c40);
  return;
}



/* Entry: 10261ae90; end: 10261aea7;  */

void FUN_10261ae90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261aea8,0,0);
  return;
}



/* Entry: 10261aea8; end: 10261af77;  */

void FUN_10261aea8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x40);
  if (lVar2 != 0) {
    func_0x000107c60bb8();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar5 = lVar2;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar2);
      goto LAB_10261aefc;
    }
  }
  lVar5 = 0;
  param_2 = 0xc000000000000000;
LAB_10261aefc:
  *(long *)(unaff_x22 + 0x50) = lVar5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  uVar3 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar4;
  uVar4 = 0x112d45220;
  func_0x00010261bd1c(0x112d45220,0xff,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261af78,uVar3,uVar4);
  return;
}



/* Entry: 10261af78; end: 10261b06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261af78(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar2 = *(long *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  uVar7 = *(undefined8 *)(lVar2 + _DAT_112eb0510);
  *(undefined8 *)(lVar2 + _DAT_112eb0510) = 0;
  uVar6 = *(undefined8 *)(lVar2 + _DAT_112eb0508);
  puVar4 = &UNK_11052ba98;
  func_0x000107c613fc(&UNK_11052ba98,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar7;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x10261be38;
  *(undefined **)(unaff_x22 + 0x38) = puVar4;
  puVar5 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_1000b0c7c;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_11052bab0;
  func_0x000107c60bc4();
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x00010006c00c(uVar3,uVar1);
  func_0x000107c61574(uVar7);
  func_0x000107c41864(uVar6);
  func_0x000107c60bd0(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261b070,0,0);
  return;
}



/* Entry: 10261b070; end: 10261b09f;  */

void FUN_10261b070(void)

{
  long unaff_x22;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010261b09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10261b0a0; end: 10261b14b; -[_TtC34MapCustomizationTrayImplementation21NativeCameraPresenter imagePickerController:didFinishPickingMediaWithInfo:] */

void FUN_10261b0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x0001026168e0(0);
  uVar2 = 0x112eb01e0;
  func_0x00010261bd1c(0x112eb01e0,0xff,0x1026168e0,&UNK_10dac45f8);
  func_0x000107c5f9e8(param_4,uVar1,PTR___sypN_11034f1a8 + 8,uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10261b708(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 10261b14c; end: 10261b197; -[_TtC34MapCustomizationTrayImplementation21NativeCameraPresenter imagePickerControllerDidCancel:] */

/* WARNING: Possible PIC construction at 0x00010261b180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010261b184) */

void FUN_10261b14c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010261b84c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10261b198; end: 10261b2cf;  */

/* WARNING: Possible PIC construction at 0x00010261b2a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010261b2a8) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */

void FUN_10261b198(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = param_1;
  if (param_1 != 0) {
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    func_0x000107c6148c();
    if (param_1 != 0) {
      func_0x000107c60bb8();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar3 = param_1;
        func_0x000107c5ee30();
        func_0x000107c61170(param_1);
        goto LAB_10261b20c;
      }
    }
    lVar3 = 0;
  }
  puVar4 = (undefined *)0xc000000000000000;
LAB_10261b20c:
  puVar1 = &UNK_11052b980;
  func_0x000107c613fc(&UNK_11052b980,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(long *)(puVar1 + 0x18) = lVar3;
  *(undefined **)(puVar1 + 0x20) = puVar4;
  puVar2 = &UNK_11052b9a8;
  func_0x000107c613fc(&UNK_11052b9a8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac4a98;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_3);
  func_0x00010006c00c(lVar3,puVar4);
  func_0x0001001ca524(0x80,0,0x3c,4,0,0,&UNK_10dac4aa0,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10261b2d0; end: 10261b367;  */

void FUN_10261b2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
  uVar3 = 0x112d45220;
  func_0x00010261bd1c(0x112d45220,0xff,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261b368,uVar2,uVar3);
  return;
}



/* Entry: 10261b368; end: 10261b453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261b368(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  uVar7 = *(undefined8 *)(lVar2 + _DAT_112eb0510);
  *(undefined8 *)(lVar2 + _DAT_112eb0510) = 0;
  uVar6 = *(undefined8 *)(lVar2 + _DAT_112eb0508);
  puVar4 = &UNK_11052b9d0;
  func_0x000107c613fc(&UNK_11052b9d0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar7;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x10261be30;
  *(undefined **)(unaff_x22 + 0x38) = puVar4;
  puVar5 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_1000b0c7c;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_11052b9e8;
  func_0x000107c60bc4();
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x00010006c00c(uVar3,uVar1);
  func_0x000107c61574(uVar7);
  func_0x000107c41864(uVar6);
  func_0x000107c60bd0(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010261b450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10261b454; end: 10261b4c3;  */

void FUN_10261b454(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10261b4c4; end: 10261b4cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261b4c4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  ppuVar5 = &puStack_70;
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar1 = 0;
    func_0x000107c5f870();
    uVar6 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
    func_0x000107c5f86c(uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff));
    FUN_10261bcdc(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c614e8();
    lVar2 = lVar1;
    func_0x000107c3f3e8();
    if ((int)lVar2 != 0) {
      puVar4 = &UNK_11052b930;
      func_0x000107c613fc(&UNK_11052b930,0x18,7);
      *(long *)(puVar4 + 0x10) = unaff_x20;
      pcStack_50 = (code *)0x10261bb18;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      pcStack_60 = FUN_10261b454;
      puStack_58 = &UNK_11052b948;
      puStack_48 = puVar4;
      func_0x000107c60bc4(&puStack_70);
      puVar4 = puStack_48;
      func_0x000107c61174();
      func_0x000107c61574(puVar4);
      func_0x000107c4b750(lVar1);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(lVar1);
      return;
    }
    func_0x000107c61170(lVar1);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112eb0510);
  *(undefined8 *)(unaff_x20 + _DAT_112eb0510) = 0;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112eb0508);
  puVar4 = &UNK_11052b8e0;
  func_0x000107c613fc(&UNK_11052b8e0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(undefined8 *)(puVar4 + 0x20) = 0xc000000000000000;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  pcStack_50 = FUN_10261baf0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = (code *)&UNK_1000b0c7c;
  puStack_58 = &UNK_11052b8f8;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c41864(uVar7);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 10261b4cc; end: 10261b523; -[_TtC34MapCustomizationTrayImplementation21NativeCameraPresenter navigationController:willShowViewController:animated:] */

/* WARNING: Possible PIC construction at 0x00010261b510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010261b514) */

void FUN_10261b4cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c53dec(param_3,param_2,1);
  func_0x000107c53dec(param_4,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10261b524; end: 10261b58f; -[_TtC34MapCustomizationTrayImplementation21NativeCameraPresenter presentationControllerDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261b524(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = _DAT_112eb0510;
  lVar3 = *(long *)(param_1 + _DAT_112eb0510);
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
    puVar2[1] = 0xc000000000000000;
    *puVar2 = 0;
    func_0x000107c61174(param_1);
    func_0x000107c6144c(lVar3);
  }
  *(undefined8 *)(param_1 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10261b590; end: 10261b60f;  */

undefined1  [16] FUN_10261b590(ulong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_88 [56];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = param_1;
  func_0x000107c5faec();
  func_0x000107c6068c(auStack_88,uVar8);
  puVar1 = auStack_88;
  func_0x000107c5fb58(puVar1,uVar6,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0) {
    uVar9 = 0;
  }
  else {
    while( true ) {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 8);
      func_0x000107c5faec();
      uVar3 = param_1;
      puVar4 = puVar1;
      func_0x000107c5faec();
      if (uVar2 == uVar3 && puVar1 == puVar4) break;
      puVar5 = puVar1;
      func_0x000107c605b8(uVar2,puVar1,uVar3,puVar4,0);
      uVar9 = (uint)uVar2;
      func_0x000107c6142c(puVar1);
      func_0x000107c6142c(puVar4);
      if (((uVar2 & 1) != 0) ||
         (uVar7 = uVar7 + 1 & ~uVar6, puVar1 = puVar5,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0))
      goto LAB_10261b6e8;
    }
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(puVar4);
    uVar9 = 1;
  }
LAB_10261b6e8:
  auVar10._8_4_ = uVar9 & 1;
  auVar10._0_8_ = uVar7;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 10261b610; end: 10261b707;  */

undefined1  [16] FUN_10261b610(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = param_2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    while( true ) {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar6 * 8);
      func_0x000107c5faec();
      uVar2 = param_1;
      uVar3 = param_2;
      func_0x000107c5faec();
      if (uVar1 == uVar2 && param_2 == uVar3) break;
      uVar4 = param_2;
      func_0x000107c605b8(uVar1,param_2,uVar2,uVar3,0);
      uVar7 = (uint)uVar1;
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar3);
      if (((uVar1 & 1) != 0) ||
         (uVar6 = uVar6 + 1 & ~uVar5, param_2 = uVar4,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0))
      goto LAB_10261b6e8;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar3);
    uVar7 = 1;
  }
LAB_10261b6e8:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 10261b708; end: 10261b913;  */

void FUN_10261b708(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  long lVar5;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar5 = *(long *)PTR__UIImagePickerControllerOriginalImage_110345cc0;
    func_0x000107c61434();
    FUN_10261b590(lVar5);
    if ((param_2 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar5 * 0x20,auStack_50);
      func_0x000107c6142c(param_1);
      uVar1 = 0;
      FUN_10261bcdc(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
      puVar2 = &uStack_58;
      func_0x000107c6147c(puVar2,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
      uVar1 = uStack_58;
      if ((int)puVar2 == 0) {
        uVar1 = 0;
      }
      goto LAB_10261b7b4;
    }
    func_0x000107c6142c(param_1);
  }
  uVar1 = 0;
LAB_10261b7b4:
  puVar3 = &UNK_11052ba70;
  func_0x000107c613fc(&UNK_11052ba70,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
  func_0x000107c61174(uVar1);
  func_0x000107c61174();
  uVar4 = 0x80;
  func_0x0001009548b0(0x80,0,0x3c,4,0,0,&UNK_10dac4ab0,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 10261b914; end: 10261baef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261b914(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  ppuVar5 = &puStack_70;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 0;
    func_0x000107c5f870();
    uVar6 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
    func_0x000107c5f86c(uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff));
    FUN_10261bcdc(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c614e8();
    lVar2 = lVar1;
    func_0x000107c3f3e8();
    if ((int)lVar2 != 0) {
      puVar4 = &UNK_11052b930;
      func_0x000107c613fc(&UNK_11052b930,0x18,7);
      *(long *)(puVar4 + 0x10) = unaff_x20;
      pcStack_50 = (code *)0x10261bb18;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      pcStack_60 = FUN_10261b454;
      puStack_58 = &UNK_11052b948;
      puStack_48 = puVar4;
      func_0x000107c60bc4(&puStack_70);
      puVar4 = puStack_48;
      func_0x000107c61174();
      func_0x000107c61574(puVar4);
      func_0x000107c4b750(lVar1);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(lVar1);
      return;
    }
    func_0x000107c61170(lVar1);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112eb0510);
  *(undefined8 *)(unaff_x20 + _DAT_112eb0510) = 0;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112eb0508);
  puVar4 = &UNK_11052b8e0;
  func_0x000107c613fc(&UNK_11052b8e0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(undefined8 *)(puVar4 + 0x20) = 0xc000000000000000;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  pcStack_50 = FUN_10261baf0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = (code *)&UNK_1000b0c7c;
  puStack_58 = &UNK_11052b8f8;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c41864(uVar7);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 10261baf0; end: 10261bb1f;  */

void FUN_10261baf0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  if (lVar1 != 0) {
    func_0x00010006c00c(uVar2,uVar3);
    puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28);
    *puVar4 = uVar2;
    puVar4[1] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
    return;
  }
  return;
}



/* Entry: 10261bb20; end: 10261bb7f;  */

void FUN_10261bb20(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10261be24;
  plVar5[9] = lVar2;
  plVar5[10] = lVar6;
  plVar5[8] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar5[0xb] = lVar3;
  uVar4 = 0x112d45220;
  func_0x00010261bd1c(0x112d45220,0xff,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261b368,lVar2,uVar4);
  return;
}



/* Entry: 10261bb80; end: 10261bbef;  */

void FUN_10261bb80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10261be20;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10261bbf0; end: 10261bc53;  */

void FUN_10261bbf0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10261be28;
  plVar3[8] = lVar1;
  plVar3[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261aea8,0,0);
  return;
}



/* Entry: 10261bc54; end: 10261bc77;  */

void FUN_10261bc54(void)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10261bc78; end: 10261bcdb;  */

void FUN_10261bc78(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x10261be2c;
  plVar4[0xc] = lVar3;
  plVar4[0xd] = lVar2;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  plVar4[0xe] = lVar2;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0xf] = lVar3;
  lVar3 = 0x112d45220;
  func_0x00010261bd1c(0x112d45220,0xff,puVar1,PTR___sScMScAsMc_11034fc78);
  plVar4[0x10] = lVar3;
  func_0x000107c5fca8();
  plVar4[0x11] = lVar2;
  plVar4[0x12] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261a980,lVar2,lVar3);
  return;
}



/* Entry: 10261bcdc; end: 10261bd5b;  */

void FUN_10261bcdc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10261bd5c; end: 10261bdbf;  */

void FUN_10261bd5c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10261bdc0;
  plVar4[0xc] = lVar3;
  plVar4[0xd] = lVar2;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  plVar4[0xe] = lVar2;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0xf] = lVar3;
  lVar3 = 0x112d45220;
  func_0x00010261bd1c(0x112d45220,0xff,puVar1,PTR___sScMScAsMc_11034fc78);
  plVar4[0x10] = lVar3;
  func_0x000107c5fca8();
  plVar4[0x11] = lVar2;
  plVar4[0x12] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261a600,lVar2,lVar3);
  return;
}



/* Entry: 10261bdc0; end: 10261bdfb;  */

void FUN_10261bdc0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010261bdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10261bdfc; end: 10261be3b;  */

void FUN_10261bdfc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10261be3c; end: 10261be9f; -[_TtC34MapCustomizationTrayImplementation34MapCustomizationTrayViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261be3c(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112eb0558) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010ef218f0,
                      "MapCustomizationTrayImplementation/MapCustomizationTrayViewController.swift",
                      0x4b,2,9,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10261bea0);
  (*pcVar1)();
}



/* Entry: 10261bea0; end: 10261beff; -[_TtC34MapCustomizationTrayImplementation34MapCustomizationTrayViewController init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10261bea0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_30;
  long lStack_28;
  
  plVar2 = &lStack_30;
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112eb0558) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c53dec();
  return (undefined1 *)plVar2;
}



/* Entry: 10261bf00; end: 10261bf4f; -[_TtC34MapCustomizationTrayImplementation34MapCustomizationTrayViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261bf00(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + _DAT_112eb0558) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setView__112666308);
    return;
  }
  lVar1 = param_1;
  func_0x000107c614f0();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_loadView_112604be0);
  return;
}



/* Entry: 10261bf50; end: 10261bfaf; -[_TtC34MapCustomizationTrayImplementation34MapCustomizationTrayViewController initWithNibName:bundle:] */

void FUN_10261bf50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapCustomizationTrayImplementation.MapCustomizationTrayViewController",0x45,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10261bf7c);
  (*pcVar1)();
}



/* Entry: 10261bfb0; end: 10261bfbf; -[_TtC34MapCustomizationTrayImplementation34MapCustomizationTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261bfb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb0558));
  return;
}



/* Entry: 10261bfc0; end: 10261bfdf;  */

void FUN_10261bfc0(void)

{
  func_0x000107c61168(&PTR_PTR_112854d08);
  return;
}



/* Entry: 10261bfe0; end: 10261c9b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10261bfe0(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined *puVar21;
  undefined8 uVar22;
  long unaff_x20;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  func_0x000100083b20(&puStack_98);
  puVar3 = puStack_98;
  puVar2 = puStack_98;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar3;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(puVar3);
    if (puVar2 != (undefined *)0x0) {
      func_0x000100083b20(&puStack_98);
      puVar3 = puStack_98;
      puVar4 = *(undefined **)(puStack_98 + _DAT_113083898);
      func_0x000107c61174();
      func_0x000107c61170(puVar3);
      puVar3 = puVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (puVar3 != (undefined *)0x0) {
        func_0x000100083b20(&puStack_98);
        puVar4 = puStack_98;
        puVar5 = puStack_98;
        func_0x000107c3f1dc();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        puVar4 = puVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        if (puVar4 == (undefined *)0x0) {
          func_0x000107c615e8(puVar2);
          puVar2 = puVar3;
        }
        else {
          func_0x000100083b20(&puStack_98);
          puVar5 = puStack_98;
          lVar6 = *(long *)(puStack_98 + _DAT_112fcd138);
          func_0x000107c61174();
          func_0x000107c61170(puVar5);
          lVar7 = lVar6;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          if (lVar7 != 0) {
            lVar6 = 0;
            FUN_10261bfc0();
            func_0x000107c610f8();
            func_0x000107c453e4();
            puVar5 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
            func_0x000107c610f8();
            func_0x000107c61174();
            func_0x000107c483f8();
            func_0x000107c569d4();
            func_0x000107c61174();
            puVar8 = puVar5;
            func_0x000107c5de64();
            func_0x000107c61180();
            if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10261c744);
              (*pcVar1)();
            }
            puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
            func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
            func_0x000107c3fa94();
            func_0x000107c61180();
            func_0x000107c52b50(puVar8);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar9);
            puVar8 = PTR_PTR_1126aead8;
            func_0x000107c610f8();
            func_0x000107c4807c();
            func_0x000107c61170(lVar6);
            puVar9 = PTR_PTR_1126b0fb8;
            func_0x000107c610f8();
            func_0x000107c463e8();
            if (puVar9 != (undefined *)0x0) {
              puVar10 = puVar4;
              func_0x000107c4c1b0();
              func_0x000107c61180();
              func_0x000107c61170(puVar9);
              puVar11 = PTR_PTR_1126afe50;
              func_0x000107c610f8();
              func_0x000107c4842c();
              func_0x000107c561c0();
              func_0x000100083b20(&puStack_98);
              puVar9 = puStack_98;
              puVar12 = puStack_98;
              func_0x000107c4c1ec();
              func_0x000107c61180();
              func_0x000107c615e8(puVar9);
              func_0x000100083b20(&puStack_98);
              puVar9 = puStack_98;
              puVar13 = puStack_98;
              func_0x000107c4c1e0();
              func_0x000107c61180();
              func_0x000107c615e8(puVar9);
              func_0x000100083b20(&puStack_98);
              puVar9 = puStack_98;
              puVar14 = puStack_98;
              func_0x000107c4c1dc();
              func_0x000107c61180();
              func_0x000107c615e8(puVar9);
              func_0x000107c615f0(puVar3);
              func_0x000100083b20(&puStack_98);
              puVar21 = puStack_98;
              puVar15 = puVar10;
              func_0x000107c615f0();
              func_0x00010261cb94();
              puVar9 = &UNK_11052bb90;
              func_0x000107c613fc(&UNK_11052bb90,0x18,7);
              func_0x000107c61644(puVar9 + 0x10);
              puVar16 = PTR_PTR_1126aacc0;
              func_0x000107c610f8();
              pcStack_78 = FUN_10261d264;
              puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_90 = 0x42000000;
              uStack_88 = 0x10261d428;
              puStack_80 = &UNK_11052bba8;
              ppuVar17 = &puStack_98;
              puStack_70 = puVar9;
              func_0x000107c60bc4();
              func_0x000107c45520();
              func_0x000107c615e8(puVar12);
              func_0x000107c615e8(puVar13);
              func_0x000107c615e8(puVar14);
              func_0x000107c615e8(puVar3);
              func_0x000107c615e8(puVar21);
              func_0x000107c615e8(puVar10);
              func_0x000107c61170(puVar15);
              func_0x000107c60bd0(ppuVar17);
              func_0x000107c61574(puStack_70);
              lVar18 = lVar6;
              FUN_10261cfac(lVar6);
              func_0x000107c53e8c(puVar16);
              func_0x000107c615e8(lVar18);
              lVar19 = 0;
              FUN_10261ae70();
              lVar18 = lVar19;
              func_0x000107c610f8();
              *(undefined8 *)(lVar18 + _DAT_112eb0510) = 0;
              *(undefined **)(lVar18 + _DAT_112eb0508) = puVar8;
              puVar9 = PTR_s_init_1125d9248;
              lStack_a8 = lVar18;
              lStack_a0 = lVar19;
              func_0x000107c61174(puVar8);
              plVar20 = &lStack_a8;
              func_0x000107c61154(plVar20,puVar9);
              func_0x000107c56964(puVar16);
              func_0x000107c61170(plVar20);
              func_0x000100083b20(&puStack_98);
              puVar9 = puStack_98;
              func_0x000107c56694(puVar16);
              func_0x000107c61170(puVar9);
              func_0x000100083b20(&puStack_98);
              puVar9 = puStack_98;
              func_0x000107c61174(puVar8);
              puVar21 = puVar8;
              FUN_10261d480();
              func_0x000107c61170(puVar9);
              func_0x000107c61170(puVar8);
              func_0x000107c55184(puVar16);
              func_0x000107c61170(puVar21);
              puVar21 = PTR_PTR_1126aacc8;
              func_0x000107c610f8(PTR_PTR_1126aacc8);
              func_0x000107c453e4();
              func_0x000100083b20(&puStack_98);
              func_0x000107c61170();
              puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
              func_0x000107c46ed0();
              func_0x000107c553f4(puVar21);
              func_0x000107c61170(puVar9);
              puVar12 = puVar21;
              func_0x000107c55198(puVar21);
              func_0x000100083b20(&puStack_98);
              puVar9 = puStack_98;
              FUN_10261dab0();
              func_0x000107c61170(puVar9);
              func_0x000107c551a0(puVar21);
              func_0x000107c61170(puVar12);
              puVar9 = PTR_PTR_1126aacd0;
              func_0x000107c610f8();
              func_0x000107c49520();
              puVar12 = puVar9;
              func_0x000107c5dbc0();
              func_0x000107c61180();
              if (puVar12 != (undefined *)0x0) {
                func_0x000100083b20(&puStack_98);
                puVar13 = puStack_98;
                FUN_10261db14(puVar12);
                func_0x000107c615e8(puVar12);
                func_0x000107c61170(puVar13);
              }
              func_0x000107c615e8(puVar2);
              func_0x000107c61170(puVar8);
              func_0x000107c615e8(puVar3);
              func_0x000107c615e8(puVar10);
              func_0x000107c61170(puVar11);
              func_0x000107c615e8(lVar7);
              func_0x000107c61170(puVar21);
              func_0x000107c61170(puVar16);
              func_0x000107c615e8(puVar4);
              func_0x000107c61170(puVar5);
              uVar22 = *(undefined8 *)(lVar6 + _DAT_112eb0558);
              *(undefined **)(lVar6 + _DAT_112eb0558) = puVar9;
              func_0x000107c61170(uVar22);
              uVar22 = *(undefined8 *)(unaff_x20 + 0x90);
              *(long *)(unaff_x20 + 0x90) = lVar6;
              func_0x000107c61170(uVar22);
              return puVar5;
            }
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10261c748);
            (*pcVar1)();
          }
          func_0x000107c615e8(puVar2);
          func_0x000107c615e8(puVar3);
          puVar2 = puVar4;
        }
      }
      func_0x000107c615e8(puVar2);
    }
  }
  return (undefined *)0x0;
}



/* Entry: 10261c9b8; end: 10261c9f3;  */

void FUN_10261c9b8(void)

{
  long unaff_x20;
  
  func_0x00010261c894(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 10261c9f4; end: 10261caab;  */

void FUN_10261c9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = param_10;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3;
  *(undefined8 *)(unaff_x20 + 0x48) = param_4;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_7;
  *(undefined8 *)(unaff_x20 + 0x30) = param_11;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x60) = param_12;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  *(undefined8 *)(unaff_x20 + 0x70) = param_8;
  *(undefined8 *)(unaff_x20 + 0x10) = param_14;
  *(undefined8 *)(unaff_x20 + 0x18) = param_5;
  return;
}



/* Entry: 10261caac; end: 10261cce3;  */

undefined1  [16] FUN_10261caac(double param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar2 = *(undefined **)(unaff_x20 + 0x88);
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5ee58();
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10261cb8c);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10261cb90);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10261cb94);
      (*pcVar1)();
    }
    puVar4 = PTR___sSiN_11034deb0;
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x88);
    *(undefined **)(unaff_x20 + 0x80) = puVar4;
    *(undefined **)(unaff_x20 + 0x88) = puVar3;
    func_0x000107c61434(puVar3);
    func_0x000107c6142c(uVar5);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar4 = *(undefined **)(unaff_x20 + 0x80);
    puVar3 = puVar2;
  }
  func_0x000107c61434(puVar2);
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = puVar4;
  return auVar6;
}



/* Entry: 10261cce4; end: 10261cd3f;  */

void FUN_10261cce4(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10261cd40(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10261cd40; end: 10261cfab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261cd40(uint param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uStack_68;
  undefined4 uStack_64;
  
  lVar2 = *(long *)(unaff_x20 + 0x90);
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x000100083b20(&uStack_68);
    lVar4 = CONCAT44(uStack_64,uStack_68);
    lVar3 = lVar4;
    func_0x000107c5194c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar3 != 0) {
      func_0x000107c61170(lVar3);
      func_0x000100083b20(&uStack_68);
      uVar10 = CONCAT44(uStack_64,uStack_68);
      uVar11 = uVar10;
      func_0x000107c4ffe8(uVar10);
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      func_0x000107c615e8(uVar11);
    }
    func_0x000100083b20(&uStack_68);
    lVar4 = CONCAT44(uStack_64,uStack_68);
    uVar10 = *(undefined8 *)(lVar4 + _DAT_112fa92b8);
    func_0x000107c61170();
    FUN_10261caac();
    func_0x000100083b20(&uStack_68);
    uVar11 = *(undefined8 *)(CONCAT44(uStack_64,uStack_68) + _DAT_112fa92c0);
    func_0x000107c61170();
    if (3 < param_1) {
      FUN_1026168cc(0);
      uStack_68 = param_1;
      func_0x000107c60614();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10261cfac);
      (*pcVar1)();
    }
    uVar7 = *(undefined8 *)(&UNK_10dac4bf8 + (ulong)param_1 * 8);
    uVar9 = *(undefined8 *)(&UNK_10dac4c18 + (ulong)param_1 * 8);
    func_0x000100083b20(&uStack_68);
    uVar8 = *(undefined8 *)(CONCAT44(uStack_64,uStack_68) + _DAT_112fa92c8);
    func_0x000107c61170();
    uVar5 = 0;
    func_0x00010439c014(0);
    func_0x000107c610f8();
    func_0x00010439b9d8(uVar5,uVar10,lVar4,param_2,uVar11,uVar7,uVar9,uVar8,0);
    puVar6 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    func_0x000100083b20(&uStack_68);
    uVar11 = CONCAT44(uStack_64,uStack_68);
    uVar5 = uVar11;
    func_0x000107c3eda8(uVar11);
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    func_0x000100083b20(&uStack_68);
    func_0x000107c42c1c(CONCAT44(uStack_64,uStack_68));
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(CONCAT44(uStack_64,uStack_68));
  }
  return;
}



/* Entry: 10261cfac; end: 10261d0c7;  */

long FUN_10261cfac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  lVar1 = lStack_38;
  func_0x000107c41414();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c409cc(lVar2,param_2,param_1);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      func_0x000100083b20(&lStack_38);
      lVar2 = lStack_38;
      func_0x000107c5dbd4(lStack_38);
      func_0x000107c61180();
      func_0x000107c61170(lStack_38);
      lVar3 = lVar1;
      func_0x000107c40978(lVar1,param_2,lVar2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
      func_0x000107c41408(lVar3);
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 10261d0c8; end: 10261d17b;  */

void FUN_10261d0c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 10261d17c; end: 10261d20b;  */

void FUN_10261d17c(void)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  lVar1 = lStack_38;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_38);
    lVar2 = lStack_38;
    func_0x000107c4ffe8(lStack_38);
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 10261d20c; end: 10261d21b;  */

undefined1  [16] FUN_10261d20c(void)

{
  return ZEXT816(0x11052bb70);
}



/* Entry: 10261d21c; end: 10261d23b;  */

void FUN_10261d21c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb05d0);
  return;
}



/* Entry: 10261d23c; end: 10261d263; -[_TtC34MapCustomizationTrayImplementation32MapCustomizationTrayViewProvider plusSubscribeDidDismiss] */

void FUN_10261d23c(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_10261d17c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10261d264; end: 10261d26b;  */

void FUN_10261d264(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10261cd40(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10261d26c; end: 10261d2b3;  */

void FUN_10261d26c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10261d2b4; end: 10261d35b;  */

void FUN_10261d2b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  uVar4 = param_4;
  func_0x000107c61174(param_4);
  uVar5 = param_2;
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10261d35c; end: 10261d3db;  */

/* WARNING: Possible PIC construction at 0x00010261d3c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010261d3c4) */

void FUN_10261d35c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10261d3dc; end: 10261d463;  */

void FUN_10261d3dc(long param_1,undefined8 param_2)

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



/* Entry: 10261d464; end: 10261d47f;  */

void FUN_10261d464(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10261d480; end: 10261da27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10261d480(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  ppuVar8 = &puStack_90;
  ppuVar9 = &puStack_90;
  ppuVar11 = &puStack_90;
  ppuVar12 = &puStack_90;
  ppuVar13 = &puStack_90;
  ppuVar14 = &puStack_90;
  ppuVar15 = &puStack_90;
  puVar2 = PTR_PTR_1126aacd8;
  func_0x000107c610f8(PTR_PTR_1126aacd8);
  func_0x000107c453e4();
  func_0x00010261e398();
  puVar3 = puVar2;
  func_0x000107c54488(puVar2);
  func_0x00010261e2ec();
  puVar4 = puVar3;
  func_0x0001004575f0();
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c5cb24(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c52ad4(puVar2);
  func_0x000107c61170(puVar3);
  uVar5 = (ulong)(*(long *)(param_2 + _DAT_112eb06c8) != 0);
  func_0x00010488010c(uVar5);
  uVar6 = uVar5;
  func_0x0001004575f0();
  func_0x000107c61574(uVar5);
  uVar5 = uVar6;
  func_0x000107c5cb24(uVar6);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c55188(puVar2);
  func_0x000107c61170(uVar5);
  puVar3 = &UNK_11052bbe0;
  puVar4 = puVar3;
  func_0x000107c613fc(&UNK_11052bbe0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_10261da28;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10261d26c;
  puStack_78 = &UNK_11052bbf8;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c5a208(puVar2);
  func_0x000107c60bd0(ppuVar7);
  puVar4 = puVar3;
  func_0x000107c613fc(&UNK_11052bbe0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_2);
  pcStack_70 = (code *)0x10261da30;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10261d2b4;
  puStack_78 = &UNK_11052bc20;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c54fcc(puVar2);
  func_0x000107c60bd0(ppuVar8);
  puVar4 = puVar3;
  func_0x000107c613fc(&UNK_11052bbe0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_2);
  pcStack_70 = (code *)0x10261da38;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)0x10261daa8;
  puStack_78 = &UNK_11052bc48;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c56d8c(puVar2);
  func_0x000107c60bd0(ppuVar9);
  puVar10 = puVar3;
  func_0x000107c613fc(&UNK_11052bbe0,0x18,7);
  func_0x000107c61614(puVar10 + 0x10,param_2);
  puVar4 = &UNK_11052bc80;
  func_0x000107c613fc(&UNK_11052bc80,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar10;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcStack_70 = (code *)0x10261da40;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10261d35c;
  puStack_78 = &UNK_11052bc98;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar4);
  func_0x000107c57708(puVar2);
  func_0x000107c60bd0(ppuVar11);
  puVar4 = puVar3;
  func_0x000107c613fc(&UNK_11052bbe0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_2);
  pcStack_70 = (code *)0x10261da48;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)0x10261daac;
  puStack_78 = &UNK_11052bcc0;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c57c30(puVar2);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c613fc(&UNK_11052bbe0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_2);
  pcStack_70 = (code *)0x10261da50;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_1000f6b44;
  puStack_78 = &UNK_11052bce8;
  puStack_68 = puVar3;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_68);
  func_0x000107c57de0(puVar2);
  func_0x000107c60bd0(ppuVar13);
  func_0x000100083b20(&puStack_90);
  puVar3 = puStack_90;
  puVar4 = puStack_90;
  func_0x000107c5c360();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar3;
    func_0x000107c41050(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c4a564(puVar4);
    func_0x000107c61170(puVar4);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c557f4(puVar2);
  func_0x000107c61170(puVar3);
  puVar3 = &UNK_11052bbe0;
  puVar4 = puVar3;
  func_0x000107c613fc(&UNK_11052bbe0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_2);
  pcStack_70 = (code *)0x10261da58;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_100e46924;
  puStack_78 = &UNK_11052bd10;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c59180(puVar2);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c613fc(&UNK_11052bbe0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_2);
  pcStack_70 = (code *)0x10261da60;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_1000f6b44;
  puStack_78 = &UNK_11052bd38;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c58ffc(puVar2);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c61604(param_2 + _DAT_112eb06e0,param_1);
  return puVar2;
}



/* Entry: 10261da28; end: 10261daaf;  */

undefined * FUN_10261da28(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  puVar1 = (undefined *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b3540;
    func_0x000107c61168(PTR_PTR_1126b3540);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c5061c(puVar2);
    func_0x000107c61180();
  }
  else {
    puVar2 = (undefined *)(ulong)(param_1 & 1);
    FUN_10261e4b4(puVar2);
  }
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 10261dab0; end: 10261db13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10261dab0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112eb0700;
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb0700);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10261f5c8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 10261db14; end: 10261dcdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261db14(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  ulong uVar5;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112eb06b0);
  func_0x000107c6157c(uVar5);
  func_0x000100083b20(&lStack_c8);
  uVar2 = *(undefined8 *)(lStack_c8 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_c8);
  uVar3 = uVar2;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  puVar4 = &UNK_11052bdd8;
  func_0x000107c613fc(&UNK_11052bdd8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  uStack_80 = uVar5 | 0x8000000000000000;
  lStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0x22;
  uStack_b0 = 0;
  uStack_98 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uStack_a0 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uStack_88 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  uStack_90 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  lStack_a8 = 0;
  uStack_68 = 0;
  pcStack_60 = FUN_102622e04;
  uStack_78 = uVar2;
  uStack_70 = param_2;
  puStack_58 = puVar4;
  func_0x000100083b20(&lStack_150);
  lVar1 = lStack_150;
  uStack_108 = uStack_80;
  uStack_110 = uStack_88;
  uStack_f8 = uStack_70;
  uStack_100 = uStack_78;
  pcStack_e8 = pcStack_60;
  uStack_f0 = uStack_68;
  puStack_e0 = puStack_58;
  uStack_138 = CONCAT71(uStack_af,uStack_b0);
  uStack_148 = uStack_c0;
  lStack_150 = lStack_c8;
  uStack_140 = uStack_b8;
  uStack_128 = uStack_a0;
  lStack_130 = lStack_a8;
  uStack_118 = uStack_90;
  uStack_120 = uStack_98;
  func_0x00010008a7c8(&uStack_d0,&lStack_150);
  func_0x000107c61574(lVar1);
  func_0x000100083b20(&lStack_150);
  func_0x000107c61574(uStack_d0);
  lVar1 = lStack_130;
  uVar3 = uStack_138;
  func_0x000102623030(&lStack_150,uStack_138);
  (**(code **)(lVar1 + 8))(param_1,uVar3,lVar1);
  FUN_102514a34(&lStack_c8);
  func_0x000102623010(&lStack_150);
  return;
}



/* Entry: 10261dcdc; end: 10261e09b;  */

void FUN_10261dcdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb06a8,&UNK_10dac4c40);
  puVar1 = &UNK_11052bd70;
  func_0x000107c613fc(&UNK_11052bd70,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x0001000823a8(FUN_10261e09c,puVar1);
  return;
}



/* Entry: 10261e09c; end: 10261e0d7;  */

void FUN_10261e09c(void)

{
  long unaff_x20;
  
  func_0x00010261de10(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 10261e0d8; end: 10261e2eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261e0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112eb06b0;
  func_0x0001000285a8(0x112eb00f8,&UNK_10dac43c8);
  func_0x000107c613fc();
  uVar3 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112eb06b8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112eb06c0) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb06c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb06d0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb06d8);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112eb06e0,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb06e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb06f0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112eb06f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0700) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0708) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0710) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0718) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0720) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0728) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0730) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0738) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0740) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0748) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0750) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0758) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0760) = param_12;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10261e2ec; end: 10261e40f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_10261e2ec(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_38;
  
  lVar1 = _DAT_112eb06b8;
  ppuVar2 = *(undefined ***)(unaff_x20 + _DAT_112eb06b8);
  ppuVar4 = ppuVar2;
  if (ppuVar2 == (undefined **)0x0) {
    puVar3 = PTR_PTR_1126b1db8;
    func_0x000107c610f8();
    func_0x000107c474a4();
    puStack_38 = puVar3;
    func_0x0001000285a8(0x112eb07c0,&UNK_10dac4dc8);
    func_0x000107c613fc();
    ppuVar4 = &puStack_38;
    func_0x00010042e6a0();
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined ***)(unaff_x20 + lVar1) = ppuVar4;
    func_0x000107c6157c();
    func_0x000107c61574(uVar5);
    ppuVar2 = (undefined **)0x0;
  }
  func_0x000107c6157c(ppuVar2);
  return ppuVar4;
}



/* Entry: 10261e410; end: 10261e4b3;  */

undefined * FUN_10261e410(uint param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  puVar1 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b3540;
    func_0x000107c61168(PTR_PTR_1126b3540);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c5061c(puVar2);
    func_0x000107c61180();
  }
  else {
    puVar2 = (undefined *)(ulong)(param_1 & 1);
    FUN_10261e4b4(puVar2);
  }
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 10261e4b4; end: 10261e667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10261e4b4(undefined8 param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar1 = _DAT_112eb06d0;
  lVar3 = *(long *)(unaff_x20 + _DAT_112eb06d0);
  if (lVar3 != 0) {
    func_0x000107c5d978();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c4b88c();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 == 0) goto LAB_10261e528;
LAB_10261e544:
      func_0x000107c4aad8(lVar4);
      param_2 = param_1;
      func_0x000107c4b6f0(lVar4);
      func_0x000107c60a04(param_1,param_2);
      goto LAB_10261e580;
    }
LAB_10261e528:
    lVar4 = *(long *)(unaff_x20 + lVar1);
    if (lVar4 != 0) {
      func_0x000107c5d974();
      func_0x000107c61180();
      if (lVar4 != 0) goto LAB_10261e544;
    }
  }
  FUN_10261fb58();
  lVar4 = 0;
LAB_10261e580:
  puVar5 = PTR_PTR_1126b1d38;
  func_0x000107c610f8();
  func_0x000107c48ed0(param_1,param_2);
  puVar6 = &UNK_11052c0a8;
  func_0x000107c613fc(&UNK_11052c0a8,0x30,7);
  *(long *)(puVar6 + 0x10) = unaff_x20;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar6[0x20] = param_3 & 1;
  *(undefined **)(puVar6 + 0x28) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  func_0x000107c61174(puVar2);
  uVar7 = 0x80;
  func_0x0001001ca524(0x80,0,0x3c,4,0,0,&UNK_10dac4dc0,puVar6,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar5);
  return puVar2;
}



/* Entry: 10261e668; end: 10261e723;  */

undefined * FUN_10261e668(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  puVar1 = (undefined *)(param_4 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    param_1 = PTR_PTR_1126b3540;
    func_0x000107c61168(PTR_PTR_1126b3540);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c5061c(param_1);
    func_0x000107c61180();
  }
  else {
    FUN_10261e724(param_1,param_2,param_3);
  }
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 10261e724; end: 10261e8eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10261e724(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (*(long *)(unaff_x20 + _DAT_112eb06d0) != 0) {
    func_0x000107c44e54();
  }
  func_0x000107c4aad8(param_2);
  uVar4 = param_1;
  func_0x000107c4b6f0(param_2);
  func_0x000107c60a04(param_1,uVar4);
  puVar2 = PTR_PTR_1126b1d38;
  func_0x000107c610f8();
  func_0x000107c48ed0(param_1,uVar4);
  puVar3 = puVar2;
  func_0x00010261e398();
  if ((((ulong)puVar3 & 1) == 0) || (param_3 == 0)) {
    puVar3 = &UNK_11052c008;
    func_0x000107c613fc(&UNK_11052c008,0x28,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    *(undefined **)(puVar3 + 0x20) = puVar1;
    func_0x000107c61174();
    func_0x000107c61174(puVar2);
    func_0x000107c61174(puVar1);
    puVar5 = &UNK_10dac4d68;
  }
  else {
    puVar3 = &UNK_11052c030;
    func_0x000107c613fc(&UNK_11052c030,0x38,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    *(long *)(puVar3 + 0x20) = param_3;
    *(undefined8 *)(puVar3 + 0x28) = param_4;
    *(undefined **)(puVar3 + 0x30) = puVar1;
    func_0x000107c61174(param_4);
    func_0x000107c61174();
    func_0x000107c61174(puVar2);
    func_0x000107c61174(puVar1);
    func_0x000107c61174(param_3);
    puVar5 = &UNK_10dac4d78;
  }
  uVar4 = 0x80;
  func_0x0001001ca524(0x80,0,0x3c,4,0,0,puVar5,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 10261e8ec; end: 10261e947;  */

void FUN_10261e8ec(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10261e948(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10261e948; end: 10261ebb7;  */

/* WARNING: Possible PIC construction at 0x00010261ea7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010261eb5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010261eb90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010261eb60) */
/* WARNING: Removing unreachable block (ram,0x00010261ea80) */
/* WARNING: Removing unreachable block (ram,0x00010261ea90) */
/* WARNING: Removing unreachable block (ram,0x00010261eb94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261e948(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  
  lVar1 = _DAT_112eb06d0;
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112eb06d0);
  if (uVar2 != 0) {
    func_0x000107c5d978();
    func_0x000107c61180();
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c4b88c();
      func_0x000107c61180();
      uVar4 = param_1;
      func_0x000107c4b88c();
      func_0x000107c61180();
      FUN_102623b28(0,0x112eb0798,&PTR_PTR_1126b1d80);
      uVar5 = uVar3;
      uVar8 = uVar4;
      func_0x000107c60118();
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar4);
      if ((uVar5 & 1) != 0) {
        uVar3 = uVar2;
        func_0x000107c44ed8();
        func_0x000107c61180();
        uVar4 = uVar3;
        func_0x000107c5faec();
        uVar5 = uVar8;
        func_0x000107c61170(uVar3);
        func_0x000107c44ed8();
        func_0x000107c61180();
        uVar3 = param_1;
        func_0x000107c5faec();
        func_0x000107c61170(param_1);
        if (uVar4 == uVar3 && uVar8 == uVar5) {
          func_0x000107c61170(uVar2);
        }
        else {
          func_0x000107c605b8(uVar4,uVar8,uVar3,uVar5,0);
          func_0x000107c61170(uVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar8);
        return;
      }
      func_0x000107c61170(uVar2);
    }
    if (*(long *)(unaff_x20 + lVar1) != 0) {
      func_0x000107c5a334();
    }
  }
  puVar6 = &UNK_11052bfb8;
  func_0x000107c613fc(&UNK_11052bfb8,0x20,7);
  *(long *)(puVar6 + 0x10) = unaff_x20;
  *(ulong *)(puVar6 + 0x18) = param_1;
  puVar7 = &UNK_11052bfe0;
  func_0x000107c613fc(&UNK_11052bfe0,0x20,7);
  *(undefined **)(puVar7 + 0x10) = &UNK_10dac4d50;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  func_0x000107c61174(unaff_x20);
  func_0x000107c61174(param_1);
  func_0x0001001ca524(0x80,0,0x3c,4,0,0,&UNK_10dac4d58,puVar7,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar7);
  return;
}



/* Entry: 10261ebb8; end: 10261ed93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261ebb8(undefined8 param_1,byte param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 auStack_b0 [5];
  undefined8 uStack_88;
  byte bStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined **ppuStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    ppuStack_60 = (undefined **)0x0;
    func_0x000107c61614(auStack_68,0);
    bStack_80 = param_2 & 1;
    ppuStack_60 = &PTR_DAT_11052bd88;
    uStack_88 = param_1;
    uStack_78 = param_3;
    uStack_70 = param_5;
    func_0x000107c61604(auStack_68,param_4);
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_3);
    func_0x000107c615f0(param_5);
    func_0x000100083b20(auStack_b0);
    func_0x00010008a7c8(&uStack_b8,&uStack_88);
    func_0x000107c61574(auStack_b0[0]);
    func_0x000100083b20(auStack_b0);
    func_0x000107c61574(uStack_b8);
    lVar1 = _DAT_112eb06d8;
    func_0x000107c61428(param_4 + _DAT_112eb06d8,auStack_d0,0x21,0);
    FUN_102622c6c(auStack_b0,param_4 + lVar1);
    func_0x000107c614a8(auStack_d0);
    puVar2 = &UNK_11052bf68;
    func_0x000107c613fc(&UNK_11052bf68,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    puVar3 = &UNK_11052bf90;
    func_0x000107c613fc(&UNK_11052bf90,0x20,7);
    *(undefined **)(puVar3 + 0x10) = &UNK_10dac4d38;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    func_0x000107c61174(param_4);
    uVar4 = 0x112d518a8;
    func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
    uVar5 = 0x80;
    func_0x0001001ca524(0x80,0,0x3c,4,0,0,&UNK_10dac4d40,puVar3,uVar4);
    func_0x000107c61170(param_4);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar5);
    func_0x000102618438(&uStack_88);
  }
  return;
}



/* Entry: 10261ed94; end: 10261ee67;  */

void FUN_10261ed94(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = &UNK_11052bf18;
    func_0x000107c613fc(&UNK_11052bf18,0x18,7);
    *(long *)(puVar1 + 0x10) = param_2;
    func_0x000107c61174(param_2);
    uVar2 = 0x112eb07a8;
    func_0x0001000285a8(0x112eb07a8,&UNK_10dac4d18);
    uVar3 = 0x80;
    func_0x0001001ca524(0x80,0,0x3c,4,0,0,&UNK_10dac4d10,puVar1,uVar2);
    func_0x000107c61170(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 10261ee68; end: 10261eecf;  */

void FUN_10261ee68(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  plVar2 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10261eed0;
  plVar2[0x13] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261ef90,0,0);
  return;
}



/* Entry: 10261eed0; end: 10261ef3b;  */

void FUN_10261eed0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261ef3c,uVar3,uVar1);
  return;
}



/* Entry: 10261ef3c; end: 10261ef77;  */

void FUN_10261ef3c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010261ef74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10261ef78; end: 10261ef8f;  */

void FUN_10261ef78(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261ef90,0,0);
  return;
}



/* Entry: 10261ef90; end: 10261f0e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261ef90(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x50);
  lVar1 = lVar4;
  func_0x000107c44ef0();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa0) = lVar4;
  func_0x000107c61170(lVar1);
  if (lVar4 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10261f0e8;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,1);
    uVar2 = 0x112eb07b0;
    func_0x0001000285a8(0x112eb07b0,&UNK_10dac4d28);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
    *(long *)(unaff_x22 + 0x70) = lVar1;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_102620f14;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11052bf30;
    func_0x000107c42fa0(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  FUN_10261e2ec();
  puVar3 = PTR_PTR_1126b1db8;
  func_0x000107c610f8();
  func_0x000107c474a4();
  *(undefined **)(unaff_x22 + 0x50) = puVar3;
  func_0x0001007d6d78(unaff_x22 + 0x50);
  func_0x000107c61574(lVar1);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010261f0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 10261f0e8; end: 10261f13f;  */

void FUN_10261f0e8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xa8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_10261f140;
  }
  else {
    pcVar1 = FUN_10261f204;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10261f140; end: 10261f203;  */

void FUN_10261f140(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  puVar2 = PTR_PTR_1126b1db8;
  func_0x000107c610f8();
  func_0x000107c474a4();
  uVar3 = 0;
  FUN_102623b28(0,0x112eb07b8,&PTR_PTR_1126bc1f0);
  uVar4 = uVar5;
  func_0x000107c5fc48(uVar5,uVar3);
  func_0x000107c52ad0(puVar2);
  func_0x000107c61170(uVar4);
  FUN_10261e2ec();
  *(undefined **)(unaff_x22 + 0x50) = puVar2;
  func_0x0001007d6d78();
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010261f200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5);
  return;
}



/* Entry: 10261f204; end: 10261f297;  */

void FUN_10261f204(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61654();
  func_0x000107c615e8(uVar1);
  func_0x000107c614ac(uVar2);
  FUN_10261e2ec();
  puVar3 = PTR_PTR_1126b1db8;
  func_0x000107c610f8();
  func_0x000107c474a4();
  *(undefined **)(unaff_x22 + 0x50) = puVar3;
  func_0x0001007d6d78();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010261f294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 10261f298; end: 10261f37b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261f298(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + _DAT_112eb06f8) & 1) == 0) {
      *(undefined1 *)(param_1 + _DAT_112eb06f8) = 1;
      puVar1 = &UNK_11052be00;
      func_0x000107c613fc(&UNK_11052be00,0x18,7);
      *(long *)(puVar1 + 0x10) = param_1;
      func_0x000107c61174(param_1);
      uVar2 = 0x80;
      func_0x0001001ca524(0x80,0,0x3c,4,0,0,&UNK_10dac4cc0,puVar1,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar1);
      func_0x000107c61574(uVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10261f37c; end: 10261f417;  */

undefined * FUN_10261f37c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  puVar1 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b3540;
    func_0x000107c61168(PTR_PTR_1126b3540);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c5061c(puVar2);
    func_0x000107c61180();
  }
  else {
    puVar2 = puVar1;
    FUN_10261f418();
  }
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 10261f418; end: 10261f4eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10261f418(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uStack_38;
  
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x00010261e398();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000100083b20(&uStack_38);
    uVar3 = uStack_38;
    func_0x000107c44ef8();
    func_0x000107c61170(uStack_38);
    if ((uVar3 & 1) == 0) goto LAB_10261f4a8;
  }
  else {
    func_0x000100083b20(&uStack_38);
    uVar3 = uStack_38;
    func_0x000107c44efc();
    func_0x000107c61170(uStack_38);
    if ((int)uVar3 == 0) goto LAB_10261f4a8;
  }
  func_0x000109021cd8();
LAB_10261f4a8:
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c43b74(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 10261f4ec; end: 10261f53f;  */

void FUN_10261f4ec(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10261f540();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10261f540; end: 10261f5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261f540(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x00010261e398();
  if ((param_1 & 1) != 0) {
    func_0x000100083b20(&uStack_38);
    uVar1 = uStack_38;
    func_0x000107c551b0(uStack_38,param_2,1);
    func_0x000107c61170(uVar1);
  }
  func_0x000100083b20(&uStack_38);
  func_0x000107c551ac(uStack_38,param_2,1);
  func_0x000107c61170(uStack_38);
  return;
}



/* Entry: 10261f5c8; end: 10261f88b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10261f5c8(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long alStack_68 [3];
  undefined8 uStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126b1d90;
  func_0x000107c610f8(PTR_PTR_1126b1d90);
  func_0x000107c453e4();
  func_0x000100083b20(alStack_68);
  lVar6 = alStack_68[0];
  lVar5 = *(long *)(alStack_68[0] + _DAT_112fa92e8);
  func_0x000107c6157c(lVar5);
  func_0x000107c61170(lVar6);
  if (lVar5 != 0) {
    func_0x000100083b20(alStack_68);
    func_0x000107c61574(lVar5);
    func_0x000102623030(alStack_68,uStack_50);
    (**(code **)(lStack_48 + 0x10))(uStack_50);
    uVar4 = (uint)lStack_48;
    func_0x000102623010(alStack_68);
    param_2 = lStack_48;
    if ((uVar4 & 0xff) != 1) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c490d4();
      func_0x000107c56288(puVar2);
      func_0x000107c61170(puVar3);
      param_2 = lStack_48;
    }
  }
  func_0x000100083b20(alStack_68);
  lVar5 = *(long *)(alStack_68[0] + _DAT_112fa92d8);
  lVar6 = ((long *)(alStack_68[0] + _DAT_112fa92d8))[1];
  func_0x000107c61170();
  if ((char)lVar6 == '\x01') {
    func_0x000100083b20(alStack_68);
    lVar5 = *(long *)(alStack_68[0] + _DAT_112fa92b8);
    func_0x000107c61170();
    func_0x000107c3125c();
    func_0x000107c61180();
    if (lVar5 == 0) {
      lVar6 = 0;
      goto LAB_10261f838;
    }
    lVar6 = lVar5;
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
  }
  else if (lVar5 < 3) {
    if (lVar5 == 0) {
      param_2 = -0x1900000000000000;
      lVar6 = 0x594152545f454d;
    }
    else {
      if (lVar5 == 1) {
        lVar6 = 0x5f594152545f454d;
      }
      else {
        if (lVar5 != 2) {
LAB_10261f868:
          alStack_68[0] = lVar5;
          func_0x000107c60614(&UNK_1106a3a50,alStack_68,&UNK_1106a3a50,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10261f88c);
          (*pcVar1)();
        }
        lVar6 = 0x5f54554f4c4c4143;
      }
      param_2 = -0x10afb6abb3b0b0ac;
    }
  }
  else if (lVar5 == 3) {
    param_2 = -0x13ffffffbab3b6ba;
    lVar6 = 0x4f52505f454d4f48;
  }
  else if (lVar5 == 4) {
    param_2 = -0x11ffbbadbebca0ad;
    lVar6 = 0x55434f465f544550;
  }
  else {
    if (lVar5 != 5) goto LAB_10261f868;
    param_2 = -0x15ffffffffffafbf;
    lVar6 = 0x4d5f4e4f5f544550;
  }
  func_0x000107c5fadc(lVar6,param_2);
  func_0x000107c6142c(param_2);
LAB_10261f838:
  func_0x000107c56fd0(puVar2);
  func_0x000107c61170(lVar6);
  return puVar2;
}



/* Entry: 10261f88c; end: 10261f8f7;  */

void FUN_10261f88c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_10261f8f8(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10261f8f8; end: 10261fa9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261f8f8(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  double dVar8;
  double dVar9;
  long lStack_68;
  
  lVar6 = _DAT_112eb06d0;
  lVar4 = *(long *)(unaff_x20 + _DAT_112eb06d0);
  if (lVar4 == 0) {
    return;
  }
  dVar8 = param_1;
  func_0x000107c5d978();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c51820();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      func_0x000107c4223c(lVar5);
      dVar9 = dVar8;
      func_0x000107c61170(lVar5);
      bVar2 = true;
      lVar4 = *(long *)(unaff_x20 + lVar6);
      dVar3 = dVar8;
      goto joined_r0x00010261f990;
    }
  }
  bVar2 = false;
  lVar4 = *(long *)(unaff_x20 + lVar6);
  dVar3 = 0.0;
  dVar9 = dVar8;
joined_r0x00010261f990:
  if (lVar4 != 0) {
    func_0x000107c5d978();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c3dcac();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar5 != 0) {
        func_0x000107c4223c(lVar5);
        func_0x000107c61170(lVar5);
        bVar1 = false;
        if (dVar3 == param_1) {
          bVar1 = bVar2;
        }
        if ((bVar1) && (dVar9 == param_2)) {
          return;
        }
      }
    }
    lVar6 = *(long *)(unaff_x20 + lVar6);
    if (lVar6 != 0) {
      func_0x000107c5d978();
      func_0x000107c61180();
      if (lVar6 != 0) {
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c466c0(param_1);
        func_0x000107c58bfc(lVar6,param_4,puVar7);
        func_0x000107c61170(puVar7);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c466c0(param_2);
        func_0x000107c526fc(lVar6,param_4,puVar7);
        func_0x000107c61170(puVar7);
        lStack_68 = lVar6;
        func_0x000100087c34(&lStack_68);
        func_0x000107c61170(lVar6);
      }
    }
  }
  return;
}



/* Entry: 10261faa0; end: 10261fb0b;  */

void FUN_10261faa0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261fb0c,uVar1,uVar2);
  return;
}



/* Entry: 10261fb0c; end: 10261fb57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261fb0c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  func_0x000100087c34();
                    /* WARNING: Could not recover jumptable at 0x00010261fb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10261fb58; end: 10261fce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261fb58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong auStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000100083b20(auStack_78);
  uVar2 = auStack_78[0];
  uVar1 = auStack_78[0];
  func_0x000107c4b8d8();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(uVar2);
    if (uVar1 != 0) {
      func_0x000107c4077c(uVar1);
      func_0x000107c61170();
      func_0x000103b3e210(param_1,param_2);
      if ((uVar1 & 1) != 0) {
        return;
      }
    }
  }
  func_0x000100083b20(auStack_78);
  lVar3 = *(long *)(auStack_78[0] + _DAT_112fa92e8);
  func_0x000107c6157c(lVar3);
  func_0x000107c61170(auStack_78[0]);
  if (lVar3 != 0) {
    func_0x000100083b20(auStack_78);
    func_0x000107c61574(lVar3);
    func_0x000102623030(auStack_78,uStack_60);
    (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
    func_0x000102623010(auStack_78);
    if ((param_5 & 0xff) != 1) {
      return;
    }
  }
  func_0x000107c60a04(0,0);
  return;
}


