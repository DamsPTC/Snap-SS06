/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c277fc; end: 103c277ff;  */

void FUN_103c277fc(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar5 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c27628);
    (*pcVar1)();
  }
  uVar7 = 0x64656c6261736964;
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f008540);
  lVar6 = -0x1800000000000000;
  func_0x000107c5fadc(0x64656c6261736964);
  uVar3 = uVar5;
  func_0x000107c5c1dc();
  func_0x000107c61180();
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  uVar5 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  if ((((uVar5 == 0x64656c6261736964 && lVar6 == -0x1800000000000000) ||
       (uVar3 = uVar5, func_0x000107c605b8(uVar5,lVar6,0x64656c6261736964,0xe800000000000000,0),
       (uVar3 & 1) != 0)) || ((uVar5 == 0xd000000000000017 && (lVar6 == -0x7ffffffef0ff7aa0)))) ||
     ((uVar3 = uVar5, func_0x000107c605b8(uVar5,lVar6,0xd000000000000017,0x800000010f008560,0),
      (uVar3 & 1) != 0 ||
      ((((uVar5 == 0xd000000000000011 && (lVar6 == -0x7ffffffef0ff7a80)) ||
        (uVar3 = uVar5, func_0x000107c605b8(uVar5,lVar6,0xd000000000000011,0x800000010f008580,0),
        (uVar3 & 1) != 0)) || ((uVar5 == 0x64656c62616e65 && (lVar6 == -0x1900000000000000)))))))) {
    func_0x000107c6142c(lVar6);
  }
  else {
    func_0x000107c605b8(uVar5,lVar6,0x64656c62616e65,0xe700000000000000,0);
    func_0x000107c6142c(lVar6);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *param_1 = puVar4;
  return;
}



/* Entry: 103c27800; end: 103c279a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c27800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff8ed8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8ee0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8ee8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8ef0) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c279a8; end: 103c27a4b; -[_TtC20ValdiServiceRegistry38ValdiActiveUserScopedServiceMarshaller registerWithGlobalMarshaller] */

