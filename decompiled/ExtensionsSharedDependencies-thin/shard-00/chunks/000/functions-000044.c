/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000dfc58; end: 000dfca7;  */

void FUN_000dfc58(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_slowDealloc(*(long *)(unaff_x20 + 0x10),0xffffffffffffffff,0xffffffffffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000dfca8; end: 000dfda3;  */

void FUN_000dfca8(ulong param_1,long param_2,long param_3,byte param_4)

{
  code *pcVar1;
  ulong uVar2;
  byte bVar3;
  long unaff_x20;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_2 == 0) {
    bVar3 = 1;
    uVar2 = 0;
  }
  else {
    bVar3 = 1;
    param_3 = param_3 - param_2;
    uVar2 = 0;
    if ((param_3 != 0) && (param_3 < *(long *)(unaff_x20 + 0x18))) {
      lVar4 = *(long *)(unaff_x20 + 0x10);
      if (lVar4 == 0) goto LAB_000dfd9c;
      _memmove(lVar4,param_2,param_3);
      *(undefined1 *)(lVar4 + param_3) = 0;
      lStack_40 = lVar4;
      _strtod(lVar4,&lStack_40);
      if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0xdfda4);
        (*pcVar1)();
      }
      bVar3 = 1;
      uVar2 = 0;
      if ((lStack_40 != 0) && (*(long *)(unaff_x20 + 0x10) + param_3 == lStack_40)) {
        bVar3 = param_4 & 0x7fefffffffffffff < (param_1 & 0x7fffffffffffffff);
        uVar2 = 0;
        if (bVar3 == 0) {
          uVar2 = param_1;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail(uVar2,bVar3);
LAB_000dfd9c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xdfda0);
  (*pcVar1)();
}



/* Entry: 000dfda4; end: 000dfdd7;  */

void FUN_000dfda4(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(param_3 + 0x28))(param_2,param_3);
  __ss6HasherV8_combineyySuF();
  return;
}



/* Entry: 000dfdd8; end: 000e0543;  */

undefined8 FUN_000dfdd8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long alStack_c8 [13];
  
  lVar1 = param_1;
  _swift_conformsToProtocol(param_1,&DAT_00844958);
  if (lVar1 == 0 || param_1 == 0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(lVar1 + 8))(&uStack_f8,param_1,lVar1);
    (**(code **)(param_2 + 0x28))();
    alStack_c8[0xc] = lStack_f0;
    if (*(long *)(lStack_f0 + 0x10) == 0) {
      uVar2 = 0;
      plVar3 = alStack_c8;
      plVar4 = alStack_c8 + 1;
      plVar5 = alStack_c8 + 2;
      plVar6 = alStack_c8 + 3;
    }
    else {
      FUN_000e1d94();
      if ((param_2 & 1) == 0) {
        uVar2 = 0;
        plVar3 = alStack_c8 + 8;
        plVar4 = alStack_c8 + 9;
        plVar5 = alStack_c8 + 10;
        plVar6 = alStack_c8 + 0xb;
      }
      else {
        uVar2 = *(undefined8 *)(*(long *)(lStack_f0 + 0x38) + param_1 * 0x28 + 0x18);
        plVar3 = alStack_c8 + 4;
        plVar4 = alStack_c8 + 5;
        plVar5 = alStack_c8 + 6;
        plVar6 = alStack_c8 + 7;
      }
    }
    _swift_release(uStack_f8);
    FUN_000e0544(alStack_c8 + 0xc,0xaeddc0,&UNK_007d9aa0);
    *plVar6 = lStack_e8;
    FUN_000e0544(plVar6,0xaeddc8,&UNK_007da040);
    *plVar5 = lStack_e0;
    FUN_000e0544(plVar5,0xaeddc8,&UNK_007da040);
    *plVar4 = lStack_d8;
    FUN_000e0544(plVar4,0xae6938,&UNK_007cdb30);
    *plVar3 = lStack_d0;
    FUN_000e0544(plVar3,0xaeddd0,&UNK_007da050);
  }
  return uVar2;
}



/* Entry: 000e0544; end: 000e0583;  */

undefined8 FUN_000e0544(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 000e0584; end: 000e065f;  */

void FUN_000e0584(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [32];
  
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  lStack_68 = param_1[3];
  uStack_70 = param_1[2];
  if (lStack_68 == 0) {
    FUN_000e1378(&uStack_80,0xae65a0,&UNK_007ce270);
    FUN_000f320c(auStack_60,param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_000e1378(auStack_60,0xae65a0,&UNK_007ce270);
  }
  else {
    FUN_000252c8(&uStack_80,auStack_60);
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    uStack_80 = *unaff_x20;
    FUN_000f33d4(auStack_60,param_2,param_3,uVar1);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = uStack_80;
  }
  return;
}



/* Entry: 000e0660; end: 000e071f;  */

void FUN_000e0660(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  lStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_60 = param_1[4];
  if (lStack_68 == 0) {
    FUN_000e1378(&uStack_80,0xaedb70,&UNK_007d8040);
    FUN_000e13b8(auStack_58,param_2);
    FUN_000e1378(auStack_58,0xaedb70,&UNK_007d8040);
  }
  else {
    FUN_000e1450(&uStack_80,auStack_58);
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    uStack_80 = *unaff_x20;
    FUN_000f3614(auStack_58,param_2,uVar1);
    *unaff_x20 = uStack_80;
  }
  return;
}



/* Entry: 000e0720; end: 000e08a3;  */

void FUN_000e0720(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d0 [32];
  long *aplStack_b0 [3];
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar9 = *param_1;
  lVar7 = *(long *)(lVar9 + 0x60);
  uVar4 = *(undefined8 *)(lVar9 + 0x50);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,lVar7,uVar4,&UNK_00843e9c,&UNK_00843eb4);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = param_1[2];
  uVar10 = *(undefined8 *)(lVar9 + 0x58);
  uStack_70 = *(undefined8 *)(param_3 + 8);
  uVar2 = 0;
  uStack_88 = uVar4;
  uStack_80 = uVar10;
  lStack_78 = lVar7;
  FUN_001168b4(0,&uStack_88);
  ppuStack_90 = &PTR_DAT_009ade40;
  aplStack_b0[0] = param_1;
  uStack_98 = uVar2;
  (**(code **)(lVar5 + 0x10))(auStack_e0 + -extraout_x8,param_2,lVar1);
  pcVar6 = *(code **)(lVar7 + 0x38);
  uStack_68 = *(undefined8 *)(lVar7 + 0x10);
  puVar3 = &uStack_88;
  uStack_70 = uVar4;
  func_0x00016cc8(puVar3);
  _swift_retain(param_1);
  (*pcVar6)(puVar3,aplStack_b0,auStack_e0 + -extraout_x8,uVar4,lVar7);
  pcVar6 = (code *)auStack_d0;
  (**(code **)(param_3 + 0x20))(pcVar6,uVar10,param_3);
  FUN_000e08a4(&uStack_88,aplStack_b0);
  FUN_000e0660(aplStack_b0,lVar8);
  FUN_000e1378(&uStack_88,0xaedb70,&UNK_007d8040);
  (*pcVar6)(auStack_d0,0);
  return;
}



/* Entry: 000e08a4; end: 000e08f3;  */

undefined8 FUN_000e08a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xaedb70;
  func_0x000115a8(0xaedb70,&UNK_007d8040);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 000e08f4; end: 000e0aff;  */

void FUN_000e08f4(undefined8 param_1,long *param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar11 = *param_2;
  lVar8 = *(long *)(lVar11 + 0x50);
  lVar2 = 0;
  uStack_98 = param_1;
  __sSqMa(0,lVar8);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_a0 + -extraout_x8;
  lVar12 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(lVar11 + 0x58);
  (**(code **)(param_3 + 0x10))();
  if (*(long *)(lVar3 + 0x10) != 0) {
    lVar4 = param_2[2];
    FUN_000e1d94(lVar4);
    if ((param_3 & 1) != 0) {
      FUN_000e1304(*(long *)(lVar3 + 0x38) + lVar4 * 0x28,&uStack_90);
      goto LAB_000e09d8;
    }
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
LAB_000e09d8:
  _swift_bridgeObjectRelease(lVar3);
  uVar5 = 0xaedb70;
  func_0x000115a8(0xaedb70,&UNK_007d8040);
  puVar6 = puVar9;
  _swift_dynamicCast(puVar9,&uStack_90,uVar5,lVar8,6);
  bVar1 = ((ulong)puVar6 & 1) == 0;
  if (bVar1) {
    (**(code **)(lVar12 + 0x38))(puVar9,1,1,lVar8);
    (**(code **)(lVar7 + 8))(puVar9,lVar2);
    lVar2 = *(long *)(lVar11 + 0x60);
    uVar5 = uStack_98;
  }
  else {
    (**(code **)(lVar12 + 0x38))(puVar9,0,1,lVar8);
    (**(code **)(lVar12 + 0x20))(lVar10,puVar9,lVar8);
    uVar5 = uStack_98;
    lVar2 = *(long *)(lVar11 + 0x60);
    (**(code **)(lVar2 + 0x20))(uStack_98,lVar8,lVar2);
    (**(code **)(lVar12 + 8))(lVar10,lVar8);
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,lVar2,lVar8,&UNK_00843e9c,&UNK_00843eb4);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar5,bVar1,1,lVar3);
  return;
}



/* Entry: 000e0b00; end: 000e0c4b;  */

bool FUN_000e0b00(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar7 = *param_1;
  lVar4 = *(long *)(lVar7 + 0x50);
  lVar1 = 0;
  __sSqMa(0,lVar4);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_80 - extraout_x8;
  lVar7 = *(long *)(lVar7 + 0x58);
  (**(code **)(param_2 + 0x10))();
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = param_1[2];
    FUN_000e1d94(lVar2);
    if ((param_2 & 1) != 0) {
      FUN_000e1304(*(long *)(lVar7 + 0x38) + lVar2 * 0x28,&uStack_80);
      goto LAB_000e0bb0;
    }
  }
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
LAB_000e0bb0:
  _swift_bridgeObjectRelease(lVar7);
  uVar3 = 0xaedb70;
  func_0x000115a8(0xaedb70,&UNK_007d8040);
  lVar7 = lVar5;
  _swift_dynamicCast(lVar5,&uStack_80,uVar3,lVar4,6);
  lVar2 = *(long *)(lVar4 + -8);
  (**(code **)(lVar2 + 0x38))(lVar5,(uint)lVar7 ^ 1,1,lVar4);
  lVar7 = lVar5;
  (**(code **)(lVar2 + 0x30))(lVar5,1,lVar4);
  (**(code **)(lVar6 + 8))(lVar5,lVar1);
  return (int)lVar7 == 0;
}



