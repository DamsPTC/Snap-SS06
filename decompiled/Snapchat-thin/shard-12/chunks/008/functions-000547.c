/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098d47cc; end: 1098d4853;  */

long FUN_1098d47cc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_1098d4804;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_1098d4804:
    lVar3 = 0;
    goto LAB_1098d4808;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_1098d4808:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x0001098d5d1c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001098d5da4();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 1098d4854; end: 1098d4857;  */

void FUN_1098d4854(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
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



/* Entry: 1098d4858; end: 1098d48f3;  */

void FUN_1098d4858(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
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



/* Entry: 1098d48f4; end: 1098d493f;  */

long FUN_1098d48f4(long param_1)

{
  func_0x0001098d5c64();
  func_0x000107c30258(param_1 + 0x58);
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_1098d42f0();
  }
  __ZdlPv();
  FUN_1098d53f4(param_1 + 0x38);
  FUN_1098d53b8(param_1 + 0x18);
  return param_1;
}



/* Entry: 1098d4940; end: 1098d4943;  */

long FUN_1098d4940(long param_1)

{
  func_0x0001098d5c64();
  func_0x000107c30258(param_1 + 0x58);
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_1098d42f0();
  }
  __ZdlPv();
  FUN_1098d53f4(param_1 + 0x38);
  FUN_1098d53b8(param_1 + 0x18);
  return param_1;
}



/* Entry: 1098d4944; end: 1098d4957;  */

void FUN_1098d4944(void)

{
  FUN_1098d48f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d4958; end: 1098d4983;  */

undefined ** FUN_1098d4958(void)

{
  return &PTR_DAT_110b1a668;
}



/* Entry: 1098d4984; end: 1098d49f7;  */

void FUN_1098d4984(long param_1)

{
  ulong *puVar1;
  
  FUN_1098d55f0(param_1 + 0x18);
  if (*(int *)(param_1 + 0x3c) != 1) {
    func_0x000107c30320(param_1 + 0x38,0x10400380010,0);
  }
  func_0x000107c3025c(param_1 + 0x58);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_1098d4378(*(undefined8 *)(param_1 + 0x60));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 1098d49f8; end: 1098d4c8b;  */

ulong FUN_1098d49f8(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long extraout_x8;
  ulong unaff_x20;
  long unaff_x21;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puStack_80;
  long lStack_78;
  long alStack_70 [2];
  
  uVar5 = param_3;
  func_0x0001098d5c94();
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    if (puVar6[1] == 0) goto LAB_1098d4a64;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_1098d4a64;
  func_0x0001098d5d78(puVar6);
  unaff_x20 = param_3;
  func_0x0001098d5c44(param_3,1);
LAB_1098d4a64:
  uVar3 = unaff_x20;
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    uVar5 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x60) + 0x14);
    uVar3 = 2;
    func_0x0001098d5c14(2,*(long *)(unaff_x21 + 0x60),uVar5,unaff_x20);
  }
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    if ((*(int *)(unaff_x21 + 0x18) == 1) || ((*(byte *)(param_3 + 0x3a) & 1) == 0)) {
      func_0x00010564c19c(&lStack_78);
      while (lStack_78 != 0) {
        uVar3 = 3;
        func_0x0001098d5cb0(3,lStack_78 + 8);
        func_0x0001098d5ca0();
        func_0x0001098d5d28();
      }
    }
    else {
      FUN_1098d5740(&lStack_78);
      for (lVar9 = lStack_78 << 4; lVar9 != 0; lVar9 = lVar9 + -0x10) {
        uVar3 = 3;
        func_0x0001098d5cb0(3,*(undefined8 *)(alStack_70[0] + 8));
        func_0x0001098d5ca0();
        alStack_70[0] = alStack_70[0] + 0x10;
      }
      FUN_1098d5430(alStack_70);
    }
  }
  uVar1 = *(uint *)(unaff_x21 + 0x38);
  uVar8 = (ulong)uVar1;
  if (uVar1 != 0) {
    uVar2 = uVar1 == 1;
    if (((bool)uVar2) || ((*(byte *)(param_3 + 0x3a) & 1) == 0)) {
      func_0x0001098d5d30();
      while (lStack_78 != 0) {
        uVar3 = lStack_78 + 8;
        func_0x0001098d5d3c(uVar3,lStack_78 + 0x10);
        func_0x0001098d5d28();
      }
    }
    else {
      puVar4 = (undefined4 *)(uVar8 << 4);
      __Znam();
      do {
        func_0x0001098d5db0();
      } while (!(bool)uVar2);
      puStack_80 = puVar4;
      func_0x0001098d5d30();
      while (lStack_78 != 0) {
        *puVar4 = *(undefined4 *)(lStack_78 + 8);
        *(undefined4 **)(puVar4 + 2) = (undefined4 *)(lStack_78 + 8);
        func_0x0001098d5d28();
        puVar4 = puVar4 + 4;
      }
      FUN_1098d57f8(puStack_80,puStack_80 + uVar8 * 4);
      uVar7 = uVar8 << 4;
      puVar4 = puStack_80;
      while (uVar8 != 0) {
        uVar3 = *(ulong *)(puVar4 + 2);
        func_0x0001098d5d3c(uVar3,uVar3 + 8);
        puVar4 = puVar4 + 4;
        uVar7 = uVar7 - 0x10;
        uVar8 = uVar7;
      }
      FUN_1098d5430(&puStack_80);
    }
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x0001098d5d10();
    if ((long)uVar5 < 0) {
      lVar9 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar9 = extraout_x8 + 8;
    }
    func_0x0001053930c4(param_3,lVar9);
    uVar3 = param_3;
  }
  return uVar3;
}



/* Entry: 1098d4c8c; end: 1098d4da3;  */

long FUN_1098d4c8c(int param_1,undefined8 param_2,long *param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  byte bVar2;
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
  
  plVar1 = param_5;
  func_0x000107c28094(param_5,param_4);
  func_0x000107c280a8(param_1 << 3 | 2,plVar1);
  FUN_1098d583c(param_2,param_3);
  func_0x000107c280a8();
  func_0x0001098d5c80();
  plVar1 = (long *)0x2;
  func_0x000105992fc4(2,param_3,param_2);
  lVar5 = (long)*(char *)((long)param_3 + 0x17);
  if ((-1 < lVar5) || (lVar5 = param_3[1], lVar5 < 0x80)) {
    lVar8 = *param_5;
    iVar6 = 0x10;
    func_0x0001001a5b20();
    if (lVar5 <= lVar8 + ~((long)plVar1 + (long)iVar6) + 0x10) {
      lVar8 = (long)plVar1 + 2;
      bVar2 = 0x12;
      while (0x7f < bVar2) {
        *(byte *)(lVar8 + -2) = bVar2 | 0x80;
        lVar8 = lVar8 + 1;
        bVar2 = 0;
      }
      *(byte *)(lVar8 + -2) = bVar2;
      *(char *)(lVar8 + -1) = (char)lVar5;
      plVar1 = (long *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        plVar1 = param_3;
      }
      _memcpy(lVar8,plVar1,lVar5);
      return lVar8 + lVar5;
    }
  }
  func_0x00010b4d564c(param_5,2);
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
  if (*param_5 - (long)plVar1 < (long)(int)param_3) {
    while( true ) {
      iVar7 = ((int)*param_5 - (int)plVar1) + 0x10;
      iVar6 = (int)param_3;
      param_3 = (long *)(ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      lVar5 = (long)plVar1 + (long)iVar7;
      plVar1 = param_5;
      func_0x000107c303e4(param_5,lVar5);
    }
    func_0x00010b4d5738();
    return (long)plVar1 + (long)iVar6;
  }
  _memcpy(plVar1);
  return (long)plVar1 + (long)(int)param_3;
}



/* Entry: 1098d4da4; end: 1098d4ecf;  */

/* WARNING: Removing unreachable block (ram,0x0001098d4e0c) */

long FUN_1098d4da4(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  ulong uVar3;
  undefined8 uStack_58;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x18);
  func_0x0001098d5cc8();
  while (uStack_58 != 0) {
    lVar1 = uStack_58 + 8;
    FUN_1098d4ed0(lVar1,uStack_58 + 0x10);
    uVar3 = lVar1 + uVar3;
    func_0x0001098d5c5c();
  }
  lVar1 = uVar3 + *(uint *)(param_1 + 0x38);
  func_0x0001098d5cc8();
  uVar3 = *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar3 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x0001098d5d1c();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x60);
    func_0x0001098d44b0();
    func_0x0001098d5be0();
    lVar1 = lVar1 + lVar2 + extraout_x8 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001098d5da4();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 1098d4ed0; end: 1098d4f07;  */

long FUN_1098d4ed0(int param_1)

{
  int iVar1;
  uint unaff_w19;
  
  func_0x0001098d5bf8();
  iVar1 = param_1 + (unaff_w19 >> 6) + 2;
  return (ulong)((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + (long)iVar1;
}



/* Entry: 1098d4f08; end: 1098d4f0b;  */

void FUN_1098d4f08(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001098d5c1c();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  func_0x0001098d5860(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar1 = (ulong *)(unaff_x21 + 0x38);
  func_0x0001098d5994(puVar1,unaff_x20 + 0x38);
  uVar2 = *(ulong *)(unaff_x20 + 0x58) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x21 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    puVar1 = (ulong *)(unaff_x21 + 0x58);
    func_0x000107c30248(puVar1,uVar2,uVar3);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x60);
    if (puVar1 == (ulong *)0x0) {
      FUN_1098d5680();
      *(ulong **)(unaff_x21 + 0x60) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_1098d4578();
    }
  }
  func_0x0001098d5d90();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098d5d00();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 1098d4f0c; end: 1098d4fbb;  */

void FUN_1098d4f0c(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001098d5c1c();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  func_0x0001098d5860(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar1 = (ulong *)(unaff_x21 + 0x38);
  func_0x0001098d5994(puVar1,unaff_x20 + 0x38);
  uVar2 = *(ulong *)(unaff_x20 + 0x58) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x21 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    puVar1 = (ulong *)(unaff_x21 + 0x58);
    func_0x000107c30248(puVar1,uVar2,uVar3);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x60);
    if (puVar1 == (ulong *)0x0) {
      FUN_1098d5680();
      *(ulong **)(unaff_x21 + 0x60) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_1098d4578();
    }
  }
  func_0x0001098d5d90();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098d5d00();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 1098d4fbc; end: 1098d5057;  */

void FUN_1098d4fbc(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 4) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_1098d502c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1098d09c0();
    }
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 1) {
        func_0x000107c30258(param_1 + 0x10);
      }
      goto LAB_1098d502c;
    }
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_1098d502c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1098d48f4();
    }
  }
  __ZdlPv();
