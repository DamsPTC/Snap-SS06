/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10175efe8; end: 10175f0bb; -[_TtC15ActivitySignals29ActivitySignalsProviderPlugin pushToValdiMarshaller:] */

/* WARNING: Removing unreachable block (ram,0x00010175f078) */

undefined8 FUN_10175efe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10175ee40();
  func_0x000103c332cc(0);
  func_0x000107c613fc();
  func_0x000103c332c0(param_3);
  uVar2 = 0;
  func_0x00010175ece0(0);
  uVar3 = param_3;
  FUN_101c6a488(param_3,uVar2,&PTR_DAT_110404450);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_3);
  func_0x000107c61170(param_1);
  return uVar3;
}



/* Entry: 10175f0bc; end: 10175f11b; -[_TtC15ActivitySignals29ActivitySignalsProviderPlugin init] */

void FUN_10175f0bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ActivitySignals.ActivitySignalsProviderPlugin",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10175f0e8);
  (*pcVar1)();
}



/* Entry: 10175f11c; end: 10175f12b;  */

undefined1  [16] FUN_10175f11c(void)

{
  return ZEXT816(0x110404538);
}



/* Entry: 10175f12c; end: 10175f163; -[_TtC15ActivitySignals29ActivitySignalsProviderPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010175f148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010175f14c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175f12c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc70f0));
  return;
}



/* Entry: 10175f164; end: 10175f19f;  */

void FUN_10175f164(void)

{
  func_0x000107c61168(&PTR_PTR_1127e93e8);
  return;
}



/* Entry: 10175f1a0; end: 10175f357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10175f1a0(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined1 auVar10 [16];
  long lStack_68;
  long lStack_60;
  undefined1 uStack_51;
  
  puVar2 = &UNK_110404580;
  func_0x000107c613fc(&UNK_110404580,0x28,7);
  *(long *)(puVar2 + 0x10) = param_1;
  *(code **)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c();
  (*param_2)();
  if (param_1 == 0) {
    func_0x0001000b6d30();
    func_0x000107c613fc();
    uVar6 = 0;
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar3 = 0;
    FUN_10175f49c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar4 + _DAT_112dc71c0);
    *puVar1 = FUN_10175f4bc;
    puVar1[1] = puVar2;
    puVar9 = PTR_s_init_1125d9248;
    lStack_68 = lVar4;
    lStack_60 = lVar3;
    func_0x000107c6157c(puVar2);
    plVar5 = &lStack_68;
    func_0x000107c61154(plVar5,puVar9);
    func_0x000107c3d740(param_1);
    puVar9 = &UNK_1104045a8;
    func_0x000107c613fc(&UNK_1104045a8,0x20,7);
    *(long *)(puVar9 + 0x10) = param_1;
    *(long **)(puVar9 + 0x18) = plVar5;
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    uVar6 = 0x10175f4c8;
  }
  func_0x0001000b6d50(uVar6,puVar9);
  uVar7 = uVar6;
  (*param_2)();
  if (uVar7 == 0) {
    uStack_51 = 0;
  }
  else {
    uVar8 = uVar7;
    func_0x000107c51b18();
    if ((int)uVar8 == 0) {
      uStack_51 = 0;
    }
    else {
      uVar8 = uVar7;
      func_0x000107c5dad4();
      if ((uVar8 & 1) == 0) {
        uVar8 = uVar7;
        func_0x000107c5dacc();
        uStack_51 = (undefined1)uVar8;
      }
      else {
        uStack_51 = 1;
      }
    }
    func_0x000107c615e8(uVar7);
  }
  func_0x000100087f6c(&uStack_51);
  func_0x000107c61574(puVar2);
  auVar10._8_8_ = &PTR_DAT_1107aaa40;
  auVar10._0_8_ = uVar6;
  return auVar10;
}



/* Entry: 10175f358; end: 10175f3e3;  */

void FUN_10175f358(ulong param_1,code *param_2)

{
  ulong uVar1;
  undefined1 uStack_31;
  
  (*param_2)();
  if (param_1 == 0) {
    uStack_31 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x000107c51b18();
    if ((int)uVar1 == 0) {
      uStack_31 = 0;
    }
    else {
      uVar1 = param_1;
      func_0x000107c5dad4();
      if ((uVar1 & 1) == 0) {
        uVar1 = param_1;
        func_0x000107c5dacc();
        uStack_31 = (undefined1)uVar1;
      }
      else {
        uStack_31 = 1;
      }
    }
    func_0x000107c615e8(param_1);
  }
  func_0x000100087f6c(&uStack_31);
  return;
}



/* Entry: 10175f3e4; end: 10175f427;  */

void FUN_10175f3e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10175f428; end: 10175f487; -[_TtC15ActivitySignalsP33_289605A0B97F987B5ACB1D74B159BA2826AudioSessionChangeListener init] */

void FUN_10175f428(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ActivitySignals.AudioSessionChangeListener",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10175f454);
  (*pcVar1)();
}



/* Entry: 10175f488; end: 10175f49b; -[_TtC15ActivitySignalsP33_289605A0B97F987B5ACB1D74B159BA2826AudioSessionChangeListener .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175f488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc71c0 + 8));
  return;
}



/* Entry: 10175f49c; end: 10175f4bb;  */

void FUN_10175f49c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e94b0);
  return;
}



/* Entry: 10175f4bc; end: 10175f4cf;  */

void FUN_10175f4bc(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 uStack_31;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  (**(code **)(unaff_x20 + 0x18))
            (uVar1,*(code **)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  if (uVar1 == 0) {
    uStack_31 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x000107c51b18();
    if ((int)uVar2 == 0) {
      uStack_31 = 0;
    }
    else {
      uVar2 = uVar1;
      func_0x000107c5dad4();
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar1;
        func_0x000107c5dacc();
        uStack_31 = (undefined1)uVar2;
      }
      else {
        uStack_31 = 1;
      }
    }
    func_0x000107c615e8(uVar1);
  }
  func_0x000100087f6c(&uStack_31);
  return;
}



/* Entry: 10175f4d0; end: 10175f4d3; -[_TtC15ActivitySignalsP33_289605A0B97F987B5ACB1D74B159BA2826AudioSessionChangeListener audioSessionRouteDidChangeReasonOldDeviceUnavailable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175f4d0(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112dc71c0);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10175f4d4; end: 10175f4d7; -[_TtC15ActivitySignalsP33_289605A0B97F987B5ACB1D74B159BA2826AudioSessionChangeListener audioSessionRouteDidChangeReasonNewDeviceAvailable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175f4d4(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112dc71c0);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10175f4d8; end: 10175f4db; -[_TtC15ActivitySignalsP33_289605A0B97F987B5ACB1D74B159BA2826AudioSessionChangeListener audioSessionRouteDidChangeReasonCategoryChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175f4d8(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112dc71c0);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10175f4dc; end: 10175f4df; -[_TtC15ActivitySignalsP33_289605A0B97F987B5ACB1D74B159BA2826AudioSessionChangeListener audioSessionRouteDidChangeReasonOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175f4dc(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112dc71c0);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10175f4e0; end: 10175f4e3; -[_TtC15ActivitySignalsP33_289605A0B97F987B5ACB1D74B159BA2826AudioSessionChangeListener audioSessionSilenceSecondaryAudioHintTypeDidChangeToStart:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175f4e0(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112dc71c0);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10175f4e4; end: 10175f4e7; -[_TtC15ActivitySignalsP33_289605A0B97F987B5ACB1D74B159BA2826AudioSessionChangeListener audioSessionSilenceSecondaryAudioHintTypeDidChangeToEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175f4e4(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112dc71c0);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10175f4e8; end: 10175f4ff;  */

void FUN_10175f4e8(void)

{
  func_0x000107c49a9c();
  return;
}



/* Entry: 10175f500; end: 10175f513;  */

void FUN_10175f500(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16fab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10175f514; end: 10175f6df;  */

undefined1  [16]
FUN_10175f514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar1 = &UNK_1104045f8;
  func_0x000107c613fc(&UNK_1104045f8,0x11,7);
  puVar1[0x10] = 0;
  puVar2 = &UNK_110404620;
  func_0x000107c613fc(&UNK_110404620,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  puVar3 = &UNK_110404648;
  func_0x000107c613fc(&UNK_110404648,0x40,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  *(undefined8 *)(puVar3 + 0x30) = param_1;
  *(undefined **)(puVar3 + 0x38) = puVar2;
  pcStack_60 = FUN_10175fb3c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110404660;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c6157c(puVar1);
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar3);
  lVar5 = -0x2fffffffffffffea;
  func_0x000107c5fb28(0xd000000000000016,0x800000010d987990);
  func_0x0001000d76cc(lVar5 + 0x20,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(lVar5);
  puVar3 = &UNK_110404698;
  func_0x000107c613fc(&UNK_110404698,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  uVar6 = 0x10175fb68;
  func_0x0001000b6d50(0x10175fb68,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  auVar7._8_8_ = &PTR_DAT_1107aaa40;
  auVar7._0_8_ = uVar6;
  return auVar7;
}



/* Entry: 10175f6e0; end: 10175f8eb;  */

void FUN_10175f6e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 uStack_a9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar4 = param_2;
    func_0x000107c614f0();
    uVar5 = uVar4;
    (**(code **)(param_3 + 8))();
    (**(code **)(param_3 + 0x10))(1,uVar4,param_3);
    puVar6 = &UNK_110404710;
    func_0x000107c613fc(&UNK_110404710,0x28,7);
    *(undefined8 *)(puVar6 + 0x10) = param_5;
    *(undefined8 *)(puVar6 + 0x18) = param_2;
    *(long *)(puVar6 + 0x20) = param_3;
    pcStack_88 = FUN_10175fbbc;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    fVar9 = 32.0;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100ef35e4;
    puStack_90 = &UNK_110404728;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar6 = puStack_80;
    func_0x000107c6157c(param_5);
    func_0x000107c615f0(param_2);
    func_0x000107c61574(puVar6);
    uVar8 = param_4;
    func_0x000107c3d7c4();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    puVar6 = &UNK_110404760;
    func_0x000107c613fc(&UNK_110404760,0x31,7);
    *(undefined8 *)(puVar6 + 0x10) = param_4;
    *(undefined8 *)(puVar6 + 0x18) = uVar8;
    *(undefined8 *)(puVar6 + 0x20) = param_2;
    *(long *)(puVar6 + 0x28) = param_3;
    puVar6[0x30] = (byte)uVar5 & 1;
    func_0x000107c61428(param_6 + 0x10,&puStack_a8,1,0);
    uVar5 = *(undefined8 *)(param_6 + 0x10);
    uVar1 = *(undefined8 *)(param_6 + 0x18);
    *(code **)(param_6 + 0x10) = FUN_10175fbc8;
    *(undefined **)(param_6 + 0x18) = puVar6;
    func_0x000107c615f0(param_2);
    func_0x000107c61174(param_4);
    func_0x000107c615f0(uVar8);
    func_0x00010058d43c(uVar5,uVar1);
    (**(code **)(param_3 + 0x20))(uVar4,param_3);
    bVar2 = true;
    bVar3 = false;
    if (fVar9 <= 0.2) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar9)) {
        bVar2 = fVar9 < 0.0;
        bVar3 = false;
      }
    }
    uStack_a9 = bVar2 == bVar3;
    func_0x000100087f6c(&uStack_a9);
    func_0x000107c615e8(uVar8);
  }
  return;
}



