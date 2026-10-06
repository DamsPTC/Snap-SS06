/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077de1fc; end: 1077de22f;  */

void FUN_1077de1fc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef34c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x00010747305c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077de55c; end: 1077de5c7;  */

void FUN_1077de55c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = lVar2 + param_3 * 0x88;
  param_2 = param_2 + 8;
  for (param_3 = param_3 * 0x88; param_3 != 0; param_3 = param_3 + -0x88) {
    FUN_1077ddb5c(lVar2 + 8,param_2);
    lVar2 = lVar2 + 0x88;
    param_2 = param_2 + 0x88;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1077de7ac; end: 1077de7cf;  */

undefined8 FUN_1077de7ac(undefined8 param_1)

{
  func_0x0001077de7d0();
  return param_1;
}



/* Entry: 1077de8dc; end: 1077de913;  */

void FUN_1077de8dc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef34c();
  func_0x000104c2f1f0();
  func_0x0001002a8208(unaff_x20 + 0x38,unaff_x19 + 0x38);
  func_0x0001002a8208(unaff_x20 + 0x58,unaff_x19 + 0x58);
  return;
}



/* Entry: 1077de9c0; end: 1077de9eb;  */

void FUN_1077de9c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x78) == 3) {
    func_0x000104c342bc(param_2,param_3);
    func_0x000104c2f698();
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    return;
  }
  func_0x0001077f1770();
  func_0x0001077de9ec();
  return;
}



/* Entry: 1077dec28; end: 1077dec47;  */

ulong FUN_1077dec28(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined1 in_ZR;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong unaff_x19;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  puVar9 = auStack_60;
  func_0x00010775f5c4(param_1,"");
  func_0x000100060964(auStack_60);
  uVar7 = unaff_x19;
  func_0x00010775f02c();
  func_0x00010775f5fc();
  func_0x00010775f5b0(uStack_28);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x00010775f5fc();
  func_0x00010775f5dc();
  uVar8 = uVar7;
  func_0x000104c32db4();
  if (((int)uVar8 == 0) || (*(char *)(uVar7 + 0x38) != puVar9[0x38])) {
    return 0;
  }
  cVar5 = *(char *)(uVar7 + 0x58);
  if (cVar5 != puVar9[0x58] || cVar5 == '\0') {
    return (ulong)(cVar5 == puVar9[0x58]);
  }
  bVar3 = *(byte *)(uVar7 + 0x57);
  uVar8 = *(ulong *)(uVar7 + 0x48);
  if (-1 < (char)bVar3) {
    uVar8 = (ulong)bVar3;
  }
  bVar4 = puVar9[0x57];
  uVar1 = *(ulong *)(puVar9 + 0x48);
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  if (uVar8 == uVar1) {
    plVar6 = (long *)*(long *)(uVar7 + 0x40);
    if (-1 < (char)bVar3) {
      plVar6 = (long *)(uVar7 + 0x40);
    }
    plVar2 = (long *)*(long *)(puVar9 + 0x40);
    if (-1 < (char)bVar4) {
      plVar2 = (long *)(puVar9 + 0x40);
    }
    func_0x000107c610b0(plVar6,plVar2);
    return (ulong)((int)plVar6 == 0);
  }
  return 0;
}



/* Entry: 1077defa8; end: 1077defff;  */

ulong FUN_1077defa8(ulong param_1,long param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  
  func_0x0001077ee32c();
  if ((*(int *)(param_2 + 0x40) == 0) || (in_ZR = *(int *)(param_2 + 0x40) == 1, (bool)in_ZR)) {
    func_0x0001077eea20(1);
  }
  else {
    func_0x0001077ee6d8();
    func_0x0001077ee4ec();
    func_0x0001077ef1a8();
  }
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    if (*(int *)(param_1 + 0x98) == 0) {
      return 1;
    }
    uVar1 = *(byte *)(param_1 + 0x18) >> 1 & 1;
    if (*(int *)(param_1 + 0x98) == 1) {
      uVar1 = 1;
    }
    return (ulong)uVar1;
  }
  return param_1;
}



/* Entry: 1077df314; end: 1077df333;  */

void FUN_1077df314(long param_1)

{
  if (*(char *)(param_1 + 0x90) == '\x01') {
    func_0x0001077dcb34();
  }
  return;
}



/* Entry: 1077df6c0; end: 1077df6cf;  */

undefined8 FUN_1077df6c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1077e1004; end: 1077e123f;  */

undefined8 * FUN_1077e1004(void)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong extraout_x8;
  code *extraout_x9;
  long *unaff_x21;
  char acStack_108 [16];
  byte bStack_f8;
  undefined1 auStack_f0 [8];
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *apuStack_c8 [2];
  char cStack_b8;
  undefined1 uStack_a8;
  undefined1 auStack_a0 [56];
  byte bStack_68;
  
  func_0x0001077ef6e4();
  func_0x0001077ee3c0();
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  func_0x0001077ee774();
  if ((extraout_x8 & 1) == 0) {
    apuStack_c8[0] = &UNK_10f42a63b;
    func_0x0001077ef088();
    func_0x0001077ef070(auStack_a0);
    func_0x000107264c5c(auStack_a0);
    func_0x000104c2f714(auStack_a0);
  }
  plVar1 = unaff_x21;
  func_0x000107766098();
  if ((int)plVar1 == 0) {
    plVar1 = unaff_x21 + 1;
    (**(code **)(*unaff_x21 + 0x30))();
    if ((int)plVar1 != 0) {
      func_0x0001077ef754();
      (*extraout_x9)(apuStack_c8,unaff_x21 + 1,&UNK_10f42a63b);
      in_ZR = cStack_b8 == '\x01';
      if ((bool)in_ZR) {
        acStack_108[0] = cStack_b8;
        func_0x00010733b904(auStack_a0,apuStack_c8,&uStack_e0);
        if ((bStack_68 & 1) != 0) {
          func_0x00010727d9cc();
          func_0x00010727e950(auStack_a0);
          func_0x0001072f5f4c(apuStack_c8);
          goto LAB_1077e11b0;
        }
        func_0x00010727e950(auStack_a0);
      }
      func_0x0001072f5f4c(apuStack_c8);
    }
    func_0x0001077f1688();
  }
  else {
    uStack_e8 = 1;
    func_0x0001077ef09c(auStack_a0,auStack_f0);
    func_0x0001077f09a4();
    apuStack_c8[0] = (undefined *)((ulong)apuStack_c8[0] & 0xffffffffffffff00);
    uStack_a8 = 0;
    func_0x000107771274(acStack_108,auStack_a0);
    func_0x0001072c94e0(apuStack_c8);
    if ((bStack_f8 & 1) == 0) {
      func_0x000107771558(apuStack_c8,auStack_a0);
      func_0x000100066230(&uStack_e0,apuStack_c8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_c8);
      func_0x0001077f1688();
    }
    else {
      func_0x0001077f1964();
      func_0x0001077ef1f4();
      func_0x0001077efeb8();
      func_0x0001072ca4f0();
      func_0x0001077f1440();
    }
    func_0x0001072c95d0(acStack_108);
    func_0x0001072ca718(auStack_a0);
  }
LAB_1077e11b0:
  puVar2 = &uStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
  func_0x0001077ee314();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001077f0c54();
  func_0x0001072f5f4c();
  puVar2 = &uStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
  func_0x0001077ef068();
  puVar3 = puVar2;
  func_0x0001077ef940(&PTR_DAT_1109de208);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3 + 0x85);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2 + 0x82);
  func_0x0001077e1c1c();
  return puVar2;
}



/* Entry: 1077e1d30; end: 1077e1d43;  */

void FUN_1077e1d30(void)

