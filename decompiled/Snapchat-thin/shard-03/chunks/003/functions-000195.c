/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026dc0e8; end: 1026dc1c7;  */

void FUN_1026dc0e8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61604(unaff_x20 + 0x10,param_1);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar3);
  func_0x000107c61428(unaff_x20 + 0x28,auStack_48,0x21,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  func_0x0001000c6518(unaff_x20 + 0x28,uVar1);
  (**(code **)(lVar2 + 0x30))(lVar3,uVar1,lVar2);
  func_0x000107c614a8(auStack_48);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar3);
  func_0x000107c61428(unaff_x20 + 0x50,auStack_48,0x21,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  lVar2 = *(long *)(unaff_x20 + 0x70);
  func_0x0001000c6518(unaff_x20 + 0x50,uVar1);
  (**(code **)(lVar2 + 0x30))(lVar3,uVar1,lVar2);
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 1026dc1c8; end: 1026dc2c3;  */

undefined * FUN_1026dc1c8(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uStack_80;
  undefined1 auStack_78 [40];
  
  puVar4 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar4 != (undefined *)0x0) {
    func_0x0001000285a8(0x112eb73d0,&UNK_10dacddb0);
    puVar2 = puVar4;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    do {
      uVar3 = 0;
      func_0x0001026dc30c(param_1);
      uVar5 = (ulong)uStack_80;
      FUN_1026dbbd8();
      if ((uVar3 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026dc2c0);
        (*pcVar1)();
      }
      uVar3 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar3 + 0x40) = *(ulong *)(puVar2 + uVar3 + 0x40) | 1L << (uVar5 & 0x3f);
      *(uint *)(*(long *)(puVar2 + 0x30) + uVar5 * 4) = uStack_80;
      func_0x0001026dafec(auStack_78,*(long *)(puVar2 + 0x38) + uVar5 * 0x28);
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026dc2c4);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      puVar4 = puVar4 + -1;
    } while (puVar4 != (undefined *)0x0);
  }
  return puVar2;
}



/* Entry: 1026dc2c4; end: 1026dc35b;  */

undefined8 FUN_1026dc2c4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112eb73c8;
  func_0x0001000285a8(0x112eb73c8,&UNK_10dacdda8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1026dc35c; end: 1026dc4b7;  */

undefined8 * FUN_1026dc35c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c615f0();
  return param_1;
}



/* Entry: 1026dc4b8; end: 1026dc4c7; -[MapUpsellServices meTrayUpsellProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026dc4b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb73e0));
  return;
}



/* Entry: 1026dc4c8; end: 1026dc55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026dc4c8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb73e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026dc560; end: 1026dc5bf; -[MapUpsellServices init] */

void FUN_1026dc560(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapUpsellServices.MapUpsellServices",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026dc58c);
  (*pcVar1)();
}



/* Entry: 1026dc5c0; end: 1026dc5cf; -[MapUpsellServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026dc5c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb73e0));
  return;
}



/* Entry: 1026dc5d0; end: 1026dc5ef;  */

void FUN_1026dc5d0(void)

{
  func_0x000107c61168(&PTR_PTR_1128595a8);
  return;
}



/* Entry: 1026dc5f0; end: 1026dc6fb;  */

void FUN_1026dc5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb7410,&UNK_10dacde40);
  puVar1 = &UNK_11053a5d8;
  func_0x000107c613fc(&UNK_11053a5d8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x1026dc688,puVar1);
  return;
}



/* Entry: 1026dc6fc; end: 1026dc73f;  */

void FUN_1026dc6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1026dc740; end: 1026dc8f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1026dc740(void)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar3 = uStack_48;
  uVar2 = uStack_48;
  func_0x000107c4c390();
  func_0x000107c61170(uVar3);
  if ((uVar2 & 1) == 0) {
    func_0x000100083b20(&uStack_48);
    uVar3 = uStack_48;
    uVar2 = uStack_48;
    func_0x000107c5d9dc();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar3 = uVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (uVar3 != 0) {
      func_0x000100083b20(&uStack_48);
      uVar4 = *(ulong *)(uStack_48 + _DAT_112fcd5d8);
      func_0x000107c61174();
      func_0x000107c61170(uStack_48);
      uVar2 = uVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar2 != 0) {
        uVar4 = uVar3;
        func_0x000107c3e488();
        if ((uVar4 != 0) && (uVar4 = uVar2, func_0x000107c4493c(), (int)uVar4 != 0)) {
          uVar4 = uVar3;
          func_0x000107c3e488();
          uVar5 = uVar2;
          func_0x000107c3db3c();
          func_0x000107c61180();
          uVar6 = uVar5;
          func_0x000107c5fe10();
          func_0x000107c61170(uVar5);
          func_0x000107c615e8(uVar3);
          func_0x000107c615e8(uVar2);
          lVar7 = *(long *)(uVar6 + 0x10);
          func_0x000107c6142c(uVar6);
          if (uVar4 != 1) {
            if (lVar7 == 0) {
              return 1;
            }
            return 2;
          }
          if (lVar7 == 0) {
            return 3;
          }
          return 4;
        }
        func_0x000107c615e8(uVar3);
        uVar3 = uVar2;
      }
      func_0x000107c615e8(uVar3);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 1026dc8f8; end: 1026dc903;  */

void FUN_1026dc8f8(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001026dc944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1026dc904; end: 1026dc947;  */

void FUN_1026dc904(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001026dc944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1026dc948; end: 1026dc96b;  */

uint FUN_1026dc948(uint param_1)

{
  FUN_1026dc740();
  return param_1 & 0xff;
}



/* Entry: 1026dc96c; end: 1026dc97b;  */

undefined1  [16] FUN_1026dc96c(void)

{
  return ZEXT816(0x11053a610);
}



/* Entry: 1026dc97c; end: 1026dc99b;  */

void FUN_1026dc97c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb7458);
  return;
}



/* Entry: 1026dc99c; end: 1026dc9af;  */

bool FUN_1026dc99c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1026dc9b0; end: 1026dca5b;  */

void FUN_1026dc9b0(void)

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



/* Entry: 1026dca5c; end: 1026dca5f;  */

void FUN_1026dca5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb74c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacdef0;
  func_0x000107c61520(&UNK_10dacdef0,&UNK_11053a6e0);
  puRam0000000112eb74c8 = puVar1;
  return;
}