LAB_1098d502c:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 1098d5058; end: 1098d5083;  */

undefined8 FUN_1098d5058(undefined8 param_1)

{
  func_0x0001098d5c64();
  FUN_1098d5084(param_1);
  return param_1;
}



/* Entry: 1098d5084; end: 1098d5097;  */

void FUN_1098d5084(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 4) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_1098d502c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1098d09c0();
    }
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 1) {
        func_0x000107c30258(param_1 + 0x10);
      }
      goto LAB_1098d502c;
    }
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 != 0) goto LAB_1098d502c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1098d48f4();
    }
  }
  __ZdlPv();
LAB_1098d502c:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 1098d5098; end: 1098d50ab;  */

void FUN_1098d5098(void)

{
  FUN_1098d5058();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d50ac; end: 1098d50b7;  */

undefined ** FUN_1098d50ac(void)

{
  return &PTR_DAT_110b1a6a8;
}



/* Entry: 1098d50b8; end: 1098d5217;  */

void FUN_1098d50b8(long param_1)

{
  ulong *puVar1;
  
  FUN_1098d4fbc();
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



/* Entry: 1098d5218; end: 1098d5343;  */

void FUN_1098d5218(ulong *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001098d5c1c();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(unaff_x20 + 0x1c);
  if (iVar2 == 0) goto LAB_1098d5328;
  iVar3 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      param_1 = unaff_x21;
      FUN_1098d4fbc();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar2;
  }
  if (iVar2 == 4) {
    if (iVar3 == 4) {
      param_1 = (ulong *)unaff_x21[2];
      FUN_1098d0cb4();
      goto LAB_1098d5328;
    }
    FUN_1098d5b68();
    param_1 = unaff_x22;
  }
  else {
    if (iVar2 != 3) {
      if (iVar2 == 1) {
        if (iVar3 != 1) {
          unaff_x21[2] = (ulong)&DAT_11383d918;
        }
        puVar1 = (undefined *)(*(ulong *)(unaff_x20 + 0x10) & 0xfffffffffffffffc);
        if (*(int *)(unaff_x20 + 0x1c) != 1) {
          puVar1 = &DAT_11383d918;
        }
        param_1 = unaff_x21 + 2;
        func_0x000107c30248(param_1,puVar1,unaff_x22);
      }
      goto LAB_1098d5328;
    }
    if (iVar3 == 3) {
      param_1 = (ulong *)unaff_x21[2];
      FUN_1098d4f0c();
      goto LAB_1098d5328;
    }
    FUN_1098d5a7c();
    param_1 = unaff_x22;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_1098d5328:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098d5d00();
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



/* Entry: 1098d5344; end: 1098d536b;  */

void FUN_1098d5344(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110b1a420;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1098d536c; end: 1098d53b7;  */

undefined8 * FUN_1098d536c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0x100000000;
  *param_1 = 0x100000000;
  param_1[2] = &DAT_10e5b4a18;
  param_1[3] = param_2;
  func_0x0001098d5860(param_1,param_3);
  return param_1;
}



/* Entry: 1098d53b8; end: 1098d53f3;  */

long FUN_1098d53b8(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x0001098d5d54(param_1,0x200280010);
  }
  return param_1;
}



/* Entry: 1098d53f4; end: 1098d542f;  */

long FUN_1098d53f4(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x0001098d5d54(param_1,0x400380010);
  }
  return param_1;
}



/* Entry: 1098d5430; end: 1098d5453;  */

undefined8 FUN_1098d5430(undefined8 param_1)

{
  FUN_1098d5454(param_1,0);
  return param_1;
}



/* Entry: 1098d5454; end: 1098d546b;  */

void FUN_1098d5454(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1098d546c; end: 1098d55ef;  */

void FUN_1098d546c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110b1a420;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1098d55f0; end: 1098d5613;  */

/* WARNING: Removing unreachable block (ram,0x00010055ea88) */
/* WARNING: Removing unreachable block (ram,0x00010055eac8) */
/* WARNING: Removing unreachable block (ram,0x00010055ea90) */
/* WARNING: Removing unreachable block (ram,0x00010055eabc) */
/* WARNING: Removing unreachable block (ram,0x000104c61180) */
/* WARNING: Removing unreachable block (ram,0x000104c611a4) */
/* WARNING: Removing unreachable block (ram,0x000104c61188) */
/* WARNING: Removing unreachable block (ram,0x000104c611a8) */
/* WARNING: Removing unreachable block (ram,0x000104c611bc) */
/* WARNING: Removing unreachable block (ram,0x000104c611c4) */
/* WARNING: Removing unreachable block (ram,0x000104c611d0) */
/* WARNING: Removing unreachable block (ram,0x000104c61160) */
/* WARNING: Removing unreachable block (ram,0x000104c61170) */
/* WARNING: Removing unreachable block (ram,0x00010055ead0) */

void FUN_1098d55f0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined8 *puVar5;
  
  if (*(int *)((long)param_1 + 4) == 1) {
    return;
  }
  if (param_1[3] == 0) {
    puVar2 = param_1;
    func_0x000107c39c34(param_1,0x10200280010,0);
    for (; unaff_x23 < unaff_x25; unaff_x23 = unaff_x23 + 1) {
      puVar4 = *(undefined8 **)(unaff_x22 + unaff_x23 * 8);
      if (((ulong)puVar4 & 1) != 0) {
        func_0x000107c39c30();
        puVar4 = puVar2;
      }
      while (puVar4 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar4;
        puVar2 = (undefined8 *)((long)puVar4 + unaff_x24);
        func_0x000107c60ca0();
        func_0x00010063c2d0();
        puVar4 = puVar5;
      }
    }
  }
  uVar1 = *(uint *)((long)param_1 + 4);
  puVar2 = (undefined8 *)param_1[2];
  uVar3 = (ulong)uVar1;
  while (0 < (long)uVar3) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    uVar3 = uVar3 - 1;
  }
  *(undefined4 *)param_1 = 0;
  *(uint *)((long)param_1 + 0xc) = uVar1;
  return;
}



/* Entry: 1098d5614; end: 1098d567f;  */

undefined8 * FUN_1098d5614(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001098d5d88();
  }
  else {
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110b1a470;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  func_0x0001098d4134();
  return puVar1;
}



/* Entry: 1098d5680; end: 1098d573f;  */

undefined8 * FUN_1098d5680(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x0001098d5d48();
  }
  puVar3 = puVar2 + 1;
  *puVar3 = param_1;
  *puVar2 = &PTR_FUN_110b1a4c0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001098d5d6c();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x0001098d5cd8();
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x0001098d5cd8();
  }
  puVar2[4] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x0001098d5cd8();
  }
  puVar2[5] = puVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x0001098d5cd8();
  }
  puVar2[6] = puVar3;
  return puVar2;
}



/* Entry: 1098d5740; end: 1098d57f7;  */

ulong * FUN_1098d5740(ulong *param_1,uint *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined4 *puVar2;
  long alStack_58 [3];
  
  uVar1 = *param_2;
  *param_1 = (ulong)uVar1;
  if (uVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    puVar2 = (undefined4 *)((ulong)uVar1 << 4);
    __Znam();
    do {
      func_0x0001098d5db0();
    } while (!(bool)in_ZR);
    param_1[1] = (ulong)puVar2;
    func_0x00010564c19c(alStack_58,param_2);
    while (alStack_58[0] != 0) {
      *puVar2 = *(undefined4 *)(alStack_58[0] + 8);
      *(undefined4 **)(puVar2 + 2) = (undefined4 *)(alStack_58[0] + 8);
      func_0x0001098d5c5c();
      puVar2 = puVar2 + 4;
    }
    FUN_1098d57f8(param_1[1],param_1[1] + *param_1 * 0x10);
  }
  return param_1;
}



/* Entry: 1098d57f8; end: 1098d5817;  */

