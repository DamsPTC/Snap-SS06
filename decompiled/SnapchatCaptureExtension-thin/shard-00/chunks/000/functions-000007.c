/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000339f4; end: 100033a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000339f4(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined1 uVar13;
  long lVar14;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 *puStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  
  lVar7 = 0;
  __s19LockedCameraCapture0abC7SessionC22ApplicationLaunchErrorOMa();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lStack_b0 = unaff_x20 + (uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff));
  lVar2 = 0;
  __s19LockedCameraCapture0abC7SessionC22ApplicationLaunchErrorOMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar11 + 0x40));
  puVar6 = auStack_a8 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar7 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)puVar6 - extraout_x8_00;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar14 + 0x40));
  lVar7 = _DAT_100060850;
  lVar12 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(lVar8 + _DAT_100060850,auStack_a8,0,0);
  FUN_100031c1c(lVar8 + lVar7,lVar10,0x10005fb98,&UNK_100040f90);
  lVar7 = lVar10;
  (**(code **)(lVar14 + 0x30))(lVar10,1,lVar3);
  if ((int)lVar7 == 1) {
    func_0x000100031ca0(lVar10,0x10005fb98,&UNK_100040f90);
    return;
  }
  (**(code **)(lVar14 + 0x20))(lVar12,lVar10,lVar3);
  func_0x0001000303c8();
  (**(code **)(lVar11 + 0x10))(puVar6,lStack_b0,lVar2);
  puVar4 = puVar6;
  lVar7 = lVar2;
  (**(code **)(lVar11 + 0x58))();
  iVar1 = (int)puVar4;
  if (iVar1 != *(int *)
                PTR___s19LockedCameraCapture0abC7SessionC22ApplicationLaunchErrorO7unknownyA2EmFWC_100050510
     ) {
    if (iVar1 == *(int *)
                  PTR___s19LockedCameraCapture0abC7SessionC22ApplicationLaunchErrorO19applicationNotFoundyA2EmFWC_100050500
       ) {
      uVar13 = 1;
      goto LAB_10002f32c;
    }
    if (iVar1 == *(int *)
                  PTR___s19LockedCameraCapture0abC7SessionC22ApplicationLaunchErrorO20authenticationFailedyA2EmFWC_100050508
       ) {
      uVar13 = 2;
      goto LAB_10002f32c;
    }
    (**(code **)(lVar11 + 8))();
    puVar4 = puVar6;
    lVar7 = lVar2;
  }
  uVar13 = 0;
LAB_10002f32c:
  __s19LockedCameraCapture0abC7SessionC22ApplicationLaunchErrorO9errorCodeSivg();
  puVar6 = puVar4;
  __s19LockedCameraCapture0abC7SessionC22ApplicationLaunchErrorO13failureReasonSSSgvg();
  puVar5 = puVar6;
  lVar2 = lVar7;
  __s10Foundation3URLV17lastPathComponentSSvg();
  uStack_88 = 0;
  puStack_90 = puVar4;
  uStack_87 = uVar13;
  puStack_80 = puVar6;
  lStack_78 = lVar7;
  puStack_70 = puVar5;
  lStack_68 = lVar2;
  func_0x000100030afc(&puStack_90);
  _swift_bridgeObjectRelease(lVar2);
  _swift_bridgeObjectRelease(lVar7);
  (**(code **)(lVar14 + 8))(lVar12,lVar3);
  return;
}



/* Entry: 100033a24; end: 100033a53;  */

void FUN_100033a24(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100033a54; end: 100033a93;  */

undefined8 FUN_100033a54(void)

{
  if (lRam0000000100060950 != -1) {
    _swift_once(0x100060950,FUN_100033bbc);
  }
  return 0x100062df0;
}



/* Entry: 100033a94; end: 100033bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100033a94(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  long lVar7;
  
  lVar2 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = _DAT_100060970;
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = *(undefined1 **)(unaff_x20 + _DAT_100060970);
  puVar6 = puVar5;
  if (puVar5 == (undefined1 *)0x0) {
    (**(code **)(lVar7 + 0x68))
              (puVar4,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_100050dd8,
               lVar2);
    puVar3 = PTR__OBJC_CLASS___SCQueuePerformer_100050840;
    _objc_allocWithZone();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000034,0x800000010004cfc0);
    __s8Dispatch0A3QoSV0B6SClassO8rawValueSo11qos_class_tavg();
    func_0x00010003c380();
    _objc_release_x23();
    (**(code **)(lVar7 + 8))(puVar4,lVar2);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    _objc_retain_x22();
    _objc_release_x20();
    puVar5 = (undefined1 *)0x0;
    puVar6 = puVar4;
  }
  _objc_retain_x8(puVar5);
  return puVar6;
}



/* Entry: 100033bbc; end: 100033be3;  */

void FUN_100033bbc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000100035160();
  _objc_allocWithZone();
  func_0x00010003c1e0();
  uRam0000000100062df0 = uVar1;
  return;
}



/* Entry: 100033be4; end: 100033e17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100033be4(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  uStack_90 = param_1;
  __s10Foundation3URLV13DirectoryHintOMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar10 + 0x40));
  lVar5 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar6 - extraout_x8_01;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_100060958);
  func_0x00010003c6c0(uVar8);
  lVar4 = _DAT_100060960;
  _swift_beginAccess(unaff_x20 + _DAT_100060960,auStack_78,0,0);
  FUN_100033e18(unaff_x20 + lVar4,lVar7);
  func_0x00010003d7c0(uVar8);
  lVar4 = lVar7;
  (**(code **)(lVar9 + 0x30))(lVar7,1,lVar3);
  bVar1 = (int)lVar4 == 0;
  if (bVar1) {
    (**(code **)(lVar9 + 0x10))(lVar6,lVar7,lVar3);
    FUN_1000350dc(lVar7,0x10005fb98,&UNK_100040f90);
    uStack_88 = 0xd000000000000028;
    uStack_80 = 0x800000010004cf60;
    lVar4 = lVar5;
    (**(code **)(lVar10 + 0x68))
              (lVar5,*(undefined4 *)
                      PTR___s10Foundation3URLV13DirectoryHintO13inferFromPathyA2EmFWC_100050178,
               lVar2);
    FUN_100034ec4();
    uVar8 = uStack_90;
    __s10Foundation3URLV9appending4path13directoryHintACx_AC09DirectoryF0OtSyRzlF
              (uStack_90,&uStack_88,lVar5,PTR___sSSN_100050a38,lVar4);
    (**(code **)(lVar10 + 8))(lVar5,lVar2);
    (**(code **)(lVar9 + 8))(lVar6,lVar3);
  }
  else {
    FUN_1000350dc(lVar7,0x10005fb98,&UNK_100040f90);
    uVar8 = uStack_90;
  }
  (**(code **)(lVar9 + 0x38))(uVar8,!bVar1,1,lVar3);
  return;
}



/* Entry: 100033e18; end: 100033e67;  */

