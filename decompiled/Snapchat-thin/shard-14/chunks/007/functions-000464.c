/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5ba25c; end: 10b5ba34f;  */

undefined8 * FUN_10b5ba25c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d17e30;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5bad24();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x00010598fd00(param_1 + 3,param_2,param_3 + 0x18);
  lVar2 = param_3 + 0x30;
  func_0x00010b5bae64();
  param_1[6] = lVar2;
  lVar2 = param_3 + 0x38;
  func_0x00010b5bae64();
  param_1[7] = lVar2;
  lVar2 = param_3 + 0x40;
  func_0x00010b5bae64();
  param_1[8] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5bab68(param_2,*(undefined8 *)(param_3 + 0x48));
  }
  param_1[9] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5babdc(param_2,*(undefined8 *)(param_3 + 0x50));
  }
  param_1[10] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b5bac68(param_2,*(undefined8 *)(param_3 + 0x58));
  }
  param_1[0xb] = param_2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 0x60);
  return param_1;
}



/* Entry: 10b5ba350; end: 10b5ba37b;  */

undefined8 FUN_10b5ba350(undefined8 param_1)

{
  func_0x00010b5bae0c();
  FUN_10b5ba37c(param_1);
  return param_1;
}



/* Entry: 10b5ba37c; end: 10b5ba3e3;  */

long * FUN_10b5ba37c(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b5b9ae4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b5b9ccc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b5ba024();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000100069100(plVar1);
  }
  return plVar1;
}



/* Entry: 10b5ba3e4; end: 10b5ba3e7;  */

undefined8 FUN_10b5ba3e4(undefined8 param_1)

{
  func_0x00010b5bae0c();
  FUN_10b5ba37c(param_1);
  return param_1;
}



/* Entry: 10b5ba3e8; end: 10b5ba3fb;  */

void FUN_10b5ba3e8(void)

{
  FUN_10b5ba350();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5ba3fc; end: 10b5ba407;  */

undefined ** FUN_10b5ba3fc(void)

{
  return &PTR_DAT_110d17f58;
}



/* Entry: 10b5ba408; end: 10b5ba497;  */

void FUN_10b5ba408(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c282c0(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  func_0x000107c3025c(param_1 + 0x40);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5b9b34(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5b9d44(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b5ba074(*(undefined8 *)(param_1 + 0x58));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b5ba498; end: 10b5ba733;  */

long * FUN_10b5ba498(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  uint uVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long extraout_x8;
  int iVar9;
  long unaff_x22;
  undefined8 *puVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  
  plVar7 = param_3;
  plVar4 = param_2;
  if ((int)param_1[0xc] != 0) {
    param_2 = param_1;
    func_0x00010b5bad18();
    plVar4 = (long *)0x8;
    func_0x000107c280a8();
    func_0x00010b5bad60();
  }
  func_0x00010b5baddc(param_1[6]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5ba508;
  }
  else if ((int)param_2 != 0) {
LAB_10b5ba508:
    func_0x00010b5bad50();
    param_2 = (long *)0x2;
    plVar4 = param_3;
    func_0x00010b5bad0c();
  }
  uVar3 = *(uint *)(param_1 + 2);
  puVar10 = (undefined8 *)(ulong)uVar3;
  if ((uVar3 & 1) != 0) {
    param_2 = (long *)param_1[9];
    plVar7 = (long *)(ulong)*(uint *)((long)param_2 + 0x1c);
    plVar4 = (long *)0x3;
    func_0x00010b5bada4();
  }
  if ((uVar3 >> 1 & 1) != 0) {
    param_2 = (long *)param_1[10];
    plVar7 = (long *)(ulong)*(uint *)((long)param_2 + 0x2c);
    plVar4 = (long *)0x4;
    func_0x00010b5bada4();
  }
  if ((uVar3 >> 2 & 1) != 0) {
    param_2 = (long *)param_1[0xb];
    plVar7 = (long *)(ulong)*(uint *)(param_2 + 4);
    plVar4 = (long *)0x5;
    func_0x00010b5bada4();
  }
  func_0x00010b5baddc(param_1[7]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (puVar10[1] != 0) {
      puVar10 = (undefined8 *)*puVar10;
      goto LAB_10b5ba5a0;
    }
  }
  else if ((int)param_2 != 0) {
LAB_10b5ba5a0:
    func_0x00010b5bad50(puVar10);
    param_2 = (long *)0x6;
    plVar4 = param_3;
    func_0x00010b5bad0c();
  }
  lVar14 = 8;
  puVar5 = &UNK_10f77e4ef;
  for (uVar13 = (ulong)(*(uint *)(param_1 + 4) & ((int)*(uint *)(param_1 + 4) >> 0x1f ^ 0xffffffffU)
                       ); uVar13 != 0; uVar13 = uVar13 - 1) {
    uVar8 = param_1[3];
    puVar2 = (ulong *)(param_1 + 3);
    if ((uVar8 & 1) != 0) {
      puVar2 = (ulong *)(uVar8 + lVar14 + -1);
    }
    plVar7 = (long *)*puVar2;
    lVar6 = (long)*(char *)((long)plVar7 + 0x17);
    plVar12 = plVar7;
    if (lVar6 < 0) {
      lVar6 = plVar7[1];
      plVar12 = (long *)*plVar7;
    }
    func_0x000107c303d4(plVar12,lVar6,1,&UNK_10f77e4ef);
    plVar12 = (long *)(long)*(char *)((long)plVar7 + 0x17);
    if ((((long)plVar12 < 0) && (plVar12 = (long *)plVar7[1], 0x7f < (long)plVar12)) ||
       ((*param_3 - (long)plVar4) + 0xe < (long)plVar12)) {
      param_2 = (long *)0x7;
      plVar4 = param_3;
      func_0x00010b4d5120();
    }
    else {
      *(undefined1 *)plVar4 = 0x3a;
      *(char *)((long)plVar4 + 1) = (char)plVar12;
      param_2 = plVar7;
      if (*(char *)((long)plVar7 + 0x17) < '\0') {
        param_2 = (long *)*plVar7;
      }
      plVar7 = plVar12;
      _memcpy((undefined1 *)((long)plVar4 + 2));
      plVar4 = (long *)((undefined1 *)((long)plVar4 + 2) + (long)plVar12);
    }
    lVar14 = lVar14 + 8;
  }
  func_0x00010b5baddc(param_1[8]);
  if ((long)param_2 < 0) {
    puVar5 = (undefined *)0x7461686370616e73;
  }
  else if ((int)param_2 == 0) goto LAB_10b5ba6d4;
  func_0x00010b5bad50(puVar5);
  plVar4 = param_3;
  func_0x00010b5bad0c(param_3,8);
LAB_10b5ba6d4:
  if ((param_1[1] & 1U) == 0) {
    return plVar4;
  }
  func_0x00010b5bae84();
  if ((long)plVar7 < 0) {
    lVar14 = *(long *)(extraout_x8 + 8);
    plVar7 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar14 = extraout_x8 + 8;
  }
  if ((long)(int)plVar7 <= *param_3 - (long)plVar4) {
    _memcpy(plVar4,lVar14,(ulong)plVar7 & 0xffffffff);
    return (long *)((long)plVar4 + (long)(int)plVar7);
  }
  while( true ) {
    iVar11 = ((int)*param_3 - (int)plVar4) + 0x10;
    iVar9 = (int)plVar7;
    plVar7 = (long *)(ulong)(uint)(iVar9 - iVar11);
    if (iVar9 - iVar11 == 0 || iVar9 < iVar11) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)plVar4 + (long)iVar11);
    plVar4 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)plVar4 + (long)iVar9);
}



/* Entry: 10b5ba734; end: 10b5ba873;  */

ulong FUN_10b5ba734(ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar4 = (ulong)uVar2;
  lVar6 = 8;
  uVar3 = param_1;
  for (uVar5 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar3 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + lVar6 + -1);
    }
    uVar3 = *puVar1;
    func_0x000107c282a0();
    uVar4 = uVar3 + uVar4;
    lVar6 = lVar6 + 8;
  }
  func_0x00010b5badc4(*(undefined8 *)(param_1 + 0x30));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b5bae78();
  }
  func_0x00010b5badc4(*(undefined8 *)(param_1 + 0x38));
  lVar6 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b5bae78();
  }
  func_0x00010b5badc4(*(undefined8 *)(param_1 + 0x40));
  lVar6 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b5bae78();
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      FUN_10b5b9c08(*(undefined8 *)(param_1 + 0x48));
      func_0x00010b5bace8();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      FUN_10b5b9ecc(*(undefined8 *)(param_1 + 0x50));
      func_0x00010b5bace8();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      FUN_10b5ba160(*(undefined8 *)(param_1 + 0x58));
      func_0x00010b5bace8();
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    func_0x00010b5bae24();
    uVar4 = uVar4 + extraout_x8_02 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5bae90();
    lVar6 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar6 = *(long *)(extraout_x9 + 0x10);
    }
    uVar4 = lVar6 + uVar4;
  }
  *(int *)(param_1 + 0x14) = (int)uVar4;
  return uVar4;
}



