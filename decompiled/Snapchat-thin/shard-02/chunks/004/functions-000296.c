/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d0a490; end: 101d0a4d7;  */

undefined8 FUN_101d0a490(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e1f490;
  func_0x0001000285a8(0x112e1f490,&UNK_10da01908);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101d0a4d8; end: 101d0a4df;  */

void FUN_101d0a4d8(char *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar4 = 0xd00000000000001a;
  pcVar3 = "Location primacy is UNKNOWN for this device";
  if (*param_1 != '\x01') {
    uVar4 = 0xd00000000000002b;
    pcVar3 = "Location primacy was never determined";
  }
  pcVar1 = "This is a SECONDARY device";
  uVar2 = 0xd000000000000018;
  if (*param_1 != '\0') {
    pcVar1 = pcVar3 + 0x10;
    uVar2 = uVar4;
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,1,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(ulong *)(unaff_x20 + 0x18) = (ulong)pcVar1 | 0x8000000000000000;
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 101d0a4e0; end: 101d0a5e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101d0a4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e1f498) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e1f4a0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e1f4a8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 101d0a5e8; end: 101d0a6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0a5e8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar3 = &lStack_50;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e1f4a8) + _DAT_112fcd700);
  lVar1 = 0;
  FUN_101d0a178();
  lVar2 = lVar1;
  func_0x000107c610f8();
  lVar4 = _DAT_112e1f460;
  func_0x000107c61644(lVar2 + _DAT_112e1f460,0);
  func_0x000107c61634(lVar2 + lVar4,uVar5);
  lStack_50 = lVar2;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e1f498);
  *(long **)(unaff_x20 + _DAT_112e1f498) = plVar3;
  func_0x000107c61174();
  func_0x000107c61170(uVar5);
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112e1f4a0) + _DAT_113053888);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c4fc5c();
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61170(plVar3);
  return;
}



/* Entry: 101d0a6e8; end: 101d0a73f; +[_TtC36PrimaryLocationDeviceServiceProvider34PrimaryLocationDeviceS2REntryPoint attributedTask] */

void FUN_101d0a6e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100079360(0);
  uVar1 = 0;
  func_0x0001005e21cc(0);
  func_0x000100965e3c();
  uVar2 = uVar1;
  func_0x0001005e2264();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101d0a740; end: 101d0a79f; -[_TtC36PrimaryLocationDeviceServiceProvider34PrimaryLocationDeviceS2REntryPoint init] */

void FUN_101d0a740(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PrimaryLocationDeviceServiceProvider.PrimaryLocationDeviceS2REntryPoint",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0a76c);
  (*pcVar1)();
}



/* Entry: 101d0a7a0; end: 101d0a807; -[_TtC36PrimaryLocationDeviceServiceProvider34PrimaryLocationDeviceS2REntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101d0a7bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d0a7c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0a7a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e1f4a0));
  return;
}



/* Entry: 101d0a808; end: 101d0a80f;  */

undefined8 FUN_101d0a808(void)

{
  return 0;
}



/* Entry: 101d0a810; end: 101d0a82f;  */

void FUN_101d0a810(void)

{
  func_0x000107c61168(&PTR_PTR_112802560);
  return;
}



/* Entry: 101d0a830; end: 101d0a83f; -[_TtC37SCMapLocationPushRegistrationServices37SCMapLocationPushRegistrationServices locationPushTokenProvder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0a830(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e1f4d8));
  return;
}



/* Entry: 101d0a840; end: 101d0a88b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0a840(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e1f4d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101d0a88c; end: 101d0a8e3; -[_TtC37SCMapLocationPushRegistrationServices37SCMapLocationPushRegistrationServices initWithLocationPushTokenProvder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0a88c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e1f4d8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 101d0a8e4; end: 101d0a943; -[_TtC37SCMapLocationPushRegistrationServices37SCMapLocationPushRegistrationServices init] */

void FUN_101d0a8e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapLocationPushRegistrationServices.SCMapLocationPushRegistrationServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0a910);
  (*pcVar1)();
}



/* Entry: 101d0a944; end: 101d0a953; -[_TtC37SCMapLocationPushRegistrationServices37SCMapLocationPushRegistrationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0a944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e1f4d8));
  return;
}



/* Entry: 101d0a954; end: 101d0afef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101d0a954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
             undefined8 param_9,long param_10,long param_11)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  long extraout_x8;
  long unaff_x20;
  long lVar14;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  lStack_e8 = param_11;
  lStack_e0 = param_10;
  uStack_f0 = param_9;
  lVar2 = 0;
  lStack_d8 = param_8;
  uStack_d0 = param_7;
  uStack_c8 = param_6;
  uStack_c0 = param_5;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  func_0x000107c5f804();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar9 = (long)&uStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c610f8();
  lVar11 = _DAT_112e1f508;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar11) = puVar3;
  lVar11 = _DAT_112e1f510;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar11) = puVar3;
  lVar11 = _DAT_112e1f518;
  puVar3 = &UNK_10da01980;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar11) = puVar3;
  lVar11 = _DAT_112e1f520;
  (**(code **)(lVar14 + 0x68))
            (lVar9,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
             ,lVar2);
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f00ce60);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar14 + 8))(lVar9,lVar2);
  *(undefined **)(unaff_x20 + lVar11) = puVar3;
  lVar11 = _DAT_112e1f528;
  uVar4 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar11) = uVar4;
  lVar11 = _DAT_112e1f530;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101d0f888(PTR___swiftEmptyArrayStorage_11034f1c8,0x112d64d40,&UNK_10da019d0);
  *(undefined **)(unaff_x20 + lVar11) = puVar5;
  lVar11 = _DAT_112e1f538;
  puVar5 = puVar3;
  FUN_101d0f888(puVar3,0x112d64d40,&UNK_10da019d0);
  *(undefined **)(unaff_x20 + lVar11) = puVar5;
  *(undefined1 *)(unaff_x20 + _DAT_112e1f540) = 0;
  lVar11 = _DAT_112e1f548;
  puVar5 = puVar3;
  FUN_101d0f888(puVar3,0x112e1f5f0,&UNK_10da019d8);
  uVar6 = uStack_c0;
  uVar7 = uStack_c8;
  uVar8 = uStack_d0;
  lVar14 = lStack_d8;
  lVar9 = lStack_e0;
  lVar2 = lStack_e8;
  uVar4 = uStack_f0;
  *(undefined **)(unaff_x20 + lVar11) = puVar5;
  *(undefined **)(unaff_x20 + _DAT_112e1f550) = puVar3;
  *(undefined **)(unaff_x20 + _DAT_112e1f558) = puVar3;
  *(undefined **)(unaff_x20 + _DAT_112e1f560) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e1f568);
  *puVar1 = uStack_b8;
  puVar1[1] = uStack_b0;
  *(undefined8 *)(unaff_x20 + _DAT_112e1f570) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e1f578) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e1f580) = uStack_c0;
  *(undefined8 *)(unaff_x20 + _DAT_112e1f588) = uStack_c8;
  *(undefined8 *)(unaff_x20 + _DAT_112e1f590) = uStack_d0;
  *(long *)(unaff_x20 + _DAT_112e1f598) = lStack_d8;
  *(undefined8 *)(unaff_x20 + _DAT_112e1f5a0) = uStack_f0;
  *(long *)(unaff_x20 + _DAT_112e1f5a8) = lStack_e8;
  *(long *)(unaff_x20 + _DAT_112e1f5b0) = lStack_e0;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c61174();
  uStack_b0 = param_3;
  func_0x000107c61174();
  uStack_b8 = param_4;
  func_0x000107c61174();
  uStack_c0 = uVar6;
  func_0x000107c61174();
  uStack_c8 = uVar7;
  func_0x000107c61174();
  uStack_d0 = uVar8;
  func_0x000107c61174();
  func_0x000107c61174();
  lStack_d8 = uVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  puVar10 = auStack_78;
  func_0x000107c61154(puVar10,puVar3);
  lVar11 = lVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 != 0) {
    func_0x000107c3d740();
    func_0x000107c615e8(lVar11);
  }
  lVar11 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar11 != 0) {
    lVar12 = lVar11;
    func_0x000107c4d32c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
    lVar11 = lVar12;
    func_0x000107c4da88(lVar12);
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    puVar5 = &UNK_110473198;
    func_0x000107c613fc(&UNK_110473198,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,puVar10);
    pcStack_88 = (code *)0x101d0f9ac;
    puStack_a8 = puVar3;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_101218f4c;
    puStack_90 = &UNK_110473200;
    ppuVar13 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar13);
    func_0x000107c61574(puStack_80);
    lVar12 = lVar11;
    func_0x000107c5c320(lVar11);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c61170(lVar11);
    func_0x000107c3e924(lVar12);
    func_0x000107c61170(lVar12);
  }
  lVar11 = lVar14;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 != 0) {
    lVar12 = lVar11;
    func_0x000107c43aa8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
    lVar11 = lVar12;
    func_0x000107c4da88(lVar12);
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    puVar5 = &UNK_110473198;
    func_0x000107c613fc(&UNK_110473198,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,puVar10);
    pcStack_88 = (code *)0x101d0f9a4;
    puStack_a8 = puVar3;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_101218f4c;
    puStack_90 = &UNK_1104731d8;
    ppuVar13 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar13);
    func_0x000107c61574(puStack_80);
    lVar12 = lVar11;
    func_0x000107c5c320(lVar11);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c61170(lVar11);
    func_0x000107c3e924(lVar12);
    func_0x000107c61170(lVar12);
  }
  func_0x000101d0b70c();
  func_0x000101d0b810();
  uVar4 = *(undefined8 *)(puVar10 + _DAT_112e1f520);
  puVar5 = &UNK_110473198;
  func_0x000107c613fc(&UNK_110473198,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,puVar10);
  pcStack_88 = FUN_101d0f980;
  puStack_a8 = puVar3;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_1104731b0;
  ppuVar13 = &puStack_a8;
  puStack_80 = puVar5;
  func_0x000107c60bc4(ppuVar13);
  puVar3 = puStack_80;
  func_0x000107c615f0(uVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c61170(uStack_b0);
  func_0x000107c61170(uStack_b8);
  func_0x000107c61170(uStack_c0);
  func_0x000107c61170(uStack_c8);
  func_0x000107c61170(uStack_d0);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lStack_d8);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar2);
  func_0x000107c615e8(uVar4);
  return puVar10;
}



/* Entry: 101d0aff0; end: 101d0b093;  */

void FUN_101d0aff0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lStack_40 = 0;
    uVar2 = 0;
    FUN_101d10314(0,0x112d4ed88,&PTR_PTR_1126b15c8);
    func_0x000107c5fc50(param_1,&lStack_40,uVar2);
    lVar1 = lStack_40;
    if (lStack_40 == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      FUN_101d0b094(lStack_40);
      func_0x000107c61170(param_2);
      func_0x000107c6142c(lVar1);
    }
  }
  return;
}