undefined8 FUN_100033e18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100033e68; end: 10003409b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100033e68(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  uStack_90 = param_1;
  __s10Foundation3URLV13DirectoryHintOMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar10 + 0x40));
  lVar5 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar6 - extraout_x8_01;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_100060958);
  func_0x00010003c6c0(uVar8);
  lVar4 = _DAT_100060960;
  _swift_beginAccess(unaff_x20 + _DAT_100060960,auStack_78,0,0);
  FUN_100033e18(unaff_x20 + lVar4,lVar7);
  func_0x00010003d7c0(uVar8);
  lVar4 = lVar7;
  (**(code **)(lVar9 + 0x30))(lVar7,1,lVar3);
  bVar1 = (int)lVar4 == 0;
  if (bVar1) {
    (**(code **)(lVar9 + 0x10))(lVar6,lVar7,lVar3);
    FUN_1000350dc(lVar7,0x10005fb98,&UNK_100040f90);
    uStack_88 = 0xd000000000000028;
    uStack_80 = 0x800000010004cf90;
    lVar4 = lVar5;
    (**(code **)(lVar10 + 0x68))
              (lVar5,*(undefined4 *)
                      PTR___s10Foundation3URLV13DirectoryHintO13inferFromPathyA2EmFWC_100050178,
               lVar2);
    FUN_100034ec4();
    uVar8 = uStack_90;
    __s10Foundation3URLV9appending4path13directoryHintACx_AC09DirectoryF0OtSyRzlF
              (uStack_90,&uStack_88,lVar5,PTR___sSSN_100050a38,lVar4);
    (**(code **)(lVar10 + 8))(lVar5,lVar2);
    (**(code **)(lVar9 + 8))(lVar6,lVar3);
  }
  else {
    FUN_1000350dc(lVar7,0x10005fb98,&UNK_100040f90);
    uVar8 = uStack_90;
  }
  (**(code **)(lVar9 + 0x38))(uVar8,!bVar1,1,lVar3);
  return;
}



/* Entry: 10003409c; end: 10003416f;  */

void FUN_10003409c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar1 = param_1;
  FUN_100033a94();
  puVar2 = &UNK_100053688;
  _swift_allocObject(&UNK_100053688,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcStack_50 = FUN_100034f30;
  puStack_70 = PTR___NSConcreteStackBlock_100050768;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1000272d0;
  puStack_58 = &UNK_1000536a0;
  puStack_48 = puVar2;
  __Block_copy(&puStack_70);
  puVar2 = puStack_48;
  _objc_retain_x20();
  func_0x0001000149e0(param_1,param_2);
  _swift_release(puVar2);
  func_0x00010003c820(uVar1);
  __Block_release(ppuVar3);
  _objc_release_x19();
  return;
}



/* Entry: 100034170; end: 1000342af;  */

/* WARNING: Removing unreachable block (ram,0x00010003428c) */

void FUN_100034170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [16];
  
  lVar1 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_60 + -extraout_x8;
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100033be4(puVar3);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_1000350dc(puVar3,0x10005fb98,&UNK_100040f90);
  }
  else {
    (**(code **)(lVar5 + 0x20))(lVar4,puVar3,lVar1);
    __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
              (lVar4,0,param_2,param_3);
    (**(code **)(lVar5 + 8))(lVar4,lVar1);
  }
  return;
}



/* Entry: 1000342b0; end: 1000342e7;  */

void FUN_1000342b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &UNK_1000536d8;
  ppuVar3 = &puStack_70;
  puVar1 = puVar2;
  FUN_100033a94();
  _swift_allocObject(&UNK_1000536d8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  uStack_50 = 0x100034f7c;
  puStack_70 = PTR___NSConcreteStackBlock_100050768;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1000272d0;
  puStack_58 = &UNK_1000536f0;
  puStack_48 = puVar2;
  __Block_copy(&puStack_70);
  puVar2 = puStack_48;
  _objc_retain_x20();
  _swift_release(puVar2);
  func_0x00010003c820(puVar1);
  __Block_release(ppuVar3);
  _objc_release_x23();
  return;
}



/* Entry: 1000342e8; end: 100034567;  */

void FUN_1000342e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar3 = &puStack_70;
  lVar2 = param_1;
  FUN_100033a94();
  _swift_allocObject(param_1,0x18,7);
  *(undefined8 *)(param_1 + 0x10) = unaff_x20;
  puStack_70 = PTR___NSConcreteStackBlock_100050768;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1000272d0;
  uStack_58 = param_3;
  uStack_50 = param_2;
  lStack_48 = param_1;
  __Block_copy(&puStack_70);
  lVar1 = lStack_48;
  _objc_retain_x20();
  _swift_release(lVar1);
  func_0x00010003c820(lVar2);
  __Block_release(ppuVar3);
  _objc_release_x23();
  return;
}



/* Entry: 100034568; end: 100034693;  */

void FUN_100034568(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar8 = (long)&puStack_80 - (lVar7 + 0xfU & 0xfffffffffffffff0);
  FUN_100033a94();
  (**(code **)(lVar9 + 0x10))(lVar8,param_1,lVar1);
  uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar6 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &UNK_100053778;
  _swift_allocObject(&UNK_100053778,uVar6 + lVar7,uVar5 | 7);
  (**(code **)(lVar9 + 0x20))(puVar3 + uVar6,lVar8,lVar1);
  pcStack_60 = FUN_100035014;
  puStack_80 = PTR___NSConcreteStackBlock_100050768;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1000272d0;
  puStack_68 = &UNK_100053790;
  ppuVar4 = &puStack_80;
  puStack_58 = puVar3;
  __Block_copy(ppuVar4);
  _swift_release(puStack_58);
  func_0x00010003c820(lVar2);
  __Block_release(ppuVar4);
  _objc_release_x19();
  return;
}



/* Entry: 100034694; end: 1000347e7;  */

void FUN_100034694(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100050780;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1000502e8;
  _objc_opt_self();
  puVar2 = puVar1;
  func_0x00010003be60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  __s10Foundation3URLV4pathSSvg();
  uVar7 = param_2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
  func_0x00010003bfa0();
  puVar4 = puVar2;
  _objc_release_x21();
  _objc_release_x23();
  if ((int)puVar2 != 0) {
    func_0x00010003be60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    func_0x00010003ca40();
    _objc_release_x19();
    _objc_release_x20();
    puVar4 = (undefined *)0x0;
    if ((int)puVar1 != 0) {
      if (*(long *)PTR____stack_chk_guard_100050780 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010003b380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_retain_100050930)();
        return;
      }
      goto LAB_1000347e4;
    }
    _objc_retain();
    puVar4 = (undefined *)0x0;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release_x19();
    _swift_willThrow();
    _swift_errorRelease();
  }
  if (*(long *)PTR____stack_chk_guard_100050780 == lVar8) {
    return;
  }