/* Entry: 10175f8ec; end: 10175f95f;  */

void FUN_10175f8ec(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  bool bVar1;
  bool bVar2;
  undefined1 uStack_31;
  
  func_0x000107c614f0(param_4);
  (**(code **)(param_5 + 0x20))();
  bVar1 = true;
  bVar2 = false;
  if (param_1 <= 0.2) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(param_1)) {
      bVar1 = param_1 < 0.0;
      bVar2 = false;
    }
  }
  uStack_31 = bVar1 == bVar2;
  func_0x000100087f6c(&uStack_31);
  return;
}



/* Entry: 10175f960; end: 10175fa4b;  */

void FUN_10175f960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_1104046c0;
  func_0x000107c613fc(&UNK_1104046c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  uStack_50 = 0x10175fb70;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104046d8;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar1);
  lVar3 = -0x2fffffffffffffea;
  func_0x000107c5fb28(0xd000000000000016,0x800000010d987990);
  func_0x0001000d76cc(lVar3 + 0x20,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(lVar3);
  return;
}



/* Entry: 10175fa4c; end: 10175faef;  */

void FUN_10175fa4c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,1,0);
  *(undefined1 *)(param_1 + 0x10) = 1;
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  pcVar3 = *(code **)(param_2 + 0x10);
  if (pcVar3 != (code *)0x0) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    func_0x000107c6157c(uVar2);
    (*pcVar3)();
    func_0x00010058d43c(pcVar3,uVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_78,1,0);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  func_0x00010058d43c(uVar2,uVar1);
  return;
}



/* Entry: 10175faf0; end: 10175fb3b;  */

void FUN_10175faf0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10175fb3c; end: 10175fb77;  */

void FUN_10175fb3c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long unaff_x20;
  float fVar14;
  undefined1 uStack_a9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar1 + 0x10,auStack_78,0,0);
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    uVar9 = uVar4;
    func_0x000107c614f0();
    uVar10 = uVar9;
    (**(code **)(lVar2 + 8))();
    (**(code **)(lVar2 + 0x10))(1,uVar9,lVar2);
    puVar11 = &UNK_110404710;
    func_0x000107c613fc(&UNK_110404710,0x28,7);
    *(undefined8 *)(puVar11 + 0x10) = uVar3;
    *(undefined8 *)(puVar11 + 0x18) = uVar4;
    *(long *)(puVar11 + 0x20) = lVar2;
    pcStack_88 = FUN_10175fbbc;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    fVar14 = 32.0;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100ef35e4;
    puStack_90 = &UNK_110404728;
    ppuVar12 = &puStack_a8;
    puStack_80 = puVar11;
    func_0x000107c60bc4(ppuVar12);
    puVar11 = puStack_80;
    func_0x000107c6157c(uVar3);
    func_0x000107c615f0(uVar4);
    func_0x000107c61574(puVar11);
    uVar13 = uVar5;
    func_0x000107c3d7c4();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar12);
    puVar11 = &UNK_110404760;
    func_0x000107c613fc(&UNK_110404760,0x31,7);
    *(undefined8 *)(puVar11 + 0x10) = uVar5;
    *(undefined8 *)(puVar11 + 0x18) = uVar13;
    *(undefined8 *)(puVar11 + 0x20) = uVar4;
    *(long *)(puVar11 + 0x28) = lVar2;
    puVar11[0x30] = (byte)uVar10 & 1;
    func_0x000107c61428(lVar6 + 0x10,&puStack_a8,1,0);
    uVar3 = *(undefined8 *)(lVar6 + 0x10);
    uVar10 = *(undefined8 *)(lVar6 + 0x18);
    *(code **)(lVar6 + 0x10) = FUN_10175fbc8;
    *(undefined **)(lVar6 + 0x18) = puVar11;
    func_0x000107c615f0(uVar4);
    func_0x000107c61174(uVar5);
    func_0x000107c615f0(uVar13);
    func_0x00010058d43c(uVar3,uVar10);
    (**(code **)(lVar2 + 0x20))(uVar9,lVar2);
    bVar7 = true;
    bVar8 = false;
    if (fVar14 <= 0.2) {
      bVar7 = false;
      bVar8 = true;
      if (!NAN(fVar14)) {
        bVar7 = fVar14 < 0.0;
        bVar8 = false;
      }
    }
    uStack_a9 = bVar7 == bVar8;
    func_0x000100087f6c(&uStack_a9);
    func_0x000107c615e8(uVar13);
  }
  return;
}



/* Entry: 10175fb78; end: 10175fbbb;  */

void FUN_10175fb78(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10175fbbc; end: 10175fbc7;  */

void FUN_10175fbbc(float param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long unaff_x20;
  undefined1 uStack_31;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 0x20))();
  bVar1 = true;
  bVar2 = false;
  if (param_1 <= 0.2) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(param_1)) {
      bVar1 = param_1 < 0.0;
      bVar2 = false;
    }
  }
  uStack_31 = bVar1 == bVar2;
  func_0x000100087f6c(&uStack_31);
  return;
}



/* Entry: 10175fbc8; end: 10175fc17;  */

void FUN_10175fbc8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x30);
  func_0x000107c4ffa0(*(undefined8 *)(unaff_x20 + 0x10),param_2,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c614f0(uVar3);
  (**(code **)(lVar1 + 0x10))(uVar2,uVar3,lVar1);
  return;
}



/* Entry: 10175fc18; end: 10175fc27;  */

void FUN_10175fc18(long param_1,long param_2)

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



/* Entry: 10175fc28; end: 10175fce7;  */

void FUN_10175fc28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x0001000ad7c4(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = param_2;
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a7b48;
  func_0x000107c610f8();
  func_0x000107c46644();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  *param_1 = puVar2;
  return;
}



/* Entry: 10175fce8; end: 10175fff3;  */

void FUN_10175fce8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar5 = PTR_PTR_1126ae728;
  func_0x000107c61168(PTR_PTR_1126ae728);
  func_0x000107c3edf4();
  func_0x000107c61180();
  uVar6 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef11a10);
  puVar7 = puVar5;
  func_0x000107c545b8(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c5343c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000100083b20(&puStack_a0);
  puVar3 = puStack_a0;
  func_0x000100083b20(&puStack_a0);
  puVar4 = puStack_a0;
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbadf0);
  func_0x000107c61174(puVar5);
  func_0x000107c44424(puStack_a0);
  puVar7 = puStack_a0;
  func_0x000107c61180();
  puVar8 = puVar3;
  func_0x000107c40a28(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(puVar7);
  puVar9 = PTR_PTR_1126bb490;
  func_0x000107c610f8(PTR_PTR_1126bb490);
  func_0x000107c49088();
  puVar10 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x1017600b4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x1017600b8;
  puStack_88 = &UNK_110404940;
  ppuVar11 = &puStack_a0;
  uStack_78 = uVar2;
  func_0x000107c60bc4(ppuVar11);
  uVar6 = uStack_78;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar6);
  func_0x000107c3e4fc(puVar10);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar11);
  puVar12 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_80 = FUN_101760074;
  puStack_a0 = puVar7;
  uStack_98 = 0x42000000;
  uStack_90 = 0x1017600bc;
  puStack_88 = &UNK_110404968;
  ppuVar11 = &puStack_a0;
  uStack_78 = uVar1;
  func_0x000107c60bc4(ppuVar11);
  uVar2 = uStack_78;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c3e4fc(puVar12);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar11);
  func_0x0001000ad7c4();
  puVar7 = PTR_PTR_1126a7b38;
  func_0x000107c610f8();
  func_0x000107c48fb0();
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(puVar3);
  func_0x000107c615e8(puVar4);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(ppuVar11);
  *param_1 = puVar7;
  return;
}



/* Entry: 10175fff4; end: 10176003b;  */

undefined1  [16] FUN_10175fff4(void)

{
  return ZEXT816(0x110404880);
}



/* Entry: 10176003c; end: 101760073;  */

void FUN_10176003c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101760074; end: 101760097;  */