/* Entry: 000e0c4c; end: 000e0cdf;  */

void FUN_000e0c4c(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar2 = param_1[2];
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  pcVar1 = (code *)auStack_80;
  (**(code **)(param_2 + 0x20))(pcVar1,*(undefined8 *)(*param_1 + 0x58),param_2);
  FUN_000e08a4(&uStack_60,auStack_a8);
  FUN_000e0660(auStack_a8,lVar2);
  FUN_000e1378(&uStack_60,0xaedb70,&UNK_007d8040);
  (*pcVar1)(auStack_80,0);
  return;
}



/* Entry: 000e0ce0; end: 000e0d27;  */

void FUN_000e0ce0(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_e0 [32];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  
  puVar9 = &DAT_007d8208;
  lVar11 = *param_1;
  lVar7 = param_1[2];
  plVar8 = *(long **)(lVar11 + 0x50);
  lVar1 = plVar8[2];
  lVar2 = plVar8[3];
  uVar3 = 0xff;
  plStack_90 = param_2;
  _swift_getAssociatedTypeWitness(0xff,lVar2,lVar1,&UNK_008441f0,&UNK_00844200);
  uVar4 = 0;
  __sSaMa(0,uVar3);
  puVar5 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar4);
  __sSlsE7isEmptySbvg(uVar4,puVar5);
  if ((uVar4 & 1) == 0) {
    uVar10 = *(undefined8 *)(lVar11 + 0x58);
    _swift_getWitnessTable(&DAT_007d8208,plVar8);
    plStack_78 = *(long **)(param_3 + 8);
    uVar3 = 0;
    plStack_90 = plVar8;
    uStack_88 = uVar10;
    puStack_80 = puVar9;
    FUN_001168b4(0,&plStack_90);
    ppuStack_70 = &PTR_DAT_009ade40;
    plStack_90 = param_1;
    plStack_78 = (long *)uVar3;
    (*(code *)0xe8034)(&lStack_c0,&plStack_90,param_2,lVar1,lVar2);
    puVar9 = &DAT_007d8224;
    plStack_78 = plVar8;
    _swift_getWitnessTable(&DAT_007d8224,plVar8);
    plVar8 = (long *)&UNK_009abd90;
    _swift_allocObject(&UNK_009abd90,0x40,7);
    plVar8[3] = lStack_b8;
    plVar8[2] = lStack_c0;
    plVar8[5] = lStack_a8;
    plVar8[4] = lStack_b0;
    plVar8[7] = lStack_98;
    plVar8[6] = lStack_a0;
    _swift_retain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    plVar8 = (long *)0x0;
    puVar9 = (undefined *)0x0;
    puStack_80 = (undefined *)0x0;
    plStack_78 = (long *)0x0;
    uStack_88 = 0;
    uVar10 = *(undefined8 *)(lVar11 + 0x58);
  }
  pcVar6 = (code *)auStack_e0;
  plStack_90 = plVar8;
  ppuStack_70 = (undefined **)puVar9;
  (**(code **)(param_3 + 0x20))(pcVar6,uVar10,param_3);
  FUN_000e08a4(&plStack_90,&lStack_c0);
  FUN_000e0660(&lStack_c0,lVar7);
  FUN_000e1378(&plStack_90,0xaedb70,&UNK_007d8040);
  (*pcVar6)(auStack_e0,0);
  return;
}



/* Entry: 000e0d28; end: 000e0f03;  */

void FUN_000e0d28(long *param_1,long *param_2,long param_3,undefined8 param_4,code *param_5,
                 undefined8 param_6,long *param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_e0 [32];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  
  lVar10 = *param_1;
  lVar7 = param_1[2];
  plVar8 = *(long **)(lVar10 + 0x50);
  lVar1 = plVar8[2];
  lVar2 = plVar8[3];
  uVar3 = 0xff;
  plStack_90 = param_2;
  _swift_getAssociatedTypeWitness(0xff,lVar2,lVar1,&UNK_008441f0,&UNK_00844200);
  uVar4 = 0;
  __sSaMa(0,uVar3);
  puVar5 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar4);
  __sSlsE7isEmptySbvg(uVar4,puVar5);
  if ((uVar4 & 1) == 0) {
    uVar9 = *(undefined8 *)(lVar10 + 0x58);
    _swift_getWitnessTable(param_4,plVar8);
    plStack_78 = *(long **)(param_3 + 8);
    uVar3 = 0;
    plStack_90 = plVar8;
    uStack_88 = uVar9;
    uStack_80 = param_4;
    FUN_001168b4(0,&plStack_90);
    ppuStack_70 = &PTR_DAT_009ade40;
    plStack_90 = param_1;
    plStack_78 = (long *)uVar3;
    (*param_5)(&lStack_c0,&plStack_90,param_2,lVar1,lVar2);
    plStack_78 = plVar8;
    _swift_getWitnessTable(param_6,plVar8);
    _swift_allocObject(param_7,0x40,7);
    param_7[3] = lStack_b8;
    param_7[2] = lStack_c0;
    param_7[5] = lStack_a8;
    param_7[4] = lStack_b0;
    param_7[7] = lStack_98;
    param_7[6] = lStack_a0;
    _swift_retain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    param_7 = (long *)0x0;
    param_6 = 0;
    uStack_80 = 0;
    plStack_78 = (long *)0x0;
    uStack_88 = 0;
    uVar9 = *(undefined8 *)(lVar10 + 0x58);
  }
  pcVar6 = (code *)auStack_e0;
  plStack_90 = param_7;
  ppuStack_70 = (undefined **)param_6;
  (**(code **)(param_3 + 0x20))(pcVar6,uVar9,param_3);
  FUN_000e08a4(&plStack_90,&lStack_c0);
  FUN_000e0660(&lStack_c0,lVar7);
  FUN_000e1378(&plStack_90,0xaedb70,&UNK_007d8040);
  (*pcVar6)(auStack_e0,0);
  return;
}



/* Entry: 000e0f04; end: 000e0f4b;  */

void FUN_000e0f04(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_e0 [32];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  
  puVar7 = &DAT_007d8460;
  lVar10 = *param_1;
  lVar5 = param_1[2];
  plVar6 = *(long **)(lVar10 + 0x50);
  lVar8 = plVar6[2];
  uVar1 = 0;
  plStack_90 = param_2;
  __sSaMa(0,lVar8);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  __sSlsE7isEmptySbvg(uVar1,puVar2);
  if ((uVar1 & 1) == 0) {
    uVar9 = *(undefined8 *)(lVar10 + 0x58);
    _swift_getWitnessTable(&DAT_007d8460,plVar6);
    plStack_78 = *(long **)(param_3 + 8);
    uVar3 = 0;
    plStack_90 = plVar6;
    uStack_88 = uVar9;
    puStack_80 = puVar7;
    FUN_001168b4(0,&plStack_90);
    ppuStack_70 = &PTR_DAT_009ade40;
    plStack_90 = param_1;
    plStack_78 = (long *)uVar3;
    (*(code *)0xe8038)(&lStack_c0,&plStack_90,param_2,lVar8,plVar6[3]);
    puVar7 = &DAT_007d847c;
    plStack_78 = plVar6;
    _swift_getWitnessTable(&DAT_007d847c,plVar6);
    plVar6 = (long *)&UNK_009abde0;
    _swift_allocObject(&UNK_009abde0,0x40,7);
    plVar6[3] = lStack_b8;
    plVar6[2] = lStack_c0;
    plVar6[5] = lStack_a8;
    plVar6[4] = lStack_b0;
    plVar6[7] = lStack_98;
    plVar6[6] = lStack_a0;
    _swift_retain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    plVar6 = (long *)0x0;
    puVar7 = (undefined *)0x0;
    puStack_80 = (undefined *)0x0;
    plStack_78 = (long *)0x0;
    uStack_88 = 0;
    uVar9 = *(undefined8 *)(lVar10 + 0x58);
  }
  pcVar4 = (code *)auStack_e0;
  plStack_90 = plVar6;
  ppuStack_70 = (undefined **)puVar7;
  (**(code **)(param_3 + 0x20))(pcVar4,uVar9,param_3);
  FUN_000e08a4(&plStack_90,&lStack_c0);
  FUN_000e0660(&lStack_c0,lVar5);
  FUN_000e1378(&plStack_90,0xaedb70,&UNK_007d8040);
  (*pcVar4)(auStack_e0,0);
  return;
}



/* Entry: 000e0f4c; end: 000e1103;  */