{
  func_0x0001077e1dec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077e1f20; end: 1077e1f43;  */

byte FUN_1077e1f20(long param_1)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    bVar1 = *(byte *)(param_1 + 0x10) >> 1 & 1;
    if (*(int *)(param_1 + 0x48) == 1) {
      bVar1 = 1;
    }
    return bVar1;
  }
  return 1;
}



/* Entry: 1077e2500; end: 1077e250f;  */

undefined8 * FUN_1077e2500(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x0001077ef1b8(param_2);
  func_0x0001077e2534();
  puVar1 = unaff_x19;
  func_0x0001077ef0d4();
  *unaff_x19 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001077ee6cc();
  }
  return unaff_x19;
}



/* Entry: 1077e26bc; end: 1077e2717;  */

void FUN_1077e26bc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef34c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x0001077e263c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077e2840; end: 1077e2843;  */

long FUN_1077e2840(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef118(&UNK_1109de828);
  func_0x000104c2f714(lVar1 + 0x58);
  func_0x0001077e2904();
  return param_1;
}



/* Entry: 1077e29c0; end: 1077e29ff;  */

void FUN_1077e29c0(void)

{
  long lVar1;
  long lStack_28;
  
  func_0x0001077ef4a8();
  func_0x0001077e3fdc(&lStack_28);
  func_0x0001077f0b40();
  func_0x0001077e2660();
  lVar1 = lStack_28;
  lStack_28 = 0;
  if (lVar1 != 0) {
    func_0x0001077ee6cc();
  }
  return;
}



/* Entry: 1077e30e8; end: 1077e314f;  */

void FUN_1077e30e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  
  func_0x0001077efd70(param_7,param_1,param_4);
  func_0x0001077f0884(in_stack_00000010,in_stack_00000020,in_stack_00000030);
  func_0x0001077e32d8();
  func_0x0001077f014c();
  *unaff_x19 = extraout_x8;
  puVar1 = unaff_x19;
  func_0x0001077e3150();
  unaff_x19[0x23] = puVar1;
  func_0x0001077f1204();
  return;
}



/* Entry: 1077e34e0; end: 1077e3547;  */

undefined8 FUN_1077e34e0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000104c2f714(param_1 + 0x98);
  func_0x000104c2f714(param_1 + 0x60);
  func_0x00010727599c(param_1);
  func_0x0001001148fc();
  func_0x000107274878();
  return unaff_x19;
}



/* Entry: 1077e3678; end: 1077e3693;  */

void FUN_1077e3678(void)

{
  func_0x0001077ee448();
  func_0x0001077e3694();
  return;
}



/* Entry: 1077e37f4; end: 1077e37fb;  */

void FUN_1077e37f4(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077e3904; end: 1077e3917;  */

undefined1  [16] FUN_1077e3904(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar2 = *(ulong *)(param_2 + 8);
  uVar3 = (ulong)**(uint **)(param_2 + 0x18);
  uVar4 = (ulong)(*(uint **)(param_2 + 0x18))[1];
  uVar1 = param_1;
  func_0x0001073394f4(param_1,uVar2,*(undefined8 *)(param_2 + 0x10));
  if ((uVar2 & 1) == 0) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      uVar3 = (ulong)*(uint *)(param_1 + 0x28);
      uVar4 = (ulong)*(uint *)(param_1 + 0x2c);
    }
  }
  else {
    uVar3 = uVar1 & 0xffffffff;
    uVar4 = uVar1 >> 0x20;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 1077e3afc; end: 1077e3b23;  */

void FUN_1077e3afc(void)

{
  func_0x0001077ef34c();
  func_0x0001077f1144();
  func_0x0001077e3b9c();
  func_0x0001077ee520();
  return;
}



/* Entry: 1077e3c64; end: 1077e3cbf;  */

void FUN_1077e3c64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x20;
    func_0x0001077e263c();
  }
  return;
}



/* Entry: 1077e3ef8; end: 1077e3f1f;  */

void FUN_1077e3ef8(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001077f0638();
  func_0x0001077f0a90();
  func_0x0001077e3f20();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1077e4110; end: 1077e41b7;  */

/* WARNING: Possible PIC construction at 0x0001077e41d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077e4184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e41d4) */
/* WARNING: Removing unreachable block (ram,0x0001077ef094) */
/* WARNING: Removing unreachable block (ram,0x0001077e4188) */

void FUN_1077e4110(long *param_1,long *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  int extraout_w8;
  long *unaff_x20;
  long *unaff_x21;
  long lVar4;
  long *unaff_x22;
  undefined1 auStack_248 [8];
  long *plStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  long alStack_1e0 [52];
  
  plVar2 = alStack_1e0;
  func_0x0001077f184c();
  func_0x0001077ee3c0();
  func_0x0001077f1ab4();
  if (extraout_w8 == 0) {
    func_0x0001077f0548();
    unaff_x21 = (long *)unaff_x22[1];
    unaff_x22 = (long *)unaff_x22[2];
    in_ZR = unaff_x21 == unaff_x22;
    if (!(bool)in_ZR) {
      func_0x0001077f03c8();
      FUN_1077e4110();
      func_0x0001077efeb8();
      goto code_r0x0001077e41b8;
    }
  }
  else {
    func_0x0001077efe74(alStack_1e0);
    param_1 = unaff_x22;
    func_0x0001077ef0c4();
    func_0x0001077ef1a8();
    param_2 = plVar2;
  }
  func_0x0001077ee314();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef0b0();
  unaff_x20 = param_1;
code_r0x0001077e41b8:
  func_0x0001077ef34c();
  plStack_230 = unaff_x22;
  uStack_228 = unaff_x21;
  plStack_220 = unaff_x20;
  if (((int)param_2[2] == 0) || ((int)unaff_x20[2] == 0)) {
    func_0x00010774a660(unaff_x20,&stack0xfffffffffffffdcf);
  }
  else if ((int)param_2[2] == 2) {
    if ((int)unaff_x20[2] == 2) {
      func_0x00010774a6b0();
      plVar2 = param_2;
      func_0x00010774a6b0();
      lVar4 = *(long *)(*plVar2 + 0x18);
      func_0x00010774a6b8();
      lVar4 = *(long *)(*plVar2 + 0x18) + lVar4;
      func_0x00010747b534();
      func_0x00010774a6b0();
      plVar2 = param_2;
      func_0x00010774a6b8();
      func_0x00010746bbb8();
      func_0x00010774a6b8();
      func_0x00010745f964();
      lVar3 = *param_2;
      plStack_230 = plVar2;
      uStack_228 = (long *)lVar4;
      while (plStack_230 != (long *)0x0) {
        func_0x0001072628ec(auStack_248,lVar3,uStack_228);
        func_0x000107262260(&plStack_230);
      }
      return;
    }
    uVar1 = *(uint *)(param_2 + 2);
    if ((int)unaff_x20[2] != -1 || uVar1 != 0xffffffff) {
      if (uVar1 == 0xffffffff) {
        if (*(uint *)(unaff_x20 + 2) != 0xffffffff) {
          (*(code *)(&PTR_DAT_1109acee0)[*(uint *)(unaff_x20 + 2)])
                    ((long)&uStack_228 + 7,unaff_x20,param_2);
        }
        *(undefined4 *)(unaff_x20 + 2) = 0xffffffff;
        return;
      }
      (*(code *)(&PTR_DAT_1109b3228)[uVar1])(&stack0xfffffffffffffde8);
    }
    return;
  }
  return;
}



/* Entry: 1077e4474; end: 1077e448b;  */

void FUN_1077e4474(void)

{
  func_0x0001077e448c();
  return;
}



/* Entry: 1077e4a80; end: 1077e4bc3;  */

void FUN_1077e4a80(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x0001077efb6c();
  uStack_78 = param_2;
  uStack_70 = param_1;
  func_0x0001077e4e74(&uStack_78);
  func_0x0001077e4e94(&stack0xffffffffffffff78);
  func_0x0001077e4eb4(&stack0xffffffffffffff68);
  func_0x0001077e4ed4(&stack0xffffffffffffff58);
  func_0x0001077e4ef4(&stack0xffffffffffffff48);
  uStack_c8 = in_x6;
  func_0x0001077e4f14(&uStack_c8);
  uStack_d8 = in_x7;
  func_0x0001077e4f34(&uStack_d8);
  uStack_e8 = in_stack_00000000;
  func_0x0001077e4f54(&uStack_e8);
  uStack_f8 = in_stack_00000008;
  func_0x0001077e4f74(&uStack_f8);
  uStack_108 = in_stack_00000010;
  func_0x0001077e4f94(&uStack_108);
  uStack_118 = in_stack_00000018;
  func_0x0001077e4fb4(&uStack_118);
  uStack_128 = in_stack_00000020;
  func_0x0001077e4fd4(&uStack_128);
  uStack_138 = in_stack_00000028;
  func_0x0001077e4ff4(&uStack_138);
  uStack_148 = in_stack_00000030;
  func_0x0001077e5014(&uStack_148);
  uStack_158 = in_stack_00000038;
  func_0x0001077e5034(&uStack_158);
  return;
}



/* Entry: 1077e50a0; end: 1077e50d3;  */

void FUN_1077e50a0(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077e50f0();
  return;
}



/* Entry: 1077e51f0; end: 1077e521f;  */

void FUN_1077e51f0(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x38) != 0) && (uVar1 = *(int *)(param_2 + 0x38) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077e5270();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077e5354; end: 1077e53bb;  */

void FUN_1077e5354(undefined8 param_1,long param_2)

{
  func_0x0001077e53bc(param_1,param_2 + 8,param_2 + 0x68,param_2 + 0xa0,param_2 + 0xd8,
                      param_2 + 0xdc,param_2 + 0xe0,param_2 + 0xe8,param_2 + 0xec,param_2 + 0xf0,
                      param_2 + 0xf4,param_2 + 0xf5,param_2 + 0xf8,param_2 + 0xfc,param_2 + 0x100,
                      param_2 + 0x110);
  return;
}



/* Entry: 1077e5700; end: 1077e570b;  */

void FUN_1077e5700(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001077eed88();
  func_0x0001077efa68();
  if (param_2 != 0) {
    func_0x0001077e5740(param_4);
  }
  func_0x0001077efa00(0x58);
  return;
}



/* Entry: 1077e58b0; end: 1077e58b7;  */

void FUN_1077e58b0(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001077ef34c(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001077f0fac(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x58;
    func_0x0001077e24b8();
  }
  return;
}



/* Entry: 1077e5aa4; end: 1077e5aa7;  */

long FUN_1077e5aa4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef940(&PTR_FUN_1109de3f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xe8);
  func_0x0001077e6210();
  return param_1;
}



/* Entry: 1077e5f50; end: 1077e5f5f;  */

undefined8 * FUN_1077e5f50(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x0001077ef1b8(param_2);
  func_0x0001077e5f84();
  puVar1 = unaff_x19;
  func_0x0001077ef0d4();
  *unaff_x19 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001077ee6cc();
  }
  return unaff_x19;
}



