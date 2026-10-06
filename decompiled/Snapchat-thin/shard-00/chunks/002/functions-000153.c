/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10038e858; end: 10038e877;  */

void FUN_10038e858(void)

{
  func_0x000107c61168(&PTR_PTR_1129c9d60);
  return;
}



/* Entry: 10038e878; end: 10038e887;  */

undefined1  [16] FUN_10038e878(void)

{
  return ZEXT816(0x1106d8050);
}



/* Entry: 10038e888; end: 10038e8d3;  */

void FUN_10038e888(undefined8 param_1)

{
  FUN_1000285a8(0x112fee9f8,&UNK_10dc58c10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1008f21ec,param_1);
  return;
}



/* Entry: 10038e8d4; end: 10038e8f3;  */

void FUN_10038e8d4(void)

{
  func_0x000107c61168(&PTR_PTR_1129301c0);
  return;
}



/* Entry: 10038e8f4; end: 10038e903;  */

undefined1  [16] FUN_10038e8f4(void)

{
  return ZEXT816(0x110782038);
}



/* Entry: 10038e904; end: 10038e90b;  */

void FUN_10038e904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10038e90c; end: 10038e94f;  */

void FUN_10038e90c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10038e950; end: 10038e95f; -[SCCameraHardwareUpdateDeviceFormatOperation type] */

undefined8 FUN_10038e950(void)

{
  return 0x10;
}



/* Entry: 10038e960; end: 10038e9bb;  */

void FUN_10038e960(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10038e9bc(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10038e9bc; end: 10038eb4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10038e9bc(ulong param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long alStack_48 [3];
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da1130));
  FUN_100083b20(alStack_48);
  uVar4 = *(undefined8 *)(alStack_48[0] + _DAT_11307d7d0);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(alStack_48[0]);
  uVar3 = uVar4;
  func_0x000107c4a500();
  func_0x000107c615e8(uVar4);
  lVar1 = _DAT_112da10f0;
  if (((int)uVar3 != 0) &&
     (func_0x000107c61428(unaff_x20 + _DAT_112da10f0,alStack_48,0,0),
     *(char *)(unaff_x20 + lVar1) == '\x01')) {
    if (param_1 < 3) {
      uVar3 = *(undefined8 *)(&UNK_10d944370 + param_1 * 8);
    }
    else {
      uVar3 = 1;
    }
    lStack_58 = 0;
    uStack_50 = 0xe000000000000000;
    func_0x000107c602fc(0x32);
    func_0x000107c5fb78(0xd000000000000030,0x800000010ef83700);
    uVar4 = 0;
    uStack_60 = uVar3;
    func_0x000101456230(0);
    func_0x000107c603d0(&uStack_60,&lStack_58,uVar4,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(uStack_50);
    FUN_100083b20(&lStack_58);
    lVar1 = lStack_58;
    lVar2 = lStack_58;
    func_0x000107c41948();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      func_0x000107c41a58(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10038eb4c; end: 10038ecdf; -[SCCameraHardwareStartOperation expectedStates] */

void FUN_10038eb4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010038eba0();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  FUN_10038ed38(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10038ece0; end: 10038ed37; -[SCCameraViewfinderConfigurationImpl allowStartOperationWhileRequestHandlerIdle] */

uint FUN_10038ece0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = (uint)*(byte *)(param_1 + 0x11);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000107c3ebd4(uVar2,param_2,&PTR____CFConstantStringClassReference_110dd0df8,0,0);
    uVar1 = (uint)uVar2;
    *(char *)(param_1 + 0x11) = (char)uVar2;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return uVar1 & 1;
}



/* Entry: 10038ed38; end: 10038ed7b;  */

void FUN_10038ed38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd8540 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b9d70;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dd8540 = puVar1;
  return;
}



/* Entry: 10038ed7c; end: 10038edaf; -[SCCameraHardwareStartOperation execute] */

void FUN_10038ed7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10038edb0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10038edb0; end: 10038f467;  */

/* WARNING: Removing unreachable block (ram,0x00010038f448) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10038edb0(undefined8 *param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  long unaff_x20;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  long alStack_e0 [3];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [56];
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar3 = *param_1;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000028;
  FUN_1000a9a18(0xd000000000000028,0x800000010efc2560);
  func_0x000107c61170(uVar3);
  puVar5 = (ulong *)(unaff_x20 + _DAT_112dd8860);
  func_0x000107c61618();
  if (puVar5 != (ulong *)0x0) {
    lVar6 = unaff_x20 + _DAT_112dd8858;
    func_0x000107c61618();
    if (lVar6 != 0) {
      FUN_1002e8978(0);
      puVar7 = puVar5;
      func_0x000107c5bcc0();
      func_0x000107c61180();
      puVar8 = puVar7;
      func_0x0001002ed5a8();
      func_0x000107c61170();
      uVar18 = *(ulong *)(unaff_x20 + _DAT_112dd8878);
      FUN_10038f468();
      uVar17 = *puVar7;
      uVar19 = uVar17 & uVar18;
      func_0x000107c3ddc4(puVar5);
      puVar7 = puVar5;
      func_0x000107c4d834();
      if (((ulong)puVar7 & 1) == 0) {
        func_0x000107c56b2c(puVar5);
        func_0x000107c5bb24(*(undefined8 *)(unaff_x20 + _DAT_112dd8870));
        puVar9 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
        func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
        func_0x000107c41570();
        func_0x000107c61180();
        puVar7 = puVar5;
        func_0x000107c52090(puVar5);
        func_0x000107c61180();
        func_0x000107c3d7bc(puVar9);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar7);
      }
      func_0x000107c61428(param_1,auStack_98,0,0);
      uVar10 = *param_1;
      func_0x000107c61174(uVar10);
      uVar3 = 0xd000000000000035;
      FUN_1000a9a18(0xd000000000000035,0x800000010efc2590);
      func_0x000107c61170(uVar10);
      if ((uVar19 == uVar17) && (lVar11 = lVar6, func_0x000107c4a360(), (int)lVar11 != 0)) {
        func_0x000107c5be70(lVar6);
        func_0x000107c55738(lVar6);
        func_0x000107c5bba0(lVar6);
      }
      else {
        func_0x000107c55738(lVar6);
      }
      func_0x0001002e951c(uVar19 == uVar17);
      func_0x000107c61170();
      func_0x0001002ea5e0(uVar18);
      func_0x000107c61170();
      func_0x000107c61428(param_1,auStack_b0,0,0);
      uVar10 = *param_1;
      func_0x000107c61174(uVar10);
      FUN_1000aa0a8(uVar3);
      func_0x000107c61170(uVar10);
      func_0x000107c61428(param_1,auStack_c8,0,0);
      uVar10 = *param_1;
      func_0x000107c61174(uVar10);
      uVar3 = 0xd00000000000002e;
      FUN_1000a9a18(0xd00000000000002e,0x800000010efc25d0);
      func_0x000107c61170(uVar10);
      puVar7 = puVar5;
      func_0x000107c3ddc4();
      if (((int)puVar7 == 0) || (uVar19 == uVar17)) {
        lVar12 = *(long *)(unaff_x20 + _DAT_112dd88a0);
        func_0x000107c3f52c();
        func_0x000107c61180();
        func_0x000107c5bcc0();
        func_0x000107c61180();
        func_0x000107c61170();
        lVar11 = lVar12;
        func_0x000107c41974();
        func_0x000107c61180();
        func_0x000107c615e8(lVar12);
        if (lVar11 != 0) {
          lVar12 = lVar11;
          FUN_10038f6c8();
          uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112dd8888);
          func_0x000107c4db98(uVar10);
          FUN_10038f7e4();
          func_0x000107c61180();
          if (lVar12 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10038f440);
            (*pcVar1)();
          }
          func_0x000107c548e8(uVar10);
          func_0x000107c61170(lVar12);
          puVar9 = PTR_PTR_1126aff08;
          func_0x000107c61168();
          uVar2 = (uint)puVar9;
          func_0x000107c5bcc0();
          func_0x000107c61180();
          func_0x000107c61170();
          func_0x000107c49e2c();
          uVar17 = (ulong)(uVar2 ^ 1);
          func_0x0001003996f0();
          func_0x000107c61180();
          if (uVar17 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10038f444);
            (*pcVar1)();
          }
          func_0x000107c548e8(uVar10);
          func_0x000107c61170(uVar17);
          uStack_138 = 0;
          uStack_130 = 0xe000000000000000;
          lVar12 = lVar6;
          func_0x000107c5de0c();
          uVar13 = 0;
          alStack_e0[0] = lVar12;
          func_0x000100399710(0);
          func_0x000107c603d0(alStack_e0,&uStack_138,uVar13,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          uVar13 = uStack_130;
          uVar14 = uStack_138;
          func_0x000107c5fadc(uStack_138,uStack_130);
          func_0x000107c6142c(uVar13);
          func_0x000107c548e8(uVar10);
          func_0x000107c61170(uVar14);
          lVar12 = 1;
          FUN_1003a49a8();
          func_0x000107c61180();
          if (lVar12 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10038f448);
            (*pcVar1)();
          }
          func_0x000107c548e8(uVar10);
          func_0x000107c61170(lVar12);
          func_0x000107c5bba0(lVar6);
          func_0x000107c4db98(uVar10);
          func_0x000107c61170(lVar11);
        }
      }
      func_0x000107c61428(param_1,alStack_e0,0,0);
      uVar10 = *param_1;
      func_0x000107c61174(uVar10);
      FUN_1000aa0a8(uVar3);
      func_0x000107c61170(uVar10);
      func_0x000107c61428(param_1,auStack_f8,0,0);
      uVar10 = *param_1;
      func_0x000107c61174(uVar10);
      uVar3 = 0xd000000000000030;
      FUN_1000a9a18(0xd000000000000030,0x800000010efc2600);
      func_0x000107c61170(uVar10);
      func_0x000100c2364c();
      func_0x000107c61428(param_1,auStack_110,0,0);
      uVar10 = *param_1;
      func_0x000107c61174(uVar10);
      FUN_1000aa0a8(uVar3);
      func_0x000107c61170(uVar10);
      puVar7 = puVar5;
      func_0x000107c5bcd0();
      func_0x000107c61180();
      if (puVar7 != (ulong *)0x0) {
        func_0x000107c555a0();
        func_0x000107c615e8(puVar7);
      }
      FUN_1000c033c();
      func_0x000107c59840(puVar5);
      func_0x000107c61170(puVar7);
      puVar7 = puVar5;
      func_0x000107c5bcc0(puVar5);
      func_0x000107c61180();
      puVar15 = puVar7;
      func_0x000107c40794();
      func_0x000107c61170(puVar7);
      func_0x000107c60234(&uStack_138,puVar15);
      func_0x000107c615e8(puVar15);
      func_0x000107c615e8(puVar5);
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(puVar8);
      uVar3 = 0;
      FUN_1000c0a74(0);
      puVar16 = &uStack_140;
      func_0x000107c6147c(puVar16,&uStack_138,PTR___sypN_11034f1a8 + 8,uVar3,6);
      uVar3 = uStack_140;
      if ((int)puVar16 == 0) {
        uVar3 = 0;
      }
      goto LAB_10038f3e8;
    }
    func_0x000107c615e8(puVar5);
  }
  uVar3 = 0;
LAB_10038f3e8:
  func_0x000107c61428(param_1,&uStack_138,0,0);
  uVar10 = *param_1;
  func_0x000107c61174(uVar10);
  FUN_1000aa0a8(uVar4);
  func_0x000107c61170(uVar10);
  return uVar3;
}



/* Entry: 10038f468; end: 10038f473;  */

undefined * FUN_10038f468(void)

{
  return &UNK_10dd0d508;
}



/* Entry: 10038f474; end: 10038f47b; -[SCCameraHardwareResourceImpl appInBackground] */

undefined1 FUN_10038f474(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}



/* Entry: 10038f47c; end: 10038f483; -[SCCameraHardwareResourceImpl notificationRegistered] */

undefined1 FUN_10038f47c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3a);
}



/* Entry: 10038f484; end: 10038f48b; -[SCCameraHardwareResourceImpl setNotificationRegistered:] */

void FUN_10038f484(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x3a) = param_3;
  return;
}



