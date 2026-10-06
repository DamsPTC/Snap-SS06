/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101454d5c; end: 101454db3; -[SCCameraApplicationStateImpl initWithApplicationStateProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101454d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112da0628) = param_3;
  lVar2 = param_1;
  func_0x0001000d27f0();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 101454db4; end: 101454e27; -[SCCameraApplicationStateImpl isForegroundingApp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101454db4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = _DAT_112da0628;
  lVar4 = *(long *)(param_1 + _DAT_112da0628);
  lVar2 = param_1;
  func_0x000107c61174();
  func_0x000107c3dfc0();
  if (lVar4 == 2) {
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x000107c4d668(lVar3);
    func_0x000107c61170(lVar2);
    bVar1 = lVar3 == 0;
  }
  else {
    func_0x000107c61170(lVar2);
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 101454e28; end: 101454e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101454e28(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112da0628);
  lVar2 = lVar3;
  func_0x000107c3dfc0();
  if (lVar2 == 2) {
    func_0x000107c4d668(lVar3);
    bVar1 = lVar3 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 101454e74; end: 101454eff; -[SCCameraApplicationStateImpl isAppInBackground] */

uint FUN_101454e74(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101454ea8();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101454f00; end: 101454f2f;  */

void FUN_101454f00(void)

{
  func_0x0001000d27f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101454f30; end: 101454f3f; -[SCCameraApplicationStateImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101454f30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112da0628));
  return;
}



/* Entry: 101454f40; end: 101454fb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101454f40(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112da0658;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c50404(*(undefined8 *)(lVar1 + _DAT_112da0698));
    func_0x000107c615e8();
  }
  func_0x00010087d008();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101454fb4; end: 101454fdf; -[_TtC38SCCameraHardwareOwnershipRequesterImpl37CameraHardwareOwnershipRequesterToken init] */

void FUN_101454fb4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraHardwareOwnershipRequesterImpl.CameraHardwareOwnershipRequesterToken"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101454fe0);
  (*pcVar1)();
}



/* Entry: 101454fe0; end: 10145503f; -[_TtC38SCCameraHardwareOwnershipRequesterImpl37CameraHardwareOwnershipRequesterToken invalidate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101454fe0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112da0658;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c50404(*(undefined8 *)(lVar1 + _DAT_112da0698),param_2,0,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 101455040; end: 101455083;  */

bool FUN_101455040(long *param_1,long *param_2)

{
  return *(ulong *)(*param_1 + 0x10) < *(ulong *)(*param_2 + 0x10);
}



/* Entry: 101455084; end: 101455133;  */

void FUN_101455084(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_68 [72];
  
  lVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(*(undefined8 *)(lVar1 + 0x10));
  func_0x000107c606a8();
  return;
}



/* Entry: 101455134; end: 101455197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101455134(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112da0690;
  lVar2 = *(long *)(unaff_x20 + _DAT_112da0690);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_101455198();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar3;
}



/* Entry: 101455198; end: 101455427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101455198(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long *plVar7;
  code *pcVar8;
  
  func_0x0001000285a8(0x112da0770,&UNK_10d9437d0);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  puVar2 = &UNK_1103bdf40;
  func_0x000107c613fc(&UNK_1103bdf40,0x18,7);
  plVar7 = *(long **)(param_1 + _DAT_112da0698);
  plVar3 = plVar7;
  func_0x000107c41620();
  func_0x000107c61180();
  *(long **)(puVar2 + 0x10) = plVar3;
  func_0x0001000285a8(0x112da0778,&UNK_10d9437d8);
  func_0x000107c4da04();
  func_0x000107c61180();
  plVar3 = plVar7;
  func_0x0001000b637c();
  func_0x000107c61170();
  FUN_1014554f4();
  func_0x0001000c2068();
  func_0x000107c61574(plVar3);
  puVar4 = &UNK_1103bdf68;
  func_0x000107c613fc(&UNK_1103bdf68,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  pcVar8 = *(code **)(*plVar7 + 0x60);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(puVar2);
  pcVar5 = FUN_101455534;
  puVar6 = puVar4;
  (*pcVar8)(FUN_101455534);
  func_0x000107c61574(plVar7);
  func_0x000107c61574(puVar4);
  pcVar8 = pcVar5;
  func_0x000107c614f0(pcVar5);
  (**(code **)(puVar6 + 0x10))(*(undefined8 *)(param_1 + _DAT_112da0688),pcVar8,puVar6);
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(pcVar5);
  return uVar1;
}



/* Entry: 101455428; end: 10145545b;  */

void FUN_101455428(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10145545c; end: 1014554a3; -[_TtC38SCCameraHardwareOwnershipRequesterImpl38SCCameraHardwareOwnershipRequesterImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10145545c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da0688));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da0690));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da0698));
  return;
}