/* Entry: 101d0b094; end: 101d0b61f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0b094(undefined *param_1,undefined *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined auStack_78 [24];
  
  func_0x00010006c804();
  puVar14 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar16 = *(undefined **)(puVar14 + 0x10);
  }
  else {
    puVar16 = puVar14;
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar16 = param_1;
    }
    func_0x000107c60480();
  }
  puVar15 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar16 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar14 + 0x10) <= puVar7) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101d0b5e4);
            (*pcVar3)();
          }
          puVar4 = *(undefined **)(param_1 + (long)puVar7 * 8 + 0x20);
          func_0x000107c61174();
          puVar9 = param_2;
        }
        else {
          puVar4 = puVar7;
          puVar9 = param_1;
          FUN_101d0e4ec(puVar7,param_1,&PTR_PTR_1126b15c8,0x112d4ed88);
        }
        puVar12 = puVar7 + 1;
        if (SCARRY8((long)puVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d0b5e0);
          (*pcVar3)();
        }
        puVar5 = puVar4;
        func_0x000107c5d984();
        func_0x000107c61180();
        if (puVar5 != (undefined *)0x0) break;
        func_0x000107c61170(puVar4);
        param_2 = puVar9;
        puVar7 = puVar7 + 1;
        if (puVar12 == puVar16) goto LAB_101d0b2dc;
      }
      puVar6 = puVar5;
      func_0x000107c5faec();
      func_0x000107c61170(puVar5);
      func_0x000107c61174();
      puVar5 = puVar15;
      func_0x000107c61558();
      puVar7 = puVar6;
      param_2 = puVar9;
      puStack_a8 = puVar15;
      func_0x000100029284();
      uVar13 = (ulong)~(uint)param_2 & 1;
      lVar1 = *(long *)(puVar15 + 0x10) + uVar13;
      if (SCARRY8(*(long *)(puVar15 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101d0b604);
        (*pcVar3)();
      }
      if (*(long *)(puVar15 + 0x18) < lVar1) {
        FUN_101d0e808(lVar1,puVar5,0x112d64d40,&UNK_10da019d0);
        puVar7 = puVar6;
        puVar5 = puVar9;
        func_0x000100029284();
        if (((uint)param_2 & 1) != ((uint)puVar5 & 1)) goto LAB_101d0b610;
joined_r0x000101d0b278:
        uVar13 = (ulong)param_2 & 1;
        param_2 = puVar5;
        if (uVar13 != 0) goto LAB_101d0b234;
LAB_101d0b27c:
        puVar15 = puStack_a8;
        *(ulong *)(puStack_a8 + ((ulong)puVar7 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_a8 + ((ulong)puVar7 >> 6) * 8 + 0x40) | 1L << ((ulong)puVar7 & 0x3f)
        ;
        puVar2 = (undefined8 *)(*(long *)(puStack_a8 + 0x30) + (long)puVar7 * 0x10);
        *puVar2 = puVar6;
        puVar2[1] = puVar9;
        *(undefined **)(*(long *)(puStack_a8 + 0x38) + (long)puVar7 * 8) = puVar4;
        func_0x000107c61170();
        if (SCARRY8(*(long *)(puVar15 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d0b60c);
          (*pcVar3)();
        }
        *(long *)(puVar15 + 0x10) = *(long *)(puVar15 + 0x10) + 1;
        param_2 = puVar5;
      }
      else {
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = &UNK_10da019d0;
          FUN_101d0e6a8(0x112d64d40);
          goto joined_r0x000101d0b278;
        }
        puVar5 = param_2;
        if (((ulong)param_2 & 1) == 0) goto LAB_101d0b27c;
LAB_101d0b234:
        puVar15 = puStack_a8;
        uVar8 = *(undefined8 *)(*(long *)(puStack_a8 + 0x38) + (long)puVar7 * 8);
        *(undefined **)(*(long *)(puStack_a8 + 0x38) + (long)puVar7 * 8) = puVar4;
        func_0x000107c61170();
        func_0x000107c6142c(puVar9);
        func_0x000107c61170(uVar8);
      }
      puVar7 = puVar12;
    } while (puVar12 != puVar16);
  }
LAB_101d0b2dc:
  lVar1 = _DAT_112e1f530;
  puVar7 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_112e1f530,puVar7,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar15;
  func_0x000107c6142c(uVar8);
  puVar15 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar16 != (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar14 + 0x10) <= puVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101d0b5ec);
            (*pcVar3)();
          }
          puVar9 = *(undefined **)(param_1 + (long)puVar4 * 8 + 0x20);
          func_0x000107c61174();
          puVar12 = puVar7;
        }
        else {
          puVar9 = puVar4;
          puVar12 = param_1;
          FUN_101d0e4ec(puVar4,param_1,&PTR_PTR_1126b15c8,0x112d4ed88);
        }
        puVar5 = puVar4 + 1;
        if (SCARRY8((long)puVar4,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d0b5e8);
          (*pcVar3)();
        }
        puVar7 = puVar9;
        func_0x000107c5db08();
        func_0x000107c61180();
        if (puVar7 != (undefined *)0x0) break;
        func_0x000107c61170(puVar9);
        puVar7 = puVar12;
        puVar4 = puVar4 + 1;
        if (puVar5 == puVar16) goto LAB_101d0b4f8;
      }
      puVar6 = puVar7;
      func_0x000107c5faec();
      func_0x000107c61170(puVar7);
      func_0x000107c61174();
      puVar10 = puVar15;
      func_0x000107c61558();
      puVar4 = puVar6;
      puVar7 = puVar12;
      puStack_a8 = puVar15;
      func_0x000100029284();
      uVar13 = (ulong)~(uint)puVar7 & 1;
      lVar1 = *(long *)(puVar15 + 0x10) + uVar13;
      if (SCARRY8(*(long *)(puVar15 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101d0b608);
        (*pcVar3)();
      }
      if (*(long *)(puVar15 + 0x18) < lVar1) {
        FUN_101d0e808(lVar1,puVar10,0x112d64d40,&UNK_10da019d0);
        puVar4 = puVar6;
        puVar10 = puVar12;
        func_0x000100029284();
        if (((uint)puVar7 & 1) != ((uint)puVar10 & 1)) {
LAB_101d0b610:
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d0b620);
          (*pcVar3)();
        }
joined_r0x000101d0b494:
        uVar13 = (ulong)puVar7 & 1;
        puVar7 = puVar10;
        if (uVar13 != 0) goto LAB_101d0b450;
LAB_101d0b498:
        puVar15 = puStack_a8;
        *(ulong *)(puStack_a8 + ((ulong)puVar4 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_a8 + ((ulong)puVar4 >> 6) * 8 + 0x40) | 1L << ((ulong)puVar4 & 0x3f)
        ;
        puVar2 = (undefined8 *)(*(long *)(puStack_a8 + 0x30) + (long)puVar4 * 0x10);
        *puVar2 = puVar6;
        puVar2[1] = puVar12;
        *(undefined **)(*(long *)(puStack_a8 + 0x38) + (long)puVar4 * 8) = puVar9;
        func_0x000107c61170();
        if (SCARRY8(*(long *)(puVar15 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d0b610);
          (*pcVar3)();
        }
        *(long *)(puVar15 + 0x10) = *(long *)(puVar15 + 0x10) + 1;
        puVar7 = puVar10;
      }
      else {
        if (((ulong)puVar10 & 1) == 0) {
          puVar10 = &UNK_10da019d0;
          FUN_101d0e6a8(0x112d64d40);
          goto joined_r0x000101d0b494;
        }
        puVar10 = puVar7;
        if (((ulong)puVar7 & 1) == 0) goto LAB_101d0b498;
LAB_101d0b450:
        puVar15 = puStack_a8;
        uVar8 = *(undefined8 *)(*(long *)(puStack_a8 + 0x38) + (long)puVar4 * 8);
        *(undefined **)(*(long *)(puStack_a8 + 0x38) + (long)puVar4 * 8) = puVar9;
        func_0x000107c61170();
        func_0x000107c6142c(puVar12);
        func_0x000107c61170(uVar8);
      }
      puVar4 = puVar5;
    } while (puVar5 != puVar16);
  }
LAB_101d0b4f8:
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e1f538);
  *(undefined **)(unaff_x20 + _DAT_112e1f538) = puVar15;
  func_0x000107c6142c(uVar8);
  *(undefined1 *)(unaff_x20 + _DAT_112e1f540) = 1;
  func_0x000100070bfc();
  FUN_101d0c0bc();
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e1f518);
  puVar14 = &UNK_1104735f8;
  func_0x000107c613fc(&UNK_1104735f8,0x18,7);
  *(long *)(puVar14 + 0x10) = unaff_x20;
  uStack_88 = 0x101d102fc;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_110473610;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar14;
  func_0x000107c60bc4(ppuVar11);
  puVar14 = puStack_80;
  func_0x000107c61174(unaff_x20);
  func_0x000107c61574(puVar14);
  func_0x000107c4e524(uVar8);
  func_0x000107c60bd0(ppuVar11);
  return;
}



/* Entry: 101d0b620; end: 101d0b913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0b620(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112e1f520);
    puVar1 = &UNK_110473198;
    func_0x000107c613fc(&UNK_110473198,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_2);
    uStack_58 = 0x101d10304;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_110473638;
    ppuVar2 = &puStack_78;
    puStack_50 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101d0b914; end: 101d0b967;  */

void FUN_101d0b914(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_101d0b968();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101d0b968; end: 101d0bcf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0b968(void)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined *puVar18;
  ulong uVar19;
  undefined *apuStack_78 [3];
  
  puVar4 = *(undefined **)(unaff_x20 + _DAT_112e1f598);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_101d0f888(PTR___swiftEmptyArrayStorage_11034f1c8,0x112e1f5f0,&UNK_10da019d8);
    puVar16 = puVar4;
    func_0x000107c43aa4();
    func_0x000107c61180();
    puVar6 = (undefined *)0x0;
    FUN_101d10314(0,0x112d61f70,&PTR_PTR_1126b14e0);
    puVar7 = puVar16;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar16);
    if ((ulong)puVar7 >> 0x3e == 0) {
      puVar16 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar16 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar7) {
        puVar16 = puVar7;
      }
      func_0x000107c60480();
    }
    if (puVar16 != (undefined *)0x0) {
      uVar19 = 0;
      do {
        if (((ulong)puVar7 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101d0bc44);
            (*pcVar3)();
          }
          uVar8 = *(ulong *)(puVar7 + uVar19 * 8 + 0x20);
          func_0x000107c61174();
          puVar13 = puVar6;
        }
        else {
          uVar8 = uVar19;
          puVar13 = puVar7;
          FUN_101d0e4ec(uVar19,puVar7,&PTR_PTR_1126b14e0,0x112d61f70);
        }
        if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d0bc3c);
          (*pcVar3)();
        }
        puVar18 = (undefined *)(uVar19 + 1);
        func_0x000107c61174();
        uVar9 = uVar8;
        FUN_101d104ac();
        if (uVar9 == 0) {
          func_0x000107c61170(uVar8);
          puVar6 = puVar13;
        }
        else {
          uVar10 = uVar8;
          func_0x000107c42f24();
          func_0x000107c61180();
          uVar11 = uVar10;
          func_0x000107c5faec();
          func_0x000107c61170(uVar10);
          func_0x000107c61174();
          puVar12 = puVar5;
          func_0x000107c61558();
          uVar10 = uVar11;
          puVar14 = puVar13;
          apuStack_78[0] = puVar5;
          func_0x000100029284();
          uVar15 = (ulong)~(uint)puVar14 & 1;
          lVar1 = *(long *)(puVar5 + 0x10) + uVar15;
          if (SCARRY8(*(long *)(puVar5 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101d0bc40);
            (*pcVar3)();
          }
          if (*(long *)(puVar5 + 0x18) < lVar1) {
            FUN_101d0e808(lVar1,puVar12,0x112e1f5f0,&UNK_10da019d8);
            uVar10 = uVar11;
            puVar6 = puVar13;
            func_0x000100029284();
            puVar5 = apuStack_78[0];
            if (((uint)puVar14 & 1) != ((uint)puVar6 & 1)) {
              func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101d0bcf8);
              (*pcVar3)();
            }
          }
          else {
            puVar6 = puVar14;
            puVar5 = apuStack_78[0];
            if (((ulong)puVar12 & 1) == 0) {
              puVar6 = &UNK_10da019d8;
              FUN_101d0e6a8(0x112e1f5f0);
              puVar5 = apuStack_78[0];
            }
          }
          apuStack_78[0] = puVar5;
          if (((ulong)puVar14 & 1) == 0) {
            *(ulong *)(puVar5 + (uVar10 >> 6) * 8 + 0x40) =
                 *(ulong *)(puVar5 + (uVar10 >> 6) * 8 + 0x40) | 1L << (uVar10 & 0x3f);
            puVar2 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar10 * 0x10);
            *puVar2 = uVar11;
            puVar2[1] = (ulong)puVar13;
            *(ulong *)(*(long *)(puVar5 + 0x38) + uVar10 * 8) = uVar9;
            func_0x000107c61170(uVar8);
            func_0x000107c61170(uVar9);
            if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101d0bc48);
              (*pcVar3)();
            }
            *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
          }
          else {
            uVar17 = *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar10 * 8);
            *(ulong *)(*(long *)(puVar5 + 0x38) + uVar10 * 8) = uVar9;
            func_0x000107c61170(uVar8);
            func_0x000107c61170(uVar9);
            func_0x000107c6142c(puVar13);
            func_0x000107c61170(uVar17);
          }
        }
        uVar19 = uVar19 + 1;
      } while (puVar18 != puVar16);
    }
    func_0x000107c6142c(puVar7);
    func_0x00010006c804();
    lVar1 = _DAT_112e1f548;
    func_0x000107c61428(unaff_x20 + _DAT_112e1f548,apuStack_78,1,0);
    uVar17 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar5;
    func_0x000107c61434(puVar5);
    func_0x000107c6142c(uVar17);
    func_0x000100070bfc();
    func_0x000107c6142c(puVar5);
    func_0x000107c615e8(puVar4);
  }
  return;
}