LAB_1000347e4:
  ___stack_chk_fail();
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar5 + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  lVar8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar11 = (long)&puStack_f0 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  FUN_100033a94();
  (**(code **)(lVar12 + 0x10))(lVar11,puVar3,lVar5);
  uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
  puVar1 = &UNK_1000537c8;
  _swift_allocObject(&UNK_1000537c8,uVar13 + lVar10,uVar9 | 7);
  *(undefined **)(puVar1 + 0x10) = puVar4;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  (**(code **)(lVar12 + 0x20))(puVar1 + uVar13,lVar11,lVar5);
  pcStack_d0 = FUN_1000350ac;
  puStack_f0 = PTR___NSConcreteStackBlock_100050768;
  uStack_e8 = 0x42000000;
  pcStack_e0 = FUN_1000272d0;
  puStack_d8 = &UNK_1000537e0;
  ppuVar6 = &puStack_f0;
  puStack_c8 = puVar1;
  __Block_copy(ppuVar6);
  puVar1 = puStack_c8;
  func_0x0001000149e0(puVar4,uVar7);
  _swift_release(puVar1);
  func_0x00010003c820(lVar8);
  __Block_release(ppuVar6);
  _objc_release_x20();
  return;
}



/* Entry: 1000347e8; end: 100034937;  */

void FUN_1000347e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar1 + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar7 = (long)&puStack_90 - (lVar6 + 0xfU & 0xfffffffffffffff0);
  FUN_100033a94();
  (**(code **)(lVar8 + 0x10))(lVar7,param_3,lVar1);
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &UNK_1000537c8;
  _swift_allocObject(&UNK_1000537c8,uVar9 + lVar6,uVar5 | 7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  (**(code **)(lVar8 + 0x20))(puVar3 + uVar9,lVar7,lVar1);
  pcStack_70 = FUN_1000350ac;
  puStack_90 = PTR___NSConcreteStackBlock_100050768;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1000272d0;
  puStack_78 = &UNK_1000537e0;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  __Block_copy(ppuVar4);
  puVar3 = puStack_68;
  func_0x0001000149e0(param_1,param_2);
  _swift_release(puVar3);
  func_0x00010003c820(lVar2);
  __Block_release(ppuVar4);
  _objc_release_x20();
  return;
}



/* Entry: 100034938; end: 10003498b;  */

/* WARNING: Removing unreachable block (ram,0x000100034968) */

void FUN_100034938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
            (param_3,1,param_1,param_2);
  return;
}



/* Entry: 10003498c; end: 100034da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003498c(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_d0 [4];
  uint uStack_cc;
  code *pcStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  uStack_a0 = param_1;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar7 + 0x40));
  lVar11 = 0x1000608e0;
  puStack_c0 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100011744(0x1000608e0,&UNK_100041c78);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar3 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar6 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar6;
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar6 = lVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar14 = lVar6 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar13 = lVar14 - extraout_x12_01;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_100060958);
  func_0x00010003c6c0(uVar10);
  lVar3 = _DAT_100060960;
  _swift_beginAccess(unaff_x20 + _DAT_100060960,auStack_78,0,0);
  lStack_b8 = lVar3;
  FUN_100033e18(unaff_x20 + lVar3,lVar13);
  uStack_b0 = uVar10;
  func_0x00010003d7c0(uVar10);
  pcVar12 = *(code **)(lVar7 + 0x38);
  (*pcVar12)(lVar14,1,1,lVar2);
  lVar11 = (long)*(int *)(lVar11 + 0x30);
  FUN_100033e18(lVar13,lVar9);
  FUN_100033e18(lVar14,lVar9 + lVar11);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar3 = lVar9;
  lStack_98 = lVar7;
  (*pcVar8)(lVar9,1,lVar2);
  if ((int)lVar3 == 1) {
    pcStack_c8 = pcVar12;
    FUN_1000350dc(lVar14,0x10005fb98,&UNK_100040f90);
    FUN_1000350dc(lVar13,0x10005fb98,&UNK_100040f90);
    lVar11 = lVar9 + lVar11;
    (*pcVar8)(lVar11,1,lVar2);
    if ((int)lVar11 == 1) {
      FUN_1000350dc(lVar9,0x10005fb98,&UNK_100040f90);
      lVar7 = lStack_98;
LAB_100034d00:
      lVar9 = lStack_a8;
      (**(code **)(lVar7 + 0x10))(lStack_a8,uStack_a0,lVar2);
      (*pcStack_c8)(lVar9,0,1,lVar2);
      uVar10 = uStack_b0;
      func_0x00010003c6c0(uStack_b0);
      lVar11 = lStack_b8;
      _swift_beginAccess(unaff_x20 + lStack_b8,auStack_90,0x21,0);
      func_0x000100031d68(lVar9,unaff_x20 + lVar11);
      _swift_endAccess(auStack_90);
      func_0x00010003d7c0(uVar10);
      uVar10 = 0x10005fb98;
      puVar5 = &UNK_100040f90;
      goto LAB_100034d80;
    }
  }
  else {
    FUN_100033e18(lVar9,lVar6);
    lVar3 = lVar9 + lVar11;
    (*pcVar8)(lVar3,1,lVar2);
    lVar7 = lStack_98;
    puVar1 = puStack_c0;
    if ((int)lVar3 != 1) {
      puVar4 = puStack_c0;
      pcStack_c8 = pcVar12;
      (**(code **)(lStack_98 + 0x20))(puStack_c0,lVar9 + lVar11,lVar2);
      FUN_10003511c();
      lVar11 = lVar6;
      __sSQ2eeoiySbx_xtFZTj(lVar6,puVar1,lVar2,puVar4);
      uStack_cc = (uint)lVar11;
      pcVar8 = *(code **)(lVar7 + 8);
      (*pcVar8)(puVar1,lVar2);
      FUN_1000350dc(lVar14,0x10005fb98,&UNK_100040f90);
      FUN_1000350dc(lVar13,0x10005fb98,&UNK_100040f90);
      (*pcVar8)(lVar6,lVar2);
      FUN_1000350dc(lVar9,0x10005fb98,&UNK_100040f90);
      if ((uStack_cc & 1) == 0) {
        return;
      }
      goto LAB_100034d00;
    }
    FUN_1000350dc(lVar14,0x10005fb98,&UNK_100040f90);
    FUN_1000350dc(lVar13,0x10005fb98,&UNK_100040f90);
    (**(code **)(lStack_98 + 8))(lVar6,lVar2);
  }
  uVar10 = 0x1000608e0;
  puVar5 = &UNK_100041c78;
LAB_100034d80:
  FUN_1000350dc(lVar9,uVar10,puVar5);
  return;
}



/* Entry: 100034da4; end: 100034e37; -[_TtC33SnapchatCaptureExtensionUtilities27CapturedMediaStorageManager init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100034da4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_30;
  undefined8 uStack_28;
  
  lVar1 = _DAT_100060958;
  puVar2 = PTR__OBJC_CLASS___NSLock_1000502f8;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined **)(param_1 + lVar1) = puVar2;
  lVar1 = _DAT_100060960;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1 + lVar1,1,1,lVar3);
  *(undefined8 *)(param_1 + _DAT_100060970) = 0;
  uVar4 = 0;
  func_0x000100035160();
  lStack_30 = param_1;
  uStack_28 = uVar4;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_10005b548);
  return;
}



/* Entry: 100034e38; end: 100034e6b;  */