/* Entry: 1077e610c; end: 1077e6167;  */

void FUN_1077e610c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef34c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x0001077e608c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077e6280; end: 1077e6283;  */

long FUN_1077e6280(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef118(&UNK_1109dea10);
  func_0x000104c2f714(lVar1 + 0x50);
  func_0x0001077e6330();
  return param_1;
}



/* Entry: 1077e63ec; end: 1077e642b;  */

void FUN_1077e63ec(void)

{
  long lVar1;
  long lStack_28;
  
  func_0x0001077ef4a8();
  func_0x0001077e97d4(&lStack_28);
  func_0x0001077f0b40();
  func_0x0001077e60b0();
  lVar1 = lStack_28;
  lStack_28 = 0;
  if (lVar1 != 0) {
    func_0x0001077ee6cc();
  }
  return;
}



/* Entry: 1077e71e4; end: 1077e7283;  */

void FUN_1077e71e4(void)

{
  func_0x0001077f0020();
  func_0x0001077ee99c();
  func_0x0001077e8dd0();
  return;
}



/* Entry: 1077e7608; end: 1077e760b;  */

long FUN_1077e7608(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef118(&UNK_1109de8c0);
  func_0x000104c2f714(lVar1 + 0x230);
  func_0x0001077e7c8c();
  return param_1;
}



/* Entry: 1077e7cfc; end: 1077e7d03;  */

long FUN_1077e7cfc(long param_1)

{
  undefined1 in_ZR;
  long unaff_x21;
  undefined1 auStack_c0 [128];
  int iStack_40;
  
  param_1 = param_1 + 0x108;
  func_0x0001077ee374();
  func_0x0001077f0170();
  func_0x0001077ef8cc();
  func_0x0001077f0360();
  func_0x0001077f02e0();
  if (iStack_40 == 0) {
    func_0x0001077f13c8();
    func_0x000104c2d614();
    if ((int)param_1 != 0) {
      func_0x0001077efcb8();
      goto code_r0x0001077e7d80;
    }
  }
  func_0x0001077f0354(auStack_c0);
  func_0x0001077ef810();
  func_0x0001077eff90();
code_r0x0001077e7d80:
  func_0x0001077eef78();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077eef78();
  func_0x0001077ef068();
  func_0x0001077efa58();
  for (; unaff_x21 != param_1; unaff_x21 = unaff_x21 + 0x18) {
    func_0x0001077efe94();
    func_0x0001077e7dfc();
  }
  return param_1;
}



/* Entry: 1077e7ea8; end: 1077e7f13;  */

void FUN_1077e7ea8(undefined8 *param_1)

{
  undefined1 in_ZR;
  
  func_0x0001077ee420();
  func_0x0001077ef734(*param_1);
  func_0x0001077efcac();
  if ((bool)in_ZR) {
    func_0x0001077ef72c();
    func_0x000107775cb0();
    func_0x0001077f00ac();
  }
  else {
    func_0x0001077f007c();
  }
  func_0x0001077ee79c();
  func_0x0001077ee2e4();
  if ((bool)in_ZR) {
    func_0x0001077f00a0();
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ee510();
  func_0x0001077ef068();
  func_0x0001077ee210();
  func_0x0001077e7f34();
  return;
}



/* Entry: 1077e8060; end: 1077e8063;  */

ulong FUN_1077e8060(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x0001077e8084();
    return CONCAT44(uVar2,uVar1);
  }
  return (ulong)*(uint *)*param_3;
}



/* Entry: 1077e820c; end: 1077e824b;  */

uint FUN_1077e820c(byte *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return (uint)*(byte *)*param_2;
  }
  uVar1 = *(int *)(param_1 + 0x30) == 1;
  if ((bool)uVar1) {
    return (uint)*param_1;
  }
  param_2 = param_2 + 1;
  func_0x0001077f06c8(param_2,param_1);
  uVar2 = (uint)param_2;
  func_0x0001077f00b8();
  func_0x0001077e827c();
  if (((uVar2 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)uVar1)) {
    uVar2 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return uVar2 & 0xff;
}



/* Entry: 1077e8434; end: 1077e8473;  */

uint FUN_1077e8434(byte *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return (uint)*(byte *)*param_2;
  }
  uVar1 = *(int *)(param_1 + 0x30) == 1;
  if ((bool)uVar1) {
    return (uint)*param_1;
  }
  param_2 = param_2 + 1;
  func_0x0001077f06c8(param_2,param_1);
  uVar2 = (uint)param_2;
  func_0x0001077f00b8();
  func_0x0001077e84a4();
  if (((uVar2 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)uVar1)) {
    uVar2 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return uVar2 & 0xff;
}