/* Entry: 10b5ba874; end: 10b5ba877;  */

void FUN_10b5ba874(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  lVar3 = param_2 + 0x18;
  func_0x00010598fce8(param_1 + 0x18);
  func_0x00010b5bade8(*(undefined8 *)(param_2 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5badd0();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b5bade8(*(undefined8 *)(param_2 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5badd0();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  func_0x00010b5bade8(*(undefined8 *)(param_2 + 0x40));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5badd0();
    }
    func_0x000107c30248(param_1 + 0x40);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar5;
        func_0x00010b5bab68(uVar5,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_10b5b9c78();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar2 = uVar5;
        func_0x00010b5babdc(uVar5,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        FUN_10b5b9f8c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        func_0x00010b5bac68(uVar5,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar5;
      }
      else {
        FUN_10b5ba1fc();
      }
    }
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_2 + 0x60);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5ba878; end: 10b5baa0b;  */

void FUN_10b5ba878(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  lVar3 = param_2 + 0x18;
  func_0x00010598fce8(param_1 + 0x18);
  func_0x00010b5bade8(*(undefined8 *)(param_2 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5badd0();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b5bade8(*(undefined8 *)(param_2 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5badd0();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  func_0x00010b5bade8(*(undefined8 *)(param_2 + 0x40));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5badd0();
    }
    func_0x000107c30248(param_1 + 0x40);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar5;
        func_0x00010b5bab68(uVar5,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_10b5b9c78();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar2 = uVar5;
        func_0x00010b5babdc(uVar5,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        FUN_10b5b9f8c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        func_0x00010b5bac68(uVar5,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar5;
      }
      else {
        FUN_10b5ba1fc();
      }
    }
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_2 + 0x60);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5baa0c; end: 10b5baa2b;  */

void FUN_10b5baa0c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x30);
  }
  func_0x00010b5bae6c();
  *puVar1 = &PTR_FUN_110d17d40;
  puVar1[1] = param_2;
  puVar1[2] = extraout_x8;
  puVar1[3] = extraout_x8;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b5baa2c; end: 10b5bab67;  */

void FUN_10b5baa2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  func_0x00010b5bae6c();
  *puVar1 = &PTR_FUN_110d17d40;
  puVar1[1] = param_1;
  puVar1[2] = extraout_x8;
  puVar1[3] = extraout_x8;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b5bab68; end: 10b5bacdb;  */

undefined8 * FUN_10b5bab68(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  puVar2 = puVar1 + 1;
  *puVar2 = param_1;
  *puVar1 = &PTR_FUN_110d17d90;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5bad24();
  }
  func_0x00010b5bad6c();
  puVar1[2] = puVar2;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 0x18);
  return puVar1;
}



/* Entry: 10b5bacdc; end: 10b5baecf;  */

void FUN_10b5bacdc(void)

{
  return;
}



/* Entry: 10b5baed0; end: 10b5baef7;  */

long FUN_10b5baed0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5baef8; end: 10b5baf43;  */

undefined8 * FUN_10b5baef8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d18008;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00010b5bae9c(param_1,param_3);
  return param_1;
}



/* Entry: 10b5baf44; end: 10b5baf47;  */

long FUN_10b5baf44(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5baf48; end: 10b5baf5b;  */

void FUN_10b5baf48(void)

{
  FUN_10b5baed0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5baf5c; end: 10b5baf7b;  */

undefined ** FUN_10b5baf5c(void)

{
  return &PTR_DAT_110d18048;
}



/* Entry: 10b5baf7c; end: 10b5bb027;  */

long * FUN_10b5baf7c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar2 = param_1;
  if ((int)param_1[2] != 0) {
    plVar1 = param_1;
    func_0x00010b5bb0f8();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar1);
    func_0x00010b5bb104();
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b5bb0f8();
    param_2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b5bb104();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
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



/* Entry: 10b5bb028; end: 10b5bb0a7;  */

long FUN_10b5bb028(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5bb0a8; end: 10b5bb0ef;  */

void FUN_10b5bb0a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110d18008;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b5bb0f0; end: 10b5bb10f;  */

void FUN_10b5bb0f0(void)

{
  return;
}



/* Entry: 10b5bb110; end: 10b5bb187;  */

undefined8 * FUN_10b5bb110(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d180b8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}



/* Entry: 10b5bb188; end: 10b5bb1b7;  */

long FUN_10b5bb188(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5bb1b8(param_1);
  return param_1;
}



/* Entry: 10b5bb1b8; end: 10b5bb1d3;  */

void FUN_10b5bb1b8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5bb1d4; end: 10b5bb1d7;  */

long FUN_10b5bb1d4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5bb1b8(param_1);
  return param_1;
}



/* Entry: 10b5bb1d8; end: 10b5bb1eb;  */

void FUN_10b5bb1d8(void)

{
  FUN_10b5bb188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5bb1ec; end: 10b5bb1f7;  */

undefined ** FUN_10b5bb1ec(void)

{
  return &PTR_DAT_110d180f8;
}



/* Entry: 10b5bb1f8; end: 10b5bb30b;  */

void FUN_10b5bb1f8(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b535efc(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5bb30c; end: 10b5bb30f;  */

void FUN_10b5bb30c(long param_1,long param_2)

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
      func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      func_0x00010b535e30(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5bb310; end: 10b5bb3a3;  */

void FUN_10b5bb310(long param_1,long param_2)

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
      func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      func_0x00010b535e30(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5bb3a4; end: 10b5bb3ab;  */

void FUN_10b5bb3a4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110d180b8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b5bb3ac; end: 10b5bb3ef;  */

void FUN_10b5bb3ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110d180b8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b5bb3f0; end: 10b5bb3f7;  */

void FUN_10b5bb3f0(void)

{
  return;
}



/* Entry: 10b5bb3f8; end: 10b5bb4df;  */

undefined8 * FUN_10b5bb3f8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d18160;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_10b5bba4c(param_1 + 3,param_2,param_3 + 0x18);
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010b5bbafc(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010b5bbb40(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010b50fb3c(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b5bbb84(param_2,*(undefined8 *)(param_3 + 0x48));
  }
  param_1[9] = param_2;
  param_1[10] = *(undefined8 *)(param_3 + 0x50);
  return param_1;
}



/* Entry: 10b5bb4e0; end: 10b5bb50f;  */

long FUN_10b5bb4e0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5bb510(param_1);
  return param_1;
}



/* Entry: 10b5bb510; end: 10b5bb56f;  */

long * FUN_10b5bb510(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5bbd6c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b5c87fc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b5b4ff0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b5b8db4();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b5bb570; end: 10b5bb573;  */

long FUN_10b5bb570(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5bb510(param_1);
  return param_1;
}



/* Entry: 10b5bb574; end: 10b5bb587;  */

void FUN_10b5bb574(void)

{
  FUN_10b5bb4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5bb588; end: 10b5bb593;  */

undefined ** FUN_10b5bb588(void)

{
  return &PTR_DAT_110d181a0;
}



/* Entry: 10b5bb594; end: 10b5bb62f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5bb594(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5bbdf0(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5c8888(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b5b5148(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b5b8e44(*(undefined8 *)(param_1 + 0x48));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b5bb630; end: 10b5bb8db;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b5bb630(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  
  lVar5 = param_1[4];
  plVar3 = param_1;
  for (iVar9 = 0; (int)lVar5 != iVar9; iVar9 = iVar9 + 1) {
    uVar6 = param_1[3];
    puVar1 = (ulong *)(param_1 + 3);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + (long)iVar9 * 8 + 7);
    }
    plVar3 = (long *)0x1;
    func_0x00010b5bbbec(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14));
    param_2 = plVar3;
  }
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)0x2;
    func_0x00010b5bbbec(2,param_1[6],*(undefined4 *)(param_1[6] + 0x68));
    param_2 = plVar3;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar3 = (long *)0x3;
    func_0x00010b5bbbec(3,param_1[7],*(undefined4 *)(param_1[7] + 0x14));
    param_2 = plVar3;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    plVar3 = (long *)0x4;
    func_0x00010b5bbbec(4,param_1[8],*(undefined4 *)(param_1[8] + 0x14));
    param_2 = plVar3;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    plVar3 = (long *)0x5;
    func_0x00010b5bbbec(5,param_1[9],*(undefined4 *)(param_1[9] + 0x14));
    param_2 = plVar3;
  }
  plVar8 = plVar3;
  if ((int)param_1[10] != 0) {
    func_0x00010b5bbc0c();
    plVar8 = (long *)(ulong)*(uint *)(param_1 + 10);
    uVar4 = 0x30;
    func_0x000107c280a8(0x30,plVar3);
    func_0x000107c280a8(plVar8,uVar4);
    param_2 = plVar8;
  }
  if (*(int *)((long)param_1 + 0x54) != 0) {
    func_0x00010b5bbc0c();
    param_2 = (long *)(ulong)*(uint *)((long)param_1 + 0x54);
    uVar4 = 0x38;
    func_0x000107c280a8(0x38,plVar8);
    func_0x000107c280b8(param_2,uVar4);
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  uVar7 = param_1[1] & 0xfffffffffffffffe;
  uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
  if ((long)uVar6 < 0) {
    lVar5 = *(long *)(uVar7 + 8);
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    lVar5 = uVar7 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar6) {
    while( true ) {
      iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar9 = (int)uVar6;
      uVar6 = (ulong)(uint)(iVar9 - iVar10);
      if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
      func_0x00010b4d5738();
      lVar5 = (long)param_2 + (long)iVar10;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar5);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar9);
  }
  _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar6);
}



/* Entry: 10b5bb8dc; end: 10b5bb8df;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5bb8dc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  FUN_10b5bba34(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        func_0x00010b5bbafc(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_10b5bc1b8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar3;
        func_0x00010b5bbb40(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_10b5c8ab4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar3;
        func_0x00010b50fb3c(uVar3,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_10b5b5a30();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        func_0x00010b5bbb84(uVar3,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar3;
      }
      else {
        FUN_10b5b904c();
      }
    }
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_2 + 0x54);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5bb8e0; end: 10b5bba33;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5bb8e0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  FUN_10b5bba34(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        func_0x00010b5bbafc(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_10b5bc1b8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar3;
        func_0x00010b5bbb40(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_10b5c8ab4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar3;
        func_0x00010b50fb3c(uVar3,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_10b5b5a30();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        func_0x00010b5bbb84(uVar3,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar3;
      }
      else {
        FUN_10b5b904c();
      }
    }
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_2 + 0x54);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5bba34; end: 10b5bba4b;  */

void FUN_10b5bba34(long *param_1,long param_2)

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



/* Entry: 10b5bba4c; end: 10b5bba77;  */

undefined8 * FUN_10b5bba4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b5bba34(param_1,param_3);
  return param_1;
}



/* Entry: 10b5bba78; end: 10b5bbaa7;  */

long * FUN_10b5bba78(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5bbaa8; end: 10b5bbbc7;  */

void FUN_10b5bbaa8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x58);
  }
  *puVar1 = &PTR_FUN_110d18160;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  return;
}



/* Entry: 10b5bbbc8; end: 10b5bbc17;  */

void FUN_10b5bbbc8(void)

{
  return;
}



/* Entry: 10b5bbc18; end: 10b5bbc77;  */

void FUN_10b5bbc18(long param_1)

{
  ulong uVar1;
  
  if ((*(int *)(param_1 + 0x6c) == 7) || (*(int *)(param_1 + 0x6c) == 6)) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x60) != 0) {
        func_0x000107c316b0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}



/* Entry: 10b5bbc78; end: 10b5bbd6b;  */

undefined8 * FUN_10b5bbc78(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d18258;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x00010598dec8(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_10b5bc458(param_1 + 5,param_2,param_3 + 0x28);
  func_0x00010b5bc478(param_1 + 8,param_2,param_3 + 0x40);
  *(undefined4 *)(param_1 + 0xd) = 0;
  iVar1 = *(int *)(param_3 + 0x6c);
  *(int *)((long)param_1 + 0x6c) = iVar1;
  param_1[0xb] = *(undefined8 *)(param_3 + 0x58);
  if (iVar1 == 8) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 0x60);
  }
  else if ((iVar1 == 7) || (iVar1 == 6)) {
    func_0x000107c284d4(param_2,*(undefined8 *)(param_3 + 0x60));
    param_1[0xc] = param_2;
  }
  return param_1;
}



/* Entry: 10b5bbd6c; end: 10b5bbd9b;  */

long FUN_10b5bbd6c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5bbd9c(param_1);
  return param_1;
}



/* Entry: 10b5bbd9c; end: 10b5bbdcb;  */

long FUN_10b5bbd9c(long param_1)

{
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_10b5bbc18(param_1);
  }
  FUN_10b5bc498(param_1 + 0x40);
  FUN_10b5bc4c8(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x14)) {
    func_0x00010598e118(param_1 + 0x10);
  }
  return param_1 + 0x10;
}



/* Entry: 10b5bbdcc; end: 10b5bbdcf;  */

long FUN_10b5bbdcc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5bbd9c(param_1);
  return param_1;
}



/* Entry: 10b5bbdd0; end: 10b5bbde3;  */

void FUN_10b5bbdd0(void)

{
  FUN_10b5bbd6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5bbde4; end: 10b5bbdef;  */

undefined ** FUN_10b5bbde4(void)

{
  return &PTR_DAT_110d18298;
}



/* Entry: 10b5bbdf0; end: 10b5bbe5b;  */

void FUN_10b5bbdf0(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    func_0x0001053936e4(param_1 + 0x40);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_10b5bbc18(param_1);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5bbe5c; end: 10b5bc1b3;  */

byte * FUN_10b5bbe5c(byte *param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  int iVar10;
  int iVar11;
  
  pbVar3 = param_1;
  if (param_1[0x58] == 1) {
    pbVar4 = param_1;
    FUN_10b5bc5d4();
    pbVar3 = (byte *)0x28;
    func_0x000107c280a8(0x28,pbVar4);
    func_0x00010b5bc5e8();
    param_2 = pbVar3;
  }
  iVar10 = *(int *)(param_1 + 0x6c);
  if (iVar10 == 8) {
    FUN_10b5bc5d4();
    pbVar4 = (byte *)0x40;
    func_0x000107c280a8(0x40,pbVar3);
    func_0x00010b5bc5e8();
    param_2 = pbVar4;
  }
  else {
    if (iVar10 == 7) {
      lVar5 = *(long *)(param_1 + 0x60);
      uVar2 = *(undefined4 *)(lVar5 + 0x10);
      pbVar4 = (byte *)0x7;
    }
    else {
      pbVar4 = pbVar3;
      if (iVar10 != 6) goto LAB_10b5bbf14;
      lVar5 = *(long *)(param_1 + 0x60);
      uVar2 = *(undefined4 *)(lVar5 + 0x10);
      pbVar4 = (byte *)0x6;
    }
    func_0x00010b5bc65c(pbVar4,lVar5,uVar2);
    param_2 = pbVar4;
  }
LAB_10b5bbf14:
  uVar8 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar8) {
    FUN_10b5bc5d4();
    pbVar3 = pbVar4 + 2;
    *pbVar4 = 0x4a;
    for (; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
      pbVar3[-1] = (byte)uVar8 | 0x80;
      pbVar3 = pbVar3 + 1;
    }
    pbVar3[-1] = (byte)uVar8;
    puVar9 = *(ulong **)(param_1 + 0x18);
    puVar1 = puVar9 + *(int *)(param_1 + 0x10);
    do {
      FUN_10b5bc5d4();
      uVar6 = *puVar9;
      pbVar3 = pbVar4;
      while( true ) {
        param_2 = pbVar3 + 1;
        if (uVar6 < 0x80) break;
        *pbVar3 = (byte)uVar6 | 0x80;
        uVar6 = uVar6 >> 7;
        pbVar3 = param_2;
      }
      puVar9 = puVar9 + 1;
      *pbVar3 = (byte)uVar6;
    } while (puVar9 < puVar1);
  }
  iVar11 = *(int *)(param_1 + 0x30);
  for (iVar10 = 0; iVar11 != iVar10; iVar10 = iVar10 + 1) {
    func_0x00010b5bc5f4();
    pbVar4 = (byte *)0xa;
    func_0x00010b5bc65c();
    param_2 = pbVar4;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_10b5bc5d4();
    param_2 = (byte *)0x58;
    func_0x000107c280a8(0x58,pbVar4);
    func_0x00010b5bc5e8();
  }
  iVar11 = *(int *)(param_1 + 0x48);
  for (iVar10 = 0; iVar11 != iVar10; iVar10 = iVar10 + 1) {
    func_0x00010b5bc5f4();
    param_2 = (byte *)0xc;
    func_0x00010b5bc65c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
  if ((long)uVar6 < 0) {
    lVar5 = *(long *)(uVar7 + 8);
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    lVar5 = uVar7 + 8;
  }
  if ((long)(int)uVar6 <= *(long *)param_3 - (long)param_2) {
    _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
    return param_2 + (int)uVar6;
  }
  while( true ) {
    iVar11 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
    iVar10 = (int)uVar6;
    uVar6 = (ulong)(uint)(iVar10 - iVar11);
    if (iVar10 - iVar11 == 0 || iVar10 < iVar11) break;
    func_0x00010b4d5738();
    pbVar3 = param_2 + iVar11;
    param_2 = param_3;
    func_0x000107c303e4(param_3,pbVar3);
  }
  func_0x00010b4d5738();
  return param_2 + iVar10;
}



/* Entry: 10b5bc1b4; end: 10b5bc1b7;  */

void FUN_10b5bc1b4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x00010598be78(param_1 + 0x10,param_2 + 0x10);
  FUN_10b5bc2ec(param_1 + 0x28,param_2 + 0x28);
  func_0x00010b5bc2fc(param_1 + 0x40,param_2 + 0x40);
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
  }
  iVar1 = *(int *)(param_2 + 0x6c);
  if (iVar1 == 0) goto LAB_10b5bc2b0;
  iVar2 = *(int *)(param_1 + 0x6c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      FUN_10b5bbc18(param_1);
    }
    *(int *)(param_1 + 0x6c) = iVar1;
  }
  if (iVar1 == 8) {
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    goto LAB_10b5bc2b0;
  }
  if (iVar1 == 7) {
    if (iVar2 != 7) {
LAB_10b5bc294:
      func_0x000107c284d4(uVar3,*(undefined8 *)(param_2 + 0x60));
      *(ulong *)(param_1 + 0x60) = uVar3;
      goto LAB_10b5bc2b0;
    }
    func_0x00010b5bc644();
  }
  else {
    if (iVar1 != 6) goto LAB_10b5bc2b0;
    if (iVar2 != 6) goto LAB_10b5bc294;
    func_0x00010b5bc644();
  }
  func_0x00010bd1b688();
LAB_10b5bc2b0:
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5bc1b8; end: 10b5bc2eb;  */

void FUN_10b5bc1b8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x00010598be78(param_1 + 0x10,param_2 + 0x10);
  FUN_10b5bc2ec(param_1 + 0x28,param_2 + 0x28);
  func_0x00010b5bc2fc(param_1 + 0x40,param_2 + 0x40);
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
  }
  iVar1 = *(int *)(param_2 + 0x6c);
  if (iVar1 == 0) goto LAB_10b5bc2b0;
  iVar2 = *(int *)(param_1 + 0x6c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      FUN_10b5bbc18(param_1);
    }
    *(int *)(param_1 + 0x6c) = iVar1;
  }
  if (iVar1 == 8) {
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    goto LAB_10b5bc2b0;
  }
  if (iVar1 == 7) {
    if (iVar2 != 7) {
LAB_10b5bc294:
      func_0x000107c284d4(uVar3,*(undefined8 *)(param_2 + 0x60));
      *(ulong *)(param_1 + 0x60) = uVar3;
      goto LAB_10b5bc2b0;
    }
    func_0x00010b5bc644();
  }
  else {
    if (iVar1 != 6) goto LAB_10b5bc2b0;
    if (iVar2 != 6) goto LAB_10b5bc294;
    func_0x00010b5bc644();
  }
  func_0x00010bd1b688();
LAB_10b5bc2b0:
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5bc2ec; end: 10b5bc30b;  */

void FUN_10b5bc2ec(long *param_1,long param_2)

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



/* Entry: 10b5bc30c; end: 10b5bc333;  */

long FUN_10b5bc30c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5bc334; end: 10b5bc337;  */

long FUN_10b5bc334(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5bc338; end: 10b5bc34b;  */

void FUN_10b5bc338(void)

{
  FUN_10b5bc30c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5bc34c; end: 10b5bc36b;  */

undefined ** FUN_10b5bc34c(void)

{
  return &PTR_DAT_110d182e8;
}



/* Entry: 10b5bc36c; end: 10b5bc3d7;  */

long * FUN_10b5bc36c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)plVar1 + (long)iVar6;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar5);
  }
  _memcpy(plVar1,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar3);
}