void FUN_000e0f4c(long *param_1,long *param_2,long param_3,undefined8 param_4,code *param_5,
                 undefined8 param_6,long *param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_e0 [32];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  
  lVar9 = *param_1;
  lVar5 = param_1[2];
  plVar6 = *(long **)(lVar9 + 0x50);
  lVar7 = plVar6[2];
  uVar1 = 0;
  plStack_90 = param_2;
  __sSaMa(0,lVar7);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  __sSlsE7isEmptySbvg(uVar1,puVar2);
  if ((uVar1 & 1) == 0) {
    uVar8 = *(undefined8 *)(lVar9 + 0x58);
    _swift_getWitnessTable(param_4,plVar6);
    plStack_78 = *(long **)(param_3 + 8);
    uVar3 = 0;
    plStack_90 = plVar6;
    uStack_88 = uVar8;
    uStack_80 = param_4;
    FUN_001168b4(0,&plStack_90);
    ppuStack_70 = &PTR_DAT_009ade40;
    plStack_90 = param_1;
    plStack_78 = (long *)uVar3;
    (*param_5)(&lStack_c0,&plStack_90,param_2,lVar7,plVar6[3]);
    plStack_78 = plVar6;
    _swift_getWitnessTable(param_6,plVar6);
    _swift_allocObject(param_7,0x40,7);
    param_7[3] = lStack_b8;
    param_7[2] = lStack_c0;
    param_7[5] = lStack_a8;
    param_7[4] = lStack_b0;
    param_7[7] = lStack_98;
    param_7[6] = lStack_a0;
    _swift_retain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    param_7 = (long *)0x0;
    param_6 = 0;
    uStack_80 = 0;
    plStack_78 = (long *)0x0;
    uStack_88 = 0;
    uVar8 = *(undefined8 *)(lVar9 + 0x58);
  }
  pcVar4 = (code *)auStack_e0;
  plStack_90 = param_7;
  ppuStack_70 = (undefined **)param_6;
  (**(code **)(param_3 + 0x20))(pcVar4,uVar8,param_3);
  FUN_000e08a4(&plStack_90,&lStack_c0);
  FUN_000e0660(&lStack_c0,lVar5);
  FUN_000e1378(&plStack_90,0xaedb70,&UNK_007d8040);
  (*pcVar4)(auStack_e0,0);
  return;
}



/* Entry: 000e1104; end: 000e114b;  */

void FUN_000e1104(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_e0 [32];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  
  puVar7 = &DAT_007d86b8;
  lVar10 = *param_1;
  lVar5 = param_1[2];
  plVar6 = *(long **)(lVar10 + 0x50);
  lVar8 = plVar6[2];
  uVar1 = 0;
  plStack_90 = param_2;
  __sSaMa(0,lVar8);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  __sSlsE7isEmptySbvg(uVar1,puVar2);
  if ((uVar1 & 1) == 0) {
    uVar9 = *(undefined8 *)(lVar10 + 0x58);
    _swift_getWitnessTable(&DAT_007d86b8,plVar6);
    plStack_78 = *(long **)(param_3 + 8);
    uVar3 = 0;
    plStack_90 = plVar6;
    uStack_88 = uVar9;
    puStack_80 = puVar7;
    FUN_001168b4(0,&plStack_90);
    ppuStack_70 = &PTR_DAT_009ade40;
    plStack_90 = param_1;
    plStack_78 = (long *)uVar3;
    (*(code *)0xe7fc8)(&lStack_c0,&plStack_90,param_2,lVar8,plVar6[3],plVar6[4]);
    puVar7 = &DAT_007d86d4;
    plStack_78 = plVar6;
    _swift_getWitnessTable(&DAT_007d86d4,plVar6);
    plVar6 = (long *)&UNK_009abe30;
    _swift_allocObject(&UNK_009abe30,0x40,7);
    plVar6[3] = lStack_b8;
    plVar6[2] = lStack_c0;
    plVar6[5] = lStack_a8;
    plVar6[4] = lStack_b0;
    plVar6[7] = lStack_98;
    plVar6[6] = lStack_a0;
    _swift_retain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    plVar6 = (long *)0x0;
    puVar7 = (undefined *)0x0;
    puStack_80 = (undefined *)0x0;
    plStack_78 = (long *)0x0;
    uStack_88 = 0;
    uVar9 = *(undefined8 *)(lVar10 + 0x58);
  }
  pcVar4 = (code *)auStack_e0;
  plStack_90 = plVar6;
  ppuStack_70 = (undefined **)puVar7;
  (**(code **)(param_3 + 0x20))(pcVar4,uVar9,param_3);
  FUN_000e08a4(&plStack_90,&lStack_c0);
  FUN_000e0660(&lStack_c0,lVar5);
  FUN_000e1378(&plStack_90,0xaedb70,&UNK_007d8040);
  (*pcVar4)(auStack_e0,0);
  return;
}



/* Entry: 000e114c; end: 000e1303;  */

void FUN_000e114c(long *param_1,long *param_2,long param_3,undefined8 param_4,code *param_5,
                 undefined8 param_6,long *param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_e0 [32];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  
  lVar9 = *param_1;
  lVar5 = param_1[2];
  plVar6 = *(long **)(lVar9 + 0x50);
  lVar7 = plVar6[2];
  uVar1 = 0;
  plStack_90 = param_2;
  __sSaMa(0,lVar7);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  __sSlsE7isEmptySbvg(uVar1,puVar2);
  if ((uVar1 & 1) == 0) {
    uVar8 = *(undefined8 *)(lVar9 + 0x58);
    _swift_getWitnessTable(param_4,plVar6);
    plStack_78 = *(long **)(param_3 + 8);
    uVar3 = 0;
    plStack_90 = plVar6;
    uStack_88 = uVar8;
    uStack_80 = param_4;
    FUN_001168b4(0,&plStack_90);
    ppuStack_70 = &PTR_DAT_009ade40;
    plStack_90 = param_1;
    plStack_78 = (long *)uVar3;
    (*param_5)(&lStack_c0,&plStack_90,param_2,lVar7,plVar6[3],plVar6[4]);
    plStack_78 = plVar6;
    _swift_getWitnessTable(param_6,plVar6);
    _swift_allocObject(param_7,0x40,7);
    param_7[3] = lStack_b8;
    param_7[2] = lStack_c0;
    param_7[5] = lStack_a8;
    param_7[4] = lStack_b0;
    param_7[7] = lStack_98;
    param_7[6] = lStack_a0;
    _swift_retain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    param_7 = (long *)0x0;
    param_6 = 0;
    uStack_80 = 0;
    plStack_78 = (long *)0x0;
    uStack_88 = 0;
    uVar8 = *(undefined8 *)(lVar9 + 0x58);
  }
  pcVar4 = (code *)auStack_e0;
  plStack_90 = param_7;
  ppuStack_70 = (undefined **)param_6;
  (**(code **)(param_3 + 0x20))(pcVar4,uVar8,param_3);
  FUN_000e08a4(&plStack_90,&lStack_c0);
  FUN_000e0660(&lStack_c0,lVar5);
  FUN_000e1378(&plStack_90,0xaedb70,&UNK_007d8040);
  (*pcVar4)(auStack_e0,0);
  return;
}



/* Entry: 000e1304; end: 000e1347;  */

long FUN_000e1304(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 000e1348; end: 000e134b;  */

void FUN_000e1348(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_00011670(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000e134c; end: 000e1377;  */

void FUN_000e134c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_00011670(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000e1378; end: 000e13b7;  */

undefined8 FUN_000e1378(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 000e13b8; end: 000e144f;  */

void FUN_000e13b8(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  FUN_000e1d94();
  if ((param_3 & 1) == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x00121048();
    }
    FUN_000e1450(*(long *)(lVar2 + 0x38) + param_2 * 0x28,param_1);
    func_0x000f3eac(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Entry: 000e1450; end: 000e147b;  */

undefined8 * FUN_000e1450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 000e147c; end: 000e1713;  */

/* WARNING: Removing unreachable block (ram,0x000e16c4) */

void FUN_000e147c(undefined8 param_1,long param_2,long param_3,long param_4,ulong *param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar6 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (-uVar6 < 0x40) {
    uVar12 = ~(-1L << (-uVar6 & 0x3f));
  }
  uVar12 = uVar12 & *puVar11;
  _swift_bridgeObjectRetain(param_4);
  lVar9 = 0;
  lVar10 = lVar9;
  puVar8 = PTR___swiftEmptyArrayStorage_0099b8f0;
  while( true ) {
    while (uVar12 != 0) {
      uVar1 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 - 1 & uVar12;
      lVar7 = *(long *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar9 * 0x200);
      lVar10 = lVar9;
      if ((param_2 <= lVar7) && (lVar7 < param_3)) {
        puVar5 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        apuStack_88[0] = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          FUN_000e287c(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar1) {
          FUN_000e287c(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_88[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_88[0] + uVar1 * 8 + 0x20) = lVar7;
        puVar8 = apuStack_88[0];
      }
    }
    bVar4 = SCARRY8(lVar9,1);
    lVar9 = lVar9 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xe16fc);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar6 >> 6) <= lVar9) break;
    uVar12 = puVar11[lVar9];
  }
  FUN_000e1714(param_4,puVar11,~uVar6,lVar10,0);
  apuStack_88[0] = puVar8;
  _swift_retain(puVar8);
  FUN_000e1f68(apuStack_88);
  if (unaff_x21 != 0) {
    _swift_release(apuStack_88[0]);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xe1714);
    (*pcVar3)();
  }
  _swift_release(puVar8);
  puVar8 = apuStack_88[0];
  uVar12 = *(ulong *)(apuStack_88[0] + 0x10);
  if (uVar12 != 0) {
    uVar6 = 0;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xe1700);
        (*pcVar3)();
      }
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xe1704);
        (*pcVar3)();
      }
      lVar9 = *(long *)(puVar8 + uVar6 * 8 + 0x20);
      FUN_000e1d94(lVar9);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xe1708);
        (*pcVar3)();
      }
      FUN_000e1304(*(long *)(param_4 + 0x38) + lVar9 * 0x28,apuStack_88);
      lVar9 = lStack_68;
      uVar2 = uStack_70;
      FUN_0001393c(apuStack_88,uStack_70);
      puVar11 = param_5;
      (**(code **)(lVar9 + 0x30))(param_1,param_5,param_6,uVar2,lVar9);
      uVar6 = uVar6 + 1;
      FUN_00011670(apuStack_88);
    } while (uVar12 != uVar6);
  }
  _swift_release(puVar8);
  return;
}



