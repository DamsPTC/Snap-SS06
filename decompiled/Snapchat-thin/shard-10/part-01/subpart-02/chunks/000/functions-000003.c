/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107759544; end: 107759743;  */

undefined8 * FUN_107759544(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 auStack_90 [9];
  undefined8 uStack_48;
  
  plVar4 = param_2;
  func_0x00010775c2a0();
  uStack_98 = 9;
  auStack_90[0] = 0;
  uStack_48 = extraout_x8;
  func_0x000107539a30(auStack_90,(plVar4[1] - *plVar4 >> 5) + (plVar4[1] - *plVar4 >> 8));
  lVar1 = param_2[1];
  lVar5 = *param_2 + 0x88;
  while( true ) {
    uVar2 = lVar5 + -0x88 == lVar1;
    if ((bool)uVar2) break;
    func_0x00010775be30(auStack_90,lVar5 + -0x88);
    if (*(char *)(lVar5 + -0x68) == '\x01') {
      func_0x00010775c3e8();
    }
    if (*(char *)(lVar5 + -0x50) == '\x01') {
      func_0x00010775c3e8();
    }
    if (*(char *)(lVar5 + -0x38) == '\x01') {
      func_0x00010775c3e8();
    }
    if (*(char *)(lVar5 + -0x20) == '\x01') {
      func_0x00010775c3e8();
    }
    if (*(char *)(lVar5 + -8) == '\x01') {
      func_0x00010775c3e8();
    }
    if (*(char *)(lVar5 + 0x10) == '\x01') {
      func_0x00010775be30(auStack_90,lVar5);
    }
    if (*(char *)(lVar5 + 0x28) == '\x01') {
      func_0x00010775be30(auStack_90,lVar5 + 0x18);
    }
    if (*(char *)(lVar5 + 0x40) == '\x01') {
      func_0x00010775be30(auStack_90,lVar5 + 0x30);
    }
    if (*(char *)(lVar5 + 0x58) == '\x01') {
      func_0x00010775be30(auStack_90,lVar5 + 0x48);
    }
    if (*(char *)(lVar5 + 0x70) == '\x01') {
      func_0x00010775be30(auStack_90,lVar5 + 0x60);
    }
    lVar5 = lVar5 + 0x100;
  }
  puVar3 = auStack_90;
  func_0x0001072c9e90();
  func_0x0001072c9c34(auStack_90);
  uStack_a8 = SUB84(puVar3,0);
  uStack_a4 = (undefined2)((ulong)puVar3 >> 0x20);
  func_0x0001072c9f9c(param_1,0x12,&uStack_a0,&uStack_a8);
  func_0x0001072c9884();
  *param_1 = &PTR_DAT_1109d4ed8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  lVar5 = *param_2;
  param_1[10] = param_2[1];
  param_1[9] = lVar5;
  param_1[0xb] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x00010775c25c(uStack_48);
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001072c9c34(auStack_90);
  puVar3 = &uStack_a0;
  func_0x0001072c9884();
  func_0x00010775c370();
  func_0x000107543b48(puVar3 + 9);
  *puVar3 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(puVar3 + 5);
  func_0x0001072c9884(puVar3 + 2);
  return puVar3;
}



/* Entry: 10775afb8; end: 10775b03f;  */

void FUN_10775afb8(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  
  plVar1 = param_2;
  puVar3 = param_3;
  func_0x00010774e278();
  if (((ulong)puVar3 & 1) != 0) {
    lVar2 = param_2[1] + (long)plVar1 * 0x78;
    func_0x000100060964(lVar2,*param_3);
    func_0x000104c32a18(lVar2 + 0x38,param_4);
  }
  lVar2 = param_2[1];
  *param_1 = *param_2 + (long)plVar1;
  param_1[1] = lVar2 + (long)plVar1 * 0x78;
  *(char *)(param_1 + 2) = (char)puVar3;
  return;
}



/* Entry: 10775bfc4; end: 10775c007;  */

undefined8 FUN_10775bfc4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001077594e4(param_1,&uStack_30);
  func_0x0001072c9b9c(&uStack_30);
  return param_1;
}



/* Entry: 10775c5b8; end: 10775c61f;  */

ulong FUN_10775c5b8(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  
  if ((ulong)((param_1[1] - *param_1) / 0x120) <= param_2) {
    FUN_10775de6c();
    cVar1 = (char)param_1[0xc];
    bVar2 = cVar1 != *(char *)(param_2 + 0x60);
    uVar3 = (ulong)bVar2;
    if (!bVar2 && cVar1 != '\0') {
      func_0x00010775f0dc(param_1);
      uVar3 = (ulong)((uint)param_1 ^ 1);
    }
    return uVar3;
  }
  return *param_1 + param_2 * 0x120;
}



/* Entry: 10775de6c; end: 10775de7f;  */

uint FUN_10775de6c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)&UNK_10f426061;
  func_0x000104c03f28();
  uVar2 = *puVar1;
  func_0x0001072e7894(uVar2,*param_2);
  return (uint)uVar2 ^ 1;
}



/* Entry: 10775e188; end: 10775e193;  */

bool FUN_10775e188(undefined8 *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010727a3f0(param_2,*param_1,param_2 + 0x38);
  _strlen();
  func_0x00010014c53c();
  func_0x00010014c2bc();
  func_0x000104c2fcd4();
  func_0x000104c2fcf0();
  iVar1 = (int)&stack0xffffffffffffffe0;
  if (unaff_x21 == unaff_x19) {
    func_0x000100067218(&stack0xffffffffffffffe0,unaff_x20,unaff_x19);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10775e8d4; end: 10775e907;  */

/* WARNING: Possible PIC construction at 0x00010775e8f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010775e8f4) */

long * FUN_10775e8d4(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_2 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48(0,*(undefined8 *)(param_1 + 0x48));
  plVar2 = (long *)plVar1[3];
  if (plVar2 == plVar1) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 10775edc8; end: 10775edcb;  */

void FUN_10775edc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d5038;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10775efa4; end: 10775f02b;  */

/* WARNING: Possible PIC construction at 0x00010775f0a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010775f0a8) */
/* WARNING: Removing unreachable block (ram,0x00010775f0c4) */
/* WARNING: Removing unreachable block (ram,0x00010775f0d8) */
/* WARNING: Removing unreachable block (ram,0x00010775f0f8) */
/* WARNING: Removing unreachable block (ram,0x00010775f11c) */
/* WARNING: Removing unreachable block (ram,0x00010775f108) */
/* WARNING: Removing unreachable block (ram,0x0001072eba10) */
/* WARNING: Removing unreachable block (ram,0x0001072eba1c) */
/* WARNING: Removing unreachable block (ram,0x0001072eba20) */
/* WARNING: Removing unreachable block (ram,0x0001072eba30) */
/* WARNING: Removing unreachable block (ram,0x0001000e107c) */
/* WARNING: Removing unreachable block (ram,0x0001000e108c) */
/* WARNING: Removing unreachable block (ram,0x0001000e10a0) */
/* WARNING: Removing unreachable block (ram,0x0001000e10e0) */
/* WARNING: Removing unreachable block (ram,0x0001000e10ac) */
/* WARNING: Removing unreachable block (ram,0x0001000e10bc) */
/* WARNING: Removing unreachable block (ram,0x0001000e10c8) */
/* WARNING: Removing unreachable block (ram,0x0001072eba24) */
/* WARNING: Removing unreachable block (ram,0x00010775f0b8) */

undefined1 * FUN_10775efa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *unaff_x19;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 auStack_80 [24];
  undefined1 uStack_68;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x00010775f5c4();
  func_0x000104c318bc(auStack_60);
  auStack_80[0] = 0;
  uStack_68 = 0;
  func_0x00010775ef4c();
  func_0x0001001148fc(auStack_80);
  puVar2 = auStack_60;
  func_0x000104c2f714();
  func_0x00010775f5b0(uStack_28);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x0001001148fc(auStack_80);
  func_0x000104c2f714(auStack_60);
  puVar4 = &UNK_10775f02c;
  func_0x00010775f5dc();
  puVar1 = auStack_80;
  while( true ) {
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x60);
    *(undefined8 *)(puVar1 + -0x20) = param_3;
    *(undefined1 **)(puVar1 + -0x18) = puVar2;
    *(undefined1 **)(puVar1 + -0x10) = puVar3;
    *(undefined **)(puVar1 + -8) = puVar4;
    func_0x00010775f5c4();
    func_0x000104c318bc(puVar1 + -0x60);
    puVar3 = puVar2;
    func_0x00010775f62c(puVar2,puVar1 + -0x60);
    func_0x00010775f5fc();
    func_0x00010775f5b0(*(undefined8 *)(puVar1 + -0x28));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x00010775f5fc();
    func_0x00010775f5dc();
    *(undefined8 *)(puVar1 + -0x80) = param_3;
    *(undefined1 **)(puVar1 + -0x78) = puVar3;
    *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x68) = &UNK_10775f080;
    func_0x00010775f5c4();
    func_0x000100060964(puVar1 + -0xc0);
    puVar4 = &UNK_10775f0a8;
    puVar1 = puVar1 + -0xc0;
    puVar2 = puVar3;
  }
  return puVar2;
}



/* Entry: 10775f648; end: 10775f68b;  */

void FUN_10775f648(long param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  *(undefined4 *)(param_1 + 0x10) = 1;
  func_0x00010775f68c(param_2,param_3,param_4,param_1);
  return;
}



/* Entry: 10775fc2c; end: 10775fc97;  */

/* WARNING: Possible PIC construction at 0x00010775fc5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010775fc60) */
/* WARNING: Removing unreachable block (ram,0x00010775fc84) */
/* WARNING: Removing unreachable block (ram,0x00010775fc94) */
/* WARNING: Removing unreachable block (ram,0x00010775fc70) */

undefined8 FUN_10775fc2c(long param_1)

{
  undefined8 uStack_88;
  undefined1 auStack_60 [64];
  
  func_0x000107760a0c();
  func_0x000100060964(auStack_60,"image");
  uStack_88 = 0;
  func_0x0001073f26dc(&uStack_88,auStack_60);
  func_0x00010756af98(&uStack_88,param_1 + 0x48);
  return uStack_88;
}



/* Entry: 107760230; end: 107760257;  */

void FUN_107760230(undefined8 param_1)

{
  func_0x000107760b74();
  func_0x000107760b08(param_1,&PTR_DAT_1109d5170);
  func_0x000107760af0();
  return;
}



/* Entry: 107760764; end: 107760807;  */

undefined1 * FUN_107760764(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_1b8 [240];
  ulong uStack_c8;
  undefined8 uStack_28;
  
  func_0x000107760a0c();
  uVar1 = *(char *)(param_2 + 400) == '\x01';
  if ((bool)uVar1) {
    func_0x00010756ec34(param_2);
    func_0x000107751334(auStack_1b8,param_2);
    if ((uStack_c8 == 0) || (func_0x0001073e0a58(uStack_c8,param_1), (uStack_c8 & 1) == 0)) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      puVar2 = (undefined1 *)0x1;
    }
    func_0x000107267da8(auStack_1b8);
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  func_0x0001077609c8(uStack_28);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = auStack_1b8;
  func_0x000107267da8(puVar2);
  func_0x000107760a74();
  return puVar2;
}



/* Entry: 107760954; end: 107760973;  */

void FUN_107760954(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109d5290;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107761238; end: 10776173b;  */

long * FUN_107761238(long *param_1,long *param_2,long param_3,long param_4)

{
  undefined3 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 extraout_x8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long alStack_1a0 [3];
  undefined8 uStack_188;
  undefined8 uStack_180;
  uint5 uStack_170;
  undefined8 uStack_168;
  long alStack_150 [3];
  undefined1 auStack_138 [8];
  uint uStack_130;
  undefined1 auStack_128 [8];
  uint uStack_120;
  undefined1 auStack_118 [8];
  undefined4 uStack_110;
  undefined1 uStack_108;
  uint5 auStack_100 [2];
  byte bStack_f0;
  undefined1 auStack_e8 [8];
  undefined4 uStack_e0;
  undefined1 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  long alStack_b8 [3];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_58;
  
  puVar7 = &uStack_1b0;
  plVar5 = param_2;
  func_0x000107761954();
  plVar8 = plVar5 + 1;
  plVar9 = plVar8;
  uStack_58 = extraout_x8;
  (**(code **)(*plVar5 + 0x20))();
  uVar4 = plVar9 == (long *)0x3;
  if (!(bool)uVar4) {
    func_0x000107878fec(&lStack_d0,(long)plVar9 + -1);
    func_0x0001004c3cd0(&lStack_90,&UNK_10f426143,&lStack_d0);
    func_0x00010048a6c8(alStack_b8,&lStack_90,&UNK_10f417b93);
    plVar5 = alStack_b8;
    func_0x000107761a24();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_90);
    plVar9 = &lStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x000107761a40();
    goto LAB_1077615cc;
  }
  (**(code **)(*param_2 + 0x28))(&lStack_90,plVar8,1);
  uStack_e0 = 6;
  uStack_d8 = 1;
  uVar1 = SUB83((undefined8)auStack_100[0],5);
  uVar2 = (uint)(undefined8)auStack_100[0];
  auStack_100[0] = (uint5)(uVar2 & 0xffffff00);
  auStack_100[0]._0_8_ = CONCAT35(uVar1,auStack_100[0]);
  plVar5 = &lStack_90;
  func_0x00010777067c(&lStack_d0,param_3,plVar5,1,param_4,auStack_e8,auStack_100);
  func_0x0001072c9854(auStack_e8);
  func_0x0001077619c0();
  if ((bStack_c0 & 1) == 0) {
    func_0x000107761a40();
  }
  else {
    (**(code **)(*param_2 + 0x28))(&lStack_90,plVar8,2);
    uStack_110 = 6;
    uStack_108 = 1;
    uVar3 = (ulong)_uStack_170 >> 0x28;
    uVar2 = (uint)_uStack_170;
    uStack_170 = (uint5)(uVar2 & 0xffffff00);
    _uStack_170 = CONCAT35((int3)uVar3,uStack_170);
    plVar5 = &lStack_90;
    func_0x00010777067c(auStack_100,param_3,plVar5,2,param_4,auStack_118,&uStack_170);
    func_0x0001072c9854(auStack_118);
    func_0x0001077619c0();
    if ((bStack_f0 & 1) == 0) {
      func_0x000107761a40();
    }
    else {
      func_0x0001072c9ff4(auStack_128,lStack_d0 + 0x10);
      func_0x0001072c9ff4(auStack_138,(undefined8)auStack_100[0] + 0x10);
      uVar4 = uStack_120 < 4 || uStack_120 == 6;
      if (uStack_120 < 4 || uStack_120 == 6) {
        if ((uStack_130 != 0) &&
           ((uVar4 = uStack_130 == 7, (uStack_130 < 3 || 6 < uStack_130) && !(bool)uVar4 ||
            (uVar4 = true, (1 << (ulong)(uStack_130 & 0x1f) & 200U) == 0)))) {
          func_0x00010756a788(&lStack_90,auStack_138);
          func_0x0001077619d8();
          func_0x000107761a34(&UNK_10f417ff2);
          func_0x00010048a6c8(alStack_1a0,&uStack_170,&UNK_10f417b93);
          plVar5 = alStack_1a0;
          func_0x000107761a24();
          plVar9 = alStack_1a0;
          goto LAB_107761598;
        }
        uVar4 = *(char *)(param_3 + 0x51) == '\x01';
        if ((bool)uVar4) {
          puVar6 = (undefined8 *)0xa0;
          __Znwm();
          uStack_88 = uStack_c8;
          lStack_90 = lStack_d0;
          uStack_168 = (undefined8)auStack_100[1];
          _uStack_170 = (undefined8)auStack_100[0];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = &PTR_FUN_1109d5398;
          lStack_d0 = 0;
          uStack_c8 = 0;
          auStack_100[0]._0_8_ = 0;
          auStack_100[1]._0_8_ = 0;
          uStack_188 = 0;
          uStack_180 = 0;
          uStack_a0 = 0;
          uStack_98 = 0;
          func_0x000107760b80(puVar6 + 3,&lStack_90,&uStack_170);
          func_0x0001077619b8();
          func_0x000107761a2c();
          plVar5 = (long *)(param_4 + 0x40);
          func_0x0001002a8234(puVar6 + 8);
          func_0x0001072c9b9c(&uStack_a0);
          func_0x0001072c9b9c(&uStack_188);
          *param_1 = (long)(puVar6 + 3);
          param_1[1] = (long)puVar6;
          uStack_1b0 = 0;
          uStack_1a8 = 0;
          *(undefined1 *)(param_1 + 2) = 1;
        }
        else {
          puVar7 = (undefined8 *)0xa0;
          __Znwm();
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = &PTR_FUN_1109d5398;
          uStack_88 = uStack_c8;
          lStack_90 = lStack_d0;
          lStack_d0 = 0;
          uStack_c8 = 0;
          uStack_168 = (undefined8)auStack_100[1];
          _uStack_170 = (undefined8)auStack_100[0];
          auStack_100[0]._0_8_ = 0;
          auStack_100[1]._0_8_ = 0;
          plVar5 = &lStack_90;
          func_0x000107760b80(puVar7 + 3,plVar5,&uStack_170);
          func_0x0001077619b8();
          func_0x000107761a2c();
          *param_1 = (long)(puVar7 + 3);
          param_1[1] = (long)puVar7;
          uStack_188 = 0;
          uStack_180 = 0;
          *(undefined1 *)(param_1 + 2) = 1;
          puVar7 = &uStack_188;
        }
        func_0x000107761914(puVar7);
      }
      else {
        func_0x00010756a788(&lStack_90,auStack_128);
        func_0x0001077619d8();
        func_0x000107761a34(&UNK_10f417fa6);
        func_0x00010048a6c8(alStack_150,&uStack_170,&UNK_10f417b93);
        plVar5 = alStack_150;
        func_0x000107761a24();
        plVar9 = alStack_150;
LAB_107761598:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar9);
        func_0x0001077619b0();
        func_0x000107761974();
        func_0x0001077619c8();
        func_0x000107761a40();
      }
      func_0x0001072c9884(auStack_138);
      func_0x0001072c9884(auStack_128);
    }
    func_0x0001072c95d0(auStack_100);
  }
  plVar9 = &lStack_d0;
  func_0x0001072c95d0();
LAB_1077615cc:
  func_0x000107761940(uStack_58);
  if ((bool)uVar4) {
    return plVar9;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_150);
  func_0x0001077619b0();
  func_0x000107761974();
  func_0x0001077619c8();
  func_0x0001072c9884(auStack_138);
  func_0x0001072c9884(auStack_128);
  func_0x0001072c95d0(auStack_100);
  plVar9 = &lStack_d0;
  func_0x0001072c95d0();
  func_0x000107761a04();
  if ((int)plVar5[1] == 0x16) {
    plVar8 = (long *)plVar9[9];
    (**(code **)(*plVar8 + 0x18))(plVar8,plVar5[9]);
    if ((int)plVar8 != 0) {
      plVar9 = (long *)plVar9[0xb];
                    /* WARNING: Could not recover jumptable at 0x00010776178c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x18))(plVar9,plVar5[0xb]);
      return plVar9;
    }
  }
  return (long *)0x0;
}



/* Entry: 1077618e0; end: 1077618e3;  */

void FUN_1077618e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d5398;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077622a0; end: 1077622a3;  */

undefined8 * FUN_1077622a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d53e8;
  func_0x000107262330(param_1 + 0x24);
  func_0x000107262330(param_1 + 0x16);
  func_0x000104c2f714(param_1 + 0xe);
  func_0x0001072c95d0(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107762394; end: 1077623e3;  */

void FUN_107762394(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_38);
  func_0x00010756b71c(uVar1,&uStack_50);
  func_0x0001072c97dc(&uStack_50);
  return;
}



/* Entry: 107763be0; end: 107763f0b;  */

void FUN_107763be0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  bool bVar2;
  long *plVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined4 *unaff_x19;
  long lVar9;
  undefined1 **ppuVar10;
  long lVar11;
  undefined1 *unaff_x22;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  double dVar12;
  double dVar13;
  undefined1 *puStack_298;
  undefined1 auStack_290 [56];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 *puStack_240;
  long lStack_238;
  long lStack_230;
  long *plStack_228;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long alStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [64];
  undefined4 auStack_168 [2];
  double dStack_160;
  undefined4 uStack_128;
  double dStack_120;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_68;
  
  func_0x000107765ba4();
  alStack_200[0] = 0;
  alStack_200[1] = 0;
  alStack_200[2] = 0;
  uStack_68 = extraout_x8;
  func_0x000107765f7c();
  func_0x0001074d2254(alStack_200,auStack_1a8);
  func_0x000104c2f714(auStack_1a8);
  if (*(int *)(param_3 + 0x78) == 0) {
    if (*(double *)(param_3 + 0x48) != 1.0) {
      func_0x00010002b838(auStack_1e8,&UNK_10f4167db);
      func_0x000107268798(auStack_1a8,auStack_1e8);
      dStack_160 = *(double *)(param_3 + 0x48);
      auStack_168[0] = 3;
      func_0x000107268bc4(auStack_1d0,auStack_1a8,2);
      func_0x000107765fe4();
      func_0x000107765ea0();
      lVar11 = 0x40;
      unaff_x22 = auStack_1a8;
      do {
        func_0x000104c3323c(unaff_x22 + lVar11);
        lVar11 = lVar11 + -0x40;
      } while (lVar11 != -0x40);
      puVar6 = auStack_1e8;
      goto LAB_107763d20;
    }
    func_0x00010002b838(auStack_1c0,&DAT_10f42625c);
    func_0x000107765fb0();
    func_0x000107268bc4(auStack_1d0,auStack_1a8,1);
    func_0x000107765fe4();
    func_0x000107765ea0();
    func_0x000107765e5c();
    param_2 = unaff_d8;
    param_1 = unaff_d9;
  }
  else {
    dVar12 = *(double *)(param_3 + 0x48);
    dVar13 = *(double *)(param_3 + 0x60);
    func_0x000107765970(param_3 + 0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_1c0,&UNK_10de96ca8);
    func_0x000107765fb0();
    auStack_168[0] = 3;
    uStack_128 = 3;
    uStack_e8 = 3;
    uStack_a8 = 3;
    dStack_160 = dVar12 / 3.0;
    dStack_120 = dVar13 / 3.0;
    uStack_e0 = param_1;
    uStack_a0 = param_2;
    func_0x000107268bc4(auStack_1e8,auStack_1a8,5);
    func_0x000107765870(alStack_200,auStack_1e8);
    func_0x000104c33108(auStack_1e8);
    lVar11 = 0x100;
    unaff_x22 = auStack_1a8;
    do {
      func_0x000104c3323c(unaff_x22 + lVar11);
      lVar11 = lVar11 + -0x40;
    } while (lVar11 != -0x40);
  }
  puVar6 = auStack_1c0;
  unaff_d8 = param_2;
  unaff_d9 = param_1;
LAB_107763d20:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6);
  func_0x000107765f7c();
  func_0x000107765ff0();
  func_0x000107765e5c();
  lVar11 = *(long *)(param_3 + 0x90);
  while (uVar1 = lVar11 == param_3 + 0x98, !(bool)uVar1) {
    func_0x0001077659a0(alStack_200,lVar11 + 0x20);
    func_0x000107765f7c();
    func_0x000107765ff0();
    func_0x000107765e5c();
    func_0x00010002c7d4();
  }
  func_0x000107327958(&uStack_210,alStack_200);
  *unaff_x19 = 0;
  *(undefined8 *)(unaff_x19 + 4) = uStack_208;
  *(undefined8 *)(unaff_x19 + 2) = uStack_210;
  func_0x000107765fbc();
  plVar3 = alStack_200;
  func_0x000107269124();
  func_0x000107765aec(uStack_68);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107765ea0();
  puVar4 = auStack_168;
  lVar9 = -0x80;
  do {
    func_0x000104c3323c(puVar4);
    puVar4 = puVar4 + -0x10;
    lVar9 = lVar9 + 0x40;
  } while (lVar9 != 0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e8);
  plVar5 = alStack_200;
  func_0x000107269124();
  func_0x000107765c04();
  puStack_218 = &DAT_107763f0c;
  uStack_258 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_250 = unaff_d9;
  uStack_248 = unaff_d8;
  puStack_240 = unaff_x22;
  lStack_238 = lVar11;
  lStack_230 = lVar9;
  plStack_228 = plVar3;
  puStack_220 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar5 + 0x40))(auStack_290);
  puVar6 = auStack_290;
  func_0x0001074d25b4();
  func_0x000104c2f714(auStack_290);
  puStack_298 = puVar6;
  if ((int)plVar5[0xf] == 0) {
    func_0x000107451500(&puStack_298,plVar5 + 9);
  }
  else {
    func_0x0001074b019c(&puStack_298,&UNK_10de96cc0);
    dVar12 = (double)plVar5[9];
    func_0x000107765970(plVar5 + 9);
    lVar11 = -0x61c8864680b583eb;
    if (dVar12 / 3.0 != 0.0) {
      lVar11 = (long)(dVar12 / 3.0) + -0x61c8864680b583eb;
    }
    func_0x000107765f18(((ulong)puStack_298 >> 4) + (long)puStack_298 * 0x1000 + lVar11 ^
                        (ulong)puStack_298);
    func_0x000107765f18();
    func_0x000107765f18();
    puStack_298 = extraout_x8_00;
  }
  ppuVar8 = (undefined1 **)(plVar5 + 0x10);
  func_0x00010756af98(&puStack_298);
  puStack_298 = (undefined1 *)
                (plVar5[0x14] + -0x61c8864680b583eb + (long)puStack_298 * 0x1000 +
                 ((ulong)puStack_298 >> 4) ^ (ulong)puStack_298);
  ppuVar10 = (undefined1 **)plVar5[0x12];
  while (bVar2 = ppuVar10 == (undefined1 **)(plVar5 + 0x13), !bVar2) {
    func_0x000107451500(&puStack_298,ppuVar10 + 4);
    ppuVar7 = &puStack_298;
    ppuVar8 = ppuVar10 + 5;
    func_0x00010756af98();
    func_0x000107765ec0();
    ppuVar10 = ppuVar7;
  }
  func_0x000107765aec(uStack_258);
  if (bVar2) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = auStack_290;
  func_0x000104c2f714();
  func_0x000107765c04();
  func_0x00010745df58(ppuVar8,*(undefined8 *)(puVar6 + 0x80));
  ppuVar10 = *(undefined1 ***)(puVar6 + 0x90);
  while (ppuVar10 != (undefined1 **)(puVar6 + 0x98)) {
    ppuVar7 = ppuVar10 + 5;
    ppuVar10 = ppuVar8;
    func_0x00010745df58(ppuVar8,*ppuVar7);
    func_0x000107765ec0();
  }
  return;
}



/* Entry: 1077643a4; end: 1077643cb;  */

undefined8 * FUN_1077643a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x00010002c7d4();
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 1077648c0; end: 1077648ff;  */

undefined8 FUN_1077648c0(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000107764a30(&uStack_18,0xffffffffffffffff);
  return uStack_18;
}



/* Entry: 107764a78; end: 107764a83;  */

void FUN_107764a78(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d5568;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107764b6c; end: 107764fbf;  */

void FUN_107764b6c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x23;
  undefined4 uVar6;
  double dVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auStack_210 [56];
  undefined1 auStack_1d8 [120];
  int iStack_160;
  double dStack_158;
  undefined8 uStack_150;
  int iStack_e0;
  undefined1 auStack_d8 [120];
  int iStack_60;
  undefined8 uStack_58;
  
  lVar4 = param_5;
  func_0x000107765ba4();
  uStack_58 = extraout_x8;
  func_0x000107753050(auStack_d8,*(undefined8 *)(lVar4 + 0x80));
  uVar1 = iStack_60 == 1;
  if (!(bool)uVar1) {
    func_0x00010756dd74(auStack_d8);
    func_0x000107765c64();
    goto LAB_107764e10;
  }
  puVar3 = auStack_d8;
  func_0x00010727f7dc();
  func_0x000107776fc4();
  fVar10 = SUB84(puVar3,0);
  uVar1 = !NAN(fVar10) && !NAN(fVar10);
  if (NAN(fVar10)) goto LAB_107764e34;
  if (*(long *)(param_5 + 0xa0) == 0) {
    if ((bRam00000001137260d0 & 1) == 0) {
      iVar2 = 0x137260d0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000107765d74(0x113726190);
        ___cxa_guard_release(0x1137260d0);
      }
    }
    uVar9 = 0x113726190;
    goto LAB_107764c58;
  }
  dStack_158 = (double)fVar10;
  func_0x00010776602c();
  func_0x000107765f08();
  if ((bool)uVar1) {
    func_0x00010002c810();
    func_0x000107765a94(*(undefined8 *)(puVar3 + 0x28));
    goto LAB_107764e10;
  }
  uVar1 = *(long *)(param_5 + 0x90) == unaff_x23;
  if ((bool)uVar1) {
    func_0x000107765a94(*(undefined8 *)(*(long *)(param_5 + 0x90) + 0x28));
    goto LAB_107764e10;
  }
  func_0x000107765c6c();
  dVar7 = *(double *)(puVar3 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x23 + 0x20);
  dStack_158 = dVar7;
  uStack_150 = uVar9;
  func_0x000107765e2c();
  uVar8 = (undefined4)uVar9;
  fVar10 = (float)dVar7;
  uVar1 = fVar10 == 0.0;
  if ((bool)uVar1) {
    func_0x000107765c6c();
    func_0x000107765a94(*(undefined8 *)(puVar3 + 0x28));
    goto LAB_107764e10;
  }
  uVar1 = fVar10 == 1.0;
  if ((bool)uVar1) {
    func_0x000107765a94(*(undefined8 *)(unaff_x23 + 0x28));
    goto LAB_107764e10;
  }
  func_0x000107765c6c();
  func_0x000107765ae0(&dStack_158,*(undefined8 *)(puVar3 + 0x28));
  uVar1 = iStack_e0 == 1;
  if ((bool)uVar1) {
    lVar4 = *(long *)(unaff_x23 + 0x28);
    func_0x000107765ae0(auStack_1d8);
    uVar1 = iStack_160 == 1;
    if ((bool)uVar1) {
      func_0x000107765db8();
      uVar1 = *(int *)(lVar4 + 0x68) == 4;
      if ((bool)uVar1) {
        func_0x000107765e24();
        uVar1 = *(int *)(lVar4 + 0x68) == 4;
        if ((bool)uVar1) {
          func_0x000107765db8();
          func_0x000107764fc0();
          lVar5 = lVar4;
          func_0x000107765e24();
          func_0x000107764fc0();
          uVar6 = SUB84((double)fVar10,0);
          func_0x000107438adc(lVar4,lVar5);
          *(undefined4 *)(unaff_x19 + 0x10) = uVar6;
          *(undefined4 *)(unaff_x19 + 0x14) = uVar8;
          *(undefined4 *)(unaff_x19 + 0x18) = param_3;
          *(undefined4 *)(unaff_x19 + 0x1c) = param_4;
          func_0x000107765ee8(4);
          goto LAB_107764e00;
        }
        func_0x000107765c0c();
        func_0x000107765c28();
        func_0x000107765acc();
        func_0x000107765ab8();
        func_0x000107765e24();
        func_0x000107765db0();
        func_0x000107765bc4();
        func_0x000107765bb8();
        func_0x000107765b4c();
        func_0x000107765aa4();
      }
      else {
        func_0x000107765c0c();
        func_0x000107765c28();
        func_0x000107765acc();
        func_0x000107765ab8();
        func_0x000107765db8();
        func_0x000107765db0();
        func_0x000107765bc4();
        func_0x000107765bb8();
        func_0x000107765b4c();
        func_0x000107765aa4();
      }
      func_0x000107765f74(auStack_210);
      func_0x000107765dc0();
      func_0x000104c2f714(auStack_210);
      func_0x000107765f6c();
      func_0x000107765da8();
      func_0x000107765df8();
      func_0x000107765d8c();
      func_0x000107765da0();
      func_0x000107765c7c();
      func_0x000107765c84();
      func_0x000107765c8c();
      func_0x000107765e84();
      func_0x000107765df0();
    }
    else {
      func_0x00010756dd74(auStack_1d8);
      func_0x000107765c64();
    }
LAB_107764e00:
    func_0x000107765bfc(auStack_1d8);
  }
  else {
    func_0x00010756dd74(&dStack_158);
    func_0x000107765c64();
  }
  func_0x000107765bfc(&dStack_158);
LAB_107764e10:
  while( true ) {
    func_0x000107765bfc(auStack_d8);
    func_0x000107765aec(uStack_58);
    if ((bool)uVar1) break;
    ___stack_chk_fail();
LAB_107764e34:
    if ((bRam00000001137260c8 & 1) == 0) {
      iVar2 = 0x137260c8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000107765e10(0x113726158);
        ___cxa_guard_release(0x1137260c8);
      }
    }
    uVar9 = 0x113726158;
LAB_107764c58:
    func_0x000104c2fe00(&dStack_158,uVar9);
    func_0x000107765dc0();
    func_0x000104c2f714(&dStack_158);
  }
  return;
}



/* Entry: 107765090; end: 1077650a3;  */

void FUN_107765090(void)

{
  func_0x000107763aec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077657c0; end: 1077657cf;  */

void FUN_1077657c0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107765f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1077658ac; end: 1077658df;  */

void FUN_1077658ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107765934(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x40;
  return;
}



/* Entry: 1077661c4; end: 107766497;  */

long * FUN_1077661c4(long param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 extraout_x8;
  long alStack_170 [2];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  long lStack_118;
  long alStack_110 [14];
  int iStack_a0;
  undefined1 auStack_98 [56];
  long alStack_60 [7];
  undefined8 uStack_28;
  
  plVar3 = alStack_170;
  plVar4 = alStack_170;
  func_0x000107766888();
  uStack_28 = extraout_x8;
  func_0x000107753050(&lStack_118,*(undefined8 *)(param_2 + 0x48));
  uVar2 = iStack_a0 == 1;
  if (!(bool)uVar2) {
    plVar3 = (long *)(param_1 + 8);
    param_3 = alStack_110;
    func_0x00010756c040();
    goto LAB_1077662bc;
  }
  plVar5 = &lStack_118;
  func_0x00010727f7dc();
  iVar1 = (int)plVar5[0xd];
  if (iVar1 == 0) {
    func_0x00010776686c();
    func_0x000107766864();
    func_0x000107766858();
    func_0x00010776684c();
    func_0x000107766838();
    func_0x000107766824();
  }
  else {
    uVar2 = iVar1 == 1;
    if ((bool)uVar2) {
      func_0x00010776686c();
      func_0x000107766864();
      func_0x000107766858();
      func_0x00010776684c();
      func_0x000107766838();
      func_0x000107766824();
    }
    else {
      uVar2 = iVar1 == 2;
      if ((bool)uVar2) {
        func_0x00010776686c();
        func_0x000107766864();
        func_0x000107766858();
        func_0x00010776684c();
        func_0x000107766838();
        func_0x000107766824();
      }
      else {
        uVar2 = iVar1 == 3;
        if ((bool)uVar2) {
          plVar6 = plVar5 + 1;
          func_0x000104c2d634();
          plVar3 = plVar6;
LAB_1077662f0:
          func_0x000107766898((double)plVar6);
          goto LAB_1077662bc;
        }
        uVar2 = iVar1 == 4;
        if ((bool)uVar2) {
          func_0x00010776686c();
          func_0x000107766864();
          func_0x000107766858();
          func_0x00010776684c();
          func_0x000107766838();
          func_0x000107766824();
        }
        else {
          uVar2 = iVar1 == 5;
          if ((bool)uVar2) {
            func_0x00010776686c();
            func_0x000107766864();
            func_0x000107766858();
            func_0x00010776684c();
            func_0x000107766838();
            func_0x000107766824();
          }
          else {
            uVar2 = iVar1 == 6;
            if ((bool)uVar2) {
              func_0x00010775c688(alStack_60,plVar5 + 1);
              plVar3 = alStack_60;
              func_0x000104c2d634();
              func_0x000107766898((double)plVar3);
              func_0x0001077668c0();
              goto LAB_1077662bc;
            }
            uVar2 = iVar1 == 7;
            if ((bool)uVar2) {
              func_0x00010776686c();
              func_0x000107766864();
              func_0x000107766858();
              func_0x00010776684c();
              func_0x000107766838();
              func_0x000107766824();
            }
            else {
              uVar2 = iVar1 == 8;
              if ((bool)uVar2) {
                plVar6 = (long *)((((long *)plVar5[1])[1] - *(long *)plVar5[1]) / 0x70);
                plVar3 = plVar5;
                goto LAB_1077662f0;
              }
              func_0x00010776686c();
              func_0x000107766864();
              func_0x000107766858();
              func_0x00010776684c();
              func_0x000107766838();
              func_0x000107766824();
            }
          }
        }
      }
    }
  }
  func_0x0001072625b4(alStack_60,auStack_130);
  param_3 = alStack_60;
  func_0x00010756c0ec(param_1);
  func_0x0001077668c0();
  func_0x0001077668b0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_160);
  func_0x000104c2f714(auStack_98);
  func_0x0001072c9884();
LAB_1077662bc:
  func_0x0001077668c8();
  func_0x000107766874(uStack_28);
  if ((bool)uVar2) {
    return plVar3;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_160);
  func_0x000104c2f714(auStack_98);
  func_0x0001072c9884();
  func_0x0001077668c8();
  func_0x0001077668b8();
  plVar3 = (long *)param_3[3];
  if (plVar3 == (long *)0x0) {
    func_0x000104bfeb48(0,*(undefined8 *)((long)plVar4 + 0x48));
    plVar4 = (long *)plVar3[3];
    if (plVar4 == plVar3) {
      lVar7 = 0x20;
    }
    else {
      if (plVar4 == (long *)0x0) {
        return plVar3;
      }
      lVar7 = 0x28;
    }
    (**(code **)(*plVar4 + lVar7))();
    return plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))();
  return plVar3;
}



/* Entry: 1077667ec; end: 1077667ef;  */

void FUN_1077667ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d5938;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10776713c; end: 107767267;  */