void FUN_100034e38(void)

{
  func_0x000100035160();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 100034e6c; end: 100034ec3; -[_TtC33SnapchatCaptureExtensionUtilities27CapturedMediaStorageManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100034e6c(long param_1)

{
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_100060958));
  FUN_1000350dc(param_1 + _DAT_100060960,0x10005fb98,&UNK_100040f90);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_100060970));
  return;
}



/* Entry: 100034ec4; end: 100034f2f;  */

void FUN_100034ec4(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060968 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSSSysMc_100050a50;
  _swift_getWitnessTable(PTR___sSSSysMc_100050a50,PTR___sSSN_100050a38);
  puRam0000000100060968 = puVar1;
  return;
}



/* Entry: 100034f30; end: 100034f57;  */

/* WARNING: Removing unreachable block (ram,0x00010003428c) */

void FUN_100034f30(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_60 [16];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = 0x10005fb98;
  FUN_100011744(0x10005fb98,&UNK_100040f90);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_60 + -extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100033be4(puVar5);
  puVar3 = puVar5;
  (**(code **)(lVar7 + 0x30))(puVar5,1,lVar2);
  if ((int)puVar3 == 1) {
    FUN_1000350dc(puVar5,0x10005fb98,&UNK_100040f90);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar6,puVar5,lVar2);
    __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF(lVar6,0,uVar1,uVar4)
    ;
    (**(code **)(lVar7 + 8))(lVar6,lVar2);
  }
  return;
}



/* Entry: 100034f58; end: 100034fbb;  */