void FUN_103c279a8(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000100945a6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c27a4c; end: 103c27ad7; -[_TtC20ValdiServiceRegistry38ValdiActiveUserScopedServiceMarshaller unregisterFromGlobalMarshaller] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c27a4c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [24];
  long alStack_50 [6];
  
  func_0x000107c61174();
  func_0x000100083b20(alStack_50);
  func_0x000107c61170(param_1);
  lVar2 = alStack_50[0];
  lVar1 = _DAT_112ff9108;
  alStack_50[4] = 0;
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
  func_0x000107c61428(lVar2 + _DAT_112ff9108,auStack_68,0x21,0);
  FUN_103c27bb4(alStack_50,lVar2 + lVar1);
  func_0x000107c614a8(auStack_68);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 103c27ad8; end: 103c27b67; -[_TtC20ValdiServiceRegistry38ValdiActiveUserScopedServiceMarshaller registerPluginForServiceKey:serviceKeyString:] */

void FUN_103c27ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  func_0x000103c27880();
  FUN_103c27cf0(param_3,param_4,param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103c27b68; end: 103c27bb3; -[_TtC20ValdiServiceRegistry38ValdiActiveUserScopedServiceMarshaller marshalServiceWith:] */

void FUN_103c27b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103c27880();
  FUN_103c27e64(param_3);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c27bb4; end: 103c27c03;  */

undefined8 FUN_103c27bb4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ff8ef8;
  func_0x0001000285a8(0x112ff8ef8,&UNK_10dc67b90);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103c27c04; end: 103c27c63; -[_TtC20ValdiServiceRegistry38ValdiActiveUserScopedServiceMarshaller init] */

void FUN_103c27c04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiServiceRegistry.ValdiActiveUserScopedServiceMarshaller",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c27c30);
  (*pcVar1)();
}



/* Entry: 103c27c64; end: 103c27cef; -[_TtC20ValdiServiceRegistry38ValdiActiveUserScopedServiceMarshaller .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c27c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c27ca0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c27c84) */
/* WARNING: Removing unreachable block (ram,0x000103c27ca4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c27c64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff8ef0));
  return;
}



/* Entry: 103c27cf0; end: 103c27e63;  */

void FUN_103c27cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c61434(param_3);
  func_0x000107c604c4(uVar1,param_2,param_3);
  func_0x000107c6142c(param_3);
  if (uVar1 < 4) {
    func_0x0001000285a8(0x112ff8f88,&UNK_10dc67c10);
    puVar2 = &UNK_1106ec568;
    func_0x000107c613fc(&UNK_1106ec568,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = param_1;
    func_0x000107c61174(param_1);
    uVar3 = 0x103c29894;
    func_0x0001000823a8(0x103c29894,puVar2);
    func_0x000107c61428(unaff_x20 + 0x20,auStack_58,0x21,0);
    func_0x000107c6157c(uVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c61558(uVar4);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x20) = 0x8000000000000000;
    func_0x0001009c1a84(uVar3,0x3000201 >> (ulong)(((uint)uVar1 & 3) << 3),uVar4,FUN_103c2b384,
                        0x112ff8fc0,&UNK_10dc679b0,&UNK_1106ec628);
    *(undefined8 *)(unaff_x20 + 0x20) = uVar5;
    func_0x000107c614a8(auStack_58);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 103c27e64; end: 103c2919f;  */

void FUN_103c27e64(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_61;
  
  uVar9 = 0;
  uVar16 = param_1;
  func_0x00010b97fc3c(param_1,0);
  func_0x000107c61180();
  uVar4 = uVar16;
  func_0x000107c5faec();
  func_0x000107c61170(uVar16);
  func_0x000107c61434(uVar9);
  uVar16 = uVar4;
  FUN_103c29560(uVar4,uVar9);
  if (((uint)uVar16 & 0xff) == 4) {
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,4,0);
    uVar2 = *(ulong *)(puStack_80 + 0x10);
    uVar12 = *(ulong *)(puStack_80 + 0x18);
    uVar13 = uVar12 >> 1;
    uVar15 = uVar2 + 1;
    if (uVar13 <= uVar2) {
      func_0x000100403514(1 < uVar12,uVar15,1);
      uVar12 = *(ulong *)(puStack_80 + 0x18);
      uVar13 = uVar12 >> 1;
    }
    *(ulong *)(puStack_80 + 0x10) = uVar15;
    *(undefined8 *)(puStack_80 + uVar2 * 0x10 + 0x20) = 0xd00000000000001b;
    *(undefined8 *)(puStack_80 + uVar2 * 0x10 + 0x28) = 0x800000010f1affb0;
    uVar1 = uVar2 + 2;
    if (uVar13 <= uVar15) {
      func_0x000100403514(1 < uVar12,uVar1,1);
      uVar12 = *(ulong *)(puStack_80 + 0x18);
      uVar13 = uVar12 >> 1;
    }
    *(ulong *)(puStack_80 + 0x10) = uVar1;
    *(undefined8 *)(puStack_80 + uVar15 * 0x10 + 0x20) = 0xd000000000000010;
    *(undefined8 *)(puStack_80 + uVar15 * 0x10 + 0x28) = 0x800000010f1aff70;
    uVar15 = uVar2 + 3;
    if (uVar13 <= uVar1) {
      func_0x000100403514(1 < uVar12,uVar15,1);
    }
    *(ulong *)(puStack_80 + 0x10) = uVar15;
    *(undefined8 *)(puStack_80 + uVar1 * 0x10 + 0x20) = 0xd000000000000012;
    *(undefined8 *)(puStack_80 + uVar1 * 0x10 + 0x28) = 0x800000010f1aff90;
    puVar8 = puStack_80;
    if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar15) {
      func_0x000100403514(1 < *(ulong *)(puStack_80 + 0x18),uVar2 + 4,1);
      puVar8 = puStack_80;
    }
    *(ulong *)(puVar8 + 0x10) = uVar2 + 4;
    *(undefined8 *)(puVar8 + uVar15 * 0x10 + 0x20) = 0xd000000000000012;
    *(undefined8 *)(puVar8 + uVar15 * 0x10 + 0x28) = 0x800000010f1affd0;
    uVar16 = 0x112d38270;
    puStack_80 = puVar8;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar5 = uVar16;
    func_0x00010011d734();
    uVar6 = 0x202c;
    uVar10 = 0xe200000000000000;
    func_0x000107c5fa80(0x202c,0xe200000000000000,uVar16,uVar5);
    func_0x000107c61574(puVar8);
    puStack_80 = (undefined *)0x0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x27);
    func_0x000107c6142c(uStack_78);
    puStack_80 = (undefined *)0xd000000000000015;
    uStack_78 = 0x800000010f1b0050;
    func_0x000107c5fb78(uVar4,uVar9);
    func_0x000107c6142c(uVar9);
    func_0x000107c5fb78(0x6c69617641202e27,0xee00203a656c6261);
    func_0x000107c5fb78(uVar6,uVar10);
    func_0x000107c6142c(uVar10);
    puVar8 = puStack_80;
    uVar16 = uStack_78;
  }
  else {
    uVar3 = 0x3000201 >> (ulong)(((uint)uVar16 & 3) << 3);
    uVar15 = (ulong)uVar3;
    uStack_61 = (undefined1)uVar3;
    ppuVar11 = &puStack_80;
    func_0x000107c61428(unaff_x20 + 0x20,ppuVar11,0,0);
    lVar14 = *(long *)(unaff_x20 + 0x20);
    if ((*(long *)(lVar14 + 0x10) != 0) && (FUN_103c2b384(), ((ulong)ppuVar11 & 1) != 0)) {
      uVar16 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar15 * 8);
      func_0x000107c6157c(uVar16);
      func_0x000100083b20(&puStack_90);
      func_0x000103c289b0(puStack_90,param_1,uVar4,uVar9,0x6c61756e616d,0xe600000000000000);
      func_0x000107c6142c(uVar9);
      func_0x000107c61574(uVar16);
      func_0x000107c615e8(puStack_90);
      return;
    }
    func_0x00010008a7c8(&puStack_90,&uStack_61);
    puVar8 = puStack_90;
    if (puStack_90 != (undefined *)0x0) {
      func_0x000100083b20(&puStack_90);
      func_0x000107c615f0(puStack_90);
      func_0x000103c289b0();
      func_0x000107c6142c(uVar9);
      func_0x000107c615ec(puStack_90,2);
      func_0x000107c61574(puVar8);
      return;
    }
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0xe000000000000000;
    func_0x000107c602fc(0x3e);
    func_0x000107c5fb78(0x66206e6967756c50,0xec0000002720726f);
    func_0x000107c5fb78(uVar4,uVar9);
    func_0x000107c6142c(uVar9);
    func_0x000107c5fb78(0xd000000000000030,0x800000010f1b0250);
    puVar8 = puStack_90;
    uVar16 = uStack_88;
  }
  puVar7 = PTR_PTR_1126b3588;
  func_0x000107c610f8(PTR_PTR_1126b3588);
  func_0x000107c5fadc(puVar8,uVar16);
  func_0x000107c6142c(uVar16);
  func_0x000107c47794(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c4f6d8(puVar7);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 103c291a0; end: 103c292ab;  */

long FUN_103c291a0(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c4b940(uVar5);
  func_0x000107c61428(unaff_x20 + 0x30,auStack_58,0,0);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  if (*(long *)(lVar6 + 0x10) == 0) {
    lVar7 = 0;
  }
  else {
    func_0x000107c61434(lVar6);
    lVar7 = param_1;
    uVar3 = param_2;
    func_0x000100029284();
    if ((uVar3 & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + lVar7 * 8);
    }
    func_0x000107c6142c(lVar6);
  }
  if (!SCARRY8(lVar7,1)) {
    func_0x000107c61428(unaff_x20 + 0x30,auStack_70,0x21,0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000107c61558(uVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x30) = 0x8000000000000000;
    func_0x000101687ce0(lVar7 + 1,param_1,param_2,uVar2);
    *(undefined8 *)(unaff_x20 + 0x30) = uVar4;
    func_0x000107c614a8(auStack_70);
    func_0x000107c5d278(uVar5);
    return lVar7 + 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c292ac);
  (*pcVar1)();
}



/* Entry: 103c292ac; end: 103c292c7;  */

void FUN_103c292ac(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103c292c8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103c292c8; end: 103c293f7;  */

undefined * FUN_103c292c8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103c293f8);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_103c26164();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0x112ff8cf0;
    func_0x0001000285a8(0x112ff8cf0,&UNK_10dc679a0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103c293f8; end: 103c29543;  */

void FUN_103c293f8(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8();
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_103c294c4;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined1 *)(*(long *)(lVar4 + 0x30) + uVar8) =
             *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c6157c();
        if (uVar6 != 0) break;
LAB_103c294c4:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103c29544);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_103c2951c;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_103c2951c:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 103c29544; end: 103c2955f;  */

undefined * FUN_103c29544(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar4 = 0;
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  func_0x0001000285a8(0x112ff8fc0);
  puVar2 = puVar7;
  func_0x000107c60498();
  uVar8 = (ulong)*(byte *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar8;
  FUN_103c2b384();
  if ((uVar4 & 1) == 0) {
    puVar5 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar6 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar6 + 0x40) = *(ulong *)(puVar2 + uVar6 + 0x40) | 1L << (uVar3 & 0x3f);
      *(char *)(*(long *)(puVar2 + 0x30) + uVar3) = (char)uVar8;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c19e0);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c6157c();
        return puVar2;
      }
      uVar8 = (ulong)*(byte *)(puVar5 + -1);
      uVar9 = *puVar5;
      func_0x000107c6157c();
      uVar3 = uVar8;
      FUN_103c2b384();
      puVar5 = puVar5 + 2;
    } while ((uVar4 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c19b0);
  (*pcVar1)();
}



/* Entry: 103c29560; end: 103c295c3;  */

ulong FUN_103c29560(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 103c295c4; end: 103c29897;  */

void FUN_103c295c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103c29898; end: 103c298d7;  */

void FUN_103c29898(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ff8fd0;
  func_0x0001000285a8(0x112ff8fd0,&UNK_10dc679c0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103c298d8; end: 103c2990f;  */

void FUN_103c298d8(undefined1 *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (char)(0x3010002 >> (ulong)((*unaff_x20 & 3) << 3));
  return;
}



/* Entry: 103c29910; end: 103c29993;  */

void FUN_103c29910(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c29994; end: 103c29997;  */

void FUN_103c29994(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff8fe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc679d0;
  func_0x000107c61520(&UNK_10dc679d0,&UNK_1106ec628);
  puRam0000000112ff8fe0 = puVar1;
  return;
}



/* Entry: 103c29998; end: 103c29a03;  */

void FUN_103c29998(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff8fe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc679d0;
  func_0x000107c61520(&UNK_10dc679d0,&UNK_1106ec628);
  puRam0000000112ff8fe0 = puVar1;
  return;
}



/* Entry: 103c29a04; end: 103c29a07;  */

void FUN_103c29a04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff8ff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc68160;
  func_0x000107c61520(&UNK_10dc68160,&UNK_1106ecc48);
  puRam0000000112ff8ff8 = puVar1;
  return;
}



/* Entry: 103c29a08; end: 103c29a47;  */

void FUN_103c29a08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff8ff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc68160;
  func_0x000107c61520(&UNK_10dc68160,&UNK_1106ecc48);
  puRam0000000112ff8ff8 = puVar1;
  return;
}



/* Entry: 103c29a48; end: 103c29a4b;  */

void FUN_103c29a48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9000 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc681d8;
  func_0x000107c61520(&DAT_10dc681d8,&UNK_1106ecc48);
  puRam0000000112ff9000 = puVar1;
  return;
}



/* Entry: 103c29a4c; end: 103c29a8b;  */

void FUN_103c29a4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9000 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc681d8;
  func_0x000107c61520(&DAT_10dc681d8,&UNK_1106ecc48);
  puRam0000000112ff9000 = puVar1;
  return;
}



/* Entry: 103c29a8c; end: 103c29ab7;  */

void FUN_103c29a8c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103c29ab8();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103c29af8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103c29ab8; end: 103c29b37;  */

void FUN_103c29ab8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9048 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc67a40;
  func_0x000107c61520(&UNK_10dc67a40,&UNK_1106ec628);
  puRam0000000112ff9048 = puVar1;
  return;
}