void FUN_10776713c(long param_1,undefined8 param_2,long **param_3,long *param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long **pplVar7;
  undefined1 *puVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long **pplStack_178;
  long *plStack_170;
  long **pplStack_160;
  undefined8 uStack_158;
  ulong uStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  undefined1 *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  func_0x00010776884c();
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_38 = extraout_x8;
  func_0x0001077689f0();
  puVar8 = auStack_78;
  func_0x0001074d2254(&lStack_90);
  func_0x000104c2f714(auStack_78);
  lVar2 = param_1 + 0x48;
  func_0x000107375ad0();
  lStack_a0 = lVar2;
  puStack_98 = puVar8;
  while (lStack_a0 != 0) {
    func_0x0001077560f4(&lStack_90,puStack_98);
    func_0x0001077689f0();
    func_0x000107768a20();
    func_0x0001077689dc();
    func_0x000107375b30(&lStack_a0);
  }
  func_0x0001077689f0();
  func_0x000107768a20();
  func_0x0001077689dc();
  plVar9 = &lStack_90;
  func_0x000107327958(auStack_b0);
  func_0x000107768888();
  plVar3 = &lStack_90;
  func_0x000107269124();
  func_0x000107768838(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077689dc();
  plVar4 = &lStack_90;
  func_0x000107269124();
  func_0x00010776886c();
  puStack_b8 = &DAT_107767268;
  plVar5 = plVar4;
  lStack_d0 = param_1;
  plStack_c8 = plVar3;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010776884c();
  uStack_d8 = extraout_x8_00;
  (**(code **)(*plVar5 + 0x40))(&plStack_110);
  pplVar6 = &plStack_110;
  func_0x0001074d25b4();
  func_0x000104c2f714(&plStack_110);
  uStack_118 = (long)pplVar6 * 0x1000 + ((ulong)pplVar6 >> 4) + plVar4[0xc] + -0x61c8864680b583eb ^
               (ulong)pplVar6;
  plVar3 = plVar4 + 9;
  func_0x000107375ad0();
  plStack_110 = plVar3;
  while (plStack_108 = plVar9, plStack_110 != (long *)0x0) {
    func_0x0001073f26dc(&uStack_118,plVar9);
    func_0x00010756af98(&uStack_118,plVar9 + 7);
    func_0x000107375b30(&plStack_110);
    plVar9 = plStack_108;
  }
  plVar4 = plVar4 + 0xd;
  func_0x00010756af98(&uStack_118);
  func_0x000107768838(uStack_d8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pplVar6 = &plStack_110;
    func_0x000104c2f714();
    func_0x00010776886c();
    pplVar7 = pplVar6;
    plVar9 = plVar4;
    pplVar10 = param_3;
    func_0x00010776884c();
    uVar1 = *(char *)(pplVar10 + 0x32) == '\x01';
    uStack_158 = extraout_x8_01;
    if ((bool)uVar1) {
      func_0x0001077688f4();
      *pplVar7 = (long *)&PTR_DAT_1109d5bc8;
      pplVar7[1] = (long *)pplVar6;
      pplVar7[2] = plVar4;
      pplVar7[3] = param_4;
      pplStack_160 = pplVar7;
      func_0x00010776696c(param_3,pplVar6 + 9,&pplStack_178);
      func_0x000107768958();
      pplVar6 = param_3;
    }
    else {
      pplVar7 = pplVar6 + 9;
      func_0x000107375ad0();
      pplStack_178 = pplVar7;
      plStack_170 = plVar9;
      while (pplStack_178 != (long **)0x0) {
        (**(code **)(*(long *)plStack_170[7] + 0x48))((long *)plStack_170[7],plVar4,param_3,param_4)
        ;
        func_0x000107375b30(&pplStack_178);
      }
      func_0x0001077533f4(pplVar6,plVar4,param_3,param_4);
    }
    func_0x000107768838(uStack_158);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x000107768958();
      func_0x00010776886c();
                    /* WARNING: Could not recover jumptable at 0x00010776744c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*pplVar6[0xd] + 0x50))();
      return;
    }
    return;
  }
  return;
}



/* Entry: 107767d08; end: 107767ec7;  */

long * FUN_107767d08(long *param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  ulong *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long alStack_528 [50];
  ulong auStack_398 [15];
  int iStack_320;
  undefined8 uStack_318;
  undefined1 auStack_2d0 [24];
  long lStack_2b8;
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
  undefined1 auStack_258 [400];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [112];
  int iStack_50;
  undefined8 uStack_48;
  
  plVar7 = param_1;
  func_0x00010776884c();
  lStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_48 = extraout_x8;
  func_0x0001072ac134(&lStack_2b8,((ulong)plVar7[0x12] >> 1) + 2);
  (**(code **)(*param_1 + 0x40))(auStack_258,param_1);
  func_0x0001074d2254(&lStack_2b8,auStack_258);
  func_0x000104c2f714(auStack_258);
  func_0x0001077560f4(&lStack_2b8,param_1 + 9);
  plVar7 = param_1 + 0x13;
  if ((param_1[0x12] & 1U) != 0) {
    plVar7 = (long *)*plVar7;
  }
  uVar3 = param_1[0x12] & 0x1ffffffffffffffe;
  uVar9 = uVar3 << 3;
  while (uVar3 != 0) {
    uVar4 = *plVar7;
    func_0x000107751284(auStack_258);
    uStack_260 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    func_0x000107753050(auStack_c8,uVar4,auStack_258,&uStack_2a0);
    func_0x00010724b3d8(&uStack_2a0);
    func_0x000107267da8(auStack_258);
    if (iStack_50 != 0) {
      func_0x0001073405dc(auStack_c8);
      func_0x00010729d318(auStack_258);
      func_0x0001072aad1c(&lStack_2b8,auStack_258);
      func_0x000107267ed0(auStack_258);
    }
    func_0x00010727f7f8(auStack_c0);
    plVar7 = plVar7 + 2;
    uVar9 = uVar9 - 0x10;
    uVar3 = uVar9;
  }
  func_0x000107327958(auStack_2d0,&lStack_2b8);
  func_0x000107768888();
  plVar7 = &lStack_2b8;
  func_0x000107269124();
  func_0x000107768838(uStack_48);
  if ((bool)in_ZR) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_258);
  plVar7 = &lStack_2b8;
  func_0x000107269124();
  func_0x00010776886c();
  plVar6 = plVar7;
  func_0x00010776884c();
  uStack_318 = extraout_x8_00;
  (**(code **)(*plVar6 + 0x40))(alStack_528);
  lVar5 = -0x61c8864680b583eb;
  if (plVar7[0x10] != 0) {
    auStack_398[0] = 0;
    func_0x0001074d2690(auStack_398);
    lVar5 = auStack_398[0] + 0x9e3779b97f4a7c15;
  }
  uVar9 = plVar7[0x12];
  auStack_398[0] = 0;
  func_0x0001073f26dc(auStack_398,alStack_528);
  func_0x0001073f26dc(auStack_398,plVar7 + 9);
  uVar3 = lVar5 + auStack_398[0] * 0x1000 + (auStack_398[0] >> 4) ^ auStack_398[0];
  func_0x000104c2f714(alStack_528);
  plVar6 = plVar7 + 0x13;
  if ((plVar7[0x12] & 1U) != 0) {
    plVar6 = (long *)*plVar6;
  }
  uVar1 = plVar7[0x12] & 0x1ffffffffffffffe;
  uVar8 = uVar1 << 3;
  plVar7 = (long *)((uVar9 >> 1) + 0x9e3779b97f4a7c15 + uVar3 * 0x1000 + (uVar3 >> 4) ^ uVar3);
  while (plStack_578 = plVar7, uVar1 != 0) {
    uVar4 = *plVar6;
    func_0x000107751284(alStack_528);
    uStack_530 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    func_0x000107753050(auStack_398,uVar4,alStack_528,&uStack_570);
    func_0x00010724b3d8(&uStack_570);
    func_0x000107267da8(alStack_528);
    if (iStack_320 != 0) {
      puVar2 = auStack_398;
      func_0x0001073405dc(puVar2);
      func_0x00010772db3c(&plStack_578,puVar2);
    }
    func_0x000107768910();
    plVar6 = plVar6 + 2;
    uVar8 = uVar8 - 0x10;
    plVar7 = plStack_578;
    uVar1 = uVar8;
  }
  func_0x000107768838(uStack_318);
  if ((bool)in_ZR) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(&uStack_570);
  plVar7 = alStack_528;
  func_0x000107267da8();
  func_0x00010776886c();
  *plVar7 = (long)&PTR_DAT_1109d5988;
  func_0x0001072c9b9c(plVar7 + 0xd);
  func_0x0001072c9500(plVar7 + 9);
  *plVar7 = (long)&PTR_DAT_1109d4888;
  func_0x0001001148fc(plVar7 + 5);
  func_0x0001072c9884(plVar7 + 2);
  return plVar7;
}



/* Entry: 107768138; end: 10776814b;  */

void FUN_107768138(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10776826c; end: 1077682e3;  */

void FUN_10776826c(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [120];
  undefined8 uStack_28;
  
  lVar1 = param_1;
  func_0x00010776884c();
  uStack_28 = extraout_x8;
  func_0x000107753050(auStack_a8,*(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x68));
  func_0x000107570284(*(long *)(param_1 + 8) + 8,auStack_a0);
  func_0x000107768910();
  func_0x000107768838(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107768910();
  func_0x00010776886c();
  func_0x000107768a70();
  func_0x000107768970();
  func_0x000107768988();
  return;
}



/* Entry: 10776848c; end: 10776849f;  */

void FUN_10776848c(void)

{
  func_0x0001077684a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077685f4; end: 107768607;  */

undefined ** FUN_1077685f4(void)

{
  return &PTR_DAT_1109d5c28;
}



/* Entry: 107768758; end: 1077687ff;  */

undefined8 *
FUN_107768758(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107768940();
  func_0x0001072c9e90();
  func_0x000107768a44(*param_3);
  func_0x0001077689d0();
  func_0x000107768998();
  func_0x0001072c9f9c(param_1,9);
  func_0x000107768968();
  *param_1 = &PTR_DAT_1109d5a10;
  func_0x000104c318bc(param_1 + 9,param_2);
  uVar1 = *param_3;
  param_1[0x11] = param_3[1];
  param_1[0x10] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  func_0x0001072c9bc0(param_1 + 0x12,param_4);
  return param_1;
}



/* Entry: 10776942c; end: 10776942f;  */

undefined8 * FUN_10776942c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d5d18;
  func_0x00010726af18(param_1 + 10);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107769740; end: 10776977b;  */

long FUN_107769740(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109d5e00);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10776a3d4; end: 10776a3eb;  */

bool FUN_10776a3d4(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 10776ab40; end: 10776ac53;  */

/* WARNING: Possible PIC construction at 0x00010776acb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010776aee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010776af34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010776aee4) */
/* WARNING: Removing unreachable block (ram,0x00010776aefc) */
/* WARNING: Removing unreachable block (ram,0x00010776aef4) */
/* WARNING: Removing unreachable block (ram,0x00010776dee0) */
/* WARNING: Removing unreachable block (ram,0x00010776acbc) */
/* WARNING: Removing unreachable block (ram,0x00010776af38) */
/* WARNING: Removing unreachable block (ram,0x00010776af24) */
/* WARNING: Removing unreachable block (ram,0x00010776af3c) */
/* WARNING: Removing unreachable block (ram,0x00010776df7c) */
/* WARNING: Removing unreachable block (ram,0x00010776af2c) */
/* WARNING: Removing unreachable block (ram,0x00010745df58) */
/* WARNING: Removing unreachable block (ram,0x00010745df6c) */
/* WARNING: Removing unreachable block (ram,0x00010745dfa0) */
/* WARNING: Removing unreachable block (ram,0x00010745df94) */
/* WARNING: Removing unreachable block (ram,0x00010745df98) */
/* WARNING: Removing unreachable block (ram,0x00010745dfa4) */
/* WARNING: Removing unreachable block (ram,0x00010745dfb0) */
/* WARNING: Removing unreachable block (ram,0x00010745e5cc) */
/* WARNING: Removing unreachable block (ram,0x00010745df60) */

undefined1 **
FUN_10776ab40(long *param_1,undefined8 param_2,undefined1 **param_3,undefined1 *param_4,
             undefined1 *param_5)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  undefined1 **ppuVar10;
  undefined1 *puVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 *puVar12;
  undefined8 extraout_x8_02;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long *plVar15;
  undefined1 *puVar16;
  long unaff_x19;
  undefined1 **ppuVar17;
  undefined *puVar18;
  undefined1 *puVar19;
  undefined1 auStack_1c0 [24];
  undefined1 **ppuStack_1a8;
  undefined8 uStack_d8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined8 uStack_48;
  
  func_0x00010776d97c();
  uStack_48 = extraout_x8;
  (**(code **)(*param_1 + 0x40))(&puStack_80);
  func_0x00010776df2c();
  func_0x00010776dd94();
  func_0x00010776d0d4(&puStack_80,*(undefined8 *)(unaff_x19 + 0x68));
  ppuStack_88 = (undefined1 **)
                ((long)param_1 * 0x1000 + -0x61c8864680b583eb + ((ulong)param_1 >> 4) + lStack_70 ^
                (ulong)param_1);
  while (uVar3 = puStack_80 == auStack_78, !(bool)uVar3) {
    ppuStack_88 = (undefined1 **)
                  (*(long *)(puStack_80 + 0x20) + -0x61c8864680b583eb + (long)ppuStack_88 * 0x1000 +
                   ((ulong)ppuStack_88 >> 4) ^ (ulong)ppuStack_88);
    func_0x00010756af98(&ppuStack_88,puStack_80 + 0x28);
    func_0x00010002c7d4();
  }
  ppuVar7 = (undefined1 **)(unaff_x19 + 0x80);
  func_0x00010756af98(&ppuStack_88);
  ppuVar17 = ppuStack_88;
  ppuVar5 = &puStack_80;
  func_0x00010754718c();
  func_0x00010776d950(uStack_48);
  if ((bool)uVar3) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar4 = ppuVar5;
  func_0x00010776dd94();
  func_0x00010776da9c();
  puStack_98 = &DAT_10776ac54;
  ppuVar17 = &puStack_a0;
  ppuVar6 = ppuVar7;
  ppuVar10 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010776d97c();
  uVar3 = *(char *)(ppuVar10 + 0x32) == '\x01';
  if ((bool)uVar3) {
    func_0x00010776db3c();
    ppuVar4 = param_3;
    func_0x00010756ec34();
    func_0x00010776e034();
    func_0x00010776db08();
    *ppuVar4 = (undefined1 *)&PTR_DAT_1109d5e50;
    ppuVar4[1] = (undefined1 *)ppuVar7;
    ppuVar4[2] = (undefined1 *)param_3;
    ppuVar4[3] = param_4;
    ppuStack_1a8 = ppuVar4;
    func_0x00010776dd48();
    puVar18 = &UNK_10776acbc;
    puVar2 = auStack_1c0;
    ppuVar4 = ppuVar5;
  }
  else {
    uStack_d8 = extraout_x8_00;
    func_0x00010776db08();
    func_0x00010776de8c(&PTR_DAT_1109d5ee0);
    func_0x00010776df20();
    func_0x00010776dd64();
    func_0x00010776d950(uStack_d8);
    if ((bool)uVar3) {
      return ppuVar4;
    }
    ___stack_chk_fail();
    func_0x00010776dcc8();
    func_0x00010776dd7c();
    puVar18 = &UNK_10776ad24;
    func_0x00010776da9c();
    puVar2 = auStack_1c0;
  }
  do {
    puVar11 = param_5;
    ppuVar8 = ppuVar6;
    *(undefined1 ***)(puVar2 + -0x30) = ppuVar7;
    *(undefined1 ***)(puVar2 + -0x28) = param_3;
    *(undefined1 **)(puVar2 + -0x20) = param_4;
    *(undefined1 ***)(puVar2 + -0x18) = ppuVar4;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar17;
    *(undefined **)(puVar2 + -8) = puVar18;
    ppuVar5 = ppuVar8;
    func_0x00010776d97c();
    *(undefined8 *)(puVar2 + -0x38) = extraout_x8_01;
    ppuVar5 = (undefined1 **)ppuVar5[9];
    func_0x00010776dd20();
    uVar3 = *(int *)(puVar2 + -0x40) == 1;
    if ((bool)uVar3) {
      func_0x00010776dd10();
      uVar3 = *(int *)(ppuVar5 + 0xd) == 2;
      if ((bool)uVar3) {
        func_0x00010776dd10();
        func_0x0001072cb4bc();
        puVar19 = *ppuVar5;
        uVar3 = (double)puVar19 == (double)(long)(double)(long)(double)puVar19;
        if ((((bool)uVar3) && (puVar12 = ppuVar8[0xc], puVar12 != (undefined1 *)0x0)) &&
           (ppuVar8[0xe] != (undefined1 *)0x0)) {
          puVar19 = (undefined1 *)(long)(double)puVar19;
          puVar13 = puVar12 + -1;
          if (((ulong)puVar12 & (ulong)puVar13) == 0) {
            puVar14 = (undefined1 *)((ulong)puVar13 & (ulong)puVar19);
            uVar3 = true;
          }
          else {
            uVar3 = puVar12 == puVar19;
            puVar14 = puVar19;
            if (puVar12 <= puVar19) {
              uVar1 = 0;
              if (puVar12 != (undefined1 *)0x0) {
                uVar1 = (ulong)puVar19 / (ulong)puVar12;
              }
              puVar14 = puVar19 + -(uVar1 * (long)puVar12);
            }
          }
          plVar15 = *(long **)(ppuVar8[0xb] + (long)puVar14 * 8);
          if (plVar15 != (long *)0x0) {
            do {
              while( true ) {
                plVar15 = (long *)*plVar15;
                if (plVar15 == (long *)0x0) goto code_r0x00010776ae48;
                puVar16 = (undefined1 *)plVar15[1];
                if (puVar16 != puVar19) break;
                uVar3 = (undefined1 *)plVar15[2] == puVar19;
                if ((bool)uVar3) {
                  ppuVar10 = (undefined1 **)plVar15[3];
                  ppuVar9 = *(undefined1 ***)(puVar11 + 0x18);
                  func_0x00010776dc58();
                  ppuVar4 = ppuVar5;
                  goto code_r0x00010776ae54;
                }
              }
              if (((ulong)puVar12 & (ulong)puVar13) == 0) {
                puVar16 = (undefined1 *)((ulong)puVar16 & (ulong)puVar13);
              }
              else if (puVar12 <= puVar16) {
                uVar1 = 0;
                if (puVar12 != (undefined1 *)0x0) {
                  uVar1 = (ulong)puVar16 / (ulong)puVar12;
                }
                puVar16 = puVar16 + -(uVar1 * (long)puVar12);
              }
              uVar3 = puVar16 == puVar14;
            } while ((bool)uVar3);
          }
        }
code_r0x00010776ae48:
        ppuVar10 = (undefined1 **)ppuVar8[0x10];
        ppuVar9 = *(undefined1 ***)(puVar11 + 0x18);
        func_0x00010776dc58();
        ppuVar4 = ppuVar5;
      }
      else {
        ppuVar10 = (undefined1 **)ppuVar8[0x10];
        ppuVar9 = *(undefined1 ***)(puVar11 + 0x18);
        func_0x00010776dc58();
        ppuVar4 = ppuVar5;
      }
    }
    else {
      ppuVar9 = (undefined1 **)(puVar2 + -0xb8);
      func_0x00010756dd74(ppuVar9);
      func_0x00010756dd30(ppuVar4,ppuVar9);
    }
code_r0x00010776ae54:
    func_0x00010776da60();
    func_0x00010776d950(*(undefined8 *)(puVar2 + -0x38));
    if ((bool)uVar3) {
      return ppuVar4;
    }
    ___stack_chk_fail();
    ppuVar6 = ppuVar4;
    func_0x00010776da60();
    func_0x00010776da9c();
    *(undefined1 **)(puVar2 + -0xe0) = puVar11;
    *(undefined1 ***)(puVar2 + -0xd8) = ppuVar4;
    *(undefined1 **)(puVar2 + -0xd0) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -200) = &DAT_10776aeac;
    ppuVar17 = (undefined1 **)(puVar2 + -0xd0);
    func_0x00010776d99c(extraout_x8_02,ppuVar6,ppuVar9,ppuVar10);
    func_0x00010776e068();
    param_5 = puVar2 + -0x108;
    puVar18 = &UNK_10776aee4;
    puVar2 = puVar2 + -0x110;
    ppuVar10 = ppuVar9;
    param_4 = puVar11;
    param_3 = ppuVar8;
  } while( true );
}



/* Entry: 10776b3ec; end: 10776b4bb;  */

/* WARNING: Possible PIC construction at 0x00010776b450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010776b67c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010776b454) */
/* WARNING: Removing unreachable block (ram,0x00010776b680) */
/* WARNING: Removing unreachable block (ram,0x00010776b698) */
/* WARNING: Removing unreachable block (ram,0x00010776b744) */
/* WARNING: Removing unreachable block (ram,0x00010776b70c) */
/* WARNING: Removing unreachable block (ram,0x00010776b814) */
/* WARNING: Removing unreachable block (ram,0x00010776b71c) */
/* WARNING: Removing unreachable block (ram,0x00010776b878) */
/* WARNING: Removing unreachable block (ram,0x00010776b868) */
/* WARNING: Removing unreachable block (ram,0x00010776b764) */
/* WARNING: Removing unreachable block (ram,0x00010776b88c) */
/* WARNING: Removing unreachable block (ram,0x00010776b770) */
/* WARNING: Removing unreachable block (ram,0x00010776b7d8) */
/* WARNING: Removing unreachable block (ram,0x00010776b7e0) */
/* WARNING: Removing unreachable block (ram,0x00010776b8bc) */
/* WARNING: Removing unreachable block (ram,0x00010776b7ec) */
/* WARNING: Removing unreachable block (ram,0x00010776b798) */
/* WARNING: Removing unreachable block (ram,0x00010776b8a4) */
/* WARNING: Removing unreachable block (ram,0x00010776b8d0) */
/* WARNING: Removing unreachable block (ram,0x00010776b7ac) */
/* WARNING: Removing unreachable block (ram,0x00010776b7b0) */
/* WARNING: Removing unreachable block (ram,0x00010776b7b4) */
/* WARNING: Removing unreachable block (ram,0x00010776b9a4) */
/* WARNING: Removing unreachable block (ram,0x00010776b7b8) */
/* WARNING: Removing unreachable block (ram,0x00010776b824) */
/* WARNING: Removing unreachable block (ram,0x00010776b85c) */
/* WARNING: Removing unreachable block (ram,0x00010776b734) */
/* WARNING: Removing unreachable block (ram,0x00010776b884) */
/* WARNING: Removing unreachable block (ram,0x00010776b8e4) */
/* WARNING: Removing unreachable block (ram,0x00010776b8e8) */
/* WARNING: Removing unreachable block (ram,0x00010776b8f0) */
/* WARNING: Removing unreachable block (ram,0x00010776b940) */
/* WARNING: Removing unreachable block (ram,0x00010776b8f8) */
/* WARNING: Removing unreachable block (ram,0x00010776b950) */
/* WARNING: Removing unreachable block (ram,0x00010776b954) */
/* WARNING: Removing unreachable block (ram,0x00010776b914) */
/* WARNING: Removing unreachable block (ram,0x00010776b960) */
/* WARNING: Removing unreachable block (ram,0x00010776b9d0) */
/* WARNING: Removing unreachable block (ram,0x00010776ba44) */
/* WARNING: Removing unreachable block (ram,0x00010776baa8) */
/* WARNING: Removing unreachable block (ram,0x00010776bab8) */
/* WARNING: Removing unreachable block (ram,0x00010776bb78) */
/* WARNING: Removing unreachable block (ram,0x00010776bba8) */
/* WARNING: Removing unreachable block (ram,0x00010776bbcc) */
/* WARNING: Removing unreachable block (ram,0x00010776bc08) */
/* WARNING: Removing unreachable block (ram,0x00010776bc1c) */
/* WARNING: Removing unreachable block (ram,0x00010776bc20) */
/* WARNING: Removing unreachable block (ram,0x00010776bc3c) */
/* WARNING: Removing unreachable block (ram,0x00010776bc90) */
/* WARNING: Removing unreachable block (ram,0x00010776bf2c) */
/* WARNING: Removing unreachable block (ram,0x00010776c070) */
/* WARNING: Removing unreachable block (ram,0x00010776bf94) */
/* WARNING: Removing unreachable block (ram,0x00010776c0f8) */
/* WARNING: Removing unreachable block (ram,0x00010776bff4) */
/* WARNING: Removing unreachable block (ram,0x00010776c01c) */
/* WARNING: Removing unreachable block (ram,0x00010776c100) */
/* WARNING: Removing unreachable block (ram,0x00010776c104) */
/* WARNING: Removing unreachable block (ram,0x00010776c3cc) */
/* WARNING: Removing unreachable block (ram,0x00010776c10c) */
/* WARNING: Removing unreachable block (ram,0x00010776c3d4) */
/* WARNING: Removing unreachable block (ram,0x00010776c3dc) */
/* WARNING: Removing unreachable block (ram,0x00010776c6f8) */
/* WARNING: Removing unreachable block (ram,0x00010776c3e4) */
/* WARNING: Removing unreachable block (ram,0x00010776c41c) */
/* WARNING: Removing unreachable block (ram,0x00010776c7a0) */
/* WARNING: Removing unreachable block (ram,0x00010776c7f8) */
/* WARNING: Removing unreachable block (ram,0x00010776c424) */
/* WARNING: Removing unreachable block (ram,0x00010776c438) */
/* WARNING: Removing unreachable block (ram,0x00010776c43c) */
/* WARNING: Removing unreachable block (ram,0x00010776c444) */
/* WARNING: Removing unreachable block (ram,0x00010776c448) */
/* WARNING: Removing unreachable block (ram,0x00010776c694) */
/* WARNING: Removing unreachable block (ram,0x00010776c450) */
/* WARNING: Removing unreachable block (ram,0x00010776c824) */
/* WARNING: Removing unreachable block (ram,0x00010776c45c) */
/* WARNING: Removing unreachable block (ram,0x00010776c464) */
/* WARNING: Removing unreachable block (ram,0x00010776c46c) */
/* WARNING: Removing unreachable block (ram,0x00010776c498) */
/* WARNING: Removing unreachable block (ram,0x00010776c480) */
/* WARNING: Removing unreachable block (ram,0x00010776c48c) */
/* WARNING: Removing unreachable block (ram,0x00010776c49c) */
/* WARNING: Removing unreachable block (ram,0x00010776c4a8) */
/* WARNING: Removing unreachable block (ram,0x00010776c4b0) */
/* WARNING: Removing unreachable block (ram,0x00010776c4c8) */
/* WARNING: Removing unreachable block (ram,0x00010776c4e4) */
/* WARNING: Removing unreachable block (ram,0x00010776c4d0) */
/* WARNING: Removing unreachable block (ram,0x00010776c4d8) */
/* WARNING: Removing unreachable block (ram,0x00010776c4e8) */
/* WARNING: Removing unreachable block (ram,0x00010776c4f0) */
/* WARNING: Removing unreachable block (ram,0x00010776c500) */
/* WARNING: Removing unreachable block (ram,0x00010776c524) */
/* WARNING: Removing unreachable block (ram,0x00010776c50c) */
/* WARNING: Removing unreachable block (ram,0x00010776c518) */
/* WARNING: Removing unreachable block (ram,0x00010776c528) */
/* WARNING: Removing unreachable block (ram,0x00010776c534) */
/* WARNING: Removing unreachable block (ram,0x00010776c53c) */
/* WARNING: Removing unreachable block (ram,0x00010776c554) */
/* WARNING: Removing unreachable block (ram,0x00010776c570) */
/* WARNING: Removing unreachable block (ram,0x00010776c55c) */
/* WARNING: Removing unreachable block (ram,0x00010776c564) */
/* WARNING: Removing unreachable block (ram,0x00010776c574) */
/* WARNING: Removing unreachable block (ram,0x00010776c57c) */
/* WARNING: Removing unreachable block (ram,0x00010776c5b0) */
/* WARNING: Removing unreachable block (ram,0x00010776c5b4) */
/* WARNING: Removing unreachable block (ram,0x00010776c5bc) */
/* WARNING: Removing unreachable block (ram,0x00010776c5c4) */
/* WARNING: Removing unreachable block (ram,0x00010776c5cc) */
/* WARNING: Removing unreachable block (ram,0x00010776c5d0) */
/* WARNING: Removing unreachable block (ram,0x00010776c5d4) */
/* WARNING: Removing unreachable block (ram,0x00010776c5e0) */
/* WARNING: Removing unreachable block (ram,0x00010776c610) */
/* WARNING: Removing unreachable block (ram,0x00010776c600) */
/* WARNING: Removing unreachable block (ram,0x00010776c618) */
/* WARNING: Removing unreachable block (ram,0x00010776c608) */
/* WARNING: Removing unreachable block (ram,0x00010776c620) */
/* WARNING: Removing unreachable block (ram,0x00010776c640) */
/* WARNING: Removing unreachable block (ram,0x00010776c658) */
/* WARNING: Removing unreachable block (ram,0x00010776c67c) */
/* WARNING: Removing unreachable block (ram,0x00010776c668) */
/* WARNING: Removing unreachable block (ram,0x00010776c670) */
/* WARNING: Removing unreachable block (ram,0x00010776c680) */
/* WARNING: Removing unreachable block (ram,0x00010776c630) */
/* WARNING: Removing unreachable block (ram,0x00010776c684) */
/* WARNING: Removing unreachable block (ram,0x00010776c548) */
/* WARNING: Removing unreachable block (ram,0x00010776c550) */
/* WARNING: Removing unreachable block (ram,0x00010776c68c) */
/* WARNING: Removing unreachable block (ram,0x00010776c4bc) */
/* WARNING: Removing unreachable block (ram,0x00010776c4c4) */
/* WARNING: Removing unreachable block (ram,0x00010776c714) */
/* WARNING: Removing unreachable block (ram,0x00010776c738) */
/* WARNING: Removing unreachable block (ram,0x00010776c118) */
/* WARNING: Removing unreachable block (ram,0x00010776c154) */
/* WARNING: Removing unreachable block (ram,0x00010776c744) */
/* WARNING: Removing unreachable block (ram,0x00010776c798) */
/* WARNING: Removing unreachable block (ram,0x00010776c15c) */
/* WARNING: Removing unreachable block (ram,0x00010776c16c) */
/* WARNING: Removing unreachable block (ram,0x00010776c170) */
/* WARNING: Removing unreachable block (ram,0x00010776c178) */
/* WARNING: Removing unreachable block (ram,0x00010776c17c) */
/* WARNING: Removing unreachable block (ram,0x00010776c3b8) */
/* WARNING: Removing unreachable block (ram,0x00010776c184) */
/* WARNING: Removing unreachable block (ram,0x00010776c81c) */
/* WARNING: Removing unreachable block (ram,0x00010776c18c) */
/* WARNING: Removing unreachable block (ram,0x00010776c1c4) */
/* WARNING: Removing unreachable block (ram,0x00010776c198) */
/* WARNING: Removing unreachable block (ram,0x00010776c19c) */
/* WARNING: Removing unreachable block (ram,0x00010776c1a4) */
/* WARNING: Removing unreachable block (ram,0x00010776c1d0) */
/* WARNING: Removing unreachable block (ram,0x00010776c1b0) */
/* WARNING: Removing unreachable block (ram,0x00010776c1bc) */
/* WARNING: Removing unreachable block (ram,0x00010776c1d4) */
/* WARNING: Removing unreachable block (ram,0x00010776c1e0) */
/* WARNING: Removing unreachable block (ram,0x00010776c1e8) */
/* WARNING: Removing unreachable block (ram,0x00010776c204) */
/* WARNING: Removing unreachable block (ram,0x00010776c220) */
/* WARNING: Removing unreachable block (ram,0x00010776c20c) */
/* WARNING: Removing unreachable block (ram,0x00010776c214) */
/* WARNING: Removing unreachable block (ram,0x00010776c224) */
/* WARNING: Removing unreachable block (ram,0x00010776c22c) */
/* WARNING: Removing unreachable block (ram,0x00010776c24c) */
/* WARNING: Removing unreachable block (ram,0x00010776c238) */
/* WARNING: Removing unreachable block (ram,0x00010776c244) */
/* WARNING: Removing unreachable block (ram,0x00010776c250) */
/* WARNING: Removing unreachable block (ram,0x00010776c264) */
/* WARNING: Removing unreachable block (ram,0x00010776c26c) */
/* WARNING: Removing unreachable block (ram,0x00010776c288) */
/* WARNING: Removing unreachable block (ram,0x00010776c2a4) */
/* WARNING: Removing unreachable block (ram,0x00010776c290) */
/* WARNING: Removing unreachable block (ram,0x00010776c298) */
/* WARNING: Removing unreachable block (ram,0x00010776c2a8) */
/* WARNING: Removing unreachable block (ram,0x00010776c2b0) */
/* WARNING: Removing unreachable block (ram,0x00010776c2d8) */
/* WARNING: Removing unreachable block (ram,0x00010776c2dc) */
/* WARNING: Removing unreachable block (ram,0x00010776c2e4) */
/* WARNING: Removing unreachable block (ram,0x00010776c2ec) */
/* WARNING: Removing unreachable block (ram,0x00010776c2f4) */
/* WARNING: Removing unreachable block (ram,0x00010776c2f8) */
/* WARNING: Removing unreachable block (ram,0x00010776c2fc) */
/* WARNING: Removing unreachable block (ram,0x00010776c304) */
/* WARNING: Removing unreachable block (ram,0x00010776c334) */
/* WARNING: Removing unreachable block (ram,0x00010776c324) */
/* WARNING: Removing unreachable block (ram,0x00010776c33c) */
/* WARNING: Removing unreachable block (ram,0x00010776c32c) */
/* WARNING: Removing unreachable block (ram,0x00010776c344) */
/* WARNING: Removing unreachable block (ram,0x00010776c364) */
/* WARNING: Removing unreachable block (ram,0x00010776c37c) */
/* WARNING: Removing unreachable block (ram,0x00010776c3a0) */
/* WARNING: Removing unreachable block (ram,0x00010776c38c) */
/* WARNING: Removing unreachable block (ram,0x00010776c394) */
/* WARNING: Removing unreachable block (ram,0x00010776c3a4) */
/* WARNING: Removing unreachable block (ram,0x00010776c354) */
/* WARNING: Removing unreachable block (ram,0x00010776c3a8) */
/* WARNING: Removing unreachable block (ram,0x00010776c278) */
/* WARNING: Removing unreachable block (ram,0x00010776c284) */
/* WARNING: Removing unreachable block (ram,0x00010776c3b0) */
/* WARNING: Removing unreachable block (ram,0x00010776c1f4) */
/* WARNING: Removing unreachable block (ram,0x00010776c200) */
/* WARNING: Removing unreachable block (ram,0x00010776c6a8) */
/* WARNING: Removing unreachable block (ram,0x00010776c6cc) */
/* WARNING: Removing unreachable block (ram,0x00010776c6d4) */
/* WARNING: Removing unreachable block (ram,0x00010776c03c) */
/* WARNING: Removing unreachable block (ram,0x00010776c700) */
/* WARNING: Removing unreachable block (ram,0x00010776c708) */
/* WARNING: Removing unreachable block (ram,0x00010776bc9c) */
/* WARNING: Removing unreachable block (ram,0x00010776bdb0) */
/* WARNING: Removing unreachable block (ram,0x00010776bdcc) */
/* WARNING: Removing unreachable block (ram,0x00010776bdc4) */
/* WARNING: Removing unreachable block (ram,0x00010776bdd0) */
/* WARNING: Removing unreachable block (ram,0x00010776bccc) */
/* WARNING: Removing unreachable block (ram,0x00010776c078) */
/* WARNING: Removing unreachable block (ram,0x00010776bce4) */
/* WARNING: Removing unreachable block (ram,0x00010776bcf4) */
/* WARNING: Removing unreachable block (ram,0x00010776bd00) */
/* WARNING: Removing unreachable block (ram,0x00010776c80c) */
/* WARNING: Removing unreachable block (ram,0x00010776bd18) */
/* WARNING: Removing unreachable block (ram,0x00010776bd24) */
/* WARNING: Removing unreachable block (ram,0x00010776bd50) */
/* WARNING: Removing unreachable block (ram,0x00010776bd54) */
/* WARNING: Removing unreachable block (ram,0x00010776bddc) */
/* WARNING: Removing unreachable block (ram,0x00010776be70) */
/* WARNING: Removing unreachable block (ram,0x00010776be38) */
/* WARNING: Removing unreachable block (ram,0x00010776be40) */
/* WARNING: Removing unreachable block (ram,0x00010776be50) */
/* WARNING: Removing unreachable block (ram,0x00010776be78) */
/* WARNING: Removing unreachable block (ram,0x00010776be80) */
/* WARNING: Removing unreachable block (ram,0x00010776c814) */
/* WARNING: Removing unreachable block (ram,0x00010776be98) */
/* WARNING: Removing unreachable block (ram,0x00010776bea0) */
/* WARNING: Removing unreachable block (ram,0x00010776beac) */
/* WARNING: Removing unreachable block (ram,0x00010776bebc) */
/* WARNING: Removing unreachable block (ram,0x00010776be60) */
/* WARNING: Removing unreachable block (ram,0x00010776bf08) */
/* WARNING: Removing unreachable block (ram,0x00010776bf0c) */
/* WARNING: Removing unreachable block (ram,0x00010776bf24) */
/* WARNING: Removing unreachable block (ram,0x00010776bd5c) */
/* WARNING: Removing unreachable block (ram,0x00010776bd98) */
/* WARNING: Removing unreachable block (ram,0x00010776bd90) */
/* WARNING: Removing unreachable block (ram,0x00010776bd9c) */
/* WARNING: Removing unreachable block (ram,0x00010776bdac) */
/* WARNING: Removing unreachable block (ram,0x00010776c0a8) */
/* WARNING: Removing unreachable block (ram,0x00010776c0b4) */
/* WARNING: Removing unreachable block (ram,0x00010776bb7c) */
/* WARNING: Removing unreachable block (ram,0x00010776bb24) */
/* WARNING: Removing unreachable block (ram,0x00010776bb9c) */
/* WARNING: Removing unreachable block (ram,0x00010776c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010776c800) */
/* WARNING: Removing unreachable block (ram,0x00010776c804) */
/* WARNING: Removing unreachable block (ram,0x00010776c828) */
/* WARNING: Removing unreachable block (ram,0x00010776c0d8) */
/* WARNING: Removing unreachable block (ram,0x00010776b984) */
/* WARNING: Removing unreachable block (ram,0x00010776b690) */
/* WARNING: Removing unreachable block (ram,0x00010776dee0) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_10776b3ec(long *param_1,long *param_2,long *param_3,undefined1 *param_4,undefined1 *param_5
                  )

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar10;
  undefined8 extraout_x8_01;
  long *unaff_x19;
  long *unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined1 auStack_130 [24];
  long *plStack_118;
  undefined8 uStack_48;
  
  puVar11 = &stack0xfffffffffffffff0;
  plVar5 = param_2;
  plVar4 = param_3;
  func_0x00010776d97c();
  uVar3 = (char)plVar4[0x32] == '\x01';
  if ((bool)uVar3) {
    func_0x00010776db3c();
    plVar4 = param_3;
    func_0x00010756ec34();
    func_0x00010776e034();
    func_0x00010776db08();
    *plVar4 = (long)&PTR_DAT_1109d5fe0;
    plVar4[1] = (long)param_2;
    plVar4[2] = (long)param_3;
    plVar4[3] = (long)param_4;
    plStack_118 = plVar4;
    func_0x00010776dd48();
    puVar12 = (undefined *)0x10776b454;
    puVar2 = auStack_130;
    param_1 = unaff_x19;
  }
  else {
    uStack_48 = extraout_x8;
    func_0x00010776db08();
    func_0x00010776de8c(&PTR_DAT_1109d6060);
    func_0x00010776df20();
    func_0x00010776dd64();
    func_0x00010776d950(uStack_48);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010776dcc8();
    func_0x00010776dd7c();
    puVar12 = &SUB_10776b4bc;
    func_0x00010776da9c();
    puVar2 = auStack_130;
  }
  do {
    puVar9 = param_5;
    plVar4 = plVar5;
    *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
    *(long **)(puVar2 + -0x58) = unaff_x27;
    *(long **)(puVar2 + -0x50) = unaff_x26;
    *(ulong *)(puVar2 + -0x48) = unaff_x25;
    *(long **)(puVar2 + -0x40) = unaff_x24;
    *(long **)(puVar2 + -0x38) = unaff_x23;
    *(long **)(puVar2 + -0x30) = param_2;
    *(long **)(puVar2 + -0x28) = param_3;
    *(undefined1 **)(puVar2 + -0x20) = param_4;
    *(long **)(puVar2 + -0x18) = param_1;
    *(undefined1 **)(puVar2 + -0x10) = puVar11;
    *(undefined **)(puVar2 + -8) = puVar12;
    plVar5 = plVar4;
    func_0x00010776d97c();
    *(undefined8 *)(puVar2 + -0x68) = extraout_x8_00;
    plVar5 = (long *)plVar5[9];
    func_0x00010776dd20();
    uVar3 = *(int *)(puVar2 + -0x70) == 1;
    param_1 = plVar5;
    if ((bool)uVar3) {
      func_0x00010776dd10();
      uVar3 = (int)plVar5[0xd] == 3;
      param_1 = plVar5;
      if (!(bool)uVar3) goto code_r0x00010776b560;
      func_0x00010776dd10();
      func_0x00010732393c();
      unaff_x24 = (long *)plVar4[0xc];
      param_1 = plVar5;
      lVar8 = (long)unaff_x27;
      if ((unaff_x24 == (long *)0x0) ||
         (plVar6 = plVar4 + 0xe, param_1 = plVar6, param_2 = plVar5, *plVar6 == 0)) {
code_r0x00010776b5e8:
        unaff_x27 = (long *)lVar8;
        plVar10 = plVar4 + 0x10;
        plVar5 = param_2;
        plVar6 = unaff_x23;
      }
      else {
        func_0x00010726364c(plVar6,plVar5);
        unaff_x25 = (long)unaff_x24 - 1;
        if (((ulong)unaff_x24 & unaff_x25) == 0) {
          unaff_x26 = (long *)((ulong)plVar6 & unaff_x25);
          uVar3 = true;
        }
        else {
          uVar3 = plVar6 == unaff_x24;
          unaff_x26 = plVar6;
          if (unaff_x24 <= plVar6) {
            uVar1 = 0;
            if (unaff_x24 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)unaff_x24;
            }
            unaff_x26 = (long *)((long)plVar6 - uVar1 * (long)unaff_x24);
          }
        }
        unaff_x27 = *(long **)(plVar4[0xb] + (long)unaff_x26 * 8);
        param_1 = plVar6;
        unaff_x23 = plVar6;
        lVar8 = 0;
        if (unaff_x27 == (long *)0x0) goto code_r0x00010776b5e8;
        do {
          while( true ) {
            unaff_x27 = (long *)*unaff_x27;
            if (unaff_x27 == (long *)0x0) goto code_r0x00010776b5d4;
            plVar10 = (long *)unaff_x27[1];
            if (plVar6 != plVar10) break;
            param_1 = unaff_x27 + 2;
            func_0x000104c32db4(param_1,plVar5);
            if (((ulong)param_1 & 1) != 0) goto code_r0x00010776b5d4;
          }
          if (((ulong)unaff_x24 & unaff_x25) == 0) {
            plVar10 = (long *)((ulong)plVar10 & unaff_x25);
          }
          else if (unaff_x24 <= plVar10) {
            uVar1 = 0;
            if (unaff_x24 != (long *)0x0) {
              uVar1 = (ulong)plVar10 / (ulong)unaff_x24;
            }
            plVar10 = (long *)((long)plVar10 - uVar1 * (long)unaff_x24);
          }
        } while (plVar10 == unaff_x26);
        unaff_x27 = (long *)0x0;
code_r0x00010776b5d4:
        uVar3 = unaff_x27 == (long *)0x0;
        plVar10 = plVar4 + 0x10;
        if (!(bool)uVar3) {
          plVar10 = (long *)((long)unaff_x27 + 0x48);
        }
      }
      lVar8 = *plVar10;
      uVar7 = *(undefined8 *)(puVar9 + 0x18);
      func_0x00010776dc58();
      param_2 = plVar5;
      unaff_x23 = plVar6;
    }
    else {
code_r0x00010776b560:
      lVar8 = plVar4[0x10];
      uVar7 = *(undefined8 *)(puVar9 + 0x18);
      func_0x00010776dc58();
    }
    func_0x00010776da60();
    func_0x00010776d950(*(undefined8 *)(puVar2 + -0x68));
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    plVar5 = param_1;
    func_0x00010776da60();
    func_0x00010776da9c();
    *(undefined1 **)(puVar2 + -0x110) = puVar9;
    *(long **)(puVar2 + -0x108) = param_1;
    *(undefined1 **)(puVar2 + -0x100) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0xf8) = &DAT_10776b648;
    puVar11 = puVar2 + -0x100;
    func_0x00010776d99c(extraout_x8_01,plVar5,uVar7,lVar8);
    func_0x00010776e068();
    param_5 = puVar2 + -0x138;
    puVar12 = &UNK_10776b680;
    puVar2 = puVar2 + -0x140;
    param_4 = puVar9;
    param_3 = plVar4;
  } while( true );
}



/* Entry: 10776cba8; end: 10776cbf3;  */

void FUN_10776cba8(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010776dbe8();
  uVar1 = *(uint *)(unaff_x20 + 0x38);
  if (uVar1 != 0xffffffff) {
    func_0x00010776df04((&PTR_DAT_1109d5e20)[uVar1]);
    *(uint *)(unaff_x19 + 0x38) = uVar1;
  }
  return;
}



/* Entry: 10776cd68; end: 10776ce23;  */

void FUN_10776cd68(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_1;
  lVar1 = param_1[1];
  lVar4 = param_2[1] + ((lVar1 - lVar3) / -0x48) * 0x48;
  lVar2 = lVar4 + 8;
  for (lVar5 = lVar3; lVar5 != lVar1; lVar5 = lVar5 + 0x48) {
    FUN_10776cba8(lVar2,lVar5 + 8);
    lVar2 = lVar2 + 0x48;
  }
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
    func_0x00010776cbf4(lVar3 + 8);
  }
  param_2[1] = lVar4;
  lVar2 = *param_1;
  *param_1 = lVar4;
  param_1[1] = lVar2;
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10776d0ac; end: 10776d0d3;  */

void FUN_10776d0ac(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar4;
  long lStack_70;
  
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010776d0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_1,param_2,param_3);
    return;
  }
  func_0x000104bfeb48();
  func_0x00010776dc08();
  func_0x00010776e020();
  do {
    if (param_2 == (long *)0x0) {
      return;
    }
    plVar1 = unaff_x21;
    if ((unaff_x21 == (long *)*unaff_x19) || (func_0x00010002c810(), plVar1[4] < unaff_x20[2])) {
      if (*unaff_x21 != 0) {
        plVar1 = plVar1 + 1;
        goto code_r0x00010776d14c;
      }
code_r0x00010776d160:
      lVar2 = 0x38;
      __Znwm();
      *(long *)(lVar2 + 0x20) = unaff_x20[2];
      lVar3 = unaff_x20[4];
      uVar4 = unaff_x20[3];
      *(long *)(lVar2 + 0x30) = unaff_x20[4];
      *(undefined8 *)(lVar2 + 0x28) = uVar4;
      lStack_70 = lVar2;
      if (lVar3 != 0) {
        do {
          func_0x00010776da3c();
        } while (extraout_w10 != 0);
      }
      func_0x000107546c3c();
      lStack_70 = 0;
      func_0x000107546c64(&lStack_70);
    }
    else {
      plVar1 = unaff_x19;
      func_0x000107546bf0();
code_r0x00010776d14c:
      if (*plVar1 == 0) goto code_r0x00010776d160;
    }
    unaff_x20 = (long *)*unaff_x20;
    param_2 = unaff_x20;
  } while( true );
}



/* Entry: 10776d38c; end: 10776d3a7;  */

void FUN_10776d38c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109d5e50;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10776d4b8; end: 10776d4cb;  */

undefined ** FUN_10776d4b8(void)

{
  return &PTR_DAT_1109d5f40;
}



/* Entry: 10776d688; end: 10776d6a3;  */

void FUN_10776d688(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109d5fe0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10776d7b0; end: 10776d7cf;  */

void FUN_10776d7b0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109d60e0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10776e0c8; end: 10776e0db;  */

void FUN_10776e0c8(void)

{
  func_0x00010776e07c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10776f378; end: 10776f37b;  */

void FUN_10776f378(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10776f520; end: 10776fa07;  */

/* WARNING: Possible PIC construction at 0x00010776f5ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010776f800: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010776f5f0) */
/* WARNING: Removing unreachable block (ram,0x00010776f5f4) */
/* WARNING: Removing unreachable block (ram,0x00010776f5fc) */
/* WARNING: Removing unreachable block (ram,0x00010776f60c) */
/* WARNING: Removing unreachable block (ram,0x00010776f620) */
/* WARNING: Removing unreachable block (ram,0x00010776f630) */
/* WARNING: Removing unreachable block (ram,0x00010776f81c) */
/* WARNING: Removing unreachable block (ram,0x00010776f668) */
/* WARNING: Removing unreachable block (ram,0x00010776f83c) */
/* WARNING: Removing unreachable block (ram,0x00010776f858) */
/* WARNING: Removing unreachable block (ram,0x00010776f67c) */
/* WARNING: Removing unreachable block (ram,0x00010776f694) */
/* WARNING: Removing unreachable block (ram,0x00010776f864) */
/* WARNING: Removing unreachable block (ram,0x00010776f804) */
/* WARNING: Removing unreachable block (ram,0x00010776f818) */

undefined ******
FUN_10776f520(undefined ******param_1,long *param_2,undefined *****param_3,undefined *****param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  undefined ******ppppppuVar7;
  undefined ****ppppuVar8;
  undefined1 *puVar9;
  undefined ******ppppppuVar10;
  undefined ******ppppppuVar11;
  undefined *****pppppuVar12;
  char *pcVar13;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined ******ppppppuVar14;
  long lVar15;
  undefined ******unaff_x24;
  undefined8 *****pppppuVar16;
  undefined *puVar17;
  undefined1 auStack_4c0 [144];
  undefined ****ppppuStack_430;
  undefined1 *puStack_428;
  undefined ****ppppuStack_420;
  undefined ****ppppuStack_418;
  undefined *****pppppuStack_3f0;
  long *plStack_3e8;
  undefined *****pppppuStack_3e0;
  undefined ****ppppuStack_3d8;
  undefined ****ppppuStack_3d0;
  undefined *****pppppuStack_3c8;
  undefined8 ****ppppuStack_3c0;
  undefined *puStack_3b8;
  undefined1 uStack_3a9;
  undefined ****ppppuStack_3a8;
  undefined1 *puStack_3a0;
  undefined ****ppppuStack_390;
  undefined ****ppppuStack_380;
  undefined *****pppppuStack_378;
  undefined8 ****ppppuStack_370;
  undefined *puStack_368;
  undefined1 auStack_360 [80];
  undefined ***apppuStack_310 [3];
  undefined1 auStack_2f8 [8];
  undefined4 uStack_2f0;
  undefined1 uStack_2e8;
  undefined *****apppppuStack_2e0 [2];
  byte bStack_2d0;
  undefined ****appppuStack_2c8 [3];
  undefined1 auStack_2b0 [72];
  undefined1 auStack_268 [4];
  undefined1 uStack_264;
  undefined ***apppuStack_1e8 [50];
  undefined8 uStack_58;
  
  pppppuVar16 = (undefined8 *****)&stack0xfffffffffffffff0;
  puVar2 = auStack_360;
  plVar6 = param_2;
  func_0x00010777006c();
  ppppppuVar14 = (undefined ******)(plVar6 + 1);
  ppppppuVar7 = ppppppuVar14;
  uStack_58 = extraout_x8;
  (**(code **)(*plVar6 + 0x20))();
  uVar3 = ppppppuVar7 == (undefined ******)0x4;
  if ((bool)uVar3) {
    (**(code **)(*param_2 + 0x28))(apppuStack_1e8,ppppppuVar14,1);
    uStack_2f0 = 2;
    uStack_2e8 = 1;
    auStack_268[0] = 0;
    uStack_264 = 0;
    pppppuVar12 = (undefined *****)apppuStack_1e8;
    func_0x00010777067c(apppppuStack_2e0,param_3,pppppuVar12,1,param_4,auStack_2f8,auStack_268);
    func_0x0001072c9854(auStack_2f8);
    func_0x0001072f5f6c(apppuStack_1e8);
    unaff_x24 = (undefined ******)apppppuStack_2e0[0];
    ppppppuVar10 = (undefined ******)0x1;
    if ((bStack_2d0 & 1) == 0) {
LAB_10776f8a0:
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      ppppppuVar7 = apppppuStack_2e0;
      func_0x0001072c95d0();
      unaff_x24 = ppppppuVar10;
      goto LAB_10776f8b0;
    }
    ppppppuVar7 = (undefined ******)apppppuStack_2e0[0];
    func_0x000107770440();
    if (((ulong)ppppppuVar7 & 1) != 0) {
      puVar17 = (undefined *)0x10776f5f0;
      ppppppuVar10 = (undefined ******)apppppuStack_2e0[0];
      ppppppuVar7 = param_1;
      goto code_r0x00010776fa08;
    }
    uVar3 = *(char *)(unaff_x24 + 4) == '\x01';
    if (((!(bool)uVar3) || (uVar3 = *(char *)((long)unaff_x24 + 0x22) == '\x01', !(bool)uVar3)) ||
       (uVar3 = *(char *)((long)unaff_x24 + 0x23) == '\x01', !(bool)uVar3)) {
LAB_10776f880:
      func_0x00010002b838(apppuStack_310,&UNK_10f426b79);
      pppppuVar12 = (undefined *****)apppuStack_310;
      func_0x0001077700a4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_310);
      ppppppuVar10 = unaff_x24;
      goto LAB_10776f8a0;
    }
    ppppuVar8 = apppuStack_1e8;
    func_0x00010002b838(ppppuVar8,&DAT_10f34b835);
    iVar5 = (int)ppppuVar8;
    func_0x000107770134();
    func_0x000107770150();
    if (iVar5 == 0) {
LAB_10776f87c:
      func_0x0001077700f4();
      goto LAB_10776f880;
    }
    puVar9 = auStack_268;
    func_0x00010002b838(puVar9,&DAT_10f34b835);
    iVar5 = (int)puVar9;
    func_0x000107770134();
    func_0x000107770150();
    if (iVar5 == 0) {
LAB_10776f878:
      func_0x000107770104();
      goto LAB_10776f87c;
    }
    puVar9 = auStack_2b0;
    func_0x00010002b838(puVar9,&DAT_10f34b835);
    iVar5 = (int)puVar9;
    func_0x000107770134();
    func_0x000107770150();
    if (iVar5 == 0) {
      func_0x000107770118();
      goto LAB_10776f878;
    }
    puVar17 = (undefined *)0x10776f804;
  }
  else {
    func_0x000107878fec(auStack_268,(undefined1 *)((long)ppppppuVar7 + -1));
    func_0x0001004c3cd0(apppuStack_1e8,&UNK_10f426b58,auStack_268);
    func_0x00010048a6c8(appppuStack_2c8,apppuStack_1e8,&UNK_10f417b93);
    pppppuVar12 = appppuStack_2c8;
    func_0x00010756a668(param_3);
    ppppppuVar7 = (undefined ******)appppuStack_2c8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001077700ec();
    func_0x0001077700fc();
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
LAB_10776f8b0:
    func_0x000107770158(uStack_58);
    if ((bool)uVar3) {
      return ppppppuVar7;
    }
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2b0);
    func_0x000107770104();
    func_0x0001077700f4();
    ppppppuVar10 = apppppuStack_2e0;
    func_0x0001072c95d0();
    puVar17 = &SUB_10776fa08;
    func_0x0001077700b0();
code_r0x00010776fa08:
    ppppppuVar11 = ppppppuVar10;
    ppppuStack_380 = (undefined ****)param_3;
    pppppuStack_378 = (undefined *****)ppppppuVar7;
    ppppuStack_370 = pppppuVar16;
    puStack_368 = puVar17;
    func_0x00010777006c();
    func_0x00010776fdfc();
    if (((ulong)ppppppuVar11 & 1) == 0) {
      uStack_3a9 = 0;
      ppppuStack_3a8 = (undefined ****)&PTR_DAT_1109d62d8;
      puStack_3a0 = &uStack_3a9;
      ppppuStack_390 = (undefined ****)&ppppuStack_3a8;
      pppppuVar12 = &ppppuStack_3a8;
      func_0x0001077700d8((*ppppppuVar10)[2]);
      ppppppuVar11 = (undefined ******)&ppppuStack_3a8;
      func_0x00010745df78();
      uVar4 = uStack_3a9;
    }
    else {
      uVar4 = 1;
    }
    func_0x000107770090(uVar4);
    if ((bool)uVar3) {
      return (undefined ******)(ulong)(extraout_w8 & 1);
    }
    ___stack_chk_fail();
    ppppppuVar7 = (undefined ******)&ppppuStack_3a8;
    func_0x00010745df78();
    func_0x0001077700b0();
    puVar2 = auStack_4c0 + 0x80;
    puStack_3b8 = &UNK_10776faa0;
    pppppuVar16 = &ppppuStack_3c0;
    param_1 = ppppppuVar7;
    pppppuStack_3f0 = (undefined *****)unaff_x24;
    plStack_3e8 = param_2;
    pppppuStack_3e0 = (undefined *****)ppppppuVar14;
    ppppuStack_3d8 = (undefined ****)param_4;
    ppppuStack_3d0 = (undefined ****)param_3;
    pppppuStack_3c8 = (undefined *****)ppppppuVar11;
    ppppuStack_3c0 = &ppppuStack_370;
    func_0x00010777006c();
    iVar5 = *(int *)(param_1 + 1);
    ppppppuVar10 = ppppppuVar14;
    if (iVar5 == 1) {
      lVar15 = 0x30;
      uVar3 = 1;
      param_4 = pppppuVar12;
      do {
        if (lVar15 == 0) {
          iVar5 = *(int *)(ppppppuVar7 + 1);
          ppppppuVar10 = ppppppuVar14;
          goto code_r0x00010776fb14;
        }
        func_0x00010777013c();
        ppppppuVar14 = (undefined ******)&ppppuStack_430;
        func_0x000107283140(ppppppuVar14,param_4);
        param_1 = ppppppuVar14;
        func_0x0001077700b8();
        param_4 = param_4 + 3;
        lVar15 = lVar15 + -0x18;
      } while (((ulong)ppppppuVar14 & 1) == 0);
code_r0x00010776fb40:
      ppppppuVar10 = ppppppuVar14;
      uVar4 = 0;
    }
    else {
code_r0x00010776fb14:
      uVar3 = iVar5 == 0x25;
      if ((bool)uVar3) {
        ppppppuVar14 = (undefined ******)0x30;
        param_4 = pppppuVar12;
        do {
          ppppppuVar10 = (undefined ******)0x0;
          if (ppppppuVar14 == (undefined ******)0x0) goto code_r0x00010776fb48;
          param_1 = ppppppuVar7;
          func_0x0001077230d0(ppppppuVar7,param_4);
          param_4 = param_4 + 3;
          ppppppuVar14 = ppppppuVar14 + -3;
        } while (((ulong)param_1 & 1) == 0);
        goto code_r0x00010776fb40;
      }
code_r0x00010776fb48:
      auStack_4c0[0x8f] = 1;
      puStack_428 = auStack_4c0 + 0x8f;
      ppppuStack_430 = (undefined ****)&PTR_DAT_1109d6358;
      ppppuStack_418 = (undefined ****)&ppppuStack_430;
      ppppuStack_420 = (undefined ****)pppppuVar12;
      func_0x0001077700d8((*ppppppuVar7)[2]);
      func_0x0001077700c0();
      uVar4 = auStack_4c0[0x8f];
    }
    func_0x000107770090(uVar4);
    if ((bool)uVar3) {
      return (undefined ******)(ulong)(extraout_w8_00 & 1);
    }
    ___stack_chk_fail();
    unaff_x24 = param_1;
    func_0x0001077700c0();
    puVar17 = &SUB_10776fbd0;
    func_0x0001077700b0();
    param_3 = pppppuVar12;
    ppppppuVar14 = ppppppuVar10;
  }
  *(undefined *******)(puVar2 + -0x30) = ppppppuVar14;
  *(undefined ******)(puVar2 + -0x28) = param_4;
  *(undefined ******)(puVar2 + -0x20) = param_3;
  *(undefined *******)(puVar2 + -0x18) = param_1;
  *(undefined8 ******)(puVar2 + -0x10) = pppppuVar16;
  *(undefined **)(puVar2 + -8) = puVar17;
  ppppppuVar14 = unaff_x24;
  func_0x00010777006c();
  *(undefined8 *)(puVar2 + -0x38) = extraout_x8_00;
  uVar1 = *(int *)(ppppppuVar14 + 1) - 1U >> 2 | (*(int *)(ppppppuVar14 + 1) - 1U) * 0x40000000;
  uVar4 = uVar1 == 9;
  uVar3 = 0;
  switch(uVar1) {
  case 0:
    func_0x00010777013c();
    pcVar13 = "error";
    ppppppuVar14 = (undefined ******)(puVar2 + -0x70);
    func_0x000107278484(ppppppuVar14,"error");
    if (((ulong)ppppppuVar14 & 1) != 0) {
code_r0x00010776fc40:
      func_0x0001077700b8();
      uVar3 = 0;
      goto code_r0x00010776fcc0;
    }
    ppppppuVar14 = unaff_x24;
    func_0x00010776fdfc();
    if (((ulong)ppppppuVar14 & 1) == 0) {
      ppppppuVar14 = (undefined ******)(puVar2 + -0x70);
      func_0x000107264c5c();
      func_0x00010772cf1c(unaff_x24);
      func_0x00010772cd44(ppppppuVar14,pcVar13,puVar2 + -0x80);
      if (((ulong)ppppppuVar14 & 1) == 0) goto code_r0x00010776fc40;
    }
    func_0x0001077700b8();
    break;
  case 2:
  case 5:
  case 9:
    goto code_r0x00010776fcc0;
  }
  puVar2[-0x80] = 1;
  *(undefined ***)(puVar2 + -0x70) = &PTR_DAT_1109d6258;
  *(undefined1 **)(puVar2 + -0x68) = puVar2 + -0x80;
  *(undefined1 **)(puVar2 + -0x58) = puVar2 + -0x70;
  func_0x0001077700d8((*unaff_x24)[2]);
  func_0x0001077700c0();
  uVar3 = puVar2[-0x80];
code_r0x00010776fcc0:
  func_0x000107770090(uVar3);
  if ((bool)uVar4) {
    return (undefined ******)(ulong)(extraout_w8_01 & 1);
  }
  ___stack_chk_fail();
  func_0x0001077700b8();
  func_0x0001077700b0();
  return ppppppuVar14;
}



/* Entry: 10776fdac; end: 10776fdb7;  */

undefined ** FUN_10776fdac(void)

{
  return &PTR_DAT_1109d63b8;
}



/* Entry: 10776ff70; end: 10776ffa3;  */

long FUN_10776ff70(long param_1)

{
  long lVar1;
  
  lVar1 = 0x18;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x18);
  return param_1;
}



/* Entry: 10777042c; end: 10777043f;  */

void FUN_10777042c(void)

{
  return;
}



/* Entry: 107771274; end: 1077713b3;  */

void FUN_107771274(undefined8 *param_1,uint *param_2,undefined8 *****param_3,undefined8 *****param_4
                  ,uint *param_5,undefined8 *****param_6,undefined8 param_7)

{
  uint uVar1;
  undefined1 uVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined **ppuVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 ****ppppuVar9;
  uint **ppuVar10;
  undefined *puVar11;
  undefined8 *****pppppuVar12;
  uint *puVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  uint uVar14;
  code *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 auStack_4d0 [16];
  undefined1 uStack_4c0;
  undefined1 auStack_4b8 [16];
  undefined1 auStack_4a8 [24];
  uint *puStack_490;
  uint *puStack_488;
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [4];
  undefined1 uStack_444;
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [81];
  undefined1 uStack_3c7;
  undefined8 **ppuStack_368;
  undefined8 uStack_360;
  undefined8 ***apppuStack_358 [3];
  undefined1 auStack_340 [24];
  char cStack_328;
  undefined8 ***apppuStack_320 [3];
  undefined8 ***apppuStack_308 [3];
  uint *puStack_2f0;
  undefined8 uStack_2e8;
  byte bStack_2e0;
  undefined8 ***pppuStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 ****ppppuStack_280;
  undefined *apuStack_278 [14];
  int iStack_208;
  undefined8 ****ppppuStack_200;
  undefined *puStack_1f8;
  undefined1 uStack_1f0;
  byte bStack_1c8;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [40];
  undefined8 ***pppuStack_70;
  undefined8 ***pppuStack_68;
  undefined8 uStack_58;
  
  uVar2 = *(char *)(param_6 + 4) != '\x01' || param_6[3] == (undefined8 ****)0x0;
  if (*(char *)(param_6 + 4) == '\x01' && param_6[3] != (undefined8 ****)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b0,param_2);
    uStack_b8 = *(undefined8 *)(param_2 + 0x12);
    uStack_c0 = *(undefined8 *)(param_2 + 0x10);
    if (*(long *)(param_2 + 0x12) != 0) {
      do {
        func_0x000107771b38();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010756f360(auStack_d8,param_2 + 6);
    func_0x00010777193c(auStack_e8,param_6,param_2 + 0xc);
    func_0x000107771c28(auStack_98,auStack_b0,&uStack_c0,auStack_d8,auStack_e8);
    func_0x0001072c9830(auStack_e8);
    func_0x000107771c44();
    func_0x000107771c14();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
    func_0x000107771b68(auStack_98);
    func_0x0001072ca718(auStack_98);
    return;
  }
  pppppuVar5 = param_3;
  pppppuVar12 = param_4;
  puVar13 = param_5;
  func_0x000107771b50();
  puStack_2f0 = (uint *)((ulong)puStack_2f0 & 0xffffffffffffff00);
  bStack_2e0 = 0;
  pppppuVar4 = pppppuVar5 + 1;
  pppppuVar3 = pppppuVar4;
  uStack_58 = extraout_x8;
  (*(code *)(*pppppuVar5)[3])();
  if ((int)pppppuVar3 == 0) {
    func_0x000107771be8(&ppppuStack_200);
    func_0x000107768e6c();
    func_0x000107771c00();
    func_0x0001072c95d0(&ppppuStack_200);
code_r0x0001077709e8:
    puVar7 = puStack_2f0;
    if ((bStack_2e0 & 1) != 0) {
      if ((char)param_2[10] == '\x01') {
        uVar1 = param_2[8];
        if (uVar1 < 0xc) {
          uVar14 = 1 << (ulong)(uVar1 & 0x1f);
          if ((uVar14 & 0xae) == 0) {
            if ((uVar14 & 0xa10) == 0) goto code_r0x000107770a54;
code_r0x000107770a64:
            uVar14 = puStack_2f0[6];
            if (uVar14 != 3 && uVar14 != 6) goto code_r0x000107770bac;
code_r0x000107770a74:
            uVar1 = *param_5;
            if ((char)param_5[1] == '\0') {
              uVar1 = 0;
            }
            puVar13 = (uint *)(ulong)uVar1;
            func_0x000107771bac();
          }
          else {
            uVar14 = puStack_2f0[6];
            if (uVar14 != 6) {
              if (uVar1 == 4) goto code_r0x000107770a64;
              goto code_r0x000107770bac;
            }
            uVar1 = *param_5;
            if ((char)param_5[1] == '\0') {
              uVar1 = 1;
            }
            puVar13 = (uint *)(ulong)uVar1;
            func_0x000107771bac();
          }
          puStack_1f8 = apuStack_278[0];
          ppppuStack_200 = ppppuStack_280;
          ppppuStack_280 = (undefined8 *****)0x0;
          apuStack_278[0] = (undefined *)0x0;
          uStack_1f0 = 1;
          func_0x000107771c00();
          func_0x0001072c95d0(&ppppuStack_200);
          func_0x0001072c9b9c(&ppppuStack_280);
        }
        else {
code_r0x000107770a54:
          uVar14 = puStack_2f0[6];
code_r0x000107770bac:
          if (uVar1 == 7 && uVar14 == 7) {
            puVar8 = puStack_2f0 + 4;
            func_0x00010756aea8();
            if (puVar8[2] == 3) {
              puVar8 = param_2 + 6;
              func_0x00010756aea8();
              if (puVar8[2] != 3) goto code_r0x000107770a74;
            }
          }
          pppppuVar5 = (undefined8 *****)(puVar7 + 4);
          func_0x00010756f724(auStack_340,param_2 + 6,pppppuVar5);
          if (cStack_328 == '\x01') {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (&ppppuStack_200,auStack_340);
            pppppuVar5 = &ppppuStack_200;
            func_0x000107771b60();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_200);
          }
          func_0x0001001148fc(auStack_340);
          uVar2 = **(long **)(param_2 + 0x10) == (*(long **)(param_2 + 0x10))[1];
          if (!(bool)uVar2) goto code_r0x000107770c30;
        }
      }
      param_5 = puStack_2f0;
      if (((puStack_2f0[2] == 2) || (puStack_2f0[6] == 0xb)) ||
         (puVar7 = puStack_2f0, func_0x000107770440(), (int)puVar7 == 0)) {
        func_0x000107771b98();
        uVar2 = bStack_2e0 == 1;
        if ((bool)uVar2) {
          param_1[1] = uStack_2e8;
          *param_1 = puStack_2f0;
          puStack_2f0 = (uint *)0x0;
          uStack_2e8 = 0;
          *(undefined1 *)(param_1 + 2) = 1;
        }
      }
      else {
        func_0x000107751284(&ppppuStack_200);
        uStack_290 = 0;
        uStack_2a8 = 0;
        uStack_2b0 = 0;
        uStack_298 = 0;
        uStack_2a0 = 0;
        uStack_2c8 = 0;
        pppuStack_2d0 = (undefined8 ****)0x0;
        uStack_2b8 = 0;
        uStack_2c0 = 0;
        pppppuVar12 = (undefined8 *****)&pppuStack_2d0;
        func_0x000107753050(&ppppuStack_280,param_5,&ppppuStack_200,pppppuVar12);
        func_0x00010724b3d8(&pppuStack_2d0);
        uVar2 = iStack_208 == 1;
        if ((bool)uVar2) {
          uVar2 = param_5[6] == 7;
          if ((bool)uVar2) {
            pppppuVar3 = (undefined8 *****)(param_5 + 4);
            func_0x00010756aea8();
            pppppuVar12 = &ppppuStack_280;
            func_0x0001073405dc();
            func_0x000107325cc8();
            func_0x000107771c60();
            func_0x000107771bc4();
            pppuStack_68 = pppppuVar12[1];
            pppuStack_70 = *pppppuVar12;
            *pppppuVar12 = (undefined8 ****)0x0;
            pppppuVar12[1] = (undefined8 ****)0x0;
            pppppuVar12 = (undefined8 *****)&pppuStack_70;
            pppppuVar5 = pppppuVar3;
            func_0x000107769788(param_5 + 6,pppppuVar3,pppppuVar12);
            func_0x00010726b188(&pppuStack_70);
            func_0x000107771b7c();
            *param_1 = param_5;
            param_1[1] = pppppuVar3;
            ppuStack_368 = (undefined8 ***)0x0;
            uStack_360 = 0;
            *(undefined1 *)(param_1 + 2) = 1;
            ppppuVar9 = (undefined8 ****)&ppuStack_368;
          }
          else {
            pppppuVar3 = &ppppuStack_280;
            func_0x0001073405dc();
            func_0x000107771c60();
            func_0x000107771bc4();
            pppppuVar5 = pppppuVar3;
            func_0x000107539b24(param_5 + 6,pppppuVar3);
            func_0x000107771b7c();
            *param_1 = param_5;
            param_1[1] = pppppuVar3;
            pppuStack_70 = (undefined8 ****)0x0;
            pppuStack_68 = (undefined8 ****)0x0;
            *(undefined1 *)(param_1 + 2) = 1;
            ppppuVar9 = &pppuStack_70;
          }
          func_0x0001075795dc(ppppuVar9);
        }
        else {
          func_0x00010756dd74(&ppppuStack_280);
          func_0x00010724ef84(apppuStack_358);
          pppppuVar5 = (undefined8 *****)apppuStack_358;
          func_0x000107771b60();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_358);
          func_0x000107771b98();
        }
        func_0x000107771c38();
        func_0x000107267da8(&ppppuStack_200);
      }
      goto code_r0x000107770c34;
    }
  }
  else {
    (*(code *)(*param_3)[4])();
    if (pppppuVar4 != (undefined8 *****)0x0) {
      func_0x000107771c54(&ppppuStack_280);
      (*(code *)ppppuStack_280[0xd])(&ppppuStack_200,apuStack_278);
      func_0x0001072f5f6c(&ppppuStack_280);
      if ((bStack_1c8 & 1) == 0) {
        func_0x000107771c54(&pppuStack_70);
        func_0x00010754c3ec(&pppuStack_2d0,&pppuStack_70);
        func_0x0001004c3cd0(&ppppuStack_280,&UNK_10f426cfd,&pppuStack_2d0);
        func_0x00010048a6c8(apppuStack_320,&ppppuStack_280,&UNK_10f426d2a);
        pppppuVar5 = (undefined8 *****)apppuStack_320;
        pppppuVar12 = (undefined8 *****)0x0;
        func_0x00010756a69c(param_2,pppppuVar5,0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_320);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_280);
        func_0x000107771be0();
        func_0x0001072f5f6c(&pppuStack_70);
        func_0x000107771b98();
      }
      else {
        puVar11 = &UNK_10f426f08;
        pppppuVar5 = &ppppuStack_200;
        pppppuVar12 = (undefined8 *****)0x5;
        func_0x000107278530(pppppuVar5,&UNK_10f426f08,5);
        if ((int)pppppuVar5 == 0) {
          pppppuVar5 = &ppppuStack_200;
          func_0x000107264c5c();
          ppuVar6 = &PTR_DAT_1109d63c8;
          ppppuStack_280 = pppppuVar5;
          apuStack_278[0] = puVar11;
          func_0x000107771040(&PTR_DAT_1109d63c8,&ppppuStack_280);
          uVar2 = ppuVar6 == (undefined **)&UNK_1109d67e8;
          if ((bool)uVar2) {
            func_0x000107264c5c(&ppppuStack_200);
            puVar13 = param_2;
            func_0x00010772b91c(&ppppuStack_280);
            pppppuVar12 = param_3;
            param_6 = param_4;
          }
          else {
            func_0x000107771be8(&ppppuStack_280);
            (*extraout_x9)();
          }
        }
        else {
          func_0x000107771be8(&ppppuStack_280);
          func_0x00010776994c();
        }
        pppppuVar5 = &ppppuStack_280;
        func_0x0001075530c4(&puStack_2f0,pppppuVar5);
        func_0x0001072c95d0(&ppppuStack_280);
      }
      func_0x00010724b3d8(&ppppuStack_200);
      if ((bStack_1c8 & 1) == 0) goto code_r0x000107770c34;
      goto code_r0x0001077709e8;
    }
    func_0x00010002b838(apppuStack_308,&UNK_10f426c9c);
    pppppuVar5 = (undefined8 *****)apppuStack_308;
    func_0x000107771b60();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_308);
  }