/* Entry: 1026dca60; end: 1026dca9f;  */

void FUN_1026dca60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb74c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacdef0;
  func_0x000107c61520(&UNK_10dacdef0,&UNK_11053a6e0);
  puRam0000000112eb74c8 = puVar1;
  return;
}



/* Entry: 1026dcaa0; end: 1026dcc03;  */

int FUN_1026dcaa0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1026dcb1c;
        goto LAB_1026dcb00;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1026dcb00:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1026dcb1c:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1026dcc04; end: 1026dcc73;  */

undefined1 FUN_1026dcc04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10dace0b0;
  func_0x000107c614e0(&UNK_10dace0b0);
  puVar2 = &UNK_10dace0d8;
  func_0x000107c614e0(&UNK_10dace0d8);
  func_0x000107c5f20c(&uStack_31);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return uStack_31;
}



/* Entry: 1026dcc74; end: 1026dcdd7;  */

/* WARNING: Possible PIC construction at 0x0001026dcce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026dcd40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026dccec) */
/* WARNING: Removing unreachable block (ram,0x0001026dcd44) */

long FUN_1026dcc74(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar11 = *param_1;
  lVar14 = param_1[1];
  uVar12 = param_1[2];
  lVar6 = param_1[4];
  lVar1 = param_1[5];
  uVar13 = param_1[6];
  lVar17 = param_1[7];
  lVar2 = param_1[8];
  lVar7 = param_1[9];
  lVar15 = *param_2;
  lVar16 = param_2[1];
  lVar3 = param_2[4];
  lVar8 = param_2[5];
  uVar4 = param_2[6];
  lVar9 = param_2[7];
  lVar5 = param_2[8];
  lVar10 = param_2[9];
  if ((lVar11 == lVar15) && (lVar14 == lVar16)) {
    if (((uVar12 != param_2[2]) || (param_1[3] != param_2[3])) &&
       (func_0x000107c605b8(uVar12,param_1[3],param_2[2],param_2[3],0), (uVar12 & 1) == 0)) {
      return 0;
    }
    lVar11 = lVar6;
    lVar14 = lVar1;
    lVar15 = lVar3;
    lVar16 = lVar8;
    if ((lVar6 == lVar3) && (lVar1 == lVar8)) {
      if (((uVar13 != uVar4) || (lVar17 != lVar9)) &&
         (func_0x000107c605b8(uVar13,lVar17,uVar4,lVar9,0), (uVar13 & 1) == 0)) {
        return 0;
      }
      lVar11 = lVar2;
      lVar14 = lVar7;
      lVar15 = lVar5;
      lVar16 = lVar10;
      if ((lVar2 == lVar5) && (lVar7 == lVar10)) {
        return 1;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar11,lVar14,lVar15,lVar16,0);
  return lVar11;
}



/* Entry: 1026dcdd8; end: 1026dceaf;  */

/* WARNING: Possible PIC construction at 0x0001026dce28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026dce2c) */

void FUN_1026dcdd8(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10dace0b0;
  func_0x000107c614e0(&UNK_10dace0b0);
  puVar2 = &UNK_10dace0d8;
  func_0x000107c614e0(&UNK_10dace0d8);
  func_0x000107c5f20c(param_1,uVar3,puVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1026dceb0; end: 1026dcef3;  */

void FUN_1026dceb0(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001026dcef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1026dcef4; end: 1026dcf5f;  */

void FUN_1026dcef4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026dcf60,uVar1,uVar2);
  return;
}



/* Entry: 1026dcf60; end: 1026dd003;  */

void FUN_1026dcf60(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x0001090222d4();
    puVar3 = &UNK_10dace0b0;
    func_0x000107c614e0(&UNK_10dace0b0);
    puVar4 = &UNK_10dace0d8;
    func_0x000107c614e0(&UNK_10dace0d8);
    *(undefined1 *)(unaff_x22 + 0x38) = (char)lVar2;
    func_0x000107c5f210((undefined1 *)(unaff_x22 + 0x38),lVar1,puVar3,puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001026dd000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar1 == 0);
  return;
}



/* Entry: 1026dd004; end: 1026dd0db; -[_TtC33MapViewDebugPluginsImplementation24MapDebugOverlayViewModel tweakDidChange:] */

void FUN_1026dd004(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_11053a850;
  func_0x000107c613fc(&UNK_11053a850,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11053a878;
  func_0x000107c613fc(&UNK_11053a878,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dace090;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0x31;
  func_0x0001001ca524(0x31,0,0x3c,4,0,0,&UNK_10dace0a0,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026dd0dc; end: 1026dd13b; -[_TtC33MapViewDebugPluginsImplementation24MapDebugOverlayViewModel init] */

void FUN_1026dd0dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapViewDebugPluginsImplementation.MapDebugOverlayViewModel",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026dd108);
  (*pcVar1)();
}



/* Entry: 1026dd13c; end: 1026dd213; -[_TtC33MapViewDebugPluginsImplementation24MapDebugOverlayViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026dd13c(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = _DAT_112eb74d0;
  lVar2 = 0x112d4ffc8;
  func_0x0001000285a8(0x112d4ffc8,&UNK_10d9de530);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  lVar1 = _DAT_112eb74d8;
  lVar2 = 0x112eb7548;
  func_0x0001000285a8(0x112eb7548,&UNK_10dace100);
  pcVar3 = *(code **)(*(long *)(lVar2 + -8) + 8);
  (*pcVar3)(param_1 + lVar1,lVar2);
  (*pcVar3)(param_1 + _DAT_112eb74e0,lVar2);
  lVar1 = _DAT_112eb74e8;
  lVar2 = 0x112eb7550;
  func_0x0001000285a8(0x112eb7550,&UNK_10dace108);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb74f0));
  return;
}



/* Entry: 1026dd214; end: 1026dd21b;  */

void FUN_1026dd214(void)

{
  if (lRam0000000112eb7520 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e6ed334);
  return;
}



/* Entry: 1026dd21c; end: 1026dd253;  */

void FUN_1026dd21c(undefined8 param_1)

{
  if (lRam0000000112eb7520 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6ed334);
  return;
}



/* Entry: 1026dd254; end: 1026dd3eb;  */

void FUN_1026dd254(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000100f8b92c();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x112eb7530;
    lVar1 = 0x13f;
    func_0x0001026dd330(0x13f,0x112eb7530,0x112d35ff8,&UNK_10d900cd0);
    if (uVar2 < 0x40) {
      lStack_40 = *(long *)(lVar1 + -8) + 0x40;
      uVar2 = 0x112eb7538;
      lVar1 = 0x13f;
      lStack_38 = lStack_40;
      func_0x0001026dd330(0x13f,0x112eb7538,0x112eb7540,&UNK_10dace008);
      if (uVar2 < 0x40) {
        lStack_30 = *(long *)(lVar1 + -8) + 0x40;
        puStack_28 = PTR___sBoWV_11034d678 + 0x40;
        func_0x000107c61630(param_1,0x100,5,&lStack_48,param_1 + 0x50);
      }
    }
  }
  return;
}



/* Entry: 1026dd3ec; end: 1026dd467;  */

undefined8 * FUN_1026dd3ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 1026dd468; end: 1026dd533;  */

undefined8 * FUN_1026dd468(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1026dd534; end: 1026dd5a7;  */

undefined8 * FUN_1026dd534(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1026dd5a8; end: 1026dd65f;  */

int FUN_1026dd5a8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026dd660; end: 1026dd69b;  */

void FUN_1026dd660(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c5f1e8();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1026dd69c; end: 1026dd727;  */

void FUN_1026dd69c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026dd6e4;
  plVar3[5] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026dcf60,lVar1,lVar2);
  return;
}



/* Entry: 1026dd728; end: 1026dd797;  */

void FUN_1026dd728(undefined8 param_1)

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
  plVar3[1] = (long)FUN_1026dd798;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1026dd798; end: 1026dd7d3;  */

void FUN_1026dd798(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026dd7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026dd7d4; end: 1026dd93b;  */

int FUN_1026dd7d4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 7) {
      iVar2 = 4;
    }
    if (param_2 + 7 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1026dd850;
        goto LAB_1026dd834;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1026dd834:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_1026dd850:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1026dd93c; end: 1026dd98b;  */

void FUN_1026dd93c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eb7558 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eb7560;
  func_0x00010002969c(0x112eb7560,&UNK_10dace130);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112eb7558 = puVar2;
  return;
}



/* Entry: 1026dd98c; end: 1026dd99f;  */

bool FUN_1026dd98c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1026dd9a0; end: 1026dda8b;  */

void FUN_1026dd9a0(void)

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



/* Entry: 1026dda8c; end: 1026dda8f;  */

void FUN_1026dda8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb7568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dace170;
  func_0x000107c61520(&UNK_10dace170,&UNK_11053a940);
  puRam0000000112eb7568 = puVar1;
  return;
}



/* Entry: 1026dda90; end: 1026ddacf;  */

void FUN_1026dda90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb7568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dace170;
  func_0x000107c61520(&UNK_10dace170,&UNK_11053a940);
  puRam0000000112eb7568 = puVar1;
  return;
}



/* Entry: 1026ddad0; end: 1026ddb27;  */

void FUN_1026ddad0(undefined8 param_1)

{
  func_0x0001000285a8(0x112eae840,&UNK_10dac2ed0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x0001002acf1c(FUN_1026ddb8c,param_1);
  return;
}



/* Entry: 1026ddb28; end: 1026ddb8b;  */

void FUN_1026ddb28(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026ddf7c();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11053a9a8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026ddb8c; end: 1026ddb93;  */

void FUN_1026ddb8c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026ddf7c();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_11053a9a8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026ddb94; end: 1026ddbc3;  */

void FUN_1026ddb94(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 1026ddbc4; end: 1026ddf0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ddbc4(byte *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_68;
  
  func_0x0001000ad07c();
  if ((((*param_1 & 1) != 0) || (func_0x0001005e3364(), *param_1 == 1)) &&
     (*(long *)(unaff_x20 + 0x18) == 0)) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fecfb0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5c42c();
      func_0x000107c61180();
      if (lVar3 == 0) {
        lVar3 = lVar2;
        func_0x000107c61174(lVar2);
      }
      lVar4 = lVar2;
      func_0x000107c4c458();
      func_0x000107c61180();
      lVar5 = 0;
      func_0x0001026dedec();
      func_0x000107c613fc();
      *(long *)(lVar5 + 0x10) = lVar4;
      lStack_68 = lVar5;
      func_0x0001000285a8(0x112eb7578,&UNK_10dace1d8);
      func_0x000107c610f8();
      func_0x000107c6157c(lVar5);
      plVar6 = &lStack_68;
      func_0x000107c5f458();
      plVar7 = plVar6;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ddefc);
        (*pcVar1)();
      }
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c3fa94();
      func_0x000107c61180();
      func_0x000107c52b50(plVar7);
      func_0x000107c61170(plVar7);
      func_0x000107c61170(puVar8);
      plVar7 = plVar6;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ddf00);
        (*pcVar1)();
      }
      func_0x000107c5a050();
      func_0x000107c61170(plVar7);
      plVar7 = plVar6;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ddf04);
        (*pcVar1)();
      }
      func_0x000107c3d89c(lVar3);
      func_0x000107c61170();
      func_0x0001008478a8();
      func_0x000107c613fc();
      plVar7[3] = 5;
      plVar7[2] = 2;
      plVar9 = plVar6;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ddf08);
        (*pcVar1)();
      }
      plVar10 = plVar9;
      func_0x000107c4acb0();
      func_0x000107c61180();
      func_0x000107c61170(plVar9);
      lVar4 = lVar3;
      func_0x000107c4acb0(lVar3);
      func_0x000107c61180();
      plVar9 = plVar10;
      func_0x000107c40284(0x4014000000000000);
      func_0x000107c61180();
      func_0x000107c61170(plVar10);
      func_0x000107c61170(lVar4);
      plVar7[4] = (long)plVar9;
      plVar9 = plVar6;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ddf0c);
        (*pcVar1)();
      }
      puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      plVar10 = plVar9;
      func_0x000107c3f764();
      func_0x000107c61180();
      func_0x000107c61170(plVar9);
      lVar4 = lVar3;
      func_0x000107c3f764(lVar3);
      func_0x000107c61180();
      plVar9 = plVar10;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(plVar10);
      func_0x000107c61170(lVar4);
      plVar7[5] = (long)plVar9;
      uVar11 = 0;
      func_0x000100847984(0);
      plVar9 = plVar7;
      func_0x000107c5fc48(plVar7,uVar11);
      func_0x000107c61574(plVar7);
      func_0x000107c3d048(puVar8);
      func_0x000107c61170(plVar9);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61574(lVar5);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
      *(long **)(unaff_x20 + 0x18) = plVar6;
      func_0x000107c61170(uVar11);
    }
  }
  return;
}