/* Entry: 103c29b38; end: 103c29b3b;  */

void FUN_103c29b38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc67a94;
  func_0x000107c61520(&UNK_10dc67a94,&UNK_1106ec4b8);
  puRam0000000112ff9058 = puVar1;
  return;
}



/* Entry: 103c29b3c; end: 103c29ba7;  */

void FUN_103c29b3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc67a94;
  func_0x000107c61520(&UNK_10dc67a94,&UNK_1106ec4b8);
  puRam0000000112ff9058 = puVar1;
  return;
}



/* Entry: 103c29ba8; end: 103c29c2b;  */

void FUN_103c29ba8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103c29c2c; end: 103c29c2f;  */

void FUN_103c29c2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc67b08;
  func_0x000107c61520(&UNK_10dc67b08,&UNK_1106ec4b8);
  puRam0000000112ff9070 = puVar1;
  return;
}



/* Entry: 103c29c30; end: 103c29c6f;  */

void FUN_103c29c30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc67b08;
  func_0x000107c61520(&UNK_10dc67b08,&UNK_1106ec4b8);
  puRam0000000112ff9070 = puVar1;
  return;
}



/* Entry: 103c29c70; end: 103c29c73;  */

void FUN_103c29c70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9078 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc67abc;
  func_0x000107c61520(&UNK_10dc67abc,&UNK_1106ec4b8);
  puRam0000000112ff9078 = puVar1;
  return;
}



/* Entry: 103c29c74; end: 103c29cb3;  */

void FUN_103c29c74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9078 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc67abc;
  func_0x000107c61520(&UNK_10dc67abc,&UNK_1106ec4b8);
  puRam0000000112ff9078 = puVar1;
  return;
}



/* Entry: 103c29cb4; end: 103c29e27;  */

int FUN_103c29cb4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103c29d30;
        goto LAB_103c29d14;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103c29d14:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_103c29d30:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103c29e28; end: 103c29e77;  */

undefined8 FUN_103c29e28(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ff8ef8;
  func_0x0001000285a8(0x112ff8ef8,&UNK_10dc67b90);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103c29e78; end: 103c29ed7; -[_TtC20ValdiServiceRegistry28ValdiGlobalServiceMarshaller init] */

void FUN_103c29e78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiServiceRegistry.ValdiGlobalServiceMarshaller",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c29ea4);
  (*pcVar1)();
}



/* Entry: 103c29ed8; end: 103c29ee7;  */

undefined1  [16] FUN_103c29ed8(void)

{
  return ZEXT816(0x1106ec6b0);
}



/* Entry: 103c29ee8; end: 103c29f2f; -[_TtC20ValdiServiceRegistry28ValdiGlobalServiceMarshaller .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c29f14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c29f18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103c29ee8(long param_1)

{
  long lVar1;
  
  func_0x0001000834e4(param_1 + _DAT_112ff9118);
  param_1 = param_1 + _DAT_112ff9120;
  lVar1 = 0x112ff8ef8;
  func_0x0001000285a8(0x112ff8ef8,&UNK_10dc67b90);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103c29f30; end: 103c29f7b;  */

undefined8 FUN_103c29f30(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_103c29f7c(param_1,param_2);
  return unaff_x20;
}



/* Entry: 103c29f7c; end: 103c2a19b;  */

void FUN_103c29f7c(long param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  long extraout_x8;
  long *unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_90 [16];
  code *pcStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  pcVar7 = *(code **)(*unaff_x20 + 0x50);
  lVar1 = *(long *)(*unaff_x20 + 0x58);
  uVar8 = *(undefined8 *)(lVar1 + 8);
  lVar2 = 0;
  func_0x000107c614b8(0,uVar8,pcVar7,PTR___ss12CaseIterableTL_11034e4e0,
                      PTR___s8AllCasess12CaseIterablePTl_11034d640);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0x112ff8f88;
  func_0x00010002969c(0x112ff8f88,&UNK_10dc67c10);
  uVar4 = 0;
  func_0x000107c61510(0,pcVar7,uVar3,0,0);
  lVar5 = 0;
  func_0x000107c5fc6c(0,uVar4);
  func_0x000107c5f9fc();
  unaff_x20[4] = lVar5;
  puVar6 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  unaff_x20[5] = (long)puVar6;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001003d21d8();
  unaff_x20[6] = (long)puVar6;
  unaff_x20[2] = param_1;
  *(undefined1 *)(unaff_x20 + 3) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c60304(auStack_90 + -extraout_x8,pcVar7,uVar8);
  puVar6 = &UNK_10dc67c18;
  pcStack_80 = pcVar7;
  lStack_78 = lVar1;
  func_0x000107c614e0(&UNK_10dc67c18,&pcStack_80);
  lStack_70 = lVar1;
  puStack_68 = puVar6;
  func_0x000107c614b4(uVar8,pcVar7,lVar2,PTR___ss12CaseIterableTL_11034e4e0,
                      PTR___ss12CaseIterableP8AllCasesAB_SlTn_11034e4d0);
  pcVar7 = FUN_103c2b370;
  func_0x0001000ca88c(FUN_103c2b370,&pcStack_80,lVar2,PTR___sSSN_11034da80,
                      PTR___ss5NeverON_11034ee88,uVar8,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  func_0x000107c61574(puVar6);
  (**(code **)(lVar9 + 8))(auStack_90 + -extraout_x8,lVar2);
  uVar3 = 0x112d38270;
  pcStack_80 = pcVar7;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar4 = uVar3;
  func_0x00010011d734();
  uVar8 = 0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar3,uVar4);
  func_0x000107c6142c(pcVar7);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(uVar8);
  return;
}