/* Entry: 101d0bcf8; end: 101d0be4f; -[SCMapPeopleFriendsProviderV2 initWithActiveUserID:birthdayProvider:usernameProvider:displayNameProvider:bitmojiAvatarIdProvider:bitmojiSelfieIdProvider:friendsFeedDataCoordinator:snapchattersDataFetcher:snapchattersDataTracker:snapchattersObservableRepository:] */

undefined8
FUN_101d0bcf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  FUN_101d0f9b4(param_3,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                param_12);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  return param_3;
}



/* Entry: 101d0be50; end: 101d0bec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0be50(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112e1f5b0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4ff64();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101d0bec8; end: 101d0bf4f; -[SCMapPeopleFriendsProviderV2 dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0bec8(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112e1f5b0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4ff64();
    func_0x000107c615e8(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101d0bf50; end: 101d0c0bb; -[SCMapPeopleFriendsProviderV2 .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101d0bf70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d0c060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d0c080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d0c0a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d0c084) */
/* WARNING: Removing unreachable block (ram,0x000101d0c064) */
/* WARNING: Removing unreachable block (ram,0x000101d0bf74) */
/* WARNING: Removing unreachable block (ram,0x000101d0c0a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0bf50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e1f568 + 8))
  ;
  return;
}



/* Entry: 101d0c0bc; end: 101d0c5a3;  */

/* WARNING: Removing unreachable block (ram,0x000101d0c598) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0c0bc(double param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long extraout_x8;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  ulong *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  func_0x000107c5eea0(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  dVar20 = param_1;
  (**(code **)(lVar12 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e1f528);
  func_0x00010006c804();
  lVar4 = _DAT_112e1f530;
  func_0x000107c61428(unaff_x20 + _DAT_112e1f530,auStack_88,0,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  func_0x000107c61434(lVar4);
  uStack_a8 = uVar13;
  func_0x000100070bfc();
  puVar15 = (ulong *)(lVar4 + 0x40);
  uVar17 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if (-uVar17 < 0x40) {
    uVar19 = ~(-1L << (-uVar17 & 0x3f));
  }
  uVar19 = uVar19 & *puVar15;
  func_0x000107c61434(lVar4);
  lVar12 = 0;
  puVar14 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar18 = lVar12;
joined_r0x000101d0c1e0:
  do {
    while (uVar19 == 0) {
      bVar3 = SCARRY8(lVar12,1);
      lVar12 = lVar12 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0c4c8);
        (*pcVar1)();
      }
      if ((long)(0x3f - uVar17 >> 6) <= lVar12) {
        FUN_101d102f4(lVar4,puVar15,~uVar17,lVar18,0);
        if (((long)puVar14 < 0) || (((ulong)puVar14 >> 0x3e & 1) != 0)) {
          puVar16 = puVar14;
          func_0x000107c60480();
          puVar10 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar16 != (ulong *)0x0) {
            func_0x000107c6157c(puVar14);
            puVar10 = puVar16;
            func_0x000100f63250(puVar16,0);
            puVar15 = puVar16;
            puVar11 = puVar14;
            func_0x000100f63690(puVar10 + 4);
            func_0x000107c6142c();
            if (puVar11 != puVar16) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0c51c);
              (*pcVar1)();
            }
          }
        }
        else {
          func_0x000107c6157c(puVar14);
          puVar10 = puVar14;
        }
        puStack_90 = puVar10;
        FUN_101d0ea9c(&puStack_90);
        func_0x000107c61574(puVar14);
        puVar14 = puStack_90;
        if (((long)puStack_90 < 0) || (((ulong)puStack_90 >> 0x3e & 1) != 0)) {
          puVar16 = puStack_90;
          func_0x000107c60480();
          puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puVar16 = (ulong *)puStack_90[2];
          puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
        if (puVar16 == (ulong *)0x0) {
LAB_101d0c534:
          func_0x000107c61574(puVar14);
          func_0x00010006c804();
          uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e1f558);
          *(undefined **)(unaff_x20 + _DAT_112e1f558) = puVar9;
          func_0x000107c6142c(uVar13);
          func_0x000100070bfc();
          func_0x000107c6142c(lVar4);
          return;
        }
        uVar19 = 0;
        if (((ulong)puVar14 & 0xc000000000000001) == 0) goto LAB_101d0c374;
LAB_101d0c464:
        uVar17 = uVar19;
        puVar15 = puVar14;
        FUN_101d0e4ec(uVar19,puVar14,&PTR_PTR_1126b15c8,0x112d4ed88);
        do {
          if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0c4cc);
            (*pcVar1)();
          }
          uVar6 = uVar17;
          func_0x00010901c5a4();
          if ((uVar6 & 1) == 0) {
            uVar6 = uVar17;
            func_0x000107c439a8();
            func_0x000107c61180();
            uVar5 = uVar6;
            func_0x000107c5c3a4();
            func_0x000107c61180();
            func_0x000107c61170(uVar6);
            uVar6 = uVar5;
            func_0x000107c3e1d0();
            func_0x000107c61180();
            func_0x000107c61170(uVar5);
            if (uVar6 == 0) goto LAB_101d0c35c;
            func_0x000107c61170(uVar6);
            uVar6 = uVar17;
            func_0x000107c5d984();
            func_0x000107c61180();
            if (uVar6 == 0) goto LAB_101d0c35c;
            uVar5 = uVar6;
            func_0x000107c5faec();
            puVar10 = puVar15;
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar17);
            puVar7 = puVar9;
            func_0x000107c61558();
            puVar8 = puVar9;
            if (((ulong)puVar7 & 1) == 0) {
              puVar10 = (ulong *)(*(long *)(puVar9 + 0x10) + 1);
              puVar8 = (undefined *)0x0;
              func_0x0001000d182c(0,puVar10,1,puVar9);
            }
            uVar17 = *(ulong *)(puVar8 + 0x10);
            puVar11 = (ulong *)(uVar17 + 1);
            puVar9 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar17) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              puVar10 = puVar11;
              func_0x0001000d182c(puVar9,puVar11,1,puVar8);
            }
            *(ulong **)(puVar9 + 0x10) = puVar11;
            *(ulong *)(puVar9 + uVar17 * 0x10 + 0x20) = uVar5;
            *(ulong **)(puVar9 + uVar17 * 0x10 + 0x28) = puVar15;
            puVar15 = puVar10;
          }
          else {
LAB_101d0c35c:
            func_0x000107c61170(uVar17);
          }
          if ((ulong *)(uVar19 + 1) == puVar16) goto LAB_101d0c534;
          uVar19 = uVar19 + 1;
          if (((ulong)puVar14 & 0xc000000000000001) != 0) goto LAB_101d0c464;
LAB_101d0c374:
          if (puVar14[2] <= uVar19) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0c4d0);
            (*pcVar1)();
          }
          uVar17 = puVar14[uVar19 + 4];
          func_0x000107c61174();
        } while( true );
      }
      uVar19 = puVar15[lVar12];
    }
    uVar6 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar19 = uVar19 - 1 & uVar19;
    uVar5 = *(ulong *)(*(long *)(lVar4 + 0x38) + LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) * 8 +
                      lVar12 * 0x200);
    func_0x000107c61174();
    uVar6 = uVar5;
    func_0x000107c5d984();
    func_0x000107c61180();
    dVar21 = dVar20;
    lVar18 = lVar12;
    if (uVar6 == 0) {
LAB_101d0c1d4:
      func_0x000107c61170(uVar5);
      dVar20 = dVar21;
      goto joined_r0x000101d0c1e0;
    }
    func_0x000107c61170();
    uVar6 = uVar5;
    func_0x000107c439a8();
    func_0x000107c61180();
    dVar21 = dVar20;
    if (uVar6 == 0) goto LAB_101d0c1d4;
    func_0x000107c3d6c0();
    func_0x000107c61170(uVar6);
    dVar21 = param_1 - dVar20;
    bVar3 = false;
    bVar2 = true;
    if (0.0 < dVar20) {
      bVar3 = false;
      bVar2 = true;
      if (!NAN(dVar21)) {
        bVar3 = dVar21 == 604800.0;
        bVar2 = 604800.0 <= dVar21;
      }
    }
    if (bVar2 && !bVar3) goto LAB_101d0c1d4;
    puVar16 = puVar14;
    func_0x000107c61558();
    puStack_90 = puVar14;
    if (((ulong)puVar16 & 1) == 0) {
      func_0x0001010673e4(0,puVar14[2] + 1,1);
    }
    uVar6 = puStack_90[2];
    if (puStack_90[3] >> 1 <= uVar6) {
      func_0x0001010673e4(1 < puStack_90[3],uVar6 + 1,1);
    }
    puStack_90[2] = uVar6 + 1;
    puStack_90[uVar6 + 4] = uVar5;
    puVar14 = puStack_90;
    dVar20 = dVar21;
  } while( true );
}



/* Entry: 101d0c5a4; end: 101d0c5eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0c5a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e1f508);
  uVar1 = 0;
  func_0x000103a2e6e0(0);
  func_0x000103a2e3c4();
  func_0x000107c4d664(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101d0c5ec; end: 101d0c6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d0c5ec(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_58 [24];
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      (param_1 == *(ulong *)(unaff_x20 + _DAT_112e1f568) &&
       param_2 == ((ulong *)(unaff_x20 + _DAT_112e1f568))[1])) ||
     (uVar1 = param_1, func_0x000107c605b8(), (uVar1 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    func_0x00010006c804();
    lVar3 = _DAT_112e1f530;
    func_0x000107c61428(unaff_x20 + _DAT_112e1f530,auStack_58,0x20,0);
    lVar3 = *(long *)(unaff_x20 + lVar3);
    if (*(long *)(lVar3 + 0x10) == 0) {
      uVar2 = 0;
    }
    else {
      func_0x000107c61434(lVar3);
      func_0x000100029284();
      if ((param_2 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
        func_0x000107c61174();
      }
      func_0x000107c6142c(lVar3);
    }
    func_0x000107c614a8(auStack_58);
    func_0x000100070bfc();
  }
  return uVar2;
}



/* Entry: 101d0c6fc; end: 101d0c963;  */

undefined8 FUN_101d0c6fc(long param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 8);
      func_0x000107c61174(uVar1);
    }
    func_0x000107c6142c(param_3);
  }
  return uVar1;
}