/* Entry: 000e1714; end: 000e171b;  */

void FUN_000e1714(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 000e171c; end: 000e1767;  */

void FUN_000e171c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  
  FUN_000e08a4(param_1,auStack_58);
  FUN_000e0660(auStack_58,param_2);
  FUN_000e2898(param_1);
  return;
}



/* Entry: 000e1768; end: 000e17bf;  */

undefined8 * FUN_000e1768(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if ((*(long *)(param_3 + 0x10) != 0) && (uVar2 = param_3, FUN_000e1d94(), (uVar2 & 1) != 0)) {
    lVar1 = *(long *)(param_3 + 0x38) + (long)param_2 * 0x28;
    lVar3 = *(long *)(lVar1 + 0x18);
    param_1[3] = lVar3;
    param_1[4] = *(undefined8 *)(lVar1 + 0x20);
    (*(code *)**(undefined8 **)(lVar3 + -8))(param_1,lVar1);
    return param_1;
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return param_2;
}



/* Entry: 000e17c0; end: 000e17cf;  */

bool FUN_000e17c0(long param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10)) {
    return false;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_1 + 0x40);
  uVar9 = uVar9 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar7 = 0;
  lVar4 = lVar7;
  if (uVar10 == 0) goto LAB_000e2ea0;
LAB_000e2ecc:
  uVar8 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
  uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
  uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar10 = uVar10 - 1 & uVar10;
  uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar4 << 6;
  lStack_d0 = *(long *)(*(long *)(param_1 + 0x30) + uVar8 * 8);
  FUN_000e1304(*(long *)(param_1 + 0x38) + uVar8 * 0x28,&uStack_c8);
  lVar7 = lVar4;
  do {
    lVar4 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar3 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(param_1);
      return true;
    }
    uVar8 = 0;
    FUN_000e1450(&uStack_98);
    if ((*(long *)(param_2 + 0x10) == 0) || (FUN_000e1d94(lVar4), (uVar8 & 1) == 0)) {
LAB_000e3018:
      _swift_release(param_1);
LAB_000e3040:
      FUN_00011670(&lStack_d0);
      return bVar3;
    }
    FUN_000e1304(*(long *)(param_2 + 0x38) + lVar4 * 0x28,auStack_120);
    FUN_000e1450(auStack_120,alStack_f8);
    plVar5 = &lStack_d0;
    FUN_0001393c(plVar5,uStack_b8);
    _swift_getDynamicType();
    plVar6 = alStack_f8;
    FUN_0001393c(plVar6,uStack_e0);
    _swift_getDynamicType();
    lVar4 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar5 != plVar6) {
      _swift_release(param_1);
      FUN_00011670(alStack_f8);
      goto LAB_000e3040;
    }
    FUN_0001393c(&lStack_d0,uStack_b8);
    plVar5 = alStack_f8;
    (**(code **)(lVar4 + 0x20))(plVar5,uVar1,lVar4);
    FUN_00011670(alStack_f8);
    if (((ulong)plVar5 & 1) == 0) goto LAB_000e3018;
    FUN_00011670(&lStack_d0);
    lVar4 = lVar7;
    if (uVar10 != 0) goto LAB_000e2ecc;
LAB_000e2ea0:
    uVar8 = uVar9;
    if ((long)uVar9 <= lVar7 + 1) {
      uVar8 = lVar7 + 1;
    }
    while( true ) {
      lVar4 = lVar7 + 1;
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xe3070);
        (*pcVar2)();
      }
      if ((long)uVar9 <= lVar4) break;
      uVar10 = ((ulong *)(param_1 + 0x40))[lVar4];
      lVar7 = lVar7 + 1;
      if (uVar10 != 0) goto LAB_000e2ecc;
    }
    uVar10 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar7 = uVar8 - 1;
  } while( true );
}



/* Entry: 000e17d0; end: 000e19ab;  */

void FUN_000e17d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar6 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(param_2 + 0x40);
  uVar6 = uVar6 + 0x3f >> 6;
  _swift_bridgeObjectRetain(param_2);
  lVar4 = 0;
  puVar8 = (undefined1 *)0x1000193;
  lVar7 = lVar4;
  if (uVar9 == 0) goto LAB_000e184c;
LAB_000e1878:
  do {
    uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 - 1 & uVar9;
    uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar7 << 6;
    uStack_150 = *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar5 * 8);
    FUN_000e1304(*(long *)(param_2 + 0x38) + uVar5 * 0x28,&uStack_148);
    lVar4 = lVar7;
    while( true ) {
      uVar1 = uStack_150;
      uStack_c8 = uStack_138;
      uStack_d0 = uStack_140;
      uStack_b8 = uStack_128;
      lStack_c0 = lStack_130;
      uStack_d8 = uStack_148;
      uStack_e0 = uStack_150;
      if (lStack_130 == 0) {
        _swift_release(param_2);
        __ss6HasherV8_combineyySuF(puVar8);
        return;
      }
      FUN_000e1450(&uStack_d8,auStack_108);
      uStack_128 = param_1[5];
      lStack_130 = param_1[4];
      uStack_118 = param_1[7];
      uStack_120 = param_1[6];
      uStack_110 = param_1[8];
      uStack_148 = param_1[1];
      uStack_150 = *param_1;
      uStack_138 = param_1[3];
      uStack_140 = param_1[2];
      __ss6HasherV8_combineyySuF(uVar1);
      lVar7 = lStack_e8;
      uVar1 = uStack_f0;
      FUN_0001393c(auStack_108,uStack_f0);
      puVar3 = &uStack_150;
      (**(code **)(lVar7 + 0x10))(&uStack_150,uVar1,lVar7);
      uStack_88 = uStack_128;
      lStack_90 = lStack_130;
      uStack_78 = uStack_118;
      uStack_80 = uStack_120;
      uStack_70 = uStack_110;
      uStack_a8 = uStack_148;
      uStack_b0 = uStack_150;
      uStack_98 = uStack_138;
      uStack_a0 = uStack_140;
      __ss6HasherV8finalizeSiyF();
      puVar8 = (undefined1 *)((long)puVar3 + (long)puVar8);
      FUN_00011670(auStack_108);
      lVar7 = lVar4;
      if (uVar9 != 0) break;
LAB_000e184c:
      uVar5 = uVar6;
      if ((long)uVar6 <= lVar4 + 1) {
        uVar5 = lVar4 + 1;
      }
      while( true ) {
        lVar7 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xe19ac);
          (*pcVar2)();
        }
        if ((long)uVar6 <= lVar7) break;
        uVar9 = ((ulong *)(param_2 + 0x40))[lVar7];
        lVar4 = lVar4 + 1;
        if (uVar9 != 0) goto LAB_000e1878;
      }
      uVar9 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      lStack_130 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      lVar4 = uVar5 - 1;
    }
  } while( true );
}



/* Entry: 000e19ac; end: 000e1a93;  */

undefined1  [16] FUN_000e19ac(undefined8 *param_1,undefined *param_2)

{
  dword *pdVar1;
  undefined *puVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auVar4 [16];
  
  pdVar1 = &segment_command_00000020.nsects;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    puVar2 = param_2;
    _malloc();
  }
  else {
    puVar2 = &UNK_00002d1b;
    _swift_coroFrameAlloc();
  }
  *param_1 = pdVar1;
  *(undefined **)(pdVar1 + 0x14) = param_2;
  *(long **)(pdVar1 + 0x16) = unaff_x20;
  lVar3 = *unaff_x20;
  if ((*(long *)(lVar3 + 0x10) == 0) || (FUN_000e1d94(param_2), ((ulong)puVar2 & 1) == 0)) {
    *(undefined8 *)(pdVar1 + 8) = 0;
    *(undefined8 *)(pdVar1 + 2) = 0;
    *(undefined8 *)pdVar1 = 0;
    *(undefined8 *)(pdVar1 + 6) = 0;
    *(undefined8 *)(pdVar1 + 4) = 0;
  }
  else {
    FUN_000e1304(*(long *)(lVar3 + 0x38) + (long)param_2 * 0x28,pdVar1);
  }
  auVar4._8_8_ = pdVar1;
  auVar4._0_8_ = 0xe1a48;
  return auVar4;
}



/* Entry: 000e1a94; end: 000e1c23;  */

bool FUN_000e1a94(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar5 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(param_1 + 0x40);
  uVar5 = uVar5 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar3 = 0;
  lVar6 = lVar3;
  if (uVar7 == 0) goto LAB_000e1b04;
LAB_000e1b30:
  uVar4 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar7 = uVar7 - 1 & uVar7;
  uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | lVar6 << 6;
  uStack_c0 = *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar4 * 8);
  FUN_000e1304(*(long *)(param_1 + 0x38) + uVar4 * 0x28,&uStack_b8);
  lVar3 = lVar6;
  do {
    lVar6 = lStack_a0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_68 = uStack_98;
    lStack_70 = lStack_a0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    if (lStack_a0 == 0) {
      _swift_release(param_1);
LAB_000e1bf8:
      return lVar6 == 0;
    }
    FUN_000e1450(&uStack_88,&uStack_c0);
    lVar1 = lStack_a0;
    uVar4 = uStack_a8;
    FUN_0001393c(&uStack_c0,uStack_a8);
    (**(code **)(lVar1 + 0x38))(uVar4,lVar1);
    if ((uVar4 & 1) == 0) {
      _swift_release(param_1);
      FUN_00011670(&uStack_c0);
      goto LAB_000e1bf8;
    }
    FUN_00011670(&uStack_c0);
    lVar6 = lVar3;
    if (uVar7 != 0) goto LAB_000e1b30;
LAB_000e1b04:
    uVar4 = uVar5;
    if ((long)uVar5 <= lVar3 + 1) {
      uVar4 = lVar3 + 1;
    }
    while( true ) {
      lVar6 = lVar3 + 1;
      if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xe1c24);
        (*pcVar2)();
      }
      if ((long)uVar5 <= lVar6) break;
      uVar7 = ((ulong *)(param_1 + 0x40))[lVar6];
      lVar3 = lVar3 + 1;
      if (uVar7 != 0) goto LAB_000e1b30;
    }
    uVar7 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    lStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    lVar3 = uVar4 - 1;
  } while( true );
}