code_r0x000107770c30:
  func_0x000107771b98();
code_r0x000107770c34:
  func_0x0001072c95d0();
  func_0x000107771b24(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726b188(&pppuStack_70);
  __ZNSt3__119__shared_weak_countD2Ev(param_5);
  func_0x000107579550(&pppuStack_2d0);
  func_0x000107771c38();
  func_0x000107267da8(&ppppuStack_200);
  ppuVar10 = &puStack_2f0;
  func_0x0001072c95d0();
  func_0x000107771b48();
  func_0x000100456794(auStack_460);
  func_0x000107878fec(auStack_478,pppppuVar12);
  func_0x00010533a9c0(auStack_448,auStack_460,auStack_478);
  func_0x00010048a6c8(auStack_430,auStack_448,&UNK_10f426c9a);
  puStack_488 = ppuVar10[9];
  puStack_490 = ppuVar10[8];
  if (ppuVar10[9] != (uint *)0x0) {
    do {
      func_0x000107771b38();
    } while (extraout_w10 != 0);
  }
  func_0x000107771650(auStack_4a8,param_6);
  func_0x00010777193c(auStack_4b8,param_7,ppuVar10 + 6);
  func_0x000107771c28(auStack_418,auStack_430,&puStack_490,auStack_4a8,auStack_4b8);
  func_0x0001072c9830(auStack_4b8);
  func_0x0001072c9854(auStack_4a8);
  func_0x0001072c97fc(&puStack_490);
  func_0x000107771be0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_448);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_478);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_460);
  uStack_3c7 = 0;
  auStack_4d0[0] = 0;
  uStack_4c0 = 0;
  auStack_448[0] = 0;
  uStack_444 = 0;
  func_0x00010777067c(extraout_x8_00,auStack_418,pppppuVar5,0,puVar13,auStack_4d0,auStack_448);
  func_0x0001072c9854(auStack_4d0);
  func_0x000107771bbc();
  return;
}