undefined8 FUN_101760074(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 101760098; end: 1017600d3;  */

void FUN_101760098(long param_1,long param_2)

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



/* Entry: 1017600d4; end: 101760133;  */

undefined8 FUN_1017600d4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(uVar1);
  return uVar1;
}



/* Entry: 101760134; end: 101760157;  */

undefined1  [16] FUN_101760134(void)

{
  return ZEXT816(0x110404ab8);
}



/* Entry: 101760158; end: 101760247;  */

undefined1  [16] FUN_101760158(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar3 = *(undefined8 *)(*(long *)(lVar1 + -8) + 0x40);
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    uVar2 = uVar3;
    func_0x000107c610a0();
    *param_1 = uVar2;
    func_0x000107c610a0();
  }
  else {
    uVar2 = uVar3;
    func_0x000107c61458(uVar3,0x12bb);
    *param_1 = uVar2;
    func_0x000107c61458(uVar3,0x12bb);
  }
  param_1[1] = uVar3;
  func_0x0001003a4aa4(uVar3);
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = 0x1017601e8;
  return auVar4;
}



/* Entry: 101760248; end: 1017603cf;  */

/* WARNING: Possible PIC construction at 0x0001017602ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017602b0) */

void FUN_101760248(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c61168(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  func_0x000107c5ba34();
  func_0x000107c61180();
  func_0x000107c5fadc(0xd000000000000012,0x800000010efbaeb0);
  func_0x000107c52de0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1017603d0; end: 1017605d7;  */

void FUN_1017603d0(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001009f0578(param_1,puVar7);
  puVar2 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_1017605d8(puVar7,0x112d373d8,&UNK_10d9014c0);
    puVar4 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x000107c61168(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
    func_0x000107c5ba34();
    func_0x000107c61180();
    uVar3 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010efbae90);
    func_0x000107c4ff88(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar3);
    FUN_1017605d8(param_1,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar6,puVar7,lVar1);
    puVar4 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x000107c61168(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
    func_0x000107c5ba34();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5ee70();
    uVar3 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010efbae90);
    func_0x000107c56bcc(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar3);
    FUN_1017605d8(param_1,0x112d373d8,&UNK_10d9014c0);
    (**(code **)(lVar8 + 8))(lVar6,lVar1);
  }
  return;
}



/* Entry: 1017605d8; end: 101760617;  */

undefined8 FUN_1017605d8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101760618; end: 101760637;  */

undefined1  [16] FUN_101760618(void)

{
  return ZEXT816(0x110404be8);
}



/* Entry: 101760638; end: 101760667;  */

void FUN_101760638(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101760668; end: 10176068b;  */

void FUN_101760668(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10176068c; end: 1017606f3;  */

undefined1  [16] FUN_10176068c(void)

{
  return ZEXT816(0);
}



/* Entry: 1017606f4; end: 10176071f;  */

long FUN_1017606f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101760720; end: 101760727;  */

void FUN_101760720(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101760728; end: 1017607e3;  */

undefined8 * FUN_101760728(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1017607e4; end: 101760887;  */

int FUN_1017607e4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101760888; end: 10176098f;  */

void FUN_101760888(long *param_1,undefined8 param_2,long param_3)

{
  *param_1 = param_3;
  func_0x000107c604c0(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x0001017608bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_2,param_3);
  return;
}



/* Entry: 101760990; end: 1017609af;  */

long * FUN_101760990(long *param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_1 + 1;
  if (*param_1 != *param_2) {
    return (long *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb90d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss11AnyHashableV2eeoiySbAB_ABtFZ_11034e428)(plVar1,param_2 + 1);
  return plVar1;
}



/* Entry: 1017609b0; end: 1017609ef;  */

void FUN_1017609b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc7460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d987ec4;
  func_0x000107c61520(&UNK_10d987ec4,&UNK_110404f00);
  puRam0000000112dc7460 = puVar1;
  return;
}



/* Entry: 1017609f0; end: 1017609f7;  */

bool FUN_1017609f0(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1017609f8; end: 101760bb7;  */

void FUN_1017609f8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined *puVar8;
  undefined *apuStack_68 [3];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c3e208();
  func_0x000101761458();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x48) = 0;
  func_0x000107c61614(lVar1 + 0x40,0);
  FUN_1017614e0(param_4,lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x48) = param_7;
  func_0x000107c61604(lVar1 + 0x40,param_5);
  func_0x000107c61428(unaff_x20 + 0x10,apuStack_68,0x20,0);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar7 + 0x10) != 0) {
    func_0x000107c61434(lVar7);
    lVar2 = param_1;
    uVar5 = param_2;
    FUN_101767094(param_1,param_2,param_3);
    if ((uVar5 & 1) != 0) {
      puVar8 = *(undefined **)(*(long *)(lVar7 + 0x38) + lVar2 * 8);
      func_0x000107c61434(puVar8);
      func_0x000107c6142c(lVar7);
      goto LAB_101760ae8;
    }
    func_0x000107c6142c(lVar7);
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1017673f4();
LAB_101760ae8:
  func_0x000107c614a8(apuStack_68);
  func_0x000107c6157c(lVar1);
  puVar3 = puVar8;
  func_0x000107c61558(puVar8);
  apuStack_68[0] = puVar8;
  FUN_1017616c0(lVar1,param_4,puVar3);
  puVar8 = apuStack_68[0];
  func_0x000107c61428(unaff_x20 + 0x10,apuStack_68,0x21,0);
  func_0x000107c61434(param_2);
  func_0x000107c6157c(puVar8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61558(uVar4);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0x8000000000000000;
  FUN_10176155c(puVar8,param_1,param_2,param_3,uVar4);
  func_0x000107c6142c(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar6;
  func_0x000107c614a8(apuStack_68);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 101760bb8; end: 1017613d7;  */

void FUN_101760bb8(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong auStack_90 [3];
  undefined1 auStack_78 [24];
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar18 = *(long *)(unaff_x20 + 0x10);
  uVar8 = 1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar18 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(lVar18 + 0x40);
  func_0x000107c61434(lVar18);
  lVar14 = 0;
  do {
    while (uVar15 == 0) {
      bVar3 = SCARRY8(lVar14,1);
      lVar14 = lVar14 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101760f04);
        (*pcVar2)();
      }
      if ((long)(uVar8 + 0x3f >> 6) <= lVar14) {
        func_0x000107c61574(lVar18);
        return;
      }
      uVar15 = ((ulong *)(lVar18 + 0x40))[lVar14];
    }
    uVar1 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
    uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    puVar7 = (ulong *)(*(long *)(lVar18 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x18 +
                      lVar14 * 0x600);
    uVar1 = *puVar7;
    uVar13 = puVar7[1];
    uVar10 = puVar7[2];
    func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0x20,0);
    lVar11 = *(long *)(unaff_x20 + 0x10);
    lVar16 = *(long *)(lVar11 + 0x10);
    func_0x000107c61434(uVar13);
    if (lVar16 == 0) {
LAB_101760c50:
      func_0x000107c614a8(auStack_90);
    }
    else {
      func_0x000107c61434(lVar11);
      uVar17 = uVar1;
      uVar4 = uVar13;
      FUN_101767094(uVar1,uVar13,uVar10);
      if ((uVar4 & 1) == 0) {
        func_0x000107c6142c(lVar11);
        goto LAB_101760c50;
      }
      uVar17 = *(ulong *)(*(long *)(lVar11 + 0x38) + uVar17 * 8);
      func_0x000107c61434(uVar17);
      func_0x000107c614a8(auStack_90);
      func_0x000107c6142c(lVar11);
      func_0x000107c61434(uVar17);
      lVar11 = param_1;
      FUN_101767114();
      func_0x000107c6142c(uVar17);
      if ((uVar4 & 1) != 0) {
        uVar4 = uVar17;
        func_0x000107c61558();
        auStack_90[0] = uVar17;
        if ((int)uVar4 == 0) {
          func_0x00010176199c();
        }
        uVar17 = auStack_90[0];
        FUN_101761478(*(long *)(auStack_90[0] + 0x30) + lVar11 * 0x30);
        func_0x000107c61574(*(undefined8 *)(*(long *)(uVar17 + 0x38) + lVar11 * 8));
        func_0x0001017620c4(lVar11,uVar17);
      }
      func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0x21,0);
      func_0x000107c61434(uVar17);
      uVar5 = *(ulong *)(unaff_x20 + 0x10);
      func_0x000107c61558();
      lVar16 = *(long *)(unaff_x20 + 0x10);
      *(undefined8 *)(unaff_x20 + 0x10) = 0x8000000000000000;
      uVar4 = uVar1;
      uVar6 = uVar13;
      FUN_101767094(uVar1,uVar13,uVar10);
      uVar9 = (ulong)~(uint)uVar6 & 1;
      lVar11 = *(long *)(lVar16 + 0x10) + uVar9;
      if (SCARRY8(*(long *)(lVar16 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101760f08);
        (*pcVar2)();
      }
      if (*(long *)(lVar16 + 0x18) < lVar11) {
        func_0x000101761b2c(lVar11,uVar5);
        uVar4 = uVar1;
        uVar5 = uVar13;
        FUN_101767094(uVar1,uVar13,uVar10);
        if (((uint)uVar6 & 1) != ((uint)uVar5 & 1)) {
          func_0x000107c60624(&UNK_1107adc58);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101760f1c);
          (*pcVar2)();
        }
LAB_101760e20:
        if ((uVar6 & 1) == 0) goto LAB_101760e70;
LAB_101760e28:
        uVar12 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + uVar4 * 8);
        *(ulong *)(*(long *)(lVar16 + 0x38) + uVar4 * 8) = uVar17;
        func_0x000107c6142c(uVar13);
        func_0x000107c6142c(uVar12);
      }
      else {
        if ((uVar5 & 1) != 0) goto LAB_101760e20;
        FUN_101761820();
        if ((uVar6 & 1) != 0) goto LAB_101760e28;
LAB_101760e70:
        lVar11 = lVar16 + (uVar4 >> 6) * 8;
        *(ulong *)(lVar11 + 0x40) = *(ulong *)(lVar11 + 0x40) | 1L << (uVar4 & 0x3f);
        puVar7 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar4 * 0x18);
        *puVar7 = uVar1;
        puVar7[1] = uVar13;
        puVar7[2] = uVar10;
        *(ulong *)(*(long *)(lVar16 + 0x38) + uVar4 * 8) = uVar17;
        if (SCARRY8(*(long *)(lVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101760f0c);
          (*pcVar2)();
        }
        *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
      }
      *(long *)(unaff_x20 + 0x10) = lVar16;
      func_0x000107c614a8(auStack_90);
      uVar13 = uVar17;
    }
    uVar15 = uVar15 - 1 & uVar15;
    func_0x000107c6142c(uVar13);
  } while( true );
}



/* Entry: 1017613d8; end: 1017613df;  */

void FUN_1017613d8(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1017613e0; end: 101761477;  */

void FUN_1017613e0(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101761478; end: 1017614cf;  */

undefined8 FUN_101761478(undefined8 param_1)

{
  FUN_101760720();
  return param_1;
}



/* Entry: 1017614d0; end: 1017614df;  */

void FUN_1017614d0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1017614e0; end: 10176151b;  */

undefined8 FUN_1017614e0(undefined8 param_1,undefined8 param_2)

{
  FUN_101760728(param_2,param_1);
  return param_2;
}



/* Entry: 10176151c; end: 10176155b;  */

void FUN_10176151c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc75b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d987eec;
  func_0x000107c61520(&UNK_10d987eec,&UNK_110404f00);
  puRam0000000112dc75b8 = puVar1;
  return;
}



/* Entry: 10176155c; end: 1017616bf;  */

void FUN_10176155c(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,uint param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *puVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_3;
  FUN_101767094(param_2,param_3,param_4);
  lVar4 = *(long *)(lVar9 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101761640);
    (*pcVar1)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar5) {
    func_0x000101761b2c(lVar5,param_5 & 1);
    uVar2 = param_2;
    uVar7 = param_3;
    FUN_101767094(param_2,param_3,param_4);
    if (((uint)uVar3 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(&UNK_1107adc58);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101761608);
      (*pcVar1)();
    }
  }
  else if ((param_5 & 1) == 0) {
    FUN_101761820();
    lVar5 = *unaff_x20;
    goto joined_r0x000101761654;
  }
  lVar5 = *unaff_x20;
joined_r0x000101761654:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  puVar8 = (ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 0x18);
  *puVar8 = param_2;
  puVar8[1] = param_3;
  puVar8[2] = param_4;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1017616c0);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1017616c0; end: 10176181f;  */

void FUN_1017616c0(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_101767114();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar9 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10176178c);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar9) {
    param_3 = param_3 & 1;
    func_0x000101761dec(lVar9);
    uVar2 = param_2;
    FUN_101767114();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_110404f00);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101761754);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x00010176199c();
    lVar9 = *unaff_x20;
    goto joined_r0x0001017617a0;
  }
  lVar9 = *unaff_x20;