/* Entry: 101d0c964; end: 101d0cc23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0c964(undefined *param_1,long param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_80;
  undefined auStack_78 [24];
  
  puVar7 = auStack_78;
  func_0x000107c61428(param_3 + 0x10,puVar7,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_2 == 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (param_1 != (undefined *)0x0) {
        puVar2 = param_1;
      }
      puVar13 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
      if ((ulong)puVar2 >> 0x3e == 0) {
        puVar12 = *(undefined **)(puVar13 + 0x10);
      }
      else {
        puVar12 = puVar13;
        if ((undefined *)0x7fffffffffffffff < puVar2) {
          puVar12 = puVar2;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434(param_1);
      if (puVar12 == (undefined *)0x0) {
        puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar8 = (undefined *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar2 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar13 + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101d0cc10);
                (*pcVar5)();
              }
              puVar6 = *(undefined **)(puVar2 + (long)puVar8 * 8 + 0x20);
              func_0x000107c61174();
              puVar10 = puVar7;
            }
            else {
              puVar6 = puVar8;
              puVar10 = puVar2;
              FUN_101d0e4ec(puVar8,puVar2,&PTR_PTR_1126b15c8,0x112d4ed88);
            }
            puVar1 = puVar8 + 1;
            if (SCARRY8((long)puVar8,1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101d0cc0c);
              (*pcVar5)();
            }
            puVar7 = puVar6;
            func_0x00010901c5a4();
            if (((ulong)puVar7 & 1) == 0) break;
LAB_101d0ca0c:
            func_0x000107c61170(puVar6);
            puVar7 = puVar10;
            puVar8 = puVar8 + 1;
            if (puVar1 == puVar12) goto LAB_101d0cb88;
          }
          puVar7 = puVar6;
          func_0x000107c439a8();
          func_0x000107c61180();
          puVar9 = puVar7;
          func_0x000107c5c3a4();
          func_0x000107c61180();
          func_0x000107c61170(puVar7);
          puVar7 = puVar9;
          func_0x000107c3e1d0();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          if (puVar7 == (undefined *)0x0) goto LAB_101d0ca0c;
          func_0x000107c61170(puVar7);
          puVar9 = puVar6;
          func_0x000107c5d984();
          func_0x000107c61180();
          if (puVar9 == (undefined *)0x0) goto LAB_101d0ca0c;
          puVar8 = puVar9;
          func_0x000107c5faec();
          puVar7 = puVar10;
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar6);
          puVar6 = puStack_80;
          func_0x000107c61558();
          if (((ulong)puVar6 & 1) == 0) {
            puVar7 = (undefined *)(*(long *)(puStack_80 + 0x10) + 1);
            puStack_80 = (undefined *)0x0;
            func_0x0001000d182c(0,puVar7,1);
          }
          uVar3 = *(ulong *)(puStack_80 + 0x10);
          puVar6 = (undefined *)(uVar3 + 1);
          if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar3) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puStack_80 + 0x18));
            puVar7 = puVar6;
            func_0x0001000d182c(puVar9,puVar6,1,puStack_80);
            puStack_80 = puVar9;
          }
          *(undefined **)(puStack_80 + 0x10) = puVar6;
          *(undefined **)(puStack_80 + uVar3 * 0x10 + 0x20) = puVar8;
          *(undefined **)(puStack_80 + uVar3 * 0x10 + 0x28) = puVar10;
          puVar8 = puVar1;
        } while (puVar1 != puVar12);
      }
LAB_101d0cb88:
      func_0x000107c6142c(puVar2);
      lVar4 = _DAT_112e1f528;
      uVar11 = *(undefined8 *)(param_3 + _DAT_112e1f528);
      func_0x000107c6157c(uVar11);
      func_0x00010006c804();
      func_0x000107c61574(uVar11);
      uVar11 = *(undefined8 *)(param_3 + *param_4);
      *(undefined **)(param_3 + *param_4) = puStack_80;
      func_0x000107c6142c(uVar11);
      uVar11 = *(undefined8 *)(param_3 + lVar4);
      func_0x000107c6157c(uVar11);
      func_0x000100070bfc();
      func_0x000107c61170(param_3);
      func_0x000107c61574(uVar11);
    }
    else {
      func_0x000107c61170();
    }
  }
  return;
}



/* Entry: 101d0cc24; end: 101d0cc4f; -[SCMapPeopleFriendsProviderV2 init] */

void FUN_101d0cc24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapPeopleServicesSwiftImplementation.MapPeopleFriendsProviderV2",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0cc50);
  (*pcVar1)();
}



/* Entry: 101d0cc50; end: 101d0cc5f; -[SCMapPeopleFriendsProviderV2 friendsUpdateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0cc50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e1f508));
  return;
}



/* Entry: 101d0cc60; end: 101d0ccc3; -[SCMapPeopleFriendsProviderV2 hasLoadedMutualFriends] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101d0cc60(long param_1)

{
  undefined1 uVar1;
  
  func_0x000107c61174();
  func_0x00010006c804();
  uVar1 = *(undefined1 *)(param_1 + _DAT_112e1f540);
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101d0ccc4; end: 101d0cd7f; -[SCMapPeopleFriendsProviderV2 friendTypeForUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101d0ccc4(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x000107c5faec();
  if ((param_3 == *(ulong *)(param_1 + _DAT_112e1f568) &&
       param_2 == ((ulong *)(param_1 + _DAT_112e1f568))[1]) ||
     (uVar1 = param_3, func_0x000107c605b8(), (uVar1 & 1) != 0)) {
    uVar1 = 1;
  }
  else {
    func_0x000107c61174(param_1);
    FUN_101d0c5ec(param_3,param_2);
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_3;
      FUN_101d10724();
      func_0x000107c61170(param_3);
    }
    func_0x000107c61170(param_1);
  }
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 101d0cd80; end: 101d0d1eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0cd80(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar11 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar11 = param_2 >> 0x38 & 0xf;
  }
  if (uVar11 == 0) {
    return;
  }
  uVar11 = *(ulong *)(unaff_x20 + _DAT_112e1f568);
  uVar4 = ((ulong *)(unaff_x20 + _DAT_112e1f568))[1];
  if ((param_1 == uVar11 && param_2 == uVar4) ||
     (uVar1 = param_1, func_0x000107c605b8(param_1,param_2,uVar11,uVar4,0), (uVar1 & 1) != 0)) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112e1f578);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      return;
    }
    uStack_70 = 0;
    uStack_68 = 0;
    func_0x000107c5fae8(lVar3,&uStack_70);
    func_0x000107c61170(lVar3);
    uVar4 = uStack_68;
    uVar11 = uStack_70;
    if (uStack_68 == 0) {
      return;
    }
    lVar2 = *(long *)(unaff_x20 + _DAT_112e1f580);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      uVar1 = 0;
      uVar5 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 == 0) {
        uVar1 = 0;
        uVar5 = 0;
      }
      else {
        uStack_70 = 0;
        uStack_68 = 0;
        func_0x000107c5fae8(lVar3,&uStack_70);
        func_0x000107c61170(lVar3);
        uVar1 = uStack_68;
        uVar5 = 0;
        if (uStack_68 != 0) {
          uVar5 = uStack_70;
        }
      }
    }
    lVar2 = *(long *)(unaff_x20 + _DAT_112e1f588);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      uStack_78 = 0;
      uVar6 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 == 0) {
        uStack_78 = 0;
        uVar6 = 0;
      }
      else {
        uStack_70 = 0;
        uStack_68 = 0;
        func_0x000107c5fae8(lVar3,&uStack_70);
        func_0x000107c61170(lVar3);
        uStack_78 = 0;
        uVar6 = uStack_68;
        if (uStack_68 != 0) {
          uStack_78 = uStack_70;
        }
      }
    }
    lVar2 = *(long *)(unaff_x20 + _DAT_112e1f590);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
LAB_101d0d090:
      uVar9 = 0;
      uVar12 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 == 0) goto LAB_101d0d090;
      uStack_70 = 0;
      uStack_68 = 0;
      func_0x000107c5fae8(lVar3,&uStack_70);
      func_0x000107c61170(lVar3);
      uVar9 = 0;
      uVar12 = uStack_68;
      if (uStack_68 != 0) {
        uVar9 = uStack_70;
      }
    }
    if (uVar1 != 0) {
      uVar10 = uVar5 & 0xffffffffffff;
      if ((uVar1 & 0x2000000000000000) != 0) {
        uVar10 = uVar1 >> 0x38 & 0xf;
      }
      if (uVar10 != 0) goto LAB_101d0d0c8;
      func_0x000107c6142c(uVar1);
    }
    func_0x000107c61434(uVar4);
    uVar1 = uVar4;
    uVar5 = uVar11;
LAB_101d0d0c8:
    func_0x000103a2db6c(0);
    func_0x000107c610f8();
    func_0x000107c61434(param_2);
    func_0x000103a2d704(param_1,param_2,uVar11,uVar4,uVar5,uVar1,uStack_78,uVar6,uVar9,uVar12);
    return;
  }
  FUN_101d0c5ec();
  if (param_1 == 0) {
    return;
  }
  uVar11 = param_1;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (uVar11 == 0) {
    func_0x000107c61170(param_1);
    return;
  }
  uVar4 = uVar11;
  func_0x000107c5faec();
  uVar1 = param_2;
  func_0x000107c61170(uVar11);
  uVar11 = param_1;
  func_0x000107c5db08();
  func_0x000107c61180();
  if (uVar11 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
    return;
  }
  uVar5 = uVar11;
  func_0x000107c5faec();
  uVar9 = uVar1;
  func_0x000107c61170(uVar11);
  uVar11 = param_1;
  func_0x00010901d7c4(param_1);
  func_0x000107c61180();
  uVar6 = uVar11;
  func_0x000107c5faec();
  uVar12 = uVar9;
  func_0x000107c61170(uVar11);
  uVar11 = param_1;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  uVar10 = uVar12;
  if (uVar11 == 0) {
LAB_101d0d10c:
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    uVar13 = uVar11;
    func_0x000107c3e978();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    uVar10 = uVar12;
    if (uVar13 == 0) goto LAB_101d0d10c;
    uVar11 = uVar13;
    func_0x000107c5faec(uVar13);
    uVar10 = uVar12;
    func_0x000107c61170(uVar13);
  }
  uVar13 = param_1;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (uVar13 != 0) {
    uVar7 = uVar13;
    func_0x000107c3ea1c();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    if (uVar7 != 0) {
      uVar13 = uVar7;
      func_0x000107c5faec();
      func_0x000107c61170(uVar7);
      goto LAB_101d0d16c;
    }
  }
  uVar13 = 0;
  uVar10 = 0;
LAB_101d0d16c:
  uVar8 = 0;
  func_0x000103a2db6c(0);
  func_0x000107c610f8();
  func_0x000103a2d704(uVar8,uVar4,param_2,uVar5,uVar1,uVar6,uVar9,uVar11,uVar12,uVar13,uVar10);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101d0d1ec; end: 101d0d253; -[SCMapPeopleFriendsProviderV2 mapPersonForUserId:] */

void FUN_101d0d1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101d0cd80(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101d0d254; end: 101d0d463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101d0d254(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  uint uVar5;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112e1f568);
  uVar4 = ((ulong *)(unaff_x20 + _DAT_112e1f568))[1];
  if ((param_1 == uVar3 && param_2 == uVar4) ||
     (uVar2 = param_1, func_0x000107c605b8(param_1,param_2,uVar3,uVar4,0), (uVar2 & 1) != 0)) {
    uVar3 = *(ulong *)(unaff_x20 + _DAT_112e1f570);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170();
      if (uVar4 != 0) {
        func_0x000107c5eea0(puVar6);
        func_0x000107c5ee70();
        (**(code **)(lVar7 + 8))(puVar6,lVar1);
        param_1 = uVar3;
        func_0x00010901cc40();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        uVar3 = uVar4;
        func_0x00010901cc40();
        func_0x000107c61180();
        if (param_1 != 0) {
          if (uVar3 == 0) {
            uVar5 = 0;
            uVar3 = uVar4;
          }
          else {
            FUN_101d10314(0,0x112e1f5b8,&PTR_PTR_1126d78b8);
            func_0x000107c61174(param_1);
            uVar2 = param_1;
            func_0x000107c60118();
            uVar5 = (uint)uVar2;
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar4);
            uVar3 = param_1;
          }
          goto LAB_101d0d430;
        }
        func_0x000107c61170(uVar4);
        if (uVar3 == 0) {
          uVar5 = 1;
          goto LAB_101d0d440;
        }
        uVar5 = 0;
        goto LAB_101d0d43c;
      }
    }
  }
  else {
    FUN_101d0c5ec(param_1,param_2);
    if (param_1 != 0) {
      uVar3 = param_1;
      func_0x000107c5eea0(puVar6);
      func_0x000107c5ee70();
      (**(code **)(lVar7 + 8))(puVar6,lVar1);
      uVar4 = param_1;
      func_0x00010901cdb0(param_1,uVar3);
      uVar5 = (uint)uVar4;
LAB_101d0d430:
      func_0x000107c61170(param_1);
LAB_101d0d43c:
      func_0x000107c61170(uVar3);
      goto LAB_101d0d440;
    }
  }
  uVar5 = 0;
LAB_101d0d440:
  return uVar5 & 1;
}



/* Entry: 101d0d464; end: 101d0d4cb; -[SCMapPeopleFriendsProviderV2 isBirthdayTodayForUserId:] */