/* Entry: 1077e86b4; end: 1077e86eb;  */

void FUN_1077e86b4(void)

{
  func_0x0001077ee210();
  func_0x0001077e86d0();
  return;
}



/* Entry: 1077e88dc; end: 1077e8913;  */

void FUN_1077e88dc(void)

{
  func_0x0001077ee210();
  func_0x0001077e88f8();
  return;
}



/* Entry: 1077e8b04; end: 1077e8c43;  */

ulong FUN_1077e8b04(ulong param_1)

{
  func_0x0001077ee210();
  func_0x0001077e8b24();
  return param_1 & 0xffffffffff;
}



/* Entry: 1077e8d40; end: 1077e8d77;  */

/* WARNING: Possible PIC construction at 0x0001077e8d98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e8d9c) */
/* WARNING: Removing unreachable block (ram,0x0001077e8dbc) */
/* WARNING: Removing unreachable block (ram,0x0001077ee7f4) */
/* WARNING: Removing unreachable block (ram,0x0001077e8db4) */
/* WARNING: Removing unreachable block (ram,0x0001077ee69c) */

void FUN_1077e8d40(undefined1 *param_1,long param_2,long param_3)

{
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_70 [64];
  
  if ((*(int *)(param_2 + 0x70) != 0) && (*(int *)(param_2 + 0x70) != 1)) {
    param_1 = auStack_70;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001077ee254(param_3 + 8,param_2 + 8);
    func_0x0001077f0980();
    unaff_x30 = &UNK_1077e8d9c;
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001000d03a8(param_1);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077e8ee4; end: 1077e8f4f;  */

void FUN_1077e8ee4(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x9;
  
  func_0x0001077ee420();
  func_0x0001077ef734(*param_1);
  func_0x0001077efcac();
  if ((bool)in_ZR) {
    func_0x0001077ef72c();
    func_0x000107775d90();
    func_0x0001077f00ac();
  }
  else {
    func_0x0001077f007c();
  }
  func_0x0001077ee79c();
  func_0x0001077ee2e4();
  if ((bool)in_ZR) {
    func_0x0001077f00a0();
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ee510();
  func_0x0001077ef068();
  func_0x0001077ee270();
  func_0x0001077e8f7c(extraout_x9);
  return;
}



/* Entry: 1077e90a0; end: 1077e90e7;  */

void FUN_1077e90a0(void)

{
  undefined1 auStack_40 [16];
  
  func_0x0001077ef398();
  func_0x0001077f0980();
  func_0x0001072f64f4(auStack_40);
  func_0x0001077eec28();
  func_0x0001073f20f4();
  func_0x0001077effa8();
  return;
}



/* Entry: 1077e9270; end: 1077e92cb;  */

void FUN_1077e9270(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [48];
  
  func_0x0001077ee5cc();
  while (unaff_x22 != unaff_x19) {
    func_0x0001077f1758();
    func_0x0001077e620c();
    func_0x0001077f1b84();
  }
  func_0x0001077efeac();
  func_0x0001077ef0e0();
  func_0x0001077e92cc();
  func_0x0001077e92fc(auStack_60);
  return;
}



/* Entry: 1077e940c; end: 1077e9447;  */

void FUN_1077e940c(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001077f1230();
  func_0x0001077e9448();
  *param_1 = param_2;
  return;
}



/* Entry: 1077e972c; end: 1077e977b;  */

void FUN_1077e972c(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001077ee564();
  while (unaff_x21 != unaff_x19) {
    func_0x0001077efe94();
    func_0x0001077e93cc();
    func_0x0001077f1b38();
  }
  func_0x0001077efad0();
  func_0x0001077e92fc();
  return;
}



/* Entry: 1077e9aac; end: 1077e9b73;  */

/* WARNING: Possible PIC construction at 0x0001077e9afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e9b00) */
/* WARNING: Removing unreachable block (ram,0x0001077e9b10) */
/* WARNING: Removing unreachable block (ram,0x0001077e9b20) */
/* WARNING: Removing unreachable block (ram,0x0001077e9b24) */
/* WARNING: Removing unreachable block (ram,0x0001077e9b50) */
/* WARNING: Removing unreachable block (ram,0x0001077e9b6c) */
/* WARNING: Removing unreachable block (ram,0x0001077e9b40) */
/* WARNING: Removing unreachable block (ram,0x0001077eea40) */

void FUN_1077e9aac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_d30 [48];
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  
  func_0x0001077ee32c();
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  uStack_c98 = 0;
  uStack_ca0 = 0;
  func_0x0001077e9c54();
  func_0x0001077e5f60(&uStack_cb0);
  func_0x0001077e9c84();
  func_0x0001077ec7fc(&uStack_cb0,*param_2);
  func_0x0001077f0fc4();
  func_0x0001077efea0();
  func_0x0001077f14b0();
  func_0x0001077f1394();
  func_0x0001077eff10(auStack_d30);
  func_0x0001077ef464();
  func_0x0001077e9c9c();
  func_0x0001077eefe8();
  func_0x0001077ef370();
  return;
}



/* Entry: 1077e9d18; end: 1077e9d1b;  */

/* WARNING: Possible PIC construction at 0x0001077e69b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e69b4) */
/* WARNING: Removing unreachable block (ram,0x0001077e69ec) */
/* WARNING: Removing unreachable block (ram,0x0001077e69f8) */
/* WARNING: Removing unreachable block (ram,0x0001077e6a30) */
/* WARNING: Removing unreachable block (ram,0x0001077e6a54) */
/* WARNING: Removing unreachable block (ram,0x0001077e69e0) */
/* WARNING: Removing unreachable block (ram,0x0001077ee7e4) */

void FUN_1077e9d18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  undefined1 uVar1;
  long lVar2;
  long *extraout_x8;
  undefined1 auStack_260 [16];
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 auStack_248 [27];
  undefined1 uStack_22d;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined1 uStack_21a;
  undefined1 uStack_219;
  undefined4 uStack_218;
  undefined1 uStack_214;
  undefined3 uStack_213;
  undefined4 uStack_210;
  undefined1 uStack_20c;
  undefined4 uStack_208;
  undefined1 uStack_204;
  undefined4 uStack_200;
  undefined1 uStack_1fc;
  undefined4 uStack_1f8;
  undefined1 uStack_1f4;
  undefined4 uStack_1f0;
  undefined1 uStack_1ec;
  undefined4 uStack_1e8;
  undefined1 uStack_1e4;
  undefined4 uStack_1e0;
  undefined1 uStack_1dc;
  undefined4 uStack_1d8;
  undefined1 uStack_1d4;
  undefined4 uStack_1d0;
  undefined1 uStack_1cc;
  undefined4 uStack_1c8;
  undefined1 uStack_1c4;
  undefined1 uStack_1c0;
  undefined1 uStack_1bf;
  undefined1 uStack_1be;
  undefined1 uStack_1bd;
  undefined1 auStack_1bc [20];
  undefined1 auStack_1a8 [20];
  undefined1 auStack_194 [20];
  undefined1 auStack_180 [22];
  undefined1 uStack_16a;
  undefined1 uStack_169;
  undefined1 uStack_168;
  undefined1 uStack_167;
  undefined1 uStack_166;
  undefined1 uStack_165;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 uStack_119;
  undefined1 auStack_118 [56];
  undefined1 auStack_e0 [56];
  undefined1 auStack_a8 [104];
  
  func_0x0001077efea0();
  lVar2 = param_5;
  func_0x0001077ee3e4();
  func_0x0001077e6be4();
  uStack_119 = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6c08();
  uStack_12c = param_1;
  uStack_128 = param_2;
  uStack_124 = param_3;
  uStack_120 = param_4;
  func_0x0001077ee718();
  func_0x0001077e6c2c();
  uStack_130 = param_1;
  func_0x0001077ee718();
  func_0x0001077e6c4c();
  uStack_134 = param_1;
  func_0x0001077ee718();
  func_0x0001077e6c6c();
  uStack_144 = param_1;
  uStack_140 = param_2;
  uStack_13c = param_3;
  uStack_138 = param_4;
  func_0x0001077ee718();
  func_0x0001077e6c98();
  uStack_148 = param_1;
  func_0x0001077ee718();
  func_0x0001077e6cb8();
  uStack_150 = param_1;
  uStack_14c = param_2;
  func_0x0001077ee718();
  func_0x0001077e6cf0();
  uStack_154 = param_1;
  func_0x0001077ee718();
  func_0x0001077e6d10();
  uStack_164 = param_1;
  uStack_160 = param_2;
  uStack_15c = param_3;
  uStack_158 = param_4;
  func_0x0001077ee718();
  func_0x0001077e6d34();
  uStack_165 = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6d5c();
  uStack_166 = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6d88();
  uStack_167 = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6dac();
  uStack_168 = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6dd4();
  uStack_169 = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6dfc();
  uStack_16a = (undefined1)lVar2;
  func_0x0001077ee718(auStack_180);
  func_0x0001077e6e24();
  func_0x0001077ee718(auStack_194);
  func_0x0001077e6e44();
  func_0x0001077ee718(auStack_1a8);
  func_0x0001077e6e64();
  func_0x0001077ee718(auStack_1bc);
  func_0x0001077e6e84();
  func_0x0001077ee718();
  func_0x0001077e6ea4();
  uStack_1bd = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6ec8();
  uStack_1be = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6eec();
  uStack_1bf = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6f10();
  uStack_1c0 = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6f34();
  uStack_1c8 = (undefined4)lVar2;
  uStack_1c4 = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e6f58();
  uStack_1d0 = (undefined4)lVar2;
  uStack_1cc = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e6f84();
  uStack_1d8 = (undefined4)lVar2;
  uStack_1d4 = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e6fb4();
  uStack_1e0 = (undefined4)lVar2;
  uStack_1dc = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e6fd8();
  uStack_1e8 = (undefined4)lVar2;
  uStack_1e4 = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e6ffc();
  uStack_1f0 = (undefined4)lVar2;
  uStack_1ec = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e7020();
  uStack_1f8 = (undefined4)lVar2;
  uStack_1f4 = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e7044();
  uStack_200 = (undefined4)lVar2;
  uStack_1fc = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e7068();
  uStack_208 = (undefined4)lVar2;
  uStack_204 = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e708c();
  uStack_210 = (undefined4)lVar2;
  uStack_20c = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e70b0();
  uStack_218 = (undefined4)lVar2;
  _uStack_214 = CONCAT31(uStack_213,(char)((ulong)lVar2 >> 0x20));
  func_0x0001077ee718(auStack_a8);
  uStack_219 = (undefined1)lVar2;
  func_0x0001077e70d4();
  func_0x0001077ee718(auStack_e0);
  func_0x0001077e713c();
  func_0x0001077ee718(auStack_118);
  func_0x0001077e7190();
  func_0x0001077ee718();
  FUN_1077e71e4();
  uStack_21a = uStack_219;
  func_0x0001077ee718();
  func_0x0001077e7208();
  uVar1 = uStack_21a;
  func_0x0001077ee718();
  func_0x0001077e722c();
  uStack_22c = param_1;
  uStack_228 = param_2;
  uStack_224 = param_3;
  uStack_220 = param_4;
  func_0x0001077ee718();
  func_0x0001077e7258();
  stack0xfffffffffffffdd0 = CONCAT13(uVar1,auStack_248._24_3_);
  func_0x0001077ee718(auStack_248);
  func_0x0001077e7284();
  func_0x0001077ee718();
  func_0x0001077e72d4();
  uStack_24c = param_1;
  func_0x0001077ee718();
  func_0x0001077e72f4();
  uStack_250 = param_1;
  func_0x0001077ee718(auStack_260);
  func_0x0001077e7314();
  func_0x0001077ee718();
  func_0x0001077e735c();
  lVar2 = param_5 + 0xc80;
  func_0x0001077f0928(lVar2,param_5 + 0xc98,&uStack_119,&uStack_12c,&uStack_130,&uStack_134);
  func_0x0001077f16d0();
  func_0x0001077f1230();
  func_0x0001077e737c();
  *extraout_x8 = lVar2;
  return;
}



/* Entry: 1077eb504; end: 1077eb5a3;  */

void FUN_1077eb504(long param_1)

{
  undefined1 uStack_11;
  
  func_0x0001077f0064();
  func_0x0001077ec45c(param_1 + 0xa50,&uStack_11);
  return;
}



/* Entry: 1077ebca8; end: 1077ebcdb;  */

void FUN_1077ebca8(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077ebcf8();
  return;
}



/* Entry: 1077ebdf8; end: 1077ebe27;  */

void FUN_1077ebdf8(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x38) != 0) && (uVar1 = *(int *)(param_2 + 0x38) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077ebe78();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ebf5c; end: 1077ebf77;  */

void FUN_1077ebf5c(void)

{
  func_0x0001077ef51c();
  func_0x0001077ebf78();
  return;
}



/* Entry: 1077ec0a8; end: 1077ec0db;  */

void FUN_1077ec0a8(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077ec0f8();
  return;
}



/* Entry: 1077ec1f8; end: 1077ec227;  */

void FUN_1077ec1f8(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x30) != 0) && (uVar1 = *(int *)(param_2 + 0x30) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077ec278();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ec35c; end: 1077ec377;  */

void FUN_1077ec35c(void)

{
  func_0x0001077ef51c();
  func_0x0001077ec378();
  return;
}



/* Entry: 1077ec4a8; end: 1077ec4db;  */

void FUN_1077ec4a8(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077ec4f8();
  return;
}



/* Entry: 1077ec5f8; end: 1077ec627;  */

ulong FUN_1077ec5f8(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  
  if ((*(int *)(param_2 + 0x40) == 0) || (uVar2 = *(int *)(param_2 + 0x40) == 1, (bool)uVar2)) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(undefined4 *)(param_1 + 0x40) = 1;
    return param_2;
  }
  func_0x0001077ee1ec(param_3,param_2);
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)uVar2) {
    return param_3;
  }
  ___stack_chk_fail();
  if (*(int *)(param_3 + 0x30) == 0) {
    return 1;
  }
  uVar1 = *(byte *)(param_3 + 0x10) >> 1 & 1;
  if (*(int *)(param_3 + 0x30) == 1) {
    uVar1 = 1;
  }
  return (ulong)uVar1;
}