/* Entry: 1014554a4; end: 1014554f3; -[_TtC38SCCameraHardwareOwnershipRequesterImpl38SCCameraHardwareOwnershipRequesterImpl hardwareOwnershipObservable] */

void FUN_1014554a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101455134();
  uVar2 = uVar1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1014554f4; end: 101455533;  */

void FUN_1014554f4(void)

{
  long lVar1;
  undefined *puVar2;
  
  if (puRam0000000112da0768 != (undefined *)0x0) {
    return;
  }
  lVar1 = (long)puRam0000000112da0768;
  func_0x00010087cdcc();
  puVar2 = &UNK_10d943760;
  func_0x000107c61520(&UNK_10d943760,lVar1);
  puRam0000000112da0768 = puVar2;
  return;
}



/* Entry: 101455534; end: 10145554b;  */

void FUN_101455534(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 auStack_98 [3];
  undefined8 auStack_80 [3];
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *param_1;
  func_0x0001043b8968(0,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x10);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  func_0x0001043b8498(uVar2,uVar4);
  auStack_80[0] = uVar2;
  func_0x000100087c34(auStack_80);
  func_0x000107c61170(uVar2);
  func_0x000107c61428(lVar1 + 0x10,auStack_80,0,0);
  uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x10);
  func_0x0001043b85f4(uVar2,uVar4);
  auStack_98[0] = uVar2;
  func_0x000100087c34(auStack_98);
  func_0x000107c61170(uVar2);
  func_0x000107c61428(lVar1 + 0x10,auStack_98,1,0);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  *(long *)(lVar1 + 0x10) = lVar3;
  func_0x000107c6157c(lVar3);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 10145554c; end: 101455597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10145554c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112da0780) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101455598; end: 1014555a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101455598(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0780);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  FUN_100c42040(0);
  uVar2 = uVar5;
  (*(code *)&UNK_1043d49cc)(uVar5);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x2000000000000000;
}



/* Entry: 1014555a4; end: 1014555cb; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeStabilizationModeActive:] */

/* WARNING: Possible PIC construction at 0x0001014556bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014556c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014555a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1103be430;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(&UNK_1103be430,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_1103be100;
  func_0x000107c613fc(&UNK_1103be100,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  FUN_10145af04(0x101456314,puVar1,uVar3,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014555cc; end: 1014555f3; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeFlashActive:] */

/* WARNING: Possible PIC construction at 0x000101455c48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101455c4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014555cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1103be408;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(&UNK_1103be408,0x11,7);
  puVar1[0x10] = param_3;
  puVar2 = &UNK_1103be100;
  func_0x000107c613fc(&UNK_1103be100,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c61174(param_1);
  (*(code *)0x10145b3e4)(0x101456310,puVar1,uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1014555f4; end: 10145560f; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeRingFlashState:] */

/* WARNING: Possible PIC construction at 0x0001014556bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014556c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014555f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1103be3e0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(&UNK_1103be3e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_1103be100;
  func_0x000107c613fc(&UNK_1103be100,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  (*(code *)0x10145b8c4)(0x10145630c,puVar1,uVar3,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101455610; end: 1014556e3;  */

/* WARNING: Possible PIC construction at 0x0001014556bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014556c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455610(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,code *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(param_4,0x18,7);
  *(undefined8 *)(param_4 + 0x10) = param_3;
  puVar1 = &UNK_1103be100;
  func_0x000107c613fc(&UNK_1103be100,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  (*param_6)(param_5,param_4,uVar2,puVar1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014556e4; end: 101455727;  */