/* Entry: 1026ddf0c; end: 1026ddf37;  */

void FUN_1026ddf0c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026ddf38; end: 1026ddf43;  */

void FUN_1026ddf38(void)

{
  return;
}



/* Entry: 1026ddf44; end: 1026ddf63;  */

void FUN_1026ddf44(void)

{
  FUN_1026ddbc4();
  return;
}



/* Entry: 1026ddf64; end: 1026ddf7b;  */

void FUN_1026ddf64(void)

{
  return;
}



/* Entry: 1026ddf7c; end: 1026ddf9b;  */

void FUN_1026ddf7c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb75c0);
  return;
}



/* Entry: 1026ddf9c; end: 1026ddfbb;  */

undefined1  [16] FUN_1026ddf9c(void)

{
  return ZEXT816(0x11053aa18);
}



/* Entry: 1026ddfbc; end: 1026de1b3;  */

void FUN_1026ddfbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uStack_78;
  undefined8 *puVar10;
  
  uVar12 = param_6;
  func_0x000107c5f438();
  *param_1 = uVar12;
  param_1[1] = 0x4000000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar4 = 0x112eb7628;
  func_0x0001000285a8(0x112eb7628,&UNK_10dace2b8);
  iVar2 = *(int *)(lVar4 + 0x2c);
  uVar12 = 0x112eb7570;
  func_0x0001000285a8(0x112eb7570,&UNK_10dace2c0);
  func_0x000107c61538();
  puVar5 = &UNK_10dace2d0;
  uStack_78 = uVar12;
  func_0x000107c614e0(&UNK_10dace2d0);
  func_0x000107c6157c(param_6);
  uVar12 = 0x112eb7560;
  func_0x0001000285a8(0x112eb7560,&UNK_10dace130);
  uVar6 = 0x112eb7660;
  func_0x0001000285a8(0x112eb7660,&UNK_10dace2f0);
  uVar7 = 0x112eb7668;
  func_0x0001026dec60(0x112eb7668,0x112eb7560,&UNK_10dace130,PTR___sSayxGSksMc_11034dd18);
  uVar8 = uVar7;
  FUN_1026de4e4();
  uVar9 = uVar8;
  FUN_1026de524();
  puVar10 = &uStack_78;
  func_0x000107c5f788((long)param_1 + (long)iVar2,puVar10,puVar5,0x1026de4dc,param_6,uVar12,uVar6,
                      uVar7,uVar8,uVar9);
  uVar3 = SUB81(puVar10,0);
  func_0x000107c5f56c();
  uVar12 = 0x4000000000000000;
  func_0x000107c5f280();
  lVar4 = 0x112eb7688;
  func_0x0001000285a8(0x112eb7688,&UNK_10dace300);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  *puVar1 = uVar3;
  *(undefined8 *)(puVar1 + 8) = uVar12;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6dc();
  puVar11 = puVar5;
  func_0x000107c5f6d4(0x3fe0000000000000);
  func_0x000107c61574();
  uVar3 = SUB81(puVar5,0);
  func_0x000107c5f56c();
  lVar4 = 0x112eb7690;
  func_0x0001000285a8(0x112eb7690,&UNK_10dace308);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  *param_1 = puVar11;
  *(undefined1 *)(param_1 + 1) = uVar3;
  return;
}