joined_r0x0001017617a0:
  if ((uVar3 & 1) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar5);
    return;
  }
  FUN_1017614e0(param_2,&uStack_70);
  lVar4 = lVar9 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  puVar6 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar2 * 0x30);
  puVar6[1] = uStack_68;
  *puVar6 = uStack_70;
  puVar6[3] = uStack_58;
  puVar6[2] = uStack_60;
  puVar6[5] = uStack_48;
  puVar6[4] = uStack_50;
  *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101761820);
    (*pcVar1)();
  }
  *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
  return;
}



/* Entry: 101761820; end: 10176199b;  */

void FUN_101761820(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *unaff_x20;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  func_0x0001000285a8(0x112dc75c0,&UNK_10d987fc0);
  lVar12 = *unaff_x20;
  lVar7 = lVar12;
  func_0x000107c6048c();
  if (*(long *)(lVar12 + 0x10) != 0) {
    lVar1 = lVar12 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar12 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar14 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar12 + 0x40);
    if (uVar8 == 0) goto LAB_1017618fc;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar14 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x30) + uVar10 * 0x18);
        uVar5 = puVar3[1];
        uVar11 = puVar3[2];
        uVar13 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x18);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        puVar4[2] = uVar11;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar13;
        func_0x000107c61434();
        func_0x000107c61434(uVar13);
        if (uVar8 != 0) break;
LAB_1017618fc:
        do {
          lVar2 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10176199c);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101761974;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar14 = lVar14 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar14 = lVar2;
      }
    } while( true );
  }
LAB_101761974:
  func_0x000107c61574(lVar12);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10176199c; end: 10176228f;  */

void FUN_10176199c(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112dc75c8,&UNK_10d987fc8);
  lVar10 = *unaff_x20;
  lVar5 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar7 = (1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar5 != lVar10 || lVar1 + uVar7 * 8 <= lVar5 + 0x40U) {
      func_0x000107c610b8(lVar5 + 0x40U,lVar1,uVar7 << 3);
    }
    lVar11 = 0;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(lVar10 + 0x40);
    if (uVar7 == 0) goto LAB_101761a80;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        uVar9 = LZCOUNT(uVar9) | lVar11 << 6;
        FUN_1017614e0(*(long *)(lVar10 + 0x30) + uVar9 * 0x30,&uStack_90);
        uVar6 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + uVar9 * 8);
        puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x30) + uVar9 * 0x30);
        puVar3[3] = uStack_78;
        puVar3[2] = uStack_80;
        puVar3[5] = uStack_68;
        puVar3[4] = uStack_70;
        puVar3[1] = uStack_88;
        *puVar3 = uStack_90;
        *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar9 * 8) = uVar6;
        func_0x000107c6157c();
        if (uVar7 != 0) break;
LAB_101761a80:
        do {
          lVar2 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101761b2c);
            (*pcVar4)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar2) goto LAB_101761afc;
          uVar7 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar11 = lVar11 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar11 = lVar2;
      }
    } while( true );
  }
LAB_101761afc:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 101762290; end: 101762487;  */

undefined *
FUN_101762290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + 0xb0));
  puVar3 = PTR_PTR_1126b2798;
  func_0x000107c610f8(PTR_PTR_1126b2798);
  func_0x000107c453e4();
  lVar4 = 0;
  func_0x00010447aa4c(0,param_4,param_5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x24));
  uVar5 = *puVar1;
  lVar4 = puVar1[1];
  if (*(char *)(puVar1 + 2) == '\0') {
    lVar2 = *(long *)(unaff_x20 + 0x30);
    func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
    pcVar8 = *(code **)(lVar2 + 8);
    uVar7 = uVar5;
    func_0x000107c61174(uVar5);
    (*pcVar8)();
    func_0x000107c3d5f8(puVar3);
    func_0x000107c615e8(uVar7);
    uVar7 = 0;
  }
  else {
    if (*(char *)(puVar1 + 2) == '\x01') {
      func_0x000107c61174(uVar5);
      func_0x000107c61174();
      lVar6 = lVar4;
      func_0x000107c4c950();
      lVar2 = 0x60;
      if (lVar6 != 1) {
        lVar2 = 0x38;
      }
      func_0x00010176252c(unaff_x20 + lVar2,auStack_98);
      func_0x0001000a8868(auStack_98,uStack_80);
      uVar7 = uVar5;
      (**(code **)(lStack_78 + 8))(uVar5,lVar4,param_2,param_3,uStack_80,lStack_78);
      func_0x000107c615f0();
      func_0x000107c3d5f8(puVar3);
      func_0x000107c615ec(uVar7,2);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar4);
      func_0x0001000834e4(auStack_98);
      return puVar3;
    }
    lVar2 = *(long *)(unaff_x20 + 0xa8);
    func_0x0001000a8868(unaff_x20 + 0x88,*(undefined8 *)(unaff_x20 + 0xa0));
    pcVar8 = *(code **)(lVar2 + 8);
    func_0x000107c61174(uVar5);
    (*pcVar8)(lVar4);
    uVar7 = 2;
  }
  FUN_101762488(uVar5,lVar4,uVar7);
  return puVar3;
}



/* Entry: 101762488; end: 1017624c7;  */

/* WARNING: Possible PIC construction at 0x0001017624b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017624b4) */