void FUN_1098d57f8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1098d5818(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 1098d5818; end: 1098d583b;  */

/* WARNING: Removing unreachable block (ram,0x00010934de08) */
/* WARNING: Removing unreachable block (ram,0x00010934de0c) */
/* WARNING: Removing unreachable block (ram,0x00010934de1c) */
/* WARNING: Removing unreachable block (ram,0x00010934de48) */

int * FUN_1098d5818(int *param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  bool bVar14;
  long lVar15;
  
  lVar7 = 0;
  if (param_2 != param_1) {
    lVar7 = LZCOUNT((long)param_2 - (long)param_1 >> 4) * -2 + 0x7e;
  }
  bVar14 = true;
  piVar2 = param_1;
LAB_10934cdc8:
  do {
    lVar7 = -lVar7;
    piVar4 = piVar2;
    do {
      piVar2 = piVar4;
      lVar7 = lVar7 + 1;
      uVar10 = (long)param_2 - (long)piVar2 >> 4;
      if ((long)uVar10 < 3) {
        if (uVar10 < 2) {
          return param_1;
        }
        if (uVar10 == 2) {
          iVar8 = *piVar2;
          if (iVar8 <= param_2[-4]) {
            return param_1;
          }
          *piVar2 = param_2[-4];
          param_2[-4] = iVar8;
LAB_10934d314:
          uVar9 = *(undefined8 *)(piVar2 + 2);
          *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(param_2 + -2) = uVar9;
          return param_1;
        }
      }
      else {
        if (uVar10 == 3) {
          iVar8 = piVar2[4];
          iVar11 = *piVar2;
          iVar6 = param_2[-4];
          if (iVar8 < iVar11) {
            if (iVar8 <= iVar6) {
              *piVar2 = iVar8;
              piVar2[4] = iVar11;
              uVar9 = *(undefined8 *)(piVar2 + 2);
              *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(piVar2 + 6);
              *(undefined8 *)(piVar2 + 6) = uVar9;
              if (iVar11 <= param_2[-4]) {
                return param_1;
              }
              piVar2[4] = param_2[-4];
              param_2[-4] = iVar11;
              *(undefined8 *)(piVar2 + 6) = *(undefined8 *)(param_2 + -2);
              *(undefined8 *)(param_2 + -2) = uVar9;
              return param_1;
            }
            *piVar2 = iVar6;
            param_2[-4] = iVar11;
            goto LAB_10934d314;
          }
          if (iVar8 <= iVar6) {
            return param_1;
          }
          piVar2[4] = iVar6;
          param_2[-4] = iVar8;
          uVar9 = *(undefined8 *)(piVar2 + 6);
          *(undefined8 *)(piVar2 + 6) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(param_2 + -2) = uVar9;
          iVar8 = *piVar2;
          if (iVar8 <= piVar2[4]) {
            return param_1;
          }
          *piVar2 = piVar2[4];
          piVar2[4] = iVar8;
          uVar9 = *(undefined8 *)(piVar2 + 2);
          uVar12 = *(undefined8 *)(piVar2 + 6);
          goto LAB_10934d53c;
        }
        if (uVar10 == 4) {
          iVar8 = piVar2[4];
          iVar11 = *piVar2;
          iVar6 = piVar2[8];
          iVar5 = iVar6;
          if (iVar8 < iVar11) {
            if (iVar6 < iVar8) {
              *piVar2 = iVar6;
              piVar2[8] = iVar11;
              uVar9 = *(undefined8 *)(piVar2 + 2);
              *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(piVar2 + 10);
            }
            else {
              *piVar2 = iVar8;
              piVar2[4] = iVar11;
              uVar9 = *(undefined8 *)(piVar2 + 2);
              *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(piVar2 + 6);
              *(undefined8 *)(piVar2 + 6) = uVar9;
              if (iVar11 <= iVar6) goto LAB_10934d4d8;
              piVar2[4] = iVar6;
              piVar2[8] = iVar11;
              *(undefined8 *)(piVar2 + 6) = *(undefined8 *)(piVar2 + 10);
            }
            *(undefined8 *)(piVar2 + 10) = uVar9;
            iVar5 = iVar11;
          }
          else if (iVar6 < iVar8) {
            piVar2[4] = iVar6;
            piVar2[8] = iVar8;
            uVar12 = *(undefined8 *)(piVar2 + 6);
            uVar9 = *(undefined8 *)(piVar2 + 10);
            *(undefined8 *)(piVar2 + 6) = uVar9;
            *(undefined8 *)(piVar2 + 10) = uVar12;
            iVar5 = iVar8;
            if (iVar6 < iVar11) {
              *piVar2 = iVar6;
              piVar2[4] = iVar11;
              uVar12 = *(undefined8 *)(piVar2 + 2);
              *(undefined8 *)(piVar2 + 2) = uVar9;
              *(undefined8 *)(piVar2 + 6) = uVar12;
            }
          }
LAB_10934d4d8:
          if (iVar5 <= param_2[-4]) {
            return param_1;
          }
          piVar2[8] = param_2[-4];
          param_2[-4] = iVar5;
          uVar9 = *(undefined8 *)(piVar2 + 10);
          *(undefined8 *)(piVar2 + 10) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(param_2 + -2) = uVar9;
          iVar8 = piVar2[8];
          iVar11 = piVar2[4];
          if (iVar11 <= iVar8) {
            return param_1;
          }
          piVar2[4] = iVar8;
          piVar2[8] = iVar11;
          uVar9 = *(undefined8 *)(piVar2 + 6);
          uVar12 = *(undefined8 *)(piVar2 + 10);
          *(undefined8 *)(piVar2 + 6) = uVar12;
          *(undefined8 *)(piVar2 + 10) = uVar9;
          iVar11 = *piVar2;
          if (iVar11 <= iVar8) {
            return param_1;
          }
          *piVar2 = iVar8;
          piVar2[4] = iVar11;
          uVar9 = *(undefined8 *)(piVar2 + 2);
LAB_10934d53c:
          *(undefined8 *)(piVar2 + 2) = uVar12;
          *(undefined8 *)(piVar2 + 6) = uVar9;
          return param_1;
        }
        if (uVar10 == 5) {
          piVar4 = piVar2 + 4;
          piVar3 = piVar2 + 8;
          piVar1 = piVar2 + 0xc;
          iVar8 = *piVar4;
          iVar11 = *piVar2;
          iVar6 = *piVar3;
          if (iVar8 < iVar11) {
            if (iVar6 < iVar8) {
              *piVar2 = iVar6;
              *piVar3 = iVar11;
              uVar9 = *(undefined8 *)(piVar2 + 2);
              *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(piVar2 + 10);
              *(undefined8 *)(piVar2 + 10) = uVar9;
              iVar6 = iVar11;
            }
            else {
              *piVar2 = iVar8;
              *piVar4 = iVar11;
              uVar9 = *(undefined8 *)(piVar2 + 2);
              *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(piVar2 + 6);
              *(undefined8 *)(piVar2 + 6) = uVar9;
              iVar6 = *piVar3;
              if (iVar6 < iVar11) {
                *piVar4 = iVar6;
                *piVar3 = iVar11;
                *(undefined8 *)(piVar2 + 6) = *(undefined8 *)(piVar2 + 10);
                *(undefined8 *)(piVar2 + 10) = uVar9;
                iVar6 = iVar11;
              }
            }
          }
          else if (iVar6 < iVar8) {
            *piVar4 = iVar6;
            *piVar3 = iVar8;
            uVar9 = *(undefined8 *)(piVar2 + 6);
            *(undefined8 *)(piVar2 + 6) = *(undefined8 *)(piVar2 + 10);
            *(undefined8 *)(piVar2 + 10) = uVar9;
            iVar11 = *piVar2;
            iVar6 = iVar8;
            if (*piVar4 < iVar11) {
              *piVar2 = *piVar4;
              *piVar4 = iVar11;
              uVar9 = *(undefined8 *)(piVar2 + 2);
              *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(piVar2 + 6);
              *(undefined8 *)(piVar2 + 6) = uVar9;
              iVar6 = *piVar3;
            }
          }
          if (*piVar1 < iVar6) {
            *piVar3 = *piVar1;
            *piVar1 = iVar6;
            uVar9 = *(undefined8 *)(piVar2 + 10);
            *(undefined8 *)(piVar2 + 10) = *(undefined8 *)(piVar2 + 0xe);
            *(undefined8 *)(piVar2 + 0xe) = uVar9;
            iVar8 = *piVar4;
            if (*piVar3 < iVar8) {
              *piVar4 = *piVar3;
              *piVar3 = iVar8;
              uVar9 = *(undefined8 *)(piVar2 + 6);
              *(undefined8 *)(piVar2 + 6) = *(undefined8 *)(piVar2 + 10);
              *(undefined8 *)(piVar2 + 10) = uVar9;
              iVar8 = *piVar2;
              if (*piVar4 < iVar8) {
                *piVar2 = *piVar4;
                *piVar4 = iVar8;
                uVar9 = *(undefined8 *)(piVar2 + 2);
                *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(piVar2 + 6);
                *(undefined8 *)(piVar2 + 6) = uVar9;
              }
            }
          }
          iVar8 = param_2[-4];
          iVar11 = *piVar1;
          if (iVar8 < iVar11) {
            *piVar1 = iVar8;
            param_2[-4] = iVar11;
            uVar9 = *(undefined8 *)(piVar2 + 0xe);
            *(undefined8 *)(piVar2 + 0xe) = *(undefined8 *)(param_2 + -2);
            *(undefined8 *)(param_2 + -2) = uVar9;
            iVar8 = *piVar3;
            if (*piVar1 < iVar8) {
              *piVar3 = *piVar1;
              *piVar1 = iVar8;
              uVar9 = *(undefined8 *)(piVar2 + 10);
              *(undefined8 *)(piVar2 + 10) = *(undefined8 *)(piVar2 + 0xe);
              *(undefined8 *)(piVar2 + 0xe) = uVar9;
              iVar8 = *piVar4;
              if (*piVar3 < iVar8) {
                *piVar4 = *piVar3;
                *piVar3 = iVar8;
                uVar9 = *(undefined8 *)(piVar2 + 6);
                *(undefined8 *)(piVar2 + 6) = *(undefined8 *)(piVar2 + 10);
                *(undefined8 *)(piVar2 + 10) = uVar9;
                iVar8 = *piVar2;
                if (*piVar4 < iVar8) {
                  *piVar2 = *piVar4;
                  *piVar4 = iVar8;
                  uVar9 = *(undefined8 *)(piVar2 + 2);
                  *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(piVar2 + 6);
                  *(undefined8 *)(piVar2 + 6) = uVar9;
                }
              }
            }
          }
          return piVar2;
        }
      }
      if ((long)uVar10 < 0x18) {
        if (bVar14 == false) {
          if ((piVar2 != param_2) && (piVar2 + 4 != param_2)) {
            piVar4 = piVar2 + 6;
            piVar3 = piVar2;
            piVar1 = piVar2 + 4;
            do {
              piVar2 = piVar1;
              iVar8 = piVar3[4];
              iVar11 = *piVar3;
              if (iVar8 < iVar11) {
                uVar9 = *(undefined8 *)(piVar3 + 6);
                piVar3 = piVar4;
                do {
                  piVar1 = piVar3;
                  piVar1[-2] = iVar11;
                  piVar3 = piVar1 + -4;
                  *(undefined8 *)piVar1 = *(undefined8 *)piVar3;
                  iVar11 = piVar1[-10];
                } while (iVar8 < iVar11);
                piVar1[-6] = iVar8;
                *(undefined8 *)piVar3 = uVar9;
              }
              piVar4 = piVar4 + 4;
              piVar3 = piVar2;
              piVar1 = piVar2 + 4;
            } while (piVar2 + 4 != param_2);
          }
          return piVar2;
        }
        if (piVar2 == param_2) {
          return piVar2;
        }
        if (piVar2 + 4 == param_2) {
          return piVar2;
        }
        lVar7 = 0;
        piVar4 = piVar2 + 4;
        piVar3 = piVar2;
        goto LAB_10934d760;
      }
      if (lVar7 == 1) {
        if (piVar2 == param_2) {
          return param_1;
        }
        if (piVar2 != param_2) {
          lVar7 = (long)param_2 - (long)piVar2 >> 4;
          if (1 < lVar7) {
            uVar10 = lVar7 - 2U >> 1;
            lVar15 = uVar10 + 1;
            piVar4 = piVar2 + uVar10 * 4;
            do {
              FUN_10934deec(piVar2,param_3,lVar7,piVar4);
              piVar4 = piVar4 + -4;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
          piVar4 = param_2;
          if (1 < lVar7) {
            do {
              piVar1 = piVar4 + -4;
              iVar8 = *piVar2;
              uVar9 = *(undefined8 *)(piVar2 + 2);
              piVar3 = piVar2;
              func_0x00010934dfc4(piVar2,param_3,lVar7);
              if (piVar1 == piVar3) {
                *piVar3 = iVar8;
                *(undefined8 *)(piVar3 + 2) = uVar9;
              }
              else {
                *piVar3 = *piVar1;
                *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar4 + -2);
                *piVar1 = iVar8;
                *(undefined8 *)(piVar4 + -2) = uVar9;
                func_0x00010934e038(piVar2,piVar3 + 4,param_3,(long)(piVar3 + 4) - (long)piVar2 >> 4
                                   );
              }
              bVar14 = 2 < lVar7;
              lVar7 = lVar7 + -1;
              piVar4 = piVar1;
            } while (bVar14);
          }
        }
        return param_2;
      }
      piVar4 = piVar2 + (uVar10 >> 1) * 4;
      iVar8 = param_2[-4];
      if (uVar10 < 0x81) {
        iVar11 = *piVar2;
        iVar6 = *piVar4;
        if (iVar11 < iVar6) {
          if (iVar8 < iVar11) {
            *piVar4 = iVar8;
            param_2[-4] = iVar6;
            uVar9 = *(undefined8 *)(piVar4 + 2);
            *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(param_2 + -2);
          }
          else {
            *piVar4 = iVar11;
            *piVar2 = iVar6;
            uVar9 = *(undefined8 *)(piVar4 + 2);
            *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(piVar2 + 2);
            *(undefined8 *)(piVar2 + 2) = uVar9;
            if (iVar6 <= param_2[-4]) goto joined_r0x00010934d020;
            *piVar2 = param_2[-4];
            param_2[-4] = iVar6;
            *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(param_2 + -2);
          }
          *(undefined8 *)(param_2 + -2) = uVar9;
          goto joined_r0x00010934d020;
        }
        if (iVar11 <= iVar8) goto joined_r0x00010934d020;
        *piVar2 = iVar8;
        param_2[-4] = iVar11;
        uVar9 = *(undefined8 *)(piVar2 + 2);
        *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(param_2 + -2) = uVar9;
        iVar8 = *piVar4;
        if (iVar8 <= *piVar2) goto joined_r0x00010934d020;
        *piVar4 = *piVar2;
        *piVar2 = iVar8;
        uVar9 = *(undefined8 *)(piVar4 + 2);
        *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(piVar2 + 2);
        *(undefined8 *)(piVar2 + 2) = uVar9;
        if (!bVar14) goto LAB_10934d1f4;
      }
      else {
        iVar11 = *piVar4;
        iVar6 = *piVar2;
        if (iVar11 < iVar6) {
          if (iVar8 < iVar11) {
            *piVar2 = iVar8;
            param_2[-4] = iVar6;
            uVar9 = *(undefined8 *)(piVar2 + 2);
            *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(param_2 + -2);
          }
          else {
            *piVar2 = iVar11;
            *piVar4 = iVar6;
            uVar9 = *(undefined8 *)(piVar2 + 2);
            *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(piVar4 + 2);
            *(undefined8 *)(piVar4 + 2) = uVar9;
            if (iVar6 <= param_2[-4]) goto LAB_10934cf64;
            *piVar4 = param_2[-4];
            param_2[-4] = iVar6;
            *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(param_2 + -2);
          }
          *(undefined8 *)(param_2 + -2) = uVar9;
        }
        else if (iVar8 < iVar11) {
          *piVar4 = iVar8;
          param_2[-4] = iVar11;
          uVar9 = *(undefined8 *)(piVar4 + 2);
          *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(param_2 + -2) = uVar9;
          iVar8 = *piVar2;
          if (*piVar4 < iVar8) {
            *piVar2 = *piVar4;
            *piVar4 = iVar8;
            uVar9 = *(undefined8 *)(piVar2 + 2);
            *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(piVar4 + 2);
            *(undefined8 *)(piVar4 + 2) = uVar9;
          }
        }
LAB_10934cf64:
        iVar11 = piVar4[-4];
        iVar8 = piVar2[4];
        iVar6 = param_2[-8];
        if (iVar11 < iVar8) {
          if (iVar6 < iVar11) {
            piVar2[4] = iVar6;
            param_2[-8] = iVar8;
            uVar9 = *(undefined8 *)(piVar2 + 6);
            *(undefined8 *)(piVar2 + 6) = *(undefined8 *)(param_2 + -6);
            *(undefined8 *)(param_2 + -6) = uVar9;
          }
          else {
            piVar2[4] = iVar11;
            piVar4[-4] = iVar8;
            uVar9 = *(undefined8 *)(piVar2 + 6);
            *(undefined8 *)(piVar2 + 6) = *(undefined8 *)(piVar4 + -2);
            *(undefined8 *)(piVar4 + -2) = uVar9;
            if (param_2[-8] < iVar8) {
              piVar4[-4] = param_2[-8];
              param_2[-8] = iVar8;
              *(undefined8 *)(piVar4 + -2) = *(undefined8 *)(param_2 + -6);
              *(undefined8 *)(param_2 + -6) = uVar9;
            }
          }
        }
        else if (iVar6 < iVar11) {
          piVar4[-4] = iVar6;
          param_2[-8] = iVar11;
          uVar9 = *(undefined8 *)(piVar4 + -2);
          *(undefined8 *)(piVar4 + -2) = *(undefined8 *)(param_2 + -6);
          *(undefined8 *)(param_2 + -6) = uVar9;
          iVar8 = piVar2[4];
          if (piVar4[-4] < iVar8) {
            piVar2[4] = piVar4[-4];
            piVar4[-4] = iVar8;
            uVar9 = *(undefined8 *)(piVar2 + 6);
            *(undefined8 *)(piVar2 + 6) = *(undefined8 *)(piVar4 + -2);
            *(undefined8 *)(piVar4 + -2) = uVar9;
          }
        }
        iVar8 = piVar4[4];
        iVar11 = piVar2[8];
        iVar6 = param_2[-0xc];
        if (iVar8 < iVar11) {
          if (iVar6 < iVar8) {
            piVar2[8] = iVar6;
            param_2[-0xc] = iVar11;
            uVar9 = *(undefined8 *)(piVar2 + 10);
            *(undefined8 *)(piVar2 + 10) = *(undefined8 *)(param_2 + -10);
            *(undefined8 *)(param_2 + -10) = uVar9;
          }
          else {
            piVar2[8] = iVar8;
            piVar4[4] = iVar11;
            uVar9 = *(undefined8 *)(piVar2 + 10);
            *(undefined8 *)(piVar2 + 10) = *(undefined8 *)(piVar4 + 6);
            *(undefined8 *)(piVar4 + 6) = uVar9;
            if (param_2[-0xc] < iVar11) {
              piVar4[4] = param_2[-0xc];
              param_2[-0xc] = iVar11;
              *(undefined8 *)(piVar4 + 6) = *(undefined8 *)(param_2 + -10);
              *(undefined8 *)(param_2 + -10) = uVar9;
            }
          }
        }
        else if (iVar6 < iVar8) {
          piVar4[4] = iVar6;
          param_2[-0xc] = iVar8;
          uVar9 = *(undefined8 *)(piVar4 + 6);
          *(undefined8 *)(piVar4 + 6) = *(undefined8 *)(param_2 + -10);
          *(undefined8 *)(param_2 + -10) = uVar9;
          iVar8 = piVar2[8];
          if (piVar4[4] < iVar8) {
            piVar2[8] = piVar4[4];
            piVar4[4] = iVar8;
            uVar9 = *(undefined8 *)(piVar2 + 10);
            *(undefined8 *)(piVar2 + 10) = *(undefined8 *)(piVar4 + 6);
            *(undefined8 *)(piVar4 + 6) = uVar9;
          }
        }
        iVar8 = *piVar4;
        iVar6 = piVar4[-4];
        iVar11 = piVar4[4];
        if (iVar8 < iVar6) {
          if (iVar11 < iVar8) {
            piVar4[-4] = iVar11;
            piVar4[4] = iVar6;
            uVar9 = *(undefined8 *)(piVar4 + -2);
            *(undefined8 *)(piVar4 + -2) = *(undefined8 *)(piVar4 + 6);
            *(undefined8 *)(piVar4 + 6) = uVar9;
          }
          else {
            piVar4[-4] = iVar8;
            *piVar4 = iVar6;
            uVar9 = *(undefined8 *)(piVar4 + -2);
            *(undefined8 *)(piVar4 + -2) = *(undefined8 *)(piVar4 + 2);
            *(undefined8 *)(piVar4 + 2) = uVar9;
            iVar8 = iVar6;
            if (iVar11 < iVar6) {
              *piVar4 = iVar11;
              piVar4[4] = iVar6;
              *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(piVar4 + 6);
              *(undefined8 *)(piVar4 + 6) = uVar9;
              iVar8 = iVar11;
            }
          }
        }
        else if (iVar11 < iVar8) {
          *piVar4 = iVar11;
          piVar4[4] = iVar8;
          uVar12 = *(undefined8 *)(piVar4 + 2);
          uVar9 = *(undefined8 *)(piVar4 + 6);
          *(undefined8 *)(piVar4 + 2) = uVar9;
          *(undefined8 *)(piVar4 + 6) = uVar12;
          iVar8 = iVar11;
          if (iVar11 < iVar6) {
            piVar4[-4] = iVar11;
            *piVar4 = iVar6;
            uVar12 = *(undefined8 *)(piVar4 + -2);
            *(undefined8 *)(piVar4 + -2) = uVar9;
            *(undefined8 *)(piVar4 + 2) = uVar12;
            iVar8 = iVar6;
          }
        }
        iVar11 = *piVar2;
        *piVar2 = iVar8;
        *piVar4 = iVar11;
        uVar9 = *(undefined8 *)(piVar2 + 2);
        *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(piVar4 + 2);
        *(undefined8 *)(piVar4 + 2) = uVar9;
joined_r0x00010934d020:
        if (bVar14 == false) {
LAB_10934d1f4:
          if (*piVar2 <= piVar2[-4]) {
            func_0x00010934d840(piVar2,param_2,param_3);
            piVar4 = piVar2;
            goto LAB_10934d284;
          }
        }
      }
      piVar3 = piVar2;
      piVar4 = param_2;
      func_0x00010934d910(piVar2,param_2,param_3);
      if (((ulong)piVar4 & 1) == 0) break;
      piVar1 = piVar2;
      FUN_10934d9e8(piVar2,piVar3,param_3);
      piVar4 = piVar3 + 4;
      param_1 = piVar4;
      FUN_10934d9e8(piVar4,param_2,param_3);
      if ((int)param_1 != 0) {
        lVar7 = -lVar7;
        param_2 = piVar3;
        if (((ulong)piVar1 & 1) != 0) {
          return param_1;
        }
        goto LAB_10934cdc8;
      }
    } while (((ulong)piVar1 & 1) != 0);
    FUN_10934cd94(piVar2,piVar3,param_3,-lVar7,bVar14);
    piVar4 = piVar3 + 4;
LAB_10934d284:
    bVar14 = false;
    lVar7 = -lVar7;
    param_1 = piVar2;
    piVar2 = piVar4;
  } while( true );
LAB_10934d760:
  piVar1 = piVar4;
  iVar8 = piVar3[4];
  iVar11 = *piVar3;
  if (iVar8 < iVar11) {
    uVar9 = *(undefined8 *)(piVar3 + 6);
    lVar15 = lVar7;
    do {
      lVar13 = lVar15;
      *(int *)((long)piVar2 + lVar13 + 0x10) = iVar11;
      *(undefined8 *)((long)piVar2 + lVar13 + 0x18) = *(undefined8 *)((long)piVar2 + lVar13 + 8);
      piVar4 = piVar2;
      if (lVar13 == 0) goto LAB_10934d7b0;
      iVar11 = *(int *)((long)piVar2 + lVar13 + -0x10);
      lVar15 = lVar13 + -0x10;
    } while (iVar8 < iVar11);
    piVar4 = (int *)((long)piVar2 + lVar13);
LAB_10934d7b0:
    *piVar4 = iVar8;
    *(undefined8 *)(piVar4 + 2) = uVar9;
  }
  piVar4 = piVar1 + 4;
  lVar7 = lVar7 + 0x10;
  piVar3 = piVar1;
  if (piVar4 == param_2) {
    return piVar2;
  }
  goto LAB_10934d760;
}



/* Entry: 1098d583c; end: 1098d58ab;  */

int FUN_1098d583c(int param_1)

{
  uint unaff_w19;
  
  func_0x0001098d5bf8();
  return param_1 + (unaff_w19 >> 6) + 2;
}



/* Entry: 1098d58ac; end: 1098d58d3;  */

long FUN_1098d58ac(void)

{
  long alStack_30 [4];
  
  FUN_1098d58d4(alStack_30);
  return alStack_30[0] + 0x10;
}



/* Entry: 1098d58d4; end: 1098d5a7b;  */

void FUN_1098d58d4(undefined8 *param_1,int *param_2,uint *param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  uVar2 = (ulong)*param_3;
  piVar1 = param_2;
  func_0x000105689068(param_2,uVar2,0);
  if (piVar1 == (int *)0x0) {
    piVar1 = param_2;
    func_0x000105689120(param_2,*param_2 + 1);
    if ((int)piVar1 != 0) {
      uVar2 = (ulong)*param_3;
      func_0x000105689068(param_2,uVar2,0);
    }
    piVar1 = param_2;
    func_0x000107c27d64(param_2,0x28);
    piVar1[2] = *param_3;
    func_0x000107c28220(piVar1 + 4,*(undefined8 *)(param_2 + 6));
    func_0x0001056891b0(param_2,uVar2,piVar1);
    *param_2 = *param_2 + 1;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *param_1 = piVar1;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)uVar2;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return;
}



/* Entry: 1098d5a7c; end: 1098d5b67;  */

undefined8 * FUN_1098d5a7c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x68;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x68);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b1a510;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001098d5d6c();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  FUN_1098d536c(puVar1 + 3,param_1,param_2 + 0x18);
  puVar1[8] = 0x100000000;
  puVar1[7] = 0x100000000;
  puVar1[9] = &DAT_10e5b4a18;
  puVar1[10] = param_1;
  func_0x0001098d5994(puVar1 + 7,param_2 + 0x38);
  lVar2 = param_2 + 0x58;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[0xb] = lVar2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_1098d5680(param_1,*(undefined8 *)(param_2 + 0x60));
  }
  puVar1[0xc] = param_1;
  return puVar1;
}