/* Entry: 10b5bc3d8; end: 10b5bc457;  */

ulong FUN_10b5bc3d8(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b5bc458; end: 10b5bc497;  */

void FUN_10b5bc458(void)

{
  func_0x00010b5bc664();
  FUN_10b5bc2ec();
  return;
}



/* Entry: 10b5bc498; end: 10b5bc4c7;  */

long * FUN_10b5bc498(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5bc4c8; end: 10b5bc4f7;  */

long * FUN_10b5bc4c8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5bc4f8; end: 10b5bc5d3;  */

long FUN_10b5bc4f8(long param_1)

{
  FUN_10b5bc498(param_1 + 0x30);
  FUN_10b5bc4c8(param_1 + 0x18);
  if (0 < *(int *)(param_1 + 4)) {
    func_0x00010598e118(param_1);
  }
  return param_1;
}



/* Entry: 10b5bc5d4; end: 10b5bc677;  */

ulong * FUN_10b5bc5d4(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 10b5bc678; end: 10b5bc70f;  */

long FUN_10b5bc678(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5c93e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5c93e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5bd880();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b576d70();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b576aa4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010bceb6c4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5bc710; end: 10b5bc713;  */

long FUN_10b5bc710(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5c93e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5c93e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5bd880();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b576d70();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b576aa4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010bceb6c4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5bc714; end: 10b5bc727;  */

void FUN_10b5bc714(void)

{
  FUN_10b5bc678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5bc728; end: 10b5bc733;  */

undefined ** FUN_10b5bc728(void)

{
  return &PTR_DAT_110d18400;
}



/* Entry: 10b5bc734; end: 10b5bc7f3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5bc734(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5c9480(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5c9480(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b5bd8e4(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b576dc8(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x00010b576b44(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x00010bceb764(*(undefined8 *)(param_1 + 0x48));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b5bc7f4; end: 10b5bcbd7;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b5bc7f4(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  
  plVar2 = param_1;
  if ((int)param_1[10] != 0) {
    plVar3 = param_1;
    FUN_10b5bd69c();
    plVar2 = (long *)0xd;
    func_0x000107c280a8(0xd,plVar3);
    func_0x00010b5bd700();
  }
  plVar3 = plVar2;
  if (*(int *)((long)param_1 + 0x54) != 0) {
    FUN_10b5bd69c();
    plVar3 = (long *)0x15;
    func_0x000107c280a8(0x15,plVar2);
    func_0x00010b5bd700();
  }
  plVar2 = plVar3;
  if ((int)param_1[0xb] != 0) {
    FUN_10b5bd69c();
    plVar2 = (long *)0x1d;
    func_0x000107c280a8(0x1d,plVar3);
    func_0x00010b5bd700();
  }
  plVar3 = plVar2;
  if (*(int *)((long)param_1 + 0x5c) != 0) {
    FUN_10b5bd69c();
    plVar3 = (long *)0x25;
    func_0x000107c280a8(0x25,plVar2);
    func_0x00010b5bd700();
  }
  plVar2 = plVar3;
  if ((int)param_1[0xc] != 0) {
    FUN_10b5bd69c();
    plVar2 = (long *)0x2d;
    func_0x000107c280a8(0x2d,plVar3);
    func_0x00010b5bd700();
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x6;
    func_0x00010b5bd6d0(6,param_1[3],*(undefined4 *)(param_1[3] + 0x18));
    param_2 = plVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar2 = (long *)0x7;
    func_0x00010b5bd6d0(7,param_1[4],*(undefined4 *)(param_1[4] + 0x18));
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)((long)param_1 + 100) != 0) {
    FUN_10b5bd69c();
    plVar3 = (long *)0x45;
    func_0x000107c280a8(0x45,plVar2);
    func_0x00010b5bd700();
  }
  plVar2 = plVar3;
  if ((int)param_1[0xd] != 0) {
    FUN_10b5bd69c();
    plVar2 = (long *)0x4d;
    func_0x000107c280a8(0x4d,plVar3);
    func_0x00010b5bd700();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    plVar2 = (long *)0xa;
    func_0x00010b5bd6d0(10,param_1[5],*(undefined4 *)(param_1[5] + 0x20));
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)((long)param_1 + 0x6c) != 0) {
    FUN_10b5bd69c();
    plVar3 = (long *)0x58;
    func_0x000107c280a8(0x58,plVar2);
    func_0x00010b5bd6e8();
    param_2 = plVar3;
  }
  plVar2 = plVar3;
  if ((int)param_1[0xf] != 0) {
    FUN_10b5bd69c();
    plVar2 = (long *)0x60;
    func_0x000107c280a8(0x60,plVar3);
    func_0x00010b5bd6e8();
    param_2 = plVar2;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    plVar2 = (long *)0xd;
    func_0x00010b5bd6d0(0xd,param_1[6],*(undefined4 *)(param_1[6] + 0x84));
    param_2 = plVar2;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    plVar2 = (long *)0xe;
    func_0x00010b5bd6d0(0xe,param_1[7],*(undefined4 *)(param_1[7] + 0x14));
    param_2 = plVar2;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    plVar2 = (long *)0xf;
    func_0x00010b5bd6d0(0xf,param_1[8],*(undefined4 *)(param_1[8] + 0x20));
    param_2 = plVar2;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    plVar2 = (long *)0x10;
    func_0x00010b5bd6d0(0x10,param_1[9],*(undefined4 *)(param_1[9] + 0x18));
    param_2 = plVar2;
  }
  if (param_1[0xe] != 0) {
    FUN_10b5bd69c();
    param_2 = (long *)param_1[0xe];
    uVar4 = 0x88;
    func_0x000107c280a8(0x88,plVar2);
    func_0x000107c280ac(param_2,uVar4);
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  uVar7 = param_1[1] & 0xfffffffffffffffe;
  uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
  if ((long)uVar6 < 0) {
    lVar5 = *(long *)(uVar7 + 8);
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    lVar5 = uVar7 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar6) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar8 = (int)uVar6;
      uVar6 = (ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar5 = (long)param_2 + (long)iVar9;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar5);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar8);
  }
  _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar6);
}



/* Entry: 10b5bcbd8; end: 10b5bcbdb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5bcbd8(void)

{
  uint uVar1;
  ulong uVar2;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b5bd764();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x18) == 0) {
        uVar2 = unaff_x22;
        func_0x00010b5b1dcc(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = uVar2;
      }
      else {
        func_0x00010b5c93c0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        uVar2 = unaff_x22;
        func_0x00010b5b1dcc(unaff_x22,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = uVar2;
      }
      else {
        func_0x00010b5c93c0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x28) == 0) {
        uVar2 = unaff_x22;
        func_0x00010b5b1e10(unaff_x22,*(undefined8 *)(unaff_x20 + 0x28));
        *(ulong *)(unaff_x21 + 0x28) = uVar2;
      }
      else {
        FUN_10b5bda40();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x30) == 0) {
        uVar2 = unaff_x22;
        func_0x00010b5ab4a4(unaff_x22,*(undefined8 *)(unaff_x20 + 0x30));
        *(ulong *)(unaff_x21 + 0x30) = uVar2;
      }
      else {
        FUN_10b57714c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x38) == 0) {
        uVar2 = unaff_x22;
        func_0x000106af6830(unaff_x22,*(undefined8 *)(unaff_x20 + 0x38));
        *(ulong *)(unaff_x21 + 0x38) = uVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x40) == 0) {
        uVar2 = unaff_x22;
        func_0x00010b5a8a4c(unaff_x22,*(undefined8 *)(unaff_x20 + 0x40));
        *(ulong *)(unaff_x21 + 0x40) = uVar2;
      }
      else {
        func_0x00010b576a70();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x48) == 0) {
        func_0x00010598eb08(unaff_x22,*(undefined8 *)(unaff_x20 + 0x48));
        *(ulong *)(unaff_x21 + 0x48) = unaff_x22;
      }
      else {
        func_0x00010bceb748();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    *(int *)(unaff_x21 + 0x58) = *(int *)(unaff_x20 + 0x58);
  }
  if (*(int *)(unaff_x20 + 0x5c) != 0) {
    *(int *)(unaff_x21 + 0x5c) = *(int *)(unaff_x20 + 0x5c);
  }
  if (*(int *)(unaff_x20 + 0x60) != 0) {
    *(int *)(unaff_x21 + 0x60) = *(int *)(unaff_x20 + 0x60);
  }
  if (*(int *)(unaff_x20 + 100) != 0) {
    *(int *)(unaff_x21 + 100) = *(int *)(unaff_x20 + 100);
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x6c) != 0) {
    *(int *)(unaff_x21 + 0x6c) = *(int *)(unaff_x20 + 0x6c);
  }
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    *(long *)(unaff_x21 + 0x70) = *(long *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x78) != 0) {
    *(int *)(unaff_x21 + 0x78) = *(int *)(unaff_x20 + 0x78);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5bcbdc; end: 10b5bcdff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5bcbdc(void)

{
  uint uVar1;
  ulong uVar2;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b5bd764();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x18) == 0) {
        uVar2 = unaff_x22;
        func_0x00010b5b1dcc(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = uVar2;
      }
      else {
        func_0x00010b5c93c0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        uVar2 = unaff_x22;
        func_0x00010b5b1dcc(unaff_x22,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = uVar2;
      }
      else {
        func_0x00010b5c93c0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x28) == 0) {
        uVar2 = unaff_x22;
        func_0x00010b5b1e10(unaff_x22,*(undefined8 *)(unaff_x20 + 0x28));
        *(ulong *)(unaff_x21 + 0x28) = uVar2;
      }
      else {
        FUN_10b5bda40();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x30) == 0) {
        uVar2 = unaff_x22;
        func_0x00010b5ab4a4(unaff_x22,*(undefined8 *)(unaff_x20 + 0x30));
        *(ulong *)(unaff_x21 + 0x30) = uVar2;
      }
      else {
        FUN_10b57714c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x38) == 0) {
        uVar2 = unaff_x22;
        func_0x000106af6830(unaff_x22,*(undefined8 *)(unaff_x20 + 0x38));
        *(ulong *)(unaff_x21 + 0x38) = uVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x40) == 0) {
        uVar2 = unaff_x22;
        func_0x00010b5a8a4c(unaff_x22,*(undefined8 *)(unaff_x20 + 0x40));
        *(ulong *)(unaff_x21 + 0x40) = uVar2;
      }
      else {
        func_0x00010b576a70();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x48) == 0) {
        func_0x00010598eb08(unaff_x22,*(undefined8 *)(unaff_x20 + 0x48));
        *(ulong *)(unaff_x21 + 0x48) = unaff_x22;
      }
      else {
        func_0x00010bceb748();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    *(int *)(unaff_x21 + 0x58) = *(int *)(unaff_x20 + 0x58);
  }
  if (*(int *)(unaff_x20 + 0x5c) != 0) {
    *(int *)(unaff_x21 + 0x5c) = *(int *)(unaff_x20 + 0x5c);
  }
  if (*(int *)(unaff_x20 + 0x60) != 0) {
    *(int *)(unaff_x21 + 0x60) = *(int *)(unaff_x20 + 0x60);
  }
  if (*(int *)(unaff_x20 + 100) != 0) {
    *(int *)(unaff_x21 + 100) = *(int *)(unaff_x20 + 100);
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x6c) != 0) {
    *(int *)(unaff_x21 + 0x6c) = *(int *)(unaff_x20 + 0x6c);
  }
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    *(long *)(unaff_x21 + 0x70) = *(long *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x78) != 0) {
    *(int *)(unaff_x21 + 0x78) = *(int *)(unaff_x20 + 0x78);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5bce00; end: 10b5bcee3;  */

void FUN_10b5bce00(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5bd778();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10b5bcea8;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10b5b4ff0();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5bd778();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10b5bcea8;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10b5a73a8();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5bd778();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b5bcea8;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10b5ca474();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5bd778();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b5bcea8;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10b55776c();
    }
    break;
  default:
    goto LAB_10b5bcea8;
  }
  __ZdlPv();
LAB_10b5bcea8:
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10b5bcee4; end: 10b5bcf4b;  */

long FUN_10b5bcee4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5bc678();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5ae248();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5af9e8();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_10b5bce00(param_1);
  }
  return param_1;
}



/* Entry: 10b5bcf4c; end: 10b5bcf4f;  */

long FUN_10b5bcf4c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5bc678();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5ae248();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5af9e8();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_10b5bce00(param_1);
  }
  return param_1;
}



/* Entry: 10b5bcf50; end: 10b5bcf63;  */

void FUN_10b5bcf50(void)

{
  FUN_10b5bcee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5bcf64; end: 10b5bcf6f;  */

undefined ** FUN_10b5bcf64(void)

{
  return &PTR_DAT_110d18448;
}



/* Entry: 10b5bcf70; end: 10b5bcfeb;  */

void FUN_10b5bcf70(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5bc734(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5ae29c(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b5afa84(*(undefined8 *)(param_1 + 0x28));
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_10b5bce00(param_1);
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b5bcfec; end: 10b5bd1df;  */

long * FUN_10b5bcfec(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar2 = (long *)(ulong)*(uint *)(param_1 + 0x40);
  uVar1 = *(uint *)(param_1 + 0x40) - 1;
  if (uVar1 < 4) {
    func_0x00010b5bd6d0(plVar2,*(long *)(param_1 + 0x38),
                        *(undefined4 *)
                         (*(long *)(param_1 + 0x38) + *(long *)(&UNK_10e5c2e80 + (ulong)uVar1 * 8)))
    ;
    param_2 = plVar2;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x5;
    func_0x00010b5bd6d0(5,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14));
    param_2 = plVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x00010b5bd69c();
    param_2 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x00010b5bd6e8();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x7;
    func_0x00010b5bd6d0(7,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x44));
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (long *)0x8;
    func_0x00010b5bd6d0(8,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14));
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



/* Entry: 10b5bd1e0; end: 10b5bd227;  */

void FUN_10b5bd1e0(void)

{
  func_0x00010b5bca58();
  func_0x00010b5bd6b4();
  return;
}



/* Entry: 10b5bd228; end: 10b5bd41b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5bd228(ulong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b5bd764();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong *)(unaff_x21 + 0x18);
      if (param_1 == 0) {
        param_1 = unaff_x22;
        FUN_10b5bd4d0(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b5bcbdc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong *)(unaff_x21 + 0x20);
      if (param_1 == 0) {
        param_1 = unaff_x22;
        func_0x00010b5b1e54(unaff_x22,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b5ae578();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong *)(unaff_x21 + 0x28);
      if (param_1 == 0) {
        FUN_10b5bd614(unaff_x22,*(undefined8 *)(unaff_x20 + 0x28));
        *(ulong *)(unaff_x21 + 0x28) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x00010b5af99c();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x40);
  if (iVar2 != 0) {
    iVar3 = *(int *)(unaff_x21 + 0x40);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        FUN_10b5bce00();
      }
      *(int *)(unaff_x21 + 0x40) = iVar2;
    }
    switch(iVar2) {
    case 1:
      if (iVar3 == iVar2) {
        func_0x00010b5bd6d8();
        FUN_10b5b5a30();
        goto LAB_10b5bd3f8;
      }
      func_0x00010b5bd798();
      func_0x00010b50fb3c();
      break;
    case 2:
      if (iVar3 == iVar2) {
        func_0x00010b5bd6d8();
        FUN_10b5a7554();
        goto LAB_10b5bd3f8;
      }
      func_0x00010b5bd798();
      func_0x00010b5bd658();
      break;
    case 3:
      if (iVar3 == iVar2) {
        func_0x00010b5bd6d8();
        FUN_10b5cac24();
        goto LAB_10b5bd3f8;
      }
      func_0x00010b5bd798();
      func_0x00010b5a5f8c();
      break;
    case 4:
      if (iVar3 == iVar2) {
        func_0x00010b5bd6d8();
        FUN_10b557a80();
        goto LAB_10b5bd3f8;
      }
      func_0x00010b5bd798();
      func_0x000108930a60();
      break;
    default:
      goto LAB_10b5bd3f8;
    }
    *(ulong *)(unaff_x21 + 0x38) = param_1;
  }
LAB_10b5bd3f8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5bd41c; end: 10b5bd42b;  */

void FUN_10b5bd41c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x80;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x80);
  }
  *puVar1 = &PTR_FUN_110d18370;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  *(undefined8 *)((long)puVar1 + 0x74) = 0;
  *(undefined8 *)((long)puVar1 + 0x6c) = 0;
  return;
}



/* Entry: 10b5bd42c; end: 10b5bd4cf;  */

void FUN_10b5bd42c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x80;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x80);
  }
  *puVar1 = &PTR_FUN_110d18370;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  *(undefined8 *)((long)puVar1 + 0x74) = 0;
  *(undefined8 *)((long)puVar1 + 0x6c) = 0;
  return;
}