/* Entry: 10038f48c; end: 10038f4e3; -[SCManagedCaptureDeviceSubjectAreaHandler startObserving] */

void FUN_10038f48c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61180();
  func_0x000107c3d7bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10038f4e4; end: 10038f4eb; -[SCCameraHardwareResourceImpl sessionRuntimeErrorHandler] */

undefined8 FUN_10038f4e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10038f4ec; end: 10038f56f; -[SCManagedCaptureSessionImpl setIsMultitaskingCameraAccessEnabled:] */

void FUN_10038f4ec(ulong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if ((((iVar1 != 0) && (uVar2 = param_1, func_0x000107c4a0bc(), (int)uVar2 != 0)) &&
      (uVar2 = param_1, func_0x000107c4a0b8(), param_3 != (int)uVar2)) &&
     (uVar2 = param_1, func_0x000107c4a360(), (uVar2 & 1) == 0)) {
    func_0x000107c3e76c(*(undefined8 *)(param_1 + 8));
    func_0x000107c56804(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bf427d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_commitConfiguration_1125ae398);
    return;
  }
  return;
}



/* Entry: 10038f570; end: 10038f5b3; -[SCManagedCaptureSessionImpl isMultitaskingCameraAccessSupported] */

void FUN_10038f570(long param_1)

{
  int iVar1;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c078230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_isMultitaskingCameraAccessSuppor_1125fba98);
    return;
  }
  return;
}



/* Entry: 10038f5b4; end: 10038f5f7; -[SCManagedCaptureSessionImpl isMultitaskingCameraAccessEnabled] */

void FUN_10038f5b4(long param_1)

{
  int iVar1;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c078210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_isMultitaskingCameraAccessEnable_1125fba90);
    return;
  }
  return;
}



/* Entry: 10038f5f8; end: 10038f6a3; -[_TtC26SCCaptureDeviceManagerImpl41CaptureDeviceCapabilitiesInfoProviderImpl deviceTypeForDeviceAtPosition:] */

void FUN_10038f5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x00010038f634(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10038f6a4; end: 10038f6c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10038f6a4(void)

{
  long unaff_x20;
  
  func_0x000107c41970(*(undefined8 *)(unaff_x20 + _DAT_112da1120));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10038f6c8; end: 10038f7e3;  */

undefined8 FUN_10038f6c8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  if (param_1 == *(long *)PTR__AVCaptureDeviceTypeBuiltInWideAngleCamera_110347f20) {
    uVar3 = 0;
  }
  else if (param_1 == *(long *)PTR__AVCaptureDeviceTypeBuiltInTelephotoCamera_110347f00) {
    uVar3 = 2;
  }
  else if (param_1 == *(long *)PTR__AVCaptureDeviceTypeBuiltInDualCamera_110347ee8) {
    uVar3 = 3;
  }
  else if (param_1 == *(long *)PTR__AVCaptureDeviceTypeBuiltInTrueDepthCamera_110347f10) {
    uVar3 = 6;
  }
  else {
    if (param_1 == *(long *)PTR__AVCaptureDeviceTypeBuiltInUltraWideCamera_110347f18) {
      uVar2 = 1;
    }
    else if (param_1 == *(long *)PTR__AVCaptureDeviceTypeBuiltInDualWideCamera_110347ef0) {
      uVar2 = 4;
    }
    else {
      uVar2 = 5;
      if (param_1 != *(long *)PTR__AVCaptureDeviceTypeBuiltInTripleCamera_110347f08) {
        uVar2 = 0xffffffffffffffff;
      }
    }
    iVar1 = 2;
    FUN_100029b9c(2,0xf,4,0);
    uVar3 = uVar2;
    if ((iVar1 != 0) &&
       (uVar3 = 7, param_1 != *(long *)PTR__AVCaptureDeviceTypeBuiltInLiDARDepthCamera_110347ef8)) {
      uVar3 = uVar2;
    }
  }
  func_0x000107c61170(param_1);
  return uVar3;
}



/* Entry: 10038f7e4; end: 10038f803;  */

undefined * FUN_10038f7e4(ulong param_1)

{
  if (param_1 < 8) {
    return (&PTR_PTR_110d8adc8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10038f804; end: 10038f87f; -[_TtC28SCFeatureStartupSignalerImpl26FeatureStartupSignalerImpl setFeatureAnnotation:with:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10038f804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c5faec();
  uStack_38 = 3;
  uStack_50 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_2;
  func_0x000107c61174(param_1);
  FUN_1002a64a8(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 10038f880; end: 10038f883;  */

void FUN_10038f880(void)

{
  return;
}



/* Entry: 10038f884; end: 10038f93f;  */

void FUN_10038f884(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar4 = *param_1;
  puVar2 = auStack_58;
  func_0x000107c61428(lVar4 + 0x70,puVar2,0x21,0);
  if ((*(long *)(*(long *)(lVar4 + 0xa8) + 0x10) == 0) ||
     (FUN_100086b70(param_2), ((ulong)puVar2 & 1) == 0)) {
    func_0x000107c61434(param_4);
    uVar1 = *(undefined8 *)(lVar4 + 0xa8);
    func_0x000107c61558(uVar1);
    uVar3 = *(undefined8 *)(lVar4 + 0xa8);
    *(undefined8 *)(lVar4 + 0xa8) = 0x8000000000000000;
    FUN_10038f95c(param_3,param_4,param_2,uVar1);
    *(undefined8 *)(lVar4 + 0xa8) = uVar3;
  }
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10038f940; end: 10038f95b;  */

void FUN_10038f940(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10038f884(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10038f95c; end: 10038fa9f;  */

void FUN_10038f95c(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_3;
  uVar5 = param_2;
  FUN_100086b70();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar7 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10038fa2c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar7) {
    param_4 = param_4 & 1;
    FUN_10038faa0(lVar7);
    uVar3 = param_3;
    FUN_100086b70();
    if (((uint)uVar5 & 1) != (param_4 & 1)) {
      FUN_10038fd34(0);
      func_0x000107c60624();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10038f9f4);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x0001040b7ddc();
    lVar7 = *unaff_x20;
    goto joined_r0x00010038fa40;
  }
  lVar7 = *unaff_x20;
joined_r0x00010038fa40:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
    return;
  }
  lVar6 = lVar7 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar3 & 0x3f);
  *(ulong *)(*(long *)(lVar7 + 0x30) + uVar3 * 8) = param_3;
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10038faa0);
    (*pcVar2)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  return;
}



/* Entry: 10038faa0; end: 10038fd33;  */

void FUN_10038faa0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auStack_a8 [72];
  
  lVar14 = *unaff_x20;
  lVar1 = *(long *)(lVar14 + 0x18);
  if (*(long *)(lVar14 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x11305f7b8;
  FUN_1000285a8(0x11305f7b8,&UNK_10dcd4ba0);
  lVar7 = lVar14;
  func_0x000107c60490(lVar14,lVar1,param_2,uVar6);
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_10038fd00:
    func_0x000107c61574(lVar14);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar14 + 0x40);
  uVar11 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar9 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar18 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10038fd30);
          (*pcVar5)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
            if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar14 + 0x10) = 0;
          }
          goto LAB_10038fd00;
        }
        uVar15 = puVar16[lVar18];
        lVar9 = lVar9 + 1;
      } while (uVar15 == 0);
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar18 = lVar9;
    }
    uVar8 = LZCOUNT(uVar8) | lVar18 << 6;
    uVar17 = *(ulong *)(*(long *)(lVar14 + 0x30) + uVar8 * 8);
    puVar2 = (undefined8 *)(*(long *)(lVar14 + 0x38) + uVar8 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    uVar12 = uVar17;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar13 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar12 = uVar12 & (uVar13 ^ 0xffffffffffffffff);
    uVar10 = uVar12 >> 6;
    uVar8 = -1L << (uVar12 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar4 = false;
      uVar8 = 0x3f - uVar13 >> 6;
      do {
        uVar12 = uVar10 + 1;
        if ((uVar12 == uVar8) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10038fd34);
          (*pcVar5)();
        }
        uVar10 = 0;
        if (uVar12 != uVar8) {
          uVar10 = uVar12;
        }
        bVar4 = (bool)(uVar12 == uVar8 | bVar4);
        uVar12 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar12 == 0xffffffffffffffff);
      uVar12 = ~uVar12;
      uVar8 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar10 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar12 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar10);
    *(ulong *)(*(long *)(lVar7 + 0x30) + uVar8 * 8) = uVar17;
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar8 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar9 = lVar18;
  } while( true );
}