/* Entry: 1098d5b68; end: 1098d5bab;  */

undefined8 * FUN_1098d5b68(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar3 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  puVar3[1] = param_1;
  *puVar3 = &PTR_FUN_110b19a90;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001098d1364();
  }
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar3 + 0x14) = 0;
  lVar1 = param_2 + 0x18;
  func_0x000107c2809c(lVar1,param_1);
  puVar3[3] = lVar1;
  lVar1 = param_2 + 0x20;
  func_0x000107c2809c(lVar1,param_1);
  puVar3[4] = lVar1;
  iVar4 = *(int *)(param_2 + 0x38);
  *(int *)(puVar3 + 7) = iVar4;
  if ((*(byte *)(puVar3 + 2) & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = param_1;
    func_0x0001098d1138(param_1,*(undefined8 *)(param_2 + 0x28));
    iVar4 = *(int *)(puVar3 + 7);
  }
  puVar3[5] = puVar2;
  if (iVar4 == 5) {
    FUN_1098d123c(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  else {
    if (iVar4 != 4) {
      return puVar3;
    }
    func_0x0001098d11cc(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  puVar3[6] = param_1;
  return puVar3;
}



/* Entry: 1098d5bac; end: 1098d5dc3;  */

void FUN_1098d5bac(void)

{
  return;
}



/* Entry: 1098d5dc4; end: 1098d5e63;  */

undefined8 * FUN_1098d5dc4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b1a778;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_1098d61f4(param_1 + 3,param_2,param_3 + 0x18);
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x0001098d3f10(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x0001098d3f10(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = param_2;
  return param_1;
}



/* Entry: 1098d5e64; end: 1098d5e93;  */

long FUN_1098d5e64(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098d5e94(param_1);
  return param_1;
}



/* Entry: 1098d5e94; end: 1098d5ed3;  */

long * FUN_1098d5e94(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_1098d17dc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_1098d17dc();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 1098d5ed4; end: 1098d5ed7;  */

long FUN_1098d5ed4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098d5e94(param_1);
  return param_1;
}



/* Entry: 1098d5ed8; end: 1098d5eeb;  */

void FUN_1098d5ed8(void)

{
  FUN_1098d5e64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d5eec; end: 1098d5ef7;  */

undefined ** FUN_1098d5eec(void)

{
  return &PTR_DAT_110b1a7b8;
}



/* Entry: 1098d5ef8; end: 1098d5f67;  */

void FUN_1098d5ef8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1098d184c(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1098d184c(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
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



/* Entry: 1098d5f68; end: 1098d604f;  */

long * FUN_1098d5f68(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x20);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    param_2 = (long *)0x1;
    func_0x0001098d62b0(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14));
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_2 = (long *)0x2;
    func_0x0001098d62b0(2,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14));
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = (long *)0x3;
    func_0x0001098d62b0(3,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x14));
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



/* Entry: 1098d6050; end: 1098d60fb;  */

long FUN_1098d6050(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  lVar4 = (long)*(int *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar3 & 1) != 0) {
    puVar1 = (ulong *)(uVar3 + 7);
  }
  for (lVar5 = lVar4 << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
    uVar3 = *puVar1;
    FUN_1098d31c0();
    lVar4 = uVar3 + lVar4;
    puVar1 = puVar1 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x30);
      FUN_1098d31c0();
      lVar4 = lVar4 + lVar5 + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      FUN_1098d31c0();
      lVar4 = lVar4 + lVar5 + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar5 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 1098d60fc; end: 1098d60ff;  */

void FUN_1098d60fc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  FUN_1098d61dc(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        func_0x0001098d3f10(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_1098d19d8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        func_0x0001098d3f10(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar3;
      }
      else {
        FUN_1098d19d8();
      }
    }
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



/* Entry: 1098d6100; end: 1098d61db;  */

void FUN_1098d6100(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  FUN_1098d61dc(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        func_0x0001098d3f10(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_1098d19d8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        func_0x0001098d3f10(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar3;
      }
      else {
        FUN_1098d19d8();
      }
    }
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



/* Entry: 1098d61dc; end: 1098d61f3;  */

void FUN_1098d61dc(long *param_1,long param_2)

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



/* Entry: 1098d61f4; end: 1098d621f;  */

undefined8 * FUN_1098d61f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_1098d61dc(param_1,param_3);
  return param_1;
}



/* Entry: 1098d6220; end: 1098d624f;  */

long * FUN_1098d6220(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1098d6250; end: 1098d629b;  */

void FUN_1098d6250(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b1a778;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 1098d629c; end: 1098d62b7;  */

void FUN_1098d629c(void)

{
  return;
}



/* Entry: 1098d62b8; end: 1098d62e7;  */

long FUN_1098d62b8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098cf768(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098d62e8; end: 1098d62eb;  */

long FUN_1098d62e8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098cf768(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098d62ec; end: 1098d62ff;  */

void FUN_1098d62ec(void)

{
  FUN_1098d62b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d6300; end: 1098d630b;  */

undefined ** FUN_1098d6300(void)

{
  return &PTR_DAT_110b1a858;
}



/* Entry: 1098d630c; end: 1098d634f;  */

void FUN_1098d630c(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  _bzero(param_1 + 0x20,0xf8);
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



/* Entry: 1098d6350; end: 1098d6bcb;  */

/* WARNING: Possible PIC construction at 0x0001098d6530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098d6534) */

long * FUN_1098d6350(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  ulong uVar7;
  int iVar8;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  int iVar9;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar2 = param_1;
  uVar7 = unaff_x21;
  if ((int)param_1[4] != 0) {
    plVar3 = param_1;
    func_0x0001098d731c();
    uVar7 = (ulong)*(uint *)(param_1 + 4);
    plVar2 = (long *)0xd;
    func_0x000107c280a8(0xd,plVar3);
    func_0x0001098d7334();
  }
  if (*(int *)((long)param_1 + 0x24) != 0) {
    plVar2 = param_3;
    func_0x00010598f43c(param_3,*(int *)((long)param_1 + 0x24),param_2);
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if (param_1[5] != 0) {
    func_0x0001098d731c();
    uVar7 = param_1[5];
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x0001098d7370();
    param_2 = plVar3;
  }
  plVar2 = plVar3;
  if ((int)param_1[6] != 0) {
    func_0x0001098d731c();
    uVar7 = (ulong)*(uint *)(param_1 + 6);
    plVar2 = (long *)0x25;
    func_0x000107c280a8(0x25,plVar3);
    func_0x0001098d7334();
  }
  plVar3 = plVar2;
  if (*(int *)((long)param_1 + 0x34) != 0) {
    func_0x0001098d731c();
    uVar7 = (ulong)*(uint *)((long)param_1 + 0x34);
    plVar3 = (long *)0x2d;
    func_0x000107c280a8(0x2d,plVar2);
    func_0x0001098d7334();
  }
  plVar2 = plVar3;
  if ((int)param_1[7] != 0) {
    func_0x0001098d731c();
    uVar7 = (ulong)*(uint *)(param_1 + 7);
    plVar2 = (long *)0x35;
    func_0x000107c280a8(0x35,plVar3);
    func_0x0001098d7334();
  }
  plVar3 = plVar2;
  if (*(int *)((long)param_1 + 0x3c) != 0) {
    func_0x0001098d731c();
    uVar7 = (ulong)*(uint *)((long)param_1 + 0x3c);
    plVar3 = (long *)0x3d;
    func_0x000107c280a8(0x3d,plVar2);
    func_0x0001098d7334();
  }
  plVar2 = plVar3;
  if ((int)param_1[8] != 0) {
    func_0x0001098d731c();
    uVar7 = (ulong)*(uint *)(param_1 + 8);
    plVar2 = (long *)0x45;
    func_0x000107c280a8(0x45,plVar3);
    func_0x0001098d7334();
  }
  if (*(int *)((long)param_1 + 0x44) != 0) {
    plVar2 = param_3;
    func_0x000108b3207c(param_3,*(int *)((long)param_1 + 0x44),param_2);
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if ((int)param_1[9] != 0) {
    func_0x0001098d731c();
    uVar7 = (ulong)*(uint *)(param_1 + 9);
    plVar3 = (long *)0x55;
    func_0x000107c280a8(0x55,plVar2);
    func_0x0001098d7334();
  }
  plVar2 = plVar3;
  if (*(int *)((long)param_1 + 0x4c) != 0) {
    func_0x0001098d731c();
    uVar7 = (ulong)*(uint *)((long)param_1 + 0x4c);
    plVar2 = (long *)0x5d;
    func_0x000107c280a8(0x5d,plVar3);
    func_0x0001098d7334();
  }
  plVar3 = plVar2;
  if ((int)param_1[10] != 0) {
    func_0x0001098d731c();
    uVar7 = (ulong)*(uint *)(param_1 + 10);
    plVar3 = (long *)0x65;
    func_0x000107c280a8(0x65,plVar2);
    func_0x0001098d7334();
  }
  if ((int)param_1[2] < 1) {
    plVar2 = plVar3;
    if (*(int *)((long)param_1 + 0x54) != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0x75;
      func_0x000107c280a8(0x75,plVar3);
      func_0x0001098d7334();
    }
    if ((int)param_1[0xb] != 0) {
      plVar2 = param_3;
      FUN_10932d954(param_3,(int)param_1[0xb],param_2);
      param_2 = plVar2;
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0x5c) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0x85;
      func_0x000107c280a8(0x85,plVar2);
      func_0x0001098d7334();
    }
    plVar2 = plVar3;
    if ((int)param_1[0xc] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0x8d;
      func_0x000107c280a8(0x8d,plVar3);
      func_0x0001098d7334();
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 100) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0x90;
      func_0x000107c280a8(0x90,plVar2);
      func_0x0001098d7328();
      param_2 = plVar3;
    }
    plVar2 = plVar3;
    if ((int)param_1[0xd] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0x9d;
      func_0x000107c280a8(0x9d,plVar3);
      func_0x0001098d7334();
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0x6c) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0xa0;
      func_0x000107c280a8(0xa0,plVar2);
      func_0x0001098d7328();
      param_2 = plVar3;
    }
    plVar2 = plVar3;
    if ((int)param_1[0xe] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0xad;
      func_0x000107c280a8(0xad,plVar3);
      func_0x0001098d7334();
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0x74) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0xb0;
      func_0x000107c280a8(0xb0,plVar2);
      func_0x0001098d7328();
      param_2 = plVar3;
    }
    plVar2 = plVar3;
    if ((int)param_1[0xf] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0xbd;
      func_0x000107c280a8(0xbd,plVar3);
      func_0x0001098d7334();
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0x7c) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0xc5;
      func_0x000107c280a8(0xc5,plVar2);
      func_0x0001098d7334();
    }
    plVar2 = plVar3;
    if ((int)param_1[0x10] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0xc8;
      func_0x000107c280a8(200,plVar3);
      func_0x0001098d7328();
      param_2 = plVar2;
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0x84) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0xd5;
      func_0x000107c280a8(0xd5,plVar2);
      func_0x0001098d7334();
    }
    plVar2 = plVar3;
    if ((int)param_1[0x11] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0xdd;
      func_0x000107c280a8(0xdd,plVar3);
      func_0x0001098d7334();
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0x8c) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0xe0;
      func_0x000107c280a8(0xe0,plVar2);
      func_0x0001098d7328();
      param_2 = plVar3;
    }
    plVar2 = plVar3;
    if ((int)param_1[0x12] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0xed;
      func_0x000107c280a8(0xed,plVar3);
      func_0x0001098d7334();
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0x94) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0xf0;
      func_0x000107c280a8(0xf0,plVar2);
      func_0x0001098d7328();
      param_2 = plVar3;
    }
    plVar2 = plVar3;
    if ((int)param_1[0x13] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0xfd;
      func_0x000107c280a8(0xfd,plVar3);
      func_0x0001098d7334();
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0x9c) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0x100;
      func_0x000107c280a8(0x100,plVar2);
      func_0x0001098d7328();
      param_2 = plVar3;
    }
    plVar2 = plVar3;
    if ((int)param_1[0x14] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0x10d;
      func_0x000107c280a8(0x10d,plVar3);
      func_0x0001098d7334();
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0xa4) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0x110;
      func_0x000107c280a8(0x110,plVar2);
      func_0x0001098d7328();
      param_2 = plVar3;
    }
    plVar2 = plVar3;
    if ((int)param_1[0x15] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0x11d;
      func_0x000107c280a8(0x11d,plVar3);
      func_0x0001098d7334();
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0xac) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0x120;
      func_0x000107c280a8(0x120,plVar2);
      func_0x0001098d7328();
      param_2 = plVar3;
    }
    plVar2 = plVar3;
    if ((int)param_1[0x16] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0x12d;
      func_0x000107c280a8(0x12d,plVar3);
      func_0x0001098d7334();
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0xb4) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0x130;
      func_0x000107c280a8(0x130,plVar2);
      func_0x0001098d7328();
      param_2 = plVar3;
    }
    plVar2 = plVar3;
    if ((int)param_1[0x17] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0x13d;
      func_0x000107c280a8(0x13d,plVar3);
      func_0x0001098d7334();
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0xbc) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0x140;
      func_0x000107c280a8(0x140,plVar2);
      func_0x0001098d7328();
      param_2 = plVar3;
    }
    plVar2 = plVar3;
    if ((int)param_1[0x18] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0x14d;
      func_0x000107c280a8(0x14d,plVar3);
      func_0x0001098d7334();
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0xc4) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0x150;
      func_0x000107c280a8(0x150,plVar2);
      func_0x0001098d7328();
      param_2 = plVar3;
    }
    plVar2 = plVar3;
    if ((int)param_1[0x19] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0x15d;
      func_0x000107c280a8(0x15d,plVar3);
      func_0x0001098d7334();
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0xcc) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0x160;
      func_0x000107c280a8(0x160,plVar2);
      func_0x0001098d7328();
      param_2 = plVar3;
    }
    plVar2 = plVar3;
    if ((int)param_1[0x1a] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0x16d;
      func_0x000107c280a8(0x16d,plVar3);
      func_0x0001098d7334();
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0xd4) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0x170;
      func_0x000107c280a8(0x170,plVar2);
      func_0x0001098d7328();
      param_2 = plVar3;
    }
    plVar2 = plVar3;
    if ((int)param_1[0x1b] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0x17d;
      func_0x000107c280a8(0x17d,plVar3);
      func_0x0001098d7334();
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0xdc) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0x180;
      func_0x000107c280a8(0x180,plVar2);
      func_0x0001098d7328();
      param_2 = plVar3;
    }
    plVar2 = plVar3;
    if ((int)param_1[0x1c] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0x18d;
      func_0x000107c280a8(0x18d,plVar3);
      func_0x0001098d7334();
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0xe4) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0x190;
      func_0x000107c280a8(400,plVar2);
      func_0x0001098d7328();
      param_2 = plVar3;
    }
    plVar2 = plVar3;
    if ((int)param_1[0x1d] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0x19d;
      func_0x000107c280a8(0x19d,plVar3);
      func_0x0001098d7334();
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0xec) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0x1a5;
      func_0x000107c280a8(0x1a5,plVar2);
      func_0x0001098d7334();
    }
    plVar2 = plVar3;
    if ((int)param_1[0x1e] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0x1a8;
      func_0x000107c280a8(0x1a8,plVar3);
      func_0x0001098d7328();
      param_2 = plVar2;
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0xf4) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0x1b5;
      func_0x000107c280a8(0x1b5,plVar2);
      func_0x0001098d7334();
    }
    plVar2 = plVar3;
    if ((int)param_1[0x1f] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0x1b8;
      func_0x000107c280a8(0x1b8,plVar3);
      func_0x0001098d7328();
      param_2 = plVar2;
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0xfc) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0x1c5;
      func_0x000107c280a8(0x1c5,plVar2);
      func_0x0001098d7334();
    }
    plVar2 = plVar3;
    if ((int)param_1[0x20] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0x1c8;
      func_0x000107c280a8(0x1c8,plVar3);
      func_0x0001098d7328();
      param_2 = plVar2;
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0x104) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0x1d5;
      func_0x000107c280a8(0x1d5,plVar2);
      func_0x0001098d7334();
    }
    plVar2 = plVar3;
    if ((int)param_1[0x21] != 0) {
      func_0x0001098d731c();
      plVar2 = (long *)0x1d8;
      func_0x000107c280a8(0x1d8,plVar3);
      func_0x0001098d7328();
      param_2 = plVar2;
    }
    plVar3 = plVar2;
    if (*(int *)((long)param_1 + 0x10c) != 0) {
      func_0x0001098d731c();
      plVar3 = (long *)0x1e5;
      func_0x000107c280a8(0x1e5,plVar2);
      func_0x0001098d7334();
    }
    if (param_1[0x22] != 0) {
      func_0x0001098d731c();
      param_2 = (long *)0x1e8;
      func_0x000107c280a8(0x1e8,plVar3);
      func_0x0001098d7370();
    }
    if ((param_1[1] & 1U) == 0) {
      return param_2;
    }
    uVar7 = param_1[1] & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar7 + 8);
      uVar5 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar4 = uVar7 + 8;
    }
  }
  else {
    func_0x0001098d731c();
    uVar5 = (ulong)(uint)((int)param_1[2] << 2);
    param_2 = (long *)((long)plVar3 + 2);
    *(undefined1 *)plVar3 = 0x6a;
    uVar6 = uVar5;
    while( true ) {
      if ((uint)uVar6 < 0x80) break;
      *(byte *)((long)param_2 + -1) = (byte)uVar6 | 0x80;
      uVar6 = (ulong)((uint)uVar6 >> 7);
      param_2 = (long *)((long)param_2 + 1);
    }
    *(byte *)((long)param_2 + -1) = (byte)uVar6;
    lVar4 = param_1[3];
    unaff_x30 = 0x1098d6534;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_3;
    unaff_x20 = param_1;
    unaff_x21 = uVar7;
    unaff_x29 = puVar1;
  }
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*param_3 - (long)param_2 < (long)(int)uVar5) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    while( true ) {
      iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar8 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      puVar1 = (undefined1 *)((long)param_2 + (long)iVar9);
      param_2 = param_3;
      func_0x000107c303e4(param_3,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar8);
  }
  _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar5);
}