/* Entry: 1077ecef8; end: 1077ecfd7;  */

undefined8 FUN_1077ecef8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x0001075613c0(param_1,&uStack_40);
  func_0x00010726afc0(&uStack_40);
  return param_1;
}



/* Entry: 1077ed178; end: 1077ed1a7;  */

void FUN_1077ed178(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef62c();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x58) {
    func_0x0001077e5f08(unaff_x20);
  }
  return;
}



/* Entry: 1077ed2e8; end: 1077ed303;  */

void FUN_1077ed2e8(long param_1)

{
  func_0x0001077e6184();
  *(undefined4 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 1077ed920; end: 1077eda57;  */

bool FUN_1077ed920(undefined1 param_1)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  int extraout_w8;
  ulong extraout_x8;
  ulong uVar5;
  long extraout_x9;
  long lVar6;
  long extraout_x9_00;
  long extraout_x10;
  long lVar7;
  long extraout_x10_00;
  int extraout_w11;
  int iVar8;
  int extraout_w11_00;
  uint extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  long unaff_x19;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  char cStack_3b;
  byte bStack_3a;
  char cStack_39;
  undefined1 auStack_38 [24];
  
  uStack_3e = param_1;
  func_0x0001077ef1b8();
  func_0x0001077df888();
  uStack_3d = uStack_3e;
  func_0x0001077f1184();
  uStack_3c = uStack_3d;
  func_0x0001077f118c();
  cStack_3b = (char)unaff_x19 + -0x10;
  func_0x0001077df020();
  if (*(int *)(unaff_x19 + 0x170) == 0) {
    bStack_3a = 1;
  }
  else {
    bStack_3a = *(byte *)(unaff_x19 + 0x138) >> 1 & 1;
    if (*(int *)(unaff_x19 + 0x170) == 1) {
      bStack_3a = 1;
    }
  }
  cStack_39 = (char)unaff_x19 + 'x';
  func_0x0001077df020();
  func_0x0001077df080(auStack_38,&uStack_3e,6);
  func_0x0001077ee5f4();
  uVar5 = extraout_x8;
  lVar6 = extraout_x9;
  lVar7 = extraout_x10;
  iVar8 = extraout_w11;
  while ((bVar4 = (int)uVar5 == iVar8, bVar2 = lVar6 == lVar7 && bVar4, lVar6 != lVar7 || !bVar4 &&
         (uVar3 = bVar2, func_0x0001077f03b4(), (extraout_w13 & 1) != 0))) {
    func_0x0001077f038c();
    lVar6 = extraout_x9_00 + CONCAT44(extraout_var,extraout_w13_00);
    uVar1 = 0;
    if (!(bool)uVar3) {
      uVar1 = extraout_w8 + 1;
    }
    uVar5 = (ulong)uVar1;
    lVar7 = extraout_x10_00;
    iVar8 = extraout_w11_00;
  }
  func_0x0001077eff98();
  return bVar2;
}



/* Entry: 1077edc00; end: 1077edc03;  */

long FUN_1077edc00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef940(&PTR_FUN_1109de5d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x140);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x128);
  func_0x0001077edfc8();
  return param_1;
}