/* Entry: 10038fd34; end: 10038fd47;  */

void FUN_10038fd34(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107431c8;
  if (lRam000000011305f3f0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam000000011305f3f0 = param_1;
  }
  return;
}



/* Entry: 10038fd48; end: 10038fd67;  */

void FUN_10038fd48(void)

{
  func_0x000107c61168(&PTR_PTR_112810df0);
  return;
}



/* Entry: 10038fd68; end: 10038fd6b;  */

void FUN_10038fd68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10038fd6c; end: 10038fd97;  */

void FUN_10038fd6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10038fd98; end: 10038fd9b;  */

void FUN_10038fd98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10038fd9c; end: 10038fdc7;  */

void FUN_10038fd9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10038fdc8; end: 10038fdcb;  */

void FUN_10038fdc8(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10038fdcc; end: 10038fe47;  */

void FUN_10038fdcc(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10038fe48; end: 10038fe4f;  */

void FUN_10038fe48(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  FUN_100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104aef08;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104aef08;
  return;
}



/* Entry: 10038fe50; end: 10038feeb;  */

void FUN_10038fe50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  FUN_100083b20(auStack_60);
  FUN_100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104aef08;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104aef08;
  return;
}



/* Entry: 10038feec; end: 10038fef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10038feec(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10038fd48();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e48950) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10038fef4; end: 10038ff5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10038fef4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10038fd48();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e48950) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10038ff60; end: 10038ff67;  */

void FUN_10038ff60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_1000285a8(0x112e489b0,&UNK_10da3f6a8);
  uVar1 = 0;
  FUN_1002d8860();
  FUN_100083b20(&uStack_38);
  FUN_1000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10038ff68; end: 10038ffd7;  */

void FUN_10038ff68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_1000285a8(0x112e489b0,&UNK_10da3f6a8);
  uVar1 = 0;
  FUN_1002d8860();
  FUN_100083b20(&uStack_38);
  FUN_1000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10038ffd8; end: 100398e3f;  */

void FUN_10038ffd8(void)

{
  undefined8 extraout_x8;
  long unaff_x20;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010039147c(extraout_x8,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                      *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                      *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                      *(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                      *(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100),
                      *(undefined8 *)(unaff_x20 + 0x108),*(undefined8 *)(unaff_x20 + 0x110),
                      *(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                      *(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                      *(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140),
                      *(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                      *(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                      *(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                      *(undefined8 *)(unaff_x20 + 0x178),*(undefined8 *)(unaff_x20 + 0x180),
                      *(undefined8 *)(unaff_x20 + 0x188),*(undefined8 *)(unaff_x20 + 400),
                      *(undefined8 *)(unaff_x20 + 0x198),*(undefined8 *)(unaff_x20 + 0x1a0),
                      *(undefined8 *)(unaff_x20 + 0x1a8),*(undefined8 *)(unaff_x20 + 0x1b0),
                      *(undefined8 *)(unaff_x20 + 0x1b8),*(undefined8 *)(unaff_x20 + 0x1c0),
                      *(undefined8 *)(unaff_x20 + 0x1c8),*(undefined8 *)(unaff_x20 + 0x1d0),
                      *(undefined8 *)(unaff_x20 + 0x1d8),*(undefined8 *)(unaff_x20 + 0x1e0),
                      *(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                      *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                      *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                      *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                      *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230),
                      *(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 100398e40; end: 1003990bf;  */

void FUN_100398e40(void)

{
  return;
}



/* Entry: 1003990c0; end: 1003990eb;  */

void FUN_1003990c0(void)

{
  func_0x000100086f10(0x11305f420,FUN_10038fd34,&UNK_10dcd478c);
  return;
}



/* Entry: 1003990ec; end: 100399723;  */

void FUN_1003990ec(void)

{
  return;
}



/* Entry: 100399724; end: 100399767;  */

void FUN_100399724(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 100399768; end: 10039a80b;  */

void FUN_100399768(void)

{
  return;
}



/* Entry: 10039a80c; end: 10039b357;  */

void FUN_10039a80c(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x548));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x550));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x558));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x560));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x568));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x570));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x578));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x580));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x588));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x590));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x598));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x608));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x610));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x618));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x620));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x628));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x630));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x638));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x640));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x648));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x650));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x658));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x660));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x668));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x670));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x678));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x680));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x688));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x690));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x698));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x700));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x708));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x710));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x718));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x720));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x728));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x730));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x738));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x740));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x748));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x750));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x758));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x760));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x768));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x770));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x778));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x780));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x788));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x790));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x798));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 2000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x808));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x810));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x818));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x820));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x828));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x830));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x838));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x840));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x848));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x850));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x858));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x860));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x868));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x870));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x878));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x880));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x888));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x890));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x898));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x900));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x908));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x910));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x918));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x920));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x928));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x930));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x938));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x940));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x948));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x950));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x958));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x960));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x968));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x970));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x978));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x980));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x988));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x990));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x998));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xab0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xab8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xac0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xac8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xad0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xad8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xae0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xae8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10039b358; end: 10039bd73;  */

undefined8 FUN_10039b358(void)

{
  return 0x1b;
}



/* Entry: 10039bd74; end: 10039bdef;  */

void FUN_10039bd74(void)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  FUN_1000823a8(FUN_10039be10,0);
  return;
}



/* Entry: 10039bdf0; end: 10039be0f;  */

void FUN_10039bdf0(void)

{
  func_0x000107c61168(&PTR_PTR_11307cb38);
  return;
}



/* Entry: 10039be10; end: 10039be6b;  */

void FUN_10039be10(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  FUN_10039bdf0();
  func_0x000107c613fc();
  lVar2 = param_2;
  func_0x000107c6106c();
  lRam00000001138136f8 = lVar2;
  FUN_1000aa068();
  if (-1 < lVar2) {
    lRam0000000113813700 = lVar2;
    *param_1 = param_2;
    param_1[1] = (long)&PTR_DAT_110775550;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10039be6c);
  (*pcVar1)();
}



/* Entry: 10039be6c; end: 10039be8f;  */

undefined ** FUN_10039be6c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10039be90; end: 10039bfc3;  */

void FUN_10039be90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105678e0;
  func_0x000107c613fc(&UNK_1105678e0,0x70,7);
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
  FUN_1000823a8(FUN_10039c528,puVar1);
  return;
}



/* Entry: 10039bfc4; end: 10039c037;  */