uint FUN_101d0d464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101d0d254(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 101d0d4cc; end: 101d0d5af; -[SCMapPeopleFriendsProviderV2 isStoryMutedForUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101d0d4cc(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000107c5faec();
  if ((param_3 == *(ulong *)(param_1 + _DAT_112e1f568) &&
       param_2 == ((ulong *)(param_1 + _DAT_112e1f568))[1]) ||
     (uVar2 = param_3, func_0x000107c605b8(), (uVar2 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    func_0x000107c61174(param_1);
    FUN_101d0c5ec(param_3,param_2);
    if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar1 = param_3;
      func_0x000107c439a8();
      func_0x000107c61180();
      if (uVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar1;
        func_0x000107c4a528();
        func_0x000107c61170(param_3);
        param_3 = uVar1;
      }
      func_0x000107c61170(param_3);
    }
    func_0x000107c61170(param_1);
  }
  func_0x000107c6142c(param_2);
  return uVar2;
}



/* Entry: 101d0d5b0; end: 101d0d67f; -[SCMapPeopleFriendsProviderV2 hasUnviewedFeedItemForPerson:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101d0d5b0(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x00010006c804();
  lVar2 = _DAT_112e1f548;
  plVar1 = (long *)(param_3 + _DAT_112fcd610);
  func_0x000107c61428(param_1 + _DAT_112e1f548,auStack_58,0x20,0);
  lVar3 = *plVar1;
  FUN_101d0c6fc(lVar3,plVar1[1],*(undefined8 *)(param_1 + lVar2));
  func_0x000107c614a8(auStack_58);
  if (lVar3 != 0) {
    func_0x000107c61170(lVar3);
  }
  func_0x000100070bfc();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return lVar3 != 0;
}



/* Entry: 101d0d680; end: 101d0d737; -[SCMapPeopleFriendsProviderV2 unviewedFriendFeedItemsbyUserID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0d680(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61174();
  func_0x00010006c804();
  lVar1 = _DAT_112e1f548;
  func_0x000107c61428(param_1 + _DAT_112e1f548,auStack_58,0,0);
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  func_0x000107c61434(uVar4);
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x000103a2e1bc(0);
  uVar3 = uVar4;
  func_0x000107c5f9dc(uVar4,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101d0d738; end: 101d0d86b;  */

undefined8 FUN_101d0d738(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5fe14(uVar7,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar9 = 0;
  puVar8 = (ulong *)(param_1 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar8;
  uStack_68 = uVar7;
  lVar1 = lVar9;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar7 = *puVar2;
      uVar3 = puVar2[1];
      func_0x000107c61434(uVar3);
      func_0x000100403b00(auStack_78,uVar7,uVar3);
      func_0x000107c6142c(uStack_70);
      lVar9 = lVar1;
    }
    bVar6 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar6) break;
    if ((long)(0x3f - uVar10 >> 6) <= lVar1) {
      FUN_101d102f4(param_1,puVar8,~uVar10,lVar9,0);
      return uStack_68;
    }
    uVar11 = puVar8[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101d0d86c);
  (*pcVar5)();
}



/* Entry: 101d0d86c; end: 101d0d91b; -[SCMapPeopleFriendsProviderV2 allFriendsUserIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0d86c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61174();
  func_0x00010006c804();
  lVar1 = _DAT_112e1f530;
  func_0x000107c61428(param_1 + _DAT_112e1f530,auStack_58,0,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x000107c61434(uVar2);
  FUN_101d0d738();
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
  uVar3 = uVar2;
  func_0x000107c5fe08(uVar2,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101d0d91c; end: 101d0d927; -[SCMapPeopleFriendsProviderV2 bestFriendsUserIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0d91c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  func_0x00010006c804();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e1f550);
  func_0x000107c61434(uVar2);
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
  uVar1 = uVar2;
  func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101d0d928; end: 101d0d933; -[SCMapPeopleFriendsProviderV2 recentFriendsUserIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0d928(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  func_0x00010006c804();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e1f560);
  func_0x000107c61434(uVar2);
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
  uVar1 = uVar2;
  func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101d0d934; end: 101d0d93f; -[SCMapPeopleFriendsProviderV2 recentlyAddedFriendsUserIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0d934(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  func_0x00010006c804();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e1f558);
  func_0x000107c61434(uVar2);
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
  uVar1 = uVar2;
  func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101d0d940; end: 101d0d9c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0d940(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  func_0x00010006c804();
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  func_0x000107c61434(uVar2);
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
  uVar1 = uVar2;
  func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101d0d9c8; end: 101d0d9cb; -[SCMapPeopleFriendsProviderV2 didStartSnapchattersUpdateDataRequest:] */

void FUN_101d0d9c8(void)

{
  return;
}



/* Entry: 101d0d9cc; end: 101d0de93;  */

void FUN_101d0d9cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  if (param_1 != 0) {
    puVar3 = &UNK_110473288;
    func_0x000107c613fc(&UNK_110473288,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    puVar4 = &UNK_1104732b0;
    func_0x000107c613fc(&UNK_1104732b0,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_101d10178;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = FUN_101d101b4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101d0df08;
    puStack_90 = &UNK_1104732c8;
    ppuVar5 = &puStack_a8;
    puStack_80 = puVar4;
    func_0x000107c60bc4();
    puVar4 = puStack_80;
    func_0x000107c61174();
    func_0x000107c61434(param_3);
    func_0x000107c61574(puVar4);
    pcStack_88 = FUN_101d0e088;
    puStack_80 = (undefined *)0x0;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101d0e08c;
    puStack_90 = &UNK_1104732f0;
    ppuVar6 = &puStack_a8;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_80);
    puVar4 = &UNK_110473328;
    func_0x000107c613fc(&UNK_110473328,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = param_2;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    puVar7 = &UNK_110473350;
    func_0x000107c613fc(&UNK_110473350,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_101d101f4;
    *(undefined **)(puVar7 + 0x18) = puVar4;
    pcStack_88 = FUN_101d10220;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101bd3ff8;
    puStack_90 = &UNK_110473368;
    ppuVar8 = &puStack_a8;
    puStack_80 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_80;
    func_0x000107c61174();
    func_0x000107c61434(param_3);
    func_0x000107c61574(puVar7);
    pcStack_88 = FUN_101d0e170;
    puStack_80 = (undefined *)0x0;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101d0e174;
    puStack_90 = &UNK_110473390;
    ppuVar9 = &puStack_a8;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_80);
    puVar7 = &UNK_1104733c8;
    func_0x000107c613fc(&UNK_1104733c8,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = param_2;
    *(undefined8 *)(puVar7 + 0x18) = param_3;
    puVar10 = &UNK_1104733f0;
    func_0x000107c613fc(&UNK_1104733f0,0x20,7);
    *(code **)(puVar10 + 0x10) = FUN_101d10250;
    *(undefined **)(puVar10 + 0x18) = puVar7;
    pcStack_88 = FUN_101d10258;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101bd41dc;
    puStack_90 = &UNK_110473408;
    ppuVar11 = &puStack_a8;
    puStack_80 = puVar10;
    func_0x000107c60bc4();
    puVar10 = puStack_80;
    func_0x000107c61174();
    func_0x000107c61434(param_3);
    func_0x000107c61574(puVar10);
    puVar10 = &UNK_110473440;
    func_0x000107c613fc(&UNK_110473440,0x20,7);
    *(undefined8 *)(puVar10 + 0x10) = param_2;
    *(undefined8 *)(puVar10 + 0x18) = param_3;
    puVar12 = &UNK_110473468;
    func_0x000107c613fc(&UNK_110473468,0x20,7);
    *(code **)(puVar12 + 0x10) = FUN_101d102a4;
    *(undefined **)(puVar12 + 0x18) = puVar10;
    pcStack_88 = FUN_101d102ac;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = (code *)0x101d0e2d0;
    puStack_90 = &UNK_110473480;
    ppuVar13 = &puStack_a8;
    puStack_80 = puVar12;
    func_0x000107c60bc4();
    puVar12 = puStack_80;
    func_0x000107c61174();
    func_0x000107c61434(param_3);
    func_0x000107c61574(puVar12);
    puVar12 = &UNK_1104734b8;
    func_0x000107c613fc(&UNK_1104734b8,0x18,7);
    *(undefined8 *)(puVar12 + 0x10) = param_2;
    puVar14 = &UNK_1104734e0;
    func_0x000107c613fc(&UNK_1104734e0,0x20,7);
    *(code **)(puVar14 + 0x10) = FUN_101d102cc;
    *(undefined **)(puVar14 + 0x18) = puVar12;
    pcStack_88 = FUN_101d102d4;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101d0e354;
    puStack_90 = &UNK_1104734f8;
    ppuVar15 = &puStack_a8;
    puStack_80 = puVar14;
    func_0x000107c60bc4();
    puVar14 = puStack_80;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar14);
    pcStack_88 = FUN_101d0e3b8;
    puStack_80 = (undefined *)0x0;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101d0e3bc;
    puStack_90 = &UNK_110473520;
    ppuVar16 = &puStack_a8;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_80);
    pcStack_88 = FUN_101d0e350;
    puStack_80 = (undefined *)0x0;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101d0e354;
    puStack_90 = &UNK_110473548;
    ppuVar17 = &puStack_a8;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_80);
    func_0x000107c4c57c(param_1);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar12);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d0de94);
  (*pcVar2)();
}



/* Entry: 101d0de94; end: 101d0df07;  */

/* WARNING: Possible PIC construction at 0x000101d0dedc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d0dee0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0de94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  
  uVar1 = *(undefined8 *)(in_stack_00000038 + _DAT_112e1f508);
  func_0x000103a2e6e0(0);
  func_0x000103a2e3d4(in_stack_00000040);
  func_0x000107c4d664(uVar1,param_2,in_stack_00000040);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_stack_00000040);
  return;
}



/* Entry: 101d0df08; end: 101d0e087;  */

/* WARNING: Possible PIC construction at 0x000101d0e048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d0e058: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d0e04c) */
/* WARNING: Removing unreachable block (ram,0x000101d0e05c) */

void FUN_101d0df08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,long param_9,
                  long param_10,long param_11)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_68;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar6 = param_2;
  if (param_6 == 0) {
    uStack_98 = 0;
    uStack_68 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_98 = param_6;
    uStack_68 = uVar6;
  }
  if (param_7 == 0) {
    uStack_a0 = 0;
    uVar4 = 0;
  }
  else {
    func_0x000107c5faec();
    uVar4 = uVar6;
    uStack_a0 = param_7;
  }
  if (param_9 == 0) {
    param_9 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c5faec();
    uVar3 = uVar6;
  }
  if (param_10 == 0) {
    param_10 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    uVar2 = uVar6;
  }
  if (param_11 == 0) {
    param_11 = 0;
    uVar6 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c61174(param_2);
  uVar5 = param_8;
  func_0x000107c61174(param_8);
  (*pcVar1)(param_2,param_3,param_4,param_5,uStack_98,uStack_68,uStack_a0,uVar4,param_8,param_9,
            uVar3,param_10,uVar2,param_11,uVar6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
  return;
}



/* Entry: 101d0e088; end: 101d0e08b;  */

void FUN_101d0e088(void)

{
  return;
}



/* Entry: 101d0e08c; end: 101d0e0fb;  */

void FUN_101d0e08c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = 0;
  FUN_101d10314(0,0x112e1f5e8,&PTR_PTR_1126b1940);
  func_0x000107c5fc54(param_2,uVar2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101d0e0fc; end: 101d0e16f;  */

/* WARNING: Possible PIC construction at 0x000101d0e144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d0e148) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0e0fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  
  uVar1 = *(undefined8 *)(in_stack_00000008 + _DAT_112e1f508);
  func_0x000103a2e6e0(0);
  func_0x000103a2e3d4(in_stack_00000010);
  func_0x000107c4d664(uVar1,param_2,in_stack_00000010);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_stack_00000010);
  return;
}



/* Entry: 101d0e170; end: 101d0e173;  */

void FUN_101d0e170(void)

{
  return;
}



/* Entry: 101d0e174; end: 101d0e1e7;  */

void FUN_101d0e174(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101d0e1e8; end: 101d0e307;  */

/* WARNING: Possible PIC construction at 0x000101d0e230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d0e234) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0e1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_5 + _DAT_112e1f508);
  func_0x000103a2e6e0(0);
  func_0x000103a2e3d4(param_6);
  func_0x000107c4d664(uVar1,param_2,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 101d0e308; end: 101d0e34f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0e308(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_4 + _DAT_112e1f508);
  uVar1 = 0;
  func_0x000103a2e6e0(0);
  func_0x000103a2e3c4();
  func_0x000107c4d664(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101d0e350; end: 101d0e353;  */

void FUN_101d0e350(void)

{
  return;
}



/* Entry: 101d0e354; end: 101d0e3b7;  */

void FUN_101d0e354(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101d0e3b8; end: 101d0e3bb;  */

void FUN_101d0e3b8(void)

{
  return;
}



/* Entry: 101d0e3bc; end: 101d0e3ff;  */

void FUN_101d0e3bc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c5fc54(param_2,PTR___sSSN_11034da80);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101d0e400; end: 101d0e47f; -[SCMapPeopleFriendsProviderV2 didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

/* WARNING: Possible PIC construction at 0x000101d0e45c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d0e460) */

void FUN_101d0e400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_5);
  FUN_101d0ffe4(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101d0e480; end: 101d0e4eb; -[SCMapPeopleFriendsProviderV2 didEndSnapchattersFetchDataRequest:withSuccess:error:] */

/* WARNING: Possible PIC construction at 0x000101d0e4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d0e4c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d0e4c0) */
/* WARNING: Removing unreachable block (ram,0x000101d0e4cc) */

void FUN_101d0e480(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  code *pcVar1;
  
  if (param_4 == 0) {
    return;
  }
  if (param_3 != 0) {
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c3e1c8();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0e4ec);
  (*pcVar1)();
}



/* Entry: 101d0e4ec; end: 101d0e6a7;  */

ulong FUN_101d0e4ec(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d0e5d0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d0e5d4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101d10314(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d0e6a8);
  (*pcVar2)();
}



/* Entry: 101d0e6a8; end: 101d0e807;  */

void FUN_101d0e6a8(void)

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
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_101d0e774;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_101d0e774:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101d0e808);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101d0e7e0;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_101d0e7e0:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 101d0e808; end: 101d0ea9b;  */

void FUN_101d0e808(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101d0ea68:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101d0ea98);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_101d0ea68;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101d0ea9c);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101d0ea9c; end: 101d0ebab;  */

void FUN_101d0ea9c(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_101a7c0b4();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0;
      FUN_101d10314(0,0x112d4ed88,&PTR_PTR_1126b15c8);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_101d0ebac(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_101d0f144(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 101d0ebac; end: 101d0f143;  */

void FUN_101d0ebac(double param_1,long *param_2,undefined8 param_3,long *param_4,long param_5)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x21;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar17 = param_4[1];
  if (0 < lVar17) {
    lVar10 = 0;
    do {
      lVar4 = lVar10 + 1;
      if (lVar4 < lVar17) {
        lVar14 = *param_4;
        lVar3 = *(long *)(lVar14 + lVar4 * 8);
        lVar19 = *(long *)(lVar14 + lVar10 * 8);
        func_0x000107c61174();
        func_0x000107c61174();
        lVar4 = lVar3;
        func_0x000107c439a8();
        func_0x000107c61180();
        dVar21 = param_1;
        dVar23 = 0.0;
        if (lVar4 != 0) {
          func_0x000107c3d6c0();
          dVar21 = param_1;
          func_0x000107c61170(lVar4);
          dVar23 = param_1;
        }
        lVar4 = lVar19;
        func_0x000107c439a8();
        func_0x000107c61180();
        lVar5 = lVar19;
        param_1 = dVar21;
        dVar22 = 0.0;
        if (lVar4 != 0) {
          func_0x000107c3d6c0();
          param_1 = dVar21;
          func_0x000107c61170(lVar3);
          lVar5 = lVar4;
          lVar3 = lVar19;
          dVar22 = dVar21;
        }
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar5);
        lVar3 = lVar10 + 2;
        lVar4 = lVar3;
        if (lVar3 < lVar17) {
          plVar18 = (long *)(lVar14 + lVar10 * 8 + 0x10);
          do {
            lVar4 = plVar18[-1];
            lVar19 = *plVar18;
            func_0x000107c61174();
            func_0x000107c61174();
            lVar14 = lVar19;
            func_0x000107c439a8();
            func_0x000107c61180();
            if (lVar14 == 0) {
              dVar24 = 0.0;
              dVar21 = param_1;
            }
            else {
              func_0x000107c3d6c0();
              dVar21 = param_1;
              func_0x000107c61170(lVar14);
              dVar24 = param_1;
            }
            lVar14 = lVar4;
            func_0x000107c439a8();
            func_0x000107c61180();
            if (lVar14 == 0) {
              func_0x000107c61170(lVar19);
              func_0x000107c61170(lVar4);
              bVar2 = 0.0 <= dVar24;
              param_1 = dVar21;
            }
            else {
              func_0x000107c3d6c0();
              param_1 = dVar21;
              func_0x000107c61170(lVar19);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar14);
              bVar2 = dVar21 <= dVar24;
            }
            lVar4 = lVar3;
            if (dVar23 < dVar22 == bVar2) break;
            plVar18 = plVar18 + 1;
            lVar3 = lVar3 + 1;
            lVar4 = lVar17;
          } while (lVar17 != lVar3);
        }
        if (dVar23 < dVar22) {
          if (lVar4 < lVar10) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0f118);
            (*pcVar1)();
          }
          if (lVar10 < lVar4) {
            lVar19 = *param_4;
            puVar11 = (undefined8 *)(lVar19 + lVar4 * 8);
            puVar12 = (undefined8 *)(lVar19 + lVar10 * 8);
            lVar3 = lVar4;
            lVar17 = lVar10;
            do {
              puVar11 = puVar11 + -1;
              lVar3 = lVar3 + -1;
              if (lVar17 != lVar3) {
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0f138);
                  (*pcVar1)();
                }
                uVar13 = *puVar12;
                *puVar12 = *puVar11;
                *puVar11 = uVar13;
              }
              lVar17 = lVar17 + 1;
              puVar12 = puVar12 + 1;
            } while (lVar17 < lVar3);
          }
        }
      }
      lVar17 = param_4[1];
      lVar3 = lVar4;
      if (lVar4 < lVar17) {
        if (SBORROW8(lVar4,lVar10)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0f114);
          (*pcVar1)();
        }
        if (lVar4 - lVar10 < param_5) {
          if (SCARRY8(lVar10,param_5)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0f11c);
            (*pcVar1)();
          }
          lVar19 = lVar10 + param_5;
          if (lVar17 <= lVar10 + param_5) {
            lVar19 = lVar17;
          }
          if (lVar19 < lVar10) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0f120);
            (*pcVar1)();
          }
          if (lVar4 != lVar19) {
            lVar17 = *param_4;
            plVar18 = (long *)(lVar17 + lVar4 * 8 + -8);
            lVar14 = lVar10 - lVar4;
            do {
              lVar5 = *(long *)(lVar17 + lVar4 * 8);
              lVar3 = lVar14;
              plVar16 = plVar18;
              do {
                lVar20 = *plVar16;
                func_0x000107c61174();
                func_0x000107c61174();
                lVar6 = lVar5;
                func_0x000107c439a8();
                func_0x000107c61180();
                if (lVar6 == 0) {
                  dVar23 = 0.0;
                  dVar21 = param_1;
                }
                else {
                  func_0x000107c3d6c0();
                  dVar21 = param_1;
                  func_0x000107c61170(lVar6);
                  dVar23 = param_1;
                }
                param_1 = dVar21;
                lVar6 = lVar20;
                func_0x000107c439a8();
                func_0x000107c61180();
                if (lVar6 == 0) {
                  func_0x000107c61170(lVar5);
                  func_0x000107c61170(lVar20);
                  if (0.0 <= dVar23) break;
                }
                else {
                  func_0x000107c3d6c0();
                  dVar21 = param_1;
                  func_0x000107c61170(lVar5);
                  func_0x000107c61170(lVar20);
                  func_0x000107c61170(lVar6);
                  bVar2 = param_1 <= dVar23;
                  param_1 = dVar21;
                  if (bVar2) break;
                }
                if (lVar17 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0f124);
                  (*pcVar1)();
                }
                lVar6 = *plVar16;
                lVar5 = plVar16[1];
                *plVar16 = lVar5;
                plVar16[1] = lVar6;
                bVar2 = lVar3 != -1;
                lVar3 = lVar3 + 1;
                plVar16 = plVar16 + -1;
              } while (bVar2);
              lVar4 = lVar4 + 1;
              plVar18 = plVar18 + 1;
              lVar14 = lVar14 + -1;
              lVar3 = lVar19;
            } while (lVar4 != lVar19);
          }
        }
      }
      puVar9 = puStack_58;
      if (lVar3 < lVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0f108);
        (*pcVar1)();
      }
      puVar7 = puStack_58;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar15 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar15) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000a91e0(puVar9,uVar15 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar15 + 1;
      *(long *)(puVar9 + uVar15 * 0x10 + 0x20) = lVar10;
      *(long *)(puVar9 + uVar15 * 0x10 + 0x28) = lVar3;
      puStack_58 = puVar9;
      if (*param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0f13c);
        (*pcVar1)();
      }
      FUN_101d0f298(&puStack_58,*param_2,param_4);
      puVar9 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101d0f0d0;
      lVar17 = param_4[1];
      lVar10 = lVar3;
    } while (lVar3 < lVar17);
  }
  puVar9 = puStack_58;
  lVar17 = *param_2;
  if (lVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0f144);
    (*pcVar1)();
  }
  puVar7 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar15 = *(ulong *)(puVar9 + 0x10);
  while (puStack_58 = puVar9, 1 < uVar15) {
    lVar10 = *param_4;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0f140);
      (*pcVar1)();
    }
    lVar19 = uVar15 - 1;
    lVar3 = *(long *)(puVar9 + uVar15 * 0x10);
    lVar4 = *(long *)(puVar9 + lVar19 * 0x10 + 0x28);
    FUN_101d0f500(lVar10 + lVar3 * 8,lVar10 + *(long *)(puVar9 + lVar19 * 0x10 + 0x20) * 8,
                  lVar10 + lVar4 * 8,lVar17);
    if (unaff_x21 != 0) break;
    if (lVar4 < lVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0f10c);
      (*pcVar1)();
    }
    puVar7 = puVar9;
    func_0x000107c61558();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar15 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0f110);
      (*pcVar1)();
    }
    *(long *)(puVar9 + uVar15 * 0x10) = lVar3;
    *(long *)((long)(puVar9 + uVar15 * 0x10) + 8) = lVar4;
    puStack_58 = puVar9;
    func_0x0001000a97cc(lVar19);
    puVar9 = puStack_58;
    uVar15 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_101d0f0d0:
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 101d0f144; end: 101d0f297;  */