/* Entry: 1077ee064; end: 1077ee103;  */

long FUN_1077ee064(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lStack_b8;
  long lStack_b0;
  
  func_0x0001077ee374();
  func_0x0001077f0410();
  func_0x0001077dde7c();
  do {
    func_0x0001077efd08();
    func_0x0001077f05fc();
  } while (!(bool)in_ZR);
  func_0x0001077efcb8();
  while (uVar1 = lStack_b8 == lStack_b0, !(bool)uVar1) {
    func_0x0001077f1618();
    func_0x0001077f0c4c();
  }
  func_0x0001077ef650();
  func_0x0001077ee28c();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar2 = param_1;
  do {
    func_0x0001077f00f4();
    func_0x0001077f0960();
  } while (!(bool)uVar1);
  func_0x0001077ef0b0();
  lVar3 = lVar2;
  func_0x0001077ef940(&PTR_DAT_1109de670);
  func_0x000104c2f714(lVar3 + 0x58);
  func_0x000104c2f714(param_1);
  return lVar2;
}



/* Entry: 1077f1bc0; end: 1077f1c6f;  */

void FUN_1077f1bc0(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  func_0x0001077f1c08();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001077b4688(param_1,(*(long *)(param_3 + 0xf0) - *(long *)(param_3 + 0xe8)) / 0x38);
  func_0x000107752094(param_3 + 0x88);
  for (uVar2 = 0; uVar2 < (ulong)((*(long *)(param_3 + 0xf0) - *(long *)(param_3 + 0xe8)) / 0x38);
      uVar2 = (ulong)((int)uVar2 + 1)) {
    lVar1 = param_3 + 0x38;
    func_0x0001077b4390(param_3 + 0x38,uVar2,param_4);
    uStack_48 = (undefined4)lVar1;
    uStack_44 = (undefined1)((ulong)lVar1 >> 0x20);
    func_0x0001077b4cac(param_1,&uStack_48);
  }
  return;
}



/* Entry: 1077f2428; end: 1077f2517;  */

uint FUN_1077f2428(undefined8 param_1)

{
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar1;
  int extraout_w9;
  int extraout_w9_00;
  int iVar2;
  long unaff_x23;
  
  func_0x0001077f35ec();
  func_0x0001077f3620(&UNK_1109deac8);
  do {
    if (unaff_x23 == 0) {
      func_0x0001077f35f8();
      iVar2 = extraout_w9_00;
      uVar1 = extraout_w8_00;
      goto LAB_1077f246c;
    }
    func_0x0001077f35cc();
    func_0x0001077f35a8();
    func_0x0001077f35e0();
  } while ((int)param_1 == 0);
  func_0x0001077f3604();
  iVar2 = extraout_w9;
  uVar1 = extraout_w8;
LAB_1077f246c:
  return uVar1 | iVar2 << 8;
}



/* Entry: 1077f273c; end: 1077f27db;  */

uint FUN_1077f273c(undefined8 param_1)

{
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar1;
  int extraout_w9;
  int extraout_w9_00;
  int iVar2;
  long unaff_x23;
  
  func_0x0001077f35ec();
  func_0x0001077f3638(&UNK_1109debf8);
  do {
    if (unaff_x23 == 0) {
      func_0x0001077f35f8();
      iVar2 = extraout_w9_00;
      uVar1 = extraout_w8_00;
      goto LAB_1077f2780;
    }
    func_0x0001077f35cc();
    func_0x0001077f35a8();
    func_0x0001077f35e0();
  } while ((int)param_1 == 0);
  func_0x0001077f3604();
  iVar2 = extraout_w9;
  uVar1 = extraout_w8;
LAB_1077f2780:
  return uVar1 | iVar2 << 8;
}



/* Entry: 1077f29b0; end: 1077f2a4f;  */

uint FUN_1077f29b0(undefined8 param_1)

{
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar1;
  int extraout_w9;
  int extraout_w9_00;
  int iVar2;
  long unaff_x23;
  
  func_0x0001077f35ec();
  func_0x0001077f362c(&UNK_1109ded48);
  do {
    if (unaff_x23 == 0) {
      func_0x0001077f35f8();
      iVar2 = extraout_w9_00;
      uVar1 = extraout_w8_00;
      goto LAB_1077f29f4;
    }
    func_0x0001077f35cc();
    func_0x0001077f35a8();
    func_0x0001077f35e0();
  } while ((int)param_1 == 0);
  func_0x0001077f3604();
  iVar2 = extraout_w9;
  uVar1 = extraout_w8;
LAB_1077f29f4:
  return uVar1 | iVar2 << 8;
}



/* Entry: 1077f2c70; end: 1077f2cbf;  */

uint FUN_1077f2c70(undefined8 param_1)

{
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar1;
  int extraout_w9;
  int extraout_w9_00;
  int iVar2;
  long unaff_x23;
  
  func_0x0001077f35ec();
  func_0x0001077f362c(&UNK_1109dee58);
  do {
    if (unaff_x23 == 0) {
      func_0x0001077f35f8();
      iVar2 = extraout_w9_00;
      uVar1 = extraout_w8_00;
      goto LAB_1077f2cb4;
    }
    func_0x0001077f35cc();
    func_0x0001077f35a8();
    func_0x0001077f35e0();
  } while ((int)param_1 == 0);
  func_0x0001077f3604();
  iVar2 = extraout_w9;
  uVar1 = extraout_w8;
LAB_1077f2cb4:
  return uVar1 | iVar2 << 8;
}



/* Entry: 1077f3644; end: 1077f373f;  */