void FUN_100034f58(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100034fbc; end: 100035013;  */

void FUN_100034fbc(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100035014; end: 10003503f;  */

void FUN_100035014(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  
  __s10Foundation3URLVMa();
  lVar8 = *(long *)PTR____stack_chk_guard_100050780;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1000502e8;
  _objc_opt_self();
  puVar2 = puVar1;
  func_0x00010003be60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  __s10Foundation3URLV4pathSSvg();
  uVar7 = param_2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
  func_0x00010003bfa0();
  puVar4 = puVar2;
  _objc_release_x21();
  _objc_release_x23();
  if ((int)puVar2 != 0) {
    func_0x00010003be60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    func_0x00010003ca40();
    _objc_release_x19();
    _objc_release_x20();
    puVar4 = (undefined *)0x0;
    if ((int)puVar1 != 0) {
      if (*(long *)PTR____stack_chk_guard_100050780 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010003b380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_retain_100050930)();
        return;
      }
      goto LAB_1000347e4;
    }
    _objc_retain();
    puVar4 = (undefined *)0x0;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release_x19();
    _swift_willThrow();
    _swift_errorRelease();
  }
  if (*(long *)PTR____stack_chk_guard_100050780 == lVar8) {
    return;
  }
LAB_1000347e4:
  ___stack_chk_fail();
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar5 + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  lVar8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar11 = (long)&puStack_f0 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  FUN_100033a94();
  (**(code **)(lVar12 + 0x10))(lVar11,puVar3,lVar5);
  uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
  puVar1 = &UNK_1000537c8;
  _swift_allocObject(&UNK_1000537c8,uVar13 + lVar10,uVar9 | 7);
  *(undefined **)(puVar1 + 0x10) = puVar4;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  (**(code **)(lVar12 + 0x20))(puVar1 + uVar13,lVar11,lVar5);
  pcStack_d0 = FUN_1000350ac;
  puStack_f0 = PTR___NSConcreteStackBlock_100050768;
  uStack_e8 = 0x42000000;
  pcStack_e0 = FUN_1000272d0;
  puStack_d8 = &UNK_1000537e0;
  ppuVar6 = &puStack_f0;
  puStack_c8 = puVar1;
  __Block_copy(ppuVar6);
  puVar1 = puStack_c8;
  func_0x0001000149e0(puVar4,uVar7);
  _swift_release(puVar1);
  func_0x00010003c820(lVar8);
  __Block_release(ppuVar6);
  _objc_release_x20();
  return;
}



/* Entry: 100035040; end: 1000350ab;  */

void FUN_100035040(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  FUN_1000149a0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 1000350ac; end: 1000350db;  */

/* WARNING: Removing unreachable block (ram,0x000100034968) */

void FUN_1000350ac(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
            (unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)),1,
             *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1000350dc; end: 10003511b;  */

undefined8 FUN_1000350dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_100011744(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10003511c; end: 100035197;  */

void FUN_10003511c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000608e8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s10Foundation3URLVMa(0xff);
  puVar2 = PTR___s10Foundation3URLVSQAAMc_1000501d0;
  _swift_getWitnessTable(PTR___s10Foundation3URLVSQAAMc_1000501d0,uVar1);
  puRam00000001000608e8 = puVar2;
  return;
}



/* Entry: 100035198; end: 10003519f;  */

void FUN_100035198(void)

{
  if (lRam00000001000609a0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_100044a30);
  return;
}



/* Entry: 1000351a0; end: 100035277;  */

void FUN_1000351a0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = PTR___sBOWV_1000509f0 + 0x40;
  lVar1 = 0x13f;
  func_0x000100035224();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_100041d20;
    _swift_updateClassMetadata2(param_1,0x100,3,&puStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 100035278; end: 10003529b;  */

void FUN_100035278(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10003529c; end: 1000353c7;  */

undefined8 FUN_10003529c(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_100035434();
  if (param_2 != 0) {
    if ((param_1 == 0x3731656e6f685069) && (param_2 == -0x15ffffffffffced4)) {
      uVar2 = 1;
      goto LAB_1000353a8;
    }
    uVar1 = param_1;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (param_1,param_2,0x3731656e6f685069,0xea0000000000312c,0);
    uVar2 = 1;
    if (((uVar1 & 1) != 0) || (param_1 == 0x3731656e6f685069 && param_2 == -0x15ffffffffffcdd4))
    goto LAB_1000353a8;
    uVar1 = param_1;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (param_1,param_2,0x3731656e6f685069,0xea0000000000322c,0);
    if (((uVar1 & 1) != 0) || (param_1 == 0x3731656e6f685069 && param_2 == -0x15ffffffffffccd4))
    goto LAB_1000353a8;
    uVar1 = param_1;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (param_1,param_2,0x3731656e6f685069,0xea0000000000332c,0);
    if ((((uVar1 & 1) != 0) || (param_1 == 0x3731656e6f685069 && param_2 == -0x15ffffffffffcbd4)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_1,param_2,0x3731656e6f685069,0xea0000000000342c,0), (param_1 & 1) != 0))
    goto LAB_1000353a8;
  }
  uVar2 = 0;
LAB_1000353a8:
  _swift_bridgeObjectRelease(param_2);
  return uVar2;
}



/* Entry: 1000353c8; end: 100035403; -[_TtC33SnapchatCaptureExtensionUtilities21CaptureExtensionUtils init] */

void FUN_1000353c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_100035728();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10005b548);
  return;
}



/* Entry: 100035404; end: 100035433;  */

void FUN_100035404(void)

{
  FUN_100035728();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 100035434; end: 100035727;  */

undefined1  [16] FUN_100035434(void)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  byte *pbVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long alStack_6a0 [2];
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  long lStack_660;
  undefined8 uStack_658;
  long lStack_650;
  undefined8 uStack_648;
  long lStack_640;
  undefined8 uStack_638;
  undefined **ppuStack_630;
  undefined8 uStack_628;
  byte bStack_611;
  undefined1 auStack_610 [1024];
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [32];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_100050780;
  lVar4 = 0;
  __ss6MirrorVMa();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar10 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&uStack_690 + lVar1;
  _bzero(auStack_610,0x500);
  _uname(auStack_610);
  uStack_668 = uStack_1f8;
  uStack_670 = uStack_200;
  uStack_658 = uStack_208;
  lStack_660 = lStack_210;
  uStack_688 = uStack_1d8;
  uStack_690 = uStack_1e0;
  uStack_678 = uStack_1e8;
  uStack_680 = uStack_1f0;
  uStack_638 = uStack_1b8;
  lStack_640 = lStack_1c0;
  uStack_628 = uStack_1c8;
  ppuStack_630 = (undefined **)uStack_1d0;
  uStack_648 = uStack_1a8;
  lStack_650 = lStack_1b0;
  uVar11 = 0x1000609d8;
  FUN_100011744(0x1000609d8,&UNK_100041d58);
  puVar5 = &UNK_100053818;
  uStack_90 = uVar11;
  _swift_allocObject(&UNK_100053818,0x110,7);
  *(undefined8 *)(puVar5 + 0x18) = uStack_658;
  *(long *)(puVar5 + 0x10) = lStack_660;
  *(undefined8 *)(puVar5 + 0x28) = uStack_668;
  *(undefined8 *)(puVar5 + 0x20) = uStack_670;
  *(undefined8 *)(puVar5 + 0x38) = uStack_678;
  *(undefined8 *)(puVar5 + 0x30) = uStack_680;
  *(undefined8 *)(puVar5 + 0x48) = uStack_688;
  *(undefined8 *)(puVar5 + 0x40) = uStack_690;
  *(undefined8 *)(puVar5 + 0x58) = uStack_628;
  *(undefined ***)(puVar5 + 0x50) = ppuStack_630;
  *(undefined8 *)(puVar5 + 0x68) = uStack_638;
  *(long *)(puVar5 + 0x60) = lStack_640;
  *(undefined8 *)(puVar5 + 0x78) = uStack_648;
  *(long *)(puVar5 + 0x70) = lStack_650;
  *(undefined8 *)(puVar5 + 0x88) = uStack_198;
  *(undefined8 *)(puVar5 + 0x80) = uStack_1a0;
  *(undefined8 *)(puVar5 + 0x98) = uStack_188;
  *(undefined8 *)(puVar5 + 0x90) = uStack_190;
  *(undefined8 *)(puVar5 + 0xa8) = uStack_178;
  *(undefined8 *)(puVar5 + 0xa0) = uStack_180;
  *(undefined8 *)(puVar5 + 0xb8) = uStack_168;
  *(undefined8 *)(puVar5 + 0xb0) = uStack_170;
  *(undefined8 *)(puVar5 + 200) = uStack_158;
  *(undefined8 *)(puVar5 + 0xc0) = uStack_160;
  *(undefined8 *)(puVar5 + 0xd8) = uStack_148;
  *(undefined8 *)(puVar5 + 0xd0) = uStack_150;
  *(undefined8 *)(puVar5 + 0xe8) = uStack_138;
  *(undefined8 *)(puVar5 + 0xe0) = uStack_140;
  *(undefined8 *)(puVar5 + 0xf8) = uStack_128;
  *(undefined8 *)(puVar5 + 0xf0) = uStack_130;
  *(undefined8 *)(puVar5 + 0x108) = uStack_118;
  *(undefined8 *)(puVar5 + 0x100) = uStack_120;
  ppuVar6 = &puStack_a8;
  puStack_a8 = puVar5;
  __ss6MirrorV10reflectingAByp_tcfC(lVar13);
  __ss6MirrorV8childrens13AnyCollectionVySSSg5label_yp5valuetGvg();
  ppuStack_630 = ppuVar6;
  __ss15_AnySequenceBoxC13_makeIterators0aE0VyxGyFTj();
  __ss19_AnyIteratorBoxBaseC4nextxSgyFTj(&puStack_a8);
  puVar2 = PTR___sypN_100050c40;
  puVar5 = PTR___ss4Int8VN_100050bd0;
  if (lStack_80 == 0) {
    uVar12 = 0;
    uVar11 = 0xe000000000000000;
  }
  else {
    uVar12 = 0;
    uVar11 = 0xe000000000000000;
    lStack_660 = lVar13;
    lStack_650 = lVar10;
    lStack_640 = lVar4;
    do {
      uStack_d8 = uStack_a0;
      puStack_e0 = puStack_a8;
      uStack_c8 = uStack_90;
      uStack_d0 = uStack_98;
      lStack_b8 = lStack_80;
      uStack_c0 = uStack_88;
      FUN_100035758(&puStack_e0,&uStack_110);
      _swift_bridgeObjectRelease(uStack_108);
      pbVar7 = &bStack_611;
      _swift_dynamicCast(pbVar7,auStack_100,puVar2 + 8,puVar5,6);
      if (((int)pbVar7 != 0) && ((ulong)bStack_611 != 0)) {
        if ((char)bStack_611 < '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100035724);
          (*pcVar3)();
        }
        puVar8 = &uStack_110;
        uVar9 = 1;
        uStack_110 = (ulong)bStack_611;
        __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ(puVar8,1);
        uStack_110 = uVar12;
        uStack_108 = uVar11;
        _swift_bridgeObjectRetain(uVar11);
        __sSS6appendyySSF(puVar8,uVar9);
        _swift_bridgeObjectRelease(uVar11);
        _swift_bridgeObjectRelease(uVar9);
        uVar11 = uStack_108;
        uVar12 = uStack_110;
      }
      func_0x0001000357a8(&puStack_e0);
      __ss19_AnyIteratorBoxBaseC4nextxSgyFTj(&puStack_a8);
      lVar4 = lStack_640;
      lVar10 = lStack_650;
      lVar13 = lStack_660;
    } while (lStack_80 != 0);
  }
  _swift_release(ppuStack_630);
  _swift_release(ppuVar6);
  (**(code **)(lVar10 + 8))(lVar13,lVar4);
  if (*(long *)PTR____stack_chk_guard_100050780 != lStack_78) {
    ___stack_chk_fail();
    *(undefined1 **)((long)alStack_6a0 + lVar1) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_6a0 + lVar1 + 8) = FUN_100035728;
    ppuVar6 = &PTR_PTR_10005ed58;
    _objc_opt_self(&PTR_PTR_10005ed58);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = ppuVar6;
    return auVar15;
  }
  auVar14._8_8_ = uVar11;
  auVar14._0_8_ = uVar12;
  return auVar14;
}