void FUN_101d0f144(double param_1,long param_2,long param_3,long param_4,long *param_5)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  
  if (param_4 != param_3) {
    lVar7 = *param_5;
    plVar5 = (long *)(lVar7 + param_4 * 8 + -8);
    param_2 = param_2 - param_4;
    do {
      lVar3 = *(long *)(lVar7 + param_4 * 8);
      plVar8 = plVar5;
      lVar9 = param_2;
      do {
        lVar6 = *plVar8;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar4 = lVar3;
        func_0x000107c439a8();
        func_0x000107c61180();
        if (lVar4 == 0) {
          dVar11 = 0.0;
          dVar10 = param_1;
        }
        else {
          func_0x000107c3d6c0();
          dVar10 = param_1;
          func_0x000107c61170(lVar4);
          dVar11 = param_1;
        }
        param_1 = dVar10;
        lVar4 = lVar6;
        func_0x000107c439a8();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar6);
          if (0.0 <= dVar11) break;
        }
        else {
          func_0x000107c3d6c0();
          dVar10 = param_1;
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar4);
          bVar2 = param_1 <= dVar11;
          param_1 = dVar10;
          if (bVar2) break;
        }
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0f298);
          (*pcVar1)();
        }
        lVar4 = *plVar8;
        lVar3 = plVar8[1];
        *plVar8 = lVar3;
        plVar8[1] = lVar4;
        bVar2 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        plVar8 = plVar8 + -1;
      } while (bVar2);
      param_4 = param_4 + 1;
      plVar5 = plVar5 + 1;
      param_2 = param_2 + -1;
    } while (param_4 != param_3);
  }
  return;
}



/* Entry: 101d0f298; end: 101d0f4ff;  */

undefined8 FUN_101d0f298(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_101d0f36c;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f4e8);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_101d0f3d0:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f4d8);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f4e0);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f4c0);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f4c4);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f4cc);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f4d4);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_101d0f36c:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f4c8);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f4d0);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f4dc);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f4e4);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_101d0f3d0;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f4ec);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f4b4);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f500);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_101d0f500(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f4b8);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f4bc);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 101d0f500; end: 101d0f887;  */