void FUN_101762488(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (((param_3 != '\0') && (param_3 != '\x02')) && (param_3 != '\x01')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1017624c8; end: 10176250b;  */

void FUN_1017624c8(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x38);
  func_0x0001000834e4(unaff_x20 + 0x60);
  func_0x0001000834e4(unaff_x20 + 0x88);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10176250c; end: 10176256f;  */

void FUN_10176250c(void)

{
  FUN_101762290();
  return;
}



/* Entry: 101762570; end: 10176258f;  */

void FUN_101762570(void)

{
  func_0x000107c61168(&PTR_PTR_112dc7610);
  return;
}



/* Entry: 101762590; end: 1017625bf;  */

void FUN_101762590(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1017625c0; end: 101762eff;  */

/* WARNING: Possible PIC construction at 0x0001017626e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001017627c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001017628cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001017628dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010176295c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010176296c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762a28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762ca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762d14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762d24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762eb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101762ec4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101762eb8) */
/* WARNING: Removing unreachable block (ram,0x000101762e84) */
/* WARNING: Removing unreachable block (ram,0x000101762e74) */
/* WARNING: Removing unreachable block (ram,0x000101762e64) */
/* WARNING: Removing unreachable block (ram,0x000101762da0) */
/* WARNING: Removing unreachable block (ram,0x000101762e08) */
/* WARNING: Removing unreachable block (ram,0x000101762de4) */
/* WARNING: Removing unreachable block (ram,0x000101762e14) */
/* WARNING: Removing unreachable block (ram,0x000101762df0) */
/* WARNING: Removing unreachable block (ram,0x000101762e28) */
/* WARNING: Removing unreachable block (ram,0x000101762d90) */
/* WARNING: Removing unreachable block (ram,0x000101762d28) */
/* WARNING: Removing unreachable block (ram,0x000101762d18) */
/* WARNING: Removing unreachable block (ram,0x000101762cac) */
/* WARNING: Removing unreachable block (ram,0x000101762c4c) */
/* WARNING: Removing unreachable block (ram,0x000101762be0) */
/* WARNING: Removing unreachable block (ram,0x000101762bd0) */
/* WARNING: Removing unreachable block (ram,0x000101762b70) */
/* WARNING: Removing unreachable block (ram,0x000101762c54) */
/* WARNING: Removing unreachable block (ram,0x000101762c80) */
/* WARNING: Removing unreachable block (ram,0x000101762b9c) */
/* WARNING: Removing unreachable block (ram,0x000101762ae0) */
/* WARNING: Removing unreachable block (ram,0x000101762b28) */
/* WARNING: Removing unreachable block (ram,0x000101762b40) */
/* WARNING: Removing unreachable block (ram,0x000101762a4c) */
/* WARNING: Removing unreachable block (ram,0x000101762ef4) */
/* WARNING: Removing unreachable block (ram,0x000101762a8c) */
/* WARNING: Removing unreachable block (ram,0x000101762a98) */
/* WARNING: Removing unreachable block (ram,0x000101762a9c) */
/* WARNING: Removing unreachable block (ram,0x000101762ef8) */
/* WARNING: Removing unreachable block (ram,0x000101762aa0) */
/* WARNING: Removing unreachable block (ram,0x000101762aa8) */
/* WARNING: Removing unreachable block (ram,0x000101762aac) */
/* WARNING: Removing unreachable block (ram,0x000101762efc) */
/* WARNING: Removing unreachable block (ram,0x000101762ab0) */
/* WARNING: Removing unreachable block (ram,0x000101762a3c) */
/* WARNING: Removing unreachable block (ram,0x000101762a2c) */
/* WARNING: Removing unreachable block (ram,0x000101762970) */
/* WARNING: Removing unreachable block (ram,0x0001017629e0) */
/* WARNING: Removing unreachable block (ram,0x0001017629a8) */
/* WARNING: Removing unreachable block (ram,0x0001017629d4) */
/* WARNING: Removing unreachable block (ram,0x0001017629d8) */
/* WARNING: Removing unreachable block (ram,0x0001017629f0) */
/* WARNING: Removing unreachable block (ram,0x000101762960) */
/* WARNING: Removing unreachable block (ram,0x0001017628e0) */
/* WARNING: Removing unreachable block (ram,0x000101762920) */
/* WARNING: Removing unreachable block (ram,0x0001017628d0) */
/* WARNING: Removing unreachable block (ram,0x000101762864) */
/* WARNING: Removing unreachable block (ram,0x000101762890) */
/* WARNING: Removing unreachable block (ram,0x0001017627c8) */
/* WARNING: Removing unreachable block (ram,0x00010176275c) */
/* WARNING: Removing unreachable block (ram,0x00010176274c) */
/* WARNING: Removing unreachable block (ram,0x0001017626ec) */
/* WARNING: Removing unreachable block (ram,0x0001017627f8) */
/* WARNING: Removing unreachable block (ram,0x000101762824) */
/* WARNING: Removing unreachable block (ram,0x000101762718) */
/* WARNING: Removing unreachable block (ram,0x000101762ec8) */

void FUN_1017625c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar2 = PTR_PTR_1126b8728;
  func_0x000107c61168();
  puVar1 = puVar2;
  func_0x000107c450fc();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  func_0x000107c450f8();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61174();
    puVar2 = (undefined *)0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010efbaf20);
    func_0x00010447c7e0(in_x5,in_x6,in_x7);
    func_0x000107c30a18();
    func_0x000107c61180();
    if (in_x5 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(in_x6);
    }
    func_0x000107c5e508(puVar1);
    func_0x000107c61180();
    puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101762f00; end: 101762f43;  */

void FUN_101762f00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101762f44; end: 10176323f;  */

undefined *
FUN_101762f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long extraout_x8;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  puVar1 = (undefined8 *)0x0;
  func_0x00010447aa4c(0,param_4,param_5);
  lVar14 = puVar1[-1];
  lVar13 = *(long *)(lVar14 + 0x40);
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar13 + 0xfU & 0xfffffffffffffff0);
  puVar16 = &stack0xffffffffffffff00 + -extraout_x8;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd00000000000003f;
  func_0x000100029b28(0xd00000000000003f,0x800000010efbaf60);
  func_0x000107c61170(uVar3);
  puVar5 = &UNK_110404fb0;
  func_0x000107c613fc(&UNK_110404fb0,0x11,7);
  puVar5[0x10] = 0;
  puVar6 = &UNK_110404fd8;
  func_0x000107c613fc(&UNK_110404fd8,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  pcVar11 = *(code **)(lVar14 + 0x10);
  (*pcVar11)(puVar16,param_1,puVar1);
  uVar15 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar17 = uVar15 + 0x48 & (uVar15 ^ 0xffffffffffffffff);
  puVar7 = &UNK_110405000;
  func_0x000107c613fc(&UNK_110405000,uVar17 + lVar13,uVar15 | 7);
  *(undefined8 *)(puVar7 + 0x10) = param_4;
  *(undefined8 *)(puVar7 + 0x18) = param_5;
  *(undefined **)(puVar7 + 0x20) = puVar5;
  *(undefined **)(puVar7 + 0x28) = puVar6;
  *(undefined8 *)(puVar7 + 0x30) = uVar4;
  *(undefined8 *)(puVar7 + 0x38) = param_2;
  *(undefined8 *)(puVar7 + 0x40) = param_3;
  pcVar12 = *(code **)(lVar14 + 0x20);
  (*pcVar12)(puVar7 + uVar17,puVar16,puVar1);
  puVar8 = PTR_PTR_1126b2798;
  func_0x000107c610f8();
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(param_3);
  func_0x000107c453e4();
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa8);
  puVar6 = &UNK_110404fd8;
  func_0x000107c613fc(&UNK_110404fd8,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,unaff_x20);
  (*pcVar11)(puVar16,param_1,puVar1);
  uVar17 = uVar15 + 0x38 & (uVar15 ^ 0xffffffffffffffff);
  uVar18 = lVar13 + uVar17 + 7 & 0xfffffffffffffff8;
  puVar9 = &UNK_110405028;
  func_0x000107c613fc(&UNK_110405028,uVar18 + 8,uVar15 | 7);
  *(undefined8 *)(puVar9 + 0x10) = param_4;
  *(undefined8 *)(puVar9 + 0x18) = param_5;
  *(undefined **)(puVar9 + 0x20) = puVar6;
  *(code **)(puVar9 + 0x28) = FUN_101763540;
  *(undefined **)(puVar9 + 0x30) = puVar7;
  (*pcVar12)(puVar9 + uVar17,puVar16,puVar1);
  *(undefined **)(puVar9 + uVar18) = puVar8;
  pcStack_90 = FUN_101763690;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_110405040;
  ppuVar10 = &puStack_b0;
  puStack_88 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar6 = puStack_88;
  func_0x000107c6157c(puVar7);
  func_0x000107c61174(puVar8);
  func_0x000107c61574(puVar6);
  func_0x000107c4e524(uVar3);
  func_0x000107c61574(puVar7);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61574(puVar5);
  return puVar8;
}