/* Entry: 000e1c24; end: 000e1cab;  */

void FUN_000e1c24(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_000e17d0(auStack_68,param_1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000e1cac; end: 000e1cb3;  */

void FUN_000e1cac(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *unaff_x20;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar4 = *unaff_x20;
  uVar7 = 1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(lVar4 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(lVar4 + 0x40);
  uVar7 = uVar7 + 0x3f >> 6;
  _swift_bridgeObjectRetain(lVar4);
  lVar5 = 0;
  puVar9 = (undefined1 *)0x1000193;
  lVar8 = lVar5;
  if (uVar10 == 0) goto LAB_000e184c;
LAB_000e1878:
  do {
    uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 - 1 & uVar10;
    uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar8 << 6;
    uStack_150 = *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8);
    FUN_000e1304(*(long *)(lVar4 + 0x38) + uVar6 * 0x28,&uStack_148);
    lVar5 = lVar8;
    while( true ) {
      uVar1 = uStack_150;
      uStack_c8 = uStack_138;
      uStack_d0 = uStack_140;
      uStack_b8 = uStack_128;
      lStack_c0 = lStack_130;
      uStack_d8 = uStack_148;
      uStack_e0 = uStack_150;
      if (lStack_130 == 0) {
        _swift_release(lVar4);
        __ss6HasherV8_combineyySuF(puVar9);
        return;
      }
      FUN_000e1450(&uStack_d8,auStack_108);
      uStack_128 = param_1[5];
      lStack_130 = param_1[4];
      uStack_118 = param_1[7];
      uStack_120 = param_1[6];
      uStack_110 = param_1[8];
      uStack_148 = param_1[1];
      uStack_150 = *param_1;
      uStack_138 = param_1[3];
      uStack_140 = param_1[2];
      __ss6HasherV8_combineyySuF(uVar1);
      lVar8 = lStack_e8;
      uVar1 = uStack_f0;
      FUN_0001393c(auStack_108,uStack_f0);
      puVar3 = &uStack_150;
      (**(code **)(lVar8 + 0x10))(&uStack_150,uVar1,lVar8);
      uStack_88 = uStack_128;
      lStack_90 = lStack_130;
      uStack_78 = uStack_118;
      uStack_80 = uStack_120;
      uStack_70 = uStack_110;
      uStack_a8 = uStack_148;
      uStack_b0 = uStack_150;
      uStack_98 = uStack_138;
      uStack_a0 = uStack_140;
      __ss6HasherV8finalizeSiyF();
      puVar9 = (undefined1 *)((long)puVar3 + (long)puVar9);
      FUN_00011670(auStack_108);
      lVar8 = lVar5;
      if (uVar10 != 0) break;
LAB_000e184c:
      uVar6 = uVar7;
      if ((long)uVar7 <= lVar5 + 1) {
        uVar6 = lVar5 + 1;
      }
      while( true ) {
        lVar8 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xe19ac);
          (*pcVar2)();
        }
        if ((long)uVar7 <= lVar8) break;
        uVar10 = ((ulong *)(lVar4 + 0x40))[lVar8];
        lVar5 = lVar5 + 1;
        if (uVar10 != 0) goto LAB_000e1878;
      }
      uVar10 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      lStack_130 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      lVar5 = uVar6 - 1;
    }
  } while( true );
}



/* Entry: 000e1cb4; end: 000e1cf3;  */

void FUN_000e1cb4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_000e17d0(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000e1cf4; end: 000e1d93;  */

bool FUN_000e1cf4(long *param_1,long *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  lVar4 = *param_1;
  lVar8 = *param_2;
  if (*(long *)(lVar4 + 0x10) != *(long *)(lVar8 + 0x10)) {
    return false;
  }
  uVar11 = 1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar4 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar4 + 0x40);
  uVar11 = uVar11 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar9 = 0;
  lVar5 = lVar9;
  if (uVar12 == 0) goto LAB_000e2ea0;
LAB_000e2ecc:
  uVar10 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
  uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
  uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
  uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
  uVar12 = uVar12 - 1 & uVar12;
  uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar5 << 6;
  lStack_d0 = *(long *)(*(long *)(lVar4 + 0x30) + uVar10 * 8);
  FUN_000e1304(*(long *)(lVar4 + 0x38) + uVar10 * 0x28,&uStack_c8);
  lVar9 = lVar5;
  do {
    lVar5 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar3 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(lVar4);
      return true;
    }
    uVar10 = 0;
    FUN_000e1450(&uStack_98);
    if ((*(long *)(lVar8 + 0x10) == 0) || (FUN_000e1d94(lVar5), (uVar10 & 1) == 0)) {
LAB_000e3018:
      _swift_release(lVar4);
LAB_000e3040:
      FUN_00011670(&lStack_d0);
      return bVar3;
    }
    FUN_000e1304(*(long *)(lVar8 + 0x38) + lVar5 * 0x28,auStack_120);
    FUN_000e1450(auStack_120,alStack_f8);
    plVar6 = &lStack_d0;
    FUN_0001393c(plVar6,uStack_b8);
    _swift_getDynamicType();
    plVar7 = alStack_f8;
    FUN_0001393c(plVar7,uStack_e0);
    _swift_getDynamicType();
    lVar5 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar6 != plVar7) {
      _swift_release(lVar4);
      FUN_00011670(alStack_f8);
      goto LAB_000e3040;
    }
    FUN_0001393c(&lStack_d0,uStack_b8);
    plVar6 = alStack_f8;
    (**(code **)(lVar5 + 0x20))(plVar6,uVar1,lVar5);
    FUN_00011670(alStack_f8);
    if (((ulong)plVar6 & 1) == 0) goto LAB_000e3018;
    FUN_00011670(&lStack_d0);
    lVar5 = lVar9;
    if (uVar12 != 0) goto LAB_000e2ecc;
LAB_000e2ea0:
    uVar10 = uVar11;
    if ((long)uVar11 <= lVar9 + 1) {
      uVar10 = lVar9 + 1;
    }
    while( true ) {
      lVar5 = lVar9 + 1;
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xe3070);
        (*pcVar2)();
      }
      if ((long)uVar11 <= lVar5) break;
      uVar12 = ((ulong *)(lVar4 + 0x40))[lVar5];
      lVar9 = lVar9 + 1;
      if (uVar12 != 0) goto LAB_000e2ecc;
    }
    uVar12 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar9 = uVar10 - 1;
  } while( true );
}



/* Entry: 000e1d94; end: 000e1dc3;  */