/* Entry: 103c2a19c; end: 103c2a303;  */

void FUN_103c2a19c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_3 + param_4 + -0x10);
  lVar3 = *(long *)(param_3 + param_4 + -8);
  uVar2 = 0;
  func_0x000107c614b8(0,lVar3,uVar1,&UNK_10e7baa2c,&UNK_10e7baa54);
  func_0x000107c614b4(lVar3,uVar1,uVar2,&UNK_10e7baa2c,&UNK_10e7baa4c);
  func_0x000107c5fc24(param_1,uVar2,*(undefined8 *)(lVar3 + 8));
  return;
}



/* Entry: 103c2a304; end: 103c2a547;  */

void FUN_103c2a304(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar7;
  long extraout_x12;
  long lVar8;
  long *unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar8 = *(long *)(*unaff_x20 + 0x50);
  lVar6 = *(long *)(lVar8 + -8);
  uStack_98 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar13 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(extraout_x12 + 0x58);
  lVar1 = 0xff;
  lStack_90 = lVar13;
  func_0x000107c614b8(0xff,lVar12,lVar8,&UNK_10e7baa2c,&UNK_10e7baa54);
  lVar2 = 0;
  func_0x000107c60188(0,lVar1);
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8_00;
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar13 - extraout_x8_01;
  lVar3 = lVar12;
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000107c614b4(lVar12,lVar8,lVar1,&UNK_10e7baa2c,&UNK_10e7baa4c);
  uVar9 = *(undefined8 *)(lVar3 + 8);
  func_0x000107c61434(param_3);
  func_0x000107c5fc28(lVar13,&uStack_70,lVar1,uVar9);
  lVar4 = lVar13;
  (**(code **)(lVar10 + 0x30))(lVar13,1,lVar1);
  lVar3 = lStack_a0;
  if ((int)lVar4 == 1) {
    pcVar7 = *(code **)(lVar11 + 8);
    lVar3 = lVar13;
    lVar1 = lVar2;
  }
  else {
    (**(code **)(lVar10 + 0x20))(lStack_a0,lVar13,lVar1);
    lVar4 = lStack_90;
    (**(code **)(lVar12 + 0x38))(lStack_90,lVar3,lVar8,lVar12);
    func_0x0001000285a8(0x112ff8f88,&UNK_10dc67c10);
    puVar5 = &UNK_1106ec6d0;
    func_0x000107c613fc(&UNK_1106ec6d0,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = uStack_98;
    func_0x000107c61174();
    pcVar7 = FUN_103c2b150;
    func_0x0001000823a8(FUN_103c2b150,puVar5);
    func_0x000103c2a228();
    func_0x000107c61574(pcVar7);
    (**(code **)(lVar6 + 8))(lVar4,lVar8);
    pcVar7 = *(code **)(lVar10 + 8);
  }
  (*pcVar7)(lVar3,lVar1);
  return;
}



/* Entry: 103c2a548; end: 103c2a573;  */

void FUN_103c2a548(undefined8 *param_1,undefined8 param_2)

{
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = param_2;
  return;
}



/* Entry: 103c2a574; end: 103c2a5e3;  */

void FUN_103c2a574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_103c2a304(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103c2a5e4; end: 103c2aff3;  */

void FUN_103c2a5e4(code *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  undefined8 uVar14;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  long lStack_98;
  undefined8 uStack_90;
  code *pcStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  pcVar11 = *(code **)(*unaff_x20 + 0x50);
  lVar7 = *(long *)(*unaff_x20 + 0x58);
  uStack_e0 = *(undefined8 *)(lVar7 + 8);
  lVar1 = 0;
  func_0x000107c614b8(0,uStack_e0,pcVar11,PTR___ss12CaseIterableTL_11034e4e0,
                      PTR___s8AllCasess12CaseIterablePTl_11034d640);
  lStack_d0 = *(long *)(lVar1 + -8);
  lStack_c8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lStack_b8 = *(long *)(pcVar11 + -8);
  lStack_d8 = (long)&lStack_f0 - extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar10 = ((long)&lStack_f0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0xff;
  lStack_c0 = lVar10;
  func_0x000107c614b8(0xff,lVar7,pcVar11,&UNK_10e7baa2c,&UNK_10e7baa54);
  lVar1 = 0;
  func_0x000107c60188(0,lVar2);
  lStack_f0 = *(long *)(lVar1 + -8);
  lStack_e8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_f0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = lVar10 - extraout_x8_01;
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar10 - extraout_x8_02;
  uVar8 = 0;
  pcStack_a8 = param_1;
  func_0x00010b97fc3c();
  func_0x000107c61180();
  pcVar3 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  lVar1 = lVar7;
  pcStack_b0 = pcVar3;
  pcStack_80 = pcVar3;
  lStack_78 = uVar8;
  func_0x000107c614b4(lVar7,pcVar11,lVar2,&UNK_10e7baa2c,&UNK_10e7baa4c);
  uVar14 = *(undefined8 *)(lVar1 + 8);
  func_0x000107c61434(uVar8);
  func_0x000107c5fc28(lVar10,&pcStack_80,lVar2,uVar14);
  lVar1 = lVar10;
  (**(code **)(lVar12 + 0x30))(lVar10,1,lVar2);
  pcVar3 = pcStack_a8;
  if ((int)lVar1 == 1) {
    (**(code **)(lStack_f0 + 8))(lVar10,lStack_e8);
    lVar1 = lStack_d8;
    uVar14 = uStack_e0;
    func_0x000107c60304(lStack_d8,pcVar11,uStack_e0);
    puVar6 = &UNK_10dc67c18;
    pcStack_80 = pcVar11;
    lStack_78 = lVar7;
    func_0x000107c614e0(&UNK_10dc67c18,&pcStack_80);
    lVar13 = lStack_c8;
    lStack_70 = lVar7;
    puStack_68 = puVar6;
    func_0x000107c614b4(uVar14,pcVar11,lStack_c8,PTR___ss12CaseIterableTL_11034e4e0,
                        PTR___ss12CaseIterableP8AllCasesAB_SlTn_11034e4d0);
    pcVar11 = FUN_103c2b180;
    func_0x0001000ca88c(FUN_103c2b180,&pcStack_80,lVar13,PTR___sSSN_11034da80,
                        PTR___ss5NeverON_11034ee88,uVar14,PTR___ss5NeverOs5ErrorsWP_11034ee90);
    func_0x000107c61574(puVar6);
    (**(code **)(lStack_d0 + 8))(lVar1,lVar13);
    uVar14 = 0x112d38270;
    pcStack_80 = pcVar11;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar4 = uVar14;
    func_0x00010011d734();
    uVar5 = 0x202c;
    uVar9 = 0xe200000000000000;
    func_0x000107c5fa80(0x202c,0xe200000000000000,uVar14,uVar4);
    func_0x000107c6142c(pcVar11);
    pcStack_80 = (code *)0x0;
    lStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x27);
    func_0x000107c6142c(lStack_78);
    pcStack_80 = (code *)0xd000000000000015;
    lStack_78 = 0x800000010f1b0050;
    func_0x000107c5fb78(pcStack_b0,uVar8);
    func_0x000107c6142c(uVar8);
    func_0x000107c5fb78(0x6c69617641202e27,0xee00203a656c6261);
    func_0x000107c5fb78(uVar5,uVar9);
    func_0x000107c6142c(uVar9);
    lVar7 = lStack_78;
    pcVar11 = pcStack_80;
    puVar6 = PTR_PTR_1126b3588;
    func_0x000107c610f8(PTR_PTR_1126b3588);
    func_0x000107c5fadc(pcVar11,lVar7);
    func_0x000107c6142c(lVar7);
    func_0x000107c47794(puVar6);
    func_0x000107c61170(pcVar11);
    func_0x000107c4f6d8(puVar6);
    func_0x000107c61170(puVar6);
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar13,lVar10,lVar2);
    lVar1 = lStack_c0;
    (**(code **)(lVar7 + 0x38))(lStack_c0,lVar13,pcVar11,lVar7);
    func_0x000107c61428(unaff_x20 + 4,&pcStack_80,0,0);
    lVar10 = unaff_x20[4];
    func_0x000107c61434(lVar10);
    uVar14 = 0x112ff8f88;
    func_0x0001000285a8(0x112ff8f88,&UNK_10dc67c10);
    func_0x000107c5fa40(&lStack_98,lVar1,lVar10,pcVar11,uVar14,*(undefined8 *)(lVar7 + 0x10));
    func_0x000107c6142c(lVar10);
    lVar7 = lStack_98;
    if (lStack_98 == 0) {
      lStack_c8 = lVar13;
      func_0x00010008a7c8(&lStack_98,lVar1);
      lVar7 = lStack_98;
      pcVar3 = pcStack_b0;
      if (lStack_98 == 0) {
        lStack_98 = 0;
        uStack_90 = 0xe000000000000000;
        func_0x000107c602fc(0x3e);
        func_0x000107c5fb78(0x66206e6967756c50,0xec0000002720726f);
        func_0x000107c5fb78(pcVar3,uVar8);
        func_0x000107c6142c(uVar8);
        func_0x000107c5fb78(0xd000000000000030,0x800000010f1b0250);
        uVar8 = uStack_90;
        lVar7 = lStack_98;
        puVar6 = PTR_PTR_1126b3588;
        func_0x000107c610f8(PTR_PTR_1126b3588);
        func_0x000107c5fadc(lVar7,uVar8);
        func_0x000107c6142c(uVar8);
        func_0x000107c47794(puVar6);
        func_0x000107c61170(lVar7);
        func_0x000107c4f6d8(puVar6);
        func_0x000107c61170(puVar6);
      }
      else {
        func_0x000100083b20(&lStack_98);
        lVar13 = lStack_98;
        func_0x000107c615f0(lStack_98);
        func_0x000103c2ac3c();
        func_0x000107c6142c(uVar8);
        func_0x000107c615ec(lVar13,2);
        func_0x000107c61574(lVar7);
      }
      (**(code **)(lStack_b8 + 8))(lVar1,pcVar11);
      pcVar11 = *(code **)(lVar12 + 8);
      lVar13 = lStack_c8;
    }
    else {
      func_0x000100083b20(&lStack_98);
      lVar10 = lStack_98;
      func_0x000103c2ac3c(lStack_98,pcVar3,pcStack_b0,uVar8,0x6c61756e616d,0xe600000000000000);
      func_0x000107c6142c(uVar8);
      func_0x000107c61574(lVar7);
      func_0x000107c615e8(lVar10);
      (**(code **)(lStack_b8 + 8))(lVar1,pcVar11);
      pcVar11 = *(code **)(lVar12 + 8);
    }
    (*pcVar11)(lVar13,lVar2);
  }
  return;
}



/* Entry: 103c2aff4; end: 103c2b0fb;  */

long FUN_103c2aff4(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c4b940(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61428(unaff_x20 + 0x30,auStack_58,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x30);
  if (*(long *)(lVar5 + 0x10) == 0) {
    lVar6 = 0;
  }
  else {
    func_0x000107c61434(lVar5);
    lVar6 = param_1;
    uVar3 = param_2;
    func_0x000100029284();
    if ((uVar3 & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + lVar6 * 8);
    }
    func_0x000107c6142c(lVar5);
  }
  if (!SCARRY8(lVar6,1)) {
    func_0x000107c61428(unaff_x20 + 0x30,auStack_70,0x21,0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000107c61558(uVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x30) = 0x8000000000000000;
    func_0x000101687ce0(lVar6 + 1,param_1,param_2,uVar2);
    *(undefined8 *)(unaff_x20 + 0x30) = uVar4;
    func_0x000107c614a8(auStack_70);
    func_0x000107c5d278(*(undefined8 *)(unaff_x20 + 0x28));
    return lVar6 + 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c2b0fc);
  (*pcVar1)();
}



/* Entry: 103c2b0fc; end: 103c2b14f;  */

void FUN_103c2b0fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 103c2b150; end: 103c2b17f;  */

void FUN_103c2b150(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103c2b180; end: 103c2b1a7;  */

void FUN_103c2b180(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614bc(param_1,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103c2b1a8; end: 103c2b36f;  */

/* WARNING: Possible PIC construction at 0x000103c2b340: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c2b344) */

void FUN_103c2b1a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar6;
  undefined *puVar5;
  
  uVar4 = 0;
  lVar6 = param_2;
  func_0x000107c60f58(0);
  func_0x000107c5fb34();
  uVar2 = 0x6e776f6e6b6e75;
  if (lVar6 != 0) {
    uVar2 = uVar4;
  }
  lVar1 = -0x1900000000000000;
  if (lVar6 != 0) {
    lVar1 = lVar6;
  }
  func_0x000107c602fc(0x23);
  func_0x000107c61434(param_5);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0x656372756f73202c,0xea0000000000203a);
  func_0x000107c5fb78(param_2,param_3);
  func_0x000107c5fb78(0x3a6575657571202c,0xe900000000000020);
  func_0x000107c5fb78(uVar2,lVar1);
  func_0x000107c6142c(lVar1);
  func_0x000107c5fb78(0x203a6e69616d202c,0xe800000000000000);
  puVar5 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar3 = (int)puVar5;
  func_0x000107c4a02c();
  uVar2 = 0x65757274;
  if (iVar3 == 0) {
    uVar2 = 0x65736c6166;
  }
  uVar4 = 0xe400000000000000;
  if (iVar3 == 0) {
    uVar4 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  puVar5 = PTR_PTR_1126b3588;
  func_0x000107c610f8(PTR_PTR_1126b3588);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c6142c(param_5);
  func_0x000107c47794(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103c2b370; end: 103c2b383;  */

void FUN_103c2b370(void)

{
  FUN_103c2b180();
  return;
}



/* Entry: 103c2b384; end: 103c2b387;  */

void FUN_103c2b384(ulong param_1)

{
  ulong uVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1 & 0xff;
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  func_0x0001009c1c54(param_1,uVar1);
  return;
}



/* Entry: 103c2b388; end: 103c2b473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2b388(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long *plVar6;
  long lStack_68;
  long lStack_60;
  undefined1 uStack_51;
  
  lVar2 = param_2;
  func_0x0001000a1664();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112ff91f0;
  lVar4 = 0;
  func_0x000103c2c008();
  func_0x000107c613fc();
  uStack_51 = 0;
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  puVar5 = &uStack_51;
  func_0x00010006c248();
  *(undefined1 **)(lVar4 + 0x10) = puVar5;
  *(long *)(lVar3 + lVar1) = lVar4;
  *(long *)(lVar3 + _DAT_112ff91f8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ff9200) = param_3;
  plVar6 = &lStack_68;
  lStack_68 = lVar3;
  lStack_60 = lVar2;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  *param_1 = (long)plVar6;
  return;
}



/* Entry: 103c2b474; end: 103c2b47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2b474(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_68;
  long lStack_60;
  undefined1 uStack_51;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = lVar1;
  func_0x0001000a1664();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar3 = _DAT_112ff91f0;
  lVar6 = 0;
  func_0x000103c2c008();
  func_0x000107c613fc();
  uStack_51 = 0;
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  puVar7 = &uStack_51;
  func_0x00010006c248();
  *(undefined1 **)(lVar6 + 0x10) = puVar7;
  *(long *)(lVar5 + lVar3) = lVar6;
  *(long *)(lVar5 + _DAT_112ff91f8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112ff9200) = uVar2;
  plVar8 = &lStack_68;
  lStack_68 = lVar5;
  lStack_60 = lVar4;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 103c2b47c; end: 103c2b54f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2b47c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 uStack_51;
  
  func_0x000107c610f8();
  lVar1 = _DAT_112ff91f0;
  lVar2 = 0;
  func_0x000103c2c008();
  func_0x000107c613fc();
  uStack_51 = 0;
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  puVar3 = &uStack_51;
  func_0x00010006c248();
  *(undefined1 **)(lVar2 + 0x10) = puVar3;
  *(long *)(unaff_x20 + lVar1) = lVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff91f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff9200) = param_2;
  func_0x000107c61154(auStack_68,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c2b550; end: 103c2b60b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2b550(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 auStack_50 [3];
  
  func_0x000100083b20(auStack_50);
  uVar1 = auStack_50[0];
  func_0x000107c509b8();
  func_0x000107c61180();
  func_0x000107c615e8(auStack_50[0]);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ff91f0) + 0x10);
  uStack_60 = 0x103c2bc08;
  puStack_58 = auStack_50;
  func_0x000107c6157c(uVar2);
  func_0x000100075034(FUN_103c2bcb8,auStack_70,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 103c2b60c; end: 103c2b68f; -[_TtC20ValdiServiceRegistry41ValdiServiceRegistryModuleFactoryProvider createModuleFactories:] */

void FUN_103c2b60c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  FUN_103c2bcd0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  uVar2 = 0x112ff8cf0;
  func_0x0001000285a8(0x112ff8cf0,&UNK_10dc679a0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103c2b690; end: 103c2b97f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103c2b690(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48 + _DAT_112ff9118;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(param_1,uVar2,lVar3);
  func_0x000107c61170(lStack_48);
  return 1;
}



/* Entry: 103c2b980; end: 103c2b9ff; -[_TtCC20ValdiServiceRegistry41ValdiServiceRegistryModuleFactoryProviderP33_76B2E8E6F1BA8ED883C48E6518DC238528ServiceRegistryModuleFactory getModulePath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2b980(long param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = 0xd000000000000022;
  if (*(char *)(param_1 + _DAT_112ff9230) == '\0') {
    pcVar2 = "PlatformUserSessionServiceRegistry";
  }
  else if (*(char *)(param_1 + _DAT_112ff9230) == '\x01') {
    pcVar2 = "PlatformActiveUserSessionServiceRegistry";
    uVar1 = 0xd000000000000028;
  }
  else {
    pcVar2 = "PlatformApplicationServiceRegistry";
  }
  func_0x000107c5fadc(uVar1,(ulong)(pcVar2 + -0x20) | 0x8000000000000000);
  func_0x000107c6142c((ulong)(pcVar2 + -0x20) | 0x8000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103c2ba00; end: 103c2bb5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2ba00(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  lVar2 = 0x112d9f930;
  func_0x0001000285a8(0x112d9f930,&UNK_10db9f4c0);
  func_0x000107c613fc();
  puVar4 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined **)(lVar2 + 0x38) = puVar4;
  *(undefined8 *)(lVar2 + 0x20) = 0x6174736e49746567;
  *(undefined8 *)(lVar2 + 0x28) = 0xeb0000000065636e;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff9238);
  uVar5 = puVar1[1];
  uStack_48 = puVar1[1];
  uStack_50 = *puVar1;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10144d5dc;
  puStack_58 = &UNK_1106ec828;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = PTR_PTR_1126b6d48;
  func_0x000107c61168();
  func_0x000107c6157c(uVar5);
  func_0x000107c43bdc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(uStack_48);
  uVar5 = 0;
  FUN_103c2bf48(0,0x112d9f848,&PTR_PTR_1126b6d48);
  *(undefined8 *)(lVar2 + 0x58) = uVar5;
  *(undefined **)(lVar2 + 0x40) = puVar4;
  FUN_103c2bf48(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x000107c5ff4c(lVar2);
  return;
}



/* Entry: 103c2bb60; end: 103c2bb93; -[_TtCC20ValdiServiceRegistry41ValdiServiceRegistryModuleFactoryProviderP33_76B2E8E6F1BA8ED883C48E6518DC238528ServiceRegistryModuleFactory loadModule] */

void FUN_103c2bb60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103c2ba00();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103c2bb94; end: 103c2bbf3; -[_TtCC20ValdiServiceRegistry41ValdiServiceRegistryModuleFactoryProviderP33_76B2E8E6F1BA8ED883C48E6518DC238528ServiceRegistryModuleFactory init] */

void FUN_103c2bb94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiServiceRegistry.ServiceRegistryModuleFactory",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c2bbc0);
  (*pcVar1)();
}



/* Entry: 103c2bbf4; end: 103c2bc0f; -[_TtCC20ValdiServiceRegistry41ValdiServiceRegistryModuleFactoryProviderP33_76B2E8E6F1BA8ED883C48E6518DC238528ServiceRegistryModuleFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2bbf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff9238 + 8));
  return;
}



/* Entry: 103c2bc10; end: 103c2bc6f; -[_TtC20ValdiServiceRegistry41ValdiServiceRegistryModuleFactoryProvider init] */

void FUN_103c2bc10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiServiceRegistry.ValdiServiceRegistryModuleFactoryProvider",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c2bc3c);
  (*pcVar1)();
}



/* Entry: 103c2bc70; end: 103c2bcb7; -[_TtC20ValdiServiceRegistry41ValdiServiceRegistryModuleFactoryProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c2bc8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c2bc90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2bc70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff9200));
  return;
}



/* Entry: 103c2bcb8; end: 103c2bccf;  */

void FUN_103c2bcb8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103c2bfa0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103c2bcd0; end: 103c2befb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103c2bcd0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 unaff_x20;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  FUN_103c2d784();
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    func_0x000107c6142c(param_1);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_103c292ac(0,lVar8,0);
    lVar9 = 0x20;
    do {
      puVar7 = puStack_68;
      if (*(char *)(param_1 + lVar9) == '\0') {
        puVar4 = &UNK_1106ec888;
        func_0x000107c613fc(&UNK_1106ec888,0x18,7);
        *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
        lVar3 = 0;
        FUN_103c2bf0c();
        lVar5 = lVar3;
        func_0x000107c610f8();
        *(undefined1 *)(lVar5 + _DAT_112ff9230) = 0;
        puVar1 = (undefined8 *)(lVar5 + _DAT_112ff9238);
        *puVar1 = 0x103c2bf90;
        puVar1[1] = puVar4;
        plVar6 = &lStack_88;
        lStack_88 = lVar5;
        lStack_80 = lVar3;
      }
      else if (*(char *)(param_1 + lVar9) == '\x01') {
        puVar4 = &UNK_1106ec860;
        func_0x000107c613fc(&UNK_1106ec860,0x18,7);
        *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
        lVar3 = 0;
        FUN_103c2bf0c();
        lVar5 = lVar3;
        func_0x000107c610f8();
        *(undefined1 *)(lVar5 + _DAT_112ff9230) = 1;
        puVar1 = (undefined8 *)(lVar5 + _DAT_112ff9238);
        *puVar1 = FUN_103c2bf88;
        puVar1[1] = puVar4;
        plVar6 = &lStack_78;
        lStack_78 = lVar5;
        lStack_70 = lVar3;
      }
      else {
        puVar4 = &UNK_1106ec8b0;
        func_0x000107c613fc(&UNK_1106ec8b0,0x18,7);
        *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
        lVar3 = 0;
        FUN_103c2bf0c();
        lVar5 = lVar3;
        func_0x000107c610f8();
        *(undefined1 *)(lVar5 + _DAT_112ff9230) = 2;
        puVar1 = (undefined8 *)(lVar5 + _DAT_112ff9238);
        *puVar1 = 0x103c2bf98;
        puVar1[1] = puVar4;
        plVar6 = &lStack_98;
        lStack_98 = lVar5;
        lStack_90 = lVar3;
      }
      puVar4 = PTR_s_init_1125d9248;
      func_0x000107c61174();
      func_0x000107c61154(plVar6,puVar4);
      uVar2 = *(ulong *)(puVar7 + 0x10);
      puStack_68 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
        FUN_103c292ac(1 < *(ulong *)(puVar7 + 0x18),uVar2 + 1,1);
      }
      puVar7 = puStack_68;
      *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
      *(long **)(puStack_68 + uVar2 * 8 + 0x20) = plVar6;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    func_0x000107c6142c(param_1);
  }
  return puVar7;
}



/* Entry: 103c2befc; end: 103c2bf0b;  */

undefined1  [16] FUN_103c2befc(void)

{
  return ZEXT816(0x1106ec818);
}



/* Entry: 103c2bf0c; end: 103c2bf2b;  */

void FUN_103c2bf0c(void)

{
  func_0x000107c61168(&PTR_PTR_112947c28);
  return;
}



/* Entry: 103c2bf2c; end: 103c2bf47;  */

void FUN_103c2bf2c(long param_1,long param_2)

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



/* Entry: 103c2bf48; end: 103c2bf87;  */

void FUN_103c2bf48(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103c2bf88; end: 103c2bf9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103c2bf88(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined1 auStack_80 [24];
  long alStack_68 [3];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(alStack_68);
  lVar1 = _DAT_112ff9108;
  func_0x000107c61428(alStack_68[0] + _DAT_112ff9108,auStack_80,0,0);
  FUN_103c29e28(alStack_68[0] + lVar1,auStack_a8);
  if (lStack_90 == 0) {
    func_0x000100945cf4(auStack_a8);
    puVar2 = PTR_PTR_1126b3588;
    func_0x000107c610f8(PTR_PTR_1126b3588);
    uVar3 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010f1b0360);
    func_0x000107c47794(puVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c4f6d8(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(alStack_68[0]);
  }
  else {
    func_0x000100945c8c(auStack_a8,alStack_68);
    func_0x0001000a8868(alStack_68,uStack_50);
    (**(code **)(lStack_48 + 8))(param_1,uStack_50,lStack_48);
    func_0x000107c61170(alStack_68[0]);
    func_0x0001000834e4(alStack_68);
  }
  return 1;
}



/* Entry: 103c2bfa0; end: 103c2bfe3;  */

void FUN_103c2bfa0(byte *param_1,code *param_2)

{
  if ((*param_1 & 1) == 0) {
    (*param_2)();
    *param_1 = 1;
  }
  return;
}



/* Entry: 103c2bfe4; end: 103c2c027;  */

void FUN_103c2bfe4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c2c028; end: 103c2c273;  */

void FUN_103c2c028(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_103c29544();
  *(undefined **)(unaff_x20 + 0x20) = puVar5;
  puVar5 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar5;
  puVar5 = puVar4;
  func_0x0001003d21d8();
  *(undefined **)(unaff_x20 + 0x30) = puVar5;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000100403514(0,4,0);
  uVar3 = *(ulong *)(puVar4 + 0x10);
  uVar9 = *(ulong *)(puVar4 + 0x18);
  uVar10 = uVar9 >> 1;
  uVar1 = uVar3 + 1;
  if (uVar10 <= uVar3) {
    func_0x000100403514(1 < uVar9,uVar1,1);
    uVar9 = *(ulong *)(puVar4 + 0x18);
    uVar10 = uVar9 >> 1;
  }
  *(ulong *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + uVar3 * 0x10 + 0x20) = 0xd00000000000001b;
  *(undefined8 *)(puVar4 + uVar3 * 0x10 + 0x28) = 0x800000010f1affb0;
  uVar2 = uVar3 + 2;
  if (uVar10 <= uVar1) {
    func_0x000100403514(1 < uVar9,uVar2,1);
    uVar9 = *(ulong *)(puVar4 + 0x18);
    uVar10 = uVar9 >> 1;
  }
  *(ulong *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x20) = 0xd000000000000010;
  *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x28) = 0x800000010f1aff70;
  uVar1 = uVar3 + 3;
  if (uVar10 <= uVar2) {
    func_0x000100403514(1 < uVar9,uVar1,1);
  }
  *(ulong *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x20) = 0xd000000000000012;
  *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x28) = 0x800000010f1aff90;
  if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
    func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar3 + 4,1);
  }
  *(ulong *)(puVar4 + 0x10) = uVar3 + 4;
  *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x20) = 0xd000000000000012;
  *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x28) = 0x800000010f1affd0;
  uVar6 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar7 = uVar6;
  func_0x00010011d734();
  uVar8 = 0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar6,uVar7);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(uVar8);
  return;
}