/* WARNING: Possible PIC construction at 0x000101455714: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101455718) */

void FUN_1014556e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001002ea0d0(param_2);
  func_0x0001002ea1e0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101455728; end: 101455733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101455728(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0780);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  FUN_100c42040(0);
  uVar2 = uVar5;
  (*(code *)&UNK_1043d4a98)(uVar5);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x2000000000000000;
}



/* Entry: 101455734; end: 1014558ef; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeFlashSupportedAndTorchSupportedWithIsFlashSupported:isTorchSupported:] */

/* WARNING: Possible PIC construction at 0x0001014557cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014557d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455734(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112da0780);
  puVar1 = &UNK_1103be3b8;
  func_0x000107c613fc(&UNK_1103be3b8,0x12,7);
  puVar1[0x10] = param_3;
  puVar1[0x11] = param_4;
  puVar2 = &UNK_1103be100;
  func_0x000107c613fc(&UNK_1103be100,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c61174(param_1);
  func_0x00010145bda4(0x101456318,puVar1,uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1014558f0; end: 1014559b3; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeZoomFactor:devicePosition:] */

/* WARNING: Possible PIC construction at 0x00010145598c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101455990) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014558f0(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + _DAT_112da0780);
  puVar1 = &UNK_1103be390;
  func_0x000107c613fc(&UNK_1103be390,0x14,7);
  *(undefined4 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_1103be100;
  func_0x000107c613fc(&UNK_1103be100,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_2);
  func_0x000107c61174(param_2);
  func_0x00010145c284(0x101456308,puVar1,uVar3,puVar2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1014559b4; end: 1014559bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1014559b4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0780);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  FUN_100c42040(0);
  uVar2 = uVar5;
  (*(code *)&UNK_1043d4b30)(uVar5);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x2000000000000000;
}



/* Entry: 1014559c0; end: 1014559db; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeLowLightCondition:] */

/* WARNING: Possible PIC construction at 0x000101455c48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101455c4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014559c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1103be368;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(&UNK_1103be368,0x11,7);
  puVar1[0x10] = param_3;
  puVar2 = &UNK_1103be100;
  func_0x000107c613fc(&UNK_1103be100,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c61174(param_1);
  (*(code *)0x10145c7c0)(0x101456304,puVar1,uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1014559dc; end: 1014559ef; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeIsMultitaskingCameraAccessEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014559dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1103be340;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(&UNK_1103be340,0x11,7);
  puVar1[0x10] = param_3;
  func_0x000107c61174(param_1);
  FUN_1014589ac(0x101456300,puVar1,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1014559f0; end: 101455a03; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeTorchActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014559f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1103be318;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(&UNK_1103be318,0x11,7);
  puVar1[0x10] = param_3;
  func_0x000107c61174(param_1);
  FUN_1014589ac(0x1014562fc,puVar1,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101455a04; end: 101455a17; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeDirectorModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455a04(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1103be2f0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(&UNK_1103be2f0,0x11,7);
  puVar1[0x10] = param_3;
  func_0x000107c61174(param_1);
  FUN_1014589ac(0x1014562f8,puVar1,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101455a18; end: 101455a2b; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeLightingCondition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455a18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1103be2c8;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(&UNK_1103be2c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_1014589ac(0x1014562f4,puVar1,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101455a2c; end: 101455a3f; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeAudioSessionActivated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455a2c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1103be2a0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(&UNK_1103be2a0,0x11,7);
  puVar1[0x10] = param_3;
  func_0x000107c61174(param_1);
  FUN_1014589ac(0x1014562f0,puVar1,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101455a40; end: 101455a53; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeAvailabilityOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455a40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1103be278;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(&UNK_1103be278,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_1014589ac(0x1014562ec,puVar1,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101455a54; end: 101455ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455a54(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(param_4,0x18,7);
  *(undefined8 *)(param_4 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_1014589ac(param_5,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4);
  return;
}



/* Entry: 101455ad4; end: 101455ae7; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeUltraWideSupportedOnCurrentDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455ad4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1103be250;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(&UNK_1103be250,0x11,7);
  puVar1[0x10] = param_3;
  func_0x000107c61174(param_1);
  FUN_1014589ac(0x1014562e8,puVar1,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101455ae8; end: 101455afb; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeTelephotoSupportedOnCurrentDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455ae8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1103be228;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(&UNK_1103be228,0x11,7);
  puVar1[0x10] = param_3;
  func_0x000107c61174(param_1);
  FUN_1014589ac(0x1014562e4,puVar1,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101455afc; end: 101455b0f; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeAspectRatio4By3ModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455afc(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1103be200;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(&UNK_1103be200,0x11,7);
  puVar1[0x10] = param_3;
  func_0x000107c61174(param_1);
  FUN_1014589ac(0x1014562e0,puVar1,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101455b10; end: 101455b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455b10(long param_1,undefined8 param_2,undefined1 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(param_4,0x11,7);
  *(undefined1 *)(param_4 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_1014589ac(param_5,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4);
  return;
}



/* Entry: 101455b90; end: 101455b9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101455b90(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0780);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  FUN_100c42040(0);
  uVar2 = uVar5;
  (*(code *)&UNK_1043d4bb8)(uVar5);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x2000000000000000;
}



/* Entry: 101455b9c; end: 101455bb7; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeIsHDModeActive:] */