void FUN_000e1d94(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  __ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ(uVar1,param_1);
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 000e1dc4; end: 000e1e43;  */

void FUN_000e1dc4(byte *param_1,byte *param_2)

{
  long *plVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar7 = *(ulong *)(unaff_x20 + 0x28);
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  pbVar9 = param_1;
  if (param_1 != (byte *)0x0) {
    for (; pbVar9 != param_2; pbVar9 = pbVar9 + 1) {
      uVar7 = (ulong)*pbVar9;
      __ss6HasherV8_combineyys5UInt8VF();
    }
  }
  __ss6HasherV9_finalizeSiyF();
  uVar8 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = uVar7 & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
    do {
      plVar1 = (long *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 0x10);
      pbVar9 = (byte *)*plVar1;
      pbVar3 = (byte *)plVar1[1];
      lVar2 = 0;
      if (pbVar9 != (byte *)0x0) {
        lVar2 = (long)pbVar3 - (long)pbVar9;
      }
      pbVar10 = param_1;
      if (param_1 == (byte *)0x0) {
        if (lVar2 == 0) goto LAB_000e1f28;
      }
      else if (lVar2 == (long)param_2 - (long)param_1) {
LAB_000e1f28:
        do {
          bVar6 = pbVar10 == (byte *)0x0 || pbVar10 == param_2;
          if ((pbVar9 == (byte *)0x0) || (pbVar9 == pbVar3)) {
            if (bVar6) {
              return;
            }
            break;
          }
          if (bVar6) break;
          bVar4 = *pbVar9;
          bVar5 = *pbVar10;
          pbVar9 = pbVar9 + 1;
          pbVar10 = pbVar10 + 1;
        } while (bVar4 == bVar5);
      }
      uVar7 = uVar7 + 1 & ~uVar8;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
  }
  return;
}



/* Entry: 000e1e44; end: 000e1f67;  */

void FUN_000e1e44(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 000e1f68; end: 000e209b;  */

void FUN_000e1f68(ulong *param_1)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  ulong uStack_48;
  
  uVar11 = *param_1;
  uVar5 = uVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar5 & 1) == 0) {
    FUN_000f146c();
  }
  uVar12 = *(ulong *)(uVar11 + 0x10);
  plVar1 = (long *)(uVar11 + 0x20);
  uVar5 = uVar12;
  plStack_50 = plVar1;
  uStack_48 = uVar12;
  __ss22_minimumMergeRunLengthyS2iF();
  if ((long)uVar5 < (long)uVar12) {
    puVar13 = (undefined *)(uVar12 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
    if (1 < uVar12) {
      puVar3 = puVar13;
      __ss15ContiguousArrayV28_allocateBufferUninitialized15minimumCapacitys01_abD0VyxGSi_tFZ
                (puVar13,PTR___sSiN_0099b2c0);
      *(undefined **)(puVar3 + 0x10) = puVar13;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar13;
    FUN_000e209c(&puStack_68,auStack_58,&plStack_50,uVar5);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    _swift_release(puVar3);
  }
  else if ((uVar12 != 0) && (uVar12 != 1)) {
    lVar4 = -1;
    uVar5 = 1;
    plVar6 = plVar1;
    do {
      lVar7 = plVar1[uVar5];
      lVar8 = lVar4;
      plVar9 = plVar6;
      do {
        lVar10 = *plVar9;
        if (lVar10 <= lVar7) break;
        *plVar9 = lVar7;
        plVar9[1] = lVar10;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        plVar9 = plVar9 + -1;
      } while (bVar2);
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 1;
      lVar4 = lVar4 + -1;
    } while (uVar5 != uVar12);
  }
  *param_1 = uVar11;
  return;
}



/* Entry: 000e209c; end: 000e2403;  */

void FUN_000e209c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long unaff_x21;
  ulong *puVar20;
  ulong uVar21;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_0099b8f0;
  lVar7 = param_3[1];
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      puVar6 = puStack_58;
      lVar18 = lVar9 + 1;
      if (lVar18 < lVar7) {
        lVar10 = *param_3;
        lVar12 = *(long *)(lVar10 + lVar18 * 8);
        lVar15 = *(long *)(lVar10 + lVar9 * 8);
        lVar13 = lVar9 + 2;
        lVar8 = lVar12;
        do {
          lVar17 = lVar13;
          lVar18 = lVar7;
          if (lVar7 == lVar17) break;
          lVar18 = *(long *)(lVar10 + lVar17 * 8);
          bVar3 = lVar8 <= lVar18;
          lVar13 = lVar17 + 1;
          lVar8 = lVar18;
          lVar18 = lVar17;
        } while (lVar12 < lVar15 != bVar3);
        if (lVar12 < lVar15) {
          if (lVar18 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0xe23d8);
            (*pcVar2)();
          }
          lVar13 = lVar9;
          lVar8 = lVar18;
          if (lVar9 < lVar18) {
            do {
              lVar8 = lVar8 + -1;
              if (lVar13 != lVar8) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0xe23f8);
                  (*pcVar2)();
                }
                uVar16 = *(undefined8 *)(lVar10 + lVar13 * 8);
                *(undefined8 *)(lVar10 + lVar13 * 8) = *(undefined8 *)(lVar10 + lVar8 * 8);
                *(undefined8 *)(lVar10 + lVar8 * 8) = uVar16;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < lVar8);
            lVar7 = param_3[1];
          }
        }
      }
      lVar13 = lVar18;
      if (lVar18 < lVar7) {
        if (SBORROW8(lVar18,lVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xe23d4);
          (*pcVar2)();
        }
        if (lVar18 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0xe23dc);
            (*pcVar2)();
          }
          lVar8 = lVar9 + param_4;
          if (lVar7 <= lVar9 + param_4) {
            lVar8 = lVar7;
          }
          if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0xe23e0);
            (*pcVar2)();
          }
          if (lVar18 != lVar8) {
            lVar7 = *param_3;
            plVar14 = (long *)(lVar7 + lVar18 * 8 + -8);
            lVar10 = lVar9 - lVar18;
            do {
              lVar12 = *(long *)(lVar7 + lVar18 * 8);
              lVar13 = lVar10;
              plVar19 = plVar14;
              do {
                lVar15 = *plVar19;
                if (lVar15 <= lVar12) break;
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0xe23e4);
                  (*pcVar2)();
                }
                *plVar19 = lVar12;
                plVar19[1] = lVar15;
                bVar3 = lVar13 != -1;
                lVar13 = lVar13 + 1;
                plVar19 = plVar19 + -1;
              } while (bVar3);
              lVar18 = lVar18 + 1;
              plVar14 = plVar14 + 1;
              lVar10 = lVar10 + -1;
              lVar13 = lVar8;
            } while (lVar18 != lVar8);
          }
        }
      }
      if (lVar13 < lVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xe23c4);
        (*pcVar2)();
      }
      puVar4 = puStack_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_000f0804(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar21 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar21) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_000f0804(puVar6,uVar21 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar21 + 1;
      *(long *)(puVar6 + uVar21 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar6 + uVar21 * 0x10 + 0x28) = lVar13;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xe23fc);
        (*pcVar2)();
      }
      FUN_000e2404(&puStack_58,*param_1,param_3);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_000e2394;
      lVar7 = param_3[1];
      lVar9 = lVar13;
    } while (lVar13 < lVar7);
  }
  puVar6 = puStack_58;
  lVar7 = *param_1;
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xe2404);
    (*pcVar2)();
  }
  puVar4 = puStack_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_000f0bc8();
  }
  puVar20 = (ulong *)(puVar6 + 0x10);
  uVar21 = *puVar20;
  while (1 < uVar21) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xe2400);
      (*pcVar2)();
    }
    plVar14 = (long *)(puVar6 + uVar21 * 0x10);
    lVar18 = *plVar14;
    puVar1 = puVar20 + uVar21 * 2;
    uVar11 = puVar1[1];
    FUN_000e2674(lVar9 + lVar18 * 8,lVar9 + *puVar1 * 8,lVar9 + uVar11 * 8,lVar7);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xe23c8);
      (*pcVar2)();
    }
    if (*puVar20 <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xe23cc);
      (*pcVar2)();
    }
    *plVar14 = lVar18;
    plVar14[1] = uVar11;
    uVar11 = *puVar20;
    lVar9 = uVar11 - uVar21;
    if (uVar11 < uVar21) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xe23d0);
      (*pcVar2)();
    }
    uVar21 = uVar11 - 1;
    _memmove(puVar1,puVar1 + 2,lVar9 * 0x10);
    *puVar20 = uVar21;
  }
LAB_000e2394:
  _swift_bridgeObjectRelease(puVar6);
  return;
}



/* Entry: 000e2404; end: 000e2673;  */

undefined8 FUN_000e2404(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar14 & 1) == 0) {
      FUN_000f0bc8();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_000e24dc;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0xe2654);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_000e253c:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0xe2644);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0xe264c);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0xe262c);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0xe2630);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0xe2638);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0xe2640);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_000e24dc:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0xe2634);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0xe263c);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0xe2648);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0xe2650);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_000e253c;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0xe2658);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0xe261c);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0xe2674);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_000e2674(lVar8 + lVar11 * 8,lVar8 + *plVar3 * 8,lVar8 + lVar9 * 8,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0xe2620);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0xe2624);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0xe2628);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      _memmove(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Entry: 000e2674; end: 000e287b;  */

undefined8 FUN_000e2674(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar5;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  if (lVar2 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar2 <= param_4)) || (param_4 != param_1)) {
      _memmove(param_4,param_1,lVar2 << 3);
    }
    plVar5 = param_4 + lVar2;
    plVar8 = param_1;
    if (7 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        lVar2 = *param_2;
        if (lVar2 < *param_4) {
          plVar9 = param_4;
          plVar7 = param_2 + 1;
          plVar3 = param_2;
        }
        else {
          lVar2 = *param_4;
          plVar9 = param_4 + 1;
          plVar7 = param_2;
          plVar3 = param_4;
        }
        param_2 = plVar7;
        param_4 = plVar9;
        if (plVar8 != plVar3) {
          *plVar8 = lVar2;
        }
        plVar8 = plVar8 + 1;
      } while (param_4 < plVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar6 << 3);
    }
    plVar3 = param_4 + lVar6;
    plVar5 = plVar3;
    plVar8 = param_2;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        plVar7 = param_2 + -1;
        plVar9 = param_3;
        while( true ) {
          param_3 = plVar9 + -1;
          plVar5 = plVar3 + -1;
          if (*plVar5 < *plVar7) break;
          if (plVar9 != plVar3) {
            *param_3 = *plVar5;
          }
          plVar3 = plVar5;
          plVar8 = param_2;
          plVar9 = param_3;
          if (plVar5 <= param_4) goto LAB_000e2820;
        }
        if (plVar9 != param_2) {
          *param_3 = *plVar7;
        }
        plVar5 = plVar3;
        plVar8 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar3));
    }
  }
LAB_000e2820:
  uVar4 = (long)plVar5 - (long)param_4;
  uVar1 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((plVar8 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar8)) {
    _memmove(plVar8,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 000e287c; end: 000e2897;  */

void FUN_000e287c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_000e2990();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 000e2898; end: 000e28df;  */

undefined8 FUN_000e2898(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xaedb70;
  func_0x000115a8(0xaedb70,&UNK_007d8040);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 000e28e0; end: 000e298f;  */

void FUN_000e28e0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_000e2cd8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 000e2990; end: 000e2b8f;  */

undefined * FUN_000e2990(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xe2a90);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0xaedb88;
    func_0x000115a8(0xaedb88,&UNK_007d7d00);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 000e2b90; end: 000e2cd7;  */

undefined * FUN_000e2b90(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0xe2cd8);
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
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0xaedde8;
    func_0x000115a8(0xaedde8,&UNK_007d8108);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x38) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0xaeddf0;
    func_0x000115a8(0xaeddf0,&UNK_007d8110);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x38 <= puVar4) {
      _memmove(puVar4,puVar1);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 000e2cd8; end: 000e2e1b;  */

undefined *
FUN_000e2cd8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xe2e1c);
        (*pcVar3)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar5 != 0) {
    func_0x000115a8(param_5,param_6);
    _swift_allocObject();
    puVar4 = param_5;
    _malloc_size();
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
    puVar4 = param_5;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000115a8(param_7,param_8);
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar6,param_7);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar6 * 0x28 <= puVar1) {
      _memmove(puVar1,puVar2,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Entry: 000e2e1c; end: 000e306f;  */

bool FUN_000e2e1c(long param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10)) {
    return false;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_1 + 0x40);
  uVar9 = uVar9 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar7 = 0;
  lVar4 = lVar7;
  if (uVar10 == 0) goto LAB_000e2ea0;
LAB_000e2ecc:
  uVar8 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
  uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
  uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar10 = uVar10 - 1 & uVar10;
  uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar4 << 6;
  lStack_d0 = *(long *)(*(long *)(param_1 + 0x30) + uVar8 * 8);
  FUN_000e1304(*(long *)(param_1 + 0x38) + uVar8 * 0x28,&uStack_c8);
  lVar7 = lVar4;
  do {
    lVar4 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar3 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(param_1);
      return true;
    }
    uVar8 = 0;
    FUN_000e1450(&uStack_98);
    if ((*(long *)(param_2 + 0x10) == 0) || (FUN_000e1d94(lVar4), (uVar8 & 1) == 0)) {
LAB_000e3018:
      _swift_release(param_1);
LAB_000e3040:
      FUN_00011670(&lStack_d0);
      return bVar3;
    }
    FUN_000e1304(*(long *)(param_2 + 0x38) + lVar4 * 0x28,auStack_120);
    FUN_000e1450(auStack_120,alStack_f8);
    plVar5 = &lStack_d0;
    FUN_0001393c(plVar5,uStack_b8);
    _swift_getDynamicType();
    plVar6 = alStack_f8;
    FUN_0001393c(plVar6,uStack_e0);
    _swift_getDynamicType();
    lVar4 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar5 != plVar6) {
      _swift_release(param_1);
      FUN_00011670(alStack_f8);
      goto LAB_000e3040;
    }
    FUN_0001393c(&lStack_d0,uStack_b8);
    plVar5 = alStack_f8;
    (**(code **)(lVar4 + 0x20))(plVar5,uVar1,lVar4);
    FUN_00011670(alStack_f8);
    if (((ulong)plVar5 & 1) == 0) goto LAB_000e3018;
    FUN_00011670(&lStack_d0);
    lVar4 = lVar7;
    if (uVar10 != 0) goto LAB_000e2ecc;