undefined8 FUN_101d0f500(double param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar11 = (long)param_3 - (long)param_2;
  lVar3 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar3 = lVar11;
  }
  lVar3 = lVar3 >> 3;
  lVar12 = (long)param_4 - (long)param_3;
  lVar5 = lVar12 + 7;
  if (-1 < lVar12) {
    lVar5 = lVar12;
  }
  lVar5 = lVar5 >> 3;
  if (lVar3 < lVar5) {
    if (((param_5 < param_2) || (param_2 + lVar3 <= param_5)) || (param_5 != param_2)) {
      func_0x000107c610b8(param_5,param_2,lVar3 << 3);
    }
    plVar8 = param_5 + lVar3;
    plVar9 = param_2;
    if (7 < lVar11) {
      do {
        if (param_4 <= param_3) break;
        lVar11 = *param_3;
        lVar5 = *param_5;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar3 = lVar11;
        func_0x000107c439a8();
        func_0x000107c61180();
        if (lVar3 == 0) {
          dVar14 = 0.0;
          dVar13 = param_1;
        }
        else {
          func_0x000107c3d6c0();
          dVar13 = param_1;
          func_0x000107c61170(lVar3);
          dVar14 = param_1;
        }
        lVar3 = lVar5;
        func_0x000107c439a8();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar11);
          func_0x000107c61170(lVar5);
          param_1 = dVar13;
          if (dVar14 < 0.0) goto LAB_101d0f5d8;
LAB_101d0f6ac:
          plVar10 = param_5 + 1;
          plVar7 = param_5;
        }
        else {
          func_0x000107c3d6c0();
          param_1 = dVar13;
          func_0x000107c61170(lVar11);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar3);
          bVar2 = dVar13 <= dVar14;
          dVar13 = param_1;
          if (bVar2) goto LAB_101d0f6ac;
LAB_101d0f5d8:
          plVar10 = param_5;
          plVar7 = param_3;
          param_3 = param_3 + 1;
          param_1 = dVar13;
        }
        param_5 = plVar10;
        if (plVar9 != plVar7) {
          *plVar9 = *plVar7;
        }
        plVar9 = plVar9 + 1;
      } while (param_5 < plVar8);
    }
  }
  else {
    if (((param_5 < param_3) || (param_3 + lVar5 <= param_5)) || (param_5 != param_3)) {
      func_0x000107c610b8(param_5,param_3,lVar5 << 3);
    }
    plVar7 = param_5 + lVar5;
    plVar8 = plVar7;
    plVar9 = param_3;
    if ((param_2 < param_3) && (7 < lVar12)) {
LAB_101d0f6ec:
      plVar6 = param_3 + -1;
      dVar13 = param_1;
      plVar10 = param_4;
      do {
        param_4 = plVar10 + -1;
        plVar8 = plVar7 + -1;
        lVar11 = *plVar8;
        lVar5 = *plVar6;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar3 = lVar11;
        func_0x000107c439a8();
        func_0x000107c61180();
        if (lVar3 == 0) {
          dVar15 = 0.0;
          dVar14 = dVar13;
        }
        else {
          func_0x000107c3d6c0();
          dVar14 = dVar13;
          func_0x000107c61170(lVar3);
          dVar15 = dVar13;
        }
        dVar13 = dVar14;
        lVar3 = lVar5;
        func_0x000107c439a8();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar11);
          func_0x000107c61170(lVar5);
          param_1 = dVar13;
          if (dVar15 < 0.0) goto LAB_101d0f7d8;
        }
        else {
          func_0x000107c3d6c0();
          param_1 = dVar13;
          func_0x000107c61170(lVar11);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar3);
          bVar2 = dVar15 < dVar13;
          dVar13 = param_1;
          if (bVar2) goto LAB_101d0f7d8;
        }
        if (plVar10 != plVar7) {
          *param_4 = *plVar8;
        }
        plVar9 = param_3;
        plVar7 = plVar8;
        plVar10 = param_4;
        if (plVar8 <= param_5) break;
      } while( true );
    }
  }
LAB_101d0f820:
  uVar4 = (long)plVar8 - (long)param_5;
  uVar1 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((plVar9 != param_5) || ((long *)((long)param_5 + (uVar1 & 0xfffffffffffffff8)) <= plVar9)) {
    func_0x000107c610b8(plVar9,param_5,((long)uVar1 >> 3) << 3);
  }
  return 1;
LAB_101d0f7d8:
  if (plVar10 != param_3) {
    *param_4 = *plVar6;
  }
  plVar8 = plVar7;
  plVar9 = plVar6;
  if ((plVar6 <= param_2) || (param_3 = plVar6, plVar7 <= param_5)) goto LAB_101d0f820;
  goto LAB_101d0f6ec;
}



/* Entry: 101d0f888; end: 101d0f97f;  */

undefined * FUN_101d0f888(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f97c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101d0f980);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101d0f980; end: 101d0f9b3;  */

void FUN_101d0f980(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101d0b968();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101d0f9b4; end: 101d0ffe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101d0f9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
             undefined8 param_9,long param_10,long param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined **ppuVar11;
  long extraout_x8;
  long unaff_x20;
  long lVar12;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  lStack_c0 = param_11;
  lStack_b8 = param_10;
  uStack_d8 = param_9;
  uStack_f0 = param_1;
  uStack_e8 = param_2;
  uStack_e0 = param_6;
  uStack_c8 = param_7;
  lStack_b0 = param_8;
  func_0x000107c614f0();
  lVar4 = 0;
  func_0x000107c5f804();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = _DAT_112e1f508;
  lVar8 = (long)&uStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar10) = puVar5;
  lVar10 = _DAT_112e1f510;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar10) = puVar5;
  lVar10 = _DAT_112e1f518;
  puVar5 = &UNK_10da01980;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar10) = puVar5;
  lVar10 = _DAT_112e1f520;
  (**(code **)(lVar12 + 0x68))
            (lVar8,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
             ,lVar4);
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar6 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f00ce60);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar6);
  (**(code **)(lVar12 + 8))(lVar8,lVar4);
  *(undefined **)(unaff_x20 + lVar10) = puVar5;
  lVar10 = _DAT_112e1f528;
  uVar6 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar10) = uVar6;
  lVar10 = _DAT_112e1f530;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101d0f888(PTR___swiftEmptyArrayStorage_11034f1c8,0x112d64d40,&UNK_10da019d0);
  *(undefined **)(unaff_x20 + lVar10) = puVar7;
  lVar10 = _DAT_112e1f538;
  puVar7 = puVar5;
  FUN_101d0f888(puVar5,0x112d64d40,&UNK_10da019d0);
  *(undefined **)(unaff_x20 + lVar10) = puVar7;
  *(undefined1 *)(unaff_x20 + _DAT_112e1f540) = 0;
  lVar10 = _DAT_112e1f548;
  puVar7 = puVar5;
  FUN_101d0f888(puVar5,0x112e1f5f0,&UNK_10da019d8);
  lVar12 = lStack_b0;
  lVar8 = lStack_b8;
  lVar4 = lStack_c0;
  uVar3 = uStack_c8;
  uVar2 = uStack_d8;
  uVar6 = uStack_e0;
  *(undefined **)(unaff_x20 + lVar10) = puVar7;
  *(undefined **)(unaff_x20 + _DAT_112e1f550) = puVar5;
  *(undefined **)(unaff_x20 + _DAT_112e1f558) = puVar5;
  *(undefined **)(unaff_x20 + _DAT_112e1f560) = puVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e1f568);
  *puVar1 = uStack_f0;
  puVar1[1] = uStack_e8;
  *(undefined8 *)(unaff_x20 + _DAT_112e1f570) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e1f578) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e1f580) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e1f588) = uStack_e0;
  *(undefined8 *)(unaff_x20 + _DAT_112e1f590) = uStack_c8;
  *(long *)(unaff_x20 + _DAT_112e1f598) = lStack_b0;
  *(undefined8 *)(unaff_x20 + _DAT_112e1f5a0) = uStack_d8;
  *(long *)(unaff_x20 + _DAT_112e1f5a8) = lStack_c0;
  *(long *)(unaff_x20 + _DAT_112e1f5b0) = lStack_b8;
  puVar5 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  puVar9 = &stack0xffffffffffffff88;
  func_0x000107c61154(puVar9,puVar5);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 != 0) {
    func_0x000107c3d740();
    func_0x000107c615e8(lVar8);
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar4 != 0) {
    lVar10 = lVar4;
    func_0x000107c4d32c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    lVar4 = lVar10;
    func_0x000107c4da88(lVar10);
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    puVar7 = &UNK_110473198;
    func_0x000107c613fc(&UNK_110473198,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,puVar9);
    uStack_88 = 0x101d104a4;
    puStack_a8 = puVar5;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_101218f4c;
    puStack_90 = &UNK_1104735c0;
    ppuVar11 = &puStack_a8;
    puStack_80 = puVar7;
    func_0x000107c60bc4(ppuVar11);
    func_0x000107c61574(puStack_80);
    lVar10 = lVar4;
    func_0x000107c5c320(lVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(lVar4);
    func_0x000107c3e924(lVar10);
    func_0x000107c61170(lVar10);
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar12 != 0) {
    lVar10 = lVar12;
    func_0x000107c43aa8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar12);
    lVar4 = lVar10;
    func_0x000107c4da88(lVar10);
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    puVar7 = &UNK_110473198;
    func_0x000107c613fc(&UNK_110473198,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,puVar9);
    uStack_88 = 0x101d104a0;
    puStack_a8 = puVar5;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_101218f4c;
    puStack_90 = &UNK_110473598;
    ppuVar11 = &puStack_a8;
    puStack_80 = puVar7;
    func_0x000107c60bc4(ppuVar11);
    func_0x000107c61574(puStack_80);
    lVar10 = lVar4;
    func_0x000107c5c320(lVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(lVar4);
    func_0x000107c3e924(lVar10);
    func_0x000107c61170(lVar10);
  }
  func_0x000101d0b70c();
  func_0x000101d0b810();
  uVar6 = *(undefined8 *)(puVar9 + _DAT_112e1f520);
  puVar7 = &UNK_110473198;
  func_0x000107c613fc(&UNK_110473198,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,puVar9);
  uStack_88 = 0x101d104a8;
  puStack_a8 = puVar5;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_110473570;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar11);
  puVar5 = puStack_80;
  func_0x000107c615f0(uVar6);
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(uVar6);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c615e8(uVar6);
  return puVar9;
}



/* Entry: 101d0ffe4; end: 101d1014b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0ffe4(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  if ((param_2 & 1) != 0) {
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d1014c);
      (*pcVar1)();
    }
    lVar2 = param_1;
    func_0x000107c3e1d8();
    func_0x000107c61180();
    puVar5 = PTR___swiftEmptySetSingleton_11034f1d8;
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      puVar4 = (undefined *)0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61534();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      *(long *)(puVar4 + 0x20) = lVar3;
      *(ulong *)(puVar4 + 0x28) = param_2;
      puVar5 = puVar4;
      func_0x000100403a6c();
      func_0x000107c61588(puVar4);
      func_0x000100bcb1dc(puVar4 + 0x20);
    }
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e1f518);
    puVar4 = &UNK_110473238;
    func_0x000107c613fc(&UNK_110473238,0x28,7);
    *(long *)(puVar4 + 0x10) = param_1;
    *(long *)(puVar4 + 0x18) = unaff_x20;
    *(undefined **)(puVar4 + 0x20) = puVar5;
    pcStack_60 = FUN_101d1016c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110473250;
    ppuVar6 = &puStack_80;
    puStack_58 = puVar4;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_58;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(uVar7);
    func_0x000107c60bd0(ppuVar6);
  }
  return;
}



/* Entry: 101d1014c; end: 101d1016b;  */

void FUN_101d1014c(void)

{
  func_0x000107c61168(&PTR_PTR_1128026f0);
  return;
}



/* Entry: 101d1016c; end: 101d10177;  */