/* Entry: 101763240; end: 10176353f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101763240(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,code *param_8,undefined8 param_9,
                  long param_10,undefined8 param_11,undefined8 param_12)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auStack_120 [12];
  uint uStack_114;
  ulong uStack_110;
  undefined8 *puStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar3 = 0;
  uStack_e0 = param_7;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar13 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_5 + 0x10,auStack_90,0,0);
  if ((*(byte *)(param_5 + 0x10) & 1) == 0) {
    uStack_e8 = param_9;
    func_0x000107c61428(param_5 + 0x10,auStack_a8,1,0);
    *(undefined1 *)(param_5 + 0x10) = 1;
    func_0x000107c61428(param_6 + 0x10,auStack_c0,0,0);
    puVar4 = (undefined8 *)(param_6 + 0x10);
    func_0x000107c61648();
    if (puVar4 == (undefined8 *)0x0) {
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar7 = *puVar4;
      func_0x000107c61174(uVar7);
      func_0x000100069b5c(uStack_e0);
      func_0x000107c61170(uVar7);
      (*param_8)(4,0,0x102);
    }
    else {
      pcStack_f0 = param_8;
      if (((uint)param_4 & 0xff00) == 0x100) {
        puVar6 = puVar4 + 10;
        func_0x0001000a8868(puVar6,puVar4[0xd]);
        lVar5 = 0;
        puStack_f8 = puVar6;
        func_0x00010447aa4c(0,param_11,param_12);
        puVar1 = (ulong *)(param_10 + *(int *)(lVar5 + 0x24));
        uStack_100 = *puVar1;
        uVar12 = puVar1[1];
        puStack_108 = (undefined8 *)CONCAT44(puStack_108._4_4_,(uint)(byte)puVar1[2]);
        func_0x000107c5eea0(puVar13);
        func_0x000107c5ee68(param_10 + *(int *)(lVar5 + 0x28));
        (**(code **)(lVar14 + 8))(puVar13,lVar3);
        uVar9 = 0;
        uVar10 = 0;
        puVar6 = param_2;
        uVar7 = param_3;
        uVar8 = param_4;
        uVar11 = uStack_100;
        uVar2 = (uint)puStack_108;
      }
      else {
        puVar6 = puVar4 + 10;
        func_0x0001000a8868(puVar6,puVar4[0xd]);
        puStack_f8 = (undefined8 *)
                     CONCAT44(puStack_f8._4_4_,(uint)*(byte *)((long)param_2 + _DAT_11307d5c0));
        uStack_100 = CONCAT44(uStack_100._4_4_,(uint)*(byte *)((long)param_2 + _DAT_11307d5c8));
        lVar5 = 0;
        puStack_108 = puVar6;
        func_0x00010447aa4c(0,param_11,param_12);
        puVar1 = (ulong *)(param_10 + *(int *)(lVar5 + 0x24));
        uVar11 = *puVar1;
        uStack_110 = puVar1[1];
        uStack_114 = (uint)(byte)puVar1[2];
        func_0x000107c5eea0(puVar13);
        func_0x000107c5ee68(param_10 + *(int *)(lVar5 + 0x28));
        (**(code **)(lVar14 + 8))(puVar13,lVar3);
        puVar6 = (undefined8 *)0x0;
        uVar7 = 0;
        uVar8 = 0;
        uVar9 = (ulong)puStack_f8 & 0xffffffff;
        uVar10 = uStack_100 & 0xffffffff;
        uVar12 = uStack_110;
        uVar2 = uStack_114;
      }
      FUN_1017625c0(param_1,puVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar2);
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar7 = *puVar6;
      func_0x000107c61174(uVar7);
      func_0x000100069b5c(uStack_e0);
      func_0x000107c61170(uVar7);
      (*pcStack_f0)(param_2,param_3,param_4);
      func_0x000107c61574(puVar4);
    }
  }
  return;
}



/* Entry: 101763540; end: 1017635c7;  */

void FUN_101763540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x00010447aa4c(0,uVar1,uVar2);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  FUN_101763240(param_1,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                unaff_x20 + (uVar4 + 0x48 & (uVar4 ^ 0xffffffffffffffff)),uVar1,uVar2);
  return;
}



/* Entry: 1017635c8; end: 10176368f;  */

void FUN_1017635c8(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    (*param_2)(4,0,0x102);
  }
  else {
    FUN_1017636fc(param_4,param_2,param_3,param_6,param_7);
    func_0x000107c3d5f8(param_5);
    func_0x000107c61574(param_1);
    func_0x000107c615e8(param_4);
  }
  return;
}



/* Entry: 101763690; end: 1017636fb;  */

void FUN_101763690(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = 0;
  func_0x00010447aa4c(0,uVar1,uVar2);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar8 = uVar8 + 0x38 & (uVar8 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  pcVar3 = *(code **)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar8 + 7 & 0xffffffffffffff8));
  lVar5 = unaff_x20 + uVar8;
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 == 0) {
    (*pcVar3)(4,0,0x102);
  }
  else {
    FUN_1017636fc(lVar5,pcVar3,uVar6,uVar1,uVar2);
    func_0x000107c3d5f8(uVar7);
    func_0x000107c61574(lVar4);
    func_0x000107c615e8(lVar5);
  }
  return;
}



/* Entry: 1017636fc; end: 1017639a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017636fc(long param_1,code *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long extraout_x12;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  code *pcStack_c0;
  long lStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [48];
  
  lVar3 = 0;
  pcStack_b0 = param_2;
  uStack_a8 = param_3;
  func_0x00010447aa4c(0,param_4,param_5);
  lVar12 = *(long *)(lVar3 + -8);
  lVar14 = *(long *)(lVar12 + 0x40);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar14 + 0xfU & 0xfffffffffffffff0);
  lStack_b8 = (long)&pcStack_c0 - extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_4 + -8) + 0x40));
  lVar10 = ((long)&pcStack_c0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  iVar2 = *(int *)(lVar4 + 0x2c);
  (**(code **)(extraout_x12 + 0x10))(lVar10,param_1,param_4);
  FUN_101760888(auStack_90,lVar10,param_4,param_5);
  lVar4 = param_1 + iVar2 + 0x10;
  FUN_10176e384(lVar4,auStack_90);
  FUN_101761478(auStack_90);
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar4 = *(long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(unaff_x20 + 0x18,uVar5);
    puVar6 = &UNK_110405278;
    func_0x000107c613fc(&UNK_110405278,0x20,7);
    *(code **)(puVar6 + 0x10) = pcStack_b0;
    *(undefined8 *)(puVar6 + 0x18) = uStack_a8;
    pcStack_c0 = *(code **)(lVar4 + 8);
    func_0x000107c6157c();
    lVar10 = param_1;
    (*pcStack_c0)(param_1,FUN_101766204,puVar6,param_4,param_5,uVar5,lVar4);
    func_0x000107c61574(puVar6);
    lVar4 = lStack_b8;
    (**(code **)(lVar12 + 0x10))(lStack_b8,param_1,lVar3);
    uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar11 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
    uVar13 = lVar14 + uVar11 + 7 & 0xfffffffffffffff8;
    puVar6 = &UNK_1104052a0;
    func_0x000107c613fc(&UNK_1104052a0,uVar13 + 0x10,uVar9 | 7);
    *(long *)(puVar6 + 0x10) = param_4;
    *(undefined8 *)(puVar6 + 0x18) = param_5;
    puVar7 = puVar6 + uVar11;
    (**(code **)(lVar12 + 0x20))(puVar7,lVar4,lVar3);
    uVar5 = uStack_a8;
    *(code **)(puVar6 + uVar13) = pcStack_b0;
    *(undefined8 *)((long)(puVar6 + uVar13) + 8) = uStack_a8;
    FUN_101765650();
    puVar8 = puVar7;
    func_0x000107c610f8();
    *(long *)(puVar8 + _DAT_112dc7800) = lVar10;
    puVar1 = (undefined8 *)(puVar8 + _DAT_112dc7808);
    *puVar1 = FUN_10176620c;
    puVar1[1] = puVar6;
    puVar6 = PTR_s_init_1125d9248;
    puStack_a0 = puVar8;
    puStack_98 = puVar7;
    func_0x000107c6157c(uVar5);
    func_0x000107c61154(&puStack_a0,puVar6);
  }
  else {
    func_0x00010447be14(0);
    func_0x000107c610f8();
    uVar5 = 0;
    func_0x00010447bd50(0,1);
    (*pcStack_b0)();
    func_0x000107c61170(uVar5);
    func_0x000107c610f8(PTR_PTR_1126b2798);
    func_0x000107c453e4();
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 1017639a4; end: 1017639bf;  */

void FUN_1017639a4(long param_1,long param_2)

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



/* Entry: 1017639c0; end: 101763d0f;  */

undefined *
FUN_1017639c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long extraout_x8;
  code *pcVar11;
  long lVar12;
  long unaff_x20;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  code *pcVar17;
  ulong uVar18;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  puVar1 = (undefined8 *)0x0;
  func_0x00010447aa4c(0,param_7);
  lVar12 = puVar1[-1];
  lVar14 = *(long *)(lVar12 + 0x40);
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar14 + 0xfU & 0xfffffffffffffff0);
  puVar16 = &stack0xfffffffffffffee0 + -extraout_x8;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd00000000000003c;
  func_0x000100029b28(0xd00000000000003c,0x800000010efbafa0);
  func_0x000107c61170(uVar3);
  puVar5 = &UNK_110404fb0;
  func_0x000107c613fc(&UNK_110404fb0,0x11,7);
  puVar5[0x10] = 0;
  puVar6 = &UNK_110404fd8;
  func_0x000107c613fc(&UNK_110404fd8,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  pcVar17 = *(code **)(lVar12 + 0x10);
  (*pcVar17)(puVar16,param_1,puVar1);
  uVar15 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar15 + 0x58 & (uVar15 ^ 0xffffffffffffffff);
  puVar7 = &UNK_110405078;
  func_0x000107c613fc(&UNK_110405078,uVar13 + lVar14,uVar15 | 7);
  *(undefined8 *)(puVar7 + 0x10) = param_6;
  *(undefined8 *)(puVar7 + 0x18) = param_7;
  *(undefined8 *)(puVar7 + 0x20) = param_8;
  *(undefined8 *)(puVar7 + 0x28) = param_9;
  *(undefined **)(puVar7 + 0x30) = puVar5;
  *(undefined **)(puVar7 + 0x38) = puVar6;
  *(undefined8 *)(puVar7 + 0x40) = uVar4;
  *(undefined8 *)(puVar7 + 0x48) = param_4;
  *(undefined8 *)(puVar7 + 0x50) = param_5;
  pcVar11 = *(code **)(lVar12 + 0x20);
  (*pcVar11)(puVar7 + uVar13,puVar16,puVar1);
  puVar8 = PTR_PTR_1126b2798;
  func_0x000107c610f8();
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(param_5);
  func_0x000107c453e4();
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa8);
  puVar6 = &UNK_110404fd8;
  func_0x000107c613fc(&UNK_110404fd8,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,unaff_x20);
  (*pcVar17)(puVar16,param_1,puVar1);
  uVar18 = uVar15 + 0x48 & (uVar15 ^ 0xffffffffffffffff);
  uVar13 = lVar14 + uVar18 + 7 & 0xfffffffffffffff8;
  puVar9 = &UNK_1104050a0;
  func_0x000107c613fc(&UNK_1104050a0,uVar13 + 0x18,uVar15 | 7);
  *(undefined8 *)(puVar9 + 0x10) = param_6;
  *(undefined8 *)(puVar9 + 0x18) = param_7;
  *(undefined8 *)(puVar9 + 0x20) = param_8;
  *(undefined8 *)(puVar9 + 0x28) = param_9;
  *(undefined **)(puVar9 + 0x30) = puVar6;
  *(code **)(puVar9 + 0x38) = FUN_101763ffc;
  *(undefined **)(puVar9 + 0x40) = puVar7;
  (*pcVar11)(puVar9 + uVar18,puVar16,puVar1);
  *(undefined8 *)(puVar9 + uVar13) = param_2;
  *(undefined8 *)((long)(puVar9 + uVar13) + 8) = param_3;
  *(undefined **)(puVar9 + uVar13 + 0x10) = puVar8;
  pcStack_90 = FUN_101764170;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_1104050b8;
  ppuVar10 = &puStack_b0;
  puStack_88 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar6 = puStack_88;
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(param_3);
  func_0x000107c61174(puVar8);
  func_0x000107c61574(puVar6);
  func_0x000107c4e524(uVar3);
  func_0x000107c61574(puVar7);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61574(puVar5);
  return puVar8;
}