/* WARNING: Possible PIC construction at 0x000101455c48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101455c4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455b9c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1103be1d8;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(&UNK_1103be1d8,0x11,7);
  puVar1[0x10] = param_3;
  puVar2 = &UNK_1103be100;
  func_0x000107c613fc(&UNK_1103be100,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c61174(param_1);
  (*(code *)0x10145cca0)(FUN_1014562dc,puVar1,uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101455bb8; end: 101455c6b;  */

/* WARNING: Possible PIC construction at 0x000101455c48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101455c4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455bb8(long param_1,undefined8 param_2,undefined1 param_3,long param_4,
                  undefined8 param_5,code *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(param_4,0x11,7);
  *(undefined1 *)(param_4 + 0x10) = param_3;
  puVar1 = &UNK_1103be100;
  func_0x000107c613fc(&UNK_1103be100,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_1);
  (*param_6)(param_5,param_4,uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101455c6c; end: 101455c77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101455c6c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0780);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  FUN_100c42040(0);
  uVar2 = uVar5;
  (*(code *)&UNK_1043d4b74)(uVar5);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x2000000000000000;
}



/* Entry: 101455c78; end: 101455cf7; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeToneModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455c78(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0780);
  puVar1 = &UNK_1103be100;
  func_0x000107c613fc(&UNK_1103be100,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_1);
  func_0x00010145d180(0,0,uVar2,puVar1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101455cf8; end: 101455d2b;  */

ulong FUN_101455cf8(ulong param_1)

{
  FUN_100c42040(0);
  func_0x0001043d4c60(param_1);
  return param_1 | 0x2000000000000000;
}



/* Entry: 101455d2c; end: 101455e4b; -[SCManagedCapturerDevicePropertiesStateManagerImpl didDetectFaceBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455d2c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_101456258(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = 0;
    FUN_101456258(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
    uVar3 = uVar2;
    func_0x000100120cb0();
    func_0x000107c5f9e8(param_3,uVar1,uVar2,uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c61434(param_3);
  func_0x000107c61174(param_1);
  func_0x00010145d660(0,0,uVar3,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61430(param_3,2);
  return;
}



/* Entry: 101455e4c; end: 101455eb3; -[SCManagedCapturerDevicePropertiesStateManagerImpl didToggleMultiCamSessionWithEnabled:primaryCameraPosition:secondaryCameraPositions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455e4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c61174();
  func_0x000101458db8(0,0,uVar1,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101455eb4; end: 101455ee7;  */

ulong FUN_101455eb4(ulong param_1)

{
  FUN_100c42040(0);
  func_0x0001043d4cf8(param_1);
  return param_1 | 0x2000000000000000;
}