/* Entry: 1026de1b4; end: 1026de4c7;  */

void FUN_1026de1b4(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  char *pcVar10;
  long lVar11;
  undefined8 uVar12;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x112e02cd8;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112e02cd8,&UNK_10d9d5220);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&lStack_90 - extraout_x8;
  lVar3 = 0x112eb7698;
  func_0x0001000285a8(0x112eb7698,&UNK_10dace310);
  lStack_90 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_90 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  bVar1 = *param_2;
  if (bVar1 < 4) {
    puStack_78 = (undefined *)0xe200000000000000;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        lStack_80 = 0x2b5a;
      }
      else {
        lStack_80 = 0x2d5a;
      }
    }
    else if (bVar1 == 2) {
      lStack_80 = 0x2b54;
    }
    else {
      lStack_80 = 0x2d54;
    }
  }
  else {
    puStack_78 = (undefined *)0xe100000000000000;
    if (bVar1 < 6) {
      if (bVar1 == 4) {
        lStack_80 = 0x3c;
      }
      else {
        lStack_80 = 0x3e;
      }
    }
    else if (bVar1 == 6) {
      lStack_80 = 0x5e;
    }
    else {
      lStack_80 = 0x76;
    }
  }
  uVar12 = 0xd000000000000014;
  puVar4 = &UNK_11053aa40;
  func_0x000107c613fc(&UNK_11053aa40,0x19,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  puVar4[0x18] = bVar1;
  puVar5 = puVar4;
  func_0x000100e8b654();
  func_0x000107c6157c(param_3);
  func_0x000107c5f744(lVar11,&lStack_80,FUN_1026de660,puVar4,PTR___sSSN_11034da80,puVar5);
  uVar6 = 0x112e02cf0;
  func_0x0001026dec60(0x112e02cf0,0x112e02cd8,&UNK_10d9d5220,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar7 = uVar6;
  FUN_1026de620();
  func_0x000107c5f60c(lVar11 - extraout_x8_00);
  (**(code **)(lVar9 + 8))(lVar11,lVar2);
  if (bVar1 < 4) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        pcVar10 = "map_ui_test_tilt_increase";
      }
      else {
        pcVar10 = "map_ui_test_tilt_decrease";
      }
      pcVar10 = pcVar10 + -0x20;
      uVar12 = 0xd000000000000019;
      goto LAB_1026de454;
    }
    if (bVar1 == 0) {
      pcVar10 = "map_ui_test_zoom_out";
      uVar12 = 0xd000000000000013;
      goto LAB_1026de454;
    }
    pcVar10 = "map_ui_test_zoom_out";
  }
  else if (bVar1 < 6) {
    if (bVar1 != 4) {
      pcVar10 = "map_ui_test_pan_up";
      uVar12 = 0xd000000000000015;
      goto LAB_1026de454;
    }
    pcVar10 = "map_ui_test_pan_left";
  }
  else {
    if (bVar1 == 6) {
      pcVar10 = "map_ui_test_pan_down";
      uVar12 = 0xd000000000000012;
      goto LAB_1026de454;
    }
    pcVar10 = "map_ui_test_pan_down";
  }
  pcVar10 = pcVar10 + -0x20;