/* Entry: 103c2c274; end: 103c2c2f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2c274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff9310) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff9318) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff9320) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff9328) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c2c2f4; end: 103c2c397; -[_TtC20ValdiServiceRegistry32ValdiUserScopedServiceMarshaller registerWithGlobalMarshaller] */

void FUN_103c2c2f4(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001009cde20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c2c398; end: 103c2c423; -[_TtC20ValdiServiceRegistry32ValdiUserScopedServiceMarshaller unregisterFromGlobalMarshaller] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2c398(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [24];
  long alStack_50 [6];
  
  func_0x000107c61174();
  func_0x000100083b20(alStack_50);
  func_0x000107c61170(param_1);
  lVar2 = alStack_50[0];
  lVar1 = _DAT_112ff9120;
  alStack_50[4] = 0;
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
  func_0x000107c61428(lVar2 + _DAT_112ff9120,auStack_68,0x21,0);
  FUN_103c27bb4(alStack_50,lVar2 + lVar1);
  func_0x000107c614a8(auStack_68);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 103c2c424; end: 103c2c46f; -[_TtC20ValdiServiceRegistry32ValdiUserScopedServiceMarshaller marshalServiceWith:] */

void FUN_103c2c424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001009bd864();
  func_0x000103c28334(param_3);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c2c470; end: 103c2c4cf; -[_TtC20ValdiServiceRegistry32ValdiUserScopedServiceMarshaller init] */

void FUN_103c2c470(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiServiceRegistry.ValdiUserScopedServiceMarshaller",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c2c49c);
  (*pcVar1)();
}



/* Entry: 103c2c4d0; end: 103c2c55b; -[_TtC20ValdiServiceRegistry32ValdiUserScopedServiceMarshaller .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c2c4ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c2c50c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c2c4f0) */
/* WARNING: Removing unreachable block (ram,0x000103c2c510) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2c4d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff9328));
  return;
}



/* Entry: 103c2c55c; end: 103c2c587;  */

void FUN_103c2c55c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103c2c588; end: 103c2c6df;  */

void FUN_103c2c588(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ff9570;
  func_0x0001000285a8(0x112ff9570,&UNK_10dc67e80);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103c2c6e0; end: 103c2c70b;  */

void FUN_103c2c6e0(void)

{
  FUN_103c2c804(0x112ff95c8,0x112ff95d0,&UNK_10dc67ef8);
  return;
}



/* Entry: 103c2c70c; end: 103c2c70f;  */

void FUN_103c2c70c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff95d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc683b0;
  func_0x000107c61520(&UNK_10dc683b0,&UNK_1106ecd68);
  puRam0000000112ff95d8 = puVar1;
  return;
}



/* Entry: 103c2c710; end: 103c2c74f;  */

void FUN_103c2c710(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff95d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc683b0;
  func_0x000107c61520(&UNK_10dc683b0,&UNK_1106ecd68);
  puRam0000000112ff95d8 = puVar1;
  return;
}



/* Entry: 103c2c750; end: 103c2c753;  */

void FUN_103c2c750(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff95e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc68428;
  func_0x000107c61520(&DAT_10dc68428,&UNK_1106ecd68);
  puRam0000000112ff95e0 = puVar1;
  return;
}



/* Entry: 103c2c754; end: 103c2c793;  */

void FUN_103c2c754(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff95e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc68428;
  func_0x000107c61520(&DAT_10dc68428,&UNK_1106ecd68);
  puRam0000000112ff95e0 = puVar1;
  return;
}



/* Entry: 103c2c794; end: 103c2c797;  */

void FUN_103c2c794(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc67f54;
  func_0x000107c61520(&UNK_10dc67f54,&UNK_1106ec548);
  puRam0000000112ff9638 = puVar1;
  return;
}



/* Entry: 103c2c798; end: 103c2c803;  */

void FUN_103c2c798(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc67f54;
  func_0x000107c61520(&UNK_10dc67f54,&UNK_1106ec548);
  puRam0000000112ff9638 = puVar1;
  return;
}



/* Entry: 103c2c804; end: 103c2c847;  */

void FUN_103c2c804(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103c2c848; end: 103c2c84b;  */

void FUN_103c2c848(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc67fc8;
  func_0x000107c61520(&UNK_10dc67fc8,&UNK_1106ec548);
  puRam0000000112ff9650 = puVar1;
  return;
}



/* Entry: 103c2c84c; end: 103c2c88b;  */

void FUN_103c2c84c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc67fc8;
  func_0x000107c61520(&UNK_10dc67fc8,&UNK_1106ec548);
  puRam0000000112ff9650 = puVar1;
  return;
}



/* Entry: 103c2c88c; end: 103c2c88f;  */

void FUN_103c2c88c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9658 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc67f7c;
  func_0x000107c61520(&UNK_10dc67f7c,&UNK_1106ec548);
  puRam0000000112ff9658 = puVar1;
  return;
}



/* Entry: 103c2c890; end: 103c2c8cf;  */

void FUN_103c2c890(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9658 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc67f7c;
  func_0x000107c61520(&UNK_10dc67f7c,&UNK_1106ec548);
  puRam0000000112ff9658 = puVar1;
  return;
}



/* Entry: 103c2c8d0; end: 103c2ca43;  */

int FUN_103c2c8d0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xef < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x10) {
      iVar2 = 4;
    }
    if (param_2 + 0x10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103c2c94c;
        goto LAB_103c2c930;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103c2c930:
      return ((uint)*param_1 | uVar1 << 8) - 0x10;
    }
  }
LAB_103c2c94c:
  iVar2 = *param_1 - 0x11;
  if (*param_1 < 0x11) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103c2ca44; end: 103c2ca6f;  */

void FUN_103c2ca44(void)

{
  func_0x0001000285a8(0x112ff9740,&UNK_10dc680a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}