/* Entry: 100035728; end: 100035747;  */

void FUN_100035728(void)

{
  _objc_opt_self(&PTR_PTR_10005ed58);
  return;
}



/* Entry: 100035748; end: 100035757;  */

void FUN_100035748(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100035758; end: 1000357ef;  */

undefined8 FUN_100035758(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1000609e0;
  FUN_100011744(0x1000609e0,&UNK_100041d60);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000357f0; end: 100035807;  */

bool FUN_1000357f0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100035808; end: 10003582f;  */

void FUN_100035808(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*unaff_x20);
  return;
}



/* Entry: 100035830; end: 100035833;  */

void FUN_100035830(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100035834; end: 10003585b;  */

void FUN_100035834(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_100036328();
  *param_1 = uVar1;
  return;
}



/* Entry: 10003585c; end: 100035867;  */

void FUN_10003585c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 100035868; end: 1000358c3;  */

void FUN_100035868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000100037320();
  __sSYsSeRzSi8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1000358c4; end: 10003590f;  */

void FUN_1000358c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000100037320();
  __sSYsSERzSi8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 100035910; end: 1000359bb;  */

void FUN_100035910(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1000359bc; end: 100035a17;  */

void FUN_1000359bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1000372e0();
  __sSYsSeRzSi8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 100035a18; end: 100035a63;  */

void FUN_100035a18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1000372e0();
  __sSYsSERzSi8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 100035a64; end: 100035ca7;  */

void FUN_100035a64(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar4 = 0x6d617473656d6974;
  uVar1 = 0xe900000000000070;
  if (bVar2 != 2) {
    uVar4 = 0xd000000000000012;
    uVar1 = 0x800000010004d020;
  }
  uVar3 = 0x6e6f69746361;
  if (bVar2 != 0) {
    uVar3 = 0x746567726174;
  }
  if (bVar2 < 2) {
    uVar1 = 0xe600000000000000;
    uVar4 = uVar3;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar4,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100035ca8; end: 100035da3;  */

void FUN_100035ca8(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  uVar4 = 0x6d617473656d6974;
  uVar1 = 0xe900000000000070;
  if (bVar2 != 2) {
    uVar4 = 0xd000000000000012;
    uVar1 = 0x800000010004d020;
  }
  uVar3 = 0x6e6f69746361;
  if (bVar2 != 0) {
    uVar3 = 0x746567726174;
  }
  if (bVar2 < 2) {
    uVar1 = 0xe600000000000000;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = uVar1;
  return;
}



/* Entry: 100035da4; end: 100035dc7;  */

void FUN_100035da4(undefined1 *param_1,undefined1 param_2)

{
  FUN_100037298();
  *param_1 = param_2;
  return;
}



/* Entry: 100035dc8; end: 100035ddf;  */

undefined1  [16] FUN_100035dc8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 100035de0; end: 100035e2f;  */

void FUN_100035de0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1000363f4();
                    /* WARNING: Could not recover jumptable at 0x00010003b044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_100050c30)(param_1,uVar1);
  return;
}



/* Entry: 100035e30; end: 100035ff7;  */

void FUN_100035e30(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_60 [12];
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x1000609e8;
  FUN_100011744(0x1000609e8,&UNK_100041d78);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  FUN_1000363d0(param_1,uVar6);
  FUN_1000363f4();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_60 + -extraout_x8,&UNK_100053a00,&UNK_100053a00,param_1,uVar6,uVar5);
  uStack_51 = 0;
  func_0x000100036434();
  lVar4 = unaff_x20;
  __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF();
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000100036474();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (unaff_x20 + 1,&uStack_52,lVar3,&UNK_100053970,lVar4);
    lVar4 = 0;
    FUN_100036348();
    iVar2 = *(int *)(lVar4 + 0x18);
    uStack_53 = 2;
    uVar5 = 0;
    __s10Foundation4DateVMa(0);
    uVar6 = 0x100060a08;
    FUN_100036554(0x100060a08,PTR___s10Foundation4DateVSEAAMc_100050220);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (unaff_x20 + iVar2,&uStack_53,lVar3,uVar5,uVar6);
    puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x1c));
    uStack_54 = 3;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (*puVar1,puVar1[1],&uStack_54,lVar3);
  }
  (**(code **)(lVar7 + 8))(auStack_60 + -extraout_x8,lVar3);
  return;
}



/* Entry: 100035ff8; end: 1000362ff;  */

/* WARNING: Removing unreachable block (ram,0x000100036224) */
/* WARNING: Removing unreachable block (ram,0x00010003629c) */
/* WARNING: Removing unreachable block (ram,0x000100036168) */
/* WARNING: Removing unreachable block (ram,0x000100036230) */

void FUN_100035ff8(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uStack_80;
  long alStack_78 [3];
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x100060490;
  alStack_78[0] = param_1;
  FUN_100011744(0x100060490,&UNK_100041d70);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x100060a10;
  FUN_100011744(0x100060a10,&UNK_100041d80);
  lVar11 = *(long *)(lVar2 + -8);
  alStack_78[1] = lVar2;
  (*(code *)PTR____chkstk_darwin_100050770)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = ((long)&uStack_80 - extraout_x8) - extraout_x8_00;
  lVar2 = 0;
  FUN_100036348();
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar10 = (undefined1 *)(lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  alStack_78[2] = param_2;
  FUN_1000363d0(param_2,uVar6);
  FUN_1000363f4();
  puVar3 = &UNK_100053a00;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar9,&UNK_100053a00,&UNK_100053a00,param_2,uVar6,uVar5);
  if (unaff_x21 == 0) {
    uStack_52 = 0;
    uStack_80 = (undefined1 *)((long)&uStack_80 - extraout_x8);
    FUN_1000364d4();
    lVar8 = alStack_78[1];
    puVar4 = &UNK_1000538e0;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&uStack_51,&UNK_1000538e0,&uStack_52,alStack_78[1],&UNK_1000538e0,puVar3);
    *puVar10 = uStack_51;
    uStack_54 = 1;
    func_0x000100036514();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&uStack_53,&UNK_100053970,&uStack_54,lVar8,&UNK_100053970,puVar4);
    puVar10[1] = uStack_53;
    uVar5 = 0;
    __s10Foundation4DateVMa(0);
    uStack_55 = 2;
    uVar6 = 0x100060a28;
    FUN_100036554(0x100060a28,PTR___s10Foundation4DateVSeAAMc_100050230);
    lVar8 = (long)uStack_80;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (uStack_80,uVar5,&uStack_55,alStack_78[1],uVar5,uVar6);
    FUN_100036380(lVar8,puVar10 + *(int *)(lVar2 + 0x18));
    uStack_56 = 3;
    puVar7 = &uStack_56;
    lVar8 = alStack_78[1];
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    uStack_80 = puVar7;
    (**(code **)(lVar11 + 8))(lVar9,alStack_78[1]);
    lVar9 = alStack_78[0];
    iVar1 = *(int *)(lVar2 + 0x1c);
    *(undefined1 **)(puVar10 + iVar1) = uStack_80;
    *(long *)((long)(puVar10 + iVar1) + 8) = lVar8;
    func_0x000100036594(puVar10,lVar9);
    FUN_1000364b4(alStack_78[2]);
    func_0x000100031c64(puVar10);
  }
  else {
    FUN_1000364b4(alStack_78[2]);
  }
  return;
}