void FUN_10039bfc4(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  (*param_3)(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
             *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
             *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
             *(undefined8 *)(unaff_x20 + 0x68));
  FUN_100082720(param_4,param_5,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10039c038; end: 10039c527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10039c038(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long alStack_80 [2];
  
  FUN_100083b20(alStack_80);
  FUN_100083b20(&lStack_88);
  FUN_100083b20(&uStack_90);
  func_0x00010039c564();
  func_0x000107c613fc();
  *(long *)(param_2 + 0x10) = lStack_88;
  *(undefined8 *)(param_2 + 0x18) = uStack_90;
  *(undefined8 *)(param_2 + 0x20) = param_5;
  *(undefined8 *)(param_2 + 0x28) = param_6;
  *(undefined8 *)(param_2 + 0x30) = param_7;
  *(undefined8 *)(param_2 + 0x38) = param_8;
  *(undefined8 *)(param_2 + 0x40) = param_10;
  *(undefined8 *)(param_2 + 0x48) = param_9;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puStack_a0 = &UNK_1028ef278;
  uStack_98 = param_10;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1028ef284;
  puStack_a8 = &UNK_110567a48;
  ppuVar4 = &puStack_c0;
  func_0x000107c60bc4(ppuVar4);
  uVar2 = uStack_98;
  func_0x000107c61580(param_10,2);
  lVar5 = lStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c61574(uVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  *(undefined **)(param_2 + 0x50) = puVar3;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puStack_a0 = &UNK_1028ef27c;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1028ef280;
  puStack_a8 = &UNK_110567a70;
  ppuVar4 = &puStack_c0;
  uStack_98 = param_9;
  func_0x000107c60bc4(ppuVar4);
  uVar2 = uStack_98;
  func_0x000107c6157c(param_9);
  func_0x000107c61574(uVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  *(undefined **)(param_2 + 0x58) = puVar3;
  *(undefined8 *)(param_2 + 0x60) = param_11;
  *(undefined8 *)(param_2 + 0x68) = param_12;
  *(undefined8 *)(param_2 + 0x70) = param_13;
  func_0x000107c6157c();
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  FUN_100083b20(&puStack_c0);
  lVar1 = lStack_b8;
  puVar3 = puStack_c0;
  puVar7 = puStack_c0;
  func_0x000107c614f0();
  (**(code **)(lVar1 + 8))();
  func_0x000107c615e8(puVar3);
  if (((ulong)puVar7 & 1) == 0) {
    FUN_100083b20(&puStack_c0);
    lVar1 = lStack_b8;
    puVar7 = puStack_c0;
    puVar9 = puStack_c0;
    func_0x000107c614f0(puStack_c0);
    puVar3 = &UNK_110567958;
    puVar10 = puVar3;
    func_0x000107c613fc(&UNK_110567958,0x18,7);
    func_0x000107c61644(puVar10 + 0x10,param_2);
    pcVar11 = *(code **)(lVar1 + 0x38);
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(puVar10);
    (*pcVar11)(&UNK_1028ef28c,puVar10,puVar9,lVar1);
    func_0x000107c615e8(puVar7);
    func_0x000107c61578(puVar10,2);
    FUN_100083b20(&puStack_c0);
    lVar1 = lStack_b8;
    puVar7 = puStack_c0;
    puVar9 = puStack_c0;
    func_0x000107c614f0(puStack_c0);
    func_0x000107c613fc(&UNK_110567958,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,param_2);
    func_0x000107c61574(param_2);
    pcVar11 = *(code **)(lVar1 + 0x40);
    func_0x000107c6157c(puVar3);
    (*pcVar11)(&UNK_1028ef290,puVar3,puVar9,lVar1);
    func_0x000107c615e8(puVar7);
    func_0x000107c61578(puVar3,2);
    func_0x000107c61170(alStack_80[0]);
    func_0x000107c61170(lVar5);
  }
  else {
    if (*(char *)(alStack_80[0] + _DAT_11307ce50) != '\x02') {
      FUN_10039c5b0();
      uVar8 = *(ulong *)(lVar5 + _DAT_113091ae0);
      func_0x000107c4a350();
      if ((uVar8 & 1) != 0) {
        FUN_100083b20(&puStack_c0);
        lVar1 = lStack_b8;
        puVar9 = puStack_c0;
        puVar10 = puStack_c0;
        func_0x000107c614f0();
        puVar3 = &UNK_110567958;
        func_0x000107c613fc(&UNK_110567958,0x18,7);
        func_0x000107c61644(puVar3 + 0x10,param_2);
        puVar7 = &UNK_110567aa8;
        func_0x000107c613fc(&UNK_110567aa8,0x28,7);
        *(undefined **)(puVar7 + 0x10) = puVar3;
        *(undefined8 *)(puVar7 + 0x18) = param_6;
        *(undefined8 *)(puVar7 + 0x20) = param_11;
        pcVar11 = *(code **)(lVar1 + 0x30);
        func_0x000107c6157c(param_6);
        func_0x000107c6157c(param_11);
        func_0x000107c6157c(puVar3);
        (*pcVar11)(FUN_100a15c10,puVar7,puVar10,lVar1);
        func_0x000107c61574(puVar3);
        func_0x000107c615e8(puVar9);
        func_0x000107c61574(puVar7);
        func_0x000107c61170(alStack_80[0]);
        func_0x000107c61170(lVar5);
        goto LAB_10039c4f0;
      }
      func_0x000100c16730();
    }
    func_0x000107c61170(alStack_80[0]);
    func_0x000107c61170(lVar5);
  }
LAB_10039c4f0:
  func_0x000107c61170(uVar6);
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_1105679a8;
  return;
}



/* Entry: 10039c528; end: 10039c583;  */

void FUN_10039c528(void)

{
  long unaff_x20;
  
  FUN_10039c038(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 10039c584; end: 10039c5af;  */

void FUN_10039c584(long param_1,long param_2)

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



/* Entry: 10039c5b0; end: 10039c7af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10039c5b0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&puStack_68);
  puVar1 = puStack_68;
  FUN_10039c830(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(puVar1);
  FUN_100083b20(&puStack_68);
  puVar1 = puStack_68;
  func_0x000107c5a164(puStack_68);
  func_0x000107c61170(puVar1);
  puVar1 = &UNK_110567958;
  func_0x000107c613fc(&UNK_110567958,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x000107c6157c(puVar1);
  FUN_100083b20(&puStack_68);
  uVar5 = *(undefined8 *)(puStack_68 + _DAT_11307d7d0);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(puStack_68);
  uVar2 = uVar5;
  func_0x000107c4f2bc();
  func_0x000107c615e8(uVar5);
  if ((int)uVar2 == 0) {
    func_0x000107c61428(puVar1 + 0x10,&puStack_68,0,0);
    puVar4 = puVar1 + 0x10;
    func_0x000107c61648();
    if (puVar4 == (undefined *)0x0) {
      func_0x000107c61578(puVar1,2);
    }
    else {
      FUN_100083b20(&uStack_38);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar1);
      func_0x000107c61574(puVar1);
      func_0x000107c61170(uStack_38);
    }
  }
  else {
    func_0x000107c61574(puVar1);
    FUN_100083b20(&uStack_38);
    puVar4 = &UNK_110567a08;
    func_0x000107c613fc(&UNK_110567a08,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_10039c8f8;
    *(undefined **)(puVar4 + 0x18) = puVar1;
    pcStack_48 = FUN_10039c900;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x42000000;
    pcStack_58 = FUN_10039c8ac;
    puStack_50 = &UNK_110567a20;
    ppuVar3 = &puStack_68;
    puStack_40 = puVar4;
    func_0x000107c60bc4(ppuVar3);
    puVar4 = puStack_40;
    func_0x000107c6157c(puVar1);
    func_0x000107c61574(puVar4);
    func_0x000107c4fbb0(uStack_38);
    func_0x000107c61574(puVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uStack_38);
  }
  return;
}



/* Entry: 10039c7b0; end: 10039c7db;  */

void FUN_10039c7b0(undefined8 *param_1,undefined8 param_2)

{
  FUN_1003312a8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = param_2;
  return;
}



/* Entry: 10039c7dc; end: 10039c82f; -[_TtC20SCNavigationServices20SCNavigationServices init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10039c7dc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113082eb0,0);
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10039c830; end: 10039c843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10039c830(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(unaff_x20 + _DAT_113082eb0,param_1);
  return;
}



/* Entry: 10039c844; end: 10039c873;  */

void FUN_10039c844(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ab820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 10039c874; end: 10039c87f; -[SCMainTabNavigationServices setUnderlyingMainTabNavigationServicesSCLazy:] */

void FUN_10039c874(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10039c880; end: 10039c8a7; -[_TtC17SCGhostToSignaler15GhostToSignaler processLaunchedForForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10039c880(long *param_1)

{
  func_0x0001000d4e14();
  return *(undefined1 *)(*param_1 + _DAT_11307c8d0);
}



/* Entry: 10039c8a8; end: 10039c8ab;  */

void FUN_10039c8a8(long param_1,long param_2)

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



/* Entry: 10039c8ac; end: 10039c8f7;  */

void FUN_10039c8ac(long param_1,undefined8 param_2)

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



/* Entry: 10039c8f8; end: 10039c8ff;  */

void FUN_10039c8f8(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_100083b20(&uStack_40);
    func_0x000107c61574(lVar1);
    func_0x000107c61170(uStack_40);
  }
  return;
}



/* Entry: 10039c900; end: 10039c983;  */

void FUN_10039c900(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10039c984; end: 10039c98b;  */

void FUN_10039c984(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x400);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10039c98c; end: 10039c9df;  */

void FUN_10039c98c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x400);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10039c9e0; end: 1003a1dd3;  */

void FUN_10039c9e0(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  long lVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_100083b20(&uStack_130);
  FUN_100083b20(&uStack_138);
  FUN_100083b20(&uStack_140);
  FUN_100083b20(&uStack_148);
  FUN_100083b20(&uStack_150);
  FUN_100083b20(&uStack_158);
  FUN_100083b20(&uStack_160);
  FUN_100083b20(&uStack_168);
  FUN_100083b20(&uStack_170);
  FUN_100083b20(&uStack_178);
  FUN_100083b20(&uStack_180);
  FUN_100083b20(&uStack_188);
  FUN_100083b20(&uStack_190);
  FUN_100083b20(&uStack_198);
  FUN_100083b20(&uStack_1a0);
  FUN_100083b20(&uStack_1a8);
  FUN_100083b20(&uStack_1b0);
  FUN_100083b20(&uStack_1b8);
  FUN_100083b20(&uStack_1c0);
  FUN_100083b20(&uStack_1c8);
  FUN_100083b20(&uStack_1d0);
  FUN_100083b20(&uStack_1d8);
  FUN_100083b20(&uStack_1e0);
  FUN_100083b20(&uStack_1e8);
  FUN_100083b20(&uStack_1f0);
  FUN_100083b20(&uStack_1f8);
  FUN_100083b20(&uStack_200);
  FUN_100083b20(&uStack_208);
  FUN_100083b20(&uStack_210);
  FUN_100083b20(&uStack_218);
  FUN_100083b20(&uStack_220);
  FUN_100083b20(&uStack_228);
  FUN_100083b20(&uStack_230);
  FUN_100083b20(&uStack_238);
  FUN_100083b20(&uStack_240);
  FUN_100083b20(&uStack_248);
  FUN_100083b20(&uStack_250);
  FUN_100083b20(&uStack_258);
  FUN_100083b20(&uStack_260);
  FUN_100083b20(&uStack_268);
  FUN_100083b20(&uStack_270);
  FUN_100083b20(&uStack_278);
  FUN_100083b20(&uStack_280);
  FUN_100083b20(&uStack_288);
  FUN_100083b20(&uStack_290);
  FUN_100083b20(&uStack_298);
  FUN_100083b20(&uStack_2a0);
  FUN_100083b20(&uStack_2a8);
  FUN_100083b20(&uStack_2b0);
  FUN_100083b20(&uStack_2b8);
  FUN_100083b20(&uStack_2c0);
  FUN_100083b20(&uStack_2c8);
  FUN_100083b20(&uStack_2d0);
  FUN_100083b20(&uStack_2d8);
  FUN_100083b20(&uStack_2e0);
  FUN_100083b20(&uStack_2e8);
  FUN_100083b20(&uStack_2f0);
  FUN_100083b20(&uStack_2f8);
  FUN_100083b20(&uStack_300);
  FUN_100083b20(&uStack_308);
  FUN_100083b20(&uStack_310);
  FUN_100083b20(&uStack_318);
  FUN_100083b20(&uStack_320);
  FUN_100083b20(&uStack_328);
  FUN_100083b20(&uStack_330);
  FUN_100083b20(&uStack_338);
  FUN_100083b20(&uStack_340);
  FUN_100083b20(&uStack_348);
  FUN_100083b20(&uStack_350);
  FUN_100083b20(&uStack_358);
  FUN_100083b20(&uStack_360);
  FUN_100083b20(&uStack_368);
  FUN_100083b20(&uStack_370);
  FUN_100083b20(&uStack_378);
  FUN_100083b20(&uStack_380);
  FUN_100083b20(&uStack_388);
  FUN_100083b20(&uStack_390);
  FUN_100083b20(&uStack_398);
  FUN_100083b20(&uStack_3a0);
  FUN_100083b20(&uStack_3a8);
  FUN_100083b20(&uStack_3b0);
  FUN_100083b20(&uStack_3b8);
  FUN_100083b20(&uStack_3c0);
  FUN_100083b20(&uStack_3c8);
  FUN_100083b20(&uStack_3d0);
  FUN_100083b20(&uStack_3d8);
  FUN_100083b20(&uStack_3e0);
  FUN_100083b20(&uStack_3e8);
  FUN_100083b20(&uStack_3f0);
  FUN_100083b20(&uStack_3f8);
  FUN_100083b20(&uStack_400);
  FUN_100083b20(&uStack_408);
  FUN_100083b20(&uStack_410);
  FUN_100083b20(&uStack_418);
  FUN_100083b20(&uStack_420);
  FUN_100083b20(&uStack_428);
  FUN_100083b20(&uStack_430);
  FUN_100083b20(&uStack_438);
  FUN_10038be98();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x148) = uStack_78;
  *(undefined8 *)(param_2 + 0x150) = uStack_80;
  *(undefined8 *)(param_2 + 0x158) = uStack_88;
  *(undefined8 *)(param_2 + 0x160) = uStack_90;
  *(undefined8 *)(param_2 + 0x168) = uStack_98;
  *(undefined8 *)(param_2 + 0x170) = uStack_a0;
  *(undefined8 *)(param_2 + 0x178) = uStack_a8;
  *(undefined8 *)(param_2 + 0x180) = uStack_b0;
  *(undefined8 *)(param_2 + 0x188) = uStack_b8;
  uVar2 = uStack_78;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_80);
  func_0x000107c615f0(uStack_88);
  uVar3 = uStack_90;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_98);
  func_0x000107c615f0(uStack_a0);
  uVar4 = uStack_a8;
  func_0x000107c61174();
  uVar5 = uStack_b0;
  func_0x000107c61174();
  uVar6 = uStack_b8;
  func_0x000107c61174();
  uVar28 = uVar6;
  func_0x0001000ad7c4();
  *(undefined8 *)(param_2 + 400) = uVar28;
  *(undefined8 *)(param_2 + 0x198) = uStack_c0;
  *(undefined8 *)(param_2 + 0x1a0) = uStack_c8;
  *(undefined8 *)(param_2 + 0x1a8) = uStack_d0;
  *(undefined8 *)(param_2 + 0x1b0) = uStack_d8;
  *(undefined8 *)(param_2 + 0x1b8) = uStack_e0;
  *(undefined8 *)(param_2 + 0x1c0) = uStack_e8;
  *(undefined8 *)(param_2 + 0x1c8) = uStack_f0;
  *(undefined8 *)(param_2 + 0x1d0) = uStack_f8;
  *(undefined8 *)(param_2 + 0x1d8) = uStack_100;
  *(undefined8 *)(param_2 + 0x1e0) = uStack_108;
  *(undefined8 *)(param_2 + 0x1e8) = uStack_110;
  *(undefined8 *)(param_2 + 0x1f0) = uStack_118;
  *(undefined8 *)(param_2 + 0x1f8) = uStack_120;
  *(undefined8 *)(param_2 + 0x200) = uStack_128;
  *(undefined8 *)(param_2 + 0x208) = uStack_130;
  *(undefined8 *)(param_2 + 0x210) = uStack_138;
  *(undefined8 *)(param_2 + 0x218) = uStack_140;
  *(undefined8 *)(param_2 + 0x220) = uStack_148;
  *(undefined8 *)(param_2 + 0x228) = uStack_150;
  *(undefined8 *)(param_2 + 0x230) = uStack_158;
  *(undefined8 *)(param_2 + 0x238) = uStack_160;
  *(undefined8 *)(param_2 + 0x240) = uStack_168;
  *(undefined8 *)(param_2 + 0x248) = uStack_170;
  *(undefined8 *)(param_2 + 0x250) = uStack_178;
  *(undefined8 *)(param_2 + 600) = uStack_180;
  *(undefined8 *)(param_2 + 0x260) = uStack_188;
  *(undefined8 *)(param_2 + 0x268) = uStack_190;
  *(undefined8 *)(param_2 + 0x270) = uStack_198;
  *(undefined8 *)(param_2 + 0x278) = uStack_1a0;
  *(undefined8 *)(param_2 + 0x280) = uStack_1a8;
  *(undefined8 *)(param_2 + 0x288) = uStack_1b0;
  *(undefined8 *)(param_2 + 0x290) = uStack_1b8;
  *(undefined8 *)(param_2 + 0x298) = uStack_1c0;
  *(undefined8 *)(param_2 + 0x2a0) = uStack_1c8;
  *(undefined8 *)(param_2 + 0x2a8) = uStack_1d0;
  *(undefined8 *)(param_2 + 0x2b0) = uStack_1d8;
  *(undefined8 *)(param_2 + 0x2b8) = uStack_1e0;
  *(undefined8 *)(param_2 + 0x2c0) = uStack_1e8;
  *(undefined8 *)(param_2 + 0x2c8) = uStack_1f0;
  *(undefined8 *)(param_2 + 0x2d0) = uStack_1f8;
  *(undefined8 *)(param_2 + 0x2d8) = uStack_200;
  *(undefined8 *)(param_2 + 0x2e0) = uStack_208;
  *(undefined8 *)(param_2 + 0x2e8) = uStack_210;
  *(undefined8 *)(param_2 + 0x2f0) = uStack_218;
  *(undefined8 *)(param_2 + 0x2f8) = uStack_220;
  *(undefined8 *)(param_2 + 0x300) = uStack_228;
  *(undefined8 *)(param_2 + 0x308) = uStack_230;
  *(undefined8 *)(param_2 + 0x310) = uStack_238;
  *(undefined8 *)(param_2 + 0x318) = uStack_240;
  *(undefined8 *)(param_2 + 800) = uStack_248;
  *(undefined8 *)(param_2 + 0x328) = uStack_250;
  *(undefined8 *)(param_2 + 0x330) = uStack_258;
  *(undefined8 *)(param_2 + 0x338) = uStack_260;
  *(undefined8 *)(param_2 + 0x340) = uStack_268;
  *(undefined8 *)(param_2 + 0x348) = uStack_270;
  *(undefined8 *)(param_2 + 0x350) = uStack_278;
  *(undefined8 *)(param_2 + 0x358) = uStack_280;
  *(undefined8 *)(param_2 + 0x360) = uStack_288;
  *(undefined8 *)(param_2 + 0x368) = uStack_290;
  *(undefined8 *)(param_2 + 0x370) = uStack_298;
  *(undefined8 *)(param_2 + 0x378) = uStack_2a0;
  uVar7 = uStack_c0;
  func_0x000107c61174();
  uVar8 = uStack_c8;
  func_0x000107c61174();
  uVar9 = uStack_d0;
  func_0x000107c61174();
  uVar10 = uStack_d8;
  func_0x000107c61174();
  uVar11 = uStack_e0;
  func_0x000107c61174();
  uVar12 = uStack_e8;
  func_0x000107c61174();
  uVar13 = uStack_f0;
  func_0x000107c61174();
  uVar14 = uStack_f8;
  func_0x000107c61174();
  uVar15 = uStack_100;
  func_0x000107c61174();
  uVar16 = uStack_108;
  func_0x000107c61174();
  uVar17 = uStack_110;
  func_0x000107c61174();
  uVar18 = uStack_118;
  func_0x000107c61174();
  uVar19 = uStack_120;
  func_0x000107c61174();
  uVar20 = uStack_128;
  func_0x000107c61174();
  uVar21 = uStack_130;
  func_0x000107c61174();
  uVar22 = uStack_138;
  func_0x000107c61174();
  uVar23 = uStack_140;
  func_0x000107c61174();
  uVar24 = uStack_148;
  func_0x000107c61174();
  uVar25 = uStack_150;
  func_0x000107c61174();
  uVar29 = uStack_158;
  func_0x000107c61174();
  uVar30 = uStack_160;
  func_0x000107c61174();
  uVar31 = uStack_168;
  func_0x000107c61174();
  uVar32 = uStack_170;
  func_0x000107c61174();
  uVar33 = uStack_178;
  func_0x000107c61174();
  uVar34 = uStack_180;
  func_0x000107c61174();
  uVar35 = uStack_188;
  func_0x000107c61174();
  uVar36 = uStack_190;
  func_0x000107c61174();
  uVar37 = uStack_198;
  func_0x000107c61174();
  uVar38 = uStack_1a0;
  func_0x000107c61174();
  uVar39 = uStack_1a8;
  func_0x000107c61174();
  uVar40 = uStack_1b0;
  func_0x000107c61174();
  uVar41 = uStack_1b8;
  func_0x000107c61174();
  uVar42 = uStack_1c0;
  func_0x000107c61174();
  uVar43 = uStack_1c8;
  func_0x000107c61174();
  uVar44 = uStack_1d0;
  func_0x000107c61174();
  uVar45 = uStack_1d8;
  func_0x000107c61174();
  uVar46 = uStack_1e0;
  func_0x000107c61174();
  uVar47 = uStack_1e8;
  func_0x000107c61174();
  uVar48 = uStack_1f0;
  func_0x000107c61174();
  uVar49 = uStack_1f8;
  func_0x000107c61174();
  uVar50 = uStack_200;
  func_0x000107c61174();
  uVar51 = uStack_208;
  func_0x000107c61174();
  uVar52 = uStack_210;
  func_0x000107c61174();
  uVar53 = uStack_218;
  func_0x000107c61174();
  uVar54 = uStack_220;
  func_0x000107c61174();
  uVar55 = uStack_228;
  func_0x000107c61174();
  uVar56 = uStack_230;
  func_0x000107c61174();
  uVar57 = uStack_238;
  func_0x000107c61174();
  uVar58 = uStack_240;
  func_0x000107c61174();
  uVar59 = uStack_248;
  func_0x000107c61174();
  uVar60 = uStack_250;
  func_0x000107c61174();
  uVar61 = uStack_258;
  func_0x000107c61174();
  uVar62 = uStack_260;
  func_0x000107c61174();
  uVar63 = uStack_268;
  func_0x000107c61174();
  uVar64 = uStack_270;
  func_0x000107c61174();
  uVar65 = uStack_278;
  func_0x000107c61174();
  uVar66 = uStack_280;
  func_0x000107c61174();
  uVar67 = uStack_288;
  func_0x000107c61174();
  uVar68 = uStack_290;
  func_0x000107c61174();
  uVar69 = uStack_298;
  func_0x000107c61174();
  uVar70 = uStack_2a0;
  func_0x000107c61174();
  uVar28 = uVar70;
  func_0x0001000ad7c4();
  *(undefined8 *)(param_2 + 0x380) = uVar28;
  *(undefined8 *)(param_2 + 0x388) = uStack_2a8;
  *(undefined8 *)(param_2 + 0x390) = uStack_2b0;
  *(undefined8 *)(param_2 + 0x398) = uStack_2b8;
  *(undefined8 *)(param_2 + 0x3a0) = uStack_2c0;
  *(undefined8 *)(param_2 + 0x3a8) = uStack_2c8;
  *(undefined8 *)(param_2 + 0x3b0) = uStack_2d0;
  *(undefined8 *)(param_2 + 0x3b8) = uStack_2d8;
  *(undefined8 *)(param_2 + 0x3c0) = uStack_2e0;
  *(undefined8 *)(param_2 + 0x3c8) = uStack_2e8;
  *(undefined8 *)(param_2 + 0x3d0) = uStack_2f0;
  *(undefined8 *)(param_2 + 0x3d8) = uStack_2f8;
  *(undefined8 *)(param_2 + 0x3e0) = uStack_300;
  *(undefined8 *)(param_2 + 1000) = uStack_308;
  *(undefined8 *)(param_2 + 0x3f0) = uStack_310;
  *(undefined8 *)(param_2 + 0x3f8) = uStack_318;
  FUN_1000285a8(0x112f30170,&UNK_10db751b8);
  func_0x000107c610f8();
  uVar71 = uStack_2a8;
  func_0x000107c61174();
  uVar72 = uStack_2b0;
  func_0x000107c61174();
  uVar73 = uStack_2b8;
  func_0x000107c61174();
  uVar74 = uStack_2c0;
  func_0x000107c61174();
  uVar75 = uStack_2c8;
  func_0x000107c61174();
  uVar76 = uStack_2d0;
  func_0x000107c61174();
  uVar77 = uStack_2d8;
  func_0x000107c61174();
  uVar78 = uStack_2e0;
  func_0x000107c61174();
  uVar79 = uStack_2e8;
  func_0x000107c61174();
  uVar80 = uStack_2f0;
  func_0x000107c61174();
  uVar81 = uStack_2f8;
  func_0x000107c61174();
  uVar82 = uStack_300;
  func_0x000107c61174();
  uVar83 = uStack_308;
  func_0x000107c61174();
  uVar84 = uStack_310;
  func_0x000107c61174();
  uVar85 = uStack_318;
  func_0x000107c61174();
  uVar28 = uStack_320;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x18) = puVar26;
  FUN_1000285a8(0x112f30178,&UNK_10db751c0);
  func_0x000107c610f8();
  uVar28 = uStack_328;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x20) = puVar26;
  FUN_1000285a8(0x112e51e20,&UNK_10da520b0);
  func_0x000107c610f8();
  uVar28 = uStack_330;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x28) = puVar26;
  FUN_1000285a8(0x112f20638,&UNK_10db595d0);
  func_0x000107c610f8();
  uVar28 = uStack_338;
  func_0x000107c6157c(uStack_338);
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x30) = puVar26;
  FUN_1000285a8(0x112e48cb8,&UNK_10da3faf0);
  func_0x000107c610f8();
  uVar28 = uStack_340;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x38) = puVar26;
  FUN_1000285a8(0x112f20670,&UNK_10db59220);
  func_0x000107c610f8();
  uVar28 = uStack_348;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x40) = puVar26;
  FUN_1000285a8(0x112f30180,&UNK_10db751c8);
  func_0x000107c610f8();
  uVar28 = uStack_350;
  func_0x000107c6157c(uStack_350);
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x48) = puVar26;
  FUN_1000285a8(0x112ec3a68,&UNK_10dae3cc0);
  func_0x000107c610f8();
  uVar28 = uStack_358;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x50) = puVar26;
  FUN_1000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar28 = uStack_360;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x58) = puVar26;
  FUN_1000285a8(0x112f30188,&UNK_10db751d0);
  func_0x000107c610f8();
  uVar28 = uStack_368;
  func_0x000107c6157c(uStack_368);
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x60) = puVar26;
  FUN_1000285a8(0x112e4cce8,&UNK_10daf7050);
  func_0x000107c610f8();
  uVar28 = uStack_370;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x68) = puVar26;
  FUN_1000285a8(0x112f30190,&UNK_10db751e0);
  func_0x000107c610f8();
  uVar28 = uStack_378;
  func_0x000107c6157c();
  FUN_10025a71c();
  puVar26 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x70) = puVar26;
  FUN_1000285a8(0x112f30040,&UNK_10db74fd8);
  func_0x000107c610f8();
  uVar28 = uStack_380;
  func_0x000107c6157c();
  FUN_1003b3b80();
  puVar26 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x78) = puVar26;
  FUN_1000285a8(0x112f30198,&UNK_10db751f0);
  func_0x000107c610f8();
  uVar28 = uStack_388;
  func_0x000107c6157c();
  FUN_1003b3b80();
  puVar26 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x80) = puVar26;
  FUN_1000285a8(0x112f30048,&UNK_10db74fe0);
  func_0x000107c610f8();
  uVar28 = uStack_390;
  func_0x000107c6157c();
  FUN_1003b3b80();
  puVar26 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x88) = puVar26;
  FUN_1000285a8(0x112e51d98,&UNK_10da52000);
  func_0x000107c610f8();
  uVar28 = uStack_398;
  func_0x000107c6157c(uStack_398);
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x90) = puVar26;
  FUN_1000285a8(0x112f20818,&UNK_10db59508);
  func_0x000107c610f8();
  uVar28 = uStack_3a0;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x98) = puVar26;
  FUN_1000285a8(0x112e49ff8,&UNK_10db4d4b0);
  func_0x000107c610f8();
  uVar28 = uStack_3a8;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0xa0) = puVar26;
  FUN_1000285a8(0x112e51dd8,&UNK_10da52048);
  func_0x000107c610f8();
  uVar28 = uStack_3b0;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0xa8) = puVar26;
  FUN_1000285a8(0x112f301a0,&UNK_10db75200);
  func_0x000107c610f8();
  uVar28 = uStack_3b8;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0xb0) = puVar26;
  FUN_1000285a8(0x112f301a8,&UNK_10db75208);
  func_0x000107c610f8();
  uVar28 = uStack_3c0;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0xb8) = puVar26;
  FUN_1000285a8(0x112f301b0,&UNK_10db75210);
  func_0x000107c610f8();
  uVar28 = uStack_3c8;
  func_0x000107c6157c(uStack_3c8);
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0xc0) = puVar26;
  FUN_1000285a8(0x112e60a68,&UNK_10da68c10);
  func_0x000107c610f8();
  uVar28 = uStack_3d0;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 200) = puVar26;
  FUN_1000285a8(0x112e783e8,&UNK_10db75220);
  func_0x000107c610f8();
  uVar28 = uStack_3d8;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0xd0) = puVar26;
  FUN_1000285a8(0x112ed0620,&UNK_10daf6fd8);
  func_0x000107c610f8();
  uVar28 = uStack_3e0;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0xd8) = puVar26;
  FUN_1000285a8(0x112e9dd40,&UNK_10db75230);
  func_0x000107c610f8();
  uVar28 = uStack_3e8;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0xe0) = puVar26;
  FUN_1000285a8(0x112e4ccf0,&UNK_10daaf8a0);
  func_0x000107c610f8();
  uVar28 = uStack_3f0;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0xe8) = puVar26;
  FUN_1000285a8(0x112ec3b38,&UNK_10dae3de0);
  func_0x000107c610f8();
  uVar28 = uStack_3f8;
  func_0x000107c6157c(uStack_3f8);
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0xf0) = puVar26;
  FUN_1000285a8(0x112e60b30,&UNK_10da68d88);
  func_0x000107c610f8();
  uVar28 = uStack_400;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0xf8) = puVar26;
  FUN_1000285a8(0x112f301b8,&UNK_10db75240);
  func_0x000107c610f8();
  uVar28 = uStack_408;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x100) = puVar26;
  FUN_1000285a8(0x112e642b8,&UNK_10db7a820);
  func_0x000107c610f8();
  uVar28 = uStack_410;
  func_0x000107c6157c(uStack_410);
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x108) = puVar26;
  FUN_1000285a8(0x112f301c0,&UNK_10db75250);
  func_0x000107c610f8();
  uVar28 = uStack_418;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x110) = puVar26;
  FUN_1000285a8(0x112e5f4c0,&UNK_10da67390);
  func_0x000107c610f8();
  uVar28 = uStack_420;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x118) = puVar26;
  FUN_1000285a8(0x112f301c8,&UNK_10db75260);
  func_0x000107c610f8();
  uVar28 = uStack_428;
  func_0x000107c6157c(uStack_428);
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x120) = puVar26;
  FUN_1000285a8(0x112e4d1c0,&UNK_10da477e8);
  func_0x000107c610f8();
  uVar28 = uStack_430;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x128) = puVar26;
  FUN_1000285a8(0x112ea7888,&UNK_10dabb500);
  func_0x000107c610f8();
  uVar28 = uStack_438;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar28);
  *(undefined **)(param_2 + 0x130) = puVar26;
  puVar26 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x138) = puVar26;
  puVar26 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x140) = puVar26;
  puVar26 = PTR_PTR_1126ac968;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar26;
  func_0x000107c61174();
  uVar27 = auStack_70[0];
  func_0x000107c61174();
  uVar28 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar26);
  func_0x000107c61170(puVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar87);
  uVar90 = 0xd000000000000014;
  uVar28 = uVar90;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f052080);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c615f0(uStack_80);
  func_0x000107c61174();
  uVar28 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f118600);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c615e8(uStack_80);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c615f0(uStack_88);
  func_0x000107c61174();
  uVar89 = 0xd000000000000016;
  uVar28 = uVar89;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85600);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c615e8(uStack_88);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar28);
  uVar87 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar87);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c615f0(uStack_98);
  func_0x000107c61174();
  uVar28 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f118630);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c615e8(uStack_98);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c615f0(uStack_a0);
  func_0x000107c61174();
  uVar28 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f118660);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c615e8(uStack_a0);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f03ef90);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar87 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar87);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar91 = 0xd000000000000010;
  uVar28 = uVar91;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 400);
  func_0x000107c61174(uVar87);
  func_0x000107c61174();
  uVar28 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f05bff0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = uVar91;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar87 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e80);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar87);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar28);
  uVar87 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f006f40);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar87);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f118680);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar90);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar28);
  uVar87 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar87);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar87 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar87);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar87);
  uVar28 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f063e70);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar88 = 0xd000000000000013;
  uVar28 = uVar88;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar87 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efcd7c0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar87);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar87);
  uVar28 = uVar89;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef287a0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f01ac50);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f05c320);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar87);
  uVar28 = uVar91;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f1186b0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar87 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar87);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar87 = 0x767265536b6c6174;
  func_0x000107c5fadc(0x767265536b6c6174,0xec00000073656369);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar87);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar87);
  uVar28 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f1186d0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef226b0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar28);
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar88);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2fd60);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar87);
  uVar28 = uVar89;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar87 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0ad330);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar87);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = uVar89;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85500);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f1186f0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f118710);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f118740);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar91);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = uVar89;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85540);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef3a1f0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar91 = 0xd000000000000015;
  uVar28 = uVar91;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f055810);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef2d2e0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar87 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar87);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar92 = 0xd000000000000014;
  uVar28 = uVar92;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1a530);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar87 = 0x767265536b636564;
  func_0x000107c5fadc(0x767265536b636564,0xec00000073656369);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar87);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f118760);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85560);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar28);
  uVar87 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2a4f0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar87);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar87 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f00a5c0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar87);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = uVar89;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0516f0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar55);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar87);
  uVar88 = 0xd000000000000013;
  uVar28 = uVar88;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar56);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = uVar92;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef35740);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar87 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f118780);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar87);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f1187a0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar60);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f1187c0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar61);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar28);
  uVar87 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef1a6f0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar62);
  func_0x000107c61170(uVar87);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f1187e0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010ef10f50);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = uVar91;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc8320);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f118800);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f118830);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar67);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar87);
  uVar28 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f118560);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar68);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0521e0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar69);
  func_0x000107c61170(uVar88);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0ad7d0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar70);
  func_0x000107c61170(uVar89);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0x380);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f118860);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar87 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef21f60);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar71);
  func_0x000107c61170(uVar87);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f118880);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar72);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar87);
  uVar28 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f1188b0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar73);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef35850);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar74);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = uVar91;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f05c530);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar75);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1188e0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar76);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f118900);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar77);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f118920);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar78);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar87);
  uVar28 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f118950);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar79);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f118980);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar80);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f06a070);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar81);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f1189a0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar82);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03ed60);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef280c0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar84);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar85);
  func_0x000107c61174(uVar87);
  uVar28 = uVar92;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2a510);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar85);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0x138);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f1189d0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0x140);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f1189f0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  uVar87 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar28);
  func_0x000107c61174(uVar87);
  uVar90 = 0xd000000000000012;
  uVar88 = uVar90;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0ad970);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f118a20);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  uVar87 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar88 = 0x65706f635370616d;
  func_0x000107c5fadc(0x65706f635370616d,0xef7265736f707845);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  uVar87 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174(uVar28);
  func_0x000107c61174(uVar87);
  uVar88 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f118a40);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  uVar87 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0523c0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar90);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = uVar91;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1114a0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f118a60);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  uVar87 = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000015,0x800000010f118a80);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar91);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  uVar87 = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar88 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1a710);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  uVar87 = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c61174(uVar28);
  func_0x000107c61174(uVar87);
  uVar88 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f118aa0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  uVar87 = *(undefined8 *)(param_2 + 0x68);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar88 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef21f80);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0x70);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f118ac0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  uVar87 = *(undefined8 *)(param_2 + 0x78);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar88 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f1185c0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0x80);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f118af0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0x88);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f1185e0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  uVar87 = *(undefined8 *)(param_2 + 0x90);
  func_0x000107c61174(uVar28);
  func_0x000107c61174(uVar87);
  uVar88 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef35a00);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  uVar87 = *(undefined8 *)(param_2 + 0x98);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar88 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f111420);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0xa0);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f03f120);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  uVar87 = *(undefined8 *)(param_2 + 0xa8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010f05c870);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar92);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0xb0);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef22fd0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f118b20);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0xc0);
  func_0x000107c61174(uVar87);
  func_0x000107c61174(uVar88);
  uVar28 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f118b40);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 200);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f118b60);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0xd0);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f07df90);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0xd8);
  func_0x000107c61174(uVar87);
  func_0x000107c61174(uVar88);
  uVar28 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f118b80);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0xe0);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f118ba0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0xe8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef28160);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0xf0);
  func_0x000107c61174(uVar87);
  func_0x000107c61174(uVar88);
  uVar28 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f10d490);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0xf8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f118bc0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0x100);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f118be0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0x108);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f118c10);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0x110);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f118c30);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0x118);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f06a0c0);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0x120);
  func_0x000107c61174(uVar87);
  func_0x000107c61174(uVar88);
  uVar28 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef1ad00);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  uVar87 = *(undefined8 *)(param_2 + 0x128);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar88 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0522b0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  uVar87 = *(undefined8 *)(param_2 + 0x10);
  uVar88 = *(undefined8 *)(param_2 + 0x130);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef28200);
  func_0x000107c5a49c(uVar87);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar28);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  lVar86 = *(long *)(param_2 + 0x138);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar86 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003a1dd0);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x400) = lVar86;
  lVar86 = *(long *)(param_2 + 0x140);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar86 != 0) {
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uStack_80);
    func_0x000107c615e8(uStack_88);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uStack_98);
    func_0x000107c615e8(uStack_a0);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar29);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar31);
    func_0x000107c61170(uVar32);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar35);
    func_0x000107c61170(uVar36);
    func_0x000107c61170(uVar37);
    func_0x000107c61170(uVar38);
    func_0x000107c61170(uVar39);
    func_0x000107c61170(uVar40);
    func_0x000107c61170(uVar41);
    func_0x000107c61170(uVar42);
    func_0x000107c61170(uVar43);
    func_0x000107c61170(uVar44);
    func_0x000107c61170(uVar45);
    func_0x000107c61170(uVar46);
    func_0x000107c61170(uVar47);
    func_0x000107c61170(uVar48);
    func_0x000107c61170(uVar49);
    func_0x000107c61170(uVar50);
    func_0x000107c61170(uVar51);
    func_0x000107c61170(uVar52);
    func_0x000107c61170(uVar53);
    func_0x000107c61170(uVar54);
    func_0x000107c61170(uVar55);
    func_0x000107c61170(uVar56);
    func_0x000107c61170(uVar57);
    func_0x000107c61170(uVar58);
    func_0x000107c61170(uVar59);
    func_0x000107c61170(uVar60);
    func_0x000107c61170(uVar61);
    func_0x000107c61170(uVar62);
    func_0x000107c61170(uVar63);
    func_0x000107c61170(uVar64);
    func_0x000107c61170(uVar65);
    func_0x000107c61170(uVar66);
    func_0x000107c61170(uVar67);
    func_0x000107c61170(uVar68);
    func_0x000107c61170(uVar69);
    func_0x000107c61170(uVar70);
    func_0x000107c61170(uVar71);
    func_0x000107c61170(uVar72);
    func_0x000107c61170(uVar73);
    func_0x000107c61170(uVar74);
    func_0x000107c61170(uVar75);
    func_0x000107c61170(uVar76);
    func_0x000107c61170(uVar77);
    func_0x000107c61170(uVar78);
    func_0x000107c61170(uVar79);
    func_0x000107c61170(uVar80);
    func_0x000107c61170(uVar81);
    func_0x000107c61170(uVar82);
    func_0x000107c61170(uVar83);
    func_0x000107c61170(uVar84);
    func_0x000107c61170(uVar85);
    func_0x000107c61574(uStack_320);
    func_0x000107c61574(uStack_328);
    func_0x000107c61574(uStack_330);
    func_0x000107c61574(uStack_338);
    func_0x000107c61574(uStack_340);
    func_0x000107c61574(uStack_348);
    func_0x000107c61574(uStack_350);
    func_0x000107c61574(uStack_358);
    func_0x000107c61574(uStack_360);
    func_0x000107c61574(uStack_368);
    func_0x000107c61574(uStack_370);
    func_0x000107c61574(uStack_378);
    func_0x000107c61574(uStack_380);
    func_0x000107c61574(uStack_388);
    func_0x000107c61574(uStack_390);
    func_0x000107c61574(uStack_398);
    func_0x000107c61574(uStack_3a0);
    func_0x000107c61574(uStack_3a8);
    func_0x000107c61574(uStack_3b0);
    func_0x000107c61574(uStack_3b8);
    func_0x000107c61574(uStack_3c0);
    func_0x000107c61574(uStack_3c8);
    func_0x000107c61574(uStack_3d0);
    func_0x000107c61574(uStack_3d8);
    func_0x000107c61574(uStack_3e0);
    func_0x000107c61574(uStack_3e8);
    func_0x000107c61574(uStack_3f0);
    func_0x000107c61574(uStack_3f8);
    func_0x000107c61574(uStack_400);
    func_0x000107c61574(uStack_408);
    func_0x000107c61574(uStack_410);
    func_0x000107c61574(uStack_418);
    func_0x000107c61574(uStack_420);
    func_0x000107c61574(uStack_428);
    func_0x000107c61574(uStack_430);
    func_0x000107c61574(uStack_438);
    *(long *)(param_2 + 0x408) = lVar86;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003a1dd4);
  (*pcVar1)();
}