LAB_000e2ea0:
    uVar8 = uVar9;
    if ((long)uVar9 <= lVar7 + 1) {
      uVar8 = lVar7 + 1;
    }
    while( true ) {
      lVar4 = lVar7 + 1;
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xe3070);
        (*pcVar2)();
      }
      if ((long)uVar9 <= lVar4) break;
      uVar10 = ((ulong *)(param_1 + 0x40))[lVar4];
      lVar7 = lVar7 + 1;
      if (uVar10 != 0) goto LAB_000e2ecc;
    }
    uVar10 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar7 = uVar8 - 1;
  } while( true );
}



/* Entry: 000e3070; end: 000e3073;  */

void FUN_000e3070(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeddd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d80a8;
  _swift_getWitnessTable(&UNK_007d80a8,&UNK_009abe88);
  puRam0000000000aeddd8 = puVar1;
  return;
}



/* Entry: 000e3074; end: 000e30b3;  */

void FUN_000e3074(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeddd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d80a8;
  _swift_getWitnessTable(&UNK_007d80a8,&UNK_009abe88);
  puRam0000000000aeddd8 = puVar1;
  return;
}



/* Entry: 000e30b4; end: 000e30c3;  */

undefined1  [16] FUN_000e30b4(void)

{
  return ZEXT816(0x9abe88);
}



/* Entry: 000e30c4; end: 000e311b;  */

void FUN_000e30c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_000dfbb8(param_2,param_1 + 1);
  *param_1 = param_3;
  return;
}



/* Entry: 000e311c; end: 000e3123;  */

undefined8 FUN_000e311c(void)

{
  return 1;
}



/* Entry: 000e3124; end: 000e31bf;  */

void FUN_000e3124(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),&UNK_008441f0,
             &UNK_00844200);
                    /* WARNING: Could not recover jumptable at 0x000e316c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Entry: 000e31c0; end: 000e31d3;  */

undefined8 FUN_000e31c0(void)

{
  return 0xe31d0;
}



/* Entry: 000e31d4; end: 000e31f3;  */

void FUN_000e31d4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  FUN_000e69d0(unaff_x20 + *(int *)(param_2 + 0x24),param_1);
  return;
}



/* Entry: 000e31f4; end: 000e320f;  */

undefined8 * FUN_000e31f4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_2 + 0x24);
  FUN_00011670(unaff_x20 + iVar2);
  puVar1 = (undefined8 *)(unaff_x20 + iVar2);
  uVar4 = param_1[1];
  uVar3 = *param_1;
  uVar6 = param_1[3];
  uVar5 = param_1[2];
  puVar1[4] = param_1[4];
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  return puVar1;
}



/* Entry: 000e3210; end: 000e3333;  */

uint FUN_000e3210(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_4,param_3,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(param_4,param_3,uVar1,&UNK_008441f0,&UNK_008441f8);
  __sSQ2eeoiySbx_xtFZTj(param_1,param_2,uVar1,*(undefined8 *)(param_4 + 8));
  return (uint)param_1 & 1;
}



/* Entry: 000e3334; end: 000e333f;  */

void FUN_000e3334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00843ee4);
  return;
}



/* Entry: 000e3340; end: 000e3363;  */

void FUN_000e3340(long param_1)

{
  FUN_000e6a20(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),FUN_000e3334);
  return;
}



/* Entry: 000e3364; end: 000e33e3;  */

void FUN_000e3364(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,uVar1,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar3,uVar1,uVar2,&UNK_008441f0,&UNK_008441f8);
                    /* WARNING: Could not recover jumptable at 0x00778344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSH4hash4intoys6HasherVz_tFTj_0099af10)(param_1,uVar2,uVar3);
  return;
}



/* Entry: 000e33e4; end: 000e3497;  */

uint FUN_000e33e4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long extraout_x8;
  uint unaff_w20;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  lVar2 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar2 + 0x40));
  FUN_000e69d0();
  uVar1 = 0xaede00;
  func_0x000115a8(0xaede00,&UNK_007d8130);
  _swift_dynamicCast(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),auStack_58,uVar1,
                     param_2,7);
  FUN_000e3210();
  (**(code **)(lVar2 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2);
  return unaff_w20 & 1;
}



/* Entry: 000e3498; end: 000e3657;  */

void FUN_000e3498(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar5;
  long extraout_x12;
  long lVar6;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_80;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,lVar2,uVar1,&UNK_008441f0,&UNK_00844200);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_80 = (long)&lStack_80 - extraout_x8;
  __sSqMa(0,lVar3);
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = ((long)&lStack_80 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar7 = lVar6 - extraout_x12;
  (**(code **)(lVar9 + 0x38))(lVar7,1,1,lVar3);
  (**(code **)(lVar2 + 0x20))(lVar7,param_1,param_3,param_4,uVar1,lVar2);
  lVar2 = lStack_80;
  if (unaff_x21 == 0) {
    (**(code **)(lVar8 + 0x20))(lVar6,lVar7,lVar4);
    lVar7 = lVar6;
    (**(code **)(lVar9 + 0x30))(lVar6,1,lVar3);
    if ((int)lVar7 != 1) {
      (**(code **)(lVar9 + 0x20))(lVar2,lVar6,lVar3);
      (**(code **)(lVar9 + 0x28))(unaff_x20,lVar2,lVar3);
      return;
    }
    pcVar5 = *(code **)(lVar8 + 8);
  }
  else {
    pcVar5 = *(code **)(lVar8 + 8);
    lVar6 = lVar7;
  }
  (*pcVar5)(lVar6,lVar4);
  return;
}



/* Entry: 000e3658; end: 000e38bf;  */

void FUN_000e3658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar6;
  undefined8 uVar7;
  long unaff_x21;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar3 = 0;
  uStack_98 = param_1;
  uStack_88 = param_3;
  lStack_80 = param_5;
  lStack_78 = param_7;
  _swift_getAssociatedTypeWitness(0,param_6,param_4,&UNK_008441f0,&UNK_00844200);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_a0 = (long)&lStack_a0 - extraout_x8;
  __sSqMa(0,lVar3);
  lStack_90 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_90 + 0x40));
  lVar6 = ((long)&lStack_a0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar8 = lVar6 - extraout_x12;
  lVar5 = 0;
  FUN_000e3334(0,param_4,param_6);
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar9 + 0x38))(lVar8,1,1,lVar3);
  (**(code **)(param_6 + 0x20))(lVar8,uStack_88,lStack_80,lStack_78,param_4,param_6);
  lVar1 = lStack_90;
  if (unaff_x21 == 0) {
    lStack_80 = lVar8 - extraout_x8_01;
    lStack_78 = lVar10;
    (**(code **)(lStack_90 + 0x20))(lVar6,lVar8,lVar4);
    lVar10 = lVar6;
    (**(code **)(lVar9 + 0x30))(lVar6,1,lVar3);
    lVar8 = lStack_a0;
    bVar2 = (int)lVar10 != 1;
    if (bVar2) {
      (**(code **)(lVar9 + 0x20))(lStack_a0,lVar6,lVar3);
      lVar1 = lStack_80;
      func_0x000e32a4(lStack_80,param_2,lVar8,param_4,param_6);
      lVar3 = lStack_78;
      uVar7 = uStack_98;
      (**(code **)(lStack_78 + 0x20))(uStack_98,lVar1,lVar5);
    }
    else {
      FUN_00011670(param_2);
      (**(code **)(lVar1 + 8))(lVar6,lVar4);
      uVar7 = uStack_98;
      lVar3 = lStack_78;
    }
    (**(code **)(lVar3 + 0x38))(uVar7,!bVar2,1,lVar5);
  }
  else {
    FUN_00011670(param_2);
    (**(code **)(lStack_90 + 8))(lVar8,lVar4);
  }
  return;
}



/* Entry: 000e38c0; end: 000e3967;  */

void FUN_000e38c0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + *(int *)(param_2 + 0x24);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  FUN_0001393c(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(uVar2,lVar3);
  (**(code **)(*(long *)(param_2 + 0x18) + 0x30))();
  return;
}



/* Entry: 000e3968; end: 000e3a47;  */