/* Entry: 10b5bd4d0; end: 10b5bd613;  */

undefined8 * FUN_10b5bd4d0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x80;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0x80);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110d18370;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010b5b1dcc(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010b5b1dcc(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar2[4] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010b5b1e10(param_1,*(undefined8 *)(param_2 + 0x28));
  }
  puVar2[5] = puVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010b5ab4a4(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  puVar2[6] = puVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x000106af6830(param_1,*(undefined8 *)(param_2 + 0x38));
  }
  puVar2[7] = puVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010b5a8a4c(param_1,*(undefined8 *)(param_2 + 0x40));
  }
  puVar2[8] = puVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010598eb08(param_1,*(undefined8 *)(param_2 + 0x48));
  }
  puVar2[9] = param_1;
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar7 = *(undefined8 *)(param_2 + 0x68);
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  uVar8 = *(undefined8 *)(param_2 + 0x6c);
  *(undefined8 *)((long)puVar2 + 0x74) = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)((long)puVar2 + 0x6c) = uVar8;
  puVar2[0xb] = uVar5;
  puVar2[10] = uVar4;
  puVar2[0xd] = uVar7;
  puVar2[0xc] = uVar6;
  return puVar2;
}



/* Entry: 10b5bd614; end: 10b5bd69b;  */