LAB_1026de454:
  puStack_78 = &UNK_11053aa68;
  plVar8 = &lStack_80;
  lStack_80 = lVar2;
  uStack_70 = uVar6;
  uStack_68 = uVar7;
  func_0x000107c614f4(plVar8,
                      PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_110349490,1
                     );
  func_0x000107c5f674(uStack_88,uVar12,(ulong)pcVar10 | 0x8000000000000000,lVar3,plVar8);
  func_0x000107c6142c((ulong)pcVar10 | 0x8000000000000000);
  (**(code **)(lStack_90 + 8))(lVar11 - extraout_x8_00,lVar3);
  return;
}



/* Entry: 1026de4c8; end: 1026de4e3;  */

void FUN_1026de4c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 1026de4e4; end: 1026de523;  */

void FUN_1026de4e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb7670 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dace198;
  func_0x000107c61520(&UNK_10dace198,&UNK_11053a940);
  puRam0000000112eb7670 = puVar1;
  return;
}



/* Entry: 1026de524; end: 1026de61f;  */

void FUN_1026de524(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (puRam0000000112eb7678 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eb7660;
  func_0x00010002969c(0x112eb7660,&UNK_10dace2f0);
  uVar2 = 0x112e02cd8;
  func_0x00010002969c(0x112e02cd8,&UNK_10d9d5220);
  uVar3 = 0x112e02cf0;
  func_0x0001026dec60(0x112e02cf0,0x112e02cd8,&UNK_10d9d5220,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar4 = uVar3;
  FUN_1026de620();
  puStack_48 = &UNK_11053aa68;
  puVar5 = &uStack_50;
  uStack_50 = uVar2;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  func_0x000107c614f4(puVar5,
                      PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_110349490,1
                     );
  uVar2 = 0x112d500b8;
  func_0x0001026dec20(0x112d500b8,PTR___s7SwiftUI31AccessibilityAttachmentModifierVMa_110349210,
                      PTR___s7SwiftUI31AccessibilityAttachmentModifierVAA04ViewE0AAMc_110349208);
  puVar6 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_60 = puVar5;
  uStack_58 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_60);
  puRam0000000112eb7678 = puVar6;
  return;
}



/* Entry: 1026de620; end: 1026de65f;  */

void FUN_1026de620(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb7680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dace350;
  func_0x000107c61520(&UNK_10dace350,&UNK_11053aa68);
  puRam0000000112eb7680 = puVar1;
  return;
}



/* Entry: 1026de660; end: 1026de687;  */

void FUN_1026de660(void)

{
  long unaff_x20;
  
  FUN_1026deca4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1026de688; end: 1026de697;  */

undefined1  [16] FUN_1026de688(void)

{
  return ZEXT816(0x11053aa68);
}



/* Entry: 1026de698; end: 1026de7c7;  */

void FUN_1026de698(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112eb76a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eb7690;
  func_0x00010002969c(0x112eb7690,&UNK_10dace308);
  uVar2 = uVar1;
  func_0x0001026de730();
  uVar3 = 0x112e02c70;
  func_0x0001026dec60(0x112e02c70,0x112e02c78,&UNK_10d9d5190,
                      PTR___s7SwiftUI24_BackgroundStyleModifierVyxGAA04ViewE0AAMc_110349100);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112eb76a0 = puVar4;
  return;
}



/* Entry: 1026de7c8; end: 1026de7d7;  */

void FUN_1026de7c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e6ed474,1);
  return;
}