/* Entry: 100036300; end: 100036327;  */

void FUN_100036300(void)

{
  FUN_100035ff8();
  return;
}



/* Entry: 100036328; end: 100036347;  */

ulong FUN_100036328(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 100036348; end: 10003637f;  */

void FUN_100036348(undefined8 param_1)

{
  if (lRam0000000100060a98 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_100044b48);
  return;
}



/* Entry: 100036380; end: 1000363cf;  */

undefined8 FUN_100036380(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x100060490;
  FUN_100011744(0x100060490,&UNK_100041d70);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000363d0; end: 1000363f3;  */

long * FUN_1000363d0(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 1000363f4; end: 1000364b3;  */

void FUN_1000363f4(void)

{
  undefined *puVar1;
  
  if (puRam00000001000609f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10004215c;
  _swift_getWitnessTable(&UNK_10004215c,&UNK_100053a00);
  puRam00000001000609f0 = puVar1;
  return;
}



/* Entry: 1000364b4; end: 1000364d3;  */

void FUN_1000364b4(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000364c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010003b584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100050d48)(*param_1);
  return;
}



/* Entry: 1000364d4; end: 100036553;  */

void FUN_1000364d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060a18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100041e28;
  _swift_getWitnessTable(&UNK_100041e28,&UNK_1000538e0);
  puRam0000000100060a18 = puVar1;
  return;
}



/* Entry: 100036554; end: 1000365d7;  */

void FUN_100036554(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    __s10Foundation4DateVMa(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1000365d8; end: 1000365db;  */

void FUN_1000365d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060a30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100041d88;
  _swift_getWitnessTable(&UNK_100041d88,&UNK_1000538e0);
  puRam0000000100060a30 = puVar1;
  return;
}



/* Entry: 1000365dc; end: 10003661b;  */

void FUN_1000365dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060a30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100041d88;
  _swift_getWitnessTable(&UNK_100041d88,&UNK_1000538e0);
  puRam0000000100060a30 = puVar1;
  return;
}



/* Entry: 10003661c; end: 10003661f;  */

void FUN_10003661c(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060a38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100041e78;
  _swift_getWitnessTable(&UNK_100041e78,&UNK_100053970);
  puRam0000000100060a38 = puVar1;
  return;
}



/* Entry: 100036620; end: 10003665f;  */

void FUN_100036620(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060a38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100041e78;
  _swift_getWitnessTable(&UNK_100041e78,&UNK_100053970);
  puRam0000000100060a38 = puVar1;
  return;
}



/* Entry: 100036660; end: 1000368bb;  */

long * FUN_100036660(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    *(short *)param_1 = (short)*param_2;
    lVar8 = (long)*(int *)(param_3 + 0x18);
    lVar5 = 0;
    __s10Foundation4DateVMa();
    lVar9 = *(long *)(lVar5 + -8);
    lVar6 = (long)param_2 + lVar8;
    (**(code **)(lVar9 + 0x30))(lVar6,1,lVar5);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar9 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar5);
    }
    else {
      lVar6 = 0x100060490;
      FUN_100011744(0x100060490,&UNK_100041d70);
      _memcpy((long)param_1 + lVar8,(long)param_2 + lVar8,
              *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    _swift_bridgeObjectRetain();
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1000368bc; end: 1000369ff;  */

undefined1 * FUN_1000368bc(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  iVar2 = *(int *)(param_3 + 0x18);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  puVar4 = param_1 + iVar2;
  (*pcVar8)(puVar4,1,lVar3);
  puVar5 = param_2 + iVar2;
  (*pcVar8)(puVar5,1,lVar3);
  if ((int)puVar4 == 0) {
    if ((int)puVar5 == 0) {
      (**(code **)(lVar7 + 0x18))(param_1 + iVar2,param_2 + iVar2,lVar3);
      goto LAB_1000369a0;
    }
    (**(code **)(lVar7 + 8))(param_1 + iVar2,lVar3);
  }
  else if ((int)puVar5 == 0) {
    (**(code **)(lVar7 + 0x10))(param_1 + iVar2,param_2 + iVar2,lVar3);
    (**(code **)(lVar7 + 0x38))(param_1 + iVar2,0,1,lVar3);
    goto LAB_1000369a0;
  }
  lVar3 = 0x100060490;
  FUN_100011744(0x100060490,&UNK_100041d70);
  _memcpy(param_1 + iVar2,param_2 + iVar2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
LAB_1000369a0:
  iVar2 = *(int *)(param_3 + 0x1c);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar6 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}



/* Entry: 100036a00; end: 100036acf;  */

undefined2 * FUN_100036a00(undefined2 *param_1,undefined2 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  lVar5 = (long)*(int *)(param_3 + 0x18);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar3 + -8);
  lVar4 = (long)param_2 + lVar5;
  (**(code **)(lVar6 + 0x30))(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar6 + 0x20))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar3);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar3);
  }
  else {
    lVar4 = 0x100060490;
    FUN_100011744(0x100060490,&UNK_100041d70);
    _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,
            *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar7 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar7;
  return param_1;
}



/* Entry: 100036ad0; end: 100036bfb;  */

undefined2 * FUN_100036ad0(undefined2 *param_1,undefined2 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  *param_1 = *param_2;
  lVar8 = (long)*(int *)(param_3 + 0x18);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar4 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar5 = (long)param_1 + lVar8;
  (*pcVar10)(lVar5,1,lVar4);
  lVar6 = (long)param_2 + lVar8;
  (*pcVar10)(lVar6,1,lVar4);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar9 + 0x28))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar4);
      goto LAB_100036bac;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar8,lVar4);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar4);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar4);
    goto LAB_100036bac;
  }
  lVar5 = 0x100060490;
  FUN_100011744(0x100060490,&UNK_100041d70);
  _memcpy((long)param_1 + lVar8,(long)param_2 + lVar8,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40))
  ;
LAB_100036bac:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar3 = puVar2[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar7);
  return param_1;
}



/* Entry: 100036bfc; end: 100036c07;  */

void FUN_100036bfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003b4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_100050cd0)();
  return;
}



/* Entry: 100036c08; end: 100036ca3;  */