/* Entry: 1003a1dd4; end: 1003a1fcf;  */

void FUN_1003a1dd4(void)

{
  long unaff_x20;
  
  FUN_10039c9e0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 1003a1fd0; end: 1003a1fd7;  */

void FUN_1003a1fd0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003a1fd8; end: 1003a202b;  */

void FUN_1003a1fd8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003a202c; end: 1003a25f7;  */

void FUN_1003a202c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_10034eaec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x0001000ad7c4();
  *(undefined8 *)(param_2 + 0x48) = uVar5;
  *(undefined8 *)(param_2 + 0x50) = uStack_90;
  FUN_1000285a8(0x112f30040,&UNK_10db74fd8);
  func_0x000107c610f8();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar11 = uStack_98;
  func_0x000107c6157c(uStack_98);
  FUN_1003b3b80();
  puVar7 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x18) = puVar7;
  FUN_1000285a8(0x112f30048,&UNK_10db74fe0);
  func_0x000107c610f8();
  uVar11 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  FUN_1003b3b80();
  puVar8 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x20) = puVar8;
  puVar9 = PTR_PTR_1126ac960;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar1);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f1184e0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar11 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f118500);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar11 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f118530);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar11 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f118560);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(uVar5);
  uVar11 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f118590);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar7);
  uVar11 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f1185c0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f1185e0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  puVar7 = puVar9;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_a0);
  *(undefined **)(param_2 + 0x58) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1003a25f8; end: 1003a262b;  */