/* Entry: 1026de7d8; end: 1026dea73;  */

void FUN_1026de7d8(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = 0;
  func_0x000107c5f58c();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f4ec(param_1);
  uVar13 = func_0x000107c5f598();
  (**(code **)(lVar12 + 0x68))
            (lVar11,*(undefined4 *)PTR___s7SwiftUI4FontV6DesignO7defaultyA2EmFWC_1103492d8,lVar5);
  lVar6 = lVar11;
  func_0x000107c5f5a4(0x4028000000000000,uVar13);
  (**(code **)(lVar12 + 8))(lVar11,lVar5);
  puVar7 = &UNK_10dace388;
  func_0x000107c614e0();
  lVar5 = 0x112e02d48;
  func_0x0001000285a8(0x112e02d48,&UNK_10d9d52f0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x24));
  *puVar1 = puVar7;
  puVar1[1] = lVar6;
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar9 = puVar8;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6dc();
  puVar7 = &UNK_10dace3c0;
  func_0x000107c614e0();
  lVar5 = 0x112e090a8;
  puVar10 = &UNK_10dace3f0;
  func_0x0001000285a8(0x112e090a8,&UNK_10dace3f0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x24));
  *puVar1 = puVar7;
  puVar1[1] = puVar9;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&uStack_80,0x4040000000000000,0,0x4038000000000000,0,lVar5,puVar10);
  lVar5 = 0x112eb76c0;
  func_0x0001000285a8(0x112eb76c0,&UNK_10dace3f8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x24));
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  puVar1[3] = uStack_68;
  puVar1[2] = uStack_70;
  puVar1[5] = uStack_58;
  puVar1[4] = uStack_60;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6dc();
  puVar7 = puVar8;
  func_0x000107c5f4f0();
  uVar13 = 0x3fe3333333333333;
  if (((ulong)puVar7 & 1) == 0) {
    uVar13 = 0x3fd3333333333333;
  }
  puVar7 = puVar8;
  func_0x000107c5f6d4(uVar13,0x3fe3333333333333);
  func_0x000107c61574();
  uVar4 = SUB81(puVar8,0);
  func_0x000107c5f56c();
  lVar5 = 0x112eb76c8;
  func_0x0001000285a8(0x112eb76c8,&UNK_10dace400);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x24));
  *puVar1 = puVar7;
  *(undefined1 *)(puVar1 + 1) = uVar4;
  lVar5 = 0x112eb76d0;
  func_0x0001000285a8(0x112eb76d0,&UNK_10dace408);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x24));
  lVar5 = 0;
  func_0x000107c5f37c();
  iVar3 = *(int *)(lVar5 + 0x14);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar5 = 0;
  func_0x000107c5f41c();
  (**(code **)(*(long *)(lVar5 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar5);
  auVar14 = NEON_fmov(0x4008000000000000,8);
  puVar1[1] = auVar14._8_8_;
  *puVar1 = auVar14._0_8_;
  lVar5 = 0x112d500a8;
  func_0x0001000285a8(0x112d500a8,&UNK_10d916460);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x24)) = 0x100;
  return;
}



/* Entry: 1026dea74; end: 1026dea77;  */

void FUN_1026dea74(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = 0;
  func_0x000107c5f58c();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f4ec(param_1);
  uVar13 = func_0x000107c5f598();
  (**(code **)(lVar12 + 0x68))
            (lVar11,*(undefined4 *)PTR___s7SwiftUI4FontV6DesignO7defaultyA2EmFWC_1103492d8,lVar5);
  lVar6 = lVar11;
  func_0x000107c5f5a4(0x4028000000000000,uVar13);
  (**(code **)(lVar12 + 8))(lVar11,lVar5);
  puVar7 = &UNK_10dace388;
  func_0x000107c614e0();
  lVar5 = 0x112e02d48;
  func_0x0001000285a8(0x112e02d48,&UNK_10d9d52f0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x24));
  *puVar1 = puVar7;
  puVar1[1] = lVar6;
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar9 = puVar8;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6dc();
  puVar7 = &UNK_10dace3c0;
  func_0x000107c614e0();
  lVar5 = 0x112e090a8;
  puVar10 = &UNK_10dace3f0;
  func_0x0001000285a8(0x112e090a8,&UNK_10dace3f0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x24));
  *puVar1 = puVar7;
  puVar1[1] = puVar9;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&uStack_80,0x4040000000000000,0,0x4038000000000000,0,lVar5,puVar10);
  lVar5 = 0x112eb76c0;
  func_0x0001000285a8(0x112eb76c0,&UNK_10dace3f8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x24));
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  puVar1[3] = uStack_68;
  puVar1[2] = uStack_70;
  puVar1[5] = uStack_58;
  puVar1[4] = uStack_60;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6dc();
  puVar7 = puVar8;
  func_0x000107c5f4f0();
  uVar13 = 0x3fe3333333333333;
  if (((ulong)puVar7 & 1) == 0) {
    uVar13 = 0x3fd3333333333333;
  }
  puVar7 = puVar8;
  func_0x000107c5f6d4(uVar13,0x3fe3333333333333);
  func_0x000107c61574();
  uVar4 = SUB81(puVar8,0);
  func_0x000107c5f56c();
  lVar5 = 0x112eb76c8;
  func_0x0001000285a8(0x112eb76c8,&UNK_10dace400);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x24));
  *puVar1 = puVar7;
  *(undefined1 *)(puVar1 + 1) = uVar4;
  lVar5 = 0x112eb76d0;
  func_0x0001000285a8(0x112eb76d0,&UNK_10dace408);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x24));
  lVar5 = 0;
  func_0x000107c5f37c();
  iVar3 = *(int *)(lVar5 + 0x14);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar5 = 0;
  func_0x000107c5f41c();
  (**(code **)(*(long *)(lVar5 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar5);
  auVar14 = NEON_fmov(0x4008000000000000,8);
  puVar1[1] = auVar14._8_8_;
  *puVar1 = auVar14._0_8_;
  lVar5 = 0x112d500a8;
  func_0x0001000285a8(0x112d500a8,&UNK_10d916460);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x24)) = 0x100;
  return;
}