/* Entry: 101763d10; end: 101763ffb;  */

void FUN_101763d10(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,code *param_8,undefined8 param_9,
                  long param_10,undefined4 param_11,undefined4 param_12,undefined8 param_13,
                  undefined4 param_14,undefined4 param_15,undefined8 param_16)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auStack_120 [12];
  uint uStack_114;
  ulong uStack_110;
  undefined8 *puStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar3 = 0;
  uStack_e0 = param_7;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar13 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_5 + 0x10,auStack_90,0,0);
  if ((*(byte *)(param_5 + 0x10) & 1) == 0) {
    uStack_e8 = param_9;
    func_0x000107c61428(param_5 + 0x10,auStack_a8,1,0);
    *(undefined1 *)(param_5 + 0x10) = 1;
    func_0x000107c61428(param_6 + 0x10,auStack_c0,0,0);
    puVar4 = (undefined8 *)(param_6 + 0x10);
    func_0x000107c61648();
    if (puVar4 == (undefined8 *)0x0) {
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar7 = *puVar4;
      func_0x000107c61174(uVar7);
      func_0x000100069b5c(uStack_e0);
      func_0x000107c61170(uVar7);
      (*param_8)(4,0,0x102);
    }
    else {
      pcStack_f0 = param_8;
      if (((uint)param_4 & 0xff00) == 0x100) {
        puVar6 = puVar4 + 10;
        func_0x0001000a8868(puVar6,puVar4[0xd]);
        lVar5 = 0;
        puStack_f8 = puVar6;
        func_0x00010447aa4c(0,param_13,param_16);
        puVar1 = (ulong *)(param_10 + *(int *)(lVar5 + 0x24));
        uStack_100 = *puVar1;
        uVar12 = puVar1[1];
        puStack_108 = (undefined8 *)CONCAT44(puStack_108._4_4_,(uint)(byte)puVar1[2]);
        func_0x000107c5eea0(puVar13);
        func_0x000107c5ee68(param_10 + *(int *)(lVar5 + 0x28));
        (**(code **)(lVar14 + 8))(puVar13,lVar3);
        uVar9 = 0;
        uVar10 = 0;
        puVar6 = param_2;
        uVar7 = param_3;
        uVar8 = param_4;
        uVar11 = uStack_100;
        uVar2 = (uint)puStack_108;
      }
      else {
        puVar6 = puVar4 + 10;
        func_0x0001000a8868(puVar6,puVar4[0xd]);
        puStack_f8 = (undefined8 *)CONCAT44(puStack_f8._4_4_,(uint)*(byte *)(param_2 + 3));
        uStack_100 = CONCAT44(uStack_100._4_4_,(uint)*(byte *)((long)param_2 + 0x19));
        lVar5 = 0;
        puStack_108 = puVar6;
        func_0x00010447aa4c(0,param_13,param_16);
        puVar1 = (ulong *)(param_10 + *(int *)(lVar5 + 0x24));
        uVar11 = *puVar1;
        uStack_110 = puVar1[1];
        uStack_114 = (uint)(byte)puVar1[2];
        func_0x000107c5eea0(puVar13);
        func_0x000107c5ee68(param_10 + *(int *)(lVar5 + 0x28));
        (**(code **)(lVar14 + 8))(puVar13,lVar3);
        puVar6 = (undefined8 *)0x0;
        uVar7 = 0;
        uVar8 = 0;
        uVar9 = (ulong)puStack_f8 & 0xffffffff;
        uVar10 = uStack_100 & 0xffffffff;
        uVar12 = uStack_110;
        uVar2 = uStack_114;
      }
      FUN_1017625c0(param_1,puVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar2);
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar7 = *puVar6;
      func_0x000107c61174(uVar7);
      func_0x000100069b5c(uStack_e0);
      func_0x000107c61170(uVar7);
      (*pcStack_f0)(param_2,param_3,param_4);
      func_0x000107c61574(puVar4);
    }
  }
  return;
}



/* Entry: 101763ffc; end: 10176416f;  */

void FUN_101763ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = 0;
  func_0x00010447aa4c(0,uVar3,uVar4);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  FUN_101763d10(param_1,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                unaff_x20 + (uVar6 + 0x58 & (uVar6 ^ 0xffffffffffffffff)),uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101764170; end: 101764207;  */

void FUN_101764170(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar6 = 0;
  func_0x00010447aa4c(0,uVar4,uVar5);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar8 = uVar7 + 0x48 & (uVar7 ^ 0xffffffffffffffff);
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + uVar8 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar7);
  func_0x000101764094(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),unaff_x20 + uVar8,*puVar1,puVar1[1],
                      *(undefined8 *)(unaff_x20 + (uVar7 + 0x17 & 0xffffffffffffff8)),uVar2,uVar4,
                      uVar3,uVar5);
  return;
}



/* Entry: 101764208; end: 10176464b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101764208(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 **ppuVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long unaff_x20;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  long lStack_130;
  long lStack_128;
  code *pcStack_120;
  long lStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 **ppuStack_90;
  
  lVar4 = 0;
  uStack_100 = param_2;
  uStack_f8 = param_3;
  uStack_d0 = param_8;
  pcStack_c8 = param_4;
  uStack_c0 = param_5;
  uStack_b8 = param_6;
  func_0x00010447aa4c(0,param_7,param_9);
  pcStack_108 = *(code **)(lVar4 + -8);
  lVar13 = *(long *)((long)pcStack_108 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar13 + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(param_7 + -8);
  lStack_e8 = (long)&lStack_130 - extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar11 = ((long)&lStack_130 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + 0xa8));
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x2c));
  pcVar16 = *(code **)(lVar15 + 0x10);
  lStack_e0 = lVar4;
  lStack_d8 = param_1;
  (*pcVar16)(lVar11,param_1,param_7);
  uStack_f0 = param_9;
  FUN_101760888(&puStack_98,lVar11,param_7,param_9);
  puVar5 = puVar1 + 2;
  ppuVar10 = &puStack_98;
  FUN_10176e384();
  FUN_101761478(&puStack_98);
  if (puVar5 != (undefined8 *)0x0) {
    uVar6 = 0x112dc7838;
    puStack_98 = puVar5;
    ppuStack_90 = ppuVar10;
    func_0x0001000285a8(0x112dc7838,&UNK_10d988150);
    uVar2 = uStack_b8;
    puVar5 = &uStack_b0;
    func_0x000107c6147c(puVar5,&puStack_98,uVar6,uStack_b8,6);
    if (((ulong)puVar5 & 1) != 0) {
      (*pcVar16)(lVar11,lStack_d8,param_7);
      FUN_101760888(&puStack_98,lVar11,param_7,uStack_f0);
      uVar6 = uStack_d0;
      FUN_1017646d0(&puStack_98,*puVar1,puVar1[1],puVar1[2],uStack_b0,uVar2,uStack_d0);
      FUN_101761478(&puStack_98);
      func_0x00010447b6a4(0,uVar2,uVar6);
      uVar6 = uStack_b0;
      func_0x00010447b5e8(uStack_b0,0,1);
      func_0x000107c615f0(uStack_b0);
      (*pcStack_c8)(uVar6,0,0);
      func_0x000107c61574(uVar6);
      func_0x000107c610f8(PTR_PTR_1126b2798);
      func_0x000107c453e4();
      func_0x000107c615e8(uStack_b0);
      return;
    }
  }
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x30);
  lStack_130 = *(long *)(unaff_x20 + 0x38);
  lVar4 = unaff_x20 + 0x18;
  func_0x0001000a8868();
  puVar7 = &UNK_110404fd8;
  lStack_118 = lVar4;
  func_0x000107c613fc(&UNK_110404fd8,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  lVar4 = lStack_e8;
  pcVar16 = pcStack_108;
  pcStack_120 = *(code **)((long)pcStack_108 + 0x10);
  (*pcStack_120)(lStack_e8,lStack_d8,lStack_e0);
  uVar14 = (ulong)*(byte *)((long)pcVar16 + 0x50);
  uVar17 = uVar14 + 0x48 & (uVar14 ^ 0xffffffffffffffff);
  lStack_128 = lVar13 + 7;
  uVar12 = lStack_128 + uVar17 & 0xfffffffffffffff8;
  puVar8 = &UNK_110405160;
  func_0x000107c613fc(&UNK_110405160,uVar12 + 0x10,uVar14 | 7);
  uVar3 = uStack_c0;
  lVar11 = lStack_e0;
  uVar2 = uStack_f0;
  *(undefined8 *)(puVar8 + 0x10) = uStack_b8;
  *(long *)(puVar8 + 0x18) = param_7;
  *(undefined8 *)(puVar8 + 0x20) = uStack_d0;
  *(undefined8 *)(puVar8 + 0x28) = uStack_f0;
  *(undefined **)(puVar8 + 0x30) = puVar7;
  *(code **)(puVar8 + 0x38) = pcStack_c8;
  *(undefined8 *)(puVar8 + 0x40) = uStack_c0;
  pcStack_108 = *(code **)((long)pcVar16 + 0x20);
  (*pcStack_108)(puVar8 + uVar17,lVar4,lStack_e0);
  uVar6 = uStack_f8;
  lVar4 = lStack_130;
  *(undefined8 *)(puVar8 + uVar12) = uStack_100;
  *(undefined8 *)((long)(puVar8 + uVar12) + 8) = uStack_f8;
  pcVar16 = *(code **)(lStack_130 + 8);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  lVar13 = lStack_d8;
  lVar15 = lStack_d8;
  (*pcVar16)(lStack_d8,FUN_101765874,puVar8,param_7,uVar2,uStack_110,lVar4);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar8);
  lVar4 = lStack_e8;
  (*pcStack_120)(lStack_e8,lVar13,lVar11);
  uVar12 = uVar14 + 0x30 & (uVar14 ^ 0xffffffffffffffff);
  uVar17 = lStack_128 + uVar12 & 0xfffffffffffffff8;
  puVar7 = &UNK_110405188;
  func_0x000107c613fc(&UNK_110405188,uVar17 + 0x10,uVar14 | 7);
  *(undefined8 *)(puVar7 + 0x10) = uStack_b8;
  *(long *)(puVar7 + 0x18) = param_7;
  *(undefined8 *)(puVar7 + 0x20) = uStack_d0;
  *(undefined8 *)(puVar7 + 0x28) = uVar2;
  puVar8 = puVar7 + uVar12;
  (*pcStack_108)(puVar8,lVar4,lVar11);
  uVar6 = uStack_c0;
  *(code **)(puVar7 + uVar17) = pcStack_c8;
  *(undefined8 *)((long)(puVar7 + uVar17) + 8) = uStack_c0;
  FUN_101765650();
  puVar9 = puVar8;
  func_0x000107c610f8();
  *(long *)(puVar9 + _DAT_112dc7800) = lVar15;
  puVar5 = (undefined8 *)(puVar9 + _DAT_112dc7808);
  *puVar5 = FUN_101765920;
  puVar5[1] = puVar7;
  puVar7 = PTR_s_init_1125d9248;
  puStack_a8 = puVar9;
  puStack_a0 = puVar8;
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&puStack_a8,puVar7);
  return;
}



/* Entry: 10176464c; end: 1017646cf;  */