long * FUN_1077f3644(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  func_0x00010b215f2c(auStack_40);
  func_0x0001077f3740(param_1,auStack_40);
  func_0x0001077f3bd4(auStack_40);
  lVar1 = lRam0000000113847068;
  if (lRam0000000113847068 == 0) {
    lVar1 = *param_1;
  }
  func_0x0001077f3888(auStack_58,*param_2);
  func_0x00010743f84c(param_1 + 1,lVar1,auStack_58);
  func_0x00010743e2a8(auStack_58);
  param_1[0x1a] = (long)&PTR_DAT_1109b0100;
  func_0x0001077f3b50(param_1 + 0x1b,param_1 + 1);
  FUN_1078bbf90(param_1 + 0x38);
  return param_1;
}



/* Entry: 1077f3944; end: 1077f397b;  */

void FUN_1077f3944(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1 + 2;
    func_0x0001077f39c4();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
  }
  else {
    func_0x0001077f39b0();
    plVar1 = param_1 + 2;
    func_0x0001077f3a04();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 1077f3af4; end: 1077f3bbf;  */

void FUN_1077f3af4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x10;
    func_0x00010743e358();
  }
  return;
}



/* Entry: 1077f3d48; end: 1077f3d6b;  */

void FUN_1077f3d48(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1109df680;
  return;
}



/* Entry: 1077f3e5c; end: 1077f3e83;  */

long FUN_1077f3e5c(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x00010743e2dc(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 1077f4740; end: 1077f47bf;  */

undefined8 * FUN_1077f4740(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uStack_28 = param_1;
  uStack_24 = param_2;
  func_0x0001072ab860(param_3 + 3);
  *(undefined1 *)(param_3 + 0x27) = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x0001077f47c0(param_3,&uStack_28,(long)&uStack_30 + 4,&uStack_30,(long)&uStack_38 + 4,
                      &uStack_38);
  return param_3;
}



/* Entry: 1077f4f2c; end: 1077f4fab;  */

void FUN_1077f4f2c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1077f53ec; end: 1077f5453;  */

void FUN_1077f53ec(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = param_2 + 8;
  func_0x0001072bb3b4();
  uStack_30 = *param_2;
  uStack_28 = 0;
  puStack_40 = puVar1;
  uStack_38 = param_3;
  func_0x0001003a91d4(&UNK_10f42acb4);
  func_0x0001003a9204(auStack_58);
  func_0x000107268798(param_1,auStack_58);
  func_0x0001077f8678();
  return;
}



/* Entry: 1077f5f5c; end: 1077f609b;  */

undefined8
FUN_1077f5f5c(float param_1,float param_2,float param_3,float param_4,long param_5,long param_6,
             undefined8 *param_7,undefined8 param_8,float *param_9)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  ulong uVar6;
  float *pfVar7;
  undefined8 extraout_x8;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uStack_120;
  float fStack_118;
  undefined4 uStack_114;
  undefined8 *puStack_110;
  float fStack_108;
  undefined4 uStack_104;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 auStack_80 [5];
  undefined **ppuStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_5;
  puVar5 = param_7;
  pfVar7 = param_9;
  func_0x0001077f8548();
  fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x4c));
  fVar16 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x50));
  fVar17 = *(float *)(lVar2 + 0xe58);
  fVar12 = fVar17 + fVar15 * 0.5 * (param_3 + 1.0);
  fVar13 = fVar17 + fVar16 * 0.5 * (param_4 + 1.0);
  uVar6 = (ulong)(uint)fVar13;
  *pfVar7 = fVar17 + fVar15 * 0.5 * (param_1 + 1.0);
  pfVar7[1] = fVar17 + fVar16 * 0.5 * (param_2 + 1.0);
  pfVar7[2] = fVar12;
  pfVar7[3] = fVar13;
  uVar8 = 1;
  *(undefined1 *)(pfVar7 + 4) = 1;
  lStack_50 = param_6 + 0x120;
  ppuStack_58 = &PTR_DAT_1109df800;
  pppuStack_40 = &ppuStack_58;
  uStack_48 = param_8;
  uStack_38 = extraout_x8;
  func_0x0001077f5498();
  iVar1 = (int)lVar2;
  if (iVar1 != 0) {
    if (((ulong)param_7 & 1) == 0) {
      func_0x0001077f79dc(auStack_80,&ppuStack_58);
      uVar3 = param_5 + 0xe60;
      puVar5 = auStack_80;
      func_0x0001072a13d8(uVar3,param_9);
      iVar1 = (int)auStack_80;
      func_0x0001077f79bc();
      if ((uVar3 & 1) != 0) {
        uVar8 = 4;
        goto LAB_1077f604c;
      }
    }
    func_0x0001077f8634();
    in_ZR = iVar1 == 0;
    uVar8 = 0x100000000;
    if ((bool)in_ZR) {
      uVar8 = 0;
    }
  }
LAB_1077f604c:
  func_0x0001077f828c();
  func_0x0001077f8514(uStack_38);
  if ((bool)in_ZR) {
    return uVar8;
  }
  ___stack_chk_fail();
  func_0x0001077f79bc(auStack_80);
  pppuVar4 = &ppuStack_58;
  func_0x0001077f828c();
  func_0x0001077f85e0();
  if (*(int *)(puVar5 + 3) == 1) {
    func_0x0001074b5420();
    fVar15 = *(float *)(pppuVar4 + 0x1cb);
    uVar8 = NEON_ucvtf(*(undefined8 *)((long)pppuVar4 + 0x4c),4);
    fVar13 = (float)uVar8 * 0.5;
    uVar11 = NEON_fmov(0x3f800000,4);
    fVar12 = (float)*puVar5;
    fVar16 = fVar15 + fVar13 * (fVar12 + (float)uVar11);
    uVar9 = 0x3f800000;
    fStack_108 = (fVar15 + fVar13 * (fVar12 + *(float *)(puVar5 + 1) + 1.0)) - fVar16;
    puStack_110 = (undefined8 *)
                  CONCAT44(fVar15 + (float)((ulong)uVar8 >> 0x20) * 0.5 *
                                    ((float)((ulong)*puVar5 >> 0x20) +
                                    (float)((ulong)uVar11 >> 0x20)),fVar16);
    fVar12 = fStack_108;
    func_0x0001077f6258(&puStack_110);
    func_0x0001074b1a8c(param_8,&puStack_110);
    iVar1 = (int)param_8;
    uStack_f8 = CONCAT44(fVar13,fVar12);
    uStack_f0 = CONCAT44(uVar9,fVar15);
    func_0x0001077f8634();
    if (iVar1 != 0) {
      return 0x100000000;
    }
  }
  else {
    if (*(int *)(puVar5 + 3) != 0) {
      return 7;
    }
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    func_0x0001074b5408(puVar5);
    func_0x0001072a77dc(&puStack_110,puVar5);
    uVar8 = NEON_ucvtf(*(undefined8 *)((long)pppuVar4 + 0x4c),4);
    uVar11 = 0x3f0000003f000000;
    fVar13 = (float)uVar8;
    uVar3 = (ulong)uVar8 >> 0x20;
    uStack_f0 = uStack_f8;
    uVar18 = NEON_fmov(0x3f800000,4);
    puVar5 = puStack_110;
    while( true ) {
      uVar14 = (undefined4)uVar6;
      uVar10 = (undefined4)uVar11;
      uVar9 = (undefined4)uVar8;
      if (puVar5 == (undefined8 *)CONCAT44(uStack_104,fStack_108)) break;
      fVar15 = (float)*puVar5 + (float)uVar18;
      fVar16 = (float)((ulong)*puVar5 >> 0x20) + (float)((ulong)uVar18 >> 0x20);
      uVar8 = CONCAT44(fVar16,fVar15);
      uVar11 = CONCAT44(*(float *)(pppuVar4 + 0x1cb) + (float)uVar3 * 0.5 * fVar16,
                        *(float *)(pppuVar4 + 0x1cb) + fVar13 * 0.5 * fVar15);
      uStack_120 = uVar11;
      func_0x0001074b2678(&uStack_f8,&uStack_120);
      puVar5 = puVar5 + 1;
    }
    func_0x0001074b2638(param_8,&uStack_f8);
    uVar6 = 0;
    func_0x0001072a0e60();
    uStack_120 = CONCAT44(uVar10,uVar9);
    fStack_118 = fVar12;
    uStack_114 = uVar14;
    func_0x0001077f8634();
    func_0x0001072a7938(&puStack_110);
    func_0x0001072a7938(&uStack_f8);
    if ((uVar6 & 1) != 0) {
      return 0x100000000;
    }
  }
  return 0;
}



