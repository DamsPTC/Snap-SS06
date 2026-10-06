/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098da0f8; end: 1098da12b;  */

long FUN_1098da0f8(long param_1)

{
  func_0x0001098db284();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098da12c; end: 1098da12f;  */

long FUN_1098da12c(long param_1)

{
  func_0x0001098db284();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098da130; end: 1098da143;  */

void FUN_1098da130(void)

{
  FUN_1098da0f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098da144; end: 1098da14f;  */

undefined ** FUN_1098da144(void)

{
  return &PTR_DAT_110b1b350;
}



/* Entry: 1098da150; end: 1098da183;  */

void FUN_1098da150(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098db3ac();
  func_0x000107c3025c(unaff_x19 + 0x30);
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1098da184; end: 1098da313;  */

long * FUN_1098da184(long *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  long *plVar5;
  long lVar6;
  long lStack_78;
  undefined8 *apuStack_70 [2];
  
  func_0x0001098db3e4();
  if ((int)param_1[2] != 0) {
    if (((int)param_1[2] == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x0001098db28c();
      while (plVar5 = param_1, lVar6 = lStack_78, lStack_78 != 0) {
        param_1 = (long *)(lStack_78 + 8);
        func_0x0001098db240();
        lVar3 = (long)*(char *)(lVar6 + 0x1f);
        if (lVar3 < 0) {
          param_1 = *(long **)(lVar6 + 8);
          lVar3 = *(long *)(lVar6 + 0x10);
        }
        func_0x0001098db1b8(param_1,lVar3);
        func_0x0001098db1a8();
        func_0x0001098db294();
        unaff_x20 = plVar5;
      }
    }
    else {
      plVar5 = &lStack_78;
      func_0x000105991b98(plVar5);
      puVar1 = apuStack_70[0];
      for (lVar6 = lStack_78 << 3; plVar2 = plVar5, lVar6 != 0; lVar6 = lVar6 + -8) {
        plVar5 = (long *)*puVar1;
        func_0x0001098db240();
        lVar3 = (long)*(char *)((long)plVar5 + 0x17);
        if (lVar3 < 0) {
          lVar3 = plVar5[1];
          plVar5 = (long *)*plVar5;
        }
        func_0x0001098db1b8(plVar5,lVar3);
        func_0x0001098db1a8();
        puVar1 = puVar1 + 1;
        unaff_x20 = plVar2;
      }
      FUN_1098cc180(apuStack_70);
    }
  }
  uVar4 = *(ulong *)(unaff_x21 + 0x30) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar4 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  plVar5 = unaff_x20;
  if (lVar6 != 0) {
    plVar5 = param_3;
    func_0x000107c280a0(param_3,2,uVar4,unaff_x20);
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x0001098db31c();
    if ((long)uVar4 < 0) {
      lVar6 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar6 = extraout_x8 + 8;
    }
    func_0x0001053930c4(param_3,lVar6);
    plVar5 = param_3;
  }
  return plVar5;
}



/* Entry: 1098da314; end: 1098da38f;  */

long FUN_1098da314(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x0001098db1d0();
  while (uStack_38 != 0) {
    param_1 = uStack_38 + 8;
    func_0x000105990b3c(param_1,uStack_38 + 0x20);
    unaff_x20 = param_1 + unaff_x20;
    func_0x0001098db294();
  }
  func_0x0001098db338(*(undefined8 *)(unaff_x19 + 0x30));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c28098();
    func_0x0001098db3c4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001098db410();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x38) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 1098da390; end: 1098da393;  */

void FUN_1098da390(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001098db258();
  func_0x0001059929d4();
  func_0x0001098db350(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001098db344();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098db328();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098da394; end: 1098da3eb;  */

void FUN_1098da394(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001098db258();
  func_0x0001059929d4();
  func_0x0001098db350(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001098db344();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098db328();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098da3ec; end: 1098da417;  */

long FUN_1098da3ec(long param_1)

{
  func_0x0001098db284();
  FUN_1098dad94(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098da418; end: 1098da41b;  */

long FUN_1098da418(long param_1)

{
  func_0x0001098db284();
  FUN_1098dad94(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098da41c; end: 1098da42f;  */

void FUN_1098da41c(void)

{
  FUN_1098da3ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098da430; end: 1098da44b;  */

undefined ** FUN_1098da430(void)

{
  return &PTR_DAT_110b1b398;
}



/* Entry: 1098da44c; end: 1098da49b;  */

void FUN_1098da44c(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x14) != 1) {
    func_0x000107c30320(param_1 + 0x10,0x10500600020,0);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1098da49c; end: 1098da60f;  */

long * FUN_1098da49c(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long extraout_x8;
  ulong uVar7;
  long alStack_68 [3];
  
  uVar1 = *(uint *)(param_1 + 2);
  uVar6 = (ulong)uVar1;
  plVar5 = param_3;
  if (uVar1 != 0) {
    if ((uVar1 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      plVar2 = param_1;
      func_0x0001098db398();
      while (plVar3 = plVar2, alStack_68[0] != 0) {
        func_0x0001098db304();
        func_0x0001098db1a8();
        plVar2 = alStack_68;
        func_0x000107c27d54(plVar2);
        param_2 = plVar3;
      }
    }
    else {
      plVar2 = (long *)(uVar6 << 3);
      __Znam();
      func_0x0001098db398();
      plVar3 = plVar2;
      while (alStack_68[0] != 0) {
        *plVar3 = alStack_68[0] + 8;
        func_0x000107c27d54(alStack_68);
        plVar3 = plVar3 + 1;
      }
      FUN_1098cc840(plVar2,plVar2 + uVar6);
      uVar7 = uVar6 << 3;
      while (plVar3 = plVar2, uVar6 != 0) {
        func_0x0001098db304();
        plVar2 = plVar3;
        func_0x0001098db1a8();
        uVar7 = uVar7 - 8;
        param_2 = plVar3;
        uVar6 = uVar7;
      }
      func_0x0001098db2fc();
    }
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x0001098db31c();
    if ((long)plVar5 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    func_0x0001053930c4(param_3,lVar4);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 1098da610; end: 1098da693;  */

void FUN_1098da610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  int extraout_w8;
  uint extraout_w9;
  long *unaff_x20;
  int unaff_w21;
  
  func_0x0001098db3e4();
  func_0x0001098db370();
  uVar2 = 10;
  func_0x000107c280a8(10,param_1);
  func_0x000107c282a0();
  func_0x0001098db3f0((int)unaff_x20[7]);
  uVar3 = (ulong)(unaff_w21 + extraout_w8 + (extraout_w9 >> 6) + 2);
  func_0x000107c280a8(uVar3,uVar2);
  func_0x0001098db2cc();
  uVar2 = param_4;
  func_0x000107c28094(param_4,uVar3);
  lVar1 = unaff_x20[7];
  func_0x0001001a597c(param_4,uVar2);
  uVar2 = 0x12;
  func_0x0001001a59d0(0x12,param_4);
  func_0x0001001a59d0((int)lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x38))();
  return;
}



/* Entry: 1098da694; end: 1098da743;  */

long FUN_1098da694(void)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_58;
  
  func_0x0001098db1d0();
  while (uStack_58 != 0) {
    iVar1 = (int)uStack_58 + 8;
    func_0x000107c282a0();
    lVar2 = uStack_58 + 0x20;
    FUN_1098da314();
    lVar2 = lVar2 + (iVar1 + 2) + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6);
    unaff_x20 = lVar2 + unaff_x20 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6);
    func_0x0001098db294();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001098db410();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar2 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 1098da744; end: 1098da747;  */

void FUN_1098da744(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001098db258();
  func_0x0001098daf8c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098db328();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098da748; end: 1098da7eb;  */

void FUN_1098da748(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001098db258();
  func_0x0001098daf8c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098db328();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098da7ec; end: 1098da963;  */

void FUN_1098da7ec(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098db3e4();
  uVar3 = *(ulong *)(param_1 + 8);
  uVar2 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x0001098db350(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x0001098db344();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  func_0x0001098db350(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001098db344();
    }
    func_0x000107c30248(unaff_x21 + 0x20);
  }
  func_0x0001098db350(*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001098db344();
    }
    func_0x000107c30248(unaff_x21 + 0x28);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x30) == 0) {
        uVar3 = uVar2;
        FUN_1098db070(uVar2,*(undefined8 *)(unaff_x20 + 0x30));
        *(ulong *)(unaff_x21 + 0x30) = uVar3;
      }
      else {
        FUN_1098da748();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x38) == 0) {
        FUN_1098db10c(uVar2,*(undefined8 *)(unaff_x20 + 0x38));
        *(ulong *)(unaff_x21 + 0x38) = uVar2;
      }
      else {
        FUN_1098da03c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x21 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098da964; end: 1098daa1f;  */

undefined8 * FUN_1098da964(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b1b2c0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001098db29c();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x0001098db368();
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x0001098db368();
  param_1[4] = lVar2;
  lVar2 = param_3 + 0x28;
  func_0x0001098db368();
  param_1[5] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_1098db070(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_1098db10c(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = param_2;
  uVar4 = *(undefined8 *)(param_3 + 0x48);
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  param_1[10] = *(undefined8 *)(param_3 + 0x50);
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  return param_1;
}



/* Entry: 1098daa20; end: 1098daa4b;  */

undefined8 FUN_1098daa20(undefined8 param_1)

{
  func_0x0001098db284();
  FUN_1098daa4c(param_1);
  return param_1;
}



/* Entry: 1098daa4c; end: 1098daa9b;  */

void FUN_1098daa4c(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_1098da3ec();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_1098d9c60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098daa9c; end: 1098daa9f;  */

undefined8 FUN_1098daa9c(undefined8 param_1)

{
  func_0x0001098db284();
  FUN_1098daa4c(param_1);
  return param_1;
}



/* Entry: 1098daaa0; end: 1098daab3;  */

void FUN_1098daaa0(void)

{
  FUN_1098daa20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098daab4; end: 1098daabf;  */

undefined ** FUN_1098daab4(void)

{
  return &PTR_DAT_110b1b3e0;
}



/* Entry: 1098daac0; end: 1098dad6f;  */

long * FUN_1098daac0(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  plVar3 = param_3;
  func_0x0001098db3e4();
  puVar5 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    if (puVar5[1] != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_1098dab00;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_1098dab00:
    func_0x0001098db37c(puVar5);
    param_1 = param_3;
    func_0x0001098db26c(param_3,1);
    unaff_x20 = param_1;
  }
  puVar5 = (undefined8 *)(*(ulong *)(unaff_x21 + 0x20) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    if (puVar5[1] != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_1098dab44;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_1098dab44:
    func_0x0001098db37c(puVar5);
    param_1 = param_3;
    func_0x0001098db26c(param_3,2);
    unaff_x20 = param_1;
  }
  puVar5 = (undefined8 *)(*(ulong *)(unaff_x21 + 0x28) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    if (puVar5[1] == 0) goto LAB_1098daba4;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_1098daba4;
  func_0x0001098db37c(puVar5);
  param_1 = param_3;
  func_0x0001098db26c(param_3,3);
  unaff_x20 = param_1;
LAB_1098daba4:
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar1 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x21 + 0x30) + 0x30);
    param_1 = (long *)0x4;
    func_0x0001098db384();
    unaff_x20 = param_1;
  }
  if (*(long *)(unaff_x21 + 0x40) != 0) {
    func_0x0001098db404();
    func_0x000107c282c4();
    unaff_x20 = param_1;
  }
  if (*(long *)(unaff_x21 + 0x48) != 0) {
    func_0x0001098db404();
    func_0x000106af68d0();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x50) != 0) {
    func_0x0001098db404();
    func_0x00010598f468();
    unaff_x20 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x21 + 0x38) + 0x40);
    param_1 = (long *)0x8;
    func_0x0001098db384();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x54) != 0) {
    func_0x0001098db404();
    func_0x000108b3207c();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x0001098db31c();
    if ((long)plVar3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      plVar3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*param_3 - (long)unaff_x20 < (long)(int)plVar3) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)unaff_x20) + 0x10;
        iVar4 = (int)plVar3;
        plVar3 = (long *)(ulong)(uint)(iVar4 - iVar6);
        if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
        func_0x00010b4d5738();
        lVar2 = (long)unaff_x20 + (long)iVar6;
        unaff_x20 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)unaff_x20 + (long)iVar4);
    }
    _memcpy(unaff_x20,lVar2,(ulong)plVar3 & 0xffffffff);
    return (long *)((long)unaff_x20 + (long)(int)plVar3);
  }
  return unaff_x20;
}



/* Entry: 1098dad70; end: 1098dad93;  */

void FUN_1098dad70(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098db3e4();
  uVar3 = *(ulong *)(param_1 + 8);
  uVar2 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x0001098db350(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x0001098db344();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  func_0x0001098db350(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001098db344();
    }
    func_0x000107c30248(unaff_x21 + 0x20);
  }
  func_0x0001098db350(*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001098db344();
    }
    func_0x000107c30248(unaff_x21 + 0x28);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x30) == 0) {
        uVar3 = uVar2;
        FUN_1098db070(uVar2,*(undefined8 *)(unaff_x20 + 0x30));
        *(ulong *)(unaff_x21 + 0x30) = uVar3;
      }
      else {
        FUN_1098da748();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x38) == 0) {
        FUN_1098db10c(uVar2,*(undefined8 *)(unaff_x20 + 0x38));
        *(ulong *)(unaff_x21 + 0x38) = uVar2;
      }
      else {
        FUN_1098da03c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x21 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098dad94; end: 1098dadd7;  */

long FUN_1098dad94(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x000107c30320(param_1,0x500600020,0);
  }
  return param_1;
}



/* Entry: 1098dadd8; end: 1098daf4b;  */

void FUN_1098dadd8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  *puVar1 = &PTR_FUN_110b1b1d0;
  puVar1[1] = param_1;
  puVar1[3] = 0x100000000;
  puVar1[2] = 0x100000000;
  puVar1[4] = &DAT_10e5b4a18;
  puVar1[5] = param_1;
  puVar1[6] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 1098daf4c; end: 1098db06f;  */

long FUN_1098daf4c(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar4;
  uint extraout_w10_00;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  
  plVar2 = param_1;
  func_0x0001098db370();
  lVar5 = (long)*(char *)((long)param_2 + 0x17);
  if ((-1 < lVar5) || (lVar5 = param_2[1], lVar5 < 0x80)) {
    lVar8 = *param_4;
    uVar4 = (int)param_1 << 3;
    uVar1 = uVar4;
    func_0x000107c280a4();
    if (lVar5 <= lVar8 + ~((long)plVar2 + (long)(int)uVar1) + 0x10) {
      lVar8 = (long)plVar2 + 2;
      for (uVar4 = uVar4 | 2; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
        *(byte *)(lVar8 + -2) = (byte)uVar4 | 0x80;
        lVar8 = lVar8 + 1;
      }
      *(byte *)(lVar8 + -2) = (byte)uVar4;
      *(char *)(lVar8 + -1) = (char)lVar5;
      plVar2 = (long *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        plVar2 = param_2;
      }
      _memcpy(lVar8,plVar2,lVar5);
      return lVar8 + lVar5;
    }
  }
  func_0x00010b4d564c(param_4,param_1);
  func_0x00010b4d56cc();
  uVar4 = extraout_w10;
  while (0x7f < uVar4) {
    func_0x00010b4d576c();
    uVar4 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar3 = extraout_x8;
  while (0x7f < (uint)uVar3) {
    func_0x00010b4d5758();
    uVar3 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  if (*param_4 - (long)plVar2 < (long)(int)param_2) {
    while( true ) {
      iVar7 = ((int)*param_4 - (int)plVar2) + 0x10;
      iVar6 = (int)param_2;
      param_2 = (long *)(ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      lVar5 = (long)plVar2 + (long)iVar7;
      plVar2 = param_4;
      func_0x000107c303e4(param_4,lVar5);
    }
    func_0x00010b4d5738();
    return (long)plVar2 + (long)iVar6;
  }
  _memcpy(plVar2);
  return (long)plVar2 + (long)(int)param_2;
}



/* Entry: 1098db070; end: 1098db10b;  */

undefined8 * FUN_1098db070(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b1b270;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001098db29c();
  }
  puVar1[3] = 0x100000000;
  puVar1[2] = 0x100000000;
  puVar1[4] = &DAT_10e5b4a18;
  puVar1[5] = param_1;
  func_0x0001098daf8c(puVar1 + 2,param_2 + 0x10);
  *(undefined4 *)(puVar1 + 6) = 0;
  return puVar1;
}



/* Entry: 1098db10c; end: 1098db1a7;  */

undefined8 * FUN_1098db10c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x48);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b1b220;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001098db29c();
  }
  func_0x000105991a48(puVar1 + 2,param_1,param_2 + 0x10);
  lVar2 = param_2 + 0x30;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[6] = lVar2;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[7] = *(undefined8 *)(param_2 + 0x38);
  return puVar1;
}



/* Entry: 1098db1a8; end: 1098db41b;  */

/* WARNING: Removing unreachable block (ram,0x0001006281e8) */

ulong FUN_1098db1a8(void)

{
  ulong unaff_x23;
  
  func_0x00010029f6ec();
  if ((unaff_x23 & 1) == 0) {
    func_0x000107c613d0();
    func_0x000107c303d0(&UNK_10f7741f2,0);
  }
  return unaff_x23;
}



/* Entry: 1098db41c; end: 1098db447;  */

undefined8 FUN_1098db41c(undefined8 param_1)

{
  func_0x0001098dc6c8();
  FUN_1098db448(param_1);
  return param_1;
}



/* Entry: 1098db448; end: 1098db46f;  */

/* WARNING: Possible PIC construction at 0x0001098db45c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098db460) */

void FUN_1098db448(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 1098db470; end: 1098db473;  */

undefined8 FUN_1098db470(undefined8 param_1)

{
  func_0x0001098dc6c8();
  FUN_1098db448(param_1);
  return param_1;
}



/* Entry: 1098db474; end: 1098db487;  */

void FUN_1098db474(void)

{
  FUN_1098db41c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098db488; end: 1098db493;  */

undefined ** FUN_1098db488(void)

{
  return &PTR_DAT_110b1b5c8;
}



/* Entry: 1098db494; end: 1098db4cf;  */

void FUN_1098db494(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1098db4d0; end: 1098db5a3;  */

long * FUN_1098db4d0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x0001098dc690(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar1 < 0) {
    plVar1 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_1098db510;
  }
  else if ((int)plVar1 != 0) {
LAB_1098db510:
    func_0x0001098dc634();
    plVar1 = (long *)0x1;
    param_2 = param_3;
    func_0x0001098dc6f0();
  }
  func_0x0001098dc690(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_1098db56c;
  }
  else if ((int)plVar1 == 0) goto LAB_1098db56c;
  func_0x0001098dc634();
  param_2 = param_3;
  func_0x0001098dc6f0(param_3,2);
LAB_1098db56c:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x0001098dc758();
  if ((long)plVar4 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 1098db5a4; end: 1098db623;  */

long FUN_1098db5a4(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x0001098dc69c(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = lVar2 + 1;
  }
  func_0x0001098dc69c(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001098dc6b4();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001098dc740();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 1098db624; end: 1098db627;  */

void FUN_1098db624(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001098dc74c();
  func_0x0001098dc684(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001098dc6a8();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  func_0x0001098dc684(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001098dc6a8();
    }
    func_0x000107c30248(unaff_x19 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098db628; end: 1098db6af;  */

void FUN_1098db628(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001098dc74c();
  func_0x0001098dc684(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001098dc6a8();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  func_0x0001098dc684(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001098dc6a8();
    }
    func_0x000107c30248(unaff_x19 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098db6b0; end: 1098db6db;  */

undefined8 FUN_1098db6b0(undefined8 param_1)

{
  func_0x0001098dc6c8();
  FUN_1098db6dc(param_1);
  return param_1;
}



/* Entry: 1098db6dc; end: 1098db713;  */

void FUN_1098db6dc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bce8004();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bce8004();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098db714; end: 1098db717;  */

undefined8 FUN_1098db714(undefined8 param_1)

{
  func_0x0001098dc6c8();
  FUN_1098db6dc(param_1);
  return param_1;
}



/* Entry: 1098db718; end: 1098db72b;  */

void FUN_1098db718(void)

{
  FUN_1098db6b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098db72c; end: 1098db737;  */

undefined ** FUN_1098db72c(void)

{
  return &PTR_DAT_110b1b608;
}



/* Entry: 1098db738; end: 1098db793;  */

void FUN_1098db738(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bce80d8(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bce80d8(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 1098db794; end: 1098db90b;  */

long * FUN_1098db794(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 2);
  plVar2 = param_1;
  plVar5 = param_3;
  if ((uVar1 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(param_1[3] + 0x1c);
    plVar2 = (long *)0x1;
    func_0x0001098dc67c();
    param_2 = plVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(param_1[4] + 0x1c);
    plVar2 = (long *)0x2;
    func_0x0001098dc67c();
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if ((int)param_1[5] != 0) {
    func_0x0001098dc708();
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x0001098dc6fc();
    param_2 = plVar3;
  }
  if (*(char *)((long)param_1 + 0x2c) == '\x01') {
    func_0x0001098dc708();
    param_2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x0001098dc6fc();
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x0001098dc758();
    if ((long)plVar5 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      plVar5 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar5) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)plVar5;
        plVar5 = (long *)(ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar4,(ulong)plVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar5);
  }
  return param_2;
}



/* Entry: 1098db90c; end: 1098db90f;  */

void FUN_1098db90c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000105992a88(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        func_0x00010bce80a4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x000105992a88(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        func_0x00010bce80a4();
      }
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  func_0x0001098dc764();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098db910; end: 1098db9d7;  */

void FUN_1098db910(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000105992a88(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        func_0x00010bce80a4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x000105992a88(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        func_0x00010bce80a4();
      }
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  func_0x0001098dc764();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098db9d8; end: 1098dbaab;  */

undefined8 * FUN_1098db9d8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b1b538;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001098dc620();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x0001098dc674();
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x0001098dc674();
  param_1[4] = lVar2;
  lVar2 = param_3 + 0x28;
  func_0x0001098dc674();
  param_1[5] = lVar2;
  lVar2 = param_3 + 0x30;
  func_0x0001098dc674();
  param_1[6] = lVar2;
  lVar2 = param_3 + 0x38;
  func_0x0001098dc674();
  param_1[7] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x0001098dc4e4(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x0001098dc55c(param_2,*(undefined8 *)(param_3 + 0x48));
  }
  param_1[9] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x50);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_3 + 0x58);
  param_1[10] = uVar3;
  return param_1;
}



/* Entry: 1098dbaac; end: 1098dbad7;  */

undefined8 FUN_1098dbaac(undefined8 param_1)

{
  func_0x0001098dc6c8();
  FUN_1098dbad8(param_1);
  return param_1;
}



/* Entry: 1098dbad8; end: 1098dbb37;  */

void FUN_1098dbad8(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_1098db41c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_1098db6b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098dbb38; end: 1098dbb3b;  */

undefined8 FUN_1098dbb38(undefined8 param_1)

{
  func_0x0001098dc6c8();
  FUN_1098dbad8(param_1);
  return param_1;
}



/* Entry: 1098dbb3c; end: 1098dbb4f;  */

void FUN_1098dbb3c(void)

{
  FUN_1098dbaac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098dbb50; end: 1098dbb5b;  */

undefined ** FUN_1098dbb50(void)

{
  return &PTR_DAT_110b1b648;
}



/* Entry: 1098dbb5c; end: 1098dbbdf;  */

void FUN_1098dbb5c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1098db494(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1098db738(*(undefined8 *)(param_1 + 0x48));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 1098dbbe0; end: 1098dbf4b;  */

long * FUN_1098dbbe0(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long extraout_x8;
  int iVar7;
  long unaff_x22;
  int iVar8;
  
  plVar2 = param_1;
  plVar4 = param_2;
  plVar6 = param_3;
  func_0x0001098dc690(param_1[3]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_1098dbc20;
  }
  else if ((int)plVar4 != 0) {
LAB_1098dbc20:
    func_0x0001098dc634();
    plVar4 = (long *)0x1;
    plVar2 = param_3;
    func_0x0001098dc614();
    param_2 = plVar2;
  }
  func_0x0001098dc690(param_1[4]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_1098dbc60;
  }
  else if ((int)plVar4 != 0) {
LAB_1098dbc60:
    func_0x0001098dc634();
    plVar4 = (long *)0x2;
    plVar2 = param_3;
    func_0x0001098dc614();
    param_2 = plVar2;
  }
  func_0x0001098dc690(param_1[5]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_1098dbca0;
  }
  else if ((int)plVar4 != 0) {
LAB_1098dbca0:
    func_0x0001098dc634();
    plVar4 = (long *)0x3;
    plVar2 = param_3;
    func_0x0001098dc614();
    param_2 = plVar2;
  }
  func_0x0001098dc690(param_1[6]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_1098dbce0;
  }
  else if ((int)plVar4 != 0) {
LAB_1098dbce0:
    func_0x0001098dc634();
    plVar4 = (long *)0x4;
    plVar2 = param_3;
    func_0x0001098dc614();
    param_2 = plVar2;
  }
  func_0x0001098dc690(param_1[7]);
  if ((long)plVar4 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_1098dbd3c;
  }
  else if ((int)plVar4 == 0) goto LAB_1098dbd3c;
  func_0x0001098dc634();
  plVar2 = param_3;
  func_0x0001098dc614(param_3,5);
  param_2 = plVar2;
LAB_1098dbd3c:
  plVar4 = plVar2;
  if (param_1[10] != 0) {
    func_0x0001098dc72c();
    plVar4 = (long *)param_1[10];
    uVar3 = 0x38;
    func_0x000107c280a8(0x38,plVar2);
    func_0x000107c280ac(plVar4,uVar3);
    param_2 = plVar4;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[8] + 0x20);
    plVar4 = (long *)0x8;
    func_0x0001098dc67c();
    param_2 = plVar4;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[9] + 0x14);
    plVar4 = (long *)0x9;
    func_0x0001098dc67c();
    param_2 = plVar4;
  }
  if ((int)param_1[0xb] != 0) {
    func_0x0001098dc72c();
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0xb);
    uVar3 = 0x50;
    func_0x000107c280a8(0x50,plVar4);
    func_0x000107c280b8(param_2,uVar3);
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x0001098dc758();
    if ((long)plVar6 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      plVar6 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar6) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)plVar6;
        plVar6 = (long *)(ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar5 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar5,(ulong)plVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar6);
  }
  return param_2;
}



/* Entry: 1098dbf4c; end: 1098dbf4f;  */

void FUN_1098dbf4c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar3 = param_2;
  func_0x0001098dc684(*(undefined8 *)(param_2 + 0x18));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      func_0x0001098dc6a8();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x0001098dc684(*(undefined8 *)(param_2 + 0x20));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001098dc6a8();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x0001098dc684(*(undefined8 *)(param_2 + 0x28));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001098dc6a8();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x0001098dc684(*(undefined8 *)(param_2 + 0x30));
  lVar5 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001098dc6a8();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x0001098dc684(*(undefined8 *)(param_2 + 0x38));
  lVar5 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001098dc6a8();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = uVar2;
        func_0x0001098dc4e4(uVar2,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar4;
      }
      else {
        FUN_1098db628();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        func_0x0001098dc55c(uVar2,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_1098db910();
      }
    }
  }
  if (*(long *)(param_2 + 0x50) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_2 + 0x50);
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  func_0x0001098dc764();
  if ((extraout_x8_04 & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098dbf50; end: 1098dc0df;  */

void FUN_1098dbf50(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar3 = param_2;
  func_0x0001098dc684(*(undefined8 *)(param_2 + 0x18));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      func_0x0001098dc6a8();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x0001098dc684(*(undefined8 *)(param_2 + 0x20));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001098dc6a8();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x0001098dc684(*(undefined8 *)(param_2 + 0x28));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001098dc6a8();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x0001098dc684(*(undefined8 *)(param_2 + 0x30));
  lVar5 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001098dc6a8();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x0001098dc684(*(undefined8 *)(param_2 + 0x38));
  lVar5 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001098dc6a8();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = uVar2;
        func_0x0001098dc4e4(uVar2,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar4;
      }
      else {
        FUN_1098db628();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        func_0x0001098dc55c(uVar2,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_1098db910();
      }
    }
  }
  if (*(long *)(param_2 + 0x50) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_2 + 0x50);
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  func_0x0001098dc764();
  if ((extraout_x8_04 & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098dc0e0; end: 1098dc133;  */

void FUN_1098dc0e0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x19;
  
  func_0x0001098dc74c();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110b1b588;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001098dc620();
  }
  FUN_1098dc360(unaff_x19 + 2);
  *(undefined4 *)(unaff_x19 + 5) = 0;
  return;
}



/* Entry: 1098dc134; end: 1098dc15f;  */

long FUN_1098dc134(long param_1)

{
  func_0x0001098dc6c8();
  FUN_1098dc38c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098dc160; end: 1098dc163;  */

long FUN_1098dc160(long param_1)

{
  func_0x0001098dc6c8();
  FUN_1098dc38c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098dc164; end: 1098dc177;  */

void FUN_1098dc164(void)

{
  FUN_1098dc134();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098dc178; end: 1098dc183;  */

undefined ** FUN_1098dc178(void)

{
  return &PTR_DAT_110b1b688;
}



/* Entry: 1098dc184; end: 1098dc1c3;  */

void FUN_1098dc184(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1098dc1c4; end: 1098dc273;  */

long * FUN_1098dc1c4(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long extraout_x8;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x18);
  plVar3 = param_3;
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar5 * 8 + 7);
    }
    plVar3 = (long *)(ulong)*(uint *)(*puVar1 + 0x14);
    param_2 = (long *)0x1;
    func_0x0001098dc67c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001098dc758();
    if ((long)plVar3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      plVar3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar3) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)plVar3;
        plVar3 = (long *)(ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        lVar2 = (long)param_2 + (long)iVar6;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar2,(ulong)plVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar3);
  }
  return param_2;
}



/* Entry: 1098dc274; end: 1098dc2e7;  */

long FUN_1098dc274(long param_1)

{
  ulong *puVar1;
  long extraout_x8;
  ulong uVar2;
  long extraout_x9;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    func_0x0001098d280c();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001098dc740();
    lVar4 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 1098dc2e8; end: 1098dc2eb;  */

void FUN_1098dc2e8(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001098dc74c();
  FUN_1098dc330(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098dc2ec; end: 1098dc32f;  */

void FUN_1098dc2ec(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001098dc74c();
  FUN_1098dc330(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098dc330; end: 1098dc35f;  */

void FUN_1098dc330(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 1098dc360; end: 1098dc38b;  */

undefined8 * FUN_1098dc360(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_1098dc330(param_1,param_3);
  return param_1;
}



/* Entry: 1098dc38c; end: 1098dc3bb;  */

long * FUN_1098dc38c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1098dc3bc; end: 1098dc4e3;  */

void FUN_1098dc3bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x0001098dc720();
  }
  *puVar1 = &PTR_FUN_110b1b498;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1098dc4e4; end: 1098dc607;  */

undefined8 * FUN_1098dc4e4(undefined8 *param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001098dc74c();
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    func_0x0001098dc720();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_FUN_110b1b498;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098dc620();
  }
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c2809c();
  param_1[2] = lVar1;
  lVar1 = unaff_x20 + 0x18;
  func_0x000107c2809c();
  param_1[3] = lVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



/* Entry: 1098dc608; end: 1098dc777;  */

void FUN_1098dc608(void)

{
  return;
}



/* Entry: 1098dc778; end: 1098dc7cf;  */

long FUN_1098dc778(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1098dc134();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bce8004();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1098dc7d0; end: 1098dc7d3;  */

long FUN_1098dc7d0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1098dc134();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bce8004();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1098dc7d4; end: 1098dc7e7;  */

void FUN_1098dc7d4(void)

{
  FUN_1098dc778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098dc7e8; end: 1098dc7f3;  */

undefined ** FUN_1098dc7e8(void)

{
  return &PTR_DAT_110b1b7c8;
}



/* Entry: 1098dc7f4; end: 1098dc85f;  */

void FUN_1098dc7f4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1098dc184(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bce80d8(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 1098dc860; end: 1098dca9f;  */

long * FUN_1098dc860(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 != 0) {
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_1098dc8a4;
    }
  }
  else if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_1098dc8a4:
    func_0x000107c303d4(puVar8,lVar4,1,&UNK_10f587773);
    param_2 = param_3;
    func_0x0001098dcf6c(param_3,1);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_1098dc90c;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_1098dc90c;
  func_0x000107c303d4(puVar8,lVar4,1,&UNK_10f587794);
  param_2 = param_3;
  func_0x0001098dcf6c(param_3,2);
LAB_1098dc90c:
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x3;
    func_0x0001098dcf54(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x28));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x4;
    func_0x0001098dcf54(4,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x1c));
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    plVar2 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(byte *)(param_1 + 0x38);
    uVar3 = 0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x000107c280a8(param_2,uVar3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar9);
        if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar9;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 1098dcaa0; end: 1098dcbe3;  */

void FUN_1098dcaa0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x0001098dcef0(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_1098dc2ec();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x000105992a88(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x00010bce80a4();
      }
    }
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098dcbe4; end: 1098dcc13;  */

long FUN_1098dcbe4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098dce1c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098dcc14; end: 1098dcc17;  */

long FUN_1098dcc14(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098dce1c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098dcc18; end: 1098dcc2b;  */

void FUN_1098dcc18(void)

{
  FUN_1098dcbe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098dcc2c; end: 1098dcc37;  */

undefined ** FUN_1098dcc2c(void)

{
  return &PTR_DAT_110b1b808;
}



/* Entry: 1098dcc38; end: 1098dcc7b;  */

void FUN_1098dcc38(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1098dcc7c; end: 1098dcdbb;  */

long * FUN_1098dcc7c(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
    param_2 = plVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 1098dcdbc; end: 1098dce0b;  */

void FUN_1098dcdbc(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098dce0c; end: 1098dce1b;  */

void FUN_1098dce0c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x40);
  }
  *puVar1 = &PTR_FUN_110b1b738;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 1098dce1c; end: 1098dce4b;  */

long * FUN_1098dce1c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1098dce4c; end: 1098dcf33;  */

void FUN_1098dce4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  *puVar1 = &PTR_FUN_110b1b738;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 1098dcf34; end: 1098dcf77;  */

void FUN_1098dcf34(void)

{
  return;
}



/* Entry: 1098dcf78; end: 1098dcfa7;  */

long FUN_1098dcf78(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098dcfa8(param_1);
  return param_1;
}



/* Entry: 1098dcfa8; end: 1098dcfef;  */

void FUN_1098dcfa8(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1098d2d54();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bce8004();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098dcff0; end: 1098dcff3;  */

long FUN_1098dcff0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098dcfa8(param_1);
  return param_1;
}