void FUN_10176464c(undefined8 param_1,undefined8 param_2,uint param_3,code *param_4)

{
  ulong uVar1;
  
  if ((param_3 & 0xff00) == 0x100) {
    (*param_4)();
    return;
  }
  func_0x00010447be14(0);
  func_0x000107c610f8();
  uVar1 = (ulong)(param_3 & 1);
  func_0x00010447bd50(uVar1,0);
  (*param_4)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1017646d0; end: 1017650c7;  */

void FUN_1017646d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + 0xa8));
  uVar5 = param_6;
  (**(code **)(param_7 + 8))(param_6,param_7);
  (**(code **)(param_7 + 0x10))(&lStack_90,param_6,param_7);
  lVar4 = lStack_78;
  func_0x000101765980(&lStack_90);
  if (lVar4 == 0) {
    puVar1 = &UNK_110404fd8;
    func_0x000107c613fc(&UNK_110404fd8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    FUN_1017614e0(param_1,&lStack_90);
    puVar2 = &UNK_1104051b0;
    func_0x000107c613fc(&UNK_1104051b0,0x68,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x20) = uStack_88;
    *(long *)(puVar2 + 0x18) = lStack_90;
    *(long *)(puVar2 + 0x30) = lStack_78;
    *(undefined8 *)(puVar2 + 0x28) = uStack_80;
    *(undefined8 *)(puVar2 + 0x40) = uStack_68;
    *(undefined ***)(puVar2 + 0x38) = ppuStack_70;
    *(undefined8 *)(puVar2 + 0x48) = param_2;
    *(undefined8 *)(puVar2 + 0x50) = param_3;
    *(long *)(puVar2 + 0x58) = param_4;
    *(undefined8 *)(puVar2 + 0x60) = uVar5;
    lVar3 = 0;
    FUN_1017675fc();
    lVar4 = lVar3;
    func_0x000107c613fc();
    *(code **)(lVar4 + 0x10) = FUN_1017659c8;
    *(undefined **)(lVar4 + 0x18) = puVar2;
    ppuStack_70 = &PTR_DAT_110405328;
    pcVar6 = *(code **)(param_7 + 0x18);
    lStack_90 = lVar4;
    lStack_78 = lVar3;
    func_0x000107c61434(param_3);
    func_0x000107c6157c(lVar4);
    (*pcVar6)(&lStack_90,param_6,param_7);
    func_0x000107c61574(lVar4);
  }
  lStack_90 = param_4;
  FUN_10176e120(&lStack_90,param_1,param_5,param_6,param_7);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c615f0(uVar5);
  FUN_1017609f8(param_2,param_3,param_4,param_1,param_5,param_6,param_7);
  func_0x000107c615e8(uVar5);
  return;
}



/* Entry: 1017650c8; end: 10176522f;  */

void FUN_1017650c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xa8);
    puVar1 = &UNK_110404fd8;
    func_0x000107c613fc(&UNK_110404fd8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,param_1);
    FUN_1017614e0(param_2,&uStack_98);
    puVar2 = &UNK_1104051d8;
    func_0x000107c613fc(&UNK_1104051d8,0x68,7);
    *(undefined8 *)(puVar2 + 0x20) = uStack_90;
    *(undefined8 *)(puVar2 + 0x18) = uStack_98;
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x30) = uStack_80;
    *(undefined8 *)(puVar2 + 0x28) = uStack_88;
    *(undefined8 *)(puVar2 + 0x40) = uStack_70;
    *(undefined8 *)(puVar2 + 0x38) = uStack_78;
    *(undefined8 *)(puVar2 + 0x48) = param_3;
    *(undefined8 *)(puVar2 + 0x50) = param_4;
    *(undefined8 *)(puVar2 + 0x58) = param_5;
    *(undefined8 *)(puVar2 + 0x60) = param_6;
    pcStack_a8 = FUN_101765a08;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0x42000000;
    puStack_b8 = &UNK_1000f6b44;
    puStack_b0 = &UNK_1104051f0;
    ppuVar3 = &puStack_c8;
    puStack_a0 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar1 = puStack_a0;
    func_0x000107c615f0(uVar4);
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(param_1);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 101765230; end: 1017652a7;  */

void FUN_101765230(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x000107c615f0(uVar1);
    FUN_101760bb8(param_2);
    func_0x000107c61574(param_1);
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 1017652a8; end: 10176538f;  */

void FUN_1017652a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + 0xa8);
  puVar1 = &UNK_110404fd8;
  func_0x000107c613fc(&UNK_110404fd8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_1104050f0;
  func_0x000107c613fc(&UNK_1104050f0,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcStack_50 = FUN_101765470;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110405108;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101765390; end: 10176546f;  */

void FUN_101765390(long param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c615f0(uVar3);
    uVar1 = uVar2;
    func_0x000107c6157c(uVar2);
    FUN_10176e450();
    func_0x000107c61574(uVar2);
    uVar2 = uVar1;
    FUN_101766288(uVar1);
    func_0x000107c6142c(uVar1);
    uVar1 = uVar2;
    func_0x000101760f1c(uVar2);
    func_0x000107c615e8(uVar3);
    func_0x000107c6142c(uVar2);
    (*param_2)(uVar1);
    func_0x000107c61574(param_1);
    func_0x000107c6142c(uVar1);
  }
  return;
}



/* Entry: 101765470; end: 10176547b;  */

void FUN_101765470(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x40);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c615f0(uVar5);
    uVar3 = uVar4;
    func_0x000107c6157c(uVar4);
    FUN_10176e450();
    func_0x000107c61574(uVar4);
    uVar4 = uVar3;
    FUN_101766288(uVar3);
    func_0x000107c6142c(uVar3);
    uVar3 = uVar4;
    func_0x000101760f1c(uVar4);
    func_0x000107c615e8(uVar5);
    func_0x000107c6142c(uVar4);
    (*pcVar1)(uVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 10176547c; end: 1017654cf;  */

void FUN_10176547c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x0001000834e4(unaff_x20 + 0x50);
  func_0x0001000834e4(unaff_x20 + 0x78);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1017654d0; end: 10176553f;  */

void FUN_1017654d0(void)

{
  FUN_101762f44();
  return;
}



/* Entry: 101765540; end: 10176555f;  */

void FUN_101765540(void)

{
  func_0x000107c61168(&PTR_PTR_112dc7770);
  return;
}



/* Entry: 101765560; end: 1017655b3; -[_TtC36SCDataFetchingServicesImplementation13CancelWrapper cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101765560(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dc7800);
  func_0x000107c61174();
  func_0x000107c3f474(uVar1);
  (**(code **)(param_1 + _DAT_112dc7808))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1017655b4; end: 101765613; -[_TtC36SCDataFetchingServicesImplementation13CancelWrapper init] */

void FUN_1017655b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCDataFetchingServicesImplementation.CancelWrapper",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1017655e0);
  (*pcVar1)();
}



/* Entry: 101765614; end: 10176564f; -[_TtC36SCDataFetchingServicesImplementation13CancelWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101765614(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dc7800));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc7808 + 8));
  return;
}