/* Entry: 1098d6bcc; end: 1098d6eeb;  */

long FUN_1098d6bcc(long param_1)

{
  int extraout_w8;
  long lVar1;
  int extraout_w9;
  long lVar2;
  long extraout_x10;
  ulong uVar3;
  
  func_0x0001098d7390(0xfffffff7);
  func_0x0001098d7390();
  func_0x0001098d7390();
  func_0x0001098d72ec();
  func_0x0001098d72ec();
  func_0x0001098d72ec();
  func_0x0001098d7340();
  func_0x0001098d72ec();
  func_0x0001098d72ec();
  func_0x0001098d72ec();
  func_0x0001098d72ec();
  func_0x0001098d72ec();
  func_0x0001098d72ec();
  func_0x0001098d72ec();
  func_0x0001098d72ec();
  func_0x0001098d72ec();
  func_0x0001098d72ec();
  func_0x0001098d72ec();
  func_0x0001098d72ec();
  func_0x0001098d7340();
  func_0x0001098d7340();
  lVar1 = extraout_x10;
  if (*(int *)(param_1 + 0x100) != 0) {
    lVar1 = extraout_x10 +
            (ulong)((uint)(extraout_w9 + (int)LZCOUNT((long)*(int *)(param_1 + 0x100)) * extraout_w8
                          ) >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    lVar1 = lVar1 + 6;
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    lVar1 = lVar1 + (ulong)((uint)(extraout_w9 +
                                  (int)LZCOUNT((long)*(int *)(param_1 + 0x108)) * extraout_w8) >> 6)
            + 2;
  }
  if (*(int *)(param_1 + 0x10c) != 0) {
    lVar1 = lVar1 + 6;
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    lVar1 = lVar1 + (ulong)((uint)(extraout_w9 +
                                  (int)LZCOUNT(*(long *)(param_1 + 0x110)) * extraout_w8) >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x118) = (int)lVar1;
  return lVar1;
}



/* Entry: 1098d6eec; end: 1098d7293;  */

void FUN_1098d6eec(long param_1,long param_2)

{
  FUN_1098ce904(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x3c);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_2 + 0x54);
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_2 + 0x60);
  }
  if (*(int *)(param_2 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_2 + 100);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_2 + 0x68);
  }
  if (*(int *)(param_2 + 0x6c) != 0) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_2 + 0x6c);
  }
  if (*(int *)(param_2 + 0x70) != 0) {
    *(int *)(param_1 + 0x70) = *(int *)(param_2 + 0x70);
  }
  if (*(int *)(param_2 + 0x74) != 0) {
    *(int *)(param_1 + 0x74) = *(int *)(param_2 + 0x74);
  }
  if (*(int *)(param_2 + 0x78) != 0) {
    *(int *)(param_1 + 0x78) = *(int *)(param_2 + 0x78);
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_2 + 0x7c);
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    *(int *)(param_1 + 0x80) = *(int *)(param_2 + 0x80);
  }
  if (*(int *)(param_2 + 0x84) != 0) {
    *(int *)(param_1 + 0x84) = *(int *)(param_2 + 0x84);
  }
  if (*(int *)(param_2 + 0x88) != 0) {
    *(int *)(param_1 + 0x88) = *(int *)(param_2 + 0x88);
  }
  if (*(int *)(param_2 + 0x8c) != 0) {
    *(int *)(param_1 + 0x8c) = *(int *)(param_2 + 0x8c);
  }
  if (*(int *)(param_2 + 0x90) != 0) {
    *(int *)(param_1 + 0x90) = *(int *)(param_2 + 0x90);
  }
  if (*(int *)(param_2 + 0x94) != 0) {
    *(int *)(param_1 + 0x94) = *(int *)(param_2 + 0x94);
  }
  if (*(int *)(param_2 + 0x98) != 0) {
    *(int *)(param_1 + 0x98) = *(int *)(param_2 + 0x98);
  }
  if (*(int *)(param_2 + 0x9c) != 0) {
    *(int *)(param_1 + 0x9c) = *(int *)(param_2 + 0x9c);
  }
  if (*(int *)(param_2 + 0xa0) != 0) {
    *(int *)(param_1 + 0xa0) = *(int *)(param_2 + 0xa0);
  }
  if (*(int *)(param_2 + 0xa4) != 0) {
    *(int *)(param_1 + 0xa4) = *(int *)(param_2 + 0xa4);
  }
  if (*(int *)(param_2 + 0xa8) != 0) {
    *(int *)(param_1 + 0xa8) = *(int *)(param_2 + 0xa8);
  }
  if (*(int *)(param_2 + 0xac) != 0) {
    *(int *)(param_1 + 0xac) = *(int *)(param_2 + 0xac);
  }
  if (*(int *)(param_2 + 0xb0) != 0) {
    *(int *)(param_1 + 0xb0) = *(int *)(param_2 + 0xb0);
  }
  if (*(int *)(param_2 + 0xb4) != 0) {
    *(int *)(param_1 + 0xb4) = *(int *)(param_2 + 0xb4);
  }
  if (*(int *)(param_2 + 0xb8) != 0) {
    *(int *)(param_1 + 0xb8) = *(int *)(param_2 + 0xb8);
  }
  if (*(int *)(param_2 + 0xbc) != 0) {
    *(int *)(param_1 + 0xbc) = *(int *)(param_2 + 0xbc);
  }
  if (*(int *)(param_2 + 0xc0) != 0) {
    *(int *)(param_1 + 0xc0) = *(int *)(param_2 + 0xc0);
  }
  if (*(int *)(param_2 + 0xc4) != 0) {
    *(int *)(param_1 + 0xc4) = *(int *)(param_2 + 0xc4);
  }
  if (*(int *)(param_2 + 200) != 0) {
    *(int *)(param_1 + 200) = *(int *)(param_2 + 200);
  }
  if (*(int *)(param_2 + 0xcc) != 0) {
    *(int *)(param_1 + 0xcc) = *(int *)(param_2 + 0xcc);
  }
  if (*(int *)(param_2 + 0xd0) != 0) {
    *(int *)(param_1 + 0xd0) = *(int *)(param_2 + 0xd0);
  }
  if (*(int *)(param_2 + 0xd4) != 0) {
    *(int *)(param_1 + 0xd4) = *(int *)(param_2 + 0xd4);
  }
  if (*(int *)(param_2 + 0xd8) != 0) {
    *(int *)(param_1 + 0xd8) = *(int *)(param_2 + 0xd8);
  }
  if (*(int *)(param_2 + 0xdc) != 0) {
    *(int *)(param_1 + 0xdc) = *(int *)(param_2 + 0xdc);
  }
  if (*(int *)(param_2 + 0xe0) != 0) {
    *(int *)(param_1 + 0xe0) = *(int *)(param_2 + 0xe0);
  }
  if (*(int *)(param_2 + 0xe4) != 0) {
    *(int *)(param_1 + 0xe4) = *(int *)(param_2 + 0xe4);
  }
  if (*(int *)(param_2 + 0xe8) != 0) {
    *(int *)(param_1 + 0xe8) = *(int *)(param_2 + 0xe8);
  }
  if (*(int *)(param_2 + 0xec) != 0) {
    *(int *)(param_1 + 0xec) = *(int *)(param_2 + 0xec);
  }
  if (*(int *)(param_2 + 0xf0) != 0) {
    *(int *)(param_1 + 0xf0) = *(int *)(param_2 + 0xf0);
  }
  if (*(int *)(param_2 + 0xf4) != 0) {
    *(int *)(param_1 + 0xf4) = *(int *)(param_2 + 0xf4);
  }
  if (*(int *)(param_2 + 0xf8) != 0) {
    *(int *)(param_1 + 0xf8) = *(int *)(param_2 + 0xf8);
  }
  if (*(int *)(param_2 + 0xfc) != 0) {
    *(int *)(param_1 + 0xfc) = *(int *)(param_2 + 0xfc);
  }
  if (*(int *)(param_2 + 0x100) != 0) {
    *(int *)(param_1 + 0x100) = *(int *)(param_2 + 0x100);
  }
  if (*(int *)(param_2 + 0x104) != 0) {
    *(int *)(param_1 + 0x104) = *(int *)(param_2 + 0x104);
  }
  if (*(int *)(param_2 + 0x108) != 0) {
    *(int *)(param_1 + 0x108) = *(int *)(param_2 + 0x108);
  }
  if (*(int *)(param_2 + 0x10c) != 0) {
    *(int *)(param_1 + 0x10c) = *(int *)(param_2 + 0x10c);
  }
  if (*(long *)(param_2 + 0x110) != 0) {
    *(long *)(param_1 + 0x110) = *(long *)(param_2 + 0x110);
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



/* Entry: 1098d7294; end: 1098d729b;  */

undefined8 * FUN_1098d7294(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x120;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x120);
  }
  *puVar1 = &PTR_FUN_110b1a818;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  func_0x0001098d7384();
  return puVar1;
}



