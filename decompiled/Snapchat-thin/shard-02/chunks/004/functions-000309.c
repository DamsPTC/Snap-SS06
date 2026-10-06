/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d4e428; end: 101d4e443;  */

void FUN_101d4e428(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  (**(code **)(unaff_x20 + 0x10))(*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000049,0x800000010f00e470);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_41 = 0;
  func_0x000107c603d0(&uStack_41,&uStack_40,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(0x726f727265206f6e,0xe800000000000000);
  uVar3 = uStack_38;
  uVar1 = uStack_40;
  func_0x000107c5fadc(uStack_40,uStack_38);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_40 = 0x6c6961746564;
  uStack_38 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_40,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd00000000000005f;
  func_0x000107c5fadc(0xd00000000000005f,0x800000010f00e4c0);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d4e444; end: 101d4e47b;  */

void FUN_101d4e444(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101d4e47c; end: 101d4e48f;  */

void FUN_101d4e47c(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101d4e48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 101d4e490; end: 101d4e4cf;  */

void FUN_101d4e490(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101d4e4d0; end: 101d4e4df;  */

void FUN_101d4e4d0(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101d4e4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 101d4e4e0; end: 101d4e543;  */

void FUN_101d4e4e0(void)

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
  plVar3[1] = (long)FUN_101d4e544;
  plVar3[10] = lVar1;
  plVar3[0xb] = lVar2;
  func_0x000107c61174(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d4ac30,0,0);
  return;
}



/* Entry: 101d4e544; end: 101d4e57f;  */

void FUN_101d4e544(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d4e57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d4e580; end: 101d4e5f7;  */

void FUN_101d4e580(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101d4e868;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101d4e5f8; end: 101d4e623;  */

void FUN_101d4e5f8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d4e624; end: 101d4e6a7;  */

void FUN_101d4e624(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101d4e86c;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101d4e6a8; end: 101d4e6e7;  */

void FUN_101d4e6a8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101d4e6e8; end: 101d4e713;  */

void FUN_101d4e6e8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 101d4e714; end: 101d4e76b;  */

void FUN_101d4e714(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101d4e76c;
  plVar1[0x12] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d4b364,0,0);
  return;
}



/* Entry: 101d4e76c; end: 101d4e7a7;  */

void FUN_101d4e76c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d4e7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d4e7a8; end: 101d4e7d7;  */

long FUN_101d4e7a8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 101d4e7d8; end: 101d4e827;  */

void FUN_101d4e7d8(void)

{
  FUN_101d4e21c();
  return;
}



/* Entry: 101d4e828; end: 101d4e83f;  */

void FUN_101d4e828(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101d4e4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 101d4e840; end: 101d4e867;  */

void FUN_101d4e840(void)

{
  func_0x000100cce398();
  return;
}



/* Entry: 101d4e868; end: 101d4e88f;  */

void FUN_101d4e868(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d4e57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d4e890; end: 101d4ea63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4e890(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101d4ea64;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,1);
  func_0x0001000d224c(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x0001000d224c(unaff_x22 + 0x58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  puVar3 = &UNK_11047b820;
  func_0x000107c613fc(&UNK_11047b820,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar1;
  *(undefined8 *)(puVar3 + 0x28) = uVar4;
  func_0x000107c61434(uVar6);
  func_0x00010006c00c(uVar1,uVar4);
  uVar4 = uVar8;
  func_0x0001048898b8(uVar8,1,FUN_101d4ebfc,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(uVar7);
  puVar3 = &UNK_11047b848;
  func_0x000107c613fc(&UNK_11047b848,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar2;
  puVar5 = &UNK_11047b870;
  func_0x000107c613fc(&UNK_11047b870,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_101d4ec18;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  uVar6 = 0;
  func_0x00010488a220(0,1,FUN_101d4ec20,puVar5);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar4);
  puVar3 = &UNK_11047b898;
  func_0x000107c613fc(&UNK_11047b898,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar2;
  func_0x000104888fc0(0,1,0x101d5132c,puVar3);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101d4ea64; end: 101d4eaaf;  */

void FUN_101d4ea64(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    func_0x000107c61654();
  }
                    /* WARNING: Could not recover jumptable at 0x000101d4eaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d4eab0; end: 101d4ebfb;  */

undefined8
FUN_101d4eab0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  puVar1 = PTR_PTR_1126a9488;
  func_0x000107c610f8(PTR_PTR_1126a9488);
  uVar2 = param_2;
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c46acc(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c5ee20(param_4,param_5);
  func_0x000107c54064(puVar1);
  func_0x000107c61170(param_4);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c54018(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c53474(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c3d5cc(uVar4);
  func_0x000107c61180();
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  uVar2 = uVar4;
  func_0x000103edf4f0(uVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  return uVar2;
}



/* Entry: 101d4ebfc; end: 101d4ec17;  */

void FUN_101d4ebfc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d4eab0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101d4ec18; end: 101d4ec1f;  */

void FUN_101d4ec18(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d4ec20; end: 101d4ec37;  */

void FUN_101d4ec20(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d491a8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101d4ec38; end: 101d4ed87; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager addSnapGenOperationWithGalleryEntryId:detailedState:completionHandler:] */

void FUN_101d4ec38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11047bac8;
  func_0x000107c613fc(&UNK_11047bac8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11047baf0;
  func_0x000107c613fc(&UNK_11047baf0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10da10bd0;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11047bb18;
  func_0x000107c613fc(&UNK_11047bb18,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10da10bd8;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10da10be0,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101d4ed88; end: 101d4ee3b;  */

void FUN_101d4ed88(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(long *)(unaff_x22 + 0x18) = param_4;
  lVar3 = param_2;
  func_0x000107c5faec();
  *(long *)(unaff_x22 + 0x20) = lVar3;
  lVar1 = param_2;
  lVar4 = lVar3;
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c5ee30();
  func_0x000107c61170(lVar1);
  *(long *)(unaff_x22 + 0x28) = param_2;
  *(long *)(unaff_x22 + 0x30) = lVar4;
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101d4ee3c;
  plVar2[0xf] = lVar4;
  plVar2[0x10] = param_4;
  plVar2[0xd] = lVar3;
  plVar2[0xe] = param_2;
  plVar2[0xc] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d4e890,0,0);
  return;
}



/* Entry: 101d4ee3c; end: 101d4eef3;  */

void FUN_101d4ee3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar6 + 0x30);
  uVar2 = *(undefined8 *)(lVar6 + 0x20);
  uVar3 = *(undefined8 *)(lVar6 + 0x28);
  uVar5 = *(undefined8 *)(lVar6 + 0x18);
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0x38));
  func_0x00010006c090(uVar3,uVar1);
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(uVar5);
  lVar6 = *(long *)(lVar6 + 0x10);
  if (unaff_x20 == 0) {
    (**(code **)(lVar6 + 0x10))(lVar6,0);
  }
  else {
    func_0x000107c5ed2c();
    func_0x000107c614ac();
    (**(code **)(lVar6 + 0x10))(lVar6,unaff_x20);
    func_0x000107c61170(unaff_x20);
  }
                    /* WARNING: Could not recover jumptable at 0x000101d4eef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Entry: 101d4eef4; end: 101d4ef0b;  */

void FUN_101d4eef4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d4ef0c,0,0);
  return;
}



/* Entry: 101d4ef0c; end: 101d4ef6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4ef0c(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101d512e4;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_101d4ef6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101d4ef6c; end: 101d4f0b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4ef6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x0001048898b8(uStack_40,1,FUN_101d4f0b8,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(uStack_40);
  puVar2 = &UNK_11047bcf8;
  func_0x000107c613fc(&UNK_11047bcf8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  puVar3 = &UNK_11047bd20;
  func_0x000107c613fc(&UNK_11047bd20,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x101d512b8;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  uVar4 = 0;
  func_0x00010488a220(0,1,0x101d512d0,puVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar3);
  puVar2 = &UNK_11047bd48;
  func_0x000107c613fc(&UNK_11047bd48,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  func_0x000104888fc0(0,1,0x101d51338,puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 101d4f0b8; end: 101d4f123;  */

undefined8 FUN_101d4f0b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  func_0x000107c518e0(uVar1);
  func_0x000107c61180();
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  uVar2 = uVar1;
  func_0x000103edf4f0(uVar1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101d4f124; end: 101d4f24f; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager scheduleSnapGenOperationsWithCompletionHandler:] */

void FUN_101d4f124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11047ba50;
  func_0x000107c613fc(&UNK_11047ba50,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11047ba78;
  func_0x000107c613fc(&UNK_11047ba78,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10da10bb0;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11047baa0;
  func_0x000107c613fc(&UNK_11047baa0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10da10bb8;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10da10bc0,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101d4f250; end: 101d4f28f;  */

void FUN_101d4f250(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d4f290,0,0);
  return;
}



/* Entry: 101d4f290; end: 101d4f2ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4f290(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101d4f2f0;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_101d4ef6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101d4f2f0; end: 101d4f353;  */

void FUN_101d4f2f0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x60) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101d4f354;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101d4f394;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d4f354; end: 101d4f393;  */

void FUN_101d4f354(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x58));
  (**(code **)(lVar1 + 0x10))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x000101d4f390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d4f394; end: 101d4f3fb;  */

void FUN_101d4f394(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x58));
  uVar2 = uVar1;
  func_0x000107c5ed2c(uVar1);
  func_0x000107c614ac(uVar1);
  (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101d4f3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d4f3fc; end: 101d4f413;  */

void FUN_101d4f3fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d4f414,0,0);
  return;
}



/* Entry: 101d4f414; end: 101d4f4af;  */

void FUN_101d4f414(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101d4f4b0;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,1);
  uVar2 = 0x112d61d38;
  func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_10117968c;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11047bcc0;
  *(long *)(unaff_x22 + 0x70) = lVar1;
  func_0x000107c51914(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101d4f4b0; end: 101d4f507;  */

void FUN_101d4f4b0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x98) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101d4f508;
  }
  else {
    pcVar1 = FUN_101d4f510;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d4f508; end: 101d4f50f;  */

void FUN_101d4f508(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101d4f50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d4f510; end: 101d4f553;  */

void FUN_101d4f510(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c61654();
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d4f550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d4f554; end: 101d4f5fb; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager scheduleSnapGenJobsForEnteringMemories] */

void FUN_101d4f554(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_11047ba28;
  func_0x000107c613fc(&UNK_11047ba28,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar2 = 0xa3;
  func_0x0001001ca524(0xa3,0,0x48,4,0,0,&UNK_10da10ba0,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101d4f5fc; end: 101d4f613;  */

void FUN_101d4f5fc(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d4f614,0,0);
  return;
}



/* Entry: 101d4f614; end: 101d4f67f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4f614(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x101d512e8;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_101d4f680();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101d4f680; end: 101d4f803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4f680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  func_0x0001000d224c(&uStack_50);
  puVar1 = &UNK_11047bc30;
  func_0x000107c613fc(&UNK_11047bc30,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61434(param_4);
  uVar2 = uStack_50;
  func_0x0001048898b8(uStack_50,1,0x101d51284,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_11047bc58;
  func_0x000107c613fc(&UNK_11047bc58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar3 = &UNK_11047bc80;
  func_0x000107c613fc(&UNK_11047bc80,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x101d512b4;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  uVar4 = 0;
  func_0x00010488a220(0,1,FUN_101d512bc,puVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  puVar1 = &UNK_11047bca8;
  func_0x000107c613fc(&UNK_11047bca8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000104888fc0(0,1,0x101d51334,puVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 101d4f804; end: 101d4f897;  */

undefined8 FUN_101d4f804(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
  func_0x000107c518dc(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  uVar1 = uVar2;
  func_0x000103edf4f0(uVar2);
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 101d4f898; end: 101d4f9db; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager scheduleSnapGenOperationsImmediatelyWith:completionHandler:] */

void FUN_101d4f898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11047b9b0;
  func_0x000107c613fc(&UNK_11047b9b0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11047b9d8;
  func_0x000107c613fc(&UNK_11047b9d8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10da10b88;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11047ba00;
  func_0x000107c613fc(&UNK_11047ba00,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10da10b90;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10da10b98,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101d4f9dc; end: 101d4fa2f;  */

void FUN_101d4f9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  func_0x000107c5fc54(param_1,PTR___sSSN_11034da80);
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d4fa30,0,0);
  return;
}



/* Entry: 101d4fa30; end: 101d4fa9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4fa30(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101d4fa9c;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_101d4f680();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101d4fa9c; end: 101d4faff;  */

void FUN_101d4fa9c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x68) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101d4fb00;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101d4fb4c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d4fb00; end: 101d4fb4b;  */

void FUN_101d4fb00(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61170(uVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x000101d4fb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d4fb4c; end: 101d4fbbb;  */

void FUN_101d4fb4c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar1 = *(long *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61170(uVar3);
  uVar3 = uVar2;
  func_0x000107c5ed2c(uVar2);
  func_0x000107c614ac(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101d4fbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d4fbbc; end: 101d4fbd7;  */

void FUN_101d4fbbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d4fbd8,0,0);
  return;
}



/* Entry: 101d4fbd8; end: 101d4fc53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4fbd8(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x68;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101d4fc54;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_101d4fcb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101d4fc54; end: 101d4fcaf;  */

void FUN_101d4fc54(void)

{
  undefined1 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) == 0) {
    uVar1 = *(undefined1 *)(*unaff_x22 + 0x68);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
  else {
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000101d4fcac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



/* Entry: 101d4fcb0; end: 101d4fe1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4fcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  func_0x0001000d224c(&uStack_60);
  puVar1 = &UNK_11047bbb8;
  func_0x000107c613fc(&UNK_11047bbb8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  uVar2 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c61434(param_5);
  uVar3 = uStack_60;
  func_0x0001048898b8(uStack_60,1,FUN_101d51214,puVar1,uVar2);
  func_0x000107c61574(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_11047bbe0;
  func_0x000107c613fc(&UNK_11047bbe0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  uVar2 = 0;
  func_0x00010488a220(0,1,FUN_101d5122c,puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_11047bc08;
  func_0x000107c613fc(&UNK_11047bc08,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000104888fc0(0,1,FUN_101d5126c,puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 101d4fe20; end: 101d4feab;  */

undefined8 FUN_101d4fe20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c449e8(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
  uVar1 = uVar2;
  func_0x000103edf20c(uVar2);
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 101d4feac; end: 101d4ffef; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager hasOperationForSnapGenOperationId:completionHandler:] */

void FUN_101d4feac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11047b938;
  func_0x000107c613fc(&UNK_11047b938,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11047b960;
  func_0x000107c613fc(&UNK_11047b960,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10da10b68;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11047b988;
  func_0x000107c613fc(&UNK_11047b988,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10da10b70;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10da10b78,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101d4fff0; end: 101d5003b;  */

void FUN_101d4fff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  func_0x000107c5faec();
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d5003c,0,0);
  return;
}



/* Entry: 101d5003c; end: 101d500b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d5003c(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x78;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101d500b8;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_101d4fcb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101d500b8; end: 101d50123;  */

void FUN_101d500b8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined1 *)(lVar2 + 0x79) = *(undefined1 *)(lVar2 + 0x78);
    pcVar1 = FUN_101d50124;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101d50180;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d50124; end: 101d5017f;  */

void FUN_101d50124(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x79);
  lVar1 = *(long *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61170(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3,0);
                    /* WARNING: Could not recover jumptable at 0x000101d5017c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d50180; end: 101d501f3;  */

void FUN_101d50180(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar1 = *(long *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61170(uVar3);
  uVar3 = uVar2;
  func_0x000107c5ed2c(uVar2);
  func_0x000107c614ac(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,0,uVar3);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101d501f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d501f4; end: 101d5020b;  */

void FUN_101d501f4(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d5020c,0,0);
  return;
}



/* Entry: 101d5020c; end: 101d5027f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d5020c(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101d50280;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_101d502e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101d50280; end: 101d502e7;  */

void FUN_101d50280(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101d502c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101d502e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(undefined8 *)(*unaff_x22 + 0x50));
  return;
}



/* Entry: 101d502e8; end: 101d50453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d502e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  func_0x0001000d224c(&uStack_50);
  puVar1 = &UNK_11047bb40;
  func_0x000107c613fc(&UNK_11047bb40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61434(param_4);
  uVar3 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar2 = uStack_50;
  func_0x0001048898b8(uStack_50,1,FUN_101d511bc,puVar1,uVar3);
  func_0x000107c61574(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_11047bb68;
  func_0x000107c613fc(&UNK_11047bb68,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  uVar3 = 0;
  func_0x00010488a220(0,1,FUN_101d511d4,puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_11047bb90;
  func_0x000107c613fc(&UNK_11047bb90,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000104888fc0(0,1,0x101d51330,puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 101d50454; end: 101d50523;  */

undefined8 FUN_101d50454(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
  func_0x000107c449f0(uVar4);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x0001000285a8(0x112d55e78,&UNK_10d91cd60);
  uVar1 = uVar4;
  func_0x000103edf20c(uVar4);
  uVar2 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar3 = 0;
  func_0x000100775264(0,1,FUN_101d50524,0,uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar1);
  return uVar3;
}



/* Entry: 101d50524; end: 101d5057f;  */

void FUN_101d50524(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puStack_28 = (undefined *)0x0;
  func_0x000107c5fc50(*param_2,&puStack_28,PTR___sSSN_11034da80);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_28 != (undefined *)0x0) {
    puVar1 = puStack_28;
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 101d50580; end: 101d505e7;  */

void FUN_101d50580(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar2 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar2 = param_1;
  func_0x000107c614b0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_2,uVar1);
  return;
}



/* Entry: 101d505e8; end: 101d5072b; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager hasOperationsForSnapGenOperationIds:completionHandler:] */

void FUN_101d505e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11047b8c0;
  func_0x000107c613fc(&UNK_11047b8c0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11047b8e8;
  func_0x000107c613fc(&UNK_11047b8e8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10da10b48;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11047b910;
  func_0x000107c613fc(&UNK_11047b910,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10da10b50;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10da10b58,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101d5072c; end: 101d5077f;  */

void FUN_101d5072c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  func_0x000107c5fc54(param_1,PTR___sSSN_11034da80);
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d50780,0,0);
  return;
}



/* Entry: 101d50780; end: 101d507f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d50780(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101d507f4;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_101d502e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101d507f4; end: 101d5085f;  */

void FUN_101d507f4(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar2 + 0x50);
    pcVar1 = FUN_101d50860;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101d508d4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d50860; end: 101d508d3;  */

void FUN_101d50860(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
  func_0x000107c6142c(uVar2);
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x10))(*(long *)(unaff_x22 + 0x58),uVar1,0);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d508d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d508d4; end: 101d5093f;  */

void FUN_101d508d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61170(uVar2);
  uVar2 = uVar1;
  func_0x000107c5ed2c(uVar1);
  func_0x000107c614ac(uVar1);
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x10))(*(long *)(unaff_x22 + 0x58),0,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101d5093c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d50940; end: 101d509ab;  */

void FUN_101d50940(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101d512f8;
  plVar3[0xb] = lVar1;
  plVar3[0xc] = lVar4;
  func_0x000107c5fc54(lVar2,PTR___sSSN_11034da80);
  plVar3[0xd] = lVar2;
  func_0x000107c61174(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d50780,0,0);
  return;
}



/* Entry: 101d509ac; end: 101d50a23;  */

void FUN_101d509ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101d512ec;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101d50a24; end: 101d50a5f;  */

void FUN_101d50a24(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d50a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d50a60; end: 101d50ae3;  */

void FUN_101d50a60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101d512f4;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101d50ae4; end: 101d50b23;  */

void FUN_101d50ae4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d50b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d50b24; end: 101d50b8f;  */

void FUN_101d50b24(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101d50b90;
  plVar2[10] = lVar3;
  plVar2[0xb] = lVar4;
  func_0x000107c5faec();
  plVar2[0xc] = lVar1;
  plVar2[0xd] = lVar3;
  func_0x000107c61174(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d5003c,0,0);
  return;
}



/* Entry: 101d50b90; end: 101d50bcb;  */

void FUN_101d50b90(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d50bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d50bcc; end: 101d50c43;  */

void FUN_101d50bcc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101d512fc;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101d50c44; end: 101d50cc7;  */

void FUN_101d50c44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101d51300;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101d50cc8; end: 101d50cfb;  */

void FUN_101d50cc8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d50cfc; end: 101d50d67;  */

void FUN_101d50cfc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101d51304;
  plVar3[10] = lVar1;
  plVar3[0xb] = lVar4;
  func_0x000107c5fc54(lVar2,PTR___sSSN_11034da80);
  plVar3[0xc] = lVar2;
  func_0x000107c61174(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d4fa30,0,0);
  return;
}



/* Entry: 101d50d68; end: 101d50ddf;  */

void FUN_101d50d68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101d51308;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101d50de0; end: 101d50e63;  */

void FUN_101d50de0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101d5130c;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101d50e64; end: 101d50ebb;  */

void FUN_101d50e64(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101d51310;
  plVar1[0x12] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d4f414,0,0);
  return;
}



/* Entry: 101d50ebc; end: 101d50f1f;  */

void FUN_101d50ebc(void)

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
  plVar3[1] = 0x101d51314;
  plVar3[10] = lVar1;
  plVar3[0xb] = lVar2;
  func_0x000107c61174(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d4f290,0,0);
  return;
}



/* Entry: 101d50f20; end: 101d50f97;  */

void FUN_101d50f20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101d51318;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101d50f98; end: 101d5101b;  */

void FUN_101d50f98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101d5131c;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101d5101c; end: 101d51093;  */

void FUN_101d5101c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x101d51320;
  plVar6[2] = lVar2;
  plVar6[3] = lVar3;
  lVar7 = lVar4;
  func_0x000107c5faec();
  plVar6[4] = lVar7;
  lVar2 = lVar4;
  lVar8 = lVar7;
  func_0x000107c61174(lVar4);
  func_0x000107c61174();
  func_0x000107c5ee30();
  func_0x000107c61170(lVar2);
  plVar6[5] = lVar4;
  plVar6[6] = lVar8;
  plVar5 = (long *)0x90;
  func_0x000107c615b8();
  plVar6[7] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_101d4ee3c;
  plVar5[0xf] = lVar8;
  plVar5[0x10] = lVar3;
  plVar5[0xd] = lVar7;
  plVar5[0xe] = lVar4;
  plVar5[0xc] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d4e890,0,0);
  return;
}



/* Entry: 101d51094; end: 101d5110b;  */

void FUN_101d51094(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101d51324;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101d5110c; end: 101d51137;  */

void FUN_101d5110c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d51138; end: 101d511bb;  */

void FUN_101d51138(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101d51328;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101d511bc; end: 101d511d3;  */

void FUN_101d511bc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d50454(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}