void FUN_1003a25f8(void)

{
  long unaff_x20;
  
  FUN_1003a202c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1003a262c; end: 1003a2777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003a262c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100342d6c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f313c8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1003a2778; end: 1003a2873;  */

/* WARNING: Possible PIC construction at 0x0001003a2828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003a2838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003a2848: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003a283c) */
/* WARNING: Removing unreachable block (ram,0x0001003a282c) */
/* WARNING: Removing unreachable block (ram,0x0001003a284c) */

void FUN_1003a2778(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar6 = &UNK_110518220;
  func_0x000107c613fc(&UNK_110518220,0x48,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  *(undefined8 *)(puVar6 + 0x40) = uVar9;
  uVar7 = 0x112ea2158;
  FUN_1000285a8(0x112ea2158,&UNK_10dab4428);
  func_0x000107c613fc();
  pcVar8 = FUN_10083ec6c;
  FUN_1000841f8(FUN_10083ec6c,puVar6,uVar7);
  FUN_100084214(&UNK_10dab43f0,0x34,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1003a2874; end: 1003a287b;  */

void FUN_1003a2874(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003a287c; end: 1003a28cf;  */

void FUN_1003a287c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003a28d0; end: 1003a2937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003a28d0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100342978();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f31340) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1003a2938; end: 1003a2b37;  */

/* WARNING: Possible PIC construction at 0x0001003a2a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003a2a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003a2a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003a2aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003a2ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003a2ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003a2ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003a2ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003a2af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003a2b08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003a2afc) */
/* WARNING: Removing unreachable block (ram,0x0001003a2aec) */
/* WARNING: Removing unreachable block (ram,0x0001003a2adc) */
/* WARNING: Removing unreachable block (ram,0x0001003a2acc) */
/* WARNING: Removing unreachable block (ram,0x0001003a2abc) */
/* WARNING: Removing unreachable block (ram,0x0001003a2aac) */
/* WARNING: Removing unreachable block (ram,0x0001003a2a9c) */
/* WARNING: Removing unreachable block (ram,0x0001003a2a8c) */
/* WARNING: Removing unreachable block (ram,0x0001003a2a7c) */
/* WARNING: Removing unreachable block (ram,0x0001003a2b0c) */

void FUN_1003a2938(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104ce578;
  func_0x000107c613fc(&UNK_1104ce578,0xb8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  uVar2 = 0x112e5a480;
  FUN_1000285a8(0x112e5a480,&UNK_10da5f8b8);
  func_0x000107c613fc();
  pcVar3 = FUN_10080e108;
  FUN_1000841f8(FUN_10080e108,puVar1,uVar2);
  FUN_100084214(&UNK_10da5f880,0x31,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1003a2b38; end: 1003a2b3b;  */

void FUN_1003a2b38(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003a2b3c; end: 1003a2b87;  */

void FUN_1003a2b3c(void)

{
  long unaff_x20;
  
  FUN_1003a2938(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0));
  return;
}



/* Entry: 1003a2b88; end: 1003a2b8b;  */

void FUN_1003a2b88(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003a2b8c; end: 1003a2c4f;  */

void FUN_1003a2b8c(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003a2c50; end: 1003a2c57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003a2c50(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002af198();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fdf5f0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1003a2c58; end: 1003a2cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003a2c58(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002af198();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fdf5f0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1003a2cc4; end: 1003a2dd7;  */

void FUN_1003a2cc4(long *param_1,long param_2)

{
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  func_0x0001003b3444();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_70;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_98;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x10) = uStack_a0;
  *(undefined8 *)(param_2 + 0x18) = uStack_68;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *param_1 = param_2;
  return;
}



/* Entry: 1003a2dd8; end: 1003a2ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003a2dd8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1002822b4();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e405e0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1003a2de0; end: 1003a2e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003a2de0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1002822b4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e405e0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1003a2e4c; end: 1003a2e53;  */

void FUN_1003a2e4c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}