ulong FUN_100036c08(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0x100060490;
  FUN_100011744(0x100060490,&UNK_100041d70);
  if ((int)param_2 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
    uVar3 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000100036c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(uVar3,param_2,lVar2);
    return uVar3;
  }
  uVar3 = *(ulong *)(param_1 + *(int *)(param_3 + 0x1c) + 8);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar1 = (int)uVar3 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (ulong)(uVar1 + 1);
}



/* Entry: 100036ca4; end: 100036caf;  */

void FUN_100036ca4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003b5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_100050d68)();
  return;
}



/* Entry: 100036cb0; end: 100036d3b;  */

void FUN_100036cb0(long param_1,ulong param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0x100060490;
  FUN_100011744(0x100060490,&UNK_100041d70);
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100036d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))
              (param_1 + *(int *)(param_4 + 0x18),param_2,param_2,lVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x1c) + 8) = param_2 & 0xffffffff;
  return;
}



/* Entry: 100036d3c; end: 100036dbf;  */

void FUN_100036d3c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_40 = &UNK_100042000;
  puStack_38 = &UNK_100042018;
  lVar1 = 0x13f;
  func_0x000100025554();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_100042030;
    _swift_initStructMetadata(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 100036dc0; end: 1000371cf;  */

int FUN_100036dc0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100036e3c;
        goto LAB_100036e20;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100036e20:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_100036e3c:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1000371d0; end: 10003720f;  */

void FUN_1000371d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042134;
  _swift_getWitnessTable(&UNK_100042134,&UNK_100053a00);
  puRam0000000100060ad8 = puVar1;
  return;
}



/* Entry: 100037210; end: 100037213;  */

void FUN_100037210(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060ae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042094;
  _swift_getWitnessTable(&UNK_100042094,&UNK_100053a00);
  puRam0000000100060ae0 = puVar1;
  return;
}



/* Entry: 100037214; end: 100037253;  */

void FUN_100037214(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060ae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100042094;
  _swift_getWitnessTable(&UNK_100042094,&UNK_100053a00);
  puRam0000000100060ae0 = puVar1;
  return;
}



/* Entry: 100037254; end: 100037257;  */

void FUN_100037254(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060ae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10004206c;
  _swift_getWitnessTable(&UNK_10004206c,&UNK_100053a00);
  puRam0000000100060ae8 = puVar1;
  return;
}



/* Entry: 100037258; end: 100037297;  */

void FUN_100037258(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060ae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10004206c;
  _swift_getWitnessTable(&UNK_10004206c,&UNK_100053a00);
  puRam0000000100060ae8 = puVar1;
  return;
}



/* Entry: 100037298; end: 1000372df;  */

undefined ** FUN_100037298(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR___ss20__StaticArrayStorageCN_100053a10;
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF
            (&PTR___ss20__StaticArrayStorageCN_100053a10,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if ((undefined **)0x3 < ppuVar1) {
    ppuVar1 = (undefined **)0x4;
  }
  return ppuVar1;
}



/* Entry: 1000372e0; end: 10003735f;  */

void FUN_1000372e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060af0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100041ee0;
  _swift_getWitnessTable(&UNK_100041ee0,&UNK_100053970);
  puRam0000000100060af0 = puVar1;
  return;
}



/* Entry: 100037360; end: 1000373b7;  */

void FUN_100037360(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1000373b8; end: 100037463;  */

void FUN_1000373b8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100037464; end: 100037487;  */

void FUN_100037464(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 100037488; end: 1000374e3;  */

void FUN_100037488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010003841c();
  __sSYsSeRzSi8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1000374e4; end: 10003752f;  */

void FUN_1000374e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010003841c();
  __sSYsSERzSi8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 100037530; end: 1000377af;  */

void FUN_100037530(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0x5f6572756c696166;
  uVar2 = 0xee006e6f73616572;
  if (bVar3 != 2) {
    uVar5 = 0xd000000000000012;
    uVar2 = 0x800000010004d020;
  }
  uVar1 = 0xea00000000006564;
  uVar4 = 0x6f635f726f727265;
  if (bVar3 != 0) {
    uVar1 = 0xea00000000006570;
    uVar4 = 0x79745f726f727265;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar5,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1000377b0; end: 1000378d3;  */

void FUN_1000377b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar5 = 0x5f6572756c696166;
  uVar2 = 0xee006e6f73616572;
  if (bVar3 != 2) {
    uVar5 = 0xd000000000000012;
    uVar2 = 0x800000010004d020;
  }
  uVar1 = 0xea00000000006564;
  uVar4 = 0x6f635f726f727265;
  if (bVar3 != 0) {
    uVar1 = 0xea00000000006570;
    uVar4 = 0x79745f726f727265;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  *param_1 = uVar5;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1000378d4; end: 1000378f7;  */

void FUN_1000378d4(undefined1 *param_1,undefined1 param_2)

{
  FUN_100037bb8();
  *param_1 = param_2;
  return;
}



/* Entry: 1000378f8; end: 10003790f;  */

undefined1  [16] FUN_1000378f8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 100037910; end: 10003795f;  */

void FUN_100037910(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100037ae4();
                    /* WARNING: Could not recover jumptable at 0x00010003b044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_100050c30)(param_1,uVar1);
  return;
}



/* Entry: 100037960; end: 100037ae3;  */

void FUN_100037960(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_60 [11];
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x100060b00;
  FUN_100011744(0x100060b00,&UNK_1000421b0);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1000363d0(param_1,uVar3);
  FUN_100037ae4();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_60 + -extraout_x8,&UNK_100053cf8,&UNK_100053cf8,param_1,uVar3,uVar1);
  uVar3 = *unaff_x20;
  uStack_51 = 0;
  __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySiSg_xtKF
            (uVar3,*(undefined1 *)(unaff_x20 + 1),&uStack_51,lVar2);
  if (unaff_x21 == 0) {
    uStack_52 = *(undefined1 *)((long)unaff_x20 + 9);
    uStack_53 = 1;
    func_0x000100037b24();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&uStack_52,&uStack_53,lVar2,&UNK_100053c68,uVar3);
    uStack_54 = 2;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[2],unaff_x20[3],&uStack_54,lVar2);
    uStack_55 = 3;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[4],unaff_x20[5],&uStack_55,lVar2);
  }
  (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,lVar2);
  return;
}



/* Entry: 100037ae4; end: 100037b63;  */

void FUN_100037ae4(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10004243c;
  _swift_getWitnessTable(&UNK_10004243c,&UNK_100053cf8);
  puRam0000000100060b08 = puVar1;
  return;
}



/* Entry: 100037b64; end: 100037ba3;  */

void FUN_100037b64(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100037c00(&uStack_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[3] = uStack_38;
    param_1[2] = uStack_40;
    param_1[5] = uStack_28;
    param_1[4] = uStack_30;
  }
  return;
}



/* Entry: 100037ba4; end: 100037bb7;  */

void FUN_100037ba4(void)

{
  FUN_100037960();
  return;
}