/* Entry: 101455ee8; end: 101455f37; -[SCManagedCapturerDevicePropertiesStateManagerImpl activateDeviceDidFailForDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455ee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c61174();
  func_0x000101459298(0,0,uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101455f38; end: 101455f97; -[SCManagedCapturerDevicePropertiesStateManagerImpl init] */

void FUN_101455f38(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCManagedCapturerStateCoordinatorImpl.ManagedCapturerDevicePropertiesStateManagerImpl"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101455f64);
  (*pcVar1)();
}



/* Entry: 101455f98; end: 101455fa7; -[SCManagedCapturerDevicePropertiesStateManagerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101455f98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da0780));
  return;
}



/* Entry: 101455fa8; end: 10145601f;  */

void FUN_101455fa8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001002e96c8(param_1,*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101456020; end: 10145602b;  */

/* WARNING: Possible PIC construction at 0x000101455714: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101455718) */

void FUN_101456020(void)

{
  undefined1 uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar2 = (ulong)*(byte *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x11);
  func_0x0001002ea0d0(uVar2);
  func_0x0001002ea1e0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10145602c; end: 101456207;  */

void FUN_10145602c(void)

{
  long unaff_x20;
  
  func_0x0001002ea9f8(*(undefined4 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101456208; end: 101456257;  */

void FUN_101456208(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103be128;
  if (lRam0000000112da07b0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112da07b0 = param_1;
  }
  return;
}



/* Entry: 101456258; end: 1014562db;  */

void FUN_101456258(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1014562dc; end: 10145631b;  */

void FUN_1014562dc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001002ed158(param_1,*(undefined1 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10145631c; end: 101456367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10145631c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112da07d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101456368; end: 1014563fb; -[SCManagedCapturerExposureStateManagerImpl didChangeExposureBias:] */

/* WARNING: Possible PIC construction at 0x0001014563dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014563e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101456368(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da07d0);
  puVar1 = &UNK_1103be4a8;
  func_0x000107c613fc(&UNK_1103be4a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  FUN_1014589ac(FUN_101456534,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014563fc; end: 101456443;  */

ulong FUN_1014563fc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  FUN_100c71df4(0);
  func_0x0001043d6d10(param_1,param_2);
  return uVar1 | 0xa000000000000000;
}



/* Entry: 101456444; end: 10145649b; -[SCManagedCapturerExposureStateManagerImpl didChangeExposurePoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101456444(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_112da07d0);
  func_0x000107c61174();
  FUN_101459764(param_1,param_2,0,0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10145649c; end: 1014564fb; -[SCManagedCapturerExposureStateManagerImpl init] */

void FUN_10145649c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCManagedCapturerStateCoordinatorImpl.ManagedCapturerExposureStateManagerImpl"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014564c8);
  (*pcVar1)();
}



/* Entry: 1014564fc; end: 10145650b; -[SCManagedCapturerExposureStateManagerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014564fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da07d0));
  return;
}



/* Entry: 10145650c; end: 101456533;  */

void FUN_10145650c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001002e9c84(param_1,*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101456534; end: 101456537;  */

void FUN_101456534(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001002e9c84(param_1,*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101456538; end: 101456557; -[SCManagedCapturerFocusStateManagerImpl updateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101456538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(*(long *)(param_1 + _DAT_112da0800) + _DAT_112da0968));
  return;
}



/* Entry: 101456558; end: 1014565cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101456558(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112da0800) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014565cc; end: 1014566bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1014565cc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0800);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar5 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar5);
    func_0x00010006c804();
    func_0x000107c61574(uVar5);
    uVar4 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar5 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar4);
    func_0x000107c6157c(uVar5);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar5);
  }
  func_0x0001043d7828(0);
  uVar2 = uVar4;
  func_0x0001043d73a0(uVar4);
  func_0x000107c61170(uVar4);
  return uVar2 | 0xc000000000000000;
}



/* Entry: 1014566bc; end: 101456767; -[SCManagedCapturerFocusStateManagerImpl didChangeAdjustingFocus:] */

/* WARNING: Possible PIC construction at 0x000101456748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010145674c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014566bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112da0800);
  puVar1 = &UNK_1103be520;
  func_0x000107c613fc(&UNK_1103be520,0x11,7);
  puVar1[0x10] = param_3;
  puVar2 = &UNK_1103be4f8;
  func_0x000107c613fc(&UNK_1103be4f8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c61174(param_1);
  func_0x00010145db88(FUN_101456894,puVar1,uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101456768; end: 1014567ab;  */

ulong FUN_101456768(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  func_0x0001043d7828(0);
  func_0x0001043d749c(param_1,param_2);
  return uVar1 | 0xc000000000000000;
}



/* Entry: 1014567ac; end: 101456803; -[SCManagedCapturerFocusStateManagerImpl didChangeFocusPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014567ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_112da0800);
  func_0x000107c61174();
  func_0x000101459c44(param_1,param_2,0,0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101456804; end: 101456863; -[SCManagedCapturerFocusStateManagerImpl init] */

void FUN_101456804(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCManagedCapturerStateCoordinatorImpl.ManagedCapturerFocusStateManagerImpl",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101456830);
  (*pcVar1)();
}



/* Entry: 101456864; end: 101456873; -[SCManagedCapturerFocusStateManagerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101456864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da0800));
  return;
}



/* Entry: 101456874; end: 101456893;  */

void FUN_101456874(void)

{
  func_0x000107c61168(&PTR_PTR_1127d7c30);
  return;
}



/* Entry: 101456894; end: 101456897;  */

void FUN_101456894(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001002e973c(param_1,*(undefined1 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101456898; end: 10145690b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101456898(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112da0830) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10145690c; end: 101456917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10145690c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0830);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  func_0x0001043d847c(0);
  uVar2 = uVar5;
  (*(code *)&UNK_1043d7bb4)(uVar5);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x4000000000000000;
}



/* Entry: 101456918; end: 101456933; -[SCManagedCapturerLensesStateManagerImpl didChangeLensesActive:] */

/* WARNING: Possible PIC construction at 0x000101456be0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101456be4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101456918(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1103be5e8;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112da0830);
  func_0x000107c613fc(&UNK_1103be5e8,0x11,7);
  puVar1[0x10] = param_3;
  puVar2 = &UNK_1103be548;
  func_0x000107c613fc(&UNK_1103be548,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c61174(param_1);
  (*(code *)0x10145e068)(0x101456e3c,puVar1,uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101456934; end: 1014569af; -[SCManagedCapturerLensesStateManagerImpl didChangeLensProcessorReady:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101456934(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0830);
  puVar1 = &UNK_1103be5c0;
  func_0x000107c613fc(&UNK_1103be5c0,0x11,7);
  puVar1[0x10] = param_3;
  func_0x000107c61174(param_1);
  FUN_1014589ac(0x101456e38,puVar1,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1014569b0; end: 101456a2b; -[SCManagedCapturerLensesStateManagerImpl didChangeLensActivationSourceOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014569b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0830);
  puVar1 = &UNK_1103be598;
  func_0x000107c613fc(&UNK_1103be598,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_1014589ac(0x101456e34,puVar1,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101456a2c; end: 101456a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101456a2c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0830);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  func_0x0001043d847c(0);
  uVar2 = uVar5;
  (*(code *)&UNK_1043d7bf8)(uVar5);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x4000000000000000;
}



/* Entry: 101456a38; end: 101456b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101456a38(long param_1,code *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0830);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  func_0x0001043d847c(0);
  uVar2 = uVar5;
  (*param_2)(uVar5);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x4000000000000000;
}



/* Entry: 101456b34; end: 101456b4f; -[SCManagedCapturerLensesStateManagerImpl didChangeARSessionActive:] */

/* WARNING: Possible PIC construction at 0x000101456be0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101456be4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101456b34(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1103be570;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112da0830);
  func_0x000107c613fc(&UNK_1103be570,0x11,7);
  puVar1[0x10] = param_3;
  puVar2 = &UNK_1103be548;
  func_0x000107c613fc(&UNK_1103be548,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c61174(param_1);
  (*(code *)0x10145e548)(FUN_101456e30,puVar1,uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101456b50; end: 101456c03;  */

/* WARNING: Possible PIC construction at 0x000101456be0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101456be4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101456b50(long param_1,undefined8 param_2,undefined1 param_3,long param_4,
                  undefined8 param_5,code *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0830);
  func_0x000107c613fc(param_4,0x11,7);
  *(undefined1 *)(param_4 + 0x10) = param_3;
  puVar1 = &UNK_1103be548;
  func_0x000107c613fc(&UNK_1103be548,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_1);
  (*param_6)(param_5,param_4,uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101456c04; end: 101456c37;  */

ulong FUN_101456c04(ulong param_1)

{
  func_0x0001043d847c(0);
  func_0x0001043d7c3c(param_1);
  return param_1 | 0x4000000000000000;
}



/* Entry: 101456c38; end: 101456ca3; -[SCManagedCapturerLensesStateManagerImpl didCallLenseResumeWithSession:] */

/* WARNING: Possible PIC construction at 0x000101456c8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101456c90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101456c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0830);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010145eb94(0,0,uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101456ca4; end: 101456ce7;  */

ulong FUN_101456ca4(undefined8 param_1,ulong param_2)

{
  func_0x0001043d847c(0);
  func_0x0001043d7c80(param_1,param_2);
  return param_2 | 0x4000000000000000;
}



/* Entry: 101456ce8; end: 101456d47; -[SCManagedCapturerLensesStateManagerImpl didChangeLensPosition:devicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101456ce8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112da0830);
  func_0x000107c61174();
  func_0x00010145a124(param_1,0,0,uVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101456d48; end: 101456da7; -[SCManagedCapturerLensesStateManagerImpl init] */

void FUN_101456d48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCManagedCapturerStateCoordinatorImpl.ManagedCapturerLensesStateManagerImpl",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101456d74);
  (*pcVar1)();
}



/* Entry: 101456da8; end: 101456db7; -[SCManagedCapturerLensesStateManagerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101456da8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da0830));
  return;
}



/* Entry: 101456db8; end: 101456e2f;  */

void FUN_101456db8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001002ea56c(param_1,*(undefined1 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101456e30; end: 101456e3f;  */

void FUN_101456e30(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001002ea558(param_1,*(undefined1 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101456e40; end: 101456e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101456e40(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112da0860) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101456e8c; end: 101456e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101456e8c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0860);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  func_0x00010068ae9c(0);
  uVar2 = uVar5;
  (*(code *)&UNK_1043d9d60)(uVar5);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x6000000000000000;
}



/* Entry: 101456e98; end: 101456eaf; -[SCManagedCapturerMediaCaptureStateManagerImpl willBeginVideoRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101456e98(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0860);
  puVar1 = &UNK_1103be610;
  func_0x000107c613fc(&UNK_1103be610,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_1);
  (*(code *)0x10145f0d8)(0,0,uVar2,puVar1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101456eb0; end: 101456ec7; -[SCManagedCapturerMediaCaptureStateManagerImpl didBeginVideoRecordingWithSession:] */

/* WARNING: Possible PIC construction at 0x0001014576b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014576b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101456eb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0860);
  puVar1 = &UNK_1103be610;
  func_0x000107c613fc(&UNK_1103be610,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x10145f5b8)(0,0,uVar2,puVar1,param_3);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101456ec8; end: 101456ed3; -[SCManagedCapturerMediaCaptureStateManagerImpl didBeginAudioRecordingWithSession:] */

/* WARNING: Possible PIC construction at 0x0001014576b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014576b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101456ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0860);
  puVar1 = &UNK_1103be610;
  func_0x000107c613fc(&UNK_1103be610,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x10145fb4c)(0,0,uVar2,puVar1,param_3);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101456ed4; end: 101457003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101456ed4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_3 + _DAT_112da0860);
    func_0x000107c61174();
    func_0x000107c61170(param_3);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  func_0x00010068ae9c(0);
  uVar2 = uVar5;
  func_0x0001043d9e74(param_1,param_2,uVar5,param_4,param_5,param_6);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x6000000000000000;
}