undefined8 * FUN_10b5bd614(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110d16360;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  *(undefined1 *)((long)puVar1 + 0x12) = 0;
  func_0x00010b5af99c();
  return puVar1;
}



/* Entry: 10b5bd69c; end: 10b5bd7a3;  */

ulong * FUN_10b5bd69c(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 10b5bd7a4; end: 10b5bd803;  */

void FUN_10b5bd7a4(long param_1)

{
  ulong uVar1;
  
  if ((*(int *)(param_1 + 0x24) == 3) || (*(int *)(param_1 + 0x24) == 2)) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        func_0x000107c316b0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b5bd804; end: 10b5bd87f;  */

undefined8 * FUN_10b5bd804(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110d184c8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = *(uint *)(param_3 + 0x24);
  *(uint *)((long)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  if ((uVar1 & 0xfffffffe) == 2) {
    func_0x000107c284d4(param_2,*(undefined8 *)(param_3 + 0x18));
    param_1[3] = param_2;
  }
  return param_1;
}



/* Entry: 10b5bd880; end: 10b5bd8af;  */

long FUN_10b5bd880(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5bd8b0(param_1);
  return param_1;
}



/* Entry: 10b5bd8b0; end: 10b5bd8c3;  */

void FUN_10b5bd8b0(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x24) == 3) || (*(int *)(param_1 + 0x24) == 2)) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        func_0x000107c316b0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