void FUN_101d1016c(void)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x20);
  if (lVar1 != 0) {
    puVar4 = &UNK_110473288;
    func_0x000107c613fc(&UNK_110473288,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar7;
    *(undefined8 *)(puVar4 + 0x18) = uVar20;
    puVar5 = &UNK_1104732b0;
    func_0x000107c613fc(&UNK_1104732b0,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_101d10178;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = FUN_101d101b4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101d0df08;
    puStack_90 = &UNK_1104732c8;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4();
    puVar5 = puStack_80;
    func_0x000107c61174();
    func_0x000107c61434(uVar20);
    func_0x000107c61574(puVar5);
    pcStack_88 = FUN_101d0e088;
    puStack_80 = (undefined *)0x0;
    puStack_a8 = puVar2;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101d0e08c;
    puStack_90 = &UNK_1104732f0;
    ppuVar8 = &puStack_a8;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_80);
    puVar5 = &UNK_110473328;
    func_0x000107c613fc(&UNK_110473328,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar7;
    *(undefined8 *)(puVar5 + 0x18) = uVar20;
    puVar9 = &UNK_110473350;
    func_0x000107c613fc(&UNK_110473350,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_101d101f4;
    *(undefined **)(puVar9 + 0x18) = puVar5;
    pcStack_88 = FUN_101d10220;
    puStack_a8 = puVar2;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101bd3ff8;
    puStack_90 = &UNK_110473368;
    ppuVar10 = &puStack_a8;
    puStack_80 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar9 = puStack_80;
    func_0x000107c61174();
    func_0x000107c61434(uVar20);
    func_0x000107c61574(puVar9);
    pcStack_88 = FUN_101d0e170;
    puStack_80 = (undefined *)0x0;
    puStack_a8 = puVar2;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101d0e174;
    puStack_90 = &UNK_110473390;
    ppuVar11 = &puStack_a8;
    func_0x000107c60bc4(ppuVar11);
    func_0x000107c61574(puStack_80);
    puVar9 = &UNK_1104733c8;
    func_0x000107c613fc(&UNK_1104733c8,0x20,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar7;
    *(undefined8 *)(puVar9 + 0x18) = uVar20;
    puVar12 = &UNK_1104733f0;
    func_0x000107c613fc(&UNK_1104733f0,0x20,7);
    *(code **)(puVar12 + 0x10) = FUN_101d10250;
    *(undefined **)(puVar12 + 0x18) = puVar9;
    pcStack_88 = FUN_101d10258;
    puStack_a8 = puVar2;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101bd41dc;
    puStack_90 = &UNK_110473408;
    ppuVar13 = &puStack_a8;
    puStack_80 = puVar12;
    func_0x000107c60bc4();
    puVar12 = puStack_80;
    func_0x000107c61174();
    func_0x000107c61434(uVar20);
    func_0x000107c61574(puVar12);
    puVar12 = &UNK_110473440;
    func_0x000107c613fc(&UNK_110473440,0x20,7);
    *(undefined8 *)(puVar12 + 0x10) = uVar7;
    *(undefined8 *)(puVar12 + 0x18) = uVar20;
    puVar14 = &UNK_110473468;
    func_0x000107c613fc(&UNK_110473468,0x20,7);
    *(code **)(puVar14 + 0x10) = FUN_101d102a4;
    *(undefined **)(puVar14 + 0x18) = puVar12;
    pcStack_88 = FUN_101d102ac;
    puStack_a8 = puVar2;
    uStack_a0 = 0x42000000;
    pcStack_98 = (code *)0x101d0e2d0;
    puStack_90 = &UNK_110473480;
    ppuVar15 = &puStack_a8;
    puStack_80 = puVar14;
    func_0x000107c60bc4();
    puVar14 = puStack_80;
    func_0x000107c61174();
    func_0x000107c61434(uVar20);
    func_0x000107c61574(puVar14);
    puVar14 = &UNK_1104734b8;
    func_0x000107c613fc(&UNK_1104734b8,0x18,7);
    *(undefined8 *)(puVar14 + 0x10) = uVar7;
    puVar16 = &UNK_1104734e0;
    func_0x000107c613fc(&UNK_1104734e0,0x20,7);
    *(code **)(puVar16 + 0x10) = FUN_101d102cc;
    *(undefined **)(puVar16 + 0x18) = puVar14;
    pcStack_88 = FUN_101d102d4;
    puStack_a8 = puVar2;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101d0e354;
    puStack_90 = &UNK_1104734f8;
    ppuVar17 = &puStack_a8;
    puStack_80 = puVar16;
    func_0x000107c60bc4();
    puVar16 = puStack_80;
    func_0x000107c61174(uVar7);
    func_0x000107c61574(puVar16);
    pcStack_88 = FUN_101d0e3b8;
    puStack_80 = (undefined *)0x0;
    puStack_a8 = puVar2;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101d0e3bc;
    puStack_90 = &UNK_110473520;
    ppuVar18 = &puStack_a8;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_80);
    pcStack_88 = FUN_101d0e350;
    puStack_80 = (undefined *)0x0;
    puStack_a8 = puVar2;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101d0e354;
    puStack_90 = &UNK_110473548;
    ppuVar19 = &puStack_a8;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_80);
    func_0x000107c4c57c(lVar1);
    func_0x000107c60bd0(ppuVar19);
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(puVar14);
    func_0x000107c61574(puVar12);
    func_0x000107c61574(puVar9);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101d0de94);
  (*pcVar3)();
}



/* Entry: 101d10178; end: 101d101b3;  */

void FUN_101d10178(void)

{
  FUN_101d0de94();
  return;
}



/* Entry: 101d101b4; end: 101d101f3;  */

void FUN_101d101b4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d101f4; end: 101d1021f;  */

void FUN_101d101f4(void)

{
  FUN_101d0e0fc();
  return;
}



/* Entry: 101d10220; end: 101d1024f;  */

void FUN_101d10220(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d10250; end: 101d10257;  */

/* WARNING: Possible PIC construction at 0x000101d0e230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d0e234) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d10250(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e1f508);
  func_0x000103a2e6e0(0);
  func_0x000103a2e3d4(uVar1);
  func_0x000107c4d664(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101d10258; end: 101d10277;  */

void FUN_101d10258(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d10278; end: 101d102a3;  */

void FUN_101d10278(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d102a4; end: 101d102ab;  */

/* WARNING: Possible PIC construction at 0x000101d0e2a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d0e2a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d102a4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e1f508);
  func_0x000103a2e6e0(0);
  func_0x000103a2e3d4(uVar1);
  func_0x000107c4d664(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101d102ac; end: 101d102cb;  */

void FUN_101d102ac(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d102cc; end: 101d102d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d102cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e1f508);
  uVar1 = 0;
  func_0x000103a2e6e0(0);
  func_0x000103a2e3c4();
  func_0x000107c4d664(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101d102d4; end: 101d102f3;  */

void FUN_101d102d4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d102f4; end: 101d10313;  */

void FUN_101d102f4(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101d10314; end: 101d10353;  */

void FUN_101d10314(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101d10354; end: 101d10393;  */

void FUN_101d10354(void)

{
  FUN_101d0c964();
  return;
}



/* Entry: 101d10394; end: 101d103bb;  */

void FUN_101d10394(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104736e8;
  if (lRam0000000112e1f5f8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e1f5f8 = param_1;
  }
  return;
}



/* Entry: 101d103bc; end: 101d103ff;  */

void FUN_101d103bc(long param_1,long *param_2,long param_3)

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



/* Entry: 101d10400; end: 101d104ab;  */

void FUN_101d10400(long param_1,long param_2)

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



/* Entry: 101d104ac; end: 101d10723;  */

ulong FUN_101d104ac(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar7 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12_00;
  uVar2 = param_1;
  func_0x000100bf377c();
  if ((int)uVar2 != 0) {
    uVar2 = param_1;
    func_0x000107c3d15c();
    func_0x000107c61180();
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c42168();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      func_0x000107c5ee94(lVar9,uVar3);
      func_0x000107c61170(uVar3);
      (**(code **)(lVar11 + 0x20))(lVar8,lVar9,lVar1);
      uVar2 = param_1;
      func_0x000107c3d15c();
      func_0x000107c61180();
      if (uVar2 != 0) {
        uVar3 = uVar2;
        func_0x000107c4cda8();
        func_0x000107c61180();
        func_0x000107c61170(uVar2);
        if (uVar3 != 0) {
          uVar2 = uVar3;
          func_0x000107cfdba8();
          uVar4 = uVar3;
          func_0x000107cfd54c();
          func_0x000107c61180();
          if (uVar4 != 0) {
            uVar2 = uVar4;
            func_0x000107c5b348();
            func_0x000107c61180();
            if (uVar2 == 0) {
              func_0x000107c61170(uVar3);
              func_0x000107c61170(uVar4);
            }
            else {
              uVar5 = uVar2;
              func_0x000107c44b24();
              func_0x000107c61170(uVar2);
              func_0x000107c61170(uVar3);
              func_0x000107c61170(uVar4);
              if ((uVar5 & 1) != 0) {
                uVar10 = 1;
                goto LAB_101d1069c;
              }
            }
            uVar10 = 2;
LAB_101d1069c:
            uVar2 = param_1;
            func_0x000107c42f24(param_1);
            func_0x000107c61180();
            uVar3 = uVar2;
            func_0x000107c5faec();
            func_0x000107c61170(uVar2);
            (**(code **)(lVar11 + 0x10))(puVar7,lVar8,lVar1);
            uVar6 = 0;
            func_0x000103a2e1bc(0);
            func_0x000107c610f8();
            func_0x000103a2dd40(uVar3,lVar9,uVar10,puVar7,uVar6);
            func_0x000107c61170(param_1);
            (**(code **)(lVar11 + 8))(lVar8,lVar1);
            return uVar3;
          }
          func_0x000107c61170(uVar3);
          if ((uVar2 & 1) != 0) {
            uVar10 = 3;
            goto LAB_101d1069c;
          }
        }
      }
      (**(code **)(lVar11 + 8))(lVar8,lVar1);
    }
  }
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 101d10724; end: 101d10997;  */

void FUN_101d10724(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uVar2 = unaff_x20;
  func_0x000107c49ac4();
  if ((uVar2 & 1) == 0) {
    func_0x000107c439a8();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      uVar2 = unaff_x20;
      func_0x000107c5c3a4();
      func_0x000107c61180();
      if (uVar2 == 0) {
        func_0x000107c61170(unaff_x20);
      }
      else {
        uStack_78 = 0;
        puVar3 = &UNK_110473728;
        func_0x000107c613fc(&UNK_110473728,0x18,7);
        *(undefined8 **)(puVar3 + 0x10) = &uStack_78;
        puVar4 = &UNK_110473750;
        func_0x000107c613fc(&UNK_110473750,0x20,7);
        *(code **)(puVar4 + 0x10) = FUN_101d10998;
        *(undefined **)(puVar4 + 0x18) = puVar3;
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_88 = (code *)0x101d10a14;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        uStack_98 = 0x101a7ff58;
        puStack_90 = &UNK_110473768;
        ppuVar5 = &puStack_a8;
        puStack_80 = puVar4;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c61574(puStack_80);
        puVar4 = &UNK_1104737a0;
        func_0x000107c613fc(&UNK_1104737a0,0x18,7);
        *(undefined8 **)(puVar4 + 0x10) = &uStack_78;
        puVar6 = &UNK_1104737c8;
        func_0x000107c613fc(&UNK_1104737c8,0x20,7);
        *(undefined8 *)(puVar6 + 0x10) = 0x101d109c4;
        *(undefined **)(puVar6 + 0x18) = puVar4;
        pcStack_88 = (code *)0x101d10a18;
        puStack_a8 = puVar1;
        uStack_a0 = 0x42000000;
        uStack_98 = 0x101a7ff5c;
        puStack_90 = &UNK_1104737e0;
        ppuVar7 = &puStack_a8;
        puStack_80 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        func_0x000107c61574(puStack_80);
        puVar6 = &UNK_110473818;
        func_0x000107c613fc(&UNK_110473818,0x18,7);
        *(undefined8 **)(puVar6 + 0x10) = &uStack_78;
        puVar8 = &UNK_110473840;
        func_0x000107c613fc(&UNK_110473840,0x20,7);
        *(undefined8 *)(puVar8 + 0x10) = 0x101d109d4;
        *(undefined **)(puVar8 + 0x18) = puVar6;
        pcStack_88 = FUN_101d109e4;
        puStack_a8 = puVar1;
        uStack_a0 = 0x42000000;
        uStack_98 = 0x101a7ff60;
        puStack_90 = &UNK_110473858;
        ppuVar9 = &puStack_a8;
        puStack_80 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        func_0x000107c61574(puStack_80);
        func_0x000107c4c628(uVar2);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(unaff_x20);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61574(puVar6);
        func_0x000107c61574(puVar4);
        func_0x000107c61574(puVar3);
      }
    }
  }
  return;
}



/* Entry: 101d10998; end: 101d109e3;  */

void FUN_101d10998(void)

{
  long unaff_x20;
  
  **(undefined8 **)(unaff_x20 + 0x10) = 7;
  return;
}



/* Entry: 101d109e4; end: 101d10a03;  */

void FUN_101d109e4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d10a04; end: 101d10a1b;  */

void FUN_101d10a04(long param_1,long param_2)

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



/* Entry: 101d10a1c; end: 101d10daf;  */

long FUN_101d10a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  func_0x0001000285a8(0x112e1f610,&UNK_10da01a28);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar3 = param_6;
  func_0x000107c6157c(param_6);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar2 = PTR_PTR_1126a9250;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1ded0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f00ced0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f00cf00);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar3 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f00cf20);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  puVar1 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61574(param_6);
  *(undefined **)(unaff_x20 + 0x40) = puVar1;
  return unaff_x20;
}