/* Entry: 1026dea78; end: 1026deca3;  */

void FUN_1026dea78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112eb76d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eb76d0;
  func_0x00010002969c(0x112eb76d0,&UNK_10dace408);
  uVar2 = uVar1;
  func_0x0001026deb10();
  uVar3 = 0x112e09040;
  func_0x0001026dec60(0x112e09040,0x112d500a8,&UNK_10d916460,
                      PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_1103487e8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112eb76d8 = puVar4;
  return;
}



/* Entry: 1026deca4; end: 1026dedc7;  */

void FUN_1026deca4(double param_1,undefined8 param_2,double param_3,byte param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  
  uVar1 = (uint)param_4;
  if (2 < uVar1) {
    if (uVar1 - 4 < 4) {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000107c5dfdc(uVar2);
      dVar3 = param_1;
      func_0x000107c3f750(uVar2);
      if (param_4 != 6) {
        param_3 = param_1;
      }
      if (param_4 < 6) {
        param_3 = dVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x00010c17a6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_3,uVar2,PTR_s_setCenterCoordinate_animated__11263c3d8,1);
      return;
    }
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c4e788(uVar2);
    dVar3 = -10.0;
LAB_1026deda8:
                    /* WARNING: Could not recover jumptable at 0x00010c1dbe70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1 + dVar3,uVar2,PTR_s_setPitch_animated__1126549c0,1);
    return;
  }
  if (uVar1 == 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c5ea20(uVar2);
    dVar3 = 1.0;
  }
  else {
    if (uVar1 != 1) {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000107c4e788(uVar2);
      dVar3 = 10.0;
      goto LAB_1026deda8;
    }
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c5ea20(uVar2);
    dVar3 = -1.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c227c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 + dVar3,uVar2,PTR_s_setZoomLevel_animated__112667928,1);
  return;
}



/* Entry: 1026dedc8; end: 1026dee0b;  */

void FUN_1026dedc8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026dee0c; end: 1026defb7;  */

void FUN_1026dee0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb7790,&UNK_10dace440);
  puVar1 = &UNK_11053ab98;
  func_0x000107c613fc(&UNK_11053ab98,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(0x1026deed4,puVar1);
  return;
}



/* Entry: 1026defb8; end: 1026defc7;  */

undefined1  [16] FUN_1026defb8(void)

{
  return ZEXT816(0x11053abc0);
}



/* Entry: 1026defc8; end: 1026df013;  */

void FUN_1026defc8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026df014; end: 1026df12b;  */

void FUN_1026df014(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *param_2;
  func_0x0001000285a8(0x112eb77a0,&UNK_10dace4b8);
  puVar4 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec(puVar4);
  FUN_1026e0c1c(uVar5);
  func_0x000100082720("SendToScopeExposerServiceProvider",0x21,2);
  FUN_1026df418(uVar6,uVar1,uVar2);
  func_0x000100082720("VisitedByMessageSenderServiceProvider",0x25,2);
  FUN_1026e0cfc(uVar7,uVar6,puVar4,uVar5,uVar3);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar4);
  func_0x000100082720("VisitedBySharingWorkflowEntryPointProvider",0x2a,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1026df12c; end: 1026df177;  */

void FUN_1026df12c(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb77a8,&UNK_10dace4c0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026df1e4,param_1);
  return;
}



/* Entry: 1026df178; end: 1026df1e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026df178(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026df340();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112eb77b0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1026df1e4; end: 1026df1eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026df1e4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026df340();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb77b0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1026df1ec; end: 1026df237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026df1ec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb77b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026df238; end: 1026df2bf; -[_TtC33MapVisitedBySharingImplementation26MapVisitedBySharingBuilder build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026df238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 1026df2c0; end: 1026df31f; -[_TtC33MapVisitedBySharingImplementation26MapVisitedBySharingBuilder init] */

void FUN_1026df2c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapVisitedBySharingImplementation.MapVisitedBySharingBuilder",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026df2ec);
  (*pcVar1)();
}



/* Entry: 1026df320; end: 1026df33f; -[_TtC33MapVisitedBySharingImplementation26MapVisitedBySharingBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026df320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb77b0));
  return;
}



/* Entry: 1026df340; end: 1026df35f;  */

void FUN_1026df340(void)

{
  func_0x000107c61168(&PTR_PTR_112859750);
  return;
}



/* Entry: 1026df360; end: 1026df3ff;  */

void FUN_1026df360(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb77e0,&UNK_10dace550);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026df400,param_1);
  return;
}



/* Entry: 1026df400; end: 1026df417;  */

void FUN_1026df400(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  FUN_1026e1d3c(0);
  func_0x000107c610f8();
  func_0x0001026e1cac(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1026df418; end: 1026df4af;  */

void FUN_1026df418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb77e8,&UNK_10dace590);
  puVar1 = &UNK_11053acf0;
  func_0x000107c613fc(&UNK_11053acf0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1026df4b0,puVar1);
  return;
}