/* Entry: 1077f7194; end: 1077f722f;  */

float FUN_1077f7194(float param_1,float param_2,float param_3,undefined8 param_4,uint param_5)

{
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  dStack_40 = (double)param_1;
  dStack_38 = (double)param_2;
  dStack_30 = (double)param_3;
  dStack_28 = 1.0;
  func_0x000107877358(&dStack_40,&dStack_40,param_4);
  return (float)(((dStack_40 / dStack_28) * 0.5 + 0.5) * (double)param_5);
}



/* Entry: 1077f7940; end: 1077f795b;  */

void FUN_1077f7940(long param_1)

{
  func_0x0001077f795c();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1077f7d58; end: 1077f7da7;  */

void FUN_1077f7d58(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x00010002c5b0(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1077f8058; end: 1077f8087;  */

void FUN_1077f8058(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109df760;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1077f8268; end: 1077f828b;  */

void FUN_1077f8268(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x14;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1077f846c; end: 1077f84bb;  */

long * FUN_1077f846c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x0001072a8888(lVar1);
    func_0x0001077f8708();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1077f8d34; end: 1077f8d63;  */

void FUN_1077f8d34(void)

{
  func_0x0001077f9628();
  return;
}



/* Entry: 1077f933c; end: 1077f948f;  */

uint FUN_1077f933c(undefined8 param_1,long param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  long alStack_80 [4];
  undefined4 uStack_60;
  
  lVar2 = param_2;
  func_0x0001077fa000(param_2,param_3[3] + 8);
  if (param_2 + 8 == lVar2) {
    alStack_80[0] = param_3[3] + 8;
    puStack_98 = (undefined8 *)(param_2 + 0x18);
    func_0x0001077f9490(param_2,&UNK_10dd5b8f9,alStack_80,&puStack_98);
    lVar2 = param_2;
  }
  alStack_80[1] = 0;
  alStack_80[0] = 0;
  alStack_80[3] = 0;
  alStack_80[2] = 0;
  uStack_60 = 0x3f800000;
  func_0x0001077f8bf8(param_1,lVar2 + 0x58);
  (**(code **)(*param_3 + 0xd0))(&puStack_98,param_3);
  uVar4 = 0;
  for (puVar5 = puStack_98; puVar5 != puStack_90; puVar5 = puVar5 + 2) {
    plVar3 = (long *)puVar5[1];
    (**(code **)(*plVar3 + 0x70))(plVar3,lVar2 + 0x58,*puVar5);
    uStack_a0 = SUB84(plVar3,0);
    uStack_9c = (undefined1)((ulong)plVar3 >> 0x20);
    func_0x000107260494(alStack_80,&uStack_a0);
    uVar4 = uVar4 | (uint)((ulong)plVar3 >> 0x20);
  }
  func_0x0001074c3f5c(&puStack_98);
  lVar2 = lVar2 + 0x58;
  func_0x0001077f9288(lVar2,alStack_80);
  uVar1 = uVar4 | 2;
  if ((int)lVar2 == 0) {
    uVar1 = uVar4;
  }
  func_0x00010726f2e4(alStack_80);
  return uVar1 & 0xff;
}



/* Entry: 1077f9648; end: 1077f9787;  */

/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_1077f9648(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  plVar8 = (long *)(param_1 + 8);
  plVar7 = plVar8;
  plVar3 = (long *)*plVar8;
  lVar1 = param_1;
joined_r0x0001077f9680:
  do {
    if (plVar3 == (long *)0x0) {
LAB_1077f96e0:
      func_0x0001077fa5f8();
      uVar2 = *param_3;
      uVar10 = param_4[1];
      uVar9 = *param_4;
      *(undefined8 *)(lVar1 + 0x28) = param_3[1];
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      *(undefined8 *)(lVar1 + 0x38) = uVar10;
      *(undefined8 *)(lVar1 + 0x30) = uVar9;
      *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(param_4 + 2);
      func_0x000104c318bc(lVar1 + 0x48,param_4 + 3);
      plVar3 = param_4 + 0xb;
      lVar4 = *plVar3;
      *(undefined8 *)(lVar1 + 0x80) = param_4[10];
      plVar5 = (long *)(lVar1 + 0x88);
      *plVar5 = lVar4;
      lVar6 = param_4[0xc];
      *(long *)(lVar1 + 0x90) = lVar6;
      if (lVar6 == 0) {
        *(long **)(lVar1 + 0x80) = plVar5;
      }
      else {
        *(long **)(lVar4 + 0x10) = plVar5;
        param_4[10] = plVar3;
        *plVar3 = 0;
        param_4[0xc] = 0;
      }
      func_0x0001077f9788(param_1,plVar7,plVar8,lVar1);
      func_0x0001077fa600();
      uVar2 = 1;
      lVar4 = lVar1;
LAB_1077f9768:
      auVar11._8_8_ = uVar2;
      auVar11._0_8_ = lVar4;
      return auVar11;
    }
    lVar1 = param_2;
    func_0x0001075153a0(param_2,plVar3 + 4);
    plVar7 = plVar3;
    if (((uint)lVar1 >> 7 & 1) != 0) {
      plVar8 = plVar3;
      plVar3 = (long *)*plVar3;
      goto joined_r0x0001077f9680;
    }
    lVar1 = (long)(plVar3 + 4);
    func_0x0001075153a0(lVar1,param_2);
    if (((uint)lVar1 >> 7 & 1) == 0) {
      lVar4 = *plVar8;
      if (lVar4 != 0) {
        uVar2 = 0;
        goto LAB_1077f9768;
      }
      goto LAB_1077f96e0;
    }
    plVar8 = plVar3 + 1;
    plVar3 = (long *)*plVar8;
  } while( true );
}



/* Entry: 1077f999c; end: 1077f99b3;  */

void FUN_1077f999c(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x0001077fa4fc(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x0001074f50e8(unaff_x19 + 0x28);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077f9c08; end: 1077f9c1f;  */

void FUN_1077f9c08(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x0001077fa4fc(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x00010002c948(unaff_x19 + 0x28);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077f9f4c; end: 1077f9fb3;  */

bool FUN_1077f9f4c(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x0001077f95c4();
  bVar1 = param_1 + 8 != lVar2;
  if (bVar1) {
    func_0x0001077f9f8c(param_1,lVar2);
  }
  return bVar1;
}



/* Entry: 1077fa1d8; end: 1077fa1ff;  */

void FUN_1077fa1d8(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x0001077fa414();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x0001077fa46c();
  func_0x0001077fa4ec();
  return;
}



/* Entry: 1077fa378; end: 1077fa3a7;  */

undefined8 FUN_1077fa378(undefined8 param_1,long param_2)

{
  func_0x0001077fa3a8();
  func_0x0001074f4fe0(param_2 + 0x20);
  func_0x0001077fa628();
  return param_1;
}



/* Entry: 1077fa908; end: 1077fa953;  */

void FUN_1077fa908(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *param_1 = &PTR_DAT_1109df8c0;
  return;
}



/* Entry: 1077fb2f4; end: 1077fb317;  */

undefined8 FUN_1077fb2f4(undefined8 *param_1,long param_2)

{
  func_0x000107809714(*param_1);
  func_0x0001077fb24c(param_2 + 0x18);
  return 0;
}