void FUN_000e3968(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_000e3364(auStack_68,param_1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000e3a48; end: 000e3a67;  */

undefined8 FUN_000e3a48(void)

{
  return 0xe3a58;
}



/* Entry: 000e3a68; end: 000e3a87;  */

void FUN_000e3a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  FUN_000e3658(param_1,param_2,*(undefined8 *)(param_5 + 0x10),param_3,
               *(undefined8 *)(param_5 + 0x18),param_4);
  return;
}



/* Entry: 000e3a88; end: 000e3a8b;  */

void FUN_000e3a88(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,uVar1,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar3,uVar1,uVar2,&UNK_008441f0,&UNK_008441f8);
                    /* WARNING: Could not recover jumptable at 0x00778344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSH4hash4intoys6HasherVz_tFTj_0099af10)(param_1,uVar2,uVar3);
  return;
}



/* Entry: 000e3a8c; end: 000e3aab;  */

void FUN_000e3a8c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  FUN_000e69d0(unaff_x20 + *(int *)(param_2 + 0x24),param_1);
  return;
}



/* Entry: 000e3aac; end: 000e3aaf;  */

uint FUN_000e3aac(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long extraout_x8;
  uint unaff_w20;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  lVar2 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar2 + 0x40));
  FUN_000e69d0();
  uVar1 = 0xaede00;
  func_0x000115a8(0xaede00,&UNK_007d8130);
  _swift_dynamicCast(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),auStack_58,uVar1,
                     param_2,7);
  FUN_000e3210();
  (**(code **)(lVar2 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2);
  return unaff_w20 & 1;
}



/* Entry: 000e3ab0; end: 000e3af7;  */

void FUN_000e3ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_000e3498(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 000e3af8; end: 000e3b0f;  */

undefined8 FUN_000e3af8(void)

{
  return 1;
}



/* Entry: 000e3b10; end: 000e3b33;  */

void FUN_000e3b10(long param_1)

{
  FUN_000e6a20(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),FUN_000e3334);
  return;
}



/* Entry: 000e3b34; end: 000e3b67;  */

uint FUN_000e3b34(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  lVar3 = *(long *)(param_3 + 0x18);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,lVar3,uVar1,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(lVar3,uVar1,uVar2,&UNK_008441f0,&UNK_008441f8);
  __sSQ2eeoiySbx_xtFZTj(param_1,param_2,uVar2,*(undefined8 *)(lVar3 + 8));
  return (uint)param_1 & 1;
}



/* Entry: 000e3b68; end: 000e3b8b;  */

void FUN_000e3b68(long param_1)

{
  FUN_000e6a20(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0xe74fc);
  return;
}



/* Entry: 000e3b8c; end: 000e3b97;  */

uint FUN_000e3b8c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  uint unaff_w20;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [48];
  
  FUN_000e69d0(param_1,auStack_88);
  uVar1 = 0xaede00;
  func_0x000115a8(0xaede00,&UNK_007d8130);
  _swift_dynamicCast(auStack_60,auStack_88,uVar1,param_2,7);
  (*(code *)0xe7dc4)();
  (**(code **)(*(long *)(param_2 + -8) + 8))(auStack_60,param_2);
  return unaff_w20 & 1;
}



/* Entry: 000e3b98; end: 000e3c7b;  */

void FUN_000e3b98(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  
  lVar6 = *unaff_x20;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  uVar4 = 0;
  _swift_getAssociatedTypeWitness(0,lVar2,uVar1,&UNK_008441f0,&UNK_00844200);
  lVar5 = lVar6;
  __sSa5countSivg(lVar6,uVar4);
  if (0 < lVar5) {
    lVar5 = unaff_x20[4];
    lVar3 = unaff_x20[5];
    FUN_0001393c(unaff_x20 + 1,lVar5);
    (**(code **)(lVar3 + 8))(lVar5,lVar3);
    (**(code **)(lVar2 + 0x38))(lVar6,lVar5,param_1,param_3,param_4,uVar1,lVar2);
  }
  return;
}



/* Entry: 000e3c7c; end: 000e3c9f;  */

void FUN_000e3c7c(undefined8 param_1)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_000e7ec0(auStack_78,param_1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000e3ca0; end: 000e3cc3;  */

void FUN_000e3ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_000e3b98(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 000e3cc4; end: 000e3cdb;  */

undefined8 FUN_000e3cc4(void)

{
  return 1;
}



/* Entry: 000e3cdc; end: 000e3cff;  */

void FUN_000e3cdc(long param_1)

{
  FUN_000e6a20(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0xe74fc);
  return;
}



/* Entry: 000e3d00; end: 000e3d07;  */

void FUN_000e3d00(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(*unaff_x20);
  return;
}



/* Entry: 000e3d08; end: 000e3d2f;  */

void FUN_000e3d08(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 000e3d30; end: 000e3d43;  */

undefined8 FUN_000e3d30(void)

{
  return 0xe3d40;
}



/* Entry: 000e3d44; end: 000e3d5f;  */

void FUN_000e3d44(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_000e69d0(unaff_x20 + 8,param_1);
  return;
}



/* Entry: 000e3d60; end: 000e3d8b;  */

undefined8 * FUN_000e3d60(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_00011670(unaff_x20 + 8);
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x28) = param_1[4];
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x20 + 8) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  return (undefined8 *)(unaff_x20 + 8);
}



/* Entry: 000e3d8c; end: 000e3da3;  */

undefined1  [16] FUN_000e3d8c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0xe3d9c;
  return auVar1;
}



/* Entry: 000e3da4; end: 000e3e2b;  */

void FUN_000e3da4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_4,param_3,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(param_4,param_3,uVar1,&UNK_008441f0,&UNK_008441f8);
                    /* WARNING: Could not recover jumptable at 0x0077871c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSQRzlE2eeoiySbSayxG_ABtFZ_0099b1c8)
            (uVar2,uVar3,uVar1,*(undefined8 *)(param_4 + 8));
  return;
}



/* Entry: 000e3e2c; end: 000e3e4f;  */

void FUN_000e3e2c(long param_1)

{
  FUN_000e6a20(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0xe7570);
  return;
}



/* Entry: 000e3e50; end: 000e3e53;  */

void FUN_000e3e50(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *unaff_x20;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,uVar1,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar3,uVar1,uVar2,&UNK_008441f0,&UNK_008441f8);
                    /* WARNING: Could not recover jumptable at 0x00778710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSHRzlE4hash4intoys6HasherVz_tF_0099b1c0)(param_1,uVar4,uVar2,uVar3);
  return;
}



/* Entry: 000e3e54; end: 000e3edb;  */

void FUN_000e3e54(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *unaff_x20;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,uVar1,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar3,uVar1,uVar2,&UNK_008441f0,&UNK_008441f8);
                    /* WARNING: Could not recover jumptable at 0x00778710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSHRzlE4hash4intoys6HasherVz_tF_0099b1c0)(param_1,uVar4,uVar2,uVar3);
  return;
}



/* Entry: 000e3edc; end: 000e3ee7;  */

uint FUN_000e3edc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  uint unaff_w20;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [48];
  
  FUN_000e69d0(param_1,auStack_88);
  uVar1 = 0xaede00;
  func_0x000115a8(0xaede00,&UNK_007d8130);
  _swift_dynamicCast(auStack_60,auStack_88,uVar1,param_2,7);
  (*(code *)0xe3da0)();
  (**(code **)(*(long *)(param_2 + -8) + 8))(auStack_60,param_2);
  return unaff_w20 & 1;
}



/* Entry: 000e3ee8; end: 000e3f77;  */

uint FUN_000e3ee8(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  uint unaff_w20;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [48];
  
  FUN_000e69d0(param_1,auStack_88);
  uVar1 = 0xaede00;
  func_0x000115a8(0xaede00,&UNK_007d8130);
  _swift_dynamicCast(auStack_60,auStack_88,uVar1,param_2,7);
  (*param_3)();
  (**(code **)(*(long *)(param_2 + -8) + 8))(auStack_60,param_2);
  return unaff_w20 & 1;
}



/* Entry: 000e3f78; end: 000e3fab;  */

void FUN_000e3f78(undefined8 param_1,long param_2)

{
  (**(code **)(*(long *)(param_2 + 0x18) + 0x28))();
  return;
}



/* Entry: 000e3fac; end: 000e3fbf;  */

void FUN_000e3fac(void)

{
  FUN_000e3fc0();
  return;
}



/* Entry: 000e3fc0; end: 000e40b3;  */

void FUN_000e3fc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined8 auStack_88 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_6,param_4,&UNK_008441f0,&UNK_00844200);
  uVar2 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar1);
  auStack_88[0] = uVar2;
  (**(code **)(param_6 + 0x28))(auStack_88,param_3,param_5,param_7,param_4,param_6);
  uVar1 = auStack_88[0];
  if (unaff_x21 == 0) {
    FUN_000dfbb8(param_2,&uStack_78);
    param_1[1] = uStack_78;
    *param_1 = uVar1;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
    param_1[5] = uStack_58;
    param_1[4] = uStack_60;
  }
  else {
    FUN_00011670(param_2);
    _swift_bridgeObjectRelease(auStack_88[0]);
  }
  return;
}



/* Entry: 000e40b4; end: 000e4197;  */

void FUN_000e40b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  
  lVar6 = *unaff_x20;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  uVar4 = 0;
  _swift_getAssociatedTypeWitness(0,lVar2,uVar1,&UNK_008441f0,&UNK_00844200);
  lVar5 = lVar6;
  __sSa5countSivg(lVar6,uVar4);
  if (0 < lVar5) {
    lVar5 = unaff_x20[4];
    lVar3 = unaff_x20[5];
    FUN_0001393c(unaff_x20 + 1,lVar5);
    (**(code **)(lVar3 + 8))(lVar5,lVar3);
    (**(code **)(lVar2 + 0x40))(lVar6,lVar5,param_1,param_3,param_4,uVar1,lVar2);
  }
  return;
}