/* Entry: 1026df4b0; end: 1026df4e7;  */

/* WARNING: Possible PIC construction at 0x0001026df4cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026df4d0) */

void FUN_1026df4b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1026df4e8; end: 1026df4f7;  */

undefined1  [16] FUN_1026df4e8(void)

{
  return ZEXT816(0x11053ad18);
}



/* Entry: 1026df4f8; end: 1026df527;  */

/* WARNING: Possible PIC construction at 0x0001026df50c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026df510) */

void FUN_1026df4f8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1026df528; end: 1026df5e7;  */

undefined8 * FUN_1026df528(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 1026df5e8; end: 1026df633;  */

undefined8 * FUN_1026df5e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026df634; end: 1026df6df;  */

int FUN_1026df634(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026df6e0; end: 1026df78b;  */

void FUN_1026df6e0(void)

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



/* Entry: 1026df78c; end: 1026df807;  */

void FUN_1026df78c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1026df808; end: 1026dfa03;  */

void FUN_1026df808(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x22;
  ulong uVar12;
  ulong uVar13;
  ulong uStack_70;
  long alStack_68 [2];
  
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  uVar11 = *(ulong *)(unaff_x22 + 0xa8);
  if (uVar11 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar3 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar3 = uVar11;
    }
    func_0x000107c60480();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  if (uVar3 != 0) {
    uVar12 = 0;
    lVar9 = *(long *)(unaff_x22 + 0xa8);
    do {
      if ((uVar11 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1026df994);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(lVar9 + 0x20 + uVar12 * 8);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar12;
        func_0x0001011f491c(uVar12,*(undefined8 *)(unaff_x22 + 0xa8));
      }
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026df990);
        (*pcVar2)();
      }
      uVar13 = uVar12 + 1;
      uStack_70 = uVar6;
      FUN_1026dff28(alStack_68,&uStack_70,(undefined8 *)(unaff_x22 + 0x90));
      func_0x000107c61170(uVar6);
      lVar1 = alStack_68[0];
      if (alStack_68[0] != 0) {
        puVar5 = puVar7;
        func_0x000107c61550();
        if ((((int)puVar5 == 0) || ((long)puVar7 < 0)) ||
           (puVar5 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar7 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar7) {
              puVar4 = puVar7;
            }
            func_0x000107c60480(puVar4);
          }
          puVar5 = (undefined *)0x0;
          func_0x0001011f467c(0,puVar4 + 1,1,puVar7);
        }
        uVar10 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar6 = *(ulong *)(uVar10 + 0x10);
        puVar7 = puVar5;
        if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar6) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
          func_0x0001011f467c(puVar7,uVar6 + 1,1,puVar5);
          uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
        *(long *)(uVar10 + uVar6 * 8 + 0x20) = lVar1;
      }
      uVar12 = uVar12 + 1;
    } while (uVar13 != uVar3);
  }
  *(undefined **)(unaff_x22 + 0xe8) = puVar7;
  plVar8 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1026dfa04;
  lVar9 = *(long *)(unaff_x22 + 0xd0);
  plVar8[0xb] = (long)puVar7;
  plVar8[0xc] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026e05f0,0,0);
  return;
}



/* Entry: 1026dfa04; end: 1026dfa6b;  */

void FUN_1026dfa04(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xf8) = param_1;
  *(long *)(lVar2 + 0x100) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf0));
  func_0x000107c6142c(*(undefined8 *)(lVar2 + 0xe8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1026dfa6c;
  }
  else {
    pcVar1 = FUN_1026dfe30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1026dfa6c; end: 1026dfccf;  */

void FUN_1026dfa6c(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  func_0x000100083b20(unaff_x22 + 0x98);
  puVar8 = *(undefined1 **)(unaff_x22 + 0x98);
  puVar1 = puVar8;
  func_0x000107c4c3ec();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  puVar8 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0x108) = puVar8;
  func_0x000107c61170();
  if (puVar8 != (undefined1 *)0x0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar9 = *(undefined8 *)(unaff_x22 + 200);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x22 + 0xb8));
    *(undefined8 *)(unaff_x22 + 0x110) = uVar2;
    func_0x000107c5fadc(uVar7,uVar9);
    *(undefined8 *)(unaff_x22 + 0x118) = uVar7;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa0;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1026dfcd0;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,0);
    uVar7 = 0x112ea3c70;
    func_0x0001000285a8(0x112ea3c70,&UNK_10dac9f00);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1025242b8;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11053ae00;
    *(long *)(unaff_x22 + 0x70) = lVar3;
    func_0x000107c51eec(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
  FUN_1026e0898();
  puVar4 = &UNK_11053af48;
  func_0x000107c613f8(&UNK_11053af48,puVar1,0,0);
  *puVar1 = 0;
  func_0x000107c61654();
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
  puVar5 = &UNK_11053adc0;
  func_0x000107c613fc(&UNK_11053adc0,0x30,7);
  puVar5[0x10] = 0;
  *(undefined8 *)(puVar5 + 0x18) = uVar9;
  *(undefined8 *)(puVar5 + 0x20) = uVar7;
  *(undefined8 *)(puVar5 + 0x28) = uVar2;
  puVar6 = &UNK_11053ade8;
  func_0x000107c613fc(&UNK_11053ade8,0x20,7);
  *(undefined **)(puVar6 + 0x10) = &UNK_10dace600;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar2);
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dace610,puVar6,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x000107c61574(puVar6);
  func_0x000107c614ac(puVar4);
                    /* WARNING: Could not recover jumptable at 0x0001026dfccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