/* Entry: 1077717e0; end: 10777182f;  */

uint FUN_1077717e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  func_0x00010750c678();
  uVar2 = uVar1;
  func_0x00010750c678(param_2);
  func_0x00010006725c(param_1,uVar1,param_2,uVar2);
  return (uint)param_1 >> 7 & 1;
}



/* Entry: 1077719fc; end: 107771a23;  */

long FUN_1077719fc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000107771a24();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107771c6c; end: 107771dcf;  */

undefined8 * FUN_107771c6c(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  uint6 uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined4 uStack_70;
  ushort uStack_6c;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  func_0x0001072c9ff4(auStack_60);
  lVar2 = *param_3;
  uVar1 = *(uint6 *)(lVar2 + 0x20);
  if ((uVar1 >> 0x28 & 1) == 0) {
    func_0x000107772aa0();
    uStack_6c = 0x100;
    if ((int)lVar2 == 0) {
      uStack_6c = 0;
    }
  }
  else {
    uStack_6c = 0x100;
  }
  uVar4 = (ulong)uVar1 & 0xffffffffff;
  uStack_6c = uStack_6c | (ushort)(uVar4 >> 0x20);
  uStack_70 = (undefined4)uVar4;
  uStack_48 = 0x1010101;
  uStack_44 = 1;
  puVar5 = (undefined8 *)*param_4;
  while (puVar5 != param_4 + 1) {
    uStack_50 = *(undefined4 *)(puVar5[5] + 0x20);
    uStack_4c = *(undefined2 *)(puVar5[5] + 0x24);
    puVar3 = &uStack_48;
    func_0x0001075457c8(puVar3,&uStack_50);
    uStack_48 = SUB84(puVar3,0);
    uStack_44 = (undefined2)((ulong)puVar3 >> 0x20);
    func_0x00010002c7d4();
  }
  uStack_74 = uStack_44;
  uStack_78 = uStack_48;
  puVar3 = &uStack_70;
  func_0x0001075457c8(puVar3,&uStack_78);
  uStack_68 = SUB84(puVar3,0);
  uStack_64 = (undefined2)((ulong)puVar3 >> 0x20);
  func_0x0001072c9f9c(param_1,7,auStack_60,&uStack_68);
  func_0x0001072c9884(auStack_60);
  *param_1 = &PTR_DAT_1109d68c8;
  lVar2 = *param_3;
  param_1[10] = param_3[1];
  param_1[9] = lVar2;
  *param_3 = 0;
  param_3[1] = 0;
  func_0x000107545f9c(param_1 + 0xb,param_4);
  return param_1;
}



/* Entry: 107772a58; end: 107772a9f;  */

void FUN_107772a58(long *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_2 + 0x48);
  func_0x000107772aa0();
  if (iVar1 == 0) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    *param_1 = param_2;
    *(undefined4 *)(param_1 + 6) = 1;
  }
  *(bool *)(param_1 + 7) = iVar1 != 0;
  return;
}



/* Entry: 107772ce8; end: 107773243;  */

/* WARNING: Possible PIC construction at 0x000107773260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107773264) */

undefined **
FUN_107772ce8(long param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x8;
  uint uVar10;
  undefined **ppuStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined **ppuStack_358;
  long lStack_350;
  undefined *puStack_348;
  undefined *apuStack_340 [14];
  int iStack_2d0;
  undefined1 auStack_2c8 [160];
  undefined4 uStack_228;
  undefined8 uStack_220;
  double dStack_218;
  undefined4 uStack_1b8;
  int iStack_1a8;
  undefined1 auStack_170 [64];
  undefined8 uStack_130;
  undefined8 auStack_128 [12];
  undefined4 uStack_c8;
  int iStack_b8;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  
  plVar8 = param_2;
  lVar9 = param_3;
  func_0x0001077740c4();
  uStack_70 = extraout_x8;
  func_0x000107753050(&puStack_348,plVar8[9],lVar9,param_4);
  uVar3 = iStack_2d0 == 1;
  if (!(bool)uVar3) {
    ppuVar5 = (undefined **)(param_1 + 8);
    ppuVar4 = apuStack_340;
    func_0x00010756c040();
    goto LAB_107772dd4;
  }
  ppuVar5 = (undefined **)(param_3 + 0x108);
  ppuVar4 = (undefined **)(param_2 + 0xb);
  func_0x000107754e20();
  if ((int)ppuVar5 == 0) {
    ppuVar5 = (undefined **)(param_3 + 0x108);
    ppuVar4 = (undefined **)(param_2 + 0x12);
    func_0x000107754e20();
    if ((int)ppuVar5 != 0) goto LAB_107772dc8;
    ppuVar5 = &puStack_348;
    func_0x0001073405dc();
    iVar2 = *(int *)(ppuVar5 + 0xd);
    if (iVar2 == 0) goto LAB_107772dc8;
    if (iVar2 != 1) {
      uVar3 = iVar2 == 2;
      if ((((!(bool)uVar3) && (uVar3 = iVar2 == 3, !(bool)uVar3)) &&
          (uVar3 = iVar2 == 4, !(bool)uVar3)) &&
         (((uVar3 = iVar2 == 5, !(bool)uVar3 && (uVar3 = iVar2 == 6, !(bool)uVar3)) &&
          (uVar3 = iVar2 == 7, !(bool)uVar3)))) {
        uVar3 = iVar2 == 8;
        if ((bool)uVar3) {
          puStack_378 = (undefined *)0x0;
          uStack_370 = 0;
          uStack_368 = 0;
          lVar9 = *(long *)ppuVar5[1];
          lVar1 = *(long *)((long)ppuVar5[1] + 8);
          uVar3 = lVar9 == lVar1;
          if (!(bool)uVar3) {
            func_0x0001074b01dc(&puStack_378,(lVar1 - lVar9) / 0x70);
            func_0x0001072ba99c(param_3 + 0x108);
            uVar10 = 0;
            lVar1 = *(long *)((long)ppuVar5[1] + 8);
            for (lVar9 = *(long *)ppuVar5[1]; uVar3 = lVar9 == lVar1, !(bool)uVar3;
                lVar9 = lVar9 + 0x70) {
              dStack_218 = (double)uVar10;
              uStack_1b8 = 2;
              func_0x00010777411c(auStack_2c8);
              func_0x000107774130();
              func_0x0001077741a8();
              puVar6 = auStack_2c8;
              func_0x000104c2f714(puVar6);
              func_0x000107774190();
              func_0x0001077740f8();
              func_0x000107774130();
              func_0x0001072955a4(puVar6 + 8,lVar9 + 8);
              func_0x0001077740f0();
              func_0x0001077592e8(&uStack_220,param_5);
              if (iStack_1a8 == 1) {
                puVar7 = &uStack_220;
                func_0x0001073405dc(puVar7);
                func_0x00010726cc04(auStack_128,puVar7 + 1);
              }
              else {
                (**(code **)(*param_2 + 0x28))(auStack_170,param_2);
                func_0x0001077765a4(auStack_2c8,auStack_170,&ppuStack_390);
                func_0x000107776500(auStack_a8,auStack_2c8);
                func_0x000107774158();
                func_0x000104c3323c(auStack_170);
                uStack_c8 = 0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
              }
              func_0x000107774114();
              func_0x000107277668(&puStack_378,&uStack_130);
              func_0x00010726af18(auStack_128);
              uVar10 = uVar10 + 1;
            }
          }
          func_0x00010777411c(&uStack_220);
          func_0x0001077740d4();
          func_0x0001077740f0();
          func_0x0001077740f8();
          func_0x0001077740d4();
          func_0x0001077740f0();
          ppuVar4 = &puStack_378;
          func_0x000107277aa4(&uStack_220);
          *(double *)(param_1 + 0x18) = dStack_218;
          *(undefined8 *)(param_1 + 0x10) = uStack_220;
          uStack_220 = 0;
          dStack_218 = 0.0;
          func_0x0001077741d8(8);
          func_0x00010726b188();
          ppuVar5 = &puStack_378;
          func_0x000107277d70();
        }
        else {
          ppuVar5 = ppuVar5 + 1;
          puStack_378 = &UNK_10e52b660;
          uStack_370 = 0;
          uStack_368 = 0;
          uStack_360 = 0;
          lVar9 = *(long *)(*ppuVar5 + 0x18);
          if (lVar9 != 0) {
            func_0x0001072962ac(&puStack_378);
            func_0x0001072ba99c(param_3 + 0x108);
            func_0x000107348ee8();
            ppuStack_390 = &puStack_378;
            uStack_388 = 0;
            ppuStack_358 = ppuVar5;
            while (lStack_350 = lVar9, ppuStack_358 != (undefined **)0x0) {
              func_0x000107774144();
              func_0x000107277488(&uStack_130,auStack_170);
              func_0x00010777411c(auStack_a8);
              func_0x000107774130();
              func_0x0001077741a8();
              func_0x000104c2f714(auStack_a8);
              func_0x000107774190();
              func_0x000104c2f714(auStack_170);
              puVar7 = &uStack_130;
              func_0x000104c2fe00(puVar7,param_2 + 0x12);
              func_0x000107774130();
              func_0x0001072955a4(puVar7 + 1,lVar9 + 0x40);
              func_0x000104c2f714(&uStack_130);
              func_0x0001077592e8(&uStack_130,param_5);
              uVar3 = iStack_b8 == 1;
              if ((bool)uVar3) {
                puVar7 = &uStack_130;
                func_0x0001073405dc(puVar7);
                func_0x0001077527e4(auStack_2c8,lVar9,puVar7);
              }
              else {
                func_0x000107774144();
                func_0x000104c318bc(auStack_2c8,auStack_170);
                uStack_228 = 0;
                func_0x000104c2f714(auStack_170);
              }
              func_0x000107774114();
              func_0x0001077527b8(&uStack_220,auStack_2c8);
              func_0x000107296400(&uStack_130,ppuStack_390,&uStack_220);
              uStack_380 = auStack_128[0];
              uStack_388 = uStack_130;
              func_0x0001072963cc(&uStack_388);
              func_0x00010729651c(&uStack_220);
              func_0x00010726aef4(auStack_2c8);
              func_0x0001072963cc(&ppuStack_358);
              lVar9 = lStack_350;
            }
          }
          func_0x00010777411c(&uStack_220);
          func_0x0001077740d4();
          func_0x0001077740f0();
          func_0x0001077740f8();
          func_0x0001077740d4();
          func_0x0001077740f0();
          ppuVar4 = &puStack_378;
          func_0x000107278fec(&uStack_220);
          *(double *)(param_1 + 0x18) = dStack_218;
          *(undefined8 *)(param_1 + 0x10) = uStack_220;
          uStack_220 = 0;
          dStack_218 = 0.0;
          func_0x0001077741d8(9);
          func_0x00010726b264();
          ppuVar5 = &puStack_378;
          func_0x00010726ae88();
        }
        goto LAB_107772dd4;
      }
      goto LAB_107772dc8;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    uVar3 = 1;
  }
  else {
LAB_107772dc8:
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *(undefined4 *)(param_1 + 0x78) = 1;
LAB_107772dd4:
  func_0x0001077741c0();
  func_0x0001077740b0(uStack_70);
  if ((bool)uVar3) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_378;
  func_0x000107277d70();
  func_0x0001077741c0();
  func_0x0001077740e0();
  ppuVar4 = (undefined **)ppuVar4[3];
  if (ppuVar4 == (undefined **)0x0) {
    func_0x000104bfeb48(0,ppuVar5[9]);
    ppuVar5 = (undefined **)ppuVar4[3];
    if (ppuVar5 == ppuVar4) {
      lVar9 = 0x20;
    }
    else {
      if (ppuVar5 == (undefined **)0x0) {
        return ppuVar4;
      }
      lVar9 = 0x28;
    }
    (**(code **)(*ppuVar5 + lVar9))();
    return ppuVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar4 + 0x30))();
  return ppuVar4;
}



/* Entry: 107773d14; end: 107773d27;  */

void FUN_107773d14(void)

{
  func_0x000107773dbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107773ecc; end: 107773edf;  */

undefined ** FUN_107773ecc(void)

{
  return &PTR_DAT_1109d6a38;
}



/* Entry: 1077741ec; end: 107774747;  */

void FUN_1077741ec(undefined1 *param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  undefined1 in_ZR;
  int iVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  byte bVar17;
  uint6 uVar18;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  undefined8 uVar19;
  byte bVar25;
  undefined1 *puStack_268;
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [8];
  undefined4 uStack_248;
  undefined1 auStack_240 [16];
  byte bStack_230;
  ulong uStack_220;
  long lStack_218;
  char *pcStack_210;
  ulong uStack_208;
  undefined1 auStack_200 [8];
  undefined4 uStack_1f8;
  char *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1d8;
  char *pcStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1b8;
  char *pcStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined4 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined4 uStack_158;
  char *pcStack_150;
  undefined8 uStack_148;
  undefined4 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined4 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined4 uStack_f8;
  char *pcStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  
  uStack_90 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = (undefined8 *)0x1137262c0;
  puVar7 = puVar11;
  uStack_220 = param_2;
  lStack_218 = param_3;
  if ((bRam00000001137262b8 & 1) == 0) {
    iVar5 = 0x137262b8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      pcStack_210 = "null";
      uStack_208 = 4;
      uStack_1f8 = 0;
      pcStack_1f0 = "number";
      uStack_1e8 = 6;
      uStack_1d8 = 1;
      pcStack_1d0 = "boolean";
      uStack_1c8 = 7;
      uStack_1b8 = 2;
      pcStack_1b0 = "string";
      uStack_1a8 = 6;
      uStack_198 = 3;
      puStack_190 = &DAT_10f68f0f0;
      uStack_188 = 5;
      uStack_178 = 4;
      puStack_170 = &DAT_10f365d6f;
      uStack_168 = 6;
      uStack_158 = 5;
      pcStack_150 = "value";
      uStack_148 = 5;
      uStack_138 = 6;
      puStack_130 = &UNK_10f417bc1;
      uStack_128 = 8;
      uStack_118 = 8;
      puStack_110 = &UNK_10f417bca;
      uStack_108 = 9;
      uStack_f8 = 9;
      pcStack_f0 = "error";
      uStack_e8 = 5;
      uStack_d8 = 10;
      puStack_d0 = &UNK_10f417bd4;
      uStack_c8 = 0xd;
      uStack_b8 = 0xb;
      uStack_248 = 6;
      func_0x0001072f5dec(auStack_240,auStack_250);
      pcStack_b0 = "array";
      uStack_a8 = 5;
      func_0x0001072f6ad4(auStack_a0,auStack_240);
      func_0x000107774748(0xd);
      lVar15 = 0;
      do {
        puStack_268 = param_1;
        if (lVar15 == 0x180) goto LAB_107774630;
        puVar6 = (ulong *)((long)&pcStack_210 + lVar15);
        Hint_Prefetch(uRam00000001137262c0,0,2,0);
        puVar7 = puVar11;
        func_0x000100062d08(uRam00000001137262c0,0x1137262c0,*puVar6,
                            *(undefined8 *)(auStack_200 + lVar15 + -8));
        uVar4 = uRam00000001137262d0;
        uVar2 = uRam00000001137262c0;
        lVar14 = 0;
        uVar10 = uRam00000001137262c0 >> 0xc ^ (ulong)puVar7 >> 7;
        bVar3 = (byte)puVar7;
        uVar18 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3)))
                                        )) & 0x7f7f7f7f7f7f;
        while( true ) {
          uVar10 = uVar10 & uVar4;
          uVar19 = *(undefined8 *)(uVar2 + uVar10);
          cVar20 = (char)((ulong)uVar19 >> 8);
          cVar21 = (char)((ulong)uVar19 >> 0x10);
          cVar22 = (char)((ulong)uVar19 >> 0x18);
          cVar23 = (char)((ulong)uVar19 >> 0x20);
          cVar24 = (char)((ulong)uVar19 >> 0x28);
          bVar17 = (byte)((ulong)uVar19 >> 0x30);
          bVar25 = (byte)((ulong)uVar19 >> 0x38);
          for (uVar13 = CONCAT17(-(bVar25 == (bVar3 & 0x7f)),
                                 CONCAT16(-(bVar17 == (bVar3 & 0x7f)),
                                          CONCAT15(-(cVar24 == (char)(uVar18 >> 0x28)),
                                                   CONCAT14(-(cVar23 == (char)(uVar18 >> 0x20)),
                                                            CONCAT13(-(cVar22 ==
                                                                      (char)(uVar18 >> 0x18)),
                                                                     CONCAT12(-(cVar21 ==
                                                                               (char)(uVar18 >> 0x10
                                                                                     )),
                                                                              CONCAT11(-(cVar20 ==
                                                                                        (char)(
                                                  uVar18 >> 8)),-((char)uVar19 == (char)uVar18))))))
                                         )) & 0x8080808080808080; uVar13 != 0;
              uVar13 = uVar13 - 1 & uVar13) {
            uVar8 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
            uVar8 = *puVar6;
            func_0x000107774884(uVar8,*(undefined8 *)(auStack_200 + lVar15 + -8),
                                lRam00000001137262c8 +
                                (uVar10 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) &
                                uVar4) * 0x20);
            if ((uVar8 & 1) != 0) goto LAB_107774624;
          }
          bVar17 = NEON_umaxv(CONCAT17(-(bVar25 == 0x80),
                                       CONCAT16(-(bVar17 == 0x80),
                                                CONCAT15(-(cVar24 == -0x80),
                                                         CONCAT14(-(cVar23 == -0x80),
                                                                  CONCAT13(-(cVar22 == -0x80),
                                                                           CONCAT12(-(cVar21 ==
                                                                                     -0x80),CONCAT11
                                                  (-(cVar20 == -0x80),-((char)uVar19 == -0x80)))))))
                                      ),1);
          if ((bVar17 & 1) != 0) break;
          lVar14 = lVar14 + 8;
          uVar10 = lVar14 + uVar10;
        }
        puVar9 = puVar11;
        func_0x000107774780(0x1137262c0,puVar7);
        puVar1 = (ulong *)(lRam00000001137262c8 + (long)puVar9 * 0x20);
        uVar10 = *puVar6;
        puVar1[1] = *(ulong *)(auStack_200 + lVar15 + -8);
        *puVar1 = uVar10;
        func_0x0001072c9ff4(puVar1 + 2,auStack_200 + lVar15);
LAB_107774624:
        lVar15 = lVar15 + 0x20;
      } while( true );
    }
  }
  do {
    lVar14 = lStack_218;
    uVar4 = uStack_220;
    Hint_Prefetch(*puVar7,0,2,0);
    puVar9 = puVar7;
    func_0x000100062d08(*puVar7,puVar7,uStack_220,lStack_218);
    puVar11 = (undefined8 *)0x0;
    lVar15 = puVar7[1];
    uVar2 = puVar7[2];
    puVar12 = (undefined1 *)*puVar7;
    uVar10 = (ulong)puVar12 >> 0xc ^ (ulong)puVar9 >> 7;
    bVar3 = (byte)puVar9;
    uVar18 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar10 = uVar10 & uVar2;
      uVar19 = *(undefined8 *)(puVar12 + uVar10);
      cVar20 = (char)((ulong)uVar19 >> 8);
      cVar21 = (char)((ulong)uVar19 >> 0x10);
      cVar22 = (char)((ulong)uVar19 >> 0x18);
      cVar23 = (char)((ulong)uVar19 >> 0x20);
      cVar24 = (char)((ulong)uVar19 >> 0x28);
      bVar17 = (byte)((ulong)uVar19 >> 0x30);
      bVar25 = (byte)((ulong)uVar19 >> 0x38);
      for (uVar13 = CONCAT17(-(bVar25 == (bVar3 & 0x7f)),
                             CONCAT16(-(bVar17 == (bVar3 & 0x7f)),
                                      CONCAT15(-(cVar24 == (char)(uVar18 >> 0x28)),
                                               CONCAT14(-(cVar23 == (char)(uVar18 >> 0x20)),
                                                        CONCAT13(-(cVar22 == (char)(uVar18 >> 0x18))
                                                                 ,CONCAT12(-(cVar21 ==
                                                                            (char)(uVar18 >> 0x10)),
                                                                           CONCAT11(-(cVar20 ==
                                                                                     (char)(uVar18 
                                                  >> 8)),-((char)uVar19 == (char)uVar18)))))))) &
                    0x8080808080808080; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
        uVar8 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar16 = uVar10 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
        uVar8 = uVar4;
        func_0x000107774884(uVar4,lVar14,lVar15 + uVar16 * 0x20);
        puStack_268 = puVar12;
        if ((uVar8 & 1) != 0) {
          func_0x00010776a36c(param_1,lRam00000001137262c8 + uVar16 * 0x20 + 0x10);
          goto LAB_107774328;
        }
        puVar7 = puVar11;
      }
      bVar17 = NEON_umaxv(CONCAT17(-(bVar25 == 0x80),
                                   CONCAT16(-(bVar17 == 0x80),
                                            CONCAT15(-(cVar24 == -0x80),
                                                     CONCAT14(-(cVar23 == -0x80),
                                                              CONCAT13(-(cVar22 == -0x80),
                                                                       CONCAT12(-(cVar21 == -0x80),
                                                                                CONCAT11(-(cVar20 ==
                                                                                          -0x80),-((
                                                  char)uVar19 == -0x80)))))))),1);
      if ((bVar17 & 1) != 0) break;
      puVar11 = puVar11 + 1;
      uVar10 = (long)puVar11 + uVar10;
    }
    puVar6 = &uStack_220;
    func_0x000105394f0c(puVar6,&UNK_10f42710c,6);
    puVar11 = puVar7;
    if (((int)puVar6 == 0) || (lStack_218 == 0)) {
LAB_10777439c:
      *param_1 = 0;
      param_1[0x10] = 0;
    }
    else {
      puVar6 = &uStack_220;
      func_0x000105394f4c(puVar6,lStack_218 + -1,0xffffffffffffffff,">",1);
      if ((int)puVar6 != 0) goto LAB_10777439c;
      func_0x0001000671d4(&uStack_220,6,lStack_218 + -7);
      FUN_1077741ec(auStack_240);
      if ((bStack_230 & 1) == 0) {
        *param_1 = 0;
        param_1[0x10] = 0;
      }
      else {
        func_0x0001072c9ff4(auStack_260,auStack_240);
        func_0x0001072f5dec(&pcStack_210,auStack_260);
        func_0x00010775bfa8(param_1,&pcStack_210);
        func_0x0001072c9884(&pcStack_210);
        func_0x0001072c9884(auStack_260);
      }
      func_0x0001072c9854(auStack_240);
    }
LAB_107774328:
    func_0x0001077749b4(uStack_90);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
LAB_107774630:
    lVar15 = 0x170;
    do {
      func_0x0001072c9884((long)&pcStack_210 + lVar15);
      lVar15 = lVar15 + -0x20;
      in_ZR = lVar15 == -0x10;
    } while (!(bool)in_ZR);
    func_0x0001072c9884(auStack_240);
    func_0x0001072c9884(auStack_250);
    ___cxa_guard_release(0x1137262b8);
    puVar7 = puVar11;
    param_1 = puStack_268;
  } while( true );
}



/* Entry: 1077749c8; end: 107774c37;  */

void FUN_1077749c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [8];
  undefined8 auStack_220 [12];
  undefined4 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined8 auStack_1b0 [12];
  undefined4 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 auStack_140 [12];
  undefined4 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 auStack_d0 [12];
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = 2;
  auStack_d0[0] = param_1;
  func_0x000107776500(auStack_2b8,auStack_d8);
  func_0x00010048a6c8(auStack_2a0,auStack_2b8,&DAT_10f68f19e);
  uStack_e0 = 2;
  auStack_140[0] = param_2;
  func_0x000107776500(auStack_2d0,auStack_148);
  func_0x00010533a9c0(auStack_288,auStack_2a0,auStack_2d0);
  func_0x00010048a6c8(auStack_270,auStack_288,&DAT_10f68f19e);
  uStack_150 = 2;
  auStack_1b0[0] = param_3;
  func_0x000107776500(auStack_2e8,auStack_1b8);
  func_0x00010533a9c0(auStack_258,auStack_270,auStack_2e8);
  func_0x00010048a6c8(auStack_240,auStack_258,&DAT_10f68f19e);
  uStack_1c0 = 2;
  auStack_220[0] = param_4;
  func_0x000107776500(auStack_300,auStack_228);
  func_0x00010533a9c0(param_5,auStack_240,auStack_300);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_300);
  func_0x00010726af18(auStack_220);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_240);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_258);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2e8);
  func_0x00010726af18(auStack_1b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_270);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_288);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2d0);
  func_0x00010726af18(auStack_140);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2b8);
  puVar1 = auStack_d0;
  func_0x00010726af18(puVar1);
  func_0x000107774dec(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_300);
  func_0x00010726af18(auStack_220);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_240);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_258);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2e8);
  func_0x00010726af18(auStack_1b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_270);
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_288);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2d0);
    func_0x00010726af18(auStack_140);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2b8);
    func_0x00010726af18(auStack_d0);
    __Unwind_Resume(puVar1);
  } while( true );
}



/* Entry: 10777512c; end: 1077751c7;  */

void FUN_10777512c(long param_1)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long lVar2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010777d250();
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_48 = extraout_x8;
  func_0x0001074b01dc(&uStack_d0,4);
  for (lVar2 = 0; uVar1 = lVar2 == 0x20, !(bool)uVar1; lVar2 = lVar2 + 8) {
    uStack_b0 = *(undefined8 *)(param_1 + lVar2);
    uStack_50 = 2;
    func_0x00010777d7d8();
    func_0x00010777d640();
  }
  func_0x00010777d83c();
  func_0x00010777d9b8();
  func_0x00010777d23c(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d9b8();
  func_0x00010777d638();
  func_0x00010777d5d0();
  func_0x00010777d700();
  func_0x000107777824();
  func_0x00010777d3f4();
  func_0x00010777d71c();
  func_0x00010777d6f8();
  return;
}



/* Entry: 107775368; end: 1077753a3;  */

void FUN_107775368(undefined8 param_1,undefined8 param_2)

{
  func_0x00010777d5d0();
  func_0x00010777d700();
  func_0x000107777824(param_1,param_2,9);
  func_0x00010777d3f4();
  func_0x00010777d71c();
  func_0x00010777d6f8();
  return;
}



/* Entry: 107775618; end: 10777566b;  */

void FUN_107775618(void)

{
  func_0x00010777d3b8(6);
  func_0x00010777d3f4();
  func_0x00010777d71c();
  func_0x00010777d6f8();
  return;
}



/* Entry: 10777590c; end: 107775b6b;  */

void FUN_10777590c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_2;
  func_0x000107775930(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1077760fc; end: 1077762ab;  */

undefined8 * FUN_1077760fc(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  char *pcVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  long extraout_x10;
  long extraout_x10_00;
  undefined8 *unaff_x19;
  long lVar10;
  undefined8 *unaff_x20;
  undefined8 auStack_b0 [3];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 in_stack_ffffffffffffffd8;
  
  func_0x00010777d224();
  iVar3 = *(int *)(param_1 + 0xd);
  uVar5 = iVar3 == 7;
  switch(iVar3) {
  case 0:
    func_0x00010777d20c();
    if ((bool)uVar5) {
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      uStack_38 = 0;
      *(undefined4 *)(unaff_x19 + 5) = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
      unaff_x19[6] = 0xffffffffffffffff;
      return unaff_x19;
    }
    break;
  case 1:
    bVar6 = *(char *)(extraout_x9 + 8) == '\0';
    pcVar9 = "true";
    if (bVar6) {
      pcVar9 = "false";
    }
    func_0x00010777d20c();
    if (bVar6) {
      func_0x000100060934(pcVar9);
      unaff_x19[6] = 0xffffffffffffffff;
      return unaff_x19;
    }
    break;
  case 2:
    auStack_b0[0] = *(undefined8 *)(extraout_x9 + 8);
    func_0x000107330414(&uStack_98,auStack_b0);
    goto code_r0x000107776200;
  case 3:
  case 7:
    func_0x00010777d620(in_stack_ffffffffffffffd8);
    if (extraout_x10 == extraout_x8) {
      func_0x0001000d03a8();
      func_0x000104c2feb0();
      unaff_x19[6] = 0xffffffffffffffff;
      func_0x000104c2fe38();
      unaff_x19[6] = unaff_x20;
      return unaff_x19;
    }
    break;
  case 4:
    FUN_10785de1c(&uStack_98,extraout_x9 + 8);
code_r0x000107776200:
    func_0x0001072625b4();
    func_0x00010777dbb8();
    param_1 = unaff_x19;
code_r0x000107776280:
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    break;
  case 5:
    uStack_88 = *(undefined8 *)(extraout_x9 + 0x10);
    uStack_90 = *(undefined8 *)(extraout_x9 + 8);
    if (*(long *)(extraout_x9 + 0x10) != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777da6c();
    goto LAB_10777626c;
  case 6:
    func_0x00010777d620(in_stack_ffffffffffffffd8);
    if (extraout_x10_00 == extraout_x8_00) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      lVar2 = *(long *)(extraout_x9_00 + 0x10);
      for (lVar10 = *(long *)(extraout_x9_00 + 8); lVar10 != lVar2; lVar10 = lVar10 + 0x120) {
        func_0x00010772b8e8(&uStack_48,lVar10);
      }
      func_0x0001072625b4();
      puVar7 = &uStack_48;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7);
      return puVar7;
    }
    break;
  default:
    unaff_x20 = &uStack_98;
    uVar5 = iVar3 == 8;
    if ((bool)uVar5) {
      func_0x0001075726b8(&uStack_90,extraout_x9 + 8);
      func_0x00010777da6c();
    }
    else {
      func_0x0001074fd134(&uStack_90,extraout_x9 + 8);
      func_0x00010777da6c();
    }
LAB_10777626c:
    func_0x0001072625b4();
    func_0x00010777dab8();
    func_0x00010777d648();
    param_1 = unaff_x19;
    goto code_r0x000107776280;
  }
  ___stack_chk_fail();
  func_0x00010777d380();
  func_0x00010777d638();
  uVar4 = *(uint *)(param_1 + 0xd);
  if (uVar4 < 4) {
    puVar8 = (&PTR_DAT_1109d6b88)[uVar4];
  }
  else {
    puVar8 = &UNK_10f4271a1;
    if (uVar4 != 7) {
      puVar8 = &UNK_10f427199;
    }
    puVar1 = &DAT_10f42718c;
    if (uVar4 != 6) {
      puVar1 = puVar8;
    }
    puVar8 = &UNK_10f427193;
    if (uVar4 != 4) {
      puVar8 = puVar1;
    }
  }
  func_0x00010002b82c(extraout_x8_01,puVar8);
  func_0x000107c613d0(puVar8);
  func_0x000107c60c50(unaff_x20);
  return unaff_x20;
}



/* Entry: 107776ff8; end: 10777713b;  */