/* Entry: 1098d729c; end: 1098d72eb;  */

undefined8 * FUN_1098d729c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x120;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x120);
  }
  *puVar1 = &PTR_FUN_110b1a818;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  func_0x0001098d7384();
  return puVar1;
}



/* Entry: 1098d72ec; end: 1098d73ab;  */

void FUN_1098d72ec(void)

{
  return;
}



/* Entry: 1098d73ac; end: 1098d7443;  */

undefined8 * FUN_1098d73ac(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b1a8c0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x000107c282d4(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010598fd00(param_1 + 5,param_2,param_3 + 0x28);
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_3 + 0x40);
  return param_1;
}



/* Entry: 1098d7444; end: 1098d7477;  */

long FUN_1098d7444(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098d7868(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098d7478; end: 1098d747b;  */

long FUN_1098d7478(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098d7868(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098d747c; end: 1098d748f;  */

void FUN_1098d747c(void)

{
  FUN_1098d7444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d7490; end: 1098d749b;  */

undefined ** FUN_1098d7490(void)

{
  return &PTR_DAT_110b1a900;
}



/* Entry: 1098d749c; end: 1098d74df;  */

void FUN_1098d749c(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  func_0x000107c282c0(param_1 + 0x28);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x40) = 0;
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



/* Entry: 1098d74e0; end: 1098d76ef;  */

byte * FUN_1098d74e0(byte *param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  
  pbVar8 = param_1;
  if (param_1[0x40] == 1) {
    pbVar9 = param_1;
    FUN_1098d78ec();
    pbVar8 = (byte *)(ulong)param_1[0x40];
    uVar3 = 8;
    func_0x000107c280a8(8,pbVar9);
    func_0x000107c280a8(pbVar8,uVar3);
    param_2 = pbVar8;
  }
  uVar10 = *(uint *)(param_1 + 0x20);
  if (uVar10 != 0) {
    FUN_1098d78ec();
    pbVar9 = pbVar8 + 2;
    *pbVar8 = 0x12;
    for (; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
      pbVar9[-1] = (byte)uVar10 | 0x80;
      pbVar9 = pbVar9 + 1;
    }
    pbVar9[-1] = (byte)uVar10;
    piVar12 = *(int **)(param_1 + 0x18);
    piVar1 = piVar12 + *(int *)(param_1 + 0x10);
    do {
      FUN_1098d78ec();
      uVar6 = (ulong)*piVar12;
      pbVar9 = pbVar8;
      while( true ) {
        param_2 = pbVar9 + 1;
        if (uVar6 < 0x80) break;
        *pbVar9 = (byte)uVar6 | 0x80;
        uVar6 = uVar6 >> 7;
        pbVar9 = param_2;
      }
      piVar12 = piVar12 + 1;
      *pbVar9 = (byte)uVar6;
    } while (piVar12 < piVar1);
  }
  lVar15 = 8;
  for (uVar6 = (ulong)(*(uint *)(param_1 + 0x30) &
                      ((int)*(uint *)(param_1 + 0x30) >> 0x1f ^ 0xffffffffU)); uVar6 != 0;
      uVar6 = uVar6 - 1) {
    uVar7 = *(ulong *)(param_1 + 0x28);
    puVar2 = (ulong *)(param_1 + 0x28);
    if ((uVar7 & 1) != 0) {
      puVar2 = (ulong *)(uVar7 + lVar15 + -1);
    }
    puVar13 = (undefined8 *)*puVar2;
    lVar5 = (long)*(char *)((long)puVar13 + 0x17);
    puVar4 = puVar13;
    if (lVar5 < 0) {
      lVar5 = puVar13[1];
      puVar4 = (undefined8 *)*puVar13;
    }
    func_0x000107c303d4(puVar4,lVar5,1,&UNK_10f58733a);
    lVar5 = (long)*(char *)((long)puVar13 + 0x17);
    if (((lVar5 < 0) && (lVar5 = puVar13[1], 0x7f < lVar5)) ||
       ((*(long *)param_3 - (long)param_2) + 0xe < lVar5)) {
      pbVar8 = param_3;
      func_0x00010b4d5120(param_3,3,puVar13,param_2);
    }
    else {
      *param_2 = 0x1a;
      param_2[1] = (byte)lVar5;
      if (*(char *)((long)puVar13 + 0x17) < '\0') {
        puVar13 = (undefined8 *)*puVar13;
      }
      _memcpy(param_2 + 2,puVar13,lVar5);
      pbVar8 = param_2 + 2 + lVar5;
    }
    lVar15 = lVar15 + 8;
    param_2 = pbVar8;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
  if ((long)uVar6 < 0) {
    lVar15 = *(long *)(uVar7 + 8);
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    lVar15 = uVar7 + 8;
  }
  if ((long)(int)uVar6 <= *(long *)param_3 - (long)param_2) {
    _memcpy(param_2,lVar15,uVar6 & 0xffffffff);
    return param_2 + (int)uVar6;
  }
  while( true ) {
    iVar14 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
    iVar11 = (int)uVar6;
    uVar6 = (ulong)(uint)(iVar11 - iVar14);
    if (iVar11 - iVar14 == 0 || iVar11 < iVar14) break;
    func_0x00010b4d5738();
    pbVar8 = param_2 + iVar14;
    param_2 = param_3;
    func_0x000107c303e4(param_3,pbVar8);
  }
  func_0x00010b4d5738();
  return param_2 + iVar11;
}



/* Entry: 1098d76f0; end: 1098d77f3;  */

void FUN_1098d76f0(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar6 = 0;
  lVar4 = 0;
  for (lVar7 = (long)*(int *)(param_1 + 0x10); lVar7 != 0; lVar7 = lVar7 + -1) {
    lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x18) + (lVar6 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar4;
    lVar6 = lVar6 + 0x100000000;
  }
  lVar6 = 0;
  if (lVar4 != 0) {
    lVar6 = lVar4 + (ulong)((int)LZCOUNT((long)(int)lVar4) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar4;
  uVar2 = *(uint *)(param_1 + 0x30);
  lVar6 = lVar6 + (ulong)uVar2;
  iVar3 = (int)lVar6;
  lVar4 = 8;
  for (uVar8 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar8 != 0; uVar8 = uVar8 - 1) {
    uVar5 = *(ulong *)(param_1 + 0x28);
    puVar1 = (ulong *)(param_1 + 0x28);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + lVar4 + -1);
    }
    uVar5 = *puVar1;
    func_0x000107c282a0();
    lVar6 = uVar5 + lVar6;
    iVar3 = (int)lVar6;
    lVar4 = lVar4 + 8;
  }
  iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x40) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar8 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar8 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(param_1 + 0x44) = iVar3;
  return;
}



/* Entry: 1098d77f4; end: 1098d77f7;  */

void FUN_1098d77f4(long param_1,long param_2)

{
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x00010598fce8(param_1 + 0x28,param_2 + 0x28);
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
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



/* Entry: 1098d77f8; end: 1098d785f;  */

void FUN_1098d77f8(long param_1,long param_2)

{
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x00010598fce8(param_1 + 0x28,param_2 + 0x28);
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
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



/* Entry: 1098d7860; end: 1098d7867;  */

void FUN_1098d7860(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x48);
  }
  *puVar1 = &PTR_FUN_110b1a8c0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = param_2;
  *(undefined4 *)((long)puVar1 + 0x44) = 0;
  *(undefined1 *)(puVar1 + 8) = 0;
  return;
}



/* Entry: 1098d7868; end: 1098d78eb;  */

undefined8 FUN_1098d7868(long param_1)

{
  char in_NG;
  char in_OV;
  undefined8 unaff_x19;
  
  func_0x000107c282b4(param_1 + 0x18);
  func_0x00010006804c(param_1);
  if (in_NG == in_OV) {
    func_0x0001002a998c(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 1098d78ec; end: 1098d78f7;  */

ulong * FUN_1098d78ec(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  if (unaff_x21 < (ulong *)*unaff_x19) {
    return unaff_x21;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    unaff_x21 = (ulong *)((long)puVar2 + (long)((int)unaff_x21 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x21);
  return unaff_x21;
}



/* Entry: 1098d78f8; end: 1098d795f;  */

undefined8 * FUN_1098d78f8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b1a970;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x000107c2809c(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 1098d7960; end: 1098d798f;  */

long FUN_1098d7960(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098d7990; end: 1098d7993;  */

long FUN_1098d7990(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098d7994; end: 1098d79a7;  */

void FUN_1098d7994(void)

{
  FUN_1098d7960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d79a8; end: 1098d79b3;  */

undefined ** FUN_1098d79a8(void)

{
  return &PTR_DAT_110b1a9b0;
}



/* Entry: 1098d79b4; end: 1098d7ad3;  */

void FUN_1098d79b4(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
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



/* Entry: 1098d7ad4; end: 1098d7ad7;  */

void FUN_1098d7ad4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
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



/* Entry: 1098d7ad8; end: 1098d7b47;  */

void FUN_1098d7ad8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
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



/* Entry: 1098d7b48; end: 1098d7b4f;  */

void FUN_1098d7b48(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110b1a970;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 1098d7b50; end: 1098d7b9f;  */

void FUN_1098d7b50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110b1a970;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 1098d7ba0; end: 1098d7ba7;  */

void FUN_1098d7ba0(void)

{
  return;
}



/* Entry: 1098d7ba8; end: 1098d7bd7;  */

long FUN_1098d7ba8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098d7bd8(param_1);
  return param_1;
}



/* Entry: 1098d7bd8; end: 1098d7bf3;  */

void FUN_1098d7bd8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1098e0ec4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d7bf4; end: 1098d7bf7;  */

long FUN_1098d7bf4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098d7bd8(param_1);
  return param_1;
}



/* Entry: 1098d7bf8; end: 1098d7c0b;  */

void FUN_1098d7bf8(void)

{
  FUN_1098d7ba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d7c0c; end: 1098d7c17;  */

undefined ** FUN_1098d7c0c(void)

{
  return &PTR_DAT_110b1aaa8;
}



/* Entry: 1098d7c18; end: 1098d7d33;  */

void FUN_1098d7c18(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_1098e0f14(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 1098d7d34; end: 1098d7d37;  */

void FUN_1098d7d34(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x0001098d82b4(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_1098e1034(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 1098d7d38; end: 1098d7dcb;  */

void FUN_1098d7d38(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x0001098d82b4(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_1098e1034(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 1098d7dcc; end: 1098d7dfb;  */

long FUN_1098d7dcc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098d7dfc(param_1);
  return param_1;
}