void FUN_107776ff8(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined1 extraout_w8;
  undefined1 uVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined1 auStack_428 [24];
  undefined8 *puStack_410;
  undefined4 uStack_408;
  undefined1 uStack_404;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  undefined *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d0 [4];
  undefined8 auStack_3b0 [8];
  undefined8 uStack_370;
  undefined8 uStack_368;
  byte bStack_330;
  undefined8 uStack_328;
  undefined1 ***pppuStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 auStack_298 [15];
  undefined1 **ppuStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 auStack_1e0 [6];
  undefined8 auStack_1b0 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  byte bStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined8 auStack_c0 [6];
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte bStack_58;
  undefined8 uStack_48;
  
  func_0x00010777d250();
  iVar1 = *(int *)(param_1 + 0x68);
  uStack_48 = extraout_x8;
  if ((((((iVar1 == 0) || (in_ZR = 1, iVar1 == 1)) || (in_ZR = 1, iVar1 == 2)) ||
       ((in_ZR = 1, iVar1 == 3 || (in_ZR = 1, iVar1 == 4)))) || (in_ZR = 1, iVar1 == 5)) ||
     (((in_ZR = 1, iVar1 == 6 || (in_ZR = 1, iVar1 == 7)) || (in_ZR = iVar1 == 8, (bool)in_ZR)))) {
    func_0x00010777d724();
  }
  else {
    func_0x00010777dcb0();
    param_1 = param_1 + 8;
    func_0x000107348ee8();
    func_0x00010777dc10();
    puVar4 = unaff_x21;
    unaff_x21 = puStack_c8;
    while (param_1 != 0) {
      puStack_c8 = unaff_x21;
      func_0x00010777db48(&uStack_90);
      func_0x000107323900();
      bVar3 = bStack_58;
      if ((bStack_58 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        func_0x00010777de30();
        func_0x000107536058();
        param_2 = &uStack_90;
        func_0x000107262f3c();
      }
      func_0x00010724b3d8(&uStack_90);
      if (bVar3 == 0) {
        func_0x00010777d890();
        goto LAB_107777100;
      }
      func_0x00010777db40();
      puVar4 = unaff_x21;
      unaff_x21 = puStack_c8;
      param_1 = lStack_d0;
    }
    param_2 = auStack_c0;
    func_0x000107535424(&uStack_90);
    unaff_x19[1] = uStack_88;
    *unaff_x19 = uStack_90;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010777d960();
    func_0x00010733d9dc(&uStack_90);
    unaff_x21 = puVar4;
LAB_107777100:
    func_0x00010733dda0();
  }
  func_0x00010777d23c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = auStack_c0;
  func_0x00010733dda0();
  func_0x00010777d9d0();
  puStack_d8 = &UNK_10777713c;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010777d250();
  iVar1 = *(int *)(puVar4 + 0xd);
  uStack_128 = extraout_x8_00;
  if (((((iVar1 == 0) || (in_ZR = 1, iVar1 == 1)) || (in_ZR = 1, iVar1 == 2)) ||
      ((in_ZR = 1, iVar1 == 3 || (in_ZR = 1, iVar1 == 4)))) ||
     (((in_ZR = 1, iVar1 == 5 || ((in_ZR = 1, iVar1 == 6 || (in_ZR = 1, iVar1 == 7)))) ||
      (in_ZR = iVar1 == 8, (bool)in_ZR)))) {
    func_0x00010777d724();
  }
  else {
    func_0x00010777dcb0();
    puVar4 = puVar4 + 1;
    func_0x000107348ee8();
    func_0x00010777dc10();
    puVar2 = unaff_x21;
    unaff_x21 = puStack_1e8;
    while (puVar4 != (undefined8 *)0x0) {
      puStack_1e8 = unaff_x21;
      func_0x00010777da30(auStack_1b0);
      param_2 = auStack_1b0;
      func_0x00010729d394(&uStack_170);
      func_0x000104c3323c(auStack_1b0);
      bVar3 = bStack_130;
      if ((bStack_130 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        func_0x00010777de30();
        func_0x0001075365e0();
        param_2 = &uStack_170;
        func_0x0001072d80fc();
      }
      func_0x000107267ed0(&uStack_170);
      if (bVar3 == 0) {
        func_0x00010777d890();
        goto code_r0x00010777726c;
      }
      func_0x00010777db40();
      puVar2 = unaff_x21;
      unaff_x21 = puStack_1e8;
      puVar4 = puStack_1f0;
    }
    param_2 = auStack_1e0;
    func_0x000107535570(&uStack_170);
    unaff_x19[1] = uStack_168;
    *unaff_x19 = uStack_170;
    uStack_170 = 0;
    uStack_168 = 0;
    func_0x00010777d960();
    func_0x00010733c27c(&uStack_170);
    unaff_x21 = puVar2;
code_r0x00010777726c:
    func_0x00010733c730();
  }
  func_0x00010777d23c(uStack_128);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = auStack_1e0;
  func_0x00010733c730();
  func_0x00010777d9d0();
  ppuVar8 = &puStack_2d0;
  ppuVar6 = &puStack_2d0;
  ppuVar7 = &puStack_2d0;
  puStack_1f8 = &UNK_1077772a8;
  ppuStack_200 = &puStack_e0;
  func_0x00010777d1f4();
  puStack_2d0 = &UNK_10e52b660;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  func_0x000104c2db28();
  puStack_2b0 = puVar4;
  while (puVar4 = param_2, puStack_2a8 = puVar4, puStack_2b0 != (undefined8 *)0x0) {
    func_0x00010777db48(&uStack_2a0);
    func_0x0001077765a4();
    ppuVar5 = &puStack_2d0;
    func_0x0001072baf4c(&puStack_2d0,puVar4);
    func_0x00010726cda0((undefined1 *)((long)ppuVar5 + 8),auStack_298);
    func_0x00010777d660();
    func_0x000104c2de10(&puStack_2b0);
    param_2 = puStack_2a8;
    unaff_x21 = puVar4;
  }
  func_0x000107278fec(&uStack_2a0);
  unaff_x19[2] = auStack_298[0];
  unaff_x19[1] = uStack_2a0;
  uStack_2a0 = 0;
  auStack_298[0] = 0;
  *(undefined4 *)(unaff_x19 + 0xd) = 9;
  func_0x00010726b264(&uStack_2a0);
  func_0x00010726ae88();
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726ae88();
  func_0x00010777d638();
  puStack_2d8 = &UNK_107777380;
  pppuStack_2e0 = &ppuStack_200;
  func_0x00010777d250();
  iVar1 = *(int *)(ppuVar7 + 0xd);
  uStack_328 = extraout_x8_01;
  if ((((iVar1 == 0) || (in_ZR = 1, iVar1 == 1)) || (in_ZR = 1, iVar1 == 2)) ||
     ((((in_ZR = 1, iVar1 == 3 || (in_ZR = 1, iVar1 == 4)) ||
       ((in_ZR = 1, iVar1 == 5 || ((in_ZR = 1, iVar1 == 6 || (in_ZR = 1, iVar1 == 7)))))) ||
      (in_ZR = iVar1 == 8, (bool)in_ZR)))) {
    func_0x00010777d724();
  }
  else {
    func_0x00010777da84();
    func_0x000104c32780(auStack_3d0);
    func_0x000107348ee8();
    func_0x00010777dc10();
    while (unaff_x21 != (undefined8 *)0x0) {
      func_0x00010777da30(auStack_3b0);
      ppuVar8 = (undefined **)auStack_3b0;
      func_0x00010729d394(&uStack_370);
      func_0x000104c3323c(auStack_3b0);
      bVar3 = bStack_330;
      if ((bStack_330 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        func_0x00010777de30();
        func_0x000107269164();
        ppuVar8 = (undefined **)&uStack_370;
        func_0x0001072d80fc();
      }
      func_0x000107267ed0(&uStack_370);
      if (bVar3 == 0) {
        func_0x00010777d890();
        goto code_r0x0001077774b4;
      }
      func_0x00010777db40();
      unaff_x21 = puStack_3e0;
    }
    ppuVar8 = (undefined **)auStack_3d0;
    func_0x000104c33260(&uStack_370);
    ppuVar6[1] = (undefined *)uStack_368;
    *ppuVar6 = (undefined *)uStack_370;
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x00010777d960();
    func_0x000104c335c0(&uStack_370);
code_r0x0001077774b4:
    ppuVar7 = (undefined **)auStack_3d0;
    func_0x000104c33548();
  }
  func_0x00010777d23c(uStack_328);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar4 = auStack_3d0;
    func_0x000104c33548();
    func_0x00010777d9d0();
    puStack_3e8 = &UNK_1077774f4;
    puStack_400 = ppuVar7;
    puStack_3f8 = ppuVar6;
    pppuStack_3f0 = &pppuStack_2e0;
    func_0x0001077752bc();
    uStack_408 = SUB84(ppuVar8,0);
    uStack_404 = (undefined1)((ulong)ppuVar8 >> 0x20);
    puStack_410 = puVar4;
    if (((ulong)ppuVar8 >> 0x20 & 1) == 0) {
      func_0x00010777d748();
      uVar9 = extraout_w8;
    }
    else {
      func_0x0001074e8e04(auStack_428,&puStack_410);
      func_0x00010777ddf0();
      uVar9 = 1;
    }
    *(undefined1 *)(extraout_x8_02 + 0x18) = uVar9;
    return;
  }
  return;
}



/* Entry: 1077776b0; end: 107777823;  */

/* WARNING: Possible PIC construction at 0x0001077777c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010777778c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077777cc) */
/* WARNING: Removing unreachable block (ram,0x0001077777e0) */
/* WARNING: Removing unreachable block (ram,0x000107777808) */
/* WARNING: Removing unreachable block (ram,0x000107777790) */
/* WARNING: Removing unreachable block (ram,0x00010777779c) */
/* WARNING: Removing unreachable block (ram,0x0001077777b8) */
/* WARNING: Removing unreachable block (ram,0x0001077777a4) */

undefined1 * FUN_1077776b0(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [32];
  
  puVar1 = auStack_40;
  puVar3 = (undefined1 *)(ulong)*(uint *)(param_2 + 0x68);
  switch((undefined1 *)(ulong)*(uint *)(param_2 + 0x68)) {
  case (undefined1 *)0x0:
    break;
  case (undefined1 *)0x1:
    puVar3 = (undefined1 *)0x5692161d100b05e5;
    if (*(char *)(param_2 + 8) == '\0') {
      puVar3 = (undefined1 *)0x0;
    }
    break;
  case (undefined1 *)0x2:
    uVar2 = *(ulong *)(param_2 + 8);
    goto code_r0x00010740d3e0;
  case (undefined1 *)0x3:
  case (undefined1 *)0x7:
    func_0x0001073f26dc(&stack0xffffffffffffffe8,param_2 + 8);
    return (undefined1 *)0x0;
  case (undefined1 *)0x4:
    func_0x00010775e080(&stack0xffffffffffffffe8,param_2 + 8);
    return (undefined1 *)0x0;
  case (undefined1 *)0x5:
    func_0x0001078b699c(auStack_40,param_2 + 8);
    func_0x000107571554(auStack_40);
    func_0x00010777dab8();
    puVar3 = puVar1;
    break;
  case (undefined1 *)0x6:
    func_0x00010777d178(&stack0xffffffffffffffe8,param_2 + 8);
    return (undefined1 *)0x0;
  case (undefined1 *)0x8:
    uVar2 = ((*(long **)(param_2 + 8))[1] - **(long **)(param_2 + 8)) / 0x70;
    goto code_r0x00010740d3e0;
  default:
    uVar2 = *(ulong *)(*(long *)(param_2 + 8) + 0x18);
code_r0x00010740d3e0:
    uVar2 = (uVar2 ^ uVar2 >> 0x1e) * -0x40a7b892e31b1a47;
    uVar2 = (uVar2 ^ uVar2 >> 0x1b) * -0x6b2fb644ecceee15;
    return (undefined1 *)(uVar2 ^ uVar2 >> 0x1f);
  }
  return puVar3;
}



/* Entry: 107777a94; end: 107777b0b;  */

void FUN_107777a94(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_2;
  func_0x00010734936c();
  func_0x000104c2db28();
  lStack_30 = param_2;
  lVar1 = lVar3;
  while (lStack_28 = lVar1, lStack_30 != 0) {
    lVar2 = lVar1;
    func_0x000107264c5c(lVar1);
    func_0x000107349430(param_1,lVar2,lVar3,0);
    lVar3 = lVar1 + 0x38;
    func_0x00010777dd7c();
    func_0x000104c2de10(&lStack_30);
    lVar1 = lStack_28;
  }
  func_0x00010777dd84();
  return;
}



/* Entry: 107777da0; end: 107777e4b;  */

void FUN_107777da0(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  ulong uVar3;
  long lVar4;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 **appuStack_48 [3];
  
  func_0x00010777d8bc();
  if (param_3 != 0) {
    if (param_3 >> 0x3d != 0) {
      func_0x0001073b5474();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x107777e30);
      (*pcVar1)();
    }
    pppuVar2 = appuStack_48;
    uVar3 = param_3;
    func_0x0001073b54a0();
    appuStack_48[0] = pppuVar2 + uVar3;
    ppuStack_50 = pppuVar2;
    for (lVar4 = param_3 << 3; ppuStack_58 = pppuVar2, lVar4 != 0; lVar4 = lVar4 + -8) {
      *ppuStack_50 = (undefined8 **)*param_2;
      ppuStack_50 = ppuStack_50 + 1;
      param_2 = param_2 + 1;
    }
  }
  func_0x00010777dc60();
  func_0x000107777e4c();
  func_0x00010777d878();
  func_0x000107535cd4();
  func_0x0001073bc7a8(&ppuStack_58);
  return;
}



/* Entry: 107778134; end: 107778147;  */

void FUN_107778134(void)

{
  func_0x000107778154();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107778350; end: 1077783d7;  */

void FUN_107778350(long *param_1,undefined8 *param_2)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int extraout_w8;
  undefined8 extraout_x8;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int extraout_w10;
  undefined8 unaff_x19;
  long *unaff_x21;
  undefined8 unaff_x22;
  long lVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar14;
  undefined *puVar15;
  long lVar16;
  byte abStack_380 [512];
  long alStack_180 [16];
  undefined8 ******ppppppuStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [24];
  byte bStack_b8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_38;
  
  pbVar3 = auStack_d0;
  pppppppuVar14 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d224();
  plVar8 = &lStack_a0;
  uStack_98 = *param_2;
  uStack_38 = 2;
  plVar7 = (long *)*param_1;
  func_0x00010777d68c();
  func_0x00010777d648();
  if ((bStack_b8 & 1) == 0) {
    func_0x00010777d724();
  }
  else {
    func_0x00010777d698();
    func_0x00010777d440();
    func_0x00010777d2ec();
    func_0x00010777d89c();
  }
  func_0x00010777d8a4();
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d6ec();
  func_0x00010777d8a4();
  puVar15 = &UNK_1077783d8;
  func_0x00010777d638();
  uVar4 = (int)param_1[0xd] == 3;
  if ((bool)uVar4) {
    plVar8 = plVar7 + 1;
    pbVar3 = abStack_380 + 0x1d0;
    puStack_d8 = &UNK_1077783d8;
    ppppppuStack_e0 = pppppppuVar14;
    func_0x00010777d1f4(plVar8,param_1 + 1);
    unaff_x21 = alStack_180;
    param_1 = alStack_180;
    func_0x0001072ddd58();
    plVar7 = (long *)*plVar8;
    func_0x00010777d68c();
    func_0x00010777d640();
    if ((abStack_380[0x1e8] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
    }
    func_0x00010777d8a4();
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    puVar15 = &UNK_107778484;
    func_0x00010777d638();
    pppppppuVar14 = &ppppppuStack_e0;
  }
  uVar4 = (int)param_1[0xd] == 4;
  if ((bool)uVar4) {
    plVar5 = plVar7 + 1;
    param_1 = param_1 + 1;
    *(long **)(pbVar3 + -0x20) = plVar8;
    *(undefined8 *)(pbVar3 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar14;
    *(undefined **)(pbVar3 + -8) = puVar15;
    pppppppuVar14 = (undefined8 *******)(pbVar3 + -0x10);
    func_0x00010777d224();
    plVar8 = (long *)(pbVar3 + -0xa0);
    lVar10 = *param_1;
    *(long *)(pbVar3 + -0x90) = param_1[1];
    *(long *)(pbVar3 + -0x98) = lVar10;
    *(undefined4 *)(pbVar3 + -0x38) = 4;
    plVar7 = (long *)*plVar5;
    func_0x00010777d68c();
    func_0x00010777d648();
    if ((pbVar3[-0xb8] & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar5;
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
      param_1 = plVar5;
    }
    func_0x00010777d8a4();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    puVar15 = &UNK_107778530;
    func_0x00010777d638();
    pbVar3 = pbVar3 + -0xd0;
  }
  *(undefined8 *)(pbVar3 + -0x60) = unaff_x28;
  *(undefined8 *)(pbVar3 + -0x58) = unaff_x27;
  *(undefined8 *)(pbVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(pbVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(pbVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(pbVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(pbVar3 + -0x30) = unaff_x22;
  *(long **)(pbVar3 + -0x28) = unaff_x21;
  *(long **)(pbVar3 + -0x20) = plVar8;
  *(undefined8 *)(pbVar3 + -0x18) = unaff_x19;
  *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar14;
  *(undefined **)(pbVar3 + -8) = puVar15;
  plVar8 = plVar7;
  func_0x00010777d250();
  *(undefined8 *)(pbVar3 + -0x70) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar4) {
    lVar10 = param_1[2];
    lVar16 = param_1[1];
    *(long *)(pbVar3 + -0xd0) = param_1[2];
    *(long *)(pbVar3 + -0xd8) = lVar16;
    if (lVar10 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc30();
    func_0x00010777d7a0();
    func_0x00010777d640();
    if ((pbVar3[-0x100] & 1) == 0) goto code_r0x0001077787a0;
    func_0x00010777d818();
    func_0x00010777d550();
code_r0x000107778790:
    func_0x00010777d2ec();
    func_0x0001072dbd40(pbVar3 + -0xf8);
code_r0x0001077787a4:
    func_0x0001072dbe34(pbVar3 + -0x110);
  }
  else {
    uVar4 = extraout_w8 == 6;
    if ((bool)uVar4) {
      func_0x000107348eb0(pbVar3 + -0xd8,param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((pbVar3[-0x100] & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
code_r0x0001077787a0:
      func_0x00010777d724();
      goto code_r0x0001077787a4;
    }
    uVar4 = extraout_w8 == 7;
    if ((bool)uVar4) {
      func_0x000107348ecc(pbVar3 + -0xd8,param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((pbVar3[-0x100] & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
      goto code_r0x0001077787a0;
    }
    uVar4 = extraout_w8 == 8;
    if (!(bool)uVar4) {
      func_0x0001074fd134(pbVar3 + -0xd8,param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((pbVar3[-0x100] & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
      goto code_r0x0001077787a0;
    }
    *(undefined8 *)(pbVar3 + -0x108) = 0;
    *(undefined8 *)(pbVar3 + -0x100) = 0;
    *(undefined8 *)(pbVar3 + -0x110) = 0;
    lVar10 = *(long *)param_1[1];
    lVar16 = ((long *)param_1[1])[1];
    if (lVar16 - lVar10 != 0) {
      uVar6 = (lVar16 - lVar10) / 0x70;
      if (uVar6 >> 0x3c != 0) {
        func_0x000107778164();
        goto code_r0x00010777880c;
      }
      *(byte **)(pbVar3 + -0xc0) = pbVar3 + -0x100;
      func_0x000107778178();
      *(ulong *)(pbVar3 + -0xe0) = uVar6;
      *(ulong *)(pbVar3 + -0xd8) = uVar6;
      *(ulong *)(pbVar3 + -0xd0) = uVar6;
      *(ulong *)(pbVar3 + -200) = uVar6 + (long)plVar8 * 0x10;
      func_0x00010777dd9c();
      func_0x00010777dd68();
      lVar10 = *(long *)param_1[1];
      lVar16 = ((long *)param_1[1])[1];
    }
    do {
      uVar4 = lVar10 == lVar16;
      if ((bool)uVar4) {
        func_0x000107778054(pbVar3 + -0xe0,pbVar3 + -0x110);
        func_0x00010777d58c();
        func_0x00010777d960();
        FUN_10773b158(pbVar3 + -0xe0);
        goto code_r0x0001077787f0;
      }
      lVar9 = *plVar7;
      func_0x0001077754c8(pbVar3 + -0xf8,lVar10);
      bVar1 = pbVar3[-0xe8];
      if ((bVar1 & 1) != 0) {
        uVar6 = *(ulong *)(pbVar3 + -0x108);
        uVar11 = *(ulong *)(pbVar3 + -0x100);
        uVar4 = uVar6 == uVar11;
        if (uVar6 < uVar11) {
          func_0x0001072f64f4(uVar6,pbVar3 + -0xf8);
          lVar9 = uVar6 + 0x10;
        }
        else {
          lVar13 = uVar6 - *(long *)(pbVar3 + -0x110);
          uVar6 = (lVar13 >> 4) + 1;
          if (uVar6 >> 0x3c != 0) goto code_r0x000107778800;
          uVar11 = uVar11 - *(long *)(pbVar3 + -0x110);
          uVar12 = (long)uVar11 >> 3;
          if ((ulong)((long)uVar11 >> 3) <= uVar6) {
            uVar12 = uVar6;
          }
          uVar4 = uVar11 == 0x7ffffffffffffff0;
          if (0x7fffffffffffffef < uVar11) {
            uVar12 = 0xfffffffffffffff;
          }
          *(byte **)(pbVar3 + -0xc0) = pbVar3 + -0x100;
          if (uVar12 == 0) {
            uVar12 = 0;
            lVar9 = 0;
          }
          else {
            func_0x000107778178();
          }
          lVar13 = uVar12 + lVar13;
          *(ulong *)(pbVar3 + -0xe0) = uVar12;
          *(long *)(pbVar3 + -0xd8) = lVar13;
          *(long *)(pbVar3 + -0xd0) = lVar13;
          *(ulong *)(pbVar3 + -200) = uVar12 + lVar9 * 0x10;
          func_0x0001072f64f4(lVar13,pbVar3 + -0xf8);
          *(long *)(pbVar3 + -0xd0) = lVar13 + 0x10;
          func_0x00010777dd9c();
          lVar9 = *(long *)(pbVar3 + -0x108);
          func_0x00010777dd68();
        }
        *(long *)(pbVar3 + -0x108) = lVar9;
      }
      func_0x0001072dbe34(pbVar3 + -0xf8);
      lVar10 = lVar10 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777db54();
code_r0x0001077787f0:
    func_0x000107778278(pbVar3 + -0x110);
  }
  func_0x00010777d23c(*(undefined8 *)(pbVar3 + -0x70));
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
code_r0x000107778800:
  func_0x000107778164();
code_r0x00010777880c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107778810);
  (*pcVar2)();
}



/* Entry: 1077789e0; end: 107778aa3;  */

void FUN_1077789e0(void)

{
  func_0x0001077789f8();
  return;
}



/* Entry: 107778f0c; end: 107778f2b;  */

void FUN_107778f0c(long *param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 in_ZR;
  undefined1 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 uVar19;
  undefined1 extraout_w8;
  undefined1 uVar20;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  int extraout_w8_08;
  long lVar21;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *unaff_x19;
  undefined4 uVar22;
  ulong unaff_x20;
  long *unaff_x21;
  undefined1 *puVar23;
  undefined1 *unaff_x22;
  undefined1 *puVar24;
  undefined8 unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined *puVar25;
  code *pcVar26;
  long lVar27;
  undefined8 uVar28;
  byte abStack_1590 [5340];
  undefined4 uStack_b4;
  long alStack_b0 [13];
  undefined4 uStack_48;
  
  uVar22 = (undefined4)unaff_x20;
  if ((int)param_1[0xd] == 0) {
    plVar14 = param_2 + 1;
    param_2 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4();
    uStack_48 = 0;
    unaff_x21 = alStack_b0;
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      uStack_b4 = uVar22;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)unaff_x19 = 0;
    }
    *(bool *)(unaff_x19 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&LAB_107778fa0;
    param_1 = plVar14;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_1590 + 0x14d0);
    unaff_x19 = plVar14;
  }
  uVar9 = (int)param_1[0xd] == 1;
  if ((bool)uVar9) {
    plVar14 = param_2 + 1;
    param_2 = param_1 + 1;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
    func_0x00010777dae0();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      *(undefined4 *)((long)register0x00000008 + -0xb4) = uVar22;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)unaff_x19 = 0;
    }
    *(bool *)(unaff_x19 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&UNK_107779038;
    param_1 = plVar14;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar14;
  }
  uVar9 = (int)param_1[0xd] == 2;
  if ((bool)uVar9) {
    plVar14 = param_2 + 1;
    param_2 = param_1 + 1;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
    func_0x00010777dacc();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      *(undefined4 *)((long)register0x00000008 + -0xb4) = uVar22;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)unaff_x19 = 0;
    }
    *(bool *)(unaff_x19 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&UNK_1077790d0;
    param_1 = plVar14;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar14;
  }
  uVar9 = (int)param_1[0xd] == 3;
  if ((bool)uVar9) {
    plVar14 = param_2 + 1;
    param_2 = param_1 + 1;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    func_0x00010777dd10();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      *(undefined4 *)((long)register0x00000008 + -0xb4) = uVar22;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)unaff_x19 = 0;
    }
    *(bool *)(unaff_x19 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = FUN_107779164;
    param_1 = plVar14;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar14;
  }
  uVar9 = (int)param_1[0xd] == 4;
  if ((bool)uVar9) {
    plVar14 = param_2 + 1;
    param_2 = param_1 + 1;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      *(undefined4 *)((long)register0x00000008 + -0xb4) = uVar22;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)unaff_x19 = 0;
    }
    *(bool *)(unaff_x19 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&LAB_1077791fc;
    param_1 = plVar14;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar14;
  }
  puVar8 = (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar23 = (undefined1 *)((long)register0x00000008 + -0x10);
  plVar14 = param_1;
  func_0x00010777d1f4();
  func_0x00010777da78();
  uVar22 = SUB84(param_1,0);
  if ((bool)uVar9) {
    lVar21 = param_1[2];
    lVar27 = param_1[1];
    *(long *)((long)register0x00000008 + -0xa0) = param_1[2];
    *(long *)((long)register0x00000008 + -0xa8) = lVar27;
    if (lVar21 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d958();
    func_0x00010777d478();
    if ((ulong)param_1 >> 0x20 != 0) {
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
code_r0x000107779334:
    uVar19 = (undefined1)((ulong)param_1 >> 0x20);
    *(undefined1 *)unaff_x19 = 0;
code_r0x000107779368:
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
  }
  else {
    uVar9 = extraout_w8_05 == 6;
    if ((bool)uVar9) {
      unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
code_r0x00010777935c:
      func_0x00010777d2c0();
      func_0x0001072dbd40();
      uVar19 = 1;
      goto code_r0x000107779368;
    }
    uVar9 = extraout_w8_05 == 7;
    if ((bool)uVar9) {
      unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
    uVar9 = extraout_w8_05 == 8;
    if (!(bool)uVar9) {
      unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
    func_0x00010777dce0();
    func_0x00010777d398(param_1[1]);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x0001073b504c();
    unaff_x21 = (long *)((undefined8 *)param_1[1])[1];
    for (param_1 = *(long **)param_1[1]; uVar9 = param_1 == unaff_x21, !(bool)uVar9;
        param_1 = param_1 + 0xe) {
      func_0x00010777ddc4();
      *(int *)((long)register0x00000008 + -0xc0) = (int)puVar3;
      *(char *)((long)register0x00000008 + -0xbc) = (char)((ulong)puVar3 >> 0x20);
      if ((ulong)puVar3 >> 0x20 == 0) {
        func_0x00010777d724();
        goto code_r0x000107779380;
      }
      func_0x00010777d700();
      func_0x0001073b50ac();
    }
    func_0x00010777dac0();
    func_0x000107535bd0();
    func_0x00010777d338();
    func_0x0001072dbd40();
code_r0x000107779380:
    plVar14 = (long *)((long)register0x00000008 + -0xb0);
    func_0x0001056d1ce4();
  }
  func_0x00010777d1dc();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  puVar25 = &UNK_1077793bc;
  func_0x00010777d638();
  if ((int)plVar14[0xd] == 0) {
    plVar15 = param_2 + 1;
    puVar8 = (undefined1 *)((long)register0x00000008 + -0x1b0);
    *(long **)((long)register0x00000008 + -0xe0) = param_1;
    *(long **)((long)register0x00000008 + -0xd8) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0xd0) = puVar23;
    *(undefined **)((long)register0x00000008 + -200) = &UNK_1077793bc;
    puVar23 = (undefined1 *)((long)register0x00000008 + -0xd0);
    func_0x00010777d224(plVar15,plVar14 + 1);
    *(undefined4 *)((long)register0x00000008 + -0x130) = 0;
    param_2 = (long *)*plVar15;
    param_1 = (long *)((long)register0x00000008 + -0x198);
    func_0x00010777d824();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0xf0) & 1) == 0) {
      func_0x00010777d724();
      plVar14 = plVar15;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar14 = plVar15;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_107779450;
    func_0x00010777d638();
  }
  uVar9 = (int)plVar14[0xd] == 1;
  if ((bool)uVar9) {
    plVar15 = param_2 + 1;
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(plVar15,plVar14 + 1);
    func_0x00010777d8d4();
    param_2 = (long *)*plVar15;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar8[-0x30] & 1) == 0) {
      func_0x00010777d724();
      plVar14 = plVar15;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar14 = plVar15;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_1077794e4;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xf0;
  }
  uVar9 = (int)plVar14[0xd] == 2;
  if ((bool)uVar9) {
    plVar15 = param_2 + 1;
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(plVar15,plVar14 + 1);
    func_0x00010777d904();
    param_2 = (long *)*plVar15;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar8[-0x30] & 1) == 0) {
      func_0x00010777d724();
      plVar14 = plVar15;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar14 = plVar15;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_107779578;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xf0;
  }
  uVar9 = (int)plVar14[0xd] == 3;
  if ((bool)uVar9) {
    plVar15 = param_2 + 1;
    param_2 = plVar14 + 1;
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(plVar15);
    unaff_x19 = (long *)(puVar8 + -0x60);
    func_0x000104c2fe00();
    func_0x00010777d454();
    func_0x00010777d304();
    func_0x00010777dbd0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    plVar14 = unaff_x19;
    func_0x00010777dbd0();
    puVar25 = &UNK_1077795e4;
    func_0x00010777d638();
    puVar8 = puVar8 + -0x70;
  }
  uVar9 = (int)plVar14[0xd] == 4;
  if ((bool)uVar9) {
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(param_2 + 1,plVar14 + 1);
    func_0x00010777d8ec();
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar8[-0x30] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_107779678;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xf0;
  }
  puVar3 = puVar8 + -0x120;
  *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
  *(ulong *)(puVar8 + -0x48) = unaff_x25;
  *(long **)(puVar8 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar8 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
  *(long **)(puVar8 + -0x28) = unaff_x21;
  *(long **)(puVar8 + -0x20) = param_1;
  *(long **)(puVar8 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar8 + -0x10) = puVar23;
  *(undefined **)(puVar8 + -8) = puVar25;
  puVar23 = puVar8 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar8 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar9) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    puVar17 = (undefined1 *)param_1[1];
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((puVar8[-0x60] & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
    puVar11 = (undefined8 *)(puVar8 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar9 = extraout_w8_06 == 6;
    if ((bool)uVar9) {
      unaff_x22 = puVar8 + -0x110;
      func_0x00010777d6c8();
      puVar17 = (undefined1 *)param_1[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar8[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar9 = extraout_w8_06 == 7;
    if ((bool)uVar9) {
      unaff_x22 = puVar8 + -0x110;
      func_0x00010777d6bc();
      puVar17 = (undefined1 *)param_1[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar8[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uVar9 = extraout_w8_06 == 8;
    if (!(bool)uVar9) {
      unaff_x22 = puVar8 + -0x110;
      func_0x00010777d6d4();
      puVar17 = (undefined1 *)param_1[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar8[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    *(undefined8 *)(puVar8 + -0x90) = 0;
    *(undefined8 *)(puVar8 + -0x88) = 0;
    *(undefined8 *)(puVar8 + -0x98) = 0;
    func_0x00010777d398(unaff_x21[1]);
    func_0x0001072dd514(puVar8 + -0x98);
    func_0x00010777de3c();
    do {
      uVar9 = unaff_x21 == unaff_x24;
      if ((bool)uVar9) {
        puVar17 = puVar8 + -0x98;
        func_0x0001073fb2d4(puVar8 + -0x110);
        lVar21 = *(long *)(puVar8 + -0x110);
        unaff_x19[1] = *(long *)(puVar8 + -0x108);
        *unaff_x19 = lVar21;
        *(undefined8 *)(puVar8 + -0x110) = 0;
        *(undefined8 *)(puVar8 + -0x108) = 0;
        func_0x00010777d960();
        func_0x00010726b09c(puVar8 + -0x110);
        goto code_r0x000107779838;
      }
      puVar17 = (undefined1 *)*param_1;
      func_0x000107323900(puVar8 + -0x110,unaff_x21);
      bVar2 = puVar8[-0xd8];
      unaff_x25 = (ulong)bVar2;
      if ((bVar2 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar17 = puVar8 + -0x110;
        func_0x0001072d17f4(puVar8 + -0x98);
      }
      func_0x00010724b3d8(puVar8 + -0x110);
      unaff_x21 = unaff_x21 + 0xe;
    } while ((bVar2 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779838:
    puVar11 = (undefined8 *)(puVar8 + -0x98);
    func_0x00010726e078();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar8 + -0x58));
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar12 = (undefined8 *)(puVar8 + -0x98);
  func_0x00010724b3d8();
  pcVar26 = (code *)&UNK_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar12 + 0xd) == 0) {
    puVar13 = (undefined8 *)(puVar17 + 8);
    puVar3 = puVar8 + -0x250;
    *(undefined8 *)(puVar8 + -0x150) = unaff_x28;
    *(undefined8 *)(puVar8 + -0x148) = unaff_x27;
    *(undefined8 **)(puVar8 + -0x140) = puVar11;
    *(long **)(puVar8 + -0x138) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x130) = puVar23;
    *(undefined **)(puVar8 + -0x128) = &UNK_1077798bc;
    puVar23 = puVar8 + -0x130;
    func_0x00010777d1f4(puVar13,puVar12 + 1);
    *(undefined4 *)(puVar8 + -0x1e8) = 0;
    puVar17 = (undefined1 *)*puVar13;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar8[-0x160] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar13;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar13;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = FUN_107779964;
    func_0x00010777d638();
    puVar11 = (undefined8 *)(puVar8 + -0x250);
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 1;
  if ((bool)uVar9) {
    puVar13 = (undefined8 *)(puVar17 + 8);
    puVar12 = puVar12 + 1;
    puVar4 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    puVar3[-0x128] = *(undefined1 *)puVar12;
    *(undefined4 *)(puVar3 + -200) = 1;
    puVar17 = (undefined1 *)*puVar13;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar13;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar13;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = (code *)&LAB_107779a1c;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = puVar4;
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 2;
  if ((bool)uVar9) {
    puVar13 = (undefined8 *)(puVar17 + 8);
    puVar12 = puVar12 + 1;
    puVar5 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    *(undefined8 *)(puVar3 + -0x128) = *puVar12;
    *(undefined4 *)(puVar3 + -200) = 2;
    puVar17 = (undefined1 *)*puVar13;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar13;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar13;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = (code *)&UNK_107779ad4;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = puVar5;
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 3;
  if ((bool)uVar9) {
    puVar13 = puVar12 + 1;
    puVar12 = (undefined8 *)(puVar3 + -0x130);
    plVar6 = (long *)(puVar3 + -0x130);
    *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
    *(long **)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4(puVar17 + 8,puVar13);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = (code *)&UNK_107779b94;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = (undefined8 *)(puVar17 + 8);
    unaff_x21 = plVar6;
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 4;
  if ((bool)uVar9) {
    puVar12 = puVar12 + 1;
    puVar7 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    uVar28 = *puVar12;
    *(undefined8 *)(puVar3 + -0x120) = puVar12[1];
    *(undefined8 *)(puVar3 + -0x128) = uVar28;
    *(undefined4 *)(puVar3 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = FUN_107779c4c;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = puVar7;
  }
  puVar8 = puVar3 + -0x150;
  puVar24 = puVar3 + -0x150;
  puVar17 = puVar3 + -0x150;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(ulong *)(puVar3 + -0x48) = unaff_x25;
  *(long **)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar3 + -0x20) = puVar11;
  *(long **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar23;
  *(code **)(puVar3 + -8) = pcVar26;
  puVar23 = puVar3 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar3 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar9) {
    lVar21 = unaff_x21[2];
    lVar27 = unaff_x21[1];
    *(long *)(puVar3 + -0x140) = unaff_x21[2];
    *(long *)(puVar3 + -0x148) = lVar27;
    if (lVar21 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    *(undefined4 *)(puVar3 + -0xe8) = 5;
    puVar18 = (undefined1 *)puVar11[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = (long *)(puVar3 + -0x150);
    puVar17 = unaff_x22;
    if ((puVar3[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = (long *)(puVar3 + -0x150);
      puVar24 = unaff_x22;
      goto LAB_107779dec;
    }
LAB_107779df8:
    func_0x00010777d724();
LAB_107779dfc:
    plVar14 = (long *)(puVar3 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar17;
  }
  else {
    uVar9 = extraout_w8_07 == 6;
    if ((bool)uVar9) {
      func_0x00010777d6c8();
      puVar18 = (undefined1 *)puVar11[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar17 = puVar3 + -0x150;
      if ((puVar3[-0x60] & 1) == 0) goto LAB_107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar24 = puVar3 + -0x150;
LAB_107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar17 = puVar24;
      goto LAB_107779dfc;
    }
    uVar9 = extraout_w8_07 == 7;
    if ((bool)uVar9) {
      func_0x00010777d6bc();
      puVar18 = (undefined1 *)puVar11[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar17 = puVar3 + -0x150;
      if ((puVar3[-0x60] & 1) == 0) goto LAB_107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar24 = puVar3 + -0x150;
      goto LAB_107779dec;
    }
    uVar9 = extraout_w8_07 == 8;
    if (!(bool)uVar9) {
      func_0x00010777d6d4();
      puVar18 = (undefined1 *)puVar11[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((puVar3[-0x60] & 1) == 0) goto LAB_107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto LAB_107779dec;
    }
    *(undefined8 *)(puVar3 + -0xd8) = 0;
    *(undefined8 *)(puVar3 + -0xd0) = 0;
    *(undefined8 *)(puVar3 + -0xe0) = 0;
    func_0x00010777d398(unaff_x21[1]);
    func_0x0001072ac134(puVar3 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar9 = unaff_x21 == unaff_x24;
      if ((bool)uVar9) {
        puVar18 = puVar3 + -0xe0;
        func_0x000107327958(puVar3 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto LAB_107779e40;
      }
      func_0x000107776804(puVar3 + -0xa0,unaff_x21,*puVar11);
      puVar18 = puVar3 + -0xa0;
      func_0x00010729d394(puVar3 + -0x150);
      func_0x000104c3323c(puVar3 + -0xa0);
      bVar2 = puVar3[-0x110];
      if ((bVar2 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar18 = puVar3 + -0x150;
        func_0x0001072d7f34(puVar3 + -0xe0);
      }
      func_0x000107267ed0(puVar3 + -0x150);
      unaff_x21 = unaff_x21 + 0xe;
    } while ((bVar2 & 1) != 0);
    func_0x00010777d890();
LAB_107779e40:
    plVar14 = (long *)(puVar3 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar3 + -0x58));
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  plVar15 = (long *)(puVar3 + -0xa0);
  func_0x000107267ed0();
  puVar25 = &UNK_107779ed8;
  func_0x00010777d9d0();
  uVar10 = (uint)plVar14;
  uVar19 = SUB81(plVar14,0);
  if ((int)plVar15[0xd] == 0) {
    plVar16 = (long *)(puVar18 + 8);
    puVar8 = puVar3 + -0x210;
    *(undefined1 **)(puVar3 + -0x180) = unaff_x22;
    *(long **)(puVar3 + -0x178) = unaff_x21;
    *(long **)(puVar3 + -0x170) = plVar14;
    *(long **)(puVar3 + -0x168) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x160) = puVar23;
    *(undefined **)(puVar3 + -0x158) = &UNK_107779ed8;
    puVar23 = puVar3 + -0x160;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    *(undefined4 *)(puVar3 + -0x198) = 0;
    puVar18 = (undefined1 *)*plVar16;
    unaff_x21 = (long *)(puVar3 + -0x200);
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8;
    }
    else {
      puVar3[-0x201] = uVar19;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_107779f6c;
    plVar15 = plVar16;
    func_0x00010777d638();
    unaff_x19 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 1;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    unaff_x21 = (long *)(puVar8 + -0xb0);
    func_0x00010777dae0();
    puVar18 = (undefined1 *)*plVar16;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8_00;
    }
    else {
      puVar8[-0xb1] = uVar19;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a170;
    plVar15 = plVar16;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 2;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    unaff_x21 = (long *)(puVar8 + -0xb0);
    func_0x00010777dacc();
    puVar18 = (undefined1 *)*plVar16;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar19 = extraout_w8_01;
    }
    else {
      puVar8[-0xb1] = uVar19;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar19 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a208;
    plVar15 = plVar16;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 3;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    plVar14 = plVar16;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    func_0x00010777dd10();
    puVar18 = (undefined1 *)*plVar16;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar16 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar19 = extraout_w8_02;
    }
    else {
      puVar8[-0xb1] = (char)plVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar19 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a2a0;
    plVar15 = plVar14;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar14;
    plVar14 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 4;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    unaff_x21 = (long *)(puVar8 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar14 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar19 = extraout_w8_03;
    }
    else {
      puVar8[-0xb1] = (char)plVar14;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar19 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a338;
    plVar15 = plVar16;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar16;
  }
  uVar10 = (uint)plVar15;
  *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
  *(long **)(puVar8 + -0x28) = unaff_x21;
  *(long **)(puVar8 + -0x20) = plVar14;
  *(long **)(puVar8 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar8 + -0x10) = puVar23;
  *(undefined **)(puVar8 + -8) = puVar25;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar9) {
    func_0x00010777dc50();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_02 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar14 >> 8 & 1) != 0) {
      puVar8[-0xc0] = (char)plVar14;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar19 = extraout_w8_04;
  }
  else {
    uVar9 = extraout_w8_08 == 6;
    if ((bool)uVar9) {
      unaff_x22 = puVar8 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar8[-0xc0] = (char)uVar10;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar9 = extraout_w8_08 == 7;
      if ((bool)uVar9) {
        unaff_x22 = puVar8 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar8[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar9 = extraout_w8_08 == 8;
        if ((bool)uVar9) {
          func_0x00010777dce0();
          func_0x00010777d398(unaff_x21[1]);
          func_0x0001075356bc(puVar8 + -0xb0);
          unaff_x22 = (undefined1 *)((undefined8 *)unaff_x21[1])[1];
          for (puVar23 = *(undefined1 **)unaff_x21[1]; uVar9 = puVar23 == unaff_x22, !(bool)uVar9;
              puVar23 = puVar23 + 0x70) {
            puVar3 = puVar23;
            func_0x000107775a54(puVar23,*plVar14);
            *(short *)(puVar8 + -0xc0) = (short)puVar3;
            if (((uint)puVar3 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar8 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar8 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar8[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar19 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar19;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar8 + -0xd0) = puVar8 + -0x10;
  *(undefined **)(puVar8 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779164; end: 107779187;  */

void FUN_107779164(long *param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 uVar19;
  undefined1 extraout_w8;
  undefined1 uVar20;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  int extraout_w8_08;
  long lVar21;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *unaff_x19;
  undefined4 uVar22;
  ulong unaff_x20;
  long *unaff_x21;
  undefined1 *puVar23;
  undefined1 *unaff_x22;
  undefined1 *puVar24;
  undefined8 unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar25;
  code *pcVar26;
  long lVar27;
  undefined8 uVar28;
  byte abStack_1290 [4572];
  undefined4 uStack_b4;
  long alStack_b0 [16];
  
  uVar9 = (int)param_1[0xd] == 4;
  if ((bool)uVar9) {
    plVar14 = param_2 + 1;
    param_2 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4();
    unaff_x21 = alStack_b0;
    func_0x00010777da1c();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      uStack_b4 = (undefined4)unaff_x20;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)unaff_x19 = 0;
    }
    *(bool *)(unaff_x19 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = &LAB_1077791fc;
    param_1 = plVar14;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_1290 + 0x11d0);
    unaff_x19 = plVar14;
  }
  puVar8 = (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar23 = (undefined1 *)((long)register0x00000008 + -0x10);
  plVar14 = param_1;
  func_0x00010777d1f4();
  func_0x00010777da78();
  uVar22 = SUB84(param_1,0);
  if ((bool)uVar9) {
    lVar21 = param_1[2];
    lVar27 = param_1[1];
    *(long *)((long)register0x00000008 + -0xa0) = param_1[2];
    *(long *)((long)register0x00000008 + -0xa8) = lVar27;
    if (lVar21 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d958();
    func_0x00010777d478();
    if ((ulong)param_1 >> 0x20 != 0) {
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
code_r0x000107779334:
    uVar19 = (undefined1)((ulong)param_1 >> 0x20);
    *(undefined1 *)unaff_x19 = 0;
code_r0x000107779368:
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
  }
  else {
    uVar9 = extraout_w8_05 == 6;
    if ((bool)uVar9) {
      unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
code_r0x00010777935c:
      func_0x00010777d2c0();
      func_0x0001072dbd40();
      uVar19 = 1;
      goto code_r0x000107779368;
    }
    uVar9 = extraout_w8_05 == 7;
    if ((bool)uVar9) {
      unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
    uVar9 = extraout_w8_05 == 8;
    if (!(bool)uVar9) {
      unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
    func_0x00010777dce0();
    func_0x00010777d398(param_1[1]);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x0001073b504c();
    unaff_x21 = (long *)((undefined8 *)param_1[1])[1];
    for (param_1 = *(long **)param_1[1]; uVar9 = param_1 == unaff_x21, !(bool)uVar9;
        param_1 = param_1 + 0xe) {
      func_0x00010777ddc4();
      *(int *)((long)register0x00000008 + -0xc0) = (int)puVar3;
      *(char *)((long)register0x00000008 + -0xbc) = (char)((ulong)puVar3 >> 0x20);
      if ((ulong)puVar3 >> 0x20 == 0) {
        func_0x00010777d724();
        goto code_r0x000107779380;
      }
      func_0x00010777d700();
      func_0x0001073b50ac();
    }
    func_0x00010777dac0();
    func_0x000107535bd0();
    func_0x00010777d338();
    func_0x0001072dbd40();
code_r0x000107779380:
    plVar14 = (long *)((long)register0x00000008 + -0xb0);
    func_0x0001056d1ce4();
  }
  func_0x00010777d1dc();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  puVar25 = &UNK_1077793bc;
  func_0x00010777d638();
  if ((int)plVar14[0xd] == 0) {
    plVar15 = param_2 + 1;
    puVar8 = (undefined1 *)((long)register0x00000008 + -0x1b0);
    *(long **)((long)register0x00000008 + -0xe0) = param_1;
    *(long **)((long)register0x00000008 + -0xd8) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0xd0) = puVar23;
    *(undefined **)((long)register0x00000008 + -200) = &UNK_1077793bc;
    puVar23 = (undefined1 *)((long)register0x00000008 + -0xd0);
    func_0x00010777d224(plVar15,plVar14 + 1);
    *(undefined4 *)((long)register0x00000008 + -0x130) = 0;
    param_2 = (long *)*plVar15;
    param_1 = (long *)((long)register0x00000008 + -0x198);
    func_0x00010777d824();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0xf0) & 1) == 0) {
      func_0x00010777d724();
      plVar14 = plVar15;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar14 = plVar15;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_107779450;
    func_0x00010777d638();
  }
  uVar9 = (int)plVar14[0xd] == 1;
  if ((bool)uVar9) {
    plVar15 = param_2 + 1;
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(plVar15,plVar14 + 1);
    func_0x00010777d8d4();
    param_2 = (long *)*plVar15;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar8[-0x30] & 1) == 0) {
      func_0x00010777d724();
      plVar14 = plVar15;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar14 = plVar15;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_1077794e4;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xf0;
  }
  uVar9 = (int)plVar14[0xd] == 2;
  if ((bool)uVar9) {
    plVar15 = param_2 + 1;
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(plVar15,plVar14 + 1);
    func_0x00010777d904();
    param_2 = (long *)*plVar15;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar8[-0x30] & 1) == 0) {
      func_0x00010777d724();
      plVar14 = plVar15;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar14 = plVar15;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_107779578;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xf0;
  }
  uVar9 = (int)plVar14[0xd] == 3;
  if ((bool)uVar9) {
    plVar15 = param_2 + 1;
    param_2 = plVar14 + 1;
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(plVar15);
    unaff_x19 = (long *)(puVar8 + -0x60);
    func_0x000104c2fe00();
    func_0x00010777d454();
    func_0x00010777d304();
    func_0x00010777dbd0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    plVar14 = unaff_x19;
    func_0x00010777dbd0();
    puVar25 = &UNK_1077795e4;
    func_0x00010777d638();
    puVar8 = puVar8 + -0x70;
  }
  uVar9 = (int)plVar14[0xd] == 4;
  if ((bool)uVar9) {
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(param_2 + 1,plVar14 + 1);
    func_0x00010777d8ec();
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar8[-0x30] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_107779678;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xf0;
  }
  puVar3 = puVar8 + -0x120;
  *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
  *(ulong *)(puVar8 + -0x48) = unaff_x25;
  *(long **)(puVar8 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar8 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
  *(long **)(puVar8 + -0x28) = unaff_x21;
  *(long **)(puVar8 + -0x20) = param_1;
  *(long **)(puVar8 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar8 + -0x10) = puVar23;
  *(undefined **)(puVar8 + -8) = puVar25;
  puVar23 = puVar8 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar8 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar9) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    puVar17 = (undefined1 *)param_1[1];
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((puVar8[-0x60] & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
    puVar11 = (undefined8 *)(puVar8 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar9 = extraout_w8_06 == 6;
    if ((bool)uVar9) {
      unaff_x22 = puVar8 + -0x110;
      func_0x00010777d6c8();
      puVar17 = (undefined1 *)param_1[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar8[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar9 = extraout_w8_06 == 7;
    if ((bool)uVar9) {
      unaff_x22 = puVar8 + -0x110;
      func_0x00010777d6bc();
      puVar17 = (undefined1 *)param_1[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar8[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uVar9 = extraout_w8_06 == 8;
    if (!(bool)uVar9) {
      unaff_x22 = puVar8 + -0x110;
      func_0x00010777d6d4();
      puVar17 = (undefined1 *)param_1[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar8[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    *(undefined8 *)(puVar8 + -0x90) = 0;
    *(undefined8 *)(puVar8 + -0x88) = 0;
    *(undefined8 *)(puVar8 + -0x98) = 0;
    func_0x00010777d398(unaff_x21[1]);
    func_0x0001072dd514(puVar8 + -0x98);
    func_0x00010777de3c();
    do {
      uVar9 = unaff_x21 == unaff_x24;
      if ((bool)uVar9) {
        puVar17 = puVar8 + -0x98;
        func_0x0001073fb2d4(puVar8 + -0x110);
        lVar21 = *(long *)(puVar8 + -0x110);
        unaff_x19[1] = *(long *)(puVar8 + -0x108);
        *unaff_x19 = lVar21;
        *(undefined8 *)(puVar8 + -0x110) = 0;
        *(undefined8 *)(puVar8 + -0x108) = 0;
        func_0x00010777d960();
        func_0x00010726b09c(puVar8 + -0x110);
        goto code_r0x000107779838;
      }
      puVar17 = (undefined1 *)*param_1;
      func_0x000107323900(puVar8 + -0x110,unaff_x21);
      bVar2 = puVar8[-0xd8];
      unaff_x25 = (ulong)bVar2;
      if ((bVar2 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar17 = puVar8 + -0x110;
        func_0x0001072d17f4(puVar8 + -0x98);
      }
      func_0x00010724b3d8(puVar8 + -0x110);
      unaff_x21 = unaff_x21 + 0xe;
    } while ((bVar2 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779838:
    puVar11 = (undefined8 *)(puVar8 + -0x98);
    func_0x00010726e078();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar8 + -0x58));
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar12 = (undefined8 *)(puVar8 + -0x98);
  func_0x00010724b3d8();
  pcVar26 = (code *)&UNK_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar12 + 0xd) == 0) {
    puVar13 = (undefined8 *)(puVar17 + 8);
    puVar3 = puVar8 + -0x250;
    *(undefined8 *)(puVar8 + -0x150) = unaff_x28;
    *(undefined8 *)(puVar8 + -0x148) = unaff_x27;
    *(undefined8 **)(puVar8 + -0x140) = puVar11;
    *(long **)(puVar8 + -0x138) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x130) = puVar23;
    *(undefined **)(puVar8 + -0x128) = &UNK_1077798bc;
    puVar23 = puVar8 + -0x130;
    func_0x00010777d1f4(puVar13,puVar12 + 1);
    *(undefined4 *)(puVar8 + -0x1e8) = 0;
    puVar17 = (undefined1 *)*puVar13;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar8[-0x160] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar13;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar13;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = FUN_107779964;
    func_0x00010777d638();
    puVar11 = (undefined8 *)(puVar8 + -0x250);
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 1;
  if ((bool)uVar9) {
    puVar13 = (undefined8 *)(puVar17 + 8);
    puVar12 = puVar12 + 1;
    puVar4 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    puVar3[-0x128] = *(undefined1 *)puVar12;
    *(undefined4 *)(puVar3 + -200) = 1;
    puVar17 = (undefined1 *)*puVar13;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar13;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar13;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = (code *)&LAB_107779a1c;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = puVar4;
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 2;
  if ((bool)uVar9) {
    puVar13 = (undefined8 *)(puVar17 + 8);
    puVar12 = puVar12 + 1;
    puVar5 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    *(undefined8 *)(puVar3 + -0x128) = *puVar12;
    *(undefined4 *)(puVar3 + -200) = 2;
    puVar17 = (undefined1 *)*puVar13;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar13;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar13;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = (code *)&UNK_107779ad4;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = puVar5;
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 3;
  if ((bool)uVar9) {
    puVar13 = puVar12 + 1;
    puVar12 = (undefined8 *)(puVar3 + -0x130);
    plVar6 = (long *)(puVar3 + -0x130);
    *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
    *(long **)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4(puVar17 + 8,puVar13);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = (code *)&UNK_107779b94;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = (undefined8 *)(puVar17 + 8);
    unaff_x21 = plVar6;
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 4;
  if ((bool)uVar9) {
    puVar12 = puVar12 + 1;
    puVar7 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    uVar28 = *puVar12;
    *(undefined8 *)(puVar3 + -0x120) = puVar12[1];
    *(undefined8 *)(puVar3 + -0x128) = uVar28;
    *(undefined4 *)(puVar3 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = FUN_107779c4c;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = puVar7;
  }
  puVar8 = puVar3 + -0x150;
  puVar24 = puVar3 + -0x150;
  puVar17 = puVar3 + -0x150;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(ulong *)(puVar3 + -0x48) = unaff_x25;
  *(long **)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar3 + -0x20) = puVar11;
  *(long **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar23;
  *(code **)(puVar3 + -8) = pcVar26;
  puVar23 = puVar3 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar3 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar9) {
    lVar21 = unaff_x21[2];
    lVar27 = unaff_x21[1];
    *(long *)(puVar3 + -0x140) = unaff_x21[2];
    *(long *)(puVar3 + -0x148) = lVar27;
    if (lVar21 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    *(undefined4 *)(puVar3 + -0xe8) = 5;
    puVar18 = (undefined1 *)puVar11[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = (long *)(puVar3 + -0x150);
    puVar17 = unaff_x22;
    if ((puVar3[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = (long *)(puVar3 + -0x150);
      puVar24 = unaff_x22;
      goto LAB_107779dec;
    }
LAB_107779df8:
    func_0x00010777d724();
LAB_107779dfc:
    plVar14 = (long *)(puVar3 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar17;
  }
  else {
    uVar9 = extraout_w8_07 == 6;
    if ((bool)uVar9) {
      func_0x00010777d6c8();
      puVar18 = (undefined1 *)puVar11[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar17 = puVar3 + -0x150;
      if ((puVar3[-0x60] & 1) == 0) goto LAB_107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar24 = puVar3 + -0x150;
LAB_107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar17 = puVar24;
      goto LAB_107779dfc;
    }
    uVar9 = extraout_w8_07 == 7;
    if ((bool)uVar9) {
      func_0x00010777d6bc();
      puVar18 = (undefined1 *)puVar11[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar17 = puVar3 + -0x150;
      if ((puVar3[-0x60] & 1) == 0) goto LAB_107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar24 = puVar3 + -0x150;
      goto LAB_107779dec;
    }
    uVar9 = extraout_w8_07 == 8;
    if (!(bool)uVar9) {
      func_0x00010777d6d4();
      puVar18 = (undefined1 *)puVar11[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((puVar3[-0x60] & 1) == 0) goto LAB_107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto LAB_107779dec;
    }
    *(undefined8 *)(puVar3 + -0xd8) = 0;
    *(undefined8 *)(puVar3 + -0xd0) = 0;
    *(undefined8 *)(puVar3 + -0xe0) = 0;
    func_0x00010777d398(unaff_x21[1]);
    func_0x0001072ac134(puVar3 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar9 = unaff_x21 == unaff_x24;
      if ((bool)uVar9) {
        puVar18 = puVar3 + -0xe0;
        func_0x000107327958(puVar3 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto LAB_107779e40;
      }
      func_0x000107776804(puVar3 + -0xa0,unaff_x21,*puVar11);
      puVar18 = puVar3 + -0xa0;
      func_0x00010729d394(puVar3 + -0x150);
      func_0x000104c3323c(puVar3 + -0xa0);
      bVar2 = puVar3[-0x110];
      if ((bVar2 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar18 = puVar3 + -0x150;
        func_0x0001072d7f34(puVar3 + -0xe0);
      }
      func_0x000107267ed0(puVar3 + -0x150);
      unaff_x21 = unaff_x21 + 0xe;
    } while ((bVar2 & 1) != 0);
    func_0x00010777d890();
LAB_107779e40:
    plVar14 = (long *)(puVar3 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar3 + -0x58));
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  plVar15 = (long *)(puVar3 + -0xa0);
  func_0x000107267ed0();
  puVar25 = &UNK_107779ed8;
  func_0x00010777d9d0();
  uVar10 = (uint)plVar14;
  uVar19 = SUB81(plVar14,0);
  if ((int)plVar15[0xd] == 0) {
    plVar16 = (long *)(puVar18 + 8);
    puVar8 = puVar3 + -0x210;
    *(undefined1 **)(puVar3 + -0x180) = unaff_x22;
    *(long **)(puVar3 + -0x178) = unaff_x21;
    *(long **)(puVar3 + -0x170) = plVar14;
    *(long **)(puVar3 + -0x168) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x160) = puVar23;
    *(undefined **)(puVar3 + -0x158) = &UNK_107779ed8;
    puVar23 = puVar3 + -0x160;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    *(undefined4 *)(puVar3 + -0x198) = 0;
    puVar18 = (undefined1 *)*plVar16;
    unaff_x21 = (long *)(puVar3 + -0x200);
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8;
    }
    else {
      puVar3[-0x201] = uVar19;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_107779f6c;
    plVar15 = plVar16;
    func_0x00010777d638();
    unaff_x19 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 1;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    unaff_x21 = (long *)(puVar8 + -0xb0);
    func_0x00010777dae0();
    puVar18 = (undefined1 *)*plVar16;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8_00;
    }
    else {
      puVar8[-0xb1] = uVar19;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a170;
    plVar15 = plVar16;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 2;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    unaff_x21 = (long *)(puVar8 + -0xb0);
    func_0x00010777dacc();
    puVar18 = (undefined1 *)*plVar16;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar19 = extraout_w8_01;
    }
    else {
      puVar8[-0xb1] = uVar19;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar19 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a208;
    plVar15 = plVar16;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 3;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    plVar14 = plVar16;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    func_0x00010777dd10();
    puVar18 = (undefined1 *)*plVar16;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar16 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar19 = extraout_w8_02;
    }
    else {
      puVar8[-0xb1] = (char)plVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar19 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a2a0;
    plVar15 = plVar14;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar14;
    plVar14 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 4;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    unaff_x21 = (long *)(puVar8 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar14 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar19 = extraout_w8_03;
    }
    else {
      puVar8[-0xb1] = (char)plVar14;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar19 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a338;
    plVar15 = plVar16;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar16;
  }
  uVar10 = (uint)plVar15;
  *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
  *(long **)(puVar8 + -0x28) = unaff_x21;
  *(long **)(puVar8 + -0x20) = plVar14;
  *(long **)(puVar8 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar8 + -0x10) = puVar23;
  *(undefined **)(puVar8 + -8) = puVar25;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar9) {
    func_0x00010777dc50();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_02 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar14 >> 8 & 1) != 0) {
      puVar8[-0xc0] = (char)plVar14;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar19 = extraout_w8_04;
  }
  else {
    uVar9 = extraout_w8_08 == 6;
    if ((bool)uVar9) {
      unaff_x22 = puVar8 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar8[-0xc0] = (char)uVar10;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar9 = extraout_w8_08 == 7;
      if ((bool)uVar9) {
        unaff_x22 = puVar8 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar8[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar9 = extraout_w8_08 == 8;
        if ((bool)uVar9) {
          func_0x00010777dce0();
          func_0x00010777d398(unaff_x21[1]);
          func_0x0001075356bc(puVar8 + -0xb0);
          unaff_x22 = (undefined1 *)((undefined8 *)unaff_x21[1])[1];
          for (puVar23 = *(undefined1 **)unaff_x21[1]; uVar9 = puVar23 == unaff_x22, !(bool)uVar9;
              puVar23 = puVar23 + 0x70) {
            puVar3 = puVar23;
            func_0x000107775a54(puVar23,*plVar14);
            *(short *)(puVar8 + -0xc0) = (short)puVar3;
            if (((uint)puVar3 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar8 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar8 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar8[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar19 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar19;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar8 + -0xd0) = puVar8 + -0x10;
  *(undefined **)(puVar8 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779508; end: 107779577;  */

void FUN_107779508(byte *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 in_ZR;
  undefined1 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  byte extraout_w8;
  byte bVar17;
  byte extraout_w8_00;
  byte extraout_w8_01;
  byte extraout_w8_02;
  byte extraout_w8_03;
  byte extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar18;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  byte *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar19;
  undefined1 *unaff_x22;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar22;
  undefined *puVar23;
  code *pcVar24;
  undefined8 uVar25;
  byte abStack_f30 [3616];
  undefined8 ******ppppppuStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [192];
  byte bStack_30;
  
  pbVar12 = auStack_f0;
  pppppppuVar22 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d224();
  func_0x00010777d904();
  pbVar14 = *(byte **)param_1;
  func_0x00010777d824();
  func_0x00010777d648();
  if ((bStack_30 & 1) == 0) {
    func_0x00010777d724();
  }
  else {
    func_0x00010777d80c();
    func_0x00010777d564();
    func_0x00010777d304();
    func_0x00010777d9c8();
  }
  func_0x00010777d9c0();
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d854();
  func_0x00010777d9c0();
  puVar23 = &UNK_107779578;
  func_0x00010777d638();
  uVar7 = *(int *)(param_1 + 0x68) == 3;
  if ((bool)uVar7) {
    pbVar13 = pbVar14 + 8;
    pbVar14 = param_1 + 8;
    pbVar12 = abStack_f30 + 0xdd0;
    puStack_f8 = &UNK_107779578;
    ppppppuStack_100 = pppppppuVar22;
    func_0x00010777d224(pbVar13);
    unaff_x19 = abStack_f30 + 0xde0;
    func_0x000104c2fe00();
    func_0x00010777d454();
    func_0x00010777d304();
    func_0x00010777dbd0();
    func_0x00010777d20c();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    param_1 = unaff_x19;
    func_0x00010777dbd0();
    puVar23 = &UNK_1077795e4;
    func_0x00010777d638();
    pppppppuVar22 = &ppppppuStack_100;
  }
  uVar7 = *(int *)(param_1 + 0x68) == 4;
  if ((bool)uVar7) {
    *(long **)(pbVar12 + -0x20) = unaff_x20;
    *(byte **)(pbVar12 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar12 + -0x10) = pppppppuVar22;
    *(undefined **)(pbVar12 + -8) = puVar23;
    pppppppuVar22 = (undefined8 *******)(pbVar12 + -0x10);
    func_0x00010777d224(pbVar14 + 8,param_1 + 8);
    func_0x00010777d8ec();
    func_0x00010777d824();
    func_0x00010777d648();
    if ((pbVar12[-0x30] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar23 = &UNK_107779678;
    func_0x00010777d638();
    pbVar12 = pbVar12 + -0xf0;
  }
  puVar2 = pbVar12 + -0x120;
  *(undefined8 *)(pbVar12 + -0x50) = unaff_x26;
  *(ulong *)(pbVar12 + -0x48) = unaff_x25;
  *(undefined1 **)(pbVar12 + -0x40) = unaff_x24;
  *(undefined8 *)(pbVar12 + -0x38) = unaff_x23;
  *(undefined1 **)(pbVar12 + -0x30) = unaff_x22;
  *(undefined1 **)(pbVar12 + -0x28) = unaff_x21;
  *(long **)(pbVar12 + -0x20) = unaff_x20;
  *(byte **)(pbVar12 + -0x18) = unaff_x19;
  *(undefined8 ********)(pbVar12 + -0x10) = pppppppuVar22;
  *(undefined **)(pbVar12 + -8) = puVar23;
  puVar19 = pbVar12 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(pbVar12 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar7) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    puVar15 = (undefined1 *)unaff_x20[1];
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((pbVar12[-0x60] & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
    puVar9 = (undefined8 *)(pbVar12 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar7 = extraout_w8_05 == 6;
    if ((bool)uVar7) {
      unaff_x22 = pbVar12 + -0x110;
      func_0x00010777d6c8();
      puVar15 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((pbVar12[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar7 = extraout_w8_05 == 7;
    if ((bool)uVar7) {
      unaff_x22 = pbVar12 + -0x110;
      func_0x00010777d6bc();
      puVar15 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((pbVar12[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uVar7 = extraout_w8_05 == 8;
    if (!(bool)uVar7) {
      unaff_x22 = pbVar12 + -0x110;
      func_0x00010777d6d4();
      puVar15 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((pbVar12[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    *(undefined8 *)(pbVar12 + -0x90) = 0;
    *(undefined8 *)(pbVar12 + -0x88) = 0;
    *(undefined8 *)(pbVar12 + -0x98) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072dd514(pbVar12 + -0x98);
    func_0x00010777de3c();
    do {
      uVar7 = unaff_x21 == unaff_x24;
      if ((bool)uVar7) {
        puVar15 = pbVar12 + -0x98;
        func_0x0001073fb2d4(pbVar12 + -0x110);
        uVar25 = *(undefined8 *)(pbVar12 + -0x110);
        *(undefined8 *)(unaff_x19 + 8) = *(undefined8 *)(pbVar12 + -0x108);
        *(undefined8 *)unaff_x19 = uVar25;
        *(undefined8 *)(pbVar12 + -0x110) = 0;
        *(undefined8 *)(pbVar12 + -0x108) = 0;
        func_0x00010777d960();
        func_0x00010726b09c(pbVar12 + -0x110);
        goto code_r0x000107779838;
      }
      puVar15 = (undefined1 *)*unaff_x20;
      func_0x000107323900(pbVar12 + -0x110,unaff_x21);
      bVar17 = pbVar12[-0xd8];
      unaff_x25 = (ulong)bVar17;
      if ((bVar17 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar15 = pbVar12 + -0x110;
        func_0x0001072d17f4(pbVar12 + -0x98);
      }
      func_0x00010724b3d8(pbVar12 + -0x110);
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar17 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779838:
    puVar9 = (undefined8 *)(pbVar12 + -0x98);
    func_0x00010726e078();
  }
  func_0x00010777d23c(*(undefined8 *)(pbVar12 + -0x58));
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar10 = (undefined8 *)(pbVar12 + -0x98);
  func_0x00010724b3d8();
  pcVar24 = (code *)&UNK_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar10 + 0xd) == 0) {
    puVar11 = (undefined8 *)(puVar15 + 8);
    puVar2 = pbVar12 + -0x250;
    *(undefined8 *)(pbVar12 + -0x150) = unaff_x28;
    *(undefined8 *)(pbVar12 + -0x148) = unaff_x27;
    *(undefined8 **)(pbVar12 + -0x140) = puVar9;
    *(byte **)(pbVar12 + -0x138) = unaff_x19;
    *(undefined1 **)(pbVar12 + -0x130) = puVar19;
    *(undefined **)(pbVar12 + -0x128) = &UNK_1077798bc;
    puVar19 = pbVar12 + -0x130;
    func_0x00010777d1f4(puVar11,puVar10 + 1);
    *(undefined4 *)(pbVar12 + -0x1e8) = 0;
    puVar15 = (undefined1 *)*puVar11;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((pbVar12[-0x160] & 1) == 0) {
      func_0x00010777d724();
      puVar10 = puVar11;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar10 = puVar11;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar24 = FUN_107779964;
    func_0x00010777d638();
    puVar9 = (undefined8 *)(pbVar12 + -0x250);
  }
  uVar7 = *(int *)(puVar10 + 0xd) == 1;
  if ((bool)uVar7) {
    puVar11 = (undefined8 *)(puVar15 + 8);
    puVar10 = puVar10 + 1;
    puVar3 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar9;
    *(byte **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar19;
    *(code **)(puVar2 + -8) = pcVar24;
    puVar19 = puVar2 + -0x10;
    func_0x00010777d1f4();
    puVar2[-0x128] = *(undefined1 *)puVar10;
    *(undefined4 *)(puVar2 + -200) = 1;
    puVar15 = (undefined1 *)*puVar11;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar10 = puVar11;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar10 = puVar11;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar24 = (code *)&LAB_107779a1c;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar9 = puVar3;
  }
  uVar7 = *(int *)(puVar10 + 0xd) == 2;
  if ((bool)uVar7) {
    puVar11 = (undefined8 *)(puVar15 + 8);
    puVar10 = puVar10 + 1;
    puVar4 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar9;
    *(byte **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar19;
    *(code **)(puVar2 + -8) = pcVar24;
    puVar19 = puVar2 + -0x10;
    func_0x00010777d1f4();
    *(undefined8 *)(puVar2 + -0x128) = *puVar10;
    *(undefined4 *)(puVar2 + -200) = 2;
    puVar15 = (undefined1 *)*puVar11;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar10 = puVar11;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar10 = puVar11;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar24 = (code *)&UNK_107779ad4;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar9 = puVar4;
  }
  uVar7 = *(int *)(puVar10 + 0xd) == 3;
  if ((bool)uVar7) {
    puVar11 = puVar10 + 1;
    puVar10 = (undefined8 *)(puVar2 + -0x130);
    puVar5 = puVar2 + -0x130;
    *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x20) = puVar9;
    *(byte **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar19;
    *(code **)(puVar2 + -8) = pcVar24;
    puVar19 = puVar2 + -0x10;
    func_0x00010777d1f4(puVar15 + 8,puVar11);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar24 = (code *)&UNK_107779b94;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar9 = (undefined8 *)(puVar15 + 8);
    unaff_x21 = puVar5;
  }
  uVar7 = *(int *)(puVar10 + 0xd) == 4;
  if ((bool)uVar7) {
    puVar10 = puVar10 + 1;
    puVar6 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar9;
    *(byte **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar19;
    *(code **)(puVar2 + -8) = pcVar24;
    puVar19 = puVar2 + -0x10;
    func_0x00010777d1f4();
    uVar25 = *puVar10;
    *(undefined8 *)(puVar2 + -0x120) = puVar10[1];
    *(undefined8 *)(puVar2 + -0x128) = uVar25;
    *(undefined4 *)(puVar2 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar24 = FUN_107779c4c;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar9 = puVar6;
  }
  puVar15 = puVar2 + -0x150;
  puVar20 = puVar2 + -0x150;
  puVar21 = puVar2 + -0x150;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(ulong *)(puVar2 + -0x48) = unaff_x25;
  *(undefined1 **)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar2 + -0x20) = puVar9;
  *(byte **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar19;
  *(code **)(puVar2 + -8) = pcVar24;
  puVar19 = puVar2 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar2 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar7) {
    lVar18 = *(long *)(unaff_x21 + 0x10);
    uVar25 = *(undefined8 *)(unaff_x21 + 8);
    *(undefined8 *)(puVar2 + -0x140) = *(undefined8 *)(unaff_x21 + 0x10);
    *(undefined8 *)(puVar2 + -0x148) = uVar25;
    if (lVar18 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    *(undefined4 *)(puVar2 + -0xe8) = 5;
    puVar16 = (undefined1 *)puVar9[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = puVar2 + -0x150;
    puVar21 = unaff_x22;
    if ((puVar2[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = puVar2 + -0x150;
      puVar20 = unaff_x22;
      goto LAB_107779dec;
    }
LAB_107779df8:
    func_0x00010777d724();
LAB_107779dfc:
    pbVar14 = puVar2 + -0xa0;
    func_0x000107267ed0();
    unaff_x22 = puVar21;
  }
  else {
    uVar7 = extraout_w8_06 == 6;
    if ((bool)uVar7) {
      func_0x00010777d6c8();
      puVar16 = (undefined1 *)puVar9[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar21 = puVar2 + -0x150;
      if ((puVar2[-0x60] & 1) == 0) goto LAB_107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar20 = puVar2 + -0x150;
LAB_107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar21 = puVar20;
      goto LAB_107779dfc;
    }
    uVar7 = extraout_w8_06 == 7;
    if ((bool)uVar7) {
      func_0x00010777d6bc();
      puVar16 = (undefined1 *)puVar9[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar21 = puVar2 + -0x150;
      if ((puVar2[-0x60] & 1) == 0) goto LAB_107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar20 = puVar2 + -0x150;
      goto LAB_107779dec;
    }
    uVar7 = extraout_w8_06 == 8;
    if (!(bool)uVar7) {
      func_0x00010777d6d4();
      puVar16 = (undefined1 *)puVar9[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((puVar2[-0x60] & 1) == 0) goto LAB_107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto LAB_107779dec;
    }
    *(undefined8 *)(puVar2 + -0xd8) = 0;
    *(undefined8 *)(puVar2 + -0xd0) = 0;
    *(undefined8 *)(puVar2 + -0xe0) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072ac134(puVar2 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar7 = unaff_x21 == unaff_x24;
      if ((bool)uVar7) {
        puVar16 = puVar2 + -0xe0;
        func_0x000107327958(puVar2 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto LAB_107779e40;
      }
      func_0x000107776804(puVar2 + -0xa0,unaff_x21,*puVar9);
      puVar16 = puVar2 + -0xa0;
      func_0x00010729d394(puVar2 + -0x150);
      func_0x000104c3323c(puVar2 + -0xa0);
      bVar17 = puVar2[-0x110];
      if ((bVar17 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar16 = puVar2 + -0x150;
        func_0x0001072d7f34(puVar2 + -0xe0);
      }
      func_0x000107267ed0(puVar2 + -0x150);
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar17 & 1) != 0);
    func_0x00010777d890();
LAB_107779e40:
    pbVar14 = puVar2 + -0xe0;
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar2 + -0x58));
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  pbVar12 = puVar2 + -0xa0;
  func_0x000107267ed0();
  puVar23 = &UNK_107779ed8;
  func_0x00010777d9d0();
  uVar8 = (uint)pbVar14;
  uVar1 = SUB81(pbVar14,0);
  if (*(int *)(pbVar12 + 0x68) == 0) {
    pbVar13 = puVar16 + 8;
    puVar15 = puVar2 + -0x210;
    *(undefined1 **)(puVar2 + -0x180) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x178) = unaff_x21;
    *(byte **)(puVar2 + -0x170) = pbVar14;
    *(byte **)(puVar2 + -0x168) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x160) = puVar19;
    *(undefined **)(puVar2 + -0x158) = &UNK_107779ed8;
    puVar19 = puVar2 + -0x160;
    func_0x00010777d1f4(pbVar13,pbVar12 + 8);
    *(undefined4 *)(puVar2 + -0x198) = 0;
    puVar16 = *(undefined1 **)pbVar13;
    unaff_x21 = puVar2 + -0x200;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      bVar17 = extraout_w8;
    }
    else {
      puVar2[-0x201] = uVar1;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      bVar17 = 1;
    }
    unaff_x19[0x10] = bVar17;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    puVar23 = &UNK_107779f6c;
    pbVar12 = pbVar13;
    func_0x00010777d638();
    unaff_x19 = pbVar13;
  }
  uVar7 = *(int *)(pbVar12 + 0x68) == 1;
  if ((bool)uVar7) {
    pbVar13 = puVar16 + 8;
    *(undefined1 **)(puVar15 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar15 + -0x28) = unaff_x21;
    *(byte **)(puVar15 + -0x20) = pbVar14;
    *(byte **)(puVar15 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar15 + -0x10) = puVar19;
    *(undefined **)(puVar15 + -8) = puVar23;
    puVar19 = puVar15 + -0x10;
    func_0x00010777d1f4(pbVar13,pbVar12 + 8);
    unaff_x21 = puVar15 + -0xb0;
    func_0x00010777dae0();
    puVar16 = *(undefined1 **)pbVar13;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      bVar17 = extraout_w8_00;
    }
    else {
      puVar15[-0xb1] = uVar1;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      bVar17 = 1;
    }
    unaff_x19[0x10] = bVar17;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    puVar23 = &UNK_10777a170;
    pbVar12 = pbVar13;
    func_0x00010777d638();
    puVar15 = puVar15 + -0xc0;
    unaff_x19 = pbVar13;
  }
  uVar7 = *(int *)(pbVar12 + 0x68) == 2;
  if ((bool)uVar7) {
    pbVar13 = puVar16 + 8;
    *(undefined1 **)(puVar15 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar15 + -0x28) = unaff_x21;
    *(byte **)(puVar15 + -0x20) = pbVar14;
    *(byte **)(puVar15 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar15 + -0x10) = puVar19;
    *(undefined **)(puVar15 + -8) = puVar23;
    puVar19 = puVar15 + -0x10;
    func_0x00010777d1f4(pbVar13,pbVar12 + 8);
    unaff_x21 = puVar15 + -0xb0;
    func_0x00010777dacc();
    puVar16 = *(undefined1 **)pbVar13;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      bVar17 = extraout_w8_01;
    }
    else {
      puVar15[-0xb1] = uVar1;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      bVar17 = 1;
    }
    unaff_x19[0x10] = bVar17;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    puVar23 = &UNK_10777a208;
    pbVar12 = pbVar13;
    func_0x00010777d638();
    puVar15 = puVar15 + -0xc0;
    unaff_x19 = pbVar13;
  }
  uVar7 = *(int *)(pbVar12 + 0x68) == 3;
  if ((bool)uVar7) {
    pbVar13 = puVar16 + 8;
    *(undefined1 **)(puVar15 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar15 + -0x28) = unaff_x21;
    *(byte **)(puVar15 + -0x20) = pbVar14;
    *(byte **)(puVar15 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar15 + -0x10) = puVar19;
    *(undefined **)(puVar15 + -8) = puVar23;
    puVar19 = puVar15 + -0x10;
    pbVar14 = pbVar13;
    func_0x00010777d1f4(pbVar13,pbVar12 + 8);
    func_0x00010777dd10();
    puVar16 = *(undefined1 **)pbVar13;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)pbVar13 >> 8 & 1) == 0) {
      func_0x00010777d748();
      bVar17 = extraout_w8_02;
    }
    else {
      puVar15[-0xb1] = (char)pbVar13;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      bVar17 = 1;
    }
    unaff_x19[0x10] = bVar17;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    puVar23 = &UNK_10777a2a0;
    pbVar12 = pbVar14;
    func_0x00010777d638();
    puVar15 = puVar15 + -0xc0;
    unaff_x19 = pbVar14;
    pbVar14 = pbVar13;
  }
  uVar7 = *(int *)(pbVar12 + 0x68) == 4;
  if ((bool)uVar7) {
    pbVar13 = puVar16 + 8;
    *(undefined1 **)(puVar15 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar15 + -0x28) = unaff_x21;
    *(byte **)(puVar15 + -0x20) = pbVar14;
    *(byte **)(puVar15 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar15 + -0x10) = puVar19;
    *(undefined **)(puVar15 + -8) = puVar23;
    puVar19 = puVar15 + -0x10;
    func_0x00010777d1f4(pbVar13,pbVar12 + 8);
    unaff_x21 = puVar15 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)pbVar14 >> 8 & 1) == 0) {
      func_0x00010777d748();
      bVar17 = extraout_w8_03;
    }
    else {
      puVar15[-0xb1] = (char)pbVar14;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      bVar17 = 1;
    }
    unaff_x19[0x10] = bVar17;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    puVar23 = &UNK_10777a338;
    pbVar12 = pbVar13;
    func_0x00010777d638();
    puVar15 = puVar15 + -0xc0;
    unaff_x19 = pbVar13;
  }
  uVar8 = (uint)pbVar12;
  *(undefined1 **)(puVar15 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar15 + -0x28) = unaff_x21;
  *(byte **)(puVar15 + -0x20) = pbVar14;
  *(byte **)(puVar15 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar15 + -0x10) = puVar19;
  *(undefined **)(puVar15 + -8) = puVar23;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar7) {
    func_0x00010777dc50();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)pbVar14 >> 8 & 1) != 0) {
      puVar15[-0xc0] = (char)pbVar14;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    bVar17 = extraout_w8_04;
  }
  else {
    uVar7 = extraout_w8_07 == 6;
    if ((bool)uVar7) {
      unaff_x22 = puVar15 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar8 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar15[-0xc0] = (char)uVar8;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar7 = extraout_w8_07 == 7;
      if ((bool)uVar7) {
        unaff_x22 = puVar15 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar8 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar15[-0xc0] = (char)uVar8;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar7 = extraout_w8_07 == 8;
        if ((bool)uVar7) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc(puVar15 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar19 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8);
              uVar7 = puVar19 == unaff_x22, !(bool)uVar7; puVar19 = puVar19 + 0x70) {
            puVar2 = puVar19;
            func_0x000107775a54(puVar19,*(undefined8 *)pbVar14);
            *(short *)(puVar15 + -0xc0) = (short)puVar2;
            if (((uint)puVar2 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar15 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar15 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar8 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar15[-0xc0] = (char)uVar8;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    bVar17 = 1;
  }
  unaff_x19[0x10] = bVar17;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar15 + -0xd0) = puVar15 + -0x10;
  *(undefined **)(puVar15 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779964; end: 107779987;  */

void FUN_107779964(long *param_1,long param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 extraout_w8;
  undefined1 uVar14;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar15;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  undefined8 extraout_x8;
  long lVar16;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  byte *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar17;
  undefined1 *unaff_x22;
  undefined1 *puVar18;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined *puVar19;
  undefined8 uVar20;
  byte abStack_a90 [2656];
  
  uVar6 = (int)param_1[0xd] == 1;
  if ((bool)uVar6) {
    plVar8 = (long *)(param_2 + 8);
    param_1 = param_1 + 1;
    unaff_x20 = abStack_a90 + 0x960;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4();
    abStack_a90[0x968] = (byte)*param_1;
    abStack_a90[0x9c8] = 1;
    abStack_a90[0x9c9] = 0;
    abStack_a90[0x9ca] = 0;
    abStack_a90[0x9cb] = 0;
    param_2 = *plVar8;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((abStack_a90[0xa50] & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar8;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      param_1 = plVar8;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    unaff_x30 = (code *)&LAB_107779a1c;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_a90 + 0x960);
  }
  uVar6 = (int)param_1[0xd] == 2;
  if ((bool)uVar6) {
    plVar8 = (long *)(param_2 + 8);
    param_1 = param_1 + 1;
    puVar2 = (undefined8 *)((long)register0x00000008 + -0x130);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x27;
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    *(long *)((long)register0x00000008 + -0x128) = *param_1;
    *(undefined4 *)((long)register0x00000008 + -200) = 2;
    param_2 = *plVar8;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x40) & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar8;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      param_1 = plVar8;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    unaff_x30 = (code *)&UNK_107779ad4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x130);
    unaff_x20 = (byte *)puVar2;
  }
  uVar6 = (int)param_1[0xd] == 3;
  if ((bool)uVar6) {
    plVar8 = param_1 + 1;
    param_1 = (long *)((long)register0x00000008 + -0x130);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x130);
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4((undefined8 *)(param_2 + 8),plVar8);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0x40) & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    unaff_x30 = (code *)&UNK_107779b94;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x130);
    unaff_x20 = (byte *)(param_2 + 8);
    unaff_x21 = puVar3;
  }
  uVar6 = (int)param_1[0xd] == 4;
  if ((bool)uVar6) {
    param_1 = param_1 + 1;
    puVar4 = (undefined8 *)((long)register0x00000008 + -0x130);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x27;
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    lVar16 = *param_1;
    *(long *)((long)register0x00000008 + -0x120) = param_1[1];
    *(long *)((long)register0x00000008 + -0x128) = lVar16;
    *(undefined4 *)((long)register0x00000008 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x40) & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    unaff_x30 = FUN_107779c4c;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x130);
    unaff_x20 = (byte *)puVar4;
  }
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x150);
  puVar18 = (undefined1 *)((long)register0x00000008 + -0x150);
  puVar12 = (undefined1 *)((long)register0x00000008 + -0x150);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar17 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar6) {
    lVar16 = *(long *)(unaff_x21 + 0x10);
    uVar20 = *(undefined8 *)(unaff_x21 + 8);
    *(undefined8 *)((long)register0x00000008 + -0x140) = *(undefined8 *)(unaff_x21 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0x148) = uVar20;
    if (lVar16 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    *(undefined4 *)((long)register0x00000008 + -0xe8) = 5;
    puVar13 = *(undefined1 **)((long)unaff_x20 + 8);
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x150);
    puVar12 = unaff_x22;
    if ((*(byte *)((long)register0x00000008 + -0x60) & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x150);
      puVar18 = unaff_x22;
      goto LAB_107779dec;
    }
LAB_107779df8:
    func_0x00010777d724();
LAB_107779dfc:
    puVar9 = (undefined8 *)((long)register0x00000008 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar12;
  }
  else {
    uVar6 = extraout_w8_05 == 6;
    if ((bool)uVar6) {
      func_0x00010777d6c8();
      puVar13 = *(undefined1 **)((long)unaff_x20 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar12 = (undefined1 *)((long)register0x00000008 + -0x150);
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto LAB_107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar18 = (undefined1 *)((long)register0x00000008 + -0x150);
LAB_107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar18;
      goto LAB_107779dfc;
    }
    uVar6 = extraout_w8_05 == 7;
    if ((bool)uVar6) {
      func_0x00010777d6bc();
      puVar13 = *(undefined1 **)((long)unaff_x20 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar12 = (undefined1 *)((long)register0x00000008 + -0x150);
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto LAB_107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar18 = (undefined1 *)((long)register0x00000008 + -0x150);
      goto LAB_107779dec;
    }
    uVar6 = extraout_w8_05 == 8;
    if (!(bool)uVar6) {
      func_0x00010777d6d4();
      puVar13 = *(undefined1 **)((long)unaff_x20 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto LAB_107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto LAB_107779dec;
    }
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072ac134((undefined1 *)((long)register0x00000008 + -0xe0));
    func_0x00010777de3c();
    do {
      uVar6 = unaff_x21 == unaff_x24;
      if ((bool)uVar6) {
        puVar13 = (undefined1 *)((long)register0x00000008 + -0xe0);
        func_0x000107327958((undefined1 *)((long)register0x00000008 + -0x150));
        func_0x00010777d338();
        func_0x000104c33108();
        goto LAB_107779e40;
      }
      func_0x000107776804((undefined1 *)((long)register0x00000008 + -0xa0),unaff_x21,
                          *(undefined8 *)unaff_x20);
      puVar13 = (undefined1 *)((long)register0x00000008 + -0xa0);
      func_0x00010729d394((undefined1 *)((long)register0x00000008 + -0x150));
      func_0x000104c3323c((undefined1 *)((long)register0x00000008 + -0xa0));
      bVar1 = *(byte *)((long)register0x00000008 + -0x110);
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar13 = (undefined1 *)((long)register0x00000008 + -0x150);
        func_0x0001072d7f34((undefined1 *)((long)register0x00000008 + -0xe0));
      }
      func_0x000107267ed0((undefined1 *)((long)register0x00000008 + -0x150));
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
LAB_107779e40:
    puVar9 = (undefined8 *)((long)register0x00000008 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)((long)register0x00000008 + -0x58));
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar10 = (undefined8 *)((long)register0x00000008 + -0xa0);
  func_0x000107267ed0();
  puVar19 = &UNK_107779ed8;
  func_0x00010777d9d0();
  uVar7 = (uint)puVar9;
  uVar15 = SUB81(puVar9,0);
  if (*(int *)(puVar10 + 0xd) == 0) {
    puVar11 = (undefined8 *)(puVar13 + 8);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x210);
    *(undefined1 **)((long)register0x00000008 + -0x180) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x178) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x170) = puVar9;
    *(undefined8 **)((long)register0x00000008 + -0x168) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x160) = puVar17;
    *(undefined **)((long)register0x00000008 + -0x158) = &UNK_107779ed8;
    puVar17 = (undefined1 *)((long)register0x00000008 + -0x160);
    func_0x00010777d1f4(puVar11,puVar10 + 1);
    *(undefined4 *)((long)register0x00000008 + -0x198) = 0;
    puVar13 = (undefined1 *)*puVar11;
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x200);
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar7 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar14 = extraout_w8;
    }
    else {
      *(undefined1 *)((long)register0x00000008 + -0x201) = uVar15;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar14 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar14;
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    puVar19 = &UNK_107779f6c;
    puVar10 = puVar11;
    func_0x00010777d638();
    unaff_x19 = puVar11;
  }
  uVar6 = *(int *)(puVar10 + 0xd) == 1;
  if ((bool)uVar6) {
    puVar11 = (undefined8 *)(puVar13 + 8);
    *(undefined1 **)(puVar5 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar5 + -0x20) = puVar9;
    *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = puVar17;
    *(undefined **)(puVar5 + -8) = puVar19;
    puVar17 = puVar5 + -0x10;
    func_0x00010777d1f4(puVar11,puVar10 + 1);
    unaff_x21 = puVar5 + -0xb0;
    func_0x00010777dae0();
    puVar13 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar7 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar14 = extraout_w8_00;
    }
    else {
      puVar5[-0xb1] = uVar15;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar14 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar14;
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    puVar19 = &UNK_10777a170;
    puVar10 = puVar11;
    func_0x00010777d638();
    puVar5 = puVar5 + -0xc0;
    unaff_x19 = puVar11;
  }
  uVar6 = *(int *)(puVar10 + 0xd) == 2;
  if ((bool)uVar6) {
    puVar11 = (undefined8 *)(puVar13 + 8);
    *(undefined1 **)(puVar5 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar5 + -0x20) = puVar9;
    *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = puVar17;
    *(undefined **)(puVar5 + -8) = puVar19;
    puVar17 = puVar5 + -0x10;
    func_0x00010777d1f4(puVar11,puVar10 + 1);
    unaff_x21 = puVar5 + -0xb0;
    func_0x00010777dacc();
    puVar13 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar7 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_01;
    }
    else {
      puVar5[-0xb1] = uVar15;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    puVar19 = &UNK_10777a208;
    puVar10 = puVar11;
    func_0x00010777d638();
    puVar5 = puVar5 + -0xc0;
    unaff_x19 = puVar11;
  }
  uVar6 = *(int *)(puVar10 + 0xd) == 3;
  if ((bool)uVar6) {
    puVar11 = (undefined8 *)(puVar13 + 8);
    *(undefined1 **)(puVar5 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar5 + -0x20) = puVar9;
    *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = puVar17;
    *(undefined **)(puVar5 + -8) = puVar19;
    puVar17 = puVar5 + -0x10;
    puVar9 = puVar11;
    func_0x00010777d1f4(puVar11,puVar10 + 1);
    func_0x00010777dd10();
    puVar13 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar11 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_02;
    }
    else {
      puVar5[-0xb1] = (char)puVar11;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    puVar19 = &UNK_10777a2a0;
    puVar10 = puVar9;
    func_0x00010777d638();
    puVar5 = puVar5 + -0xc0;
    unaff_x19 = puVar9;
    puVar9 = puVar11;
  }
  uVar6 = *(int *)(puVar10 + 0xd) == 4;
  if ((bool)uVar6) {
    puVar11 = (undefined8 *)(puVar13 + 8);
    *(undefined1 **)(puVar5 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar5 + -0x20) = puVar9;
    *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = puVar17;
    *(undefined **)(puVar5 + -8) = puVar19;
    puVar17 = puVar5 + -0x10;
    func_0x00010777d1f4(puVar11,puVar10 + 1);
    unaff_x21 = puVar5 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_03;
    }
    else {
      puVar5[-0xb1] = (char)puVar9;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    puVar19 = &UNK_10777a338;
    puVar10 = puVar11;
    func_0x00010777d638();
    puVar5 = puVar5 + -0xc0;
    unaff_x19 = puVar11;
  }
  uVar7 = (uint)puVar10;
  *(undefined1 **)(puVar5 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar5 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar5 + -0x20) = puVar9;
  *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = puVar17;
  *(undefined **)(puVar5 + -8) = puVar19;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar6) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar9 >> 8 & 1) != 0) {
      puVar5[-0xc0] = (char)puVar9;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar15 = extraout_w8_04;
  }
  else {
    uVar6 = extraout_w8_06 == 6;
    if ((bool)uVar6) {
      unaff_x22 = puVar5 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar7 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar5[-0xc0] = (char)uVar7;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar6 = extraout_w8_06 == 7;
      if ((bool)uVar6) {
        unaff_x22 = puVar5 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar7 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar5[-0xc0] = (char)uVar7;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar6 = extraout_w8_06 == 8;
        if ((bool)uVar6) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc(puVar5 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar17 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8);
              uVar6 = puVar17 == unaff_x22, !(bool)uVar6; puVar17 = puVar17 + 0x70) {
            puVar12 = puVar17;
            func_0x000107775a54(puVar17,*puVar9);
            *(short *)(puVar5 + -0xc0) = (short)puVar12;
            if (((uint)puVar12 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar5 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar5 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar7 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar5[-0xc0] = (char)uVar7;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar15 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar15;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar5 + -0xd0) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779c4c; end: 107779ed7;  */

void FUN_107779c4c(void)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 uVar11;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined1 *puVar12;
  undefined1 *unaff_x22;
  undefined1 *unaff_x24;
  undefined8 *******pppppppuVar13;
  undefined *puVar14;
  undefined1 auStack_5d0 [976];
  undefined1 auStack_200 [104];
  undefined4 uStack_198;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined8 *puStack_170;
  undefined8 ******ppppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  byte bStack_110;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 auStack_a0 [8];
  byte bStack_60;
  undefined8 uStack_58;
  
  puVar2 = &uStack_150;
  puVar6 = &uStack_150;
  puVar7 = &uStack_150;
  pppppppuVar13 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777db88();
  func_0x00010777d250();
  uStack_58 = extraout_x8;
  func_0x00010777da78();
  if ((bool)in_ZR) {
    uStack_140 = *(undefined8 *)((long)unaff_x21 + 0x10);
    uStack_148 = *(undefined8 *)((long)unaff_x21 + 8);
    if (*(long *)((long)unaff_x21 + 0x10) != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    uStack_e8 = 5;
    puVar10 = (undefined8 *)unaff_x20[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = &uStack_150;
    puVar7 = (undefined8 *)unaff_x22;
    if ((bStack_60 & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = &uStack_150;
      puVar6 = (undefined8 *)unaff_x22;
      goto LAB_107779dec;
    }
LAB_107779df8:
    func_0x00010777d724();
LAB_107779dfc:
    puVar6 = auStack_a0;
    func_0x000107267ed0();
    unaff_x22 = (undefined1 *)puVar7;
  }
  else {
    in_ZR = extraout_w8_05 == 6;
    if ((bool)in_ZR) {
      func_0x00010777d6c8();
      puVar10 = (undefined8 *)unaff_x20[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar7 = &uStack_150;
      if ((bStack_60 & 1) == 0) goto LAB_107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar6 = &uStack_150;
LAB_107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar7 = puVar6;
      goto LAB_107779dfc;
    }
    in_ZR = extraout_w8_05 == 7;
    if ((bool)in_ZR) {
      func_0x00010777d6bc();
      puVar10 = (undefined8 *)unaff_x20[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar7 = &uStack_150;
      if ((bStack_60 & 1) == 0) goto LAB_107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar6 = &uStack_150;
      goto LAB_107779dec;
    }
    in_ZR = extraout_w8_05 == 8;
    if (!(bool)in_ZR) {
      func_0x00010777d6d4();
      puVar10 = (undefined8 *)unaff_x20[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((bStack_60 & 1) == 0) goto LAB_107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto LAB_107779dec;
    }
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    func_0x00010777d398(*(undefined8 *)((long)unaff_x21 + 8));
    func_0x0001072ac134(&uStack_e0);
    func_0x00010777de3c();
    do {
      in_ZR = unaff_x21 == (undefined8 *)unaff_x24;
      if ((bool)in_ZR) {
        puVar10 = &uStack_e0;
        func_0x000107327958(&uStack_150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto LAB_107779e40;
      }
      func_0x000107776804(auStack_a0,unaff_x21,*unaff_x20);
      puVar10 = auStack_a0;
      func_0x00010729d394(&uStack_150);
      func_0x000104c3323c(auStack_a0);
      bVar1 = bStack_110;
      if ((bStack_110 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar10 = &uStack_150;
        func_0x0001072d7f34(&uStack_e0);
      }
      func_0x000107267ed0(&uStack_150);
      unaff_x21 = (undefined8 *)((long)unaff_x21 + 0x70);
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
LAB_107779e40:
    puVar6 = &uStack_e0;
    func_0x000107269124();
  }
  func_0x00010777d23c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar7 = auStack_a0;
  func_0x000107267ed0();
  puVar14 = &UNK_107779ed8;
  func_0x00010777d9d0();
  uVar5 = (uint)puVar6;
  uVar4 = SUB81(puVar6,0);
  if (*(int *)(puVar7 + 0xd) == 0) {
    puVar8 = puVar10 + 1;
    puVar2 = (undefined8 *)(auStack_5d0 + 0x3c0);
    puStack_158 = &UNK_107779ed8;
    puStack_180 = unaff_x22;
    puStack_178 = (undefined1 *)unaff_x21;
    puStack_170 = puVar6;
    ppppppuStack_160 = pppppppuVar13;
    func_0x00010777d1f4(puVar8,puVar7 + 1);
    uStack_198 = 0;
    puVar10 = (undefined8 *)*puVar8;
    unaff_x21 = (undefined8 *)auStack_200;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar5 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar3 = extraout_w8;
    }
    else {
      auStack_5d0[0x3cf] = uVar4;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar3 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar3;
    func_0x00010777d1dc();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    puVar14 = &UNK_107779f6c;
    puVar7 = puVar8;
    func_0x00010777d638();
    unaff_x19 = puVar8;
    pppppppuVar13 = &ppppppuStack_160;
  }
  uVar3 = *(int *)(puVar7 + 0xd) == 1;
  if ((bool)uVar3) {
    puVar8 = puVar10 + 1;
    *(undefined1 **)((long)puVar2 + -0x30) = unaff_x22;
    *(undefined8 **)((long)puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)((long)puVar2 + -0x20) = puVar6;
    *(undefined8 **)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar13;
    *(undefined **)((long)puVar2 + -8) = puVar14;
    pppppppuVar13 = (undefined8 *******)((long)puVar2 + -0x10);
    func_0x00010777d1f4(puVar8,puVar7 + 1);
    unaff_x21 = (undefined8 *)((long)puVar2 + -0xb0);
    func_0x00010777dae0();
    puVar10 = (undefined8 *)*puVar8;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar5 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar11 = extraout_w8_00;
    }
    else {
      *(undefined1 *)((long)puVar2 + -0xb1) = uVar4;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar11 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar11;
    func_0x00010777d1dc();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    puVar14 = &UNK_10777a170;
    puVar7 = puVar8;
    func_0x00010777d638();
    puVar2 = (undefined8 *)((long)puVar2 + -0xc0);
    unaff_x19 = puVar8;
  }
  uVar3 = *(int *)(puVar7 + 0xd) == 2;
  if ((bool)uVar3) {
    puVar8 = puVar10 + 1;
    *(undefined1 **)((long)puVar2 + -0x30) = unaff_x22;
    *(undefined8 **)((long)puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)((long)puVar2 + -0x20) = puVar6;
    *(undefined8 **)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar13;
    *(undefined **)((long)puVar2 + -8) = puVar14;
    pppppppuVar13 = (undefined8 *******)((long)puVar2 + -0x10);
    func_0x00010777d1f4(puVar8,puVar7 + 1);
    unaff_x21 = (undefined8 *)((long)puVar2 + -0xb0);
    func_0x00010777dacc();
    puVar10 = (undefined8 *)*puVar8;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar5 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar4 = extraout_w8_01;
    }
    else {
      *(undefined1 *)((long)puVar2 + -0xb1) = uVar4;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar4 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar4;
    func_0x00010777d1dc();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    puVar14 = &UNK_10777a208;
    puVar7 = puVar8;
    func_0x00010777d638();
    puVar2 = (undefined8 *)((long)puVar2 + -0xc0);
    unaff_x19 = puVar8;
  }
  uVar4 = *(int *)(puVar7 + 0xd) == 3;
  if ((bool)uVar4) {
    puVar8 = puVar10 + 1;
    *(undefined1 **)((long)puVar2 + -0x30) = unaff_x22;
    *(undefined8 **)((long)puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)((long)puVar2 + -0x20) = puVar6;
    *(undefined8 **)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar13;
    *(undefined **)((long)puVar2 + -8) = puVar14;
    pppppppuVar13 = (undefined8 *******)((long)puVar2 + -0x10);
    puVar6 = puVar8;
    func_0x00010777d1f4(puVar8,puVar7 + 1);
    func_0x00010777dd10();
    puVar10 = (undefined8 *)*puVar8;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar3 = extraout_w8_02;
    }
    else {
      *(char *)((long)puVar2 + -0xb1) = (char)puVar8;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar3 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar3;
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    puVar14 = &UNK_10777a2a0;
    puVar7 = puVar6;
    func_0x00010777d638();
    puVar2 = (undefined8 *)((long)puVar2 + -0xc0);
    unaff_x19 = puVar6;
    puVar6 = puVar8;
  }
  uVar4 = *(int *)(puVar7 + 0xd) == 4;
  if ((bool)uVar4) {
    puVar10 = puVar10 + 1;
    *(undefined1 **)((long)puVar2 + -0x30) = unaff_x22;
    *(undefined8 **)((long)puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)((long)puVar2 + -0x20) = puVar6;
    *(undefined8 **)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar13;
    *(undefined **)((long)puVar2 + -8) = puVar14;
    pppppppuVar13 = (undefined8 *******)((long)puVar2 + -0x10);
    func_0x00010777d1f4(puVar10,puVar7 + 1);
    unaff_x21 = (undefined8 *)((long)puVar2 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar6 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar3 = extraout_w8_03;
    }
    else {
      *(char *)((long)puVar2 + -0xb1) = (char)puVar6;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar3 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar3;
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    puVar14 = &UNK_10777a338;
    puVar7 = puVar10;
    func_0x00010777d638();
    puVar2 = (undefined8 *)((long)puVar2 + -0xc0);
    unaff_x19 = puVar10;
  }
  uVar5 = (uint)puVar7;
  *(undefined1 **)((long)puVar2 + -0x30) = unaff_x22;
  *(undefined8 **)((long)puVar2 + -0x28) = unaff_x21;
  *(undefined8 **)((long)puVar2 + -0x20) = puVar6;
  *(undefined8 **)((long)puVar2 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar13;
  *(undefined **)((long)puVar2 + -8) = puVar14;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar4) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar6 >> 8 & 1) != 0) {
      *(char *)((long)puVar2 + -0xc0) = (char)puVar6;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar3 = extraout_w8_04;
  }
  else {
    uVar4 = extraout_w8_06 == 6;
    if ((bool)uVar4) {
      unaff_x22 = (undefined1 *)((long)puVar2 + -0xb0);
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar5 >> 8 & 1) == 0) goto code_r0x00010777a468;
      *(char *)((long)puVar2 + -0xc0) = (char)uVar5;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar4 = extraout_w8_06 == 7;
      if ((bool)uVar4) {
        unaff_x22 = (undefined1 *)((long)puVar2 + -0xb0);
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar5 >> 8 & 1) == 0) goto code_r0x00010777a468;
        *(char *)((long)puVar2 + -0xc0) = (char)uVar5;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar4 = extraout_w8_06 == 8;
        if ((bool)uVar4) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)((long)unaff_x21 + 8));
          func_0x0001075356bc((undefined1 *)((long)puVar2 + -0xb0));
          unaff_x22 = (undefined1 *)(*(undefined8 **)((long)unaff_x21 + 8))[1];
          for (puVar12 = (undefined1 *)**(undefined8 **)((long)unaff_x21 + 8);
              uVar4 = puVar12 == unaff_x22, !(bool)uVar4; puVar12 = puVar12 + 0x70) {
            puVar9 = puVar12;
            func_0x000107775a54(puVar12,*puVar6);
            *(short *)((long)puVar2 + -0xc0) = (short)puVar9;
            if (((uint)puVar9 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8((undefined1 *)((long)puVar2 + -0xb0));
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = (undefined1 *)((long)puVar2 + -0xb0);
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar5 >> 8 & 1) == 0) goto code_r0x00010777a468;
        *(char *)((long)puVar2 + -0xc0) = (char)uVar5;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar3 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar3;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)((long)puVar2 + -0xd0) = (undefined1 *)((long)puVar2 + -0x10);
  *(undefined **)((long)puVar2 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 10777a0b0; end: 10777a0cf;  */

void FUN_10777a0b0(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10777a2c4; end: 10777a337;  */

void FUN_10777a2c4(long param_1)

{
  undefined1 in_ZR;
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 extraout_w8;
  undefined1 uVar4;
  undefined1 extraout_w8_00;
  int extraout_w8_01;
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *puVar5;
  undefined1 *unaff_x22;
  undefined1 auStack_170 [128];
  undefined8 *puStack_a8;
  
  func_0x00010777d1f4();
  func_0x00010777da1c();
  func_0x00010777d948();
  func_0x00010777d5ec();
  if (((uint)unaff_x20 >> 8 & 1) == 0) {
    func_0x00010777d748();
    uVar4 = extraout_w8;
  }
  else {
    func_0x00010777d530();
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar4 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x10) = uVar4;
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = param_1;
  func_0x00010777d638();
  uVar1 = (uint)lVar2;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)in_ZR) {
    func_0x00010777dc50();
    if (extraout_x8 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) != 0) {
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar4 = extraout_w8_00;
  }
  else {
    in_ZR = extraout_w8_01 == 6;
    if ((bool)in_ZR) {
      unaff_x22 = auStack_170;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar1 >> 8 & 1) == 0) goto code_r0x00010777a468;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      in_ZR = extraout_w8_01 == 7;
      if ((bool)in_ZR) {
        unaff_x22 = auStack_170;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar1 >> 8 & 1) == 0) goto code_r0x00010777a468;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        in_ZR = extraout_w8_01 == 8;
        if ((bool)in_ZR) {
          func_0x00010777dce0();
          func_0x00010777d398(puStack_a8);
          func_0x0001075356bc(auStack_170);
          unaff_x22 = (undefined1 *)puStack_a8[1];
          for (puVar5 = (undefined1 *)*puStack_a8; in_ZR = puVar5 == unaff_x22, !(bool)in_ZR;
              puVar5 = puVar5 + 0x70) {
            puVar3 = puVar5;
            func_0x000107775a54(puVar5,*unaff_x20);
            if (((uint)puVar3 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(auStack_170);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = auStack_170;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar1 >> 8 & 1) == 0) goto code_r0x00010777a468;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x10) = uVar4;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  func_0x00010777a518();
  return;
}



/* Entry: 10777a834; end: 10777a897;  */

void FUN_10777a834(ulong *param_1,undefined1 *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  int extraout_w9;
  
  func_0x00010777d274();
  func_0x00010777dc40(*param_2);
  uVar2 = *param_1;
  func_0x00010777d938();
  func_0x00010777d640();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    param_1 = (ulong *)0x0;
  }
  func_0x00010777d1dc(param_1);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  func_0x00010777de24();
  if (extraout_w9 == 2) {
    func_0x00010777a8d0(extraout_x8,param_1 + 1);
  }
  else {
    func_0x00010777a930();
  }
  return;
}



/* Entry: 10777aba4; end: 10777abc7;  */

long * FUN_10777aba4(long *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  undefined1 extraout_w8_05;
  undefined1 extraout_w8_06;
  undefined1 extraout_w8_07;
  undefined1 uVar8;
  long lVar9;
  undefined1 *extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 *unaff_x19;
  undefined8 *puVar10;
  long *unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar12;
  undefined *unaff_x30;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  char acStack_86c [2108];
  
  uVar5 = (int)param_1[0xd] == 3;
  plVar6 = param_2;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    param_1 = param_2;
    func_0x00010777d1f4(param_2,plVar6);
    func_0x00010777dd3c();
    plVar6 = (long *)*param_2;
    func_0x00010777d484();
    func_0x00010777d640();
    if ((acStack_86c[0x7c0] & 1U) == 0) {
      func_0x00010777d748();
      uVar8 = extraout_w8_00;
    }
    else {
      func_0x00010777d410();
      uVar8 = extraout_w8;
    }
    unaff_x19[0x14] = uVar8;
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d38c();
    unaff_x30 = &LAB_10777ac28;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(acStack_86c + 0x7ac);
    unaff_x20 = param_2;
  }
  uVar5 = (int)param_1[0xd] == 4;
  if ((bool)uVar5) {
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224(plVar6,param_1 + 1);
    func_0x00010777d8ec();
    plVar7 = (long *)*plVar6;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x9c) & 1) == 0) {
      func_0x00010777d748();
      param_1 = plVar6;
      plVar6 = plVar7;
      uVar8 = extraout_w8_02;
    }
    else {
      func_0x00010777d410();
      param_1 = plVar6;
      plVar6 = plVar7;
      uVar8 = extraout_w8_01;
    }
    unaff_x19[0x14] = uVar8;
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    unaff_x30 = &UNK_10777aca4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  uVar5 = (int)param_1[0xd] == 5;
  if ((bool)uVar5) {
    param_1 = param_1 + 1;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224();
    lVar9 = param_1[1];
    lVar14 = *param_1;
    *(long *)((long)register0x00000008 + -0x88) = param_1[1];
    *(long *)((long)register0x00000008 + -0x90) = lVar14;
    param_1 = plVar6;
    if (lVar9 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d484();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x9c) & 1) == 0) {
      func_0x00010777d748();
      uVar8 = extraout_w8_04;
    }
    else {
      func_0x00010777d410();
      uVar8 = extraout_w8_03;
    }
    unaff_x19[0x14] = uVar8;
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    unaff_x30 = &UNK_10777ad3c;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  puVar3 = (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar12 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar5 = iVar2 == 6;
  if ((bool)uVar5) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    plVar6 = (long *)*unaff_x20;
    func_0x00010777d484();
  }
  else {
    uVar5 = iVar2 == 7;
    if ((bool)uVar5) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      plVar6 = (long *)*unaff_x20;
      func_0x00010777d484();
    }
    else {
      uVar5 = iVar2 == 8;
      if ((bool)uVar5) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        plVar6 = (long *)*unaff_x20;
        func_0x00010777d484();
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        plVar6 = (long *)*unaff_x20;
        func_0x00010777d484();
      }
    }
  }
  func_0x00010777d640();
  if ((*(byte *)((long)register0x00000008 + -0xac) & 1) == 0) {
    func_0x00010777d748();
    uVar8 = extraout_w8_06;
  }
  else {
    func_0x00010777d410();
    uVar8 = extraout_w8_05;
  }
  unaff_x19[0x14] = uVar8;
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  puVar13 = &UNK_10777ae10;
  func_0x00010777d638();
  if ((int)param_1[0xd] == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
    return param_1;
  }
  uVar5 = (int)param_1[0xd] == 1;
  if ((bool)uVar5) {
    plVar7 = param_1 + 1;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x170);
    *(long **)((long)register0x00000008 + -0xe0) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0xd8) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0xd0) = puVar12;
    *(undefined **)((long)register0x00000008 + -200) = &UNK_10777ae10;
    puVar12 = (undefined1 *)((long)register0x00000008 + -0xd0);
    func_0x00010777d224();
    func_0x00010777d8d4();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x160) & 1) == 0) {
      func_0x00010777db94();
      param_1 = plVar6;
      plVar6 = plVar7;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar6;
      plVar6 = plVar7;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777aeac;
    func_0x00010777d638();
  }
  uVar5 = (int)param_1[0xd] == 2;
  if ((bool)uVar5) {
    plVar7 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    puVar12 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d904();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      param_1 = plVar6;
      plVar6 = plVar7;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar6;
      plVar6 = plVar7;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777af30;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar5 = (int)param_1[0xd] == 3;
  plVar7 = plVar6;
  if ((bool)uVar5) {
    plVar7 = param_1 + 1;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar3 + -0x28) = (undefined1 *)((long)register0x00000008 + -0xa8);
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    puVar12 = puVar3 + -0x10;
    param_1 = plVar6;
    func_0x00010777d1f4();
    func_0x00010777dd3c();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((puVar3[-0xb0] & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777afbc;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    unaff_x20 = plVar6;
  }
  uVar5 = (int)param_1[0xd] == 4;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    puVar12 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      param_1 = plVar7;
      plVar7 = plVar6;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar7;
      plVar7 = plVar6;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777b040;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar5 = (int)param_1[0xd] == 5;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    puVar12 = puVar3 + -0x10;
    func_0x00010777d224();
    lVar9 = plVar6[1];
    lVar14 = *plVar6;
    *(long *)(puVar3 + -0x88) = plVar6[1];
    *(long *)(puVar3 + -0x90) = lVar14;
    param_1 = plVar7;
    plVar7 = plVar6;
    if (lVar9 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777b0e0;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  puVar4 = puVar3 + -0xc0;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar3 + -0x28) = (undefined1 *)((long)register0x00000008 + -0xa8);
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar12;
  *(undefined **)(puVar3 + -8) = puVar13;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar5 = iVar2 == 6;
  if ((bool)uVar5) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar5 = iVar2 == 7;
    if ((bool)uVar5) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar5 = iVar2 == 8;
      if ((bool)uVar5) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((puVar3[-0xb0] & 1) == 0) {
code_r0x00010777b1ac:
          func_0x00010777db94();
        }
        else {
          func_0x00010777d4d8();
        }
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(long **)(puVar3 + -0xe0) = unaff_x20;
  *(undefined1 **)(puVar3 + -0xd8) = unaff_x19;
  *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -200) = &SUB_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)(puVar3 + -0xe8) = extraout_x9;
  if ((int)param_1[0xd] == 0) {
    *(undefined4 *)(puVar3 + -0xf0) = 0;
    unaff_x19 = puVar3 + -0x158;
    func_0x00010777dd30();
    plVar6 = (long *)(puVar3 + -0x150);
    func_0x00010726af18(plVar6);
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return plVar6;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(long **)(puVar3 + -0x180) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x178) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x170) = puVar3 + -0xd0;
    *(undefined **)(puVar3 + -0x168) = &UNK_10777b260;
    func_0x000107776fc4();
    bVar1 = (ulong)plVar7 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8_00 = (int)plVar7;
      extraout_x8_00[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8_00 = 0;
    }
    *(bool *)(extraout_x8_00 + 5) = bVar1;
    return plVar7;
  }
  func_0x00010777d490();
  if (!(bool)uVar5) goto code_r0x00010777b254;
  uVar11 = *(undefined8 *)(puVar3 + -0xe0);
  puVar10 = *(undefined8 **)(puVar3 + -0xd8);
  *(undefined8 *)(puVar3 + -0xe0) = uVar11;
  *(undefined8 **)(puVar3 + -0xd8) = puVar10;
  *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0xd0);
  *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -200);
  puVar12 = puVar3 + -0xd0;
  func_0x00010777d31c();
  *(undefined8 *)(puVar3 + -0xe8) = extraout_x9_00;
  uVar5 = (int)param_1[0xd] == 1;
  if ((bool)uVar5) {
    puVar10 = (undefined8 *)(puVar3 + -0x158);
    puVar3[-0x150] = (char)param_1[1];
    *(undefined4 *)(puVar3 + -0xf0) = 1;
    func_0x00010777dd30();
    param_1 = (long *)(puVar3 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    puVar13 = &UNK_10777b31c;
    func_0x00010777d638();
    puVar4 = puVar3 + -0x160;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar5) goto code_r0x00010777b310;
    puVar12 = *(undefined1 **)(puVar3 + -0xd0);
    puVar13 = *(undefined **)(puVar3 + -200);
    uVar11 = *(undefined8 *)(puVar3 + -0xe0);
    puVar10 = *(undefined8 **)(puVar3 + -0xd8);
  }
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar4 + -0x28) = puVar3 + -0xa8;
  *(undefined8 *)(puVar4 + -0x20) = uVar11;
  *(undefined8 **)(puVar4 + -0x18) = puVar10;
  *(undefined1 **)(puVar4 + -0x10) = puVar12;
  *(undefined **)(puVar4 + -8) = puVar13;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar5 = iVar2 == 2;
  if ((bool)uVar5) {
    *(undefined8 *)(puVar4 + -0xa0) = *(undefined8 *)(extraout_x9_01 + 8);
    *(undefined4 *)(puVar4 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar5 = iVar2 == 3;
    if ((bool)uVar5) {
      param_1 = (long *)(puVar4 + -0xa8);
      func_0x0001072ddd58(param_1,extraout_x9_01 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar5 = iVar2 == 4;
      if ((bool)uVar5) {
        uVar15 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar4 + -0xa0) = uVar15;
        *(undefined4 *)(puVar4 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar9 = *(long *)(extraout_x9_01 + 0x10);
        uVar15 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar4 + -0xa0) = uVar15;
        uVar5 = 1;
        if (lVar9 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_01 != 0);
        }
        *(undefined4 *)(puVar4 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar5 = iVar2 == 6;
        if ((bool)uVar5) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar5 = iVar2 == 7;
          if ((bool)uVar5) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar5 = iVar2 == 8;
            if ((bool)uVar5) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar5 = puVar4[-0xac] == '\x01';
              if ((bool)uVar5) {
                uVar15 = *(undefined8 *)(puVar4 + -0xbc);
                puVar10[1] = *(undefined8 *)(puVar4 + -0xb4);
                *puVar10 = uVar15;
                *(undefined4 *)(puVar10 + 2) = 1;
                uVar8 = 1;
              }
              else {
                func_0x00010777d748();
                uVar8 = extraout_w8_07;
              }
              *(undefined1 *)((long)puVar10 + 0x14) = uVar8;
              goto code_r0x00010777b450;
            }
            func_0x00010777d9ac();
            func_0x0001074fd134();
            func_0x00010777d3e4();
          }
        }
      }
    }
  }
  func_0x00010777d640();
code_r0x00010777b450:
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if (((((int)param_1[0xd] != 0) && ((int)param_1[0xd] != 1)) && ((int)param_1[0xd] != 2)) &&
     ((int)param_1[0xd] == 3)) {
    puVar13 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar4 + -0xe0) = uVar11;
    *(undefined8 **)(puVar4 + -0xd8) = puVar10;
    *(undefined1 **)(puVar4 + -0xd0) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -200) = puVar13;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (long *)(ulong)((uint)puVar10 & 0xffff);
  }
  return (long *)0x0;
}



/* Entry: 10777ae4c; end: 10777aeab;  */

undefined8 * FUN_10777ae4c(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 extraout_w8;
  undefined1 uVar8;
  long lVar9;
  undefined4 *extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char acStack_58c [1212];
  undefined8 ******ppppppuStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [16];
  byte bStack_a0;
  char *pcVar4;
  
  pcVar4 = auStack_b0;
  pppppppuVar10 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d224();
  func_0x00010777d8d4();
  func_0x00010777d4c0();
  func_0x00010777d648();
  if ((bStack_a0 & 1) == 0) {
    func_0x00010777db94();
  }
  else {
    func_0x00010777d4d8();
  }
  func_0x00010777d7c8();
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  puVar12 = &UNK_10777aeac;
  func_0x00010777d638();
  uVar5 = *(int *)(param_1 + 0xd) == 2;
  if ((bool)uVar5) {
    puVar6 = param_1 + 1;
    pcVar4 = acStack_58c + 0x42c;
    puStack_b8 = &UNK_10777aeac;
    ppppppuStack_c0 = pppppppuVar10;
    func_0x00010777d224();
    func_0x00010777d904();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((acStack_58c[0x43c] & 1U) == 0) {
      func_0x00010777db94();
      param_1 = param_2;
      param_2 = puVar6;
    }
    else {
      func_0x00010777d4d8();
      param_1 = param_2;
      param_2 = puVar6;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar12 = &UNK_10777af30;
    func_0x00010777d638();
    pppppppuVar10 = &ppppppuStack_c0;
  }
  uVar5 = *(int *)(param_1 + 0xd) == 3;
  puVar6 = param_2;
  if ((bool)uVar5) {
    puVar6 = param_1 + 1;
    *(undefined8 *)(pcVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(pcVar4 + -0x28) = unaff_x21;
    *(undefined8 **)(pcVar4 + -0x20) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar10;
    *(undefined **)(pcVar4 + -8) = puVar12;
    pppppppuVar10 = (undefined8 *******)(pcVar4 + -0x10);
    param_1 = param_2;
    func_0x00010777d1f4();
    func_0x00010777dd3c();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((pcVar4[-0xb0] & 1U) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar12 = &UNK_10777afbc;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xc0;
    unaff_x20 = param_2;
  }
  uVar5 = *(int *)(param_1 + 0xd) == 4;
  if ((bool)uVar5) {
    puVar7 = param_1 + 1;
    *(undefined8 **)(pcVar4 + -0x20) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar10;
    *(undefined **)(pcVar4 + -8) = puVar12;
    pppppppuVar10 = (undefined8 *******)(pcVar4 + -0x10);
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((pcVar4[-0xa0] & 1U) == 0) {
      func_0x00010777db94();
      param_1 = puVar6;
      puVar6 = puVar7;
    }
    else {
      func_0x00010777d4d8();
      param_1 = puVar6;
      puVar6 = puVar7;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar12 = &UNK_10777b040;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  uVar5 = *(int *)(param_1 + 0xd) == 5;
  if ((bool)uVar5) {
    puVar7 = param_1 + 1;
    *(undefined8 **)(pcVar4 + -0x20) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar10;
    *(undefined **)(pcVar4 + -8) = puVar12;
    pppppppuVar10 = (undefined8 *******)(pcVar4 + -0x10);
    func_0x00010777d224();
    lVar9 = puVar7[1];
    uVar13 = *puVar7;
    *(undefined8 *)(pcVar4 + -0x88) = puVar7[1];
    *(undefined8 *)(pcVar4 + -0x90) = uVar13;
    param_1 = puVar6;
    puVar6 = puVar7;
    if (lVar9 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((pcVar4[-0xa0] & 1U) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar12 = &UNK_10777b0e0;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  puVar3 = pcVar4 + -0xc0;
  *(undefined8 *)(pcVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(pcVar4 + -0x28) = unaff_x21;
  *(undefined8 **)(pcVar4 + -0x20) = unaff_x20;
  *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
  *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar10;
  *(undefined **)(pcVar4 + -8) = puVar12;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0xd);
  uVar5 = iVar2 == 6;
  if ((bool)uVar5) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((pcVar4[-0xb0] & 1U) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar5 = iVar2 == 7;
    if ((bool)uVar5) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((pcVar4[-0xb0] & 1U) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar5 = iVar2 == 8;
      if ((bool)uVar5) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((pcVar4[-0xb0] & 1U) == 0) {
code_r0x00010777b1ac:
          func_0x00010777db94();
        }
        else {
          func_0x00010777d4d8();
        }
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((pcVar4[-0xb0] & 1U) == 0) goto code_r0x00010777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(undefined8 **)(pcVar4 + -0xe0) = unaff_x20;
  *(undefined1 **)(pcVar4 + -0xd8) = unaff_x19;
  *(char **)(pcVar4 + -0xd0) = pcVar4 + -0x10;
  *(undefined **)(pcVar4 + -200) = &SUB_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)(pcVar4 + -0xe8) = extraout_x9;
  if (*(int *)(param_1 + 0xd) == 0) {
    *(undefined4 *)(pcVar4 + -0xf0) = 0;
    unaff_x19 = pcVar4 + -0x158;
    func_0x00010777dd30();
    puVar7 = (undefined8 *)(pcVar4 + -0x150);
    func_0x00010726af18(puVar7);
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return puVar7;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(undefined8 **)(pcVar4 + -0x180) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x178) = unaff_x19;
    *(char **)(pcVar4 + -0x170) = pcVar4 + -0xd0;
    *(undefined **)(pcVar4 + -0x168) = &UNK_10777b260;
    func_0x000107776fc4();
    bVar1 = (ulong)puVar6 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8 = (int)puVar6;
      extraout_x8[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8 = 0;
    }
    *(bool *)(extraout_x8 + 5) = bVar1;
    return puVar6;
  }
  func_0x00010777d490();
  if (!(bool)uVar5) goto code_r0x00010777b254;
  uVar13 = *(undefined8 *)(pcVar4 + -0xe0);
  puVar6 = *(undefined8 **)(pcVar4 + -0xd8);
  *(undefined8 *)(pcVar4 + -0xe0) = uVar13;
  *(undefined8 **)(pcVar4 + -0xd8) = puVar6;
  *(undefined8 *)(pcVar4 + -0xd0) = *(undefined8 *)(pcVar4 + -0xd0);
  *(undefined8 *)(pcVar4 + -200) = *(undefined8 *)(pcVar4 + -200);
  puVar11 = pcVar4 + -0xd0;
  func_0x00010777d31c();
  *(undefined8 *)(pcVar4 + -0xe8) = extraout_x9_00;
  uVar5 = *(int *)(param_1 + 0xd) == 1;
  if ((bool)uVar5) {
    puVar6 = (undefined8 *)(pcVar4 + -0x158);
    pcVar4[-0x150] = *(undefined1 *)(param_1 + 1);
    *(undefined4 *)(pcVar4 + -0xf0) = 1;
    func_0x00010777dd30();
    param_1 = (undefined8 *)(pcVar4 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    puVar12 = &UNK_10777b31c;
    func_0x00010777d638();
    puVar3 = pcVar4 + -0x160;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar5) goto code_r0x00010777b310;
    puVar11 = *(undefined1 **)(pcVar4 + -0xd0);
    puVar12 = *(undefined **)(pcVar4 + -200);
    uVar13 = *(undefined8 *)(pcVar4 + -0xe0);
    puVar6 = *(undefined8 **)(pcVar4 + -0xd8);
  }
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(char **)(puVar3 + -0x28) = pcVar4 + -0xa8;
  *(undefined8 *)(puVar3 + -0x20) = uVar13;
  *(undefined8 **)(puVar3 + -0x18) = puVar6;
  *(undefined1 **)(puVar3 + -0x10) = puVar11;
  *(undefined **)(puVar3 + -8) = puVar12;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0xd);
  uVar5 = iVar2 == 2;
  if ((bool)uVar5) {
    *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(extraout_x9_01 + 8);
    *(undefined4 *)(puVar3 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar5 = iVar2 == 3;
    if ((bool)uVar5) {
      param_1 = (undefined8 *)(puVar3 + -0xa8);
      func_0x0001072ddd58(param_1,extraout_x9_01 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar5 = iVar2 == 4;
      if ((bool)uVar5) {
        uVar14 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar14;
        *(undefined4 *)(puVar3 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar9 = *(long *)(extraout_x9_01 + 0x10);
        uVar14 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar14;
        uVar5 = 1;
        if (lVar9 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_00 != 0);
        }
        *(undefined4 *)(puVar3 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar5 = iVar2 == 6;
        if ((bool)uVar5) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar5 = iVar2 == 7;
          if ((bool)uVar5) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar5 = iVar2 == 8;
            if ((bool)uVar5) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar5 = puVar3[-0xac] == '\x01';
              if ((bool)uVar5) {
                uVar14 = *(undefined8 *)(puVar3 + -0xbc);
                puVar6[1] = *(undefined8 *)(puVar3 + -0xb4);
                *puVar6 = uVar14;
                *(undefined4 *)(puVar6 + 2) = 1;
                uVar8 = 1;
              }
              else {
                func_0x00010777d748();
                uVar8 = extraout_w8;
              }
              *(undefined1 *)((long)puVar6 + 0x14) = uVar8;
              goto code_r0x00010777b450;
            }
            func_0x00010777d9ac();
            func_0x0001074fd134();
            func_0x00010777d3e4();
          }
        }
      }
    }
  }
  func_0x00010777d640();
code_r0x00010777b450:
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if ((((*(int *)(param_1 + 0xd) != 0) && (*(int *)(param_1 + 0xd) != 1)) &&
      (*(int *)(param_1 + 0xd) != 2)) && (*(int *)(param_1 + 0xd) == 3)) {
    puVar12 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar3 + -0xe0) = uVar13;
    *(undefined8 **)(puVar3 + -0xd8) = puVar6;
    *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -200) = puVar12;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (undefined8 *)(ulong)((uint)puVar6 & 0xffff);
  }
  return (undefined8 *)0x0;
}



/* Entry: 10777b064; end: 10777b0df;  */

undefined8 * FUN_10777b064(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined1 extraout_w8;
  undefined1 uVar7;
  undefined4 *extraout_x8;
  long lVar8;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar9;
  undefined8 uVar10;
  char acStack_2bc [140];
  undefined1 auStack_210 [8];
  undefined8 uStack_208;
  undefined1 auStack_200 [96];
  undefined4 uStack_1a0;
  undefined8 ******ppppppuStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [16];
  byte bStack_160;
  undefined1 auStack_158 [120];
  undefined8 *****pppppuStack_c0;
  undefined *puStack_b8;
  byte bStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  func_0x00010777d224();
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010777d468();
    } while (extraout_w10 != 0);
  }
  func_0x00010777dc70();
  func_0x00010777d4c0();
  func_0x00010777d648();
  if ((bStack_a0 & 1) == 0) {
    func_0x00010777db94();
  }
  else {
    func_0x00010777d4d8();
  }
  func_0x00010777d7c8();
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  puVar3 = auStack_170;
  puStack_b8 = &UNK_10777b0e0;
  pppppuStack_c0 = (undefined8 *****)&stack0xfffffffffffffff0;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0xd);
  uVar4 = iVar2 == 6;
  if ((bool)uVar4) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((bStack_160 & 1) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar4 = iVar2 == 7;
    if ((bool)uVar4) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((bStack_160 & 1) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar4 = iVar2 == 8;
      if ((bool)uVar4) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((bStack_160 & 1) == 0) {
code_r0x00010777b1ac:
          func_0x00010777db94();
        }
        else {
          func_0x00010777d4d8();
        }
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((bStack_160 & 1) == 0) goto code_r0x00010777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  puStack_178 = &SUB_10777b1f8;
  ppppppuStack_180 = &pppppuStack_c0;
  func_0x00010777d31c();
  if (*(int *)(param_1 + 0xd) == 0) {
    uStack_1a0 = 0;
    func_0x00010777dd30();
    puVar5 = (undefined8 *)auStack_200;
    func_0x00010726af18(puVar5);
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return puVar5;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    func_0x000107776fc4();
    bVar1 = (ulong)param_2 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8 = (int)param_2;
      extraout_x8[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8 = 0;
    }
    *(bool *)(extraout_x8 + 5) = bVar1;
    return param_2;
  }
  func_0x00010777d490();
  if (!(bool)uVar4) goto code_r0x00010777b254;
  func_0x00010777d31c();
  uVar4 = *(int *)(param_1 + 0xd) == 1;
  if ((bool)uVar4) {
    unaff_x19 = &uStack_208;
    auStack_200[0] = *(undefined1 *)(param_1 + 1);
    uStack_1a0 = 1;
    func_0x00010777dd30();
    param_1 = (undefined8 *)auStack_200;
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return param_1;
    }
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    puVar3 = auStack_210;
    pppppppuVar9 = &ppppppuStack_180;
    puVar6 = &UNK_10777b31c;
  }
  else {
    func_0x00010777d490();
    pppppppuVar9 = (undefined8 *******)ppppppuStack_180;
    puVar6 = puStack_178;
    if (!(bool)uVar4) goto code_r0x00010777b310;
  }
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar3 + -0x28) = auStack_158;
  *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
  *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
  *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar9;
  *(undefined **)(puVar3 + -8) = puVar6;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0xd);
  uVar4 = iVar2 == 2;
  if ((bool)uVar4) {
    *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(extraout_x9 + 8);
    *(undefined4 *)(puVar3 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar4 = iVar2 == 3;
    if ((bool)uVar4) {
      param_1 = (undefined8 *)(puVar3 + -0xa8);
      func_0x0001072ddd58(param_1,extraout_x9 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar4 = iVar2 == 4;
      if ((bool)uVar4) {
        uVar10 = *(undefined8 *)(extraout_x9 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar10;
        *(undefined4 *)(puVar3 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar8 = *(long *)(extraout_x9 + 0x10);
        uVar10 = *(undefined8 *)(extraout_x9 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar10;
        uVar4 = 1;
        if (lVar8 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_00 != 0);
        }
        *(undefined4 *)(puVar3 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar4 = iVar2 == 6;
        if ((bool)uVar4) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar4 = iVar2 == 7;
          if ((bool)uVar4) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar4 = iVar2 == 8;
            if ((bool)uVar4) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar4 = puVar3[-0xac] == '\x01';
              if ((bool)uVar4) {
                uVar10 = *(undefined8 *)(puVar3 + -0xbc);
                unaff_x19[1] = *(undefined8 *)(puVar3 + -0xb4);
                *unaff_x19 = uVar10;
                *(undefined4 *)(unaff_x19 + 2) = 1;
                uVar7 = 1;
              }
              else {
                func_0x00010777d748();
                uVar7 = extraout_w8;
              }
              *(undefined1 *)((long)unaff_x19 + 0x14) = uVar7;
              goto code_r0x00010777b450;
            }
            func_0x00010777d9ac();
            func_0x0001074fd134();
            func_0x00010777d3e4();
          }
        }
      }
    }
  }
  func_0x00010777d640();
code_r0x00010777b450:
  func_0x00010777d1dc();
  if ((bool)uVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if ((((*(int *)(param_1 + 0xd) != 0) && (*(int *)(param_1 + 0xd) != 1)) &&
      (*(int *)(param_1 + 0xd) != 2)) && (*(int *)(param_1 + 0xd) == 3)) {
    puVar6 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar3 + -0xe0) = unaff_x20;
    *(undefined8 **)(puVar3 + -0xd8) = unaff_x19;
    *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -200) = puVar6;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (undefined8 *)(ulong)((uint)unaff_x19 & 0xffff);
  }
  return (undefined8 *)0x0;
}



/* Entry: 10777b524; end: 10777b57b;  */

undefined2 FUN_10777b524(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    FUN_1077f2cf8();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777b744; end: 10777b79b;  */

undefined2 FUN_10777b744(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f26b4();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777b964; end: 10777b9bb;  */

undefined2 FUN_10777b964(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    FUN_1077f2814();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777bb84; end: 10777bbdb;  */

undefined2 FUN_10777bb84(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f29b0();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777bda4; end: 10777bdfb;  */

undefined2 FUN_10777bda4(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f24c8();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777bfb4; end: 10777c03f;  */

void FUN_10777bfb4(undefined8 param_1,undefined1 *param_2,long param_3)

{
  undefined1 auStack_58 [8];
  undefined1 *puStack_50;
  
  func_0x00010777d8bc();
  if (param_3 != 0) {
    func_0x000107404e64(auStack_58,param_3);
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *puStack_50 = *param_2;
      param_2 = param_2 + 1;
      puStack_50 = puStack_50 + 1;
    }
  }
  func_0x00010777dc60();
  func_0x000107404ec8();
  func_0x00010777d878();
  func_0x000107535b08();
  func_0x0001073e7720(auStack_58);
  return;
}



/* Entry: 10777c280; end: 10777c467;  */

undefined1 * FUN_10777c280(undefined1 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 extraout_w8;
  undefined1 uVar5;
  int extraout_w8_00;
  int extraout_w10;
  long unaff_x19;
  undefined1 *unaff_x21;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_48;
  
  puVar3 = param_1;
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)in_ZR) {
    uStack_a0 = *(undefined8 *)(param_1 + 0x10);
    uStack_a8 = *(undefined8 *)(param_1 + 8);
    if (*(long *)(param_1 + 0x10) != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    uStack_48 = 5;
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar2 = (uint)unaff_x21 == 0xff;
    if (0xff < (uint)unaff_x21) {
      func_0x00010777d400();
      FUN_10777bfb4();
      goto LAB_10777c3f8;
    }
LAB_10777c3d0:
    func_0x00010777d748();
    uVar5 = extraout_w8;
  }
  else {
    if (extraout_w8_00 == 6) {
      unaff_x21 = auStack_b0;
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d950();
      uVar1 = (uint)puVar3 & 0xffff;
      func_0x00010777d640();
      uVar2 = uVar1 == 0xff;
      if (uVar1 < 0x100) goto LAB_10777c3d0;
      func_0x00010777d400();
      FUN_10777bfb4();
    }
    else if (extraout_w8_00 == 7) {
      unaff_x21 = auStack_b0;
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d950();
      uVar1 = (uint)puVar3 & 0xffff;
      func_0x00010777d640();
      uVar2 = uVar1 == 0xff;
      if (uVar1 < 0x100) goto LAB_10777c3d0;
      func_0x00010777d400();
      FUN_10777bfb4();
    }
    else {
      if (extraout_w8_00 == 8) {
        func_0x00010777dce0();
        func_0x00010777d398(*(undefined8 *)(param_1 + 8));
        func_0x000107535980(auStack_b0);
        unaff_x21 = (undefined1 *)(*(undefined8 **)(param_1 + 8))[1];
        for (puVar3 = (undefined1 *)**(undefined8 **)(param_1 + 8); uVar2 = puVar3 == unaff_x21,
            !(bool)uVar2; puVar3 = puVar3 + 0x70) {
          puVar4 = puVar3;
          func_0x00010777bf6c();
          uVar1 = (uint)puVar4 & 0xffff;
          uVar2 = uVar1 == 0x100;
          if (uVar1 < 0x100) {
            func_0x00010777d724();
            goto LAB_10777c41c;
          }
          func_0x00010777d700();
          func_0x000107535a48();
        }
        func_0x00010777dac0();
        func_0x000107535ae0();
        func_0x00010777d338();
        func_0x000107404cc4();
LAB_10777c41c:
        puVar3 = auStack_b0;
        func_0x0001073e7720();
        goto LAB_10777c408;
      }
      unaff_x21 = auStack_b0;
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d950();
      uVar1 = (uint)puVar3 & 0xffff;
      func_0x00010777d640();
      uVar2 = uVar1 == 0xff;
      if (uVar1 < 0x100) goto LAB_10777c3d0;
      func_0x00010777d400();
      FUN_10777bfb4();
    }
LAB_10777c3f8:
    func_0x00010777d2c0();
    func_0x000107404cc4();
    uVar5 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x10) = uVar5;
LAB_10777c408:
  func_0x00010777d1dc();
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = unaff_x21 + 8;
  func_0x00010726af18();
  func_0x00010777d638();
  if ((((*(int *)(puVar4 + 0x68) != 0) && (*(int *)(puVar4 + 0x68) != 1)) &&
      (*(int *)(puVar4 + 0x68) != 2)) && (*(int *)(puVar4 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2dd0();
    func_0x00010777d374();
    return (undefined1 *)(ulong)((uint)puVar3 & 0xffff);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10777c780; end: 10777c7b3;  */

undefined8 FUN_10777c780(undefined8 param_1)

{
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f2f18();
  func_0x00010777d650();
  return param_1;
}



/* Entry: 10777c9a4; end: 10777c9d3;  */

undefined2 FUN_10777c9a4(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f3294();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777cbc4; end: 10777cbf3;  */

undefined2 FUN_10777cbc4(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f33dc();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777cde4; end: 10777ce13;  */

undefined2 FUN_10777cde4(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f2fb8();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777d09c; end: 10777d127;  */

ulong FUN_10777d09c(long param_1,undefined8 *param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  uint *puVar2;
  uint uStack_34;
  
  if (*(int *)(param_1 + 0x68) != 8) {
    return 0;
  }
  func_0x00010777dbe0();
  if (extraout_x8 == 0x1c0) {
    puVar2 = &uStack_34;
    for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x70) {
      lVar1 = unaff_x20;
      func_0x000107280530(unaff_x20,*param_2);
      if (((uint)lVar1 >> 8 & 1) == 0) goto LAB_10777d0f8;
      *(char *)puVar2 = (char)lVar1;
      puVar2 = (uint *)((long)puVar2 + 1);
    }
    lVar1 = 1;
  }
  else {
LAB_10777d0f8:
    lVar1 = 0;
    uStack_34 = 0;
  }
  return (ulong)uStack_34 | lVar1 << 0x20;
}



/* Entry: 10777e150; end: 10777e4af;  */

/* WARNING: Possible PIC construction at 0x00010777e520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010777e77c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010777e7b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010777e64c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010777e7b8) */
/* WARNING: Removing unreachable block (ram,0x00010777e814) */
/* WARNING: Removing unreachable block (ram,0x00010777e828) */
/* WARNING: Removing unreachable block (ram,0x00010777e864) */
/* WARNING: Removing unreachable block (ram,0x00010777e874) */
/* WARNING: Removing unreachable block (ram,0x00010777e884) */
/* WARNING: Removing unreachable block (ram,0x00010777e8b4) */
/* WARNING: Removing unreachable block (ram,0x00010777e850) */
/* WARNING: Removing unreachable block (ram,0x00010777e780) */
/* WARNING: Removing unreachable block (ram,0x00010777e524) */
/* WARNING: Removing unreachable block (ram,0x00010777e650) */

undefined8 **
FUN_10777e150(undefined8 *param_1,undefined8 *param_2,undefined8 **param_3,undefined8 **param_4)

{
  ulong uVar1;
  ushort uVar2;
  undefined8 **ppuVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined8 *puVar8;
  undefined8 extraout_x8_00;
  undefined8 **extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar9;
  uint uVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  undefined8 **ppuVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined8 *apuStack_220 [3];
  undefined8 *apuStack_208 [3];
  undefined8 *puStack_1f0;
  undefined1 auStack_1e8 [8];
  uint auStack_1e0 [2];
  undefined8 *apuStack_1d8 [14];
  byte bStack_168;
  undefined8 *puStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_70 [32];
  char cStack_50;
  undefined8 uStack_48;
  
  puVar14 = &stack0xfffffffffffffff0;
  ppuVar12 = apuStack_220;
  ppuVar5 = apuStack_220;
  ppuVar6 = param_3;
  func_0x00010777f8f4();
  ppuVar13 = ppuVar6 + 1;
  ppuVar3 = ppuVar13;
  uStack_48 = extraout_x8;
  (*(code *)(*ppuVar6)[3])();
  if ((int)ppuVar3 == 0) {
    func_0x00010002b838(apuStack_220,&UNK_10f4271fa);
    func_0x00010777f9d4();
  }
  else {
    func_0x00010777fa0c();
    in_ZR = ppuVar3 == (undefined8 **)0x2;
    if ((bool)in_ZR) {
      puVar8 = *param_3;
      param_3 = &puStack_1f0;
      (*(code *)puVar8[5])(&puStack_1f0,ppuVar13,1);
      iVar4 = (int)auStack_1e8;
      (*(code *)puStack_1f0[6])();
      if (iVar4 == 0) {
LAB_10777e238:
        func_0x00010002b838(&puStack_160,&UNK_10f42723e);
        ppuVar12 = &puStack_160;
        func_0x00010777f9d4();
        func_0x00010777f9c4();
        auStack_1e0[0] = auStack_1e0[0] & 0xffffff00;
        bStack_168 = 0;
      }
      else {
        puStack_160 = (undefined8 *)0x0;
        uStack_158 = 0;
        uStack_150 = 0;
        ppuVar12 = &puStack_160;
        (*(code *)puStack_1f0[0xf])(auStack_1e0,auStack_1e8);
        in_ZR = bStack_168 == 1;
        if (!(bool)in_ZR) {
LAB_10777e214:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_70,&puStack_160);
          func_0x00010777f9d4();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
          func_0x00010777f9e4();
          func_0x00010777f9c4();
          goto LAB_10777e238;
        }
        in_ZR = uStack_150._7_1_ == 0;
        uVar1 = uStack_158;
        if (-1 < uStack_150) {
          uVar1 = (ulong)uStack_150._7_1_;
        }
        if (uVar1 != 0) goto LAB_10777e214;
        func_0x00010777f9c4();
      }
      ppuVar5 = &puStack_1f0;
      func_0x0001072f5f6c();
      if ((bStack_168 & 1) == 0) {
LAB_10777e35c:
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 2) = 0;
      }
      else {
        if (auStack_1e0[0] == 2) {
          ppuVar5 = &puStack_160;
          ppuVar12 = apuStack_1d8;
          func_0x00010774dd9c();
          func_0x00010777f914();
          func_0x00010777f9dc();
          in_ZR = cStack_50 == '\x01';
          if (!(bool)in_ZR) {
LAB_10777e358:
            func_0x00010777fa04();
            goto LAB_10777e35c;
          }
          func_0x00010777f904();
        }
        else {
          if (auStack_1e0[0] != 1) {
            param_3 = (undefined8 **)apuStack_1d8[0][1];
            for (ppuVar13 = (undefined8 **)*apuStack_1d8[0]; in_ZR = ppuVar13 == param_3,
                !(bool)in_ZR; ppuVar13 = ppuVar13 + 0xe) {
              ppuVar5 = &puStack_160;
              ppuVar12 = ppuVar13;
              func_0x0001072692d4();
              func_0x00010777f914();
              func_0x00010777f9dc();
              in_ZR = cStack_50 == '\x01';
              if ((bool)in_ZR) {
                func_0x00010777f904();
                goto LAB_10777e3b0;
              }
              func_0x00010777fa04();
            }
            goto LAB_10777e35c;
          }
          ppuVar5 = &puStack_160;
          ppuVar12 = apuStack_1d8;
          func_0x0001072692d4();
          func_0x00010777f914();
          func_0x00010777f9dc();
          in_ZR = cStack_50 == '\x01';
          if (!(bool)in_ZR) goto LAB_10777e358;
          func_0x00010777f904();
        }
LAB_10777e3b0:
        param_2 = puStack_160;
        param_1[1] = uStack_158;
        *param_1 = puStack_160;
        puStack_160 = (undefined8 *)0x0;
        uStack_158 = 0;
        *(undefined1 *)(param_1 + 2) = 1;
        ppuVar5 = &puStack_160;
        func_0x00010777f8b8();
        func_0x00010777fa04();
      }
      func_0x00010777f9e4();
      goto LAB_10777e3d4;
    }
    func_0x00010777fa0c();
    func_0x000107878fec(auStack_1e0,(long)ppuVar3 + -1);
    func_0x0001004c3cd0(&puStack_160,&UNK_10f4271bc,auStack_1e0);
    func_0x00010048a6c8(apuStack_208,&puStack_160,&UNK_10f417b93);
    ppuVar12 = apuStack_208;
    func_0x00010777f9d4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_208);
    func_0x00010777f9c4();
    ppuVar5 = (undefined8 **)auStack_1e0;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
LAB_10777e3d4:
  func_0x00010777f8e0(uStack_48);
  if ((bool)in_ZR) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  ppuVar6 = ppuVar5;
  func_0x00010777fa04();
  func_0x00010777f9e4();
  puVar15 = &UNK_10777e4b0;
  func_0x00010777f924();
  ppuVar3 = apuStack_220;
code_r0x00010777e4b0:
  *(undefined8 ***)((long)ppuVar3 + -0x30) = param_3;
  *(undefined8 ***)((long)ppuVar3 + -0x28) = ppuVar13;
  *(undefined8 ***)((long)ppuVar3 + -0x20) = param_4;
  *(undefined8 ***)((long)ppuVar3 + -0x18) = ppuVar5;
  *(undefined1 **)((long)ppuVar3 + -0x10) = puVar14;
  *(undefined **)((long)ppuVar3 + -8) = puVar15;
  puVar14 = (undefined1 *)((long)ppuVar3 + -0x10);
  func_0x00010777fa9c();
  func_0x00010777f8f4();
  *(undefined8 *)((long)ppuVar3 + -0x38) = extraout_x8_00;
  uVar2 = *(ushort *)((long)ppuVar12 + 0x16);
  if ((uVar2 >> 4 & 1) == 0) {
    if ((uVar2 >> 3 & 1) != 0) {
      in_ZR = uVar2 == 10;
      *(uint *)ppuVar5 = 6;
      *(undefined1 *)(ppuVar5 + 1) = in_ZR;
      goto code_r0x00010777e5f0;
    }
    if ((uVar2 >> 10 & 1) != 0) {
      in_ZR = (uVar2 & 0x1000) == 0;
      ppuVar12 = (undefined8 **)param_4[1];
      if (!(bool)in_ZR) {
        ppuVar12 = param_4;
      }
      func_0x00010002b838((undefined1 *)((long)ppuVar3 + -0x90),ppuVar12);
      func_0x000107268798(ppuVar5,(undefined1 *)((long)ppuVar3 + -0x90));
      ppuVar6 = (undefined8 **)((long)ppuVar3 + -0x90);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      goto code_r0x00010777e5f0;
    }
    in_ZR = uVar2 == 3;
    if ((bool)in_ZR) {
      *(undefined **)((long)ppuVar3 + -0xc0) = &UNK_10e52b660;
      *(undefined8 *)((long)ppuVar3 + -0xb8) = 0;
      *(undefined8 *)((long)ppuVar3 + -0xb0) = 0;
      *(undefined8 *)((long)ppuVar3 + -0xa8) = 0;
      puVar8 = param_4[1];
      ppuVar12 = (undefined8 **)(puVar8 + 3);
      ppuVar13 = (undefined8 **)((ulong)*(uint *)param_4 * 0x30);
      if ((ulong)*(uint *)param_4 * 3 == 0) {
        func_0x000104c33260((undefined1 *)((long)ppuVar3 + -0xf0),
                            (undefined1 *)((long)ppuVar3 + -0xc0));
        *(uint *)ppuVar5 = 1;
        param_2 = *(undefined8 **)((long)ppuVar3 + -0xf0);
        ppuVar5[2] = *(undefined8 **)((long)ppuVar3 + -0xe8);
        ppuVar5[1] = param_2;
        *(undefined8 *)((long)ppuVar3 + -0xf0) = 0;
        *(undefined8 *)((long)ppuVar3 + -0xe8) = 0;
        func_0x00010777fa7c();
        ppuVar6 = (undefined8 **)((long)ppuVar3 + -0xc0);
        func_0x000104c33548();
        param_4 = ppuVar12;
        goto code_r0x00010777e5f0;
      }
      if ((*(ushort *)((long)puVar8 + 0x16) >> 0xc & 1) == 0) {
        puVar8 = (undefined8 *)puVar8[1];
      }
      *(undefined8 **)((long)ppuVar3 + -200) = puVar8;
      ppuVar6 = (undefined8 **)((long)ppuVar3 + -0x78);
      puVar15 = &UNK_10777e650;
      ppuVar3 = (undefined8 **)((long)ppuVar3 + -0xf0);
      param_4 = ppuVar12;
      goto code_r0x00010777e4b0;
    }
    in_ZR = uVar2 == 4;
    if (!(bool)in_ZR) {
      *(uint *)ppuVar5 = 7;
      goto code_r0x00010777e5f0;
    }
    *(undefined8 *)((long)ppuVar3 + -0xc0) = 0;
    *(undefined8 *)((long)ppuVar3 + -0xb8) = 0;
    *(undefined8 *)((long)ppuVar3 + -0xb0) = 0;
    func_0x0001072ac134((undefined1 *)((long)ppuVar3 + -0xc0),*(uint *)param_4);
    ppuVar12 = (undefined8 **)param_4[1];
    ppuVar11 = (undefined8 **)((ulong)*(uint *)param_4 * 0x18);
    ppuVar13 = ppuVar12;
    if ((ulong)*(uint *)param_4 * 3 != 0) {
      ppuVar6 = (undefined8 **)((long)ppuVar3 + -0x78);
      puVar15 = &UNK_10777e524;
      ppuVar3 = (undefined8 **)((long)ppuVar3 + -0xf0);
      param_4 = ppuVar11;
      goto code_r0x00010777e4b0;
    }
    func_0x000107327958((undefined1 *)((long)ppuVar3 + -0xa0),(undefined1 *)((long)ppuVar3 + -0xc0))
    ;
    *(uint *)ppuVar5 = 0;
    param_2 = *(undefined8 **)((long)ppuVar3 + -0xa0);
    ppuVar5[2] = *(undefined8 **)((long)ppuVar3 + -0x98);
    ppuVar5[1] = param_2;
    *(undefined8 *)((long)ppuVar3 + -0xa0) = 0;
    *(undefined8 *)((long)ppuVar3 + -0x98) = 0;
    func_0x000104c33108((undefined1 *)((long)ppuVar3 + -0xa0));
    ppuVar6 = (undefined8 **)((long)ppuVar3 + -0xc0);
    func_0x000107269124();
    param_4 = ppuVar11;
  }
  else {
    if ((uVar2 >> 7 & 1) == 0) {
      if ((uVar2 >> 8 & 1) == 0) {
        ppuVar6 = param_4;
        func_0x0001073274d0();
        *(uint *)ppuVar5 = 3;
        ppuVar5[1] = param_2;
        goto code_r0x00010777e5f0;
      }
      puVar8 = *param_4;
      uVar10 = 5;
    }
    else {
      puVar8 = *param_4;
      uVar10 = 4;
    }
    *(uint *)ppuVar5 = uVar10;
    ppuVar5[1] = puVar8;
  }
code_r0x00010777e5f0:
  ppuVar12 = param_4;
  func_0x00010777f8e0(*(undefined8 *)((long)ppuVar3 + -0x38));
  if ((bool)in_ZR) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  puVar7 = (undefined1 *)((long)ppuVar3 + -0xc0);
  func_0x000107269124(puVar7);
  func_0x00010777f924();
  *(undefined8 ***)((long)ppuVar3 + -0x120) = param_3;
  *(undefined8 ***)((long)ppuVar3 + -0x118) = ppuVar13;
  *(undefined8 ***)((long)ppuVar3 + -0x110) = ppuVar12;
  *(undefined8 ***)((long)ppuVar3 + -0x108) = ppuVar6;
  *(undefined1 **)((long)ppuVar3 + -0x100) = puVar14;
  *(undefined **)((long)ppuVar3 + -0xf8) = &DAT_10777e6f8;
  puVar14 = (undefined1 *)((long)ppuVar3 + -0x100);
  func_0x00010777f8f4();
  *(undefined8 *)((long)ppuVar3 + -0x128) = extraout_x8_02;
  *(undefined **)((long)ppuVar3 + -0x218) = &UNK_10e52b660;
  *(undefined8 *)((long)ppuVar3 + -0x210) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x208) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x200) = 0;
  func_0x00010787075c((undefined1 *)((long)ppuVar3 + -0x140),puVar7 + 0x48,
                      (undefined1 *)((long)ppuVar3 + -0x219));
  in_ZR = *(short *)((long)ppuVar3 + -0x12a) == 3;
  if (!(bool)in_ZR) {
code_r0x00010777e7a8:
    *(undefined8 ***)((long)ppuVar3 + -0x280) = ppuVar12;
    *(undefined8 ***)((long)ppuVar3 + -0x278) = extraout_x8_01;
    *(undefined1 **)((long)ppuVar3 + -0x270) = puVar14;
    *(undefined **)((long)ppuVar3 + -0x268) = &UNK_10777e7b8;
    func_0x000100060934((undefined8 **)((long)ppuVar3 + -0x1f8),"within");
    *(undefined8 *)((long)ppuVar3 + -0x1c8) = 0xffffffffffffffff;
    return (undefined8 **)((long)ppuVar3 + -0x1f8);
  }
  lVar9 = *(long *)((long)ppuVar3 + -0x138);
  ppuVar12 = (undefined8 **)(lVar9 + 0x18);
  ppuVar13 = (undefined8 **)((ulong)*(uint *)((long)ppuVar3 + -0x140) * 0x30);
  if ((ulong)*(uint *)((long)ppuVar3 + -0x140) * 3 == 0) goto code_r0x00010777e7a8;
  if ((*(ushort *)(lVar9 + 0x16) >> 0xc & 1) == 0) {
    lVar9 = *(long *)(lVar9 + 8);
  }
  *(long *)((long)ppuVar3 + -0x228) = lVar9;
  ppuVar6 = (undefined8 **)((long)ppuVar3 + -0x1c0);
  puVar15 = &UNK_10777e780;
  ppuVar3 = (undefined8 **)((long)ppuVar3 + -0x260);
  ppuVar5 = extraout_x8_01;
  param_4 = ppuVar12;
  goto code_r0x00010777e4b0;
}



/* Entry: 10777ea38; end: 10777ea63;  */

long FUN_10777ea38(long param_1)

{
  func_0x000107267da8(param_1 + 0x1a8);
  func_0x000107267da8(param_1 + 8);
  return param_1;
}


