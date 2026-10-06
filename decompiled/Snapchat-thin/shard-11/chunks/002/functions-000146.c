/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082b73d0; end: 1082b740b;  */

void FUN_1082b73d0(void)

{
  return;
}



/* Entry: 1082b740c; end: 1082b744b;  */

long FUN_1082b740c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1082b7730();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  return param_1;
}



/* Entry: 1082b744c; end: 1082b76fb;  */

undefined8 * FUN_1082b744c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  int *piVar1;
  code *pcVar2;
  undefined1 in_ZR;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 auStack_78 [4];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar13 = param_2[1];
  uVar6 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  piVar10 = (int *)(param_1 + 9);
  param_1[10] = 0x3ffffffff;
  piVar10[0] = -1;
  piVar10[1] = 3;
  param_1[7] = uVar15;
  param_1[6] = uVar14;
  param_1[5] = uVar13;
  param_1[4] = uVar6;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  param_1[0xc] = 0x3ffffffff;
  param_1[0xb] = 0x3ffffffff;
  puVar4 = param_2;
  func_0x0001082b7404();
  uVar3 = (uint)puVar4;
  if (uVar3 == 0) {
    func_0x0001082b77dc();
    func_0x0001082b77f0();
  }
  else {
    *(undefined1 *)((long)param_1 + 0x44) = 1;
    piVar1 = (int *)(param_3 + 1);
    uVar9 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
    piVar12 = piVar1;
    for (uVar11 = 0; in_ZR = uVar9 == uVar11, puStack_e8 = param_1, !(bool)in_ZR;
        uVar11 = uVar11 + 1) {
      uVar3 = *(uint *)(param_4 + uVar11 * 4);
      in_ZR = uVar3 == 0x24;
      if (0x23 < uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1082b76ac);
        (*pcVar2)();
      }
      auStack_78[uVar11] = *(undefined4 *)(&UNK_10df151c8 + (ulong)uVar3 * 4);
      plVar5 = *(long **)(piVar12 + -2);
      if ((plVar5 == (long *)0x0) || (in_ZR = *piVar12 == *piVar1, !(bool)in_ZR)) {
        func_0x0001082b77dc();
        func_0x0001082b77f0();
        goto LAB_1082b756c;
      }
      (**(code **)(*plVar5 + 0x18))();
      FUN_1082b33e8();
      if (((ulong)plVar5 & 1) == 0) {
        *(undefined1 *)((long)param_1 + 0x44) = 0;
      }
      piVar12 = piVar12 + 4;
    }
    FUN_1083aaea0(&uStack_e0,param_2,auStack_78);
    param_1[10] = uStack_d8;
    *(undefined8 *)piVar10 = uStack_e0;
    param_1[0xc] = uStack_c8;
    param_1[0xb] = uStack_d0;
    if (-1 < *piVar10) {
      for (lVar8 = 0; lVar8 != 0x20; lVar8 = lVar8 + 8) {
        uVar3 = *(uint *)((long)param_1 + lVar8 + 0x48);
        if (-1 < (int)uVar3) {
          param_2 = (undefined8 *)
                    (ulong)(*(ushort *)((long)param_3 + (ulong)uVar3 * 0x10 + 0xc) >>
                            (ulong)((*(uint *)((long)param_1 + lVar8 + 0x4c) & 7) << 2) & 0xf);
          func_0x0001082b77b4();
          if ((uint)param_2 == 0x61) {
            uVar7 = 3;
          }
          else {
            uVar3 = (uint)param_2 & 0xff;
            if (uVar3 == 0x62) {
              uVar7 = 2;
            }
            else if (uVar3 == 0x72) {
              uVar7 = 0;
            }
            else {
              in_ZR = uVar3 == 0x67;
              if (!(bool)in_ZR) {
                func_0x0001082b77dc();
                func_0x0001082b77f0();
                goto LAB_1082b756c;
              }
              uVar7 = 1;
            }
          }
          *(undefined4 *)((long)param_1 + lVar8 + 0x4c) = uVar7;
        }
      }
      in_ZR = 1;
      puVar4 = param_1;
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        uVar6 = *param_3;
        *param_3 = 0;
        uStack_e0 = 0;
        FUN_10827a5a4(puVar4,uVar6);
        param_2 = &uStack_e0;
        FUN_1082764bc();
        puVar4 = puVar4 + 1;
        param_3 = param_3 + 2;
      }
      *(int *)(param_1 + 8) = *piVar1;
      goto LAB_1082b7574;
    }
    func_0x0001082b77dc();
    func_0x0001082b77f0();
  }
LAB_1082b756c:
  param_2 = &uStack_e0;
  FUN_1082b777c();
LAB_1082b7574:
  func_0x0001082b77f8(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_1082b777c(&uStack_e0);
    FUN_1082b777c(puStack_e8);
    __Unwind_Resume();
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[6] = 0x10000001c;
    param_2[7] = 0;
    *(undefined8 *)((long)param_2 + 0x3d) = 0;
    param_2[10] = 0x3ffffffff;
    param_2[9] = 0x3ffffffff;
    param_2[0xc] = 0x3ffffffff;
    param_2[0xb] = 0x3ffffffff;
    return param_2;
  }
  return param_1;
}



/* Entry: 1082b76fc; end: 1082b772f;  */

void FUN_1082b76fc(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[6] = 0x10000001c;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x3d) = 0;
  param_1[10] = 0x3ffffffff;
  param_1[9] = 0x3ffffffff;
  param_1[0xc] = 0x3ffffffff;
  param_1[0xb] = 0x3ffffffff;
  return;
}



/* Entry: 1082b7730; end: 1082b777b;  */

long FUN_1082b7730(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = 0; lVar1 != 0x20; lVar1 = lVar1 + 8) {
    FUN_10827a578(param_1 + lVar1,param_2 + lVar1);
  }
  return param_1;
}



/* Entry: 1082b777c; end: 1082b77b3;  */

long FUN_1082b777c(long param_1)

{
  long lVar1;
  
  lVar1 = 0x18;
  do {
    FUN_1082764bc(param_1 + lVar1);
    lVar1 = lVar1 + -8;
  } while (lVar1 != -8);
  return param_1;
}



/* Entry: 1082b77b4; end: 1082b780b;  */

uint FUN_1082b77b4(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 6) {
    return (uint)(0x313061626772 >> ((ulong)(param_1 << 3) & 0x3f)) & 0xff;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b77dc);
  (*pcVar1)();
}



/* Entry: 1082b780c; end: 1082b786b;  */

ulong FUN_1082b780c(undefined8 param_1,float param_2,undefined8 param_3,undefined4 param_4,
                   ulong *param_5,undefined8 param_6,long param_7,ulong *param_8)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  ulong *puVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  float afStack_a8 [4];
  undefined8 uStack_98;
  ulong *puStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_38;
  
  if ((*(byte *)((long)param_5 + 0xe) >> 1 & 1) != 0) {
    *param_8 = 0;
    *(float *)(param_8 + 1) = (float)(int)param_6;
    *(float *)((long)param_8 + 0xc) = (float)(int)((ulong)param_6 >> 0x20);
    return (ulong)(uint)(float)(int)param_6;
  }
  func_0x0001083773e0();
  uVar10 = *param_5;
  param_8[1] = param_5[1];
  *param_8 = uVar10;
  uVar1 = 1;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_7;
  func_0x0001081421e0();
  uVar2 = (int)lVar3 == 1;
  if ((int)lVar3 < 2) {
    fVar7 = *(float *)(param_7 + 8);
    param_2 = *(float *)(param_7 + 0x14);
    uVar10 = CONCAT44((float)(*param_8 >> 0x20) + param_2,(float)*param_8 + fVar7);
    func_0x000108365e70();
    *(int *)param_8 = (int)uVar10;
    *(float *)((long)param_8 + 4) = param_2;
    *(float *)(param_8 + 1) = fVar7;
    *(undefined4 *)((long)param_8 + 0xc) = param_4;
    uVar1 = uVar2;
  }
  else {
    lVar3 = param_7;
    FUN_1082878d0();
    if ((int)lVar3 == 0) {
      lVar3 = param_7;
      FUN_10828e338();
      if ((int)lVar3 == 0) {
        puStack_60 = (ulong *)*param_8;
        uVar11 = param_8[1];
        uStack_58 = CONCAT44((int)((ulong)puStack_60 >> 0x20),(int)uVar11);
        uVar10 = CONCAT44((int)(uVar11 >> 0x20),(int)puStack_60);
        uStack_50 = uVar11;
        uStack_48 = uVar10;
        FUN_1083645e0(param_7,&puStack_60,&puStack_60,4);
        param_2 = (float)uVar11;
        FUN_10838ece0(param_8,&puStack_60,4);
        FUN_10827a0d8();
      }
      else {
        FUN_108376ad8(&puStack_60);
        func_0x000108142248(&puStack_60,param_8,0);
        func_0x000108142294(&puStack_60,param_7,1);
        puVar4 = puStack_60;
        FUN_1082d8734();
        uVar10 = *puVar4;
        param_8[1] = puVar4[1];
        *param_8 = uVar10;
        FUN_10837ca5c(puStack_60);
        param_7 = 0;
      }
      goto LAB_108365020;
    }
    FUN_108364ec0(param_7,param_8,param_8);
    uVar1 = uVar2;
  }
  param_7 = 1;
LAB_108365020:
  func_0x000108365ee0(uStack_38);
  if ((bool)uVar1) {
    return uVar10;
  }
  ___stack_chk_fail();
  fVar9 = (float)uVar10;
  FUN_10837ca5c(puStack_60);
  __Unwind_Resume(param_7);
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  afStack_a8[1] = 0.0;
  afStack_a8[2] = 0.0;
  pfVar6 = afStack_a8;
  afStack_a8[0] = fVar9;
  afStack_a8[3] = fVar9;
  FUN_1082ef8c0();
  FUN_1082878c8(afStack_a8);
  pfVar5 = afStack_a8 + 2;
  fVar7 = fVar9;
  FUN_1082878c8();
  func_0x000108365ee0(uStack_98);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    fVar8 = pfVar5[8] + param_2 * pfVar5[7] + pfVar5[6] * fVar7;
    fVar9 = 1.0 / fVar8;
    if (fVar8 == 0.0) {
      fVar9 = fVar8;
    }
    fVar8 = (pfVar5[5] + param_2 * pfVar5[4] + pfVar5[3] * fVar7) * fVar9;
    *pfVar6 = (pfVar5[2] + param_2 * pfVar5[1] + *pfVar5 * fVar7) * fVar9;
    pfVar6[1] = fVar8;
    return (ulong)(uint)fVar8;
  }
  return (ulong)(uint)SQRT(fVar9 * fVar7);
}



/* Entry: 1082b786c; end: 1082b7913;  */

void FUN_1082b786c(long *param_1,undefined8 *param_2)

{
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  int iStack_58;
  undefined1 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 1;
  uStack_2c = 0x3f8000003f800000;
  uStack_34 = 0x3f8000003f800000;
  puStack_90 = &uStack_50;
  uStack_98 = *param_2;
  uStack_80 = param_2[1];
  puStack_88 = &UNK_10df15258;
  uStack_78 = 0;
  uStack_68 = param_2[4];
  uStack_70 = param_2[3];
  uStack_60 = param_2[5];
  iStack_58 = (uint)*(byte *)(param_2 + 6) << 1;
  uStack_54 = 0;
  (**(code **)(*param_1 + 0x28))(param_1,&uStack_98);
  func_0x00010827ee54(&uStack_50);
  return;
}



/* Entry: 1082b7914; end: 1082b791b;  */

undefined8 FUN_1082b7914(void)

{
  return 2;
}



/* Entry: 1082b791c; end: 1082b7b7b;  */

undefined8 *** FUN_1082b791c(undefined8 ***param_1,long param_2,long param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  uint uVar6;
  long lVar7;
  undefined8 **ppuStack_50;
  undefined8 **ppuStack_48;
  
  pppuVar1 = &ppuStack_50;
  pppuVar2 = &ppuStack_50;
  pppuVar3 = &ppuStack_50;
  pppuVar4 = &ppuStack_50;
  param_1[8] = param_1;
  param_1[9] = (undefined8 **)0x1000000000;
  param_1[10] = (undefined8 **)0x0;
  param_1[0xb] = (undefined8 **)0x0;
  lVar7 = *(long *)(*(long *)(param_2 + 0x10) + 0xb8);
  uVar6 = *(uint *)(param_3 + 4);
  pppuVar5 = param_1;
  if ((uVar6 & 1) != 0) {
    func_0x0001082b7f58();
    func_0x0001082b7f18(&UNK_110a39ac0);
    func_0x0001082b7f3c();
    func_0x0001082b7f48();
    FUN_1082b7d58();
    uVar6 = *(uint *)(param_3 + 4);
    pppuVar5 = pppuVar1;
  }
  if ((uVar6 >> 5 & 1) != 0) {
    func_0x0001082b7f58();
    func_0x0001082b7f18(&UNK_110a39190);
    func_0x0001082b7f3c();
    func_0x0001082b7f48();
    FUN_1082b7d98();
    uVar6 = *(uint *)(param_3 + 4);
    pppuVar5 = pppuVar2;
  }
  if ((uVar6 >> 4 & 1) != 0) {
    func_0x0001082b7f58();
    func_0x0001082b7f18(&UNK_110a393c0);
    func_0x0001082b7f3c();
    func_0x0001082b7f48();
    FUN_1082b7dd8();
    uVar6 = *(uint *)(param_3 + 4);
    pppuVar5 = pppuVar3;
  }
  if ((uVar6 >> 6 & 1) != 0) {
    func_0x0001082b7f58();
    func_0x0001082b7f18(&UNK_110a394d8);
    func_0x0001082b7f3c();
    func_0x0001082b7f48();
    FUN_1082b7e18();
    uVar6 = *(uint *)(param_3 + 4);
    pppuVar5 = pppuVar4;
  }
  if ((uVar6 >> 1 & 1) != 0) {
    FUN_1082eb610(&ppuStack_48,param_2);
    if ((undefined8 ***)ppuStack_48 != (undefined8 ***)0x0) {
      param_1[10] = ppuStack_48;
      FUN_1082a6f8c(param_2,ppuStack_48 + 2);
      ppuStack_50 = ppuStack_48;
      ppuStack_48 = (undefined8 ***)0x0;
      func_0x0001082b7f8c();
      func_0x0001082b7f84();
    }
    pppuVar5 = &ppuStack_48;
    FUN_1082b7e58();
    uVar6 = *(uint *)(param_3 + 4);
  }
  if (((uVar6 >> 2 & 1) != 0) && ((*(ulong *)(lVar7 + 0x18) & 0xc000000200) == 0x200)) {
    func_0x0001082b7f58();
    *pppuVar5 = (undefined8 **)&PTR_FUN_110a3b3e8;
    pppuVar5[1] = (undefined8 **)0x0;
    *(undefined4 *)(pppuVar5 + 1) = 1;
    param_1[0xb] = pppuVar5;
    ppuStack_48 = (undefined8 ***)0x0;
    ppuStack_50 = pppuVar5;
    func_0x0001082b7f8c();
    func_0x0001082b7f84();
    FUN_1082b7e98(&ppuStack_48);
  }
  func_0x0001082b7f58();
  func_0x0001082b7f18(&UNK_110a39d18);
  func_0x0001082b7f3c();
  func_0x0001082b7f48();
  FUN_1082b7ed8(&ppuStack_50);
  return param_1;
}



/* Entry: 1082b7b7c; end: 1082b7c5f;  */

long * FUN_1082b7b7c(long *param_1,long *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long alStack_40 [2];
  
  plVar9 = alStack_40;
  iVar2 = (int)param_1[1];
  if (iVar2 < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    lVar7 = *param_1;
    lVar8 = *param_2;
    *param_2 = 0;
    *(long *)(lVar7 + (long)iVar2 * 8) = lVar8;
    plVar4 = param_1;
  }
  else {
    if (iVar2 == 0x7fffffff) {
      func_0x00010bdb1a68();
      uVar1 = param_3 - 3;
      if (uVar1 < 0xfffffffe) {
        param_3 = 0;
      }
      else {
        iVar2 = (int)param_2[4] + 0x40;
        FUN_10828786c();
        if (iVar2 == 0) {
          return (long *)0x0;
        }
      }
      plVar4 = (long *)0x0;
      plVar9 = (long *)param_1[8];
      lVar7 = (long)(int)param_1[9] << 3;
      do {
        if (lVar7 == 0) {
          return plVar4;
        }
        if (uVar1 < 0xfffffffe) {
          iVar2 = 0;
LAB_1082b7cf0:
          plVar5 = (long *)*plVar9;
          (**(code **)(*plVar5 + 0x30))(plVar5,param_2);
          iVar3 = (int)plVar5;
          if ((iVar3 != 0) && (iVar3 != 1 || plVar4 == (long *)0x0)) {
            if (param_4 != (int *)0x0) {
              *param_4 = iVar2;
            }
            plVar4 = (long *)*plVar9;
            if (iVar3 == 2) {
              return plVar4;
            }
          }
        }
        else {
          plVar5 = (long *)*plVar9;
          (**(code **)(*plVar5 + 0x20))(plVar5,param_2[4]);
          iVar2 = (int)plVar5;
          if (param_3 <= iVar2) goto LAB_1082b7cf0;
        }
        plVar9 = plVar9 + 1;
        lVar7 = lVar7 + -8;
      } while( true );
    }
    alStack_40[1] = 0x7fffffff;
    alStack_40[0] = 8;
    uVar6 = (ulong)(iVar2 + 1);
    FUN_10840fe24(0x3ff8000000000000);
    iVar2 = (int)param_1[1];
    lVar7 = *param_2;
    *param_2 = 0;
    plVar9[iVar2] = lVar7;
    plVar4 = plVar9;
    if (iVar2 != 0) {
      _memcpy(plVar9,*param_1,(long)iVar2 << 3);
    }
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      plVar4 = (long *)*param_1;
      _free(plVar4);
    }
    uVar6 = uVar6 >> 3;
    if (0x7ffffffe < uVar6) {
      uVar6 = 0x7fffffff;
    }
    *param_1 = (long)plVar9;
    *(uint *)((long)param_1 + 0xc) = (int)uVar6 << 1 | 1;
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + 1;
  return plVar4;
}



/* Entry: 1082b7c60; end: 1082b7d57;  */

long FUN_1082b7c60(long param_1,long param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  uVar1 = param_3 - 3;
  if (uVar1 < 0xfffffffe) {
    param_3 = 0;
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_2 + 0x20) + 0x40;
    FUN_10828786c();
    if (iVar2 == 0) {
      return 0;
    }
  }
  lVar5 = 0;
  plVar6 = *(long **)(param_1 + 0x40);
  lVar7 = (long)*(int *)(param_1 + 0x48) << 3;
  do {
    if (lVar7 == 0) {
      return lVar5;
    }
    if (uVar1 < 0xfffffffe) {
      iVar2 = 0;
LAB_1082b7cf0:
      plVar4 = (long *)*plVar6;
      (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
      iVar3 = (int)plVar4;
      if ((iVar3 != 0) && (iVar3 != 1 || lVar5 == 0)) {
        if (param_4 != (int *)0x0) {
          *param_4 = iVar2;
        }
        lVar5 = *plVar6;
        if (iVar3 == 2) {
          return lVar5;
        }
      }
    }
    else {
      plVar4 = (long *)*plVar6;
      (**(code **)(*plVar4 + 0x20))(plVar4,*(undefined8 *)(param_2 + 0x20));
      iVar2 = (int)plVar4;
      if (param_3 <= iVar2) goto LAB_1082b7cf0;
    }
    plVar6 = plVar6 + 1;
    lVar7 = lVar7 + -8;
  } while( true );
}



/* Entry: 1082b7d58; end: 1082b7d97;  */

void FUN_1082b7d58(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x0001082b7f78();
  if (param_1 != 0) {
    do {
      func_0x0001082b7f60();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x0001082b7f6c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 1082b7d98; end: 1082b7dd7;  */

void FUN_1082b7d98(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x0001082b7f78();
  if (param_1 != 0) {
    do {
      func_0x0001082b7f60();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x0001082b7f6c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 1082b7dd8; end: 1082b7e17;  */

void FUN_1082b7dd8(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x0001082b7f78();
  if (param_1 != 0) {
    do {
      func_0x0001082b7f60();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x0001082b7f6c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 1082b7e18; end: 1082b7e57;  */

void FUN_1082b7e18(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x0001082b7f78();
  if (param_1 != 0) {
    do {
      func_0x0001082b7f60();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x0001082b7f6c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 1082b7e58; end: 1082b7e97;  */

void FUN_1082b7e58(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x0001082b7f78();
  if (param_1 != 0) {
    do {
      func_0x0001082b7f60();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x0001082b7f6c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 1082b7e98; end: 1082b7ed7;  */

void FUN_1082b7e98(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x0001082b7f78();
  if (param_1 != 0) {
    do {
      func_0x0001082b7f60();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x0001082b7f6c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 1082b7ed8; end: 1082b7f17;  */

void FUN_1082b7ed8(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x0001082b7f78();
  if (param_1 != 0) {
    do {
      func_0x0001082b7f60();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x0001082b7f6c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 1082b7f18; end: 1082b7f97;  */

void FUN_1082b7f18(long param_1,long *param_2)

{
  *param_2 = param_1 + 0x10;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  return;
}



/* Entry: 1082b7f98; end: 1082b806f;  */

void FUN_1082b7f98(long param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  long *plStack_38;
  
  if ((bRam0000000113826be8 & 1) == 0) {
    iVar1 = 0x13826be8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000108320d60();
      iRam0000000113826be0 = iVar1;
      ___cxa_guard_release(0x113826be8);
    }
  }
  FUN_10827a280(&plStack_38,param_1,iRam0000000113826be0,5);
  *(undefined **)(param_1 + 0x30) = &UNK_10f483ec1;
  lVar2 = *plStack_38;
  *(undefined4 *)(lVar2 + 8) = param_2;
  *(undefined4 *)(lVar2 + 0xc) = *param_3;
  *(undefined4 *)(lVar2 + 0x10) = param_3[1];
  *(undefined4 *)(lVar2 + 0x14) = param_3[2];
  *(undefined4 *)(lVar2 + 0x18) = param_3[3];
  FUN_10827a320(&plStack_38);
  return;
}



/* Entry: 1082b8070; end: 1082b816f;  */

void FUN_1082b8070(undefined8 *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  puVar3 = (undefined8 *)0x50;
  __Znwm();
  piVar5 = (int *)(puVar3 + 1);
  *piVar5 = 1;
  *(undefined1 *)((long)puVar3 + 0xc) = 0;
  *puVar3 = &PTR_FUN_110a37188;
  FUN_1082aa5ac(puVar3 + 2,param_2);
  *(undefined4 *)(puVar3 + 9) = param_3;
  *(undefined1 *)((long)puVar3 + 0x4c) = 0;
  puVar4 = (undefined8 *)0x8;
  puStack_48 = puVar3;
  __Znwm();
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar2) {
      *piVar5 = *piVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *puVar4 = puVar3;
  FUN_108346520(&uStack_50);
  FUN_108166048(param_2 + 0x28,uStack_50);
  puStack_48 = (undefined8 *)0x0;
  *param_1 = puVar3;
  FUN_1082b91bc(0);
  FUN_1082b8170(&puStack_48);
  return;
}



/* Entry: 1082b8170; end: 1082b81bb;  */

long * FUN_1082b8170(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1082b81bc; end: 1082b828b;  */

void FUN_1082b81bc(long *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long *plVar2;
  long lStack_60;
  long lStack_58;
  
  if (*(char *)(*param_3 + 0xca) != '\x01') {
    plVar2 = *(long **)(*(long *)(param_2 + 0x10) + 0xb8);
    (**(code **)(*plVar2 + 0x28))(plVar2,*param_3 + 0x20);
    if (((ulong)plVar2 & 1) != 0) {
      lStack_60 = *param_3;
      *param_3 = 0;
      FUN_1082b22dc(&lStack_58,param_2,&lStack_60,param_4,1,1,param_7,param_5,param_6,0);
      func_0x0001082b964c();
      lVar1 = lStack_58;
      if (lStack_58 != 0) {
        lStack_58 = 0;
      }
      *param_1 = lVar1;
      func_0x0001082b9644();
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1082b828c; end: 1082b8343;  */

void FUN_1082b828c(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined2 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar5 = param_3[1];
  uVar2 = *(undefined2 *)((long)param_3 + 0xc);
  lStack_48 = *param_3;
  if (lStack_48 != 0) {
    piVar1 = (int *)(lStack_48 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_38 = lStack_48;
  FUN_1082b81bc(&uStack_40,param_2,&lStack_48,(int)lVar5,&UNK_10f483ec7,0x14,param_4);
  uVar6 = uStack_40;
  uStack_40 = 0;
  *param_1 = uVar6;
  *(int *)(param_1 + 1) = (int)lVar5;
  *(undefined2 *)((long)param_1 + 0xc) = uVar2;
  func_0x0001082b964c();
  func_0x0001082b9664();
  func_0x0001082b9644();
  return;
}



/* Entry: 1082b8344; end: 1082b8663;  */

void FUN_1082b8344(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  long *aplStack_d0 [2];
  long *plStack_c0;
  undefined1 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  
  if (param_2[1] == 0) {
    func_0x0001082b9624();
    return;
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xb8);
  FUN_10827a1fc(auStack_90);
  puVar4 = param_2;
  func_0x000108330824();
  uVar7 = param_2[5];
  FUN_1082b8664();
  uVar5 = *param_2;
  puStack_a0 = puVar4;
  uStack_98 = uVar7;
  func_0x000108383d88(uVar5);
  FUN_1082b7f98(auStack_90,uVar5,&puStack_a0);
  func_0x0001082b8674(param_5,param_2,uVar9);
  uVar5 = uVar9;
  FUN_1082b869c(uVar9,param_2);
  puStack_b8 = auStack_90;
  puStack_b0 = &uStack_58;
  puStack_a8 = param_2;
  FUN_1082a4c48(&plStack_c0,uStack_58,auStack_90,1);
  if (plStack_c0 == (long *)0x0) {
    FUN_1082b8740(aplStack_d0,uStack_58,param_2,uVar5,param_5,1,1);
    plVar8 = aplStack_d0[0];
    aplStack_d0[0] = (long *)0x0;
    plStack_c0 = plVar8;
    FUN_1082b93d8(0);
    FUN_1082b93d8(aplStack_d0[0]);
    if (plVar8 == (long *)0x0) {
      func_0x0001082b9624();
      goto LAB_1082b85d8;
    }
    FUN_1082b8874(&puStack_b8,plVar8);
  }
  func_0x0001082b95e4();
  func_0x00010828a9ac(uVar9,extraout_x8 + 0x20,uVar5);
  plVar8 = plStack_c0;
  if (((int)param_5 == 0) || (plVar6 = plStack_c0, FUN_1082b33e8(), (int)plVar6 != 0)) {
    plStack_c0 = (long *)0x0;
    if (plVar8 == (long *)0x0) {
      aplStack_d0[0] = (long *)0x0;
    }
    else {
      func_0x0001082b95e4();
      aplStack_d0[0] = extraout_x8_00;
    }
    uStack_d8 = 0;
    func_0x0001082b966c();
    if (extraout_x8_01 != 0) {
      do {
        func_0x0001082b9614();
      } while (extraout_w12 != 0);
    }
    func_0x0001082b95c0();
    func_0x0001082b9684();
    FUN_1082764bc(&uStack_d8);
    plVar8 = (long *)0x0;
  }
  else {
    if (plVar8 == (long *)0x0) {
      uStack_e8 = 0;
    }
    else {
      func_0x0001082b95e4();
      piVar1 = (int *)(extraout_x8_02 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      func_0x0001082b95e4();
      uStack_e8 = extraout_x8_03;
    }
    FUN_1082b81bc(&plStack_e0,param_1,&uStack_e8,0,&UNK_10f483edc,0x19,1);
    func_0x0001082b9644();
    if (plStack_e0 == (long *)0x0) {
      plStack_c0 = (long *)0x0;
      if (plVar8 == (long *)0x0) {
        aplStack_d0[0] = (long *)0x0;
      }
      else {
        func_0x0001082b95e4();
        aplStack_d0[0] = extraout_x8_05;
      }
      func_0x0001082b966c();
      if (extraout_x8_06 != 0) {
        do {
          func_0x0001082b9614();
        } while (extraout_w12_01 != 0);
      }
      func_0x0001082b95c0();
      func_0x0001082b9684();
      func_0x0001082b964c();
      plVar8 = (long *)0x0;
    }
    else {
      func_0x0001082a4a7c(uStack_58,plVar8);
      plVar6 = plStack_e0;
      (**(code **)(*plStack_e0 + 0x18))();
      FUN_1082b8874(&puStack_b8,plVar6);
      aplStack_d0[0] = plStack_e0;
      plStack_e0 = (long *)0x0;
      func_0x0001082b966c();
      if (extraout_x8_04 != 0) {
        do {
          func_0x0001082b9614();
        } while (extraout_w12_00 != 0);
      }
      func_0x0001082b95c0();
      func_0x0001082b9684();
      func_0x0001082b9664();
    }
    FUN_1082764bc(&plStack_e0);
  }
LAB_1082b85d8:
  FUN_1082b93d8(plVar8);
  func_0x00010827a384(auStack_90);
  return;
}



/* Entry: 1082b8664; end: 1082b869b;  */

undefined1  [16] FUN_1082b8664(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  uVar1 = (long)(int)param_2 + (long)(int)param_1;
  if ((long)uVar1 < -0x7ffffffe) {
    uVar1 = 0xffffffff80000001;
  }
  if (0x7ffffffe < (long)uVar1) {
    uVar1 = 0x7fffffff;
  }
  lVar2 = (long)(int)((ulong)param_2 >> 0x20) + (long)(int)((ulong)param_1 >> 0x20);
  if (lVar2 < -0x7ffffffe) {
    lVar2 = -0x7fffffff;
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  auVar3._8_8_ = uVar1 & 0xffffffff | lVar2 << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1082b869c; end: 1082b873f;  */

void FUN_1082b869c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *extraout_x8;
  undefined1 auStack_148 [24];
  long alStack_130 [8];
  undefined1 auStack_98 [4];
  char cStack_94;
  undefined8 *apuStack_90 [10];
  char cStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = (ulong)*(uint *)(param_2 + 0x20);
  func_0x0001082b91c8();
  uVar5 = 0;
  uVar4 = uVar2;
  FUN_10828a818(auStack_98,param_1);
  if (cStack_40 == '\x01') {
    (*(code *)*apuStack_90[0])(apuStack_90);
  }
  uVar6 = (uint)uVar2;
  if (cStack_94 == '\0') {
    uVar6 = 5;
  }
  uVar2 = (ulong)uVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail(uVar2);
  __Unwind_Resume();
  alStack_130[6] = 0;
  alStack_130[3] = 0;
  alStack_130[2] = 0;
  alStack_130[5] = 0;
  alStack_130[4] = 0;
  alStack_130[1] = 0;
  alStack_130[0] = 0;
  uVar6 = *(uint *)(uVar4 + 0x20);
  func_0x0001082b91c8();
  if ((uint)uVar5 == uVar6) {
    func_0x000108330578(alStack_130,uVar4);
LAB_1082b87a4:
    FUN_1082a4f08(extraout_x8,uVar2,alStack_130,param_4,param_5,param_6);
  }
  else {
    if (0x23 < (uint)uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b8854);
      (*pcVar1)();
    }
    func_0x0001078bdd84(auStack_148,uVar4 + 0x18,
                        *(undefined4 *)(&UNK_10df1537c + (uVar5 & 0xffffffff) * 4));
    plVar3 = alStack_130;
    func_0x00010821afec(plVar3,auStack_148);
    if ((int)plVar3 == 0) {
      func_0x0001082b9698();
    }
    else {
      FUN_1082a53bc(uVar4,(ulong)alStack_130 | 8);
      func_0x0001082b9698();
      if ((uVar4 & 1) != 0) {
        if (alStack_130[0] != 0) {
          *(undefined1 *)(alStack_130[0] + 0x59) = 2;
        }
        goto LAB_1082b87a4;
      }
    }
    *extraout_x8 = 0;
  }
  func_0x000108330548(alStack_130);
  return;
}



/* Entry: 1082b8740; end: 1082b8873;  */

void FUN_1082b8740(undefined8 *param_1,undefined8 param_2,ulong param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  uint uVar2;
  long *plVar3;
  undefined1 auStack_a8 [24];
  long alStack_90 [8];
  
  alStack_90[6] = 0;
  alStack_90[3] = 0;
  alStack_90[2] = 0;
  alStack_90[5] = 0;
  alStack_90[4] = 0;
  alStack_90[1] = 0;
  alStack_90[0] = 0;
  uVar2 = *(uint *)(param_3 + 0x20);
  func_0x0001082b91c8();
  if (param_4 == uVar2) {
    func_0x000108330578(alStack_90,param_3);
LAB_1082b87a4:
    FUN_1082a4f08(param_1,param_2,alStack_90,param_5,param_6,param_7);
  }
  else {
    if (0x23 < param_4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b8854);
      (*pcVar1)();
    }
    func_0x0001078bdd84(auStack_a8,param_3 + 0x18,
                        *(undefined4 *)(&UNK_10df1537c + (ulong)param_4 * 4));
    plVar3 = alStack_90;
    func_0x00010821afec(plVar3,auStack_a8);
    if ((int)plVar3 == 0) {
      func_0x0001082b9698();
    }
    else {
      FUN_1082a53bc(param_3,(ulong)alStack_90 | 8);
      func_0x0001082b9698();
      if ((param_3 & 1) != 0) {
        if (alStack_90[0] != 0) {
          *(undefined1 *)(alStack_90[0] + 0x59) = 2;
        }
        goto LAB_1082b87a4;
      }
    }
    *param_1 = 0;
  }
  func_0x000108330548(alStack_90);
  return;
}



/* Entry: 1082b8874; end: 1082b8913;  */

void FUN_1082b8874(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1082b8070(&uStack_28,*param_1,
                *(undefined4 *)(*(long *)(*(long *)(*(long *)param_1[1] + 0x10) + 0x10) + 0xb0));
  uStack_30 = uStack_28;
  uStack_28 = 0;
  FUN_108383de4(*(undefined8 *)param_1[2],&uStack_30);
  FUN_1082b91e4(&uStack_30);
  FUN_1082a49e8(*(undefined8 *)param_1[1],*param_1,param_2);
  FUN_1082b91e4(&uStack_28);
  return;
}



/* Entry: 1082b8914; end: 1082b8a1f;  */

void FUN_1082b8914(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  int extraout_w12;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  long *plStack_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  long *plStack_58;
  
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xb8);
  func_0x0001082b8674(param_3,param_2,uVar2);
  uVar1 = uVar2;
  FUN_1082b869c(uVar2,param_2);
  FUN_1082b8740(&plStack_58,uVar3,param_2,uVar1,param_3,param_4,param_5);
  if (plStack_58 == (long *)0x0) {
    func_0x0001082b9624();
  }
  else {
    func_0x00010828a9ac(uVar2,(long)plStack_58 + *(long *)(*plStack_58 + -0x18) + 0x20,uVar1);
    plStack_68 = plStack_58;
    plStack_58 = (long *)0x0;
    if (plStack_68 != (long *)0x0) {
      plStack_68 = (long *)((long)plStack_68 + *(long *)(*plStack_68 + -0x18));
    }
    uStack_70 = 0;
    uStack_60 = 0;
    uStack_5c = (undefined2)uVar2;
    if (plStack_68 != (long *)0x0) {
      do {
        func_0x0001082b9614();
      } while (extraout_w12 != 0);
    }
    func_0x0001082b95c0();
    func_0x0001082b9664();
    FUN_1082764bc(&uStack_70);
    FUN_1082b93d8(plStack_58);
  }
  return;
}



/* Entry: 1082b8a20; end: 1082b8a4f;  */

void FUN_1082b8a20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(long *)(param_5 + 8) != 0) {
    uStack_20 = param_1;
    uStack_1c = param_2;
    uStack_18 = param_3;
    uStack_14 = param_4;
    FUN_10828b2d8(*(long *)(param_5 + 8),&uStack_20);
  }
  return;
}



/* Entry: 1082b8a50; end: 1082b8a8f;  */

undefined8 FUN_1082b8a50(undefined8 param_1)

{
  func_0x0001082b968c();
  func_0x0001082b95f4();
  return param_1;
}



/* Entry: 1082b8a90; end: 1082b9107;  */

undefined8
FUN_1082b8a90(undefined8 param_1,undefined8 param_2,float param_3,float param_4,long param_5,
             undefined **param_6,undefined8 param_7,undefined8 *param_8,long param_9,
             undefined8 *param_10)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  long *plStack_170;
  long *plStack_168;
  long lStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  long *plStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  undefined4 uStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  int iStack_ac;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_8c;
  
  puVar1 = (undefined8 *)(param_5 + 0x20);
  lVar2 = param_5 + 0x50;
  FUN_10819a67c(param_6);
  puVar10 = puVar1;
  auVar19 = FUN_1082b8a20();
  fVar14 = auVar19._0_4_;
  fVar15 = auVar19._8_4_;
  uStack_d8 = 0;
  fVar17 = param_3;
  fVar18 = param_4;
  lStack_f0 = param_5;
  puStack_e8 = puVar1;
  lStack_e0 = lVar2;
  fStack_d0 = fVar14;
  fStack_cc = fVar15;
  fStack_c8 = param_3;
  fStack_c4 = param_4;
  if (*(char *)(param_8 + 1) == '\x01') {
    plVar13 = (long *)*param_8;
    bVar9 = plVar13 != (long *)0x0;
    if (param_9 == 0) {
      bVar6 = true;
LAB_1082b8b68:
      *param_8 = 0;
      if (plVar13 == (long *)0x0) goto LAB_1082b8be0;
      goto LAB_1082b8b98;
    }
LAB_1082b8b48:
    func_0x0001082b9654();
    if (((ulong)puVar10 & 0x1ffffffff) != 0x100000002) {
      if ((*(byte *)(param_8 + 1) & 1) == 0) {
        bVar6 = false;
        goto LAB_1082b8b78;
      }
      bVar6 = false;
      plVar13 = (long *)*param_8;
      goto LAB_1082b8b68;
    }
LAB_1082b8bec:
    *(undefined8 *)((long)param_10 + 0x24) = 0x3f8000003f800000;
    *(undefined8 *)((long)param_10 + 0x1c) = 0x3f8000003f800000;
    func_0x0001082b9654();
    if (((ulong)puVar10 & 0x1ffffffff) == 0x100000002) {
      plVar13 = (long *)0x0;
    }
    else {
      fVar18 = 1.0;
      FUN_1082963dc(&uStack_a0,auVar19._0_8_,auVar19._8_8_);
      lStack_138 = 0;
      plStack_130 = uStack_a0;
      func_0x0001082b96a8(&uStack_a0);
      plVar13 = uStack_a0;
      lVar8 = lStack_138;
      uStack_a0 = (long *)0x0;
      lStack_138 = 0;
      fVar17 = param_3;
      if (lVar8 != 0) {
        FUN_1082b95b4();
        fVar17 = param_3;
      }
      plVar7 = plStack_130;
      plStack_130 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        FUN_1082b95b4();
      }
      if (plVar13 == (long *)0x0) {
        return 0;
      }
    }
    func_0x0001082b96a0();
    if (fVar18 != 1.0) {
      uStack_98 = (long *)CONCAT44(fVar18,fVar18);
      uStack_a0 = (long *)CONCAT44(fVar18,fVar18);
      plStack_140 = plVar13;
      FUN_10829683c(&uStack_c0,&plStack_140,&uStack_a0);
      plVar13 = uStack_c0;
      plVar7 = plStack_140;
      uStack_c0 = (long *)0x0;
      plStack_140 = (long *)0x0;
joined_r0x0001082b8cac:
      if (plVar7 != (long *)0x0) {
        FUN_1082b95b4();
      }
    }
LAB_1082b8d68:
    bVar9 = false;
  }
  else {
    bVar9 = true;
    bVar6 = true;
    if (param_9 != 0) goto LAB_1082b8b48;
LAB_1082b8b78:
    puVar10 = (undefined8 *)0x0;
    if (param_6[1] == (undefined *)0x0) {
LAB_1082b8be0:
      if (!bVar6) goto LAB_1082b8bec;
      plVar13 = (long *)0x0;
LAB_1082b8d98:
      *(float *)((long)param_10 + 0x1c) = fVar14 * param_4;
      *(float *)(param_10 + 4) = param_4 * fVar15;
      *(float *)((long)param_10 + 0x24) = param_4 * param_3;
    }
    else {
      FUN_10829b838(&uStack_a0,param_6[1],&lStack_f0,param_7);
      plVar13 = uStack_a0;
      if (uStack_a0 == (long *)0x0) {
        return 0;
      }
LAB_1082b8b98:
      if (!bVar6) {
        uStack_a0 = (long *)CONCAT44(fVar15,fVar14);
        uStack_98 = (long *)CONCAT44(0x3f800000,param_3);
        plStack_f8 = plVar13;
        FUN_108296ad8(&uStack_c0,&plStack_f8,&uStack_a0);
        plStack_100 = uStack_c0;
        plVar13 = plStack_f8;
        plStack_f8 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          FUN_1082b95b4();
        }
        lStack_108 = 0;
        func_0x0001082b96a8(&uStack_c0);
        plVar13 = uStack_c0;
        lVar8 = lStack_108;
        uStack_c0 = (long *)0x0;
        lStack_108 = 0;
        if (lVar8 != 0) {
          FUN_1082b95b4();
        }
        plVar7 = plStack_100;
        plStack_100 = (long *)0x0;
        if (plVar7 != (long *)0x0) {
          FUN_1082b95b4();
        }
        if (plVar13 == (long *)0x0) {
          return 0;
        }
        func_0x0001082b96a0();
        if (fVar18 != 1.0) {
          plStack_118 = plVar13;
          uStack_c0 = (long *)CONCAT44(fVar18,fVar18);
          fStack_b8 = fVar18;
          fStack_b4 = fVar18;
          FUN_10829683c(&plStack_110,&plStack_118,&uStack_c0);
          plVar13 = plStack_110;
          plVar7 = plStack_118;
          plStack_118 = (long *)0x0;
          plStack_110 = (long *)0x0;
          goto joined_r0x0001082b8cac;
        }
        goto LAB_1082b8d68;
      }
      func_0x0001082b96a0();
      if (fVar18 == 1.0) {
        plStack_128 = plVar13;
        FUN_108296d04(&uStack_a0,&plStack_128);
        plVar13 = uStack_a0;
        plVar7 = plStack_128;
        plStack_128 = (long *)0x0;
        if (plVar7 != (long *)0x0) {
          FUN_1082b95b4();
        }
        bVar9 = false;
        goto LAB_1082b8d98;
      }
      plStack_120 = plVar13;
      FUN_108296678(&uStack_a0,&plStack_120);
      plVar13 = uStack_a0;
      plVar7 = plStack_120;
      plStack_120 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        FUN_1082b95b4();
      }
      bVar9 = false;
      *(float *)((long)param_10 + 0x1c) = fVar14;
      *(float *)(param_10 + 4) = fVar15;
      *(float *)((long)param_10 + 0x24) = param_3;
    }
    *(float *)(param_10 + 5) = param_4;
  }
  puVar12 = param_6[3];
  if (puVar12 != (undefined *)0x0) {
    if (bVar9) {
      uVar20 = FUN_1083436e4(puVar12,&fStack_d0,*puVar1,*puVar1);
      *(float *)((long)param_10 + 0x1c) = (float)uVar20 * fVar18;
      *(float *)(param_10 + 4) = fVar18 * (float)((ulong)uVar20 >> 0x20);
      *(float *)((long)param_10 + 0x24) = fVar18 * fVar17;
      *(float *)(param_10 + 5) = fVar18;
    }
    else {
      plStack_148 = plVar13;
      FUN_10829abf4(&uStack_a0,param_5,puVar12,&plStack_148,puVar1,lVar2);
      plVar13 = plStack_148;
      plStack_148 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        FUN_1082b95b4();
      }
      plVar13 = uStack_98;
      if (((ulong)uStack_a0 & 1) == 0) {
        uStack_98 = (long *)0x0;
        if (plVar13 == (long *)0x0) {
          return 0;
        }
        (**(code **)(*plVar13 + 8))(plVar13);
        return 0;
      }
    }
  }
  if ((param_6[2] != (undefined *)0x0) &&
     (FUN_108298c9c(&uStack_a0,param_6[2],&lStack_f0,param_7), plVar7 = uStack_a0,
     uStack_a0 != (long *)0x0)) {
    uStack_a0 = (long *)0x0;
    plStack_150 = plVar7;
    FUN_10827cbfc(param_10,&plStack_150);
    plVar7 = plStack_150;
    plStack_150 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      FUN_1082b95b4();
    }
    lVar2 = (long)uStack_a0;
    uStack_a0 = (long *)0x0;
    if (lVar2 != 0) {
      FUN_1082b95b4();
    }
  }
  ppuVar11 = param_6;
  FUN_10837626c();
  if (((ulong)ppuVar11 >> 0x20 & 1) == 0) {
    puVar12 = param_6[5];
    plStack_158 = plVar13;
    FUN_1082973f0(&lStack_160);
    FUN_10829b568(&uStack_a0,puVar12,&plStack_158,&lStack_160,&lStack_f0);
    plVar13 = uStack_a0;
    lVar2 = lStack_160;
    uStack_a0 = (long *)0x0;
    lStack_160 = 0;
    if (lVar2 != 0) {
      FUN_1082b95b4();
    }
    plVar7 = plStack_158;
    plStack_158 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      FUN_1082b95b4();
    }
    if (plVar13 == (long *)0x0) {
      return 0;
    }
    ppuVar11 = &PTR_PTR_110a38218;
  }
  else {
    if ((int)ppuVar11 == 3) goto LAB_1082b8f04;
    func_0x0001082b705c();
  }
  *param_10 = ppuVar11;
  uVar3 = 0;
  if (ppuVar11 == (undefined **)0x0) {
    uVar3 = *(undefined1 *)(param_10 + 3);
  }
  *(undefined1 *)(param_10 + 3) = uVar3;
LAB_1082b8f04:
  iVar4 = *(int *)(param_5 + 0x30);
  FUN_1082b9230(&uStack_a0,iVar4);
  if ((iStack_8c != 0) && (FUN_1082b9230(&uStack_c0,iVar4), iVar4 == 0x13 && iStack_ac != 1)) {
    if (plVar13 == (long *)0x0) {
      auVar5 = *(undefined1 (*) [16])((long)param_10 + 0x1c);
      auVar16 = NEON_fmov(0x3f800000,4);
      auVar19._4_4_ = -(uint)(auVar16._4_4_ < auVar5._4_4_);
      auVar19._0_4_ = -(uint)(auVar16._0_4_ < auVar5._0_4_);
      auVar19._8_4_ = -(uint)(auVar16._8_4_ < auVar5._8_4_);
      auVar19._12_4_ = -(uint)(auVar16._12_4_ < auVar5._12_4_);
      auVar19 = NEON_fmaxnm(auVar5 ^ (auVar5 ^ auVar16) & auVar19,ZEXT216(0),4);
      *(long *)((long)param_10 + 0x24) = auVar19._8_8_;
      *(long *)((long)param_10 + 0x1c) = auVar19._0_8_;
      return 1;
    }
    plStack_168 = plVar13;
    FUN_1082968bc(&uStack_a0,&plStack_168);
    plVar13 = uStack_a0;
    if (plStack_168 != (long *)0x0) {
      FUN_1082b95b4();
    }
  }
  if (plVar13 != (long *)0x0) {
    plStack_170 = plVar13;
    FUN_108288160(param_10,&plStack_170);
    plVar13 = plStack_170;
    plStack_170 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      FUN_1082b95b4();
    }
  }
  return 1;
}



/* Entry: 1082b9108; end: 1082b9153;  */

undefined8
FUN_1082b9108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  *param_4 = 0;
  func_0x0001082b968c();
  func_0x0001082b95f4();
  return param_1;
}



/* Entry: 1082b9154; end: 1082b919b;  */

undefined8 FUN_1082b9154(undefined8 param_1)

{
  FUN_1082b8a90();
  func_0x0001082b95f4();
  return param_1;
}



/* Entry: 1082b919c; end: 1082b91bb;  */

void FUN_1082b919c(long *param_1)

{
  *(undefined1 *)(*param_1 + 0xc) = 1;
  FUN_1082b8170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082b91bc; end: 1082b91e3;  */

void FUN_1082b91bc(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_1 != (int *)0x0) && (iVar1 == 1)) {
    if (*(code **)(param_1 + 2) != (code *)0x0) {
      (**(code **)(param_1 + 2))(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 4));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1082b91e4; end: 1082b922f;  */

long * FUN_1082b91e4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1082b9230; end: 1082b93b7;  */

void FUN_1082b9230(undefined8 *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  switch(param_2) {
  case 0:
    *param_1 = 0;
    param_1[1] = 0;
    goto code_r0x0001082b93ac;
  case 1:
  case 0x19:
    uVar4 = 0x800000000;
    uVar3 = 0;
    break;
  case 2:
  case 3:
    uVar4 = 5;
    uVar3 = 0x600000005;
    break;
  case 4:
  case 0x22:
  case 0x23:
    uVar3 = 0x400000004;
    uVar4 = 0x400000004;
    break;
  case 5:
  case 9:
    uVar3 = 0x800000008;
    uVar4 = 0x800000008;
    break;
  case 6:
    param_1[1] = 0x800000008;
    *param_1 = 0x800000008;
    uVar3 = 0x100000000;
    goto code_r0x0001082b9390;
  case 7:
  case 0x1d:
    uVar4 = 8;
    uVar3 = 0x800000008;
    break;
  case 8:
    uVar3 = 0x800000008;
    goto code_r0x0001082b9344;
  case 10:
  case 0xb:
    uVar4 = 0x20000000a;
    uVar3 = 0xa0000000a;
    break;
  case 0xc:
    uVar4 = 10;
    uVar3 = 0xa0000000a;
    break;
  case 0xd:
    uVar3 = 0xa0000000a;
    uVar4 = 0xa0000000a;
    break;
  case 0xe:
  case 0xf:
  case 0x1b:
    param_1[1] = 0;
    *param_1 = 0;
    uVar3 = 8;
    goto code_r0x0001082b9390;
  case 0x10:
    uVar4 = 0x1000000000;
    uVar3 = 0;
    goto code_r0x0001082b9384;
  case 0x11:
  case 0x13:
    uVar3 = 0x1000000010;
    uVar4 = 0x1000000010;
    goto code_r0x0001082b9384;
  case 0x12:
    uVar4 = 0x10;
    uVar3 = 0x1000000010;
    goto code_r0x0001082b9384;
  case 0x14:
    uVar3 = 0x2000000020;
    uVar4 = 0x2000000020;
    goto code_r0x0001082b9384;
  case 0x15:
    uVar4 = 0x1000000000;
    uVar3 = 0;
    break;
  case 0x16:
    uVar3 = 0x1000000010;
code_r0x0001082b9344:
    *param_1 = uVar3;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  case 0x17:
    uVar4 = 0;
    uVar3 = 0x1000000010;
    goto code_r0x0001082b9384;
  case 0x18:
    uVar3 = 0x1000000010;
    uVar4 = 0x1000000010;
    break;
  case 0x1a:
    uVar4 = 0x2000000000;
    uVar3 = 0;
code_r0x0001082b9384:
    param_1[1] = uVar4;
    *param_1 = uVar3;
    uVar3 = 0x200000000;
code_r0x0001082b9390:
    param_1[2] = uVar3;
    return;
  case 0x1c:
  case 0x1e:
    uVar2 = 8;
    goto code_r0x0001082b9308;
  case 0x1f:
    uVar2 = 0x10;
code_r0x0001082b9308:
    *(undefined4 *)param_1 = uVar2;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    return;
  case 0x20:
    *(undefined4 *)param_1 = 0x10;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 2;
    return;
  case 0x21:
    param_1[1] = 0;
    *param_1 = 0;
    uVar3 = 0x200000010;
    goto code_r0x0001082b9390;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b93b8);
    (*pcVar1)();
  }
  param_1[1] = uVar4;
  *param_1 = uVar3;
code_r0x0001082b93ac:
  param_1[2] = 0;
  return;
}



/* Entry: 1082b93b8; end: 1082b93d7;  */

void FUN_1082b93b8(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010827f53c();
  }
  return;
}



/* Entry: 1082b93d8; end: 1082b940f;  */

void FUN_1082b93d8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x18));
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001082b9408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1082b9410; end: 1082b943b;  */

undefined8 * FUN_1082b9410(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a37188;
  func_0x00010827a384(param_1 + 2);
  return param_1;
}



/* Entry: 1082b943c; end: 1082b944f;  */

void FUN_1082b943c(void)

{
  FUN_1082b9410();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082b9450; end: 1082b95b3;  */

void FUN_1082b9450(long param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_d0 [56];
  int iStack_98;
  undefined1 auStack_90 [64];
  undefined1 *puStack_50;
  long *plStack_48;
  
  puVar1 = auStack_d0;
  FUN_1082ad264(auStack_d0,param_1 + 0x10);
  FUN_1082aaf90();
  puStack_50 = puVar1 + 0x18;
  func_0x0001081efc58();
  for (lVar5 = 0; lVar5 < *(int *)(puVar1 + 0x14); lVar5 = lVar5 + 1) {
    plVar4 = *(long **)(*(long *)(puVar1 + 8) + lVar5 * 8);
    if (iStack_98 == (int)plVar4[4]) {
      FUN_1082ad264(auStack_90,auStack_d0);
      plStack_48 = plVar4 + 2;
      func_0x0001081efc58();
      if ((int)plVar4[1] < (int)(*(uint *)((long)plVar4 + 0xc) >> 1)) {
        FUN_1082ad264(*plVar4 + (long)(int)plVar4[1] * 0x40,auStack_90);
      }
      else {
        uVar3 = 1;
        plVar2 = plVar4;
        FUN_1082ad2e0(0x3ff8000000000000,plVar4,1);
        FUN_1082ad264(plVar2 + (long)(int)plVar4[1] * 8,auStack_90);
        FUN_1082ad290(plVar4,plVar2,uVar3);
      }
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      FUN_1081efc78(&plStack_48);
      func_0x00010827a384(auStack_90);
    }
  }
  FUN_1081efc78(&puStack_50);
  func_0x00010827a384(auStack_d0);
  return;
}



/* Entry: 1082b95b4; end: 1082b96b3;  */

void FUN_1082b95b4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082b95bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1082b96b4; end: 1082b973b;  */

undefined8
FUN_1082b96b4(long param_1,undefined8 param_2,undefined8 param_3,int *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_1082c317c(uVar1,param_3,param_2,param_5);
  if ((int)uVar1 != 0) {
    *(int *)(param_1 + 0x58) = (int)param_3;
    FUN_108287e44(param_1 + 0x20,param_2);
    if (*param_4 != 0) {
      *(undefined1 *)(param_1 + 0x38) = 0;
      func_0x00010827a458(param_1 + 0x40,param_4);
    }
    *(int *)(param_1 + 0x60) = (int)param_5;
  }
  return uVar1;
}



/* Entry: 1082b973c; end: 1082b985b;  */

void FUN_1082b973c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,float *param_6,undefined8 param_7,ulong param_8)

{
  undefined8 uVar1;
  float *pfVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  float fVar7;
  float fVar8;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (*param_6 < param_6[2]) {
    fVar7 = param_6[1];
    fVar8 = param_6[3];
    if (fVar7 < fVar8) {
      puVar5 = (&PTR_DAT_110a37218)[(param_8 & 0xffffffff) * 2];
      ppuVar6 = &PTR_DAT_110a37278 + (param_8 & 0xffffffff) * 3;
      if (puVar5 != (undefined *)0x0) {
        ppuVar6 = &PTR_DAT_110a37218 + (param_8 & 0xffffffff) * 2;
      }
      FUN_1082b985c(*(undefined8 *)(param_5 + 8));
      if (puVar5 == (undefined *)0x0) {
        FUN_1082ba064(*(undefined8 *)(param_5 + 8),param_5 + 0x18,&UNK_10df15478,param_7,param_6);
      }
      for (; puVar3 = *ppuVar6, puVar3 != (undefined *)0x0; ppuVar6 = ppuVar6 + 1) {
        uVar4 = *(undefined8 *)(param_5 + 8);
        uVar1 = param_7;
        pfVar2 = param_6;
        if (puVar5 == (undefined *)0x0) {
          FUN_10817500c(param_5 + 0x28);
          uVar1 = 0x113254e20;
          pfVar2 = &fStack_70;
          fStack_70 = fVar7;
          fStack_6c = fVar8;
          uStack_68 = param_3;
          uStack_64 = param_4;
        }
        FUN_1082ba064(uVar4,param_5 + 0x10,puVar3,uVar1,pfVar2);
      }
    }
  }
  return;
}



/* Entry: 1082b985c; end: 1082b98a3;  */

byte FUN_1082b985c(long param_1)

{
  long *plVar1;
  byte bVar2;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x28))();
  if ((char)plVar1[1] < '\x02') {
    bVar2 = *(byte *)(param_1 + 0x60);
  }
  else {
    bVar2 = 1;
  }
  return bVar2 & 1;
}



/* Entry: 1082b98a4; end: 1082b991b;  */

void FUN_1082b98a4(void)

{
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_2c = 0x3f8000003f800000;
  uStack_34 = 0x3f8000003f800000;
  ppuStack_50 = &PTR_PTR_110a34ca8;
  uStack_38 = 0;
  FUN_1082b9f8c();
  func_0x00010827ee54(&ppuStack_50);
  return;
}



/* Entry: 1082b991c; end: 1082b9c1f;  */

void FUN_1082b991c(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,long *param_6,undefined8 param_7,ulong param_8)

{
  undefined1 uVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined4 uStack_1c0;
  undefined1 uStack_1bc;
  long *plStack_1b8;
  undefined1 auStack_1b0 [14];
  byte bStack_1a2;
  byte bStack_1a0;
  int iStack_194;
  long lStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 uStack_160;
  undefined1 auStack_150 [224];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(*param_6 + 0x48) == 0) {
    bVar4 = true;
  }
  else {
    plVar5 = (long *)param_5[1];
    FUN_1082b985c();
    uVar8 = 2;
    if ((int)plVar5 == 0) {
      uVar8 = 0;
    }
    auStack_1b0[0] = 0;
    bStack_1a0 = 0;
    uVar10 = (ulong)*(byte *)((long)param_6 + 0xe) & 2;
    iVar9 = (int)uVar10;
    plVar6 = plVar5;
    if (iVar9 != 0) {
      plVar6 = (long *)auStack_1b0;
      plStack_1b8 = param_6;
      FUN_1081a0f70(auStack_1b0,param_6);
      if ((bStack_1a0 & 1) == 0) goto LAB_1082b9be0;
      bStack_1a2 = bStack_1a2 ^ 2;
      param_6 = (long *)auStack_1b0;
    }
    plStack_1b8 = param_6;
    FUN_10827e874();
    FUN_10827f320(auStack_150,param_6,plVar6,1);
    lVar13 = *param_5;
    lStack_1c8 = param_5[1];
    uStack_1f8 = *(undefined8 *)(*(long *)(lVar13 + 0x10) + 0xb8);
    plStack_1f0 = *(long **)(lStack_1c8 + 0x10);
    if (plStack_1f0 != (long *)0x0) {
      (**(code **)(*plStack_1f0 + 0x28))();
      lVar13 = *param_5;
      lStack_1c8 = param_5[1];
    }
    plVar6 = param_5 + 5;
    puStack_1d8 = auStack_150;
    lStack_1c8 = lStack_1c8 + 0x50;
    uStack_1d0 = 0;
    uStack_1bc = 0;
    plVar7 = *(long **)(lVar13 + 0x40);
    plStack_1e8 = plVar6;
    uStack_1e0 = param_7;
    uStack_1c0 = uVar8;
    FUN_108293c74(plVar7,&uStack_1f8,0,1,&iStack_194);
    bVar4 = plVar7 != (long *)0x0;
    if (plVar7 != (long *)0x0) {
      param_8 = param_8 & 0xffffffff;
      uVar1 = SUB81(plVar5,0);
      if ((iVar9 == 0) && (iStack_194 == 2)) {
        ppuVar11 = &PTR_DAT_110a37218 + param_8 * 2;
        if (*ppuVar11 == (undefined *)0x0) {
          ppuVar11 = &PTR_DAT_110a37278 + param_8 * 3;
LAB_1082b9af8:
          FUN_1082b9c20(*param_5,param_5[1],plVar7,param_5 + 3,plVar6,&UNK_10df15478,param_7,
                        auStack_150,uVar1);
          goto LAB_1082b9b1c;
        }
        bVar2 = true;
      }
      else {
        ppuVar11 = &PTR_DAT_110a37278 + (uVar10 >> 1) * 0x12 + param_8 * 3;
        if (iStack_194 == 2) goto LAB_1082b9af8;
        uStack_188 = param_5[1];
        param_1 = *param_5;
        puStack_168 = auStack_150;
        lStack_190 = param_1;
        plStack_180 = param_5 + 3;
        plStack_178 = plVar6;
        uStack_170 = param_7;
        uStack_160 = uVar1;
        (**(code **)(*plVar7 + 0x38))(plVar7,&lStack_190);
LAB_1082b9b1c:
        bVar2 = false;
      }
      for (; puVar12 = *ppuVar11, puVar12 != (undefined *)0x0; ppuVar11 = ppuVar11 + 1) {
        if (bVar2) {
          FUN_1082b9c20(*param_5,param_5[1],plVar7,param_5 + 2,plVar6,puVar12,param_7,auStack_150,
                        uVar1);
        }
        else {
          lVar13 = param_5[1];
          FUN_10817500c(plVar6);
          lStack_190 = CONCAT44(param_2,(int)param_1);
          uStack_188 = CONCAT44(param_4,param_3);
          FUN_1082ba064(lVar13,param_5 + 2,puVar12,0x113254e20,&lStack_190);
        }
      }
    }
    func_0x00010827f18c(auStack_150);
    func_0x00010819e850(auStack_1b0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail(bVar4);
LAB_1082b9be0:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1082b9be8);
  (*pcVar3)();
}



/* Entry: 1082b9c20; end: 1082b9cbb;  */

void FUN_1082b9c20(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  char param_9)

{
  undefined8 uStack_98;
  undefined ***pppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_2c = 0x3f8000003f800000;
  uStack_34 = 0x3f8000003f800000;
  ppuStack_50 = &PTR_PTR_110a34ca8;
  uStack_38 = 0;
  uStack_58 = 2;
  if (param_9 == '\0') {
    uStack_58 = 0;
  }
  pppuStack_90 = &ppuStack_50;
  uStack_54 = 0;
  uStack_98 = param_1;
  uStack_88 = param_6;
  uStack_80 = param_2;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = param_7;
  uStack_60 = param_8;
  (**(code **)(*param_3 + 0x28))(param_3,&uStack_98);
  func_0x00010827ee54(&ppuStack_50);
  return;
}



/* Entry: 1082b9cbc; end: 1082b9d6f;  */

undefined8 FUN_1082b9cbc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_40 [2];
  
  if ((*(char *)(param_2 + 0x38) == '\x02') && ((*(byte *)(param_2 + 0x3b) & 1) == 0)) {
    FUN_1082b973c(param_1,param_2,param_3,param_4);
    param_1 = 1;
  }
  else {
    FUN_108376ad8(auStack_40);
    FUN_1082d8288(param_2,auStack_40,1);
    FUN_1082b991c(param_1,auStack_40,param_3,param_4);
    FUN_10837ca5c(auStack_40[0]);
  }
  return param_1;
}



/* Entry: 1082b9d70; end: 1082b9e5b;  */

void FUN_1082b9d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 in_ZR;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong *puVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_128;
  ulong uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (((*(byte *)(param_5 + 0x38) & 1) != 0) || (*(int *)(param_5 + 0x40) != 0)) {
    uVar9 = *(undefined8 *)(param_5 + 8);
    puVar1 = &UNK_10df14cf6;
    if ((int)param_6 == 0) {
      puVar1 = &UNK_10df14d12;
    }
    FUN_10817500c(param_5 + 0x28);
    uStack_40 = CONCAT44(param_2,param_1);
    uStack_38 = CONCAT44(param_4,param_3);
    FUN_1082b98a4(uVar9,param_5 + 0x18,puVar1,0x113254e20,&uStack_40,0);
    return;
  }
  lVar3 = *(long *)(param_5 + 8);
  puVar6 = (undefined1 *)(param_5 + 0x28);
  puVar7 = &uStack_c0;
  func_0x0001082c3cc8();
  uStack_38 = extraout_x8;
  FUN_1082c22ec();
  uVar9 = *(undefined8 *)(lVar3 + 0x10);
  FUN_1082b1dfc();
  uStack_68 = 0;
  uStack_70 = uVar9;
  uStack_60 = uVar9;
  if (puVar6 != (undefined1 *)0x0) {
    puVar4 = &uStack_70;
    FUN_108287e44(puVar4,puVar6);
    if ((int)puVar4 == 0) goto LAB_1082c2488;
  }
  lVar10 = *(long *)(lVar3 + 8);
  uVar8 = *(ulong *)(*(long *)(*(long *)(lVar10 + 0x10) + 0xb8) + 0x18);
  if (((uint)uVar8 >> 0x1d & 1) == 0) {
    if ((int)uStack_68 < 1 && uStack_68._4_4_ < 1) {
      if ((int)uStack_60 < (int)uStack_70) goto LAB_1082c23dc;
      bVar2 = (uVar8 & 0xc000000) != 0;
      in_ZR = bVar2 && uStack_60._4_4_ == uStack_70._4_4_;
      if (bVar2 && uStack_60._4_4_ < uStack_70._4_4_) goto LAB_1082c23e4;
    }
    else {
LAB_1082c23dc:
      in_ZR = true;
      if ((uVar8 & 0xc000000) != 0) goto LAB_1082c23e4;
    }
    FUN_1082eed88(&uStack_c0,lVar10,&uStack_70,param_6);
    FUN_1082c493c(lVar3,&uStack_c0);
    uVar8 = uStack_c0;
    uStack_c0 = 0;
    puVar6 = (undefined1 *)puVar7;
    if (uVar8 != 0) {
      func_0x0001082c3c9c();
      puVar6 = (undefined1 *)puVar7;
    }
  }
  else {
LAB_1082c23e4:
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_b8 = 0x3f800000;
    uStack_7c = 0x3f8000003f800000;
    uStack_84 = 0x3f8000003f800000;
    ppuStack_a0 = &PTR_PTR_110a34ca8;
    uStack_88 = 0;
    in_ZR = (int)param_6 == 0;
    puVar1 = &UNK_10df14cf6;
    if ((bool)in_ZR) {
      puVar1 = &UNK_10df14d12;
    }
    FUN_10817500c(&uStack_68);
    uStack_b4 = param_2;
    uStack_b0 = param_3;
    uStack_ac = param_4;
    FUN_1082fadbc(&lStack_a8,lVar10,&ppuStack_a0,0x113254e20,&uStack_b8,puVar1);
    uStack_40 = 0;
    puVar6 = (undefined1 *)0x0;
    FUN_1082c0f08(lVar3,0,&lStack_a8,auStack_58);
    FUN_10827fb18(auStack_58);
    if (lStack_a8 != 0) {
      func_0x0001082c3c9c();
    }
    func_0x00010827ee54();
  }
LAB_1082c2488:
  func_0x0001082c3c60(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = uStack_c0;
  uStack_c0 = 0;
  if (uVar8 != 0) {
    func_0x0001082c3c9c();
  }
  func_0x0001082c3d6c();
  func_0x0001082c408c();
  uVar5 = uVar8;
  func_0x0001082c3c74();
  if ((uVar5 & 1) == 0) {
    puVar4 = (undefined8 *)CONCAT44(uStack_ac,uStack_b0);
    func_0x0001082c3cec(*(undefined8 *)(uVar8 + 8));
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    FUN_10827c39c(uVar8,1);
    FUN_1082c1b60();
    uVar9 = *(undefined8 *)(uVar8 + 8);
    uStack_128 = *puVar4;
    *puVar4 = 0;
    FUN_108308d4c(uVar8,puVar6,uVar9);
    FUN_10827f5a4(&uStack_128);
  }
  return;
}



/* Entry: 1082b9e5c; end: 1082b9e9b;  */

void FUN_1082b9e5c(void)

{
  func_0x0001082ba074();
  return;
}



/* Entry: 1082b9e9c; end: 1082b9ea7;  */

undefined1  [16] FUN_1082b9e9c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 1082b9ea8; end: 1082b9f8b;  */

void FUN_1082b9ea8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long *plStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((int)param_2[9] != 0) {
    FUN_1082771d4(param_3,param_4,0);
    uStack_30 = param_3;
    uStack_28 = param_4;
    (**(code **)(*param_2 + 0x10))();
    puVar3 = &uStack_30;
    plStack_40 = param_2;
    uStack_38 = param_4;
    FUN_10821a044(puVar3,&plStack_40);
    uVar4 = 0;
    if ((int)puVar3 == 0) {
      uVar4 = 2;
    }
    *(undefined4 *)param_1 = uVar4;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
    *(undefined1 *)((long)param_1 + 0x39) = 0;
    return;
  }
  FUN_1082771d4(param_3,param_4,0);
  plVar2 = param_2 + 3;
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_10821a044(plVar2,&uStack_30);
  if (((ulong)plVar2 & 1) == 0) {
    uVar4 = 2;
  }
  else {
    if (((*(byte *)(param_2 + 5) & 1) != 0) || ((int)param_2[6] != 0)) {
      *(undefined1 *)((long)param_1 + 0x39) = 0;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[6] = 0;
      return;
    }
    iVar1 = (int)param_2 + 0x10;
    FUN_108295d6c();
    if (iVar1 != 0) {
      plVar2 = param_2 + 3;
      func_0x000108219544(plVar2,&uStack_30);
      if ((int)plVar2 == 0) {
        FUN_10817500c(param_2 + 3);
        FUN_108278538(param_1,0);
        return;
      }
    }
    uVar4 = 1;
  }
  *(undefined4 *)param_1 = uVar4;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)((long)param_1 + 0x39) = 0;
  return;
}



/* Entry: 1082b9f8c; end: 1082ba063;  */

void FUN_1082b9f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,undefined4 *param_7,long param_8)

{
  undefined4 uVar1;
  undefined8 extraout_d2;
  undefined8 extraout_var;
  undefined1 auVar2 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_bc [52];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  FUN_1082d38bc(auStack_bc,param_7,param_6);
  auVar6._8_8_ = extraout_var;
  auVar6._0_8_ = extraout_d2;
  if (param_8 == 0) {
    uStack_88 = *param_7;
    uStack_6c = param_7[3];
    uStack_70 = (undefined4)*(undefined8 *)(param_7 + 1);
    auVar2._4_12_ = auVar6._4_12_;
    auVar2._0_4_ = uStack_70;
    uVar1 = (undefined4)((ulong)*(undefined8 *)(param_7 + 1) >> 0x20);
    auVar4._12_4_ = (undefined4)((ulong)extraout_var >> 0x20);
    auVar4._0_8_ = auVar2._0_8_;
    auVar4._8_4_ = uVar1;
    auVar3._8_8_ = auVar4._8_8_;
    auVar3._4_4_ = uStack_70;
    auVar3._0_4_ = uStack_70;
    auVar5._0_12_ = auVar3._0_12_;
    auVar5._12_4_ = uVar1;
    auVar6 = NEON_ext(auVar5,auVar5,8,1);
    auVar7._0_12_ = auVar6._0_12_;
    auVar7._12_4_ = uStack_6c;
    uStack_78 = auVar7._8_8_;
    uStack_80 = auVar6._0_8_;
    auVar6 = NEON_fmov(0x3f800000,4);
    uStack_60 = auVar6._8_8_;
    uStack_68 = auVar6._0_8_;
    uStack_58 = 0;
    uStack_84 = uStack_88;
  }
  else {
    FUN_1082d38bc(&uStack_88,param_7,param_8);
  }
  uStack_54 = 0xf;
  if (param_5 == 0) {
    uStack_54 = 0;
  }
  FUN_1082c0dd8(param_1,param_2,param_4,auStack_bc,param_3);
  return;
}



/* Entry: 1082ba064; end: 1082ba07f;  */

void FUN_1082ba064(void)

{
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_2c = 0x3f8000003f800000;
  uStack_34 = 0x3f8000003f800000;
  ppuStack_50 = &PTR_PTR_110a34ca8;
  uStack_38 = 0;
  FUN_1082b9f8c();
  func_0x00010827ee54(&ppuStack_50);
  return;
}



/* Entry: 1082ba080; end: 1082ba0d3;  */

undefined8 *
FUN_1082ba080(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110a353d0;
  param_1[1] = param_2;
  uVar2 = *param_3;
  *param_3 = 0;
  param_1[2] = uVar2;
  uVar1 = *(undefined4 *)(param_3 + 1);
  *(undefined2 *)((long)param_1 + 0x1c) = *(undefined2 *)((long)param_3 + 0xc);
  *(undefined4 *)(param_1 + 3) = uVar1;
  FUN_10828aef0(param_1 + 4,param_4);
  return param_1;
}



/* Entry: 1082ba0d4; end: 1082bad8f;  */

long * FUN_1082ba0d4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined1 in_ZR;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar9;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  uint uVar10;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  ulong uVar11;
  ulong uVar12;
  undefined4 uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 in_stack_00000050;
  ushort uStack_2e2;
  undefined8 *puStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  byte bStack_2c0;
  undefined8 uStack_2b8;
  uint uStack_2a4;
  long *plStack_2a0;
  uint uStack_294;
  long *plStack_290;
  long lStack_288;
  long *plStack_280;
  undefined1 auStack_278 [32];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  int iStack_234;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined1 auStack_1f0 [56];
  long lStack_1b8;
  undefined4 uStack_1b0;
  undefined2 uStack_1ac;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long lStack_188;
  undefined4 uStack_180;
  undefined2 uStack_17c;
  long alStack_178 [4];
  long *plStack_158;
  long lStack_150;
  undefined4 uStack_148;
  undefined2 uStack_144;
  long lStack_140;
  undefined1 auStack_138 [32];
  long *plStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char cStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_38;
  undefined8 uStack_18;
  
  func_0x0001082bfb54();
  plVar17 = param_1;
  func_0x0001082bf870();
  uVar6 = plVar17[1];
  uStack_18 = extraout_x8;
  func_0x0001082bf830();
  if ((uVar6 & 1) == 0) {
    func_0x0001082bfb20();
    lVar9 = extraout_x8_00;
    if ((bool)in_ZR) {
      FUN_10827b938();
      lVar9 = param_1[1];
    }
    if (((param_2 != (long *)0x0) &&
        (in_ZR = *(int *)(param_2[2] + 0xb0) == *(int *)(*(long *)(lVar9 + 0x10) + 0xb0),
        (bool)in_ZR)) && ((int)param_3[4] != 0)) {
      uVar11 = param_3[1];
      func_0x0001082bf978();
      uVar12 = 0;
      if (uVar6 != 0) {
        uVar12 = uVar11 / uVar6;
      }
      if (uVar11 == uVar12 * uVar6) {
        uStack_228 = *(undefined8 *)(param_1[2] + 0x90);
        lStack_230 = 0;
        lVar9 = param_3[5];
        plVar17 = param_4;
        FUN_1082b8664();
        puVar7 = &uStack_250;
        uStack_250 = plVar17;
        uStack_248 = lVar9;
        func_0x00010821b838(puVar7,&lStack_230);
        plVar17 = (long *)((ulong)param_4 >> 0x20);
        if (((ulong)puVar7 & 1) == 0) {
          uStack_60 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          lStack_288 = *param_3;
          plStack_290 = (long *)param_3[1];
          lVar9 = (long)(int)uStack_250;
          lVar15 = (long)uStack_250._4_4_;
          plStack_280 = plVar17;
          func_0x0001082bf978();
          plVar17 = (long *)(ulong)*(uint *)((ulong)&uStack_250 | 4);
          plVar14 = (long *)((ulong)uStack_250 & 0xffffffff);
          FUN_1082a0c24(&uStack_100,param_3 + 2,
                        CONCAT44(uStack_248._4_4_ - *(uint *)((ulong)&uStack_250 | 4),
                                 (int)uStack_248 - (int)uStack_250));
          FUN_10829082c(&uStack_90,&uStack_100,
                        lStack_288 + (long)plStack_290 * (lVar15 - (int)plStack_280) +
                        (long)puVar7 * (lVar9 - (int)param_4),param_3[1]);
          func_0x00010828afb8(&uStack_100);
          param_4 = plVar14;
        }
        FUN_10827ebf8(param_3,&uStack_90);
        func_0x00010827ec18(&uStack_90);
        if (*param_3 != 0) {
          in_ZR = (*(int *)((long)param_1 + 0x34) == 0) == (*(int *)((long)param_3 + 0x24) != 0);
          if (!(bool)in_ZR) {
            plVar14 = (long *)param_1[2];
            if (plVar14 != (long *)0x0) {
              do {
                func_0x0001082bf774();
              } while (extraout_w10 != 0);
            }
            plStack_108 = plVar14;
            if (((*(byte *)(plVar14 + 3) >> 3 & 1) == 0) &&
               ((**(code **)(*plVar14 + 0x10))(), ((ulong)plVar14 & 1) != 0)) {
              plStack_2a0 = param_1 + 4;
              plVar14 = (long *)plStack_108[2];
              FUN_108344004(&uStack_90,*plStack_2a0,*(int *)((long)param_1 + 0x34),param_3[2],
                            *(int *)((long)param_3 + 0x24));
              plStack_280 = (long *)CONCAT44(plStack_280._4_4_,(uint)(byte)uStack_90);
              uStack_2a4 = (uint)uStack_90._4_1_;
              uVar10 = 1;
              if ((uStack_90 & 0x10000) == 0) {
                uVar10 = (uint)uStack_90._3_1_;
              }
              uVar1 = 1;
              if ((uStack_90 & 0x100) == 0) {
                uVar1 = uVar10;
              }
              lStack_288 = CONCAT44(lStack_288._4_4_,uVar1);
              plVar16 = *(long **)(param_2[2] + 0xb8);
              plStack_290 = plVar14;
              (**(code **)(*plVar14 + 0x50))(&uStack_90,plVar14);
              iVar5 = (int)&uStack_90;
              func_0x00010828398c();
              if (cStack_38 == '\x01') {
                func_0x0001082bf768(&uStack_90);
              }
              FUN_10828a818(&uStack_90,plVar16,5,1);
              if (((((uint)lStack_288 | (uint)plStack_280 ^ 0xffffffff) & 1) == 0) &&
                 ((int)param_3[4] == 9 || (int)param_3[4] == 5)) {
                lVar9 = param_1[6];
                plVar14 = plStack_108;
                func_0x0001082bf8b4();
                (*extraout_x8_01)();
                if ((plVar14 == (long *)0x0) || ((int)lVar9 != 9 && (int)lVar9 != 5)) {
                  uStack_294 = 0;
                }
                else {
                  if (uStack_90._4_1_ != '\x01') goto LAB_1082ba3f0;
                  uStack_294 = (uint)&uStack_100;
                  uStack_100 = param_2;
                  FUN_10828fe54();
                }
              }
              else {
LAB_1082ba3f0:
                uStack_294 = 0;
              }
              plVar14 = (long *)param_1[1];
              (**(code **)(*plVar14 + 0x40))();
              if (((ulong)plVar14 & 1) == 0) {
                plVar14 = plVar16;
                (**(code **)(*plVar16 + 0x50))(plVar16,plStack_290);
                if ((int)plVar14 == 2) goto LAB_1082ba430;
                if ((int)plVar14 == 1 || (uStack_294 & 1) != 0) {
                  lVar9 = param_1[2];
                  plVar14 = (long *)0x0;
                  if (lVar9 == 0) {
LAB_1082ba6d8:
                    plVar16 = *(long **)(*(long *)(param_1[1] + 0x10) + 0xb8);
                    if (plVar14 == (long *)0x0) {
                      plVar14 = (long *)0x0;
                    }
                    else {
                      (**(code **)(*plVar14 + 0x28))();
                    }
                    (**(code **)(*plVar16 + 0x60))(plVar16,plVar14,(int)param_1[6]);
                    plVar2 = plStack_108;
                    lStack_230 = 0;
                    if (((uint)plVar16 >> 8 & 1) == 0) {
                      plVar17 = plVar16;
                      func_0x0001082bf9c0();
                      FUN_1082b8664();
                      plStack_1a0 = plStack_108;
                      plStack_108 = (long *)0x0;
                      uStack_2b8 = 0;
                      bStack_2c0 = (byte)plVar16 & 1;
                      puStack_2d0 = &UNK_10f483f11;
                      uStack_2c8 = 0x19;
                      FUN_1082b1e54(&uStack_100,param_1[1],&plStack_1a0,(int)param_1[3],0,plVar17,
                                    plVar14,1,1);
                      func_0x0001082bfaec();
                      FUN_1082bf138();
                      func_0x0001082bf8c8();
                      FUN_1082764bc(&plStack_1a0);
                      uVar12 = 0;
                      uVar6 = 0;
                    }
                    else {
                      plStack_108 = (long *)0x0;
                      plStack_198 = plVar2;
                      puStack_2d0 = (undefined *)0x0;
                      FUN_1082b22dc(&uStack_100,param_1[1],&plStack_198,(int)param_1[3],0,1,1,
                                    &UNK_10f483f2b,0x29);
                      func_0x0001082bfaec();
                      FUN_1082bf138();
                      func_0x0001082bf8c8();
                      FUN_1082764bc(&plStack_198);
                      uVar12 = (long)plVar17 << 0x20;
                      uVar6 = (ulong)param_4 & 0xffffffff;
                    }
                    lVar9 = lStack_230;
                    if (lStack_230 == 0) {
                      func_0x0001082bfa84();
                      goto LAB_1082ba430;
                    }
                    lStack_230 = 0;
                    uStack_1a8 = 0;
                    uStack_f8 = (long *)CONCAT26(uStack_f8._6_2_,(int6)param_1[3]);
                    FUN_1082764bc(&uStack_1a8);
                    uStack_100 = (long *)0x0;
                    lStack_1b8 = lVar9;
                    uStack_1b0 = (undefined4)uStack_f8;
                    uStack_1ac = uStack_f8._4_2_;
                    plStack_118 = param_2;
                    FUN_1082a72f8(&uStack_250,&plStack_118,&lStack_1b8,plStack_2a0);
                    plVar17 = uStack_250;
                    uStack_250 = (long *)0x0;
                    FUN_1082764bc(&lStack_1b8);
                    func_0x0001082bf8c8();
                    func_0x0001082bfa84();
                  }
                  else {
                    func_0x0001082bf8b4();
                    (*extraout_x8_02)();
                    if (lVar9 == 0) {
                      plVar14 = (long *)param_1[2];
                      goto LAB_1082ba6d8;
                    }
                    uVar10 = uStack_294;
                    if (iVar5 != 0) {
                      uVar10 = 1;
                    }
                    if ((uVar10 & 1) == 0) {
                      uVar13 = (undefined4)param_1[6];
                      FUN_10828a818(&uStack_100,plVar16,uVar13,1);
                      if (uStack_100._4_1_ == '\0') {
                        uVar13 = 5;
                      }
                      if (cStack_a8 == '\x01') {
                        func_0x0001082bf768(&uStack_100);
                      }
                    }
                    else {
                      uVar13 = 5;
                    }
                    uStack_110 = 0;
                    if (*plStack_2a0 != 0) {
                      do {
                        func_0x0001082bf774();
                        uStack_110 = extraout_x8_04;
                      } while (extraout_w10_01 != 0);
                    }
                    uStack_100 = (long *)param_3[5];
                    FUN_1082a0b14(&lStack_230,uVar13);
                    FUN_10810a400(&uStack_110);
                    uStack_100 = param_2;
                    FUN_1082a0b6c(auStack_138,&lStack_230);
                    puStack_2d0 = (undefined *)CONCAT35(puStack_2d0._5_3_,0x100000000);
                    FUN_1082a77bc(&plStack_118,&uStack_100,auStack_138,&UNK_10f483f11,0x19,0,1,0,0);
                    func_0x00010828afb8(auStack_138);
                    if (plStack_118 == (long *)0x0) {
LAB_1082bab40:
                      func_0x0001082bf880();
                      goto LAB_1082ba430;
                    }
                    if (uStack_294 == 0) {
                      lStack_188 = 0;
                      if (param_1[2] != 0) {
                        do {
                          func_0x0001082bf758();
                          lStack_188 = extraout_x8_06;
                        } while (extraout_w11_00 != 0);
                      }
                      uStack_180 = (undefined4)param_1[3];
                      uStack_17c = *(undefined2 *)((long)param_1 + 0x1c);
                      plVar14 = (long *)(ulong)*(uint *)((long)param_1 + 0x34);
                      func_0x0001082bf904();
                      func_0x0001082bf794(&uStack_100,&lStack_188);
                      param_1 = uStack_100;
                      uStack_100 = (long *)0x0;
                      plVar17 = &lStack_188;
                      FUN_1082764bc();
                    }
                    else {
                      lStack_150 = 0;
                      if (param_1[2] != 0) {
                        do {
                          func_0x0001082bf758();
                          lStack_150 = extraout_x8_05;
                        } while (extraout_w11 != 0);
                      }
                      uStack_148 = (undefined4)param_1[3];
                      uStack_144 = *(undefined2 *)((long)param_1 + 0x1c);
                      func_0x0001082bf904();
                      func_0x0001082bf794(&lStack_140,&lStack_150);
                      plVar14 = &lStack_140;
                      FUN_10829054c(&uStack_100,&uStack_250);
                      param_1 = uStack_100;
                      lVar9 = lStack_140;
                      uStack_100 = (long *)0x0;
                      lStack_140 = 0;
                      if (lVar9 != 0) {
                        func_0x0001082bf730();
                      }
                      plVar17 = &lStack_150;
                      FUN_1082764bc();
                      if ((int)param_3[4] == 9) {
                        plStack_158 = param_1;
                        FUN_1082bad90();
                        uStack_250 = (long *)CONCAT62(uStack_250._2_6_,(short)plVar17);
                        FUN_108296988(&uStack_100,&plStack_158,&uStack_250);
                        param_1 = uStack_100;
                        plVar17 = plStack_158;
                        plStack_158 = (long *)0x0;
                        if (plVar17 != (long *)0x0) {
                          func_0x0001082bf730();
                        }
                        func_0x0001082a0bd8(alStack_178,param_3 + 2,5);
                        FUN_10829082c(&uStack_100,alStack_178,*param_3,param_3[1]);
                        plVar14 = &uStack_100;
                        FUN_10827ebf8(param_3);
                        func_0x0001082bf940();
                        plVar17 = alStack_178;
                        func_0x00010828afb8();
                      }
                    }
                    plVar16 = plStack_118;
                    if (param_1 == (long *)0x0) {
                      plStack_118 = (long *)0x0;
                      if (plVar16 != (long *)0x0) {
                        (**(code **)(*plVar16 + 8))(plVar16);
                      }
                      goto LAB_1082bab40;
                    }
                    func_0x0001082bf9c0();
                    FUN_1082b8664();
                    uStack_248 = param_3[5];
                    uStack_250 = (long *)0x0;
                    plStack_190 = param_1;
                    uStack_100 = plVar17;
                    uStack_f8 = plVar14;
                    FUN_108287478(plVar16,&uStack_100,&uStack_250,&plStack_190);
                    plVar17 = plStack_190;
                    plStack_190 = (long *)0x0;
                    if (plVar17 != (long *)0x0) {
                      func_0x0001082bf730();
                    }
                    plVar17 = plStack_118;
                    func_0x0001082bf880();
                    uVar12 = 0;
                    uVar6 = 0;
                  }
                  FUN_108290898(auStack_1f0,param_3);
                  param_3 = plVar17;
                  FUN_1082ba0d4(plVar17,param_2,auStack_1f0,uVar6 | uVar12);
                  func_0x00010827ec18(auStack_1f0);
                  if (plVar17 != (long *)0x0) {
                    func_0x0001082bf7b0();
                  }
                }
                else {
                  lVar9 = param_1[3];
                  plVar17 = plVar16;
                  FUN_10828a790(plVar16,(int)param_1[6],plStack_108 + 4,(int)param_3[4]);
                  if ((*(byte *)((long)plVar16 + 0x1c) >> 3 & 1) == 0) {
                    plVar16 = (long *)param_3[1];
                    plVar14 = param_3 + 2;
                    FUN_108269618();
                    bVar3 = plVar16 != plVar14;
                  }
                  else {
                    bVar3 = false;
                  }
                  bVar4 = true;
                  if ((((((uint)plStack_280 | uStack_2a4 | (uint)lStack_288) & 1) == 0) &&
                      ((int)lVar9 != 1)) && (!bVar3)) {
                    bVar4 = (int)param_3[4] != (int)plVar17;
                  }
                  plStack_118 = (long *)0x0;
                  uStack_228 = 0;
                  lStack_230 = 0;
                  uStack_218 = 0;
                  uStack_220 = 0;
                  uStack_200 = 0;
                  uStack_210 = 0;
                  if (bVar4) {
                    uStack_258 = 0;
                    if (*plStack_2a0 != 0) {
                      do {
                        func_0x0001082bf774();
                        uStack_258 = extraout_x8_03;
                      } while (extraout_w10_00 != 0);
                    }
                    uStack_100 = (long *)param_3[5];
                    plStack_280 = plVar17;
                    FUN_1082a0b14(&uStack_250,plVar17);
                    FUN_10810a400(&uStack_258);
                    puVar7 = &uStack_250;
                    FUN_108269618(puVar7);
                    lVar15 = (long)puVar7 * (long)iStack_234;
                    __Znam(lVar15);
                    _bzero();
                    uStack_100 = (long *)0x0;
                    func_0x0001082a1e8c(&plStack_118,lVar15);
                    func_0x0001078ae540(&uStack_100);
                    FUN_1082a0b6c(auStack_278,&uStack_250);
                    FUN_10829082c(&uStack_100,auStack_278,plStack_118,puVar7);
                    FUN_10827ebf8(&lStack_230,&uStack_100);
                    plVar17 = plStack_280;
                    func_0x0001082bf940();
                    func_0x0001082bf8d0();
                    plVar14 = plStack_118;
                    func_0x00010828afb8(&uStack_250);
                  }
                  else {
                    plVar14 = (long *)*param_3;
                    puVar7 = (undefined8 *)param_3[1];
                  }
                  uStack_100 = (long *)0x0;
                  uStack_f8 = (long *)((ulong)uStack_f8._4_4_ << 0x20);
                  uStack_e8 = 0;
                  uStack_f0 = 0;
                  uStack_d8 = 0;
                  uStack_e0 = 0;
                  uStack_c8 = 0;
                  uStack_d0 = 0;
                  uStack_250 = param_2;
                  func_0x0001082bf824(&uStack_250,plStack_108);
                  uVar8 = 0;
                  plVar16 = param_2;
                  FUN_10828f41c(param_2,0);
                  uVar6 = param_2[0xe];
                  func_0x0001082bf9c0();
                  FUN_1082b8664();
                  func_0x00010829f940(uVar6,plStack_290,plVar16,uVar8,(int)param_1[6],plVar17,
                                      plVar14,puVar7);
                  if ((uVar6 & 1) == 0) {
                    param_3 = (long *)0x0;
                  }
                  else if (lStack_230 == 0) {
                    param_3 = (long *)0x1;
                  }
                  else {
                    FUN_10828d990(&uStack_100,&lStack_230);
                    FUN_10828cc04(param_3,&uStack_100,(int)lVar9 == 1);
                    func_0x00010827ed24(&uStack_100);
                  }
                  func_0x0001082bf980();
                  func_0x0001078ae540(&plStack_118);
                }
              }
              else {
LAB_1082ba430:
                param_3 = (long *)0x0;
              }
              in_ZR = cStack_38 == '\x01';
              if ((bool)in_ZR) {
                func_0x0001082bf768(&uStack_90);
              }
            }
            else {
              param_3 = (long *)0x0;
            }
            FUN_1082764bc(&plStack_108);
            goto LAB_1082ba164;
          }
        }
      }
    }
  }
  param_3 = (long *)0x0;
LAB_1082ba164:
  func_0x0001082bf7d8(uStack_18);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x0001082bf940();
  func_0x00010828afb8(alStack_178);
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  plVar17 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    func_0x0001082bf730();
  }
  func_0x0001082bf880();
  if (cStack_38 == '\x01') {
    func_0x0001082bf768(&uStack_90);
  }
  FUN_1082764bc(&plStack_108);
  func_0x0001082bf800();
  pcStack_2d8 = FUN_1082bad90;
  puStack_2e0 = &stack0x00000050;
  FUN_108266014(&uStack_2e2,&UNK_10f481d28);
  return (long *)(ulong)uStack_2e2;
}



/* Entry: 1082bad90; end: 1082badbb;  */

undefined2 FUN_1082bad90(void)

{
  undefined2 uStack_12;
  
  FUN_108266014(&uStack_12,&UNK_10f481d28);
  return uStack_12;
}



/* Entry: 1082badbc; end: 1082bae7f;  */

void FUN_1082badbc(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  puVar2 = auStack_70;
  uVar1 = *(ulong *)(param_1 + 8);
  uStack_38 = param_4;
  func_0x0001082bf830();
  if ((uVar1 & 1) == 0) {
    FUN_1082bae80(auStack_70,param_3,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90),&uStack_38);
    FUN_10827ed04(param_3,auStack_70);
    func_0x00010827ed24();
    if ((*param_3 != 0) && (func_0x0001082bf978(), puVar2 != (undefined1 *)0x0)) {
      uVar3 = param_3[1];
      func_0x0001082bf978();
      uVar1 = 0;
      if (puVar2 != (undefined1 *)0x0) {
        uVar1 = uVar3 / (ulong)puVar2;
      }
      if (uVar3 == uVar1 * (long)puVar2) {
        FUN_1082baf60(param_1,param_2,param_3,1,uStack_38);
      }
    }
  }
  return;
}



/* Entry: 1082bae80; end: 1082baf5f;  */

void FUN_1082bae80(undefined8 *param_1,long *param_2,undefined8 param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uVar6 = *(undefined8 *)param_4;
  lVar9 = param_2[5];
  uStack_48 = param_3;
  FUN_1082b8664();
  puVar7 = &uStack_60;
  uStack_60 = uVar6;
  uStack_58 = lVar9;
  func_0x00010821b838(puVar7,&uStack_50);
  if (((ulong)puVar7 & 1) == 0) {
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    lVar3 = (long)(int)uStack_60;
    lVar5 = (long)uStack_60._4_4_;
    iVar2 = *param_4;
    iVar4 = param_4[1];
    lVar9 = *param_2;
    lVar1 = param_2[1];
    plVar8 = param_2 + 2;
    FUN_10826b4a8(plVar8);
    *param_4 = (int)uStack_60;
    param_4[1] = uStack_60._4_4_;
    FUN_1082a0c24(auStack_80,param_2 + 2,
                  CONCAT44(uStack_58._4_4_ - uStack_60._4_4_,(int)uStack_58 - (int)uStack_60));
    FUN_10828db68(param_1,auStack_80,
                  lVar9 + lVar1 * (lVar5 - iVar4) + (long)plVar8 * (lVar3 - iVar2),param_2[1]);
    func_0x0001082bf898();
  }
  return;
}



/* Entry: 1082baf60; end: 1082bbb83;  */

ulong FUN_1082baf60(long param_1,ulong param_2,long param_3,undefined8 param_4,ulong param_5)

{
  int *piVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  code *pcVar12;
  undefined1 uVar13;
  bool bVar14;
  bool bVar15;
  long lVar16;
  long *plVar17;
  int *piVar18;
  ulong *puVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long *extraout_x8_03;
  undefined8 extraout_x8_04;
  ulong uVar22;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  long extraout_x11;
  undefined2 uVar23;
  long *plVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  undefined8 *puVar31;
  int *piVar32;
  long lVar33;
  long *plVar34;
  long *plStack_438;
  undefined1 auStack_430 [32];
  undefined8 uStack_410;
  long *plStack_408;
  long *plStack_400;
  ulong auStack_3f8 [2];
  long lStack_3e8;
  undefined4 uStack_3e0;
  undefined2 uStack_3dc;
  long *plStack_3d8;
  long lStack_3d0;
  undefined4 uStack_3c8;
  undefined2 uStack_3c4;
  long *plStack_3c0;
  undefined1 auStack_3b8 [56];
  undefined1 auStack_380 [32];
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_328;
  ulong uStack_320;
  long *plStack_318;
  undefined8 uStack_300;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [16];
  int iStack_2d0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined2 uStack_2ac;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined4 uStack_298;
  undefined2 uStack_294;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  char cStack_210;
  undefined4 uStack_1fc;
  int iStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  char cStack_98;
  undefined1 auStack_80 [4];
  char cStack_7c;
  char cStack_28;
  undefined8 uStack_10;
  
  func_0x0001082bfb54();
  lVar16 = param_1;
  func_0x0001082bf870();
  lVar16 = *(long *)(*(long *)(lVar16 + 8) + 0x20);
  uVar13 = *(char *)(lVar16 + 0x54) == '\x01';
  uStack_10 = extraout_x8;
  if ((bool)uVar13) {
    FUN_10827b938(lVar16,&UNK_10f483f55);
  }
  if (param_2 != 0) {
    plVar24 = *(long **)(param_1 + 0x10);
    if (((*(uint *)(plVar24 + 3) & 1) == 0) && (*(int *)(param_3 + 0x20) != 0)) {
      uVar28 = 0;
      uVar13 = *(int *)(param_1 + 0x34) == 0;
      if (((*(uint *)(plVar24 + 3) >> 3 & 1) != 0) ||
         ((*(int *)(param_3 + 0x24) == 0) != (bool)uVar13)) goto LAB_1082bb0d0;
      plVar17 = plVar24;
      (**(code **)(*plVar24 + 0x10))(plVar24,*(undefined8 *)(param_2 + 0x80));
      if ((int)plVar17 == 0) goto LAB_1082bb0cc;
      lVar16 = plVar24[2];
      FUN_108344004(&uStack_268,*(undefined8 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x24),
                    *(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x34));
      bVar10 = (byte)uStack_268;
      bVar11 = uStack_268._4_1_;
      bVar3 = 1;
      if ((uStack_268 & 0x10000) == 0) {
        bVar3 = uStack_268._3_1_;
      }
      bVar4 = 1;
      if ((uStack_268 & 0x100) == 0) {
        bVar4 = bVar3;
      }
      plVar34 = *(long **)(*(long *)(param_2 + 0x10) + 0xb8);
      plVar17 = plVar34;
      FUN_10828a818(auStack_80,plVar34,5,0);
      if ((((*(byte *)((long)plVar34 + 0x1d) | bVar11 ^ 0xff | bVar4) & 1) == 0) &&
         (*(int *)(param_3 + 0x20) == 9 || *(int *)(param_3 + 0x20) == 5)) {
        iVar5 = *(int *)(param_1 + 0x30);
        func_0x0001082bfac8();
        func_0x0001082bf970();
        if ((plVar17 == (long *)0x0) || ((iVar5 != 9 && iVar5 != 5 || (cStack_7c != '\x01'))))
        goto LAB_1082bb0ec;
        uVar27 = (uint)&uStack_268;
        uStack_268 = param_2;
        FUN_10828fe54();
      }
      else {
LAB_1082bb0ec:
        uVar27 = 0;
      }
      plVar17 = *(long **)(param_1 + 8);
      (**(code **)(*plVar17 + 0x40))();
      if (((ulong)plVar17 & 1) == 0) {
        plVar17 = plVar34;
        FUN_10828a5c8(plVar34,lVar16);
        uVar25 = (uint)param_4;
        if ((uVar25 == 1) && ((((uint)plVar17 ^ 1 | uVar27) & 1) != 0)) {
          uStack_278 = 0;
          uStack_280 = 0;
          uStack_270 = 0;
          uStack_268 = CONCAT35(uStack_268._5_3_,4);
          cStack_210 = '\0';
          uStack_1fc = 0;
          if (uVar27 == 0) {
            FUN_10828af38(&uStack_280,param_1 + 0x20);
            FUN_108283430(&uStack_f0,plVar24 + 4);
            puVar31 = &uStack_268;
            FUN_1082833e8(puVar31,&uStack_f0);
            if (cStack_98 == '\x01') {
              func_0x0001082bf768(&uStack_f0);
            }
            if ((uStack_268 & 0x100000000) != 0) {
              uVar23 = *(undefined2 *)(param_1 + 0x1c);
              goto LAB_1082bb4ec;
            }
            uVar28 = 0;
          }
          else {
            uStack_288 = 0;
            if (*(long *)(param_1 + 0x20) != 0) {
              do {
                func_0x0001082bf774();
                uStack_288 = extraout_x8_00;
              } while (extraout_w10 != 0);
            }
            FUN_10828adb8(&uStack_f0,5,3,&uStack_288);
            FUN_10828af38(&uStack_280,&uStack_f0);
            func_0x00010828afb8(&uStack_f0);
            FUN_10810a400(&uStack_288);
            puVar31 = &uStack_268;
            FUN_1082833e8(puVar31,auStack_80);
            uVar23 = 0x3210;
LAB_1082bb4ec:
            func_0x0001082bfac8();
            func_0x0001082bf970();
            if (puVar31 == (undefined8 *)0x0) {
              uVar26 = *(undefined4 *)(param_1 + 0x18);
            }
            else {
              uVar26 = 0;
            }
            FUN_1082a5548(&plStack_290,*(undefined8 *)(param_2 + 0x48),&uStack_268,
                          *(undefined8 *)(param_3 + 0x28),0,1,0,0,1,0);
            if (plStack_290 == (long *)0x0) {
              uVar28 = 0;
            }
            else {
              do {
                func_0x0001082bf758();
              } while (extraout_w11 != 0);
              lStack_2a0 = (long)extraout_x8_03 + *(long *)(*extraout_x8_03 + -0x18);
              uStack_2a8 = 0;
              uStack_298 = uVar26;
              uStack_294 = uVar23;
              FUN_1082764bc(&uStack_2a8);
              uStack_2b8 = 0;
              if (lStack_2a0 != 0) {
                do {
                  func_0x0001082bf758();
                  uStack_2b8 = extraout_x8_04;
                } while (extraout_w11_00 != 0);
              }
              uStack_2b0 = uStack_298;
              uStack_2ac = uStack_294;
              FUN_1082ba080(&uStack_f0,param_2,&uStack_2b8,&uStack_280);
              FUN_1082764bc(&uStack_2b8);
              FUN_1082beb00(&uStack_2f0,param_3);
              FUN_1082beb00(&uStack_328,&uStack_2f0);
              if (uVar27 != 0) {
                func_0x0001082a0bd8(auStack_380,auStack_2e0,5);
                FUN_10828db68(&plStack_360,auStack_380,uStack_2f0,uStack_2e8);
                FUN_10827ed04(&uStack_328,&plStack_360);
                func_0x00010827ed24(&plStack_360);
                func_0x00010828afb8(auStack_380);
              }
              FUN_1082beb00(auStack_3b8,&uStack_328);
              puVar31 = &uStack_f0;
              FUN_1082badbc(puVar31,param_2,auStack_3b8,0);
              puVar20 = auStack_3b8;
              func_0x00010827ed24();
              if (((ulong)puVar31 & 1) == 0) {
LAB_1082bb8c0:
                uVar28 = 0;
              }
              else {
                func_0x0001082bfac8();
                func_0x0001082bf970();
                plVar24 = plStack_290;
                lVar16 = lStack_2a0;
                if (puVar20 == (undefined1 *)0x0) {
                  plStack_290 = (long *)0x0;
                  if (plVar24 != (long *)0x0) {
                    plVar24 = (long *)((long)plVar24 + *(long *)(*plVar24 + -0x18));
                  }
                  plStack_408 = plVar24;
                  FUN_1082bbb84(&plStack_360,param_1,&plStack_408,0,uStack_300,param_5);
                  plVar24 = plStack_360;
                  FUN_10828ea04(&plStack_360);
                  FUN_1082764bc(&plStack_408);
                  if (plVar24 == (long *)0x0) goto LAB_1082bb8c0;
                }
                else {
                  if (uVar27 == 0) {
                    lStack_2a0 = 0;
                    lStack_3e8 = lVar16;
                    uStack_3e0 = uStack_298;
                    uStack_3dc = uStack_294;
                    func_0x0001082bf904();
                    func_0x0001082bf794(&plStack_360,&lStack_3e8);
                    plVar17 = plStack_360;
                    plStack_360 = (long *)0x0;
                    plVar24 = &lStack_3e8;
                    FUN_1082764bc(plVar24);
                  }
                  else {
                    lStack_2a0 = 0;
                    lStack_3d0 = lVar16;
                    uStack_3c8 = uStack_298;
                    uStack_3c4 = uStack_294;
                    func_0x0001082bf904();
                    func_0x0001082bf794(&plStack_3c0,&lStack_3d0);
                    FUN_1082906bc(&plStack_360,auStack_3f8,&plStack_3c0);
                    plVar17 = plStack_360;
                    plVar24 = plStack_3c0;
                    plStack_360 = (long *)0x0;
                    plStack_3c0 = (long *)0x0;
                    if (plVar24 != (long *)0x0) {
                      func_0x0001082bf730();
                    }
                    func_0x0001082bf868();
                    if (iStack_2d0 == 9) {
                      plStack_3d8 = plVar17;
                      FUN_1082bad90();
                      auStack_3f8[0] = CONCAT62(auStack_3f8[0]._2_6_,(short)plVar24);
                      FUN_108296988(&plStack_360,&plStack_3d8,auStack_3f8);
                      plVar17 = plStack_360;
                      plVar24 = plStack_3d8;
                      if (plStack_3d8 != (long *)0x0) {
                        func_0x0001082bf730();
                      }
                    }
                  }
                  if (plVar17 == (long *)0x0) goto LAB_1082bb8c0;
                  func_0x0001082bfac8();
                  func_0x0001082bf970();
                  plStack_360 = (long *)0x0;
                  uStack_358 = uStack_300;
                  FUN_1082b8664();
                  plStack_400 = plVar17;
                  auStack_3f8[0] = param_5;
                  FUN_108287478(plVar24,&plStack_360,auStack_3f8,&plStack_400);
                  plVar24 = plStack_400;
                  plStack_400 = (long *)0x0;
                  if (plVar24 != (long *)0x0) {
                    func_0x0001082bf730();
                  }
                }
                uVar28 = 1;
              }
              func_0x00010827ed24(&uStack_328);
              func_0x00010827ed24(&uStack_2f0);
              FUN_10828f560(&uStack_f0);
              FUN_1082764bc(&lStack_2a0);
            }
            func_0x00010827aaa0(&plStack_290);
          }
          if (cStack_210 == '\x01') {
            func_0x0001082bf768(&uStack_268);
          }
          func_0x00010828afb8(&uStack_280);
        }
        else {
          iVar5 = *(int *)(param_3 + 0x20);
          plVar17 = plVar34;
          (**(code **)(*plVar34 + 0x58))(plVar34,*(undefined4 *)(param_1 + 0x30),plVar24 + 4,iVar5);
          iVar6 = *(int *)(param_1 + 0x18);
          bVar2 = ((bVar11 | bVar10 | bVar4) & 1) != 0;
          bVar14 = iVar5 != (int)plVar17;
          bVar15 = iVar6 == 1;
          uVar28 = plVar34[3];
          uVar22 = (ulong)(uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU));
          if (((uVar28 >> 0x21 & 1) == 0) || (bVar2 || (bVar15 || bVar14))) {
            lVar16 = 0;
            piVar1 = (int *)(param_3 + 0x2c);
            for (uVar29 = uVar22; uVar29 != 0; uVar29 = uVar29 - 1) {
              if (bVar2 || (bVar15 || bVar14)) {
LAB_1082bb228:
                func_0x0001082a0bd8(&uStack_268,piVar1 + -7,plVar17);
                puVar31 = &uStack_268;
                FUN_108269618();
                lVar16 = lVar16 + (long)puVar31 * (long)*piVar1;
                func_0x00010828afb8(&uStack_268);
              }
              else if ((uVar28 >> 0x21 & 1) == 0) {
                piVar32 = *(int **)(piVar1 + -9);
                piVar18 = piVar1 + -7;
                FUN_108269618();
                if (piVar32 != piVar18) goto LAB_1082bb228;
              }
              piVar1 = piVar1 + 0xe;
            }
            if (lVar16 == 0) goto LAB_1082bb29c;
            FUN_1083464d4(&plStack_360,lVar16);
            lVar16 = plStack_360[3];
          }
          else {
LAB_1082bb29c:
            lVar16 = 0;
            plStack_360 = (long *)0x0;
          }
          plVar34 = plStack_360;
          uStack_268 = 0;
          iStack_f8 = 0;
          FUN_1082bf15c(&uStack_268,param_4);
          bVar9 = true;
          for (uVar29 = 0; uVar29 != uVar22; uVar29 = uVar29 + 1) {
            if (bVar2 || (bVar15 || bVar14)) {
LAB_1082bb2e4:
              uVar21 = 0;
              if (*(long *)(param_1 + 0x20) != 0) {
                do {
                  func_0x0001082bf774();
                  uVar21 = extraout_x8_01;
                } while (extraout_w10_00 != 0);
              }
              lVar33 = param_3 + uVar29 * 0x38;
              uStack_f0 = *(undefined8 *)(lVar33 + 0x28);
              uStack_410 = uVar21;
              FUN_1082a0b14(&uStack_2f0,plVar17);
              FUN_10810a400(&uStack_410);
              puVar19 = &uStack_2f0;
              FUN_108269618(puVar19);
              func_0x0001082a0b6c(auStack_430,&uStack_2f0);
              FUN_10829082c(&uStack_f0,auStack_430,lVar16,puVar19);
              func_0x00010828afb8(auStack_430);
              FUN_10828cc04(&uStack_f0,lVar33,iVar6 == 1);
              plVar34 = plStack_360;
              uStack_328 = uStack_f0;
              uStack_320 = uStack_e8;
              if (plStack_360 != (long *)0x0) {
                do {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plStack_360,0x10);
                  if (bVar8) {
                    *(int *)plStack_360 = (int)*plStack_360 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              plStack_318 = plStack_360;
              if ((long)iStack_f8 <= (long)uVar29) goto LAB_1082bb92c;
              FUN_1082bbd00(uStack_268 + uVar29 * 0x18,&uStack_328);
              FUN_1082beaf4(plStack_318);
              lVar16 = lVar16 + (long)puVar19 * (long)uStack_c8._4_4_;
              func_0x00010827ec18(&uStack_f0);
              func_0x00010828afb8(&uStack_2f0);
            }
            else {
              if ((uVar28 >> 0x21 & 1) == 0) {
                lVar33 = param_3 + uVar29 * 0x38;
                lVar30 = *(long *)(lVar33 + 8);
                lVar33 = lVar33 + 0x10;
                FUN_108269618();
                if (lVar30 != lVar33) goto LAB_1082bb2e4;
              }
              puVar31 = (undefined8 *)(param_3 + uVar29 * 0x38);
              uStack_f0 = *puVar31;
              uStack_e8 = puVar31[1];
              uVar21 = 0;
              if (puVar31[6] != 0) {
                do {
                  func_0x0001082bf774();
                  uVar21 = extraout_x8_02;
                } while (extraout_w10_01 != 0);
              }
              uStack_e0 = uVar21;
              if ((long)iStack_f8 <= (long)uVar29) goto LAB_1082bb92c;
              FUN_1082bbd00(uStack_268 + uVar29 * 0x18,&uStack_f0);
              FUN_1082beaf4(uStack_e0);
              bVar9 = (bool)(bVar9 & puVar31[6] != 0);
            }
          }
          uVar28 = *(ulong *)(param_2 + 0x40);
          do {
            func_0x0001082bf774();
          } while (extraout_w10_02 != 0);
          uVar22 = param_5 & 0xffffffff | extraout_x11 << 0x20;
          uVar21 = *(undefined8 *)(param_3 + 0x28);
          plStack_438 = plVar24;
          FUN_1082b8664(uVar22,uVar21);
          FUN_108293b60(uVar28,&plStack_438,uVar22,uVar21,plVar17,*(undefined4 *)(param_1 + 0x30),
                        uStack_268,param_4);
          func_0x0001082bfa7c();
          if ((uVar28 & 1) != 0) {
            if (1 < (int)uVar25) {
              plVar17 = plVar24;
              (**(code **)(*plVar24 + 0x18))();
              *(undefined4 *)((long)plVar17 + 0xc) = 2;
            }
            if (!bVar9) {
              uStack_f0 = 0;
              uStack_e8 = uStack_e8 & 0xffffffff00000000;
              uStack_d8 = 0;
              uStack_e0 = 0;
              uStack_c8 = 0;
              uStack_d0 = 0;
              uStack_b8 = 0;
              uStack_c0 = 0;
              uStack_2f0 = param_2;
              func_0x0001082bf824(&uStack_2f0,plVar24);
            }
          }
          FUN_1082bf218(&uStack_268);
          FUN_1082beaf4(plVar34);
        }
      }
      else {
        uVar28 = 0;
      }
      uVar13 = cStack_28 == '\x01';
      if ((bool)uVar13) {
        func_0x0001082bf768(auStack_80);
      }
      goto LAB_1082bb0d0;
    }
  }
LAB_1082bb0cc:
  uVar28 = 0;
LAB_1082bb0d0:
  func_0x0001082bf7d8(uStack_10);
  if ((bool)uVar13) {
    return uVar28;
  }
  ___stack_chk_fail();
LAB_1082bb92c:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x1082bb930);
  (*pcVar12)();
}



/* Entry: 1082bbb84; end: 1082bbcff;  */

void FUN_1082bbb84(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 extraout_x8;
  int iVar12;
  int extraout_w11;
  uint uVar13;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar10 = (uint)param_4;
  uVar7 = (int)param_6 - (uVar10 & (int)uVar10 >> 0x1f);
  iVar9 = (uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU)) - (uVar7 & (int)uVar7 >> 0x1f);
  uVar13 = (uint)((ulong)param_4 >> 0x20);
  uStack_50 = param_4;
  if ((int)(uVar7 | uVar10) < 0) {
    uStack_50 = CONCAT44(uVar13,iVar9);
  }
  iVar3 = *(int *)(*(long *)(param_2 + 0x10) + 0x90);
  iVar4 = *(int *)(*param_3 + 0x90);
  uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  uVar10 = (int)((ulong)param_6 >> 0x20) - (uVar13 & (int)uVar13 >> 0x1f);
  iVar8 = (uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU)) - (uVar10 & (int)uVar10 >> 0x1f);
  if ((int)(uVar10 | uVar13) < 0) {
    uStack_50 = CONCAT44(iVar8,(int)uStack_50);
  }
  iVar5 = *(int *)(*(long *)(param_2 + 0x10) + 0x94);
  iVar6 = *(int *)(*param_3 + 0x94);
  uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
  iVar11 = (int)param_5;
  iVar2 = iVar11;
  if (iVar4 <= iVar11) {
    iVar2 = iVar4;
  }
  iVar1 = (uVar7 - iVar9) + iVar2;
  iVar12 = (int)((ulong)param_5 >> 0x20);
  uStack_48 = param_5;
  if (iVar4 < iVar11 || iVar3 < iVar1) {
    iVar9 = (iVar9 - uVar7) + iVar3;
    if (iVar1 <= iVar3) {
      iVar9 = iVar2;
    }
    uStack_48 = CONCAT44(iVar12,iVar9);
  }
  iVar9 = iVar12;
  if (iVar6 <= iVar12) {
    iVar9 = iVar6;
  }
  iVar3 = (uVar10 - iVar8) + iVar9;
  if (iVar6 < iVar12 || iVar5 < iVar3) {
    iVar4 = (iVar8 - uVar10) + iVar5;
    if (iVar3 <= iVar5) {
      iVar4 = iVar9;
    }
    uStack_48 = CONCAT44(iVar4,(int)uStack_48);
  }
  iVar9 = (int)&uStack_50;
  FUN_10821a6d8();
  if (iVar9 == 0) {
    FUN_1082b8664(CONCAT44(uVar10,uVar7),
                  CONCAT44(uStack_48._4_4_ - uStack_50._4_4_,(int)uStack_48 - (int)uStack_50));
    uStack_58 = 0;
    if (*param_3 != 0) {
      do {
        func_0x0001082bf758();
        uStack_58 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_1082bdde0(param_1,param_2,&uStack_58,uStack_50,uStack_48);
    func_0x0001082bf8f4();
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 1082bbd00; end: 1082bbd27;  */

undefined8 * FUN_1082bbd00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  FUN_108262b24(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1082bbd28; end: 1082bc3c7;  */

void FUN_1082bbd28(ulong param_1,ulong param_2,undefined8 *param_3,uint *param_4,ulong param_5,
                  ulong param_6,code *param_7,long param_8)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x9;
  int extraout_w10;
  undefined8 extraout_x10;
  int extraout_w12;
  ulong unaff_x19;
  uint uVar9;
  long lVar10;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar11;
  ulong unaff_x25;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulong uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  ulong auStack_110 [7];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [88];
  char cStack_58;
  long alStack_40 [6];
  undefined8 uStack_10;
  
  func_0x0001082bfb54();
  func_0x0001082bf870();
  uStack_10 = extraout_x8;
  if (param_2 == 0) {
    uStack_160 = 0;
    func_0x0001082bf968();
    func_0x0001082bfb14();
    param_2 = unaff_x22;
    param_5 = unaff_x25;
    param_6 = unaff_x19;
    uVar4 = param_1;
    goto joined_r0x0001082bbeac;
  }
  uVar4 = *(ulong *)(param_1 + 0x10);
  unaff_x23 = param_1;
  if ((uVar4 != 0) && (func_0x0001082bf83c(), uVar4 != 0)) {
    in_ZR = *(char *)(uVar4 + 10) == '\x01';
    if ((bool)in_ZR) {
      uStack_168 = 0;
      func_0x0001082bf968();
      uVar4 = uStack_168;
      uStack_168 = 0;
      goto joined_r0x0001082bbeac;
    }
    func_0x0001082bfb34();
    if ((extraout_w8 >> 3 & 1) != 0) {
      uStack_170 = 0;
      func_0x0001082bf968();
      func_0x0001082bfad4();
      goto joined_r0x0001082bbeac;
    }
  }
  uVar4 = (ulong)*(uint *)(param_3 + 1);
  FUN_1082bc3c8();
  if ((int)uVar4 != 0) {
    puVar5 = param_4;
    func_0x00010821a0c0();
    if (((puVar5 == (uint *)param_3[2]) && (*(int *)(param_1 + 0x18) != 1)) &&
       (*(int *)(param_1 + 0x34) == *(int *)((long)param_3 + 0xc))) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      FUN_108343f98(uVar6,*param_3);
      uVar9 = (uint)uVar6 ^ 1;
    }
    else {
      uVar9 = 1;
    }
    FUN_108283324(auStack_b0,*(long *)(param_1 + 0x10) + 0x20);
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0xb8);
    FUN_10828a790(uVar6,*(undefined4 *)(param_1 + 0x30),auStack_b0,uVar4);
    uVar13 = (uint)uVar6;
    if (uVar13 == 0) {
      uStack_180 = 0;
      func_0x0001082bf8a0();
      param_6 = uStack_180;
      uStack_180 = 0;
      goto LAB_1082bc1a0;
    }
    func_0x0001082bc3e4();
    func_0x0001082bc3e4();
    uVar3 = *(uint *)(param_1 + 0x30);
    func_0x0001082bc3e4();
    if (((uint)uVar4 & (uVar13 ^ 0xffffffff) & uVar3) != 0) {
      uStack_188 = 0;
      func_0x0001082bf8a0();
      param_6 = uStack_188;
      uStack_188 = 0;
      goto LAB_1082bc1a0;
    }
    uVar13 = *param_4;
    uVar4 = (ulong)param_4[1];
    if (uVar9 == 0) {
      param_6 = 0;
    }
    else {
      FUN_1082a0a90(auStack_110,param_3);
      func_0x0001082a0bd8(&lStack_158,auStack_110,*(undefined4 *)(param_1 + 0x30));
      func_0x0001082bf880();
      FUN_1082bc400(auStack_110,param_1,&lStack_158,0,*(undefined8 *)param_4,
                    *(undefined8 *)(param_4 + 2),param_5,param_6);
      param_6 = auStack_110[0];
      if (auStack_110[0] == 0) {
        lStack_190 = 0;
        func_0x0001082bf8a0();
        lVar10 = lStack_190;
        lStack_190 = 0;
        if (lVar10 != 0) {
          func_0x0001082bf730();
        }
      }
      else {
        uVar4 = 0;
        uVar13 = 0;
      }
      func_0x0001082bf8d0();
      param_1 = param_6;
      if (param_6 == 0) goto LAB_1082bc1a8;
    }
    uVar6 = param_3[2];
    param_5 = (ulong)uVar13 | uVar4 << 0x20;
    FUN_1082b8664();
    uStack_1a0 = param_5;
    uStack_198 = uVar6;
    if (*(char *)(*(long *)(param_1 + 0x10) + 0xcb) == '\x01') {
      lStack_158 = 0;
      (*param_7)(param_8,&lStack_158);
      lVar10 = lStack_158;
      lStack_158 = 0;
      if (lVar10 == 0) goto LAB_1082bc1a0;
      func_0x0001082bf730();
      goto LAB_1082bc1a0;
    }
    uVar11 = (ulong)*(uint *)(param_3 + 1);
    lVar10 = *(long *)(param_2 + 0x98);
    uVar4 = uVar11;
    FUN_1082bc3c8(uVar11);
    plVar7 = alStack_40;
    FUN_1082bc508(plVar7,param_1,uVar4,&uStack_1a0);
    iVar12 = (int)((ulong)uVar6 >> 0x20);
    iVar14 = (int)(param_5 >> 0x20);
    if (alStack_40[0] != 0) {
      func_0x0001082bfa38();
      *plVar7 = (long)param_7;
      plVar7[1] = param_8;
      plVar7[2] = CONCAT44(iVar12 - iVar14,(int)uVar6 - (int)param_5);
      plVar7[3] = lVar10;
      FUN_1082beb3c(plVar7 + 4,alStack_40);
      lStack_158 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_148 = 0;
      uStack_120 = 0;
      lStack_128 = 0;
      pcStack_140 = FUN_1082bebac;
      plStack_130 = plVar7;
      auStack_110[0] = param_2;
      func_0x0001082bf824(auStack_110,*(undefined8 *)(param_1 + 0x10));
      goto LAB_1082bc198;
    }
    uStack_b8 = CONCAT44(iVar12 - iVar14,(int)uVar6 - (int)param_5);
    uVar4 = (ulong)*(uint *)(param_1 + 0x34);
    uStack_c8 = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      do {
        func_0x0001082bf9b0();
        uStack_b8 = extraout_x8_00;
        uVar4 = extraout_x9;
        uStack_c8 = extraout_x10;
      } while (extraout_w12 != 0);
    }
    uStack_d0 = 0;
    uStack_c0 = uVar11 | uVar4 << 0x20;
    FUN_10810a400(&uStack_d0);
    uVar4 = param_2;
    if ((bRam000000011372a630 & 1) == 0) goto LAB_1082bc1f0;
    goto LAB_1082bc0b0;
  }
  uStack_178 = 0;
  func_0x0001082bf968();
  uVar4 = uStack_178;
  uStack_178 = 0;
joined_r0x0001082bbeac:
  param_1 = unaff_x23;
  if (uVar4 != 0) {
    func_0x0001082bf730();
  }
  while (func_0x0001082bf7d8(uStack_10), !(bool)in_ZR) {
    ___stack_chk_fail();
LAB_1082bc1f0:
    iVar12 = 0x1372a630;
    ___cxa_guard_acquire();
    uVar4 = param_2;
    if (iVar12 != 0) {
      uRam000000011372a628 = 0;
      ___cxa_guard_release(0x11372a630);
    }
LAB_1082bc0b0:
    puVar8 = (undefined8 *)0x80;
    __Znwm();
    uVar1 = uRam000000011372a628;
    *puVar8 = &PTR_FUN_110a373a8;
    puVar8[0xd] = puVar8 + 1;
    puVar8[0xe] = 0x800000000;
    *(undefined4 *)(puVar8 + 0xf) = uVar1;
    FUN_1082a0a90(auStack_110,&uStack_c8);
    FUN_10828d3a4(&lStack_158,auStack_110);
    func_0x0001082bf880();
    uVar6 = 0;
    if (lStack_128 != 0) {
      do {
        func_0x0001082bf774();
        uVar6 = extraout_x8_01;
      } while (extraout_w10 != 0);
    }
    uStack_d8 = uVar6;
    FUN_1082bc920(puVar8,&uStack_d8,CONCAT44(uStack_14c,uStack_150));
    FUN_1082beaf4(uStack_d8);
    FUN_108290898(auStack_110,&lStack_158);
    param_2 = param_1;
    FUN_1082ba0d4(param_1,uVar4,auStack_110,param_5);
    func_0x0001082bf980();
    if ((param_2 & 1) == 0) {
      puStack_118 = (undefined8 *)0x0;
      func_0x0001082bfa24();
    }
    else {
      puStack_118 = puVar8;
      func_0x0001082bfa24();
      puVar8 = (undefined8 *)0x0;
    }
    puVar2 = puStack_118;
    puStack_118 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      func_0x0001082bf730();
    }
    func_0x0001082bf988();
    if (puVar8 != (undefined8 *)0x0) {
      func_0x0001082bf7b0();
    }
    FUN_10810a400(&uStack_c8);
LAB_1082bc198:
    func_0x0001082bef60(alStack_40);
LAB_1082bc1a0:
    if (param_6 != 0) {
      func_0x0001082bf784();
    }
LAB_1082bc1a8:
    in_ZR = cStack_58 == '\x01';
    if ((bool)in_ZR) {
      func_0x0001082bf768(auStack_b0);
    }
  }
  return;
}



/* Entry: 1082bc3c8; end: 1082bc3ff;  */

undefined4 FUN_1082bc3c8(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x1b) {
    return *(undefined4 *)(&UNK_10df157e8 + (ulong)param_1 * 4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082bc3e4);
  (*pcVar1)();
}



/* Entry: 1082bc400; end: 1082bc507;  */

void FUN_1082bc400(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  long lStack_58;
  
  uStack_60 = *(undefined8 *)(param_2 + 8);
  FUN_1082a0b6c(auStack_80);
  func_0x0001082bf888(&lStack_58,&uStack_60,auStack_80,1,1,0,
                      *(undefined1 *)(*(long *)(param_2 + 0x10) + 0xcb),param_4);
  func_0x0001082bf898();
  if (lStack_58 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_1082bdf60(param_2,lStack_58,0,*(undefined8 *)(*(long *)(lStack_58 + 0x10) + 0x90),param_5,
                  param_6,param_7,param_8);
    lVar1 = lStack_58;
    if ((param_2 & 1) == 0) {
      *param_1 = 0;
      lStack_58 = 0;
      if (lVar1 != 0) {
        func_0x0001082bf730();
      }
    }
    else {
      *param_1 = lStack_58;
    }
  }
  return;
}



/* Entry: 1082bc508; end: 1082bc91f;  */

void FUN_1082bc508(undefined8 *param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  bool bVar3;
  uint uVar4;
  long lVar5;
  int **ppiVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 *puVar13;
  int extraout_w11;
  int extraout_w12;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  ulong uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [32];
  undefined8 uStack_120;
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  int *piStack_d8;
  undefined8 auStack_d0 [9];
  int aiStack_88 [6];
  int *piStack_70;
  undefined8 uStack_68;
  
  piVar11 = param_2;
  puVar12 = param_3;
  func_0x0001082bf870();
  lVar5 = *(long *)(piVar11 + 2);
  uStack_68 = extraout_x8;
  func_0x0001082bf848();
  ppiVar6 = (int **)0x0;
  if ((lVar5 != 0) &&
     (((ppiVar6 = *(int ***)(param_2 + 4), ppiVar6 == (int **)0x0 ||
       (func_0x0001082bf83c(), ppiVar6 == (int **)0x0)) ||
      (in_ZR = *(char *)((long)ppiVar6 + 10) == '\x01', !(bool)in_ZR)))) {
    uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 2) + 0x10) + 0xb8);
    piVar10 = (int *)(ulong)(uint)param_2[0xc];
    puVar12 = (undefined8 *)(*(long *)(param_2 + 4) + 0x20);
    FUN_10828a790();
    puVar13 = param_3;
    piVar11 = piVar10;
    func_0x0001082bc3e4();
    uVar8 = uVar7;
    func_0x0001082bc3e4();
    ppiVar6 = (int **)(ulong)(uint)param_2[0xc];
    func_0x0001082bc3e4();
    in_ZR = ((uint)puVar13 & ((uint)uVar8 ^ 0xffffffff) & (uint)ppiVar6) == 0;
    if ((((bool)in_ZR) &&
        (lVar15 = *(long *)(*(long *)(*(long *)(param_2 + 2) + 0x10) + 0xb8),
        *(char *)(lVar15 + 0x1b) < '\0')) && (piVar10 != (int *)0x0)) {
      uVar8 = uVar7;
      func_0x0001082beab0();
      lVar15 = *(long *)(lVar15 + 0x50);
      uVar14 = (lVar15 + (long)(int)uVar8 * (long)(param_4[2] - *param_4)) - 1U & -lVar15;
      piVar11 = (int *)(uVar14 * (long)(param_4[3] - param_4[1]));
      puVar12 = (undefined8 *)0x4;
      FUN_1082af050(&piStack_d8,*(undefined8 *)(lVar5 + 0x80),piVar11,4,2,0);
      if (piStack_d8 == (int *)0x0) {
        param_1[5] = 0;
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        uStack_e8 = *(undefined8 *)(param_4 + 2);
        uStack_f0 = *(undefined8 *)param_4;
        iVar1 = param_2[6];
        if (iVar1 == 1) {
          iVar2 = *(int *)(*(long *)(param_2 + 4) + 0x94);
          uStack_f0 = CONCAT44(iVar2 - param_4[3],*param_4);
          uStack_e8 = CONCAT44(iVar2 - param_4[1],param_4[2]);
LAB_1082bc6bc:
          do {
            func_0x0001082bf9b0();
            auStack_d0[0] = extraout_x9;
          } while (extraout_w12 != 0);
        }
        else {
          auStack_d0[0] = 0;
          if (*(long *)(param_2 + 4) != 0) goto LAB_1082bc6bc;
        }
        do {
          func_0x0001082bf758();
        } while (extraout_w11 != 0);
        puVar12 = &uStack_f0;
        FUN_108293884();
        FUN_10826b598(auStack_f8);
        FUN_1082764bc(auStack_d0);
        piVar11 = piStack_d8;
        *param_1 = 0;
        param_1[5] = 0;
        piStack_d8 = (int *)0x0;
        FUN_10828fbc8(param_1);
        bVar3 = (int)param_3 != (int)uVar7;
        in_ZR = bVar3 || iVar1 == 1;
        if (bVar3 || iVar1 == 1) {
          uStack_120 = 0;
          func_0x0001082bf958(param_4[2],auStack_118,uVar7);
          FUN_10810a400(&uStack_120);
          uStack_148 = 0;
          func_0x0001082bf958(auStack_140,param_3);
          FUN_10810a400(&uStack_148);
          puVar9 = auStack_140;
          FUN_108269618();
          param_1[1] = puVar9;
          FUN_1082a0b6c(auStack_190,auStack_140);
          FUN_1082a0b6c(auStack_170,auStack_118);
          param_4 = (int *)auStack_d0;
          uStack_150 = uVar14;
          FUN_1082bf4d0(param_4,auStack_190);
          func_0x0001082bfa38();
          *(undefined ***)param_4 = &PTR_FUN_110a37408;
          piVar11 = (int *)auStack_d0;
          FUN_1082bf4d0(param_4 + 2);
          in_ZR = (int *)(param_1 + 2) == aiStack_88;
          piStack_70 = param_4;
          if (!(bool)in_ZR) {
            piStack_70 = (int *)param_1[5];
            in_ZR = piStack_70 == (int *)(param_1 + 2);
            if ((bool)in_ZR) {
              piStack_70 = param_4;
              func_0x0001082bf8b4();
              piVar11 = aiStack_88;
              (*extraout_x8_00)();
              (**(code **)(*(long *)param_1[5] + 0x20))();
              param_1[5] = piStack_70;
              piStack_70 = aiStack_88;
            }
            else {
              param_1[5] = param_4;
            }
          }
          func_0x0001082bef88(aiStack_88);
          FUN_1082beacc(auStack_d0);
          FUN_1082beacc(auStack_190);
          func_0x00010828afb8(auStack_140);
          func_0x00010828afb8(auStack_118);
        }
        else {
          param_1[1] = uVar14;
        }
      }
      ppiVar6 = &piStack_d8;
      FUN_10826b598();
      goto LAB_1082bc5c4;
    }
  }
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
LAB_1082bc5c4:
  func_0x0001082bf7d8(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if ((int)piVar11 != 0) {
    func_0x000104bd46a0();
    __ZdlPv(param_4);
    FUN_1082beacc(auStack_d0);
    FUN_1082beacc(auStack_190);
    func_0x00010828afb8(auStack_140);
    func_0x00010828afb8(auStack_118);
    func_0x0001082bef60(param_1);
    ppiVar6 = &piStack_d8;
    FUN_10826b598();
  }
  func_0x0001082bf890();
  uVar4 = *(uint *)(ppiVar6 + 0xe);
  uVar14 = (ulong)uVar4;
  if ((int)uVar4 < (int)(*(uint *)((long)ppiVar6 + 0x74) >> 1)) {
    piVar10 = ppiVar6[0xd] + (long)(int)uVar4 * 6;
    piVar11[0] = 0;
    piVar11[1] = 0;
    *(undefined8 *)piVar10 = *(undefined8 *)piVar11;
    piVar10[2] = 0;
    piVar10[3] = 0;
    *(undefined8 **)(piVar10 + 4) = puVar12;
  }
  else {
    piVar10 = piVar11;
    FUN_1082bee48();
    puVar13 = (undefined8 *)(uVar14 + (long)*(int *)(ppiVar6 + 0xe) * 0x18);
    piVar11[0] = 0;
    piVar11[1] = 0;
    *puVar13 = *(undefined8 *)piVar11;
    puVar13[1] = 0;
    puVar13[2] = puVar12;
    FUN_1082bee90(ppiVar6 + 0xd,uVar14,piVar10);
    uVar4 = *(uint *)(ppiVar6 + 0xe);
  }
  *(uint *)(ppiVar6 + 0xe) = uVar4 + 1;
  return;
}



/* Entry: 1082bc920; end: 1082bc9af;  */

void FUN_1082bc920(long param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  uVar2 = (ulong)uVar1;
  if ((int)uVar1 < (int)(*(uint *)(param_1 + 0x74) >> 1)) {
    uVar5 = *param_2;
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x68) + (long)(int)uVar1 * 0x18);
    *param_2 = 0;
    *puVar3 = uVar5;
    puVar3[1] = 0;
    puVar3[2] = param_3;
  }
  else {
    puVar3 = param_2;
    FUN_1082bee48();
    uVar5 = *param_2;
    puVar4 = (undefined8 *)(uVar2 + (long)*(int *)(param_1 + 0x70) * 0x18);
    *param_2 = 0;
    *puVar4 = uVar5;
    puVar4[1] = 0;
    puVar4[2] = param_3;
    FUN_1082bee90(param_1 + 0x68,uVar2,puVar3);
    uVar1 = *(uint *)(param_1 + 0x70);
  }
  *(uint *)(param_1 + 0x70) = uVar1 + 1;
  return;
}



/* Entry: 1082bc9b0; end: 1082bdc8f;  */

void FUN_1082bc9b0(long param_1,long *param_2,ulong param_3,uint param_4,long *param_5,long *param_6
                  ,long *param_7,undefined8 param_8,undefined4 param_9,undefined4 param_10,
                  undefined8 param_11,undefined8 param_12)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint extraout_w8;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  ulong extraout_x8_02;
  long *extraout_x8_03;
  undefined4 *puVar14;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  ulong extraout_x8_08;
  undefined8 extraout_x8_09;
  undefined8 extraout_x8_10;
  undefined1 *extraout_x8_11;
  undefined1 *extraout_x8_12;
  long *extraout_x9;
  long *plVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  long *unaff_x19;
  int iVar16;
  long *unaff_x22;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uStack_6e0;
  undefined1 *puStack_6c0;
  undefined1 auStack_698 [56];
  undefined1 auStack_660 [56];
  undefined1 auStack_628 [56];
  undefined1 auStack_5f0 [56];
  undefined1 auStack_5b8 [32];
  long *aplStack_598 [7];
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  long lStack_530;
  undefined1 auStack_528 [48];
  long lStack_4f8;
  long *aplStack_4f0 [6];
  long lStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  long *plStack_4a8;
  long *plStack_4a0;
  undefined4 uStack_498;
  undefined2 uStack_494;
  long *plStack_490;
  long *plStack_488;
  long lStack_480;
  long lStack_478;
  undefined8 uStack_470;
  undefined4 uStack_468;
  undefined2 uStack_464;
  long lStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined4 uStack_440;
  undefined2 uStack_43c;
  long lStack_438;
  long *plStack_430;
  long *plStack_428;
  undefined8 uStack_420;
  undefined4 uStack_418;
  undefined2 uStack_414;
  long *plStack_410;
  long lStack_408;
  undefined1 auStack_400 [40];
  long lStack_3d8;
  undefined1 auStack_3d0 [32];
  long *plStack_3b0;
  undefined1 auStack_3a8 [32];
  undefined1 *puStack_388;
  int *piStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 auStack_368 [32];
  undefined1 auStack_348 [32];
  undefined1 *puStack_328;
  int *piStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined4 uStack_2f8;
  undefined2 uStack_2f4;
  long lStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  undefined4 uStack_2d8;
  undefined2 uStack_2d4;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  long lStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_234;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  long *plStack_220;
  ulong uStack_218;
  long *plStack_210;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined8 uStack_1dc;
  undefined4 uStack_1d4;
  long *plStack_1d0;
  undefined4 uStack_1c8;
  undefined2 uStack_1c4;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long alStack_180 [5];
  undefined8 uStack_158;
  long alStack_150 [5];
  undefined8 uStack_128;
  long alStack_120 [5];
  undefined8 uStack_f8;
  long alStack_f0 [5];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  
  func_0x0001082bf870();
  uStack_98 = extraout_x8;
  if (param_2 == (long *)0x0) {
    lStack_2b8 = 0;
    func_0x0001082bf7f8();
    lVar6 = lStack_2b8;
    lStack_2b8 = 0;
    param_2 = unaff_x22;
    param_6 = unaff_x19;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
    if ((lVar6 == 0) || (func_0x0001082bf83c(), lVar6 == 0)) {
LAB_1082bca64:
      in_ZR = *(char *)(*(long *)(param_1 + 0x10) + 0xcb) == '\x01';
      if (!(bool)in_ZR) {
        iVar3 = (int)*param_6;
        iVar16 = *(int *)((long)param_6 + 4);
        plVar7 = param_6;
        func_0x00010821a0c0();
        in_ZR = plVar7 == param_7;
        if ((bool)in_ZR) {
          uVar8 = *(ulong *)(param_1 + 0x20);
          FUN_108343f98(uVar8,*param_5);
          if (*(long *)(param_1 + 0x10) != 0) {
            do {
              func_0x0001082bf758();
            } while (extraout_w11 != 0);
            uStack_2d8 = *(undefined4 *)(param_1 + 0x18);
            uStack_2d4 = *(undefined2 *)(param_1 + 0x1c);
            plStack_2e0 = extraout_x8_00;
            if ((uVar8 & 1) == 0) goto LAB_1082bcb24;
            plVar7 = extraout_x8_00;
            (**(code **)(*extraout_x8_00 + 0x18))();
            plVar15 = plStack_2e0;
            if (plVar7 == (long *)0x0) goto LAB_1082bcdc4;
            goto LAB_1082bcbfc;
          }
          plStack_2e0 = (long *)0x0;
          func_0x0001082bfb00();
          if ((uVar8 & 1) == 0) goto LAB_1082bcb24;
          plVar15 = (long *)0x0;
LAB_1082bcdc4:
          plStack_2e0 = (long *)0x0;
          uStack_2f8 = uStack_2d8;
          uStack_2f4 = uStack_2d4;
          plStack_300 = plVar15;
          FUN_1082b28ac(&plStack_1d0,*(undefined8 *)(param_1 + 8),&plStack_300,0,*param_6,param_6[1]
                        ,0,1);
          func_0x0001082bfa98();
          func_0x0001082bf8ec();
          FUN_1082764bc(&plStack_300);
          if (plStack_2e0 != (long *)0x0) {
            iVar16 = 0;
            iVar3 = 0;
            goto LAB_1082bcbfc;
          }
          lStack_308 = 0;
          func_0x0001082bf7f8();
          lVar6 = lStack_308;
          lStack_308 = 0;
          if (lVar6 != 0) {
            func_0x0001082bf730();
          }
        }
        else {
          plStack_2e0 = (long *)0x0;
          if (*(long *)(param_1 + 0x10) != 0) {
            do {
              func_0x0001082bf758();
              plStack_2e0 = extraout_x8_01;
            } while (extraout_w11_00 != 0);
          }
          func_0x0001082bfb00();
LAB_1082bcb24:
          uVar8 = (ulong)*(uint *)(param_1 + 0x34);
          plStack_220 = (long *)0x0;
          if (*param_5 != 0) {
            do {
              func_0x0001082bf758();
              uVar8 = extraout_x8_02;
              plStack_220 = extraout_x9;
            } while (extraout_w11_01 != 0);
          }
          uStack_2e8 = 0;
          uStack_218 = uVar8 << 0x20 | 4;
          plStack_210 = param_7;
          FUN_10810a400(&uStack_2e8);
          FUN_1082a0a90(&plStack_1d0,&plStack_220);
          FUN_1082bc400(&lStack_270,param_1,&plStack_1d0,0,*param_6,param_6[1],param_8,param_9);
          func_0x00010828afb8(&plStack_1d0);
          lVar6 = lStack_270;
          if (lStack_270 == 0) {
            lStack_2f0 = 0;
            func_0x0001082bf7f8();
            lVar9 = lStack_2f0;
            lStack_2f0 = 0;
            if (lVar9 != 0) goto LAB_1082bcbec;
          }
          else {
            plStack_1d0 = (long *)0x0;
            if (*(long *)(lStack_270 + 0x10) != 0) {
              do {
                func_0x0001082bf758();
                plStack_1d0 = extraout_x8_03;
              } while (extraout_w11_02 != 0);
            }
            uStack_1c8 = *(undefined4 *)(lVar6 + 0x18);
            uStack_1c4 = *(undefined2 *)(lVar6 + 0x1c);
            func_0x0001082bfa98();
            func_0x0001082bf8ec();
            iVar3 = 0;
            iVar16 = 0;
            lVar9 = lVar6;
LAB_1082bcbec:
            func_0x0001082bf730(lVar9);
          }
          FUN_10810a400(&plStack_220);
          param_6 = (long *)0x0;
          if (lVar6 != 0) {
LAB_1082bcbfc:
            piStack_320 = (int *)0x0;
            uStack_318 = 0x200000001;
            uStack_310 = param_7;
            plStack_1d0 = param_2;
            func_0x0001082bf998(auStack_348);
            func_0x0001082bf73c(&puStack_328,&plStack_1d0,auStack_348);
            func_0x00010828afb8(auStack_348);
            if (param_4 == 0) {
              param_6 = (long *)0x0;
            }
            else {
              plStack_220 = param_2;
              func_0x0001082bf998(auStack_368);
              func_0x0001082bf73c(&plStack_1d0,&plStack_220,auStack_368);
              param_6 = plStack_1d0;
              plStack_1d0 = (long *)0x0;
              func_0x00010828afb8(auStack_368);
            }
            if (piStack_320 != (int *)0x0) {
              do {
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piStack_320,0x10);
                if (bVar4) {
                  *piStack_320 = *piStack_320 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            uStack_370 = CONCAT44(uStack_310._4_4_ / 2,(int)uStack_310 / 2);
            piStack_380 = piStack_320;
            uStack_378 = uStack_318;
            plStack_1d0 = param_2;
            func_0x0001082bf990(auStack_3a8);
            func_0x0001082bf73c(&puStack_388,&plStack_1d0,auStack_3a8);
            func_0x00010828afb8(auStack_3a8);
            plStack_1d0 = param_2;
            func_0x0001082bf990(auStack_3d0);
            func_0x0001082bf73c(&plStack_3b0,&plStack_1d0,auStack_3d0);
            func_0x00010828afb8(auStack_3d0);
            in_ZR = param_6 == (long *)0x0;
            uVar1 = 0;
            if ((bool)in_ZR) {
              uVar1 = param_4;
            }
            if ((((puStack_328 == (undefined1 *)0x0) || (puStack_388 == (undefined1 *)0x0)) ||
                (plStack_3b0 == (long *)0x0)) || (uVar1 != 0)) {
              lStack_3d8 = 0;
              func_0x0001082bf7f8();
              lVar6 = lStack_3d8;
              lStack_3d8 = 0;
joined_r0x0001082bcd84:
              if (lVar6 != 0) {
                func_0x0001082bf730();
              }
            }
            else {
              in_ZR = (uint)param_3 == 0x1b;
              if ((uint)param_3 < 0x1c) {
                puVar14 = (undefined4 *)(&PTR_DAT_113256048)[param_3 & 0xffffffff];
                uVar21 = *puVar14;
                uStack_a8 = *(undefined8 *)(puVar14 + 3);
                uStack_b0 = *(undefined8 *)(puVar14 + 1);
                uVar17 = puVar14[5];
                uVar20 = puVar14[6];
                uStack_c0 = *(undefined8 *)(puVar14 + 7);
                uStack_b8 = puVar14[9];
                uVar18 = *(undefined8 *)(puVar14 + 10);
                uVar19 = puVar14[0xc];
                uStack_6e0 = *(undefined8 *)(puVar14 + 0xd);
              }
              else {
                uVar17 = 0;
                uVar18 = 0;
                uStack_6e0 = 0;
                uStack_b0 = 0;
                uStack_a8 = 0;
                uVar19 = 0x3f800000;
                uStack_c0 = 0;
                uVar21 = 0x3f800000;
                uVar20 = 0x3f800000;
                uStack_b8 = 0;
              }
              FUN_10814bdfc(auStack_400,(float)iVar3,(float)iVar16);
              uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0xb8);
              uVar8 = (ulong)*(uint *)(puStack_328 + 0x30);
              FUN_10828a790(uVar10,uVar8,*(long *)(puStack_328 + 0x10) + 0x20,1);
              if ((int)uVar10 == 0) {
                lStack_408 = 0;
                func_0x0001082bf7f8();
                lVar6 = lStack_408;
                lStack_408 = 0;
                goto joined_r0x0001082bcd84;
              }
              uVar10 = *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0xb8) + 0x18);
              alStack_f0[0] = 0;
              uStack_c8 = 0;
              alStack_120[0] = 0;
              uStack_f8 = 0;
              alStack_150[0] = 0;
              uStack_128 = 0;
              alStack_180[0] = 0;
              uStack_158 = 0;
              for (lVar6 = 0; (int)lVar6 != 0x3c; lVar6 = lVar6 + 4) {
                *(undefined4 *)((long)&plStack_1d0 + lVar6) = 0;
              }
              bVar5 = -1 < (int)uVar10;
              bVar4 = bVar5 || uVar8 == 0;
              uStack_188 = uStack_a8;
              uStack_190 = uStack_b0;
              uStack_420 = 0;
              in_ZR = bVar4;
              uStack_194 = uVar21;
              if (plStack_2e0 != (long *)0x0) {
                do {
                  func_0x0001082bf758();
                  uStack_420 = extraout_x8_04;
                } while (extraout_w11_03 != 0);
              }
              uStack_418 = uStack_2d8;
              uStack_414 = uStack_2d4;
              func_0x0001082bf794(&plStack_410,&uStack_420,*(undefined4 *)(param_1 + 0x34),
                                  auStack_400);
              FUN_1082764bc(&uStack_420);
              plStack_428 = plStack_410;
              plStack_410 = (long *)0x0;
              func_0x0001082bf7a0(&plStack_220,&plStack_428,&plStack_1d0);
              FUN_10829718c();
              plVar15 = plStack_220;
              plVar7 = plStack_410;
              plStack_220 = (long *)0x0;
              plStack_410 = plVar15;
              if (plVar7 != (long *)0x0) {
                func_0x0001082bf730();
                plVar7 = plStack_220;
                plStack_220 = (long *)0x0;
                if (plVar7 != (long *)0x0) {
                  func_0x0001082bf730();
                }
              }
              plVar7 = plStack_428;
              plStack_428 = (long *)0x0;
              if (plVar7 != (long *)0x0) {
                func_0x0001082bf730();
              }
              plStack_430 = plStack_410;
              plStack_410 = (long *)0x0;
              FUN_1082bdc90(puStack_328,&plStack_430);
              plVar7 = plStack_430;
              plStack_430 = (long *)0x0;
              if (plVar7 != (long *)0x0) {
                func_0x0001082bf730();
              }
              if (bVar4) {
LAB_1082bcff4:
                if (param_4 != 0) {
                  uStack_448 = 0;
                  if (plStack_2e0 != (long *)0x0) {
                    do {
                      func_0x0001082bf758();
                      uStack_448 = extraout_x8_06;
                    } while (extraout_w11_04 != 0);
                  }
                  uStack_440 = uStack_2d8;
                  uStack_43c = uStack_2d4;
                  func_0x0001082bf794(&plStack_2b0,&uStack_448,*(undefined4 *)(param_1 + 0x34),
                                      auStack_400);
                  FUN_1082764bc(&uStack_448);
                  plStack_450 = plStack_2b0;
                  plStack_2b0 = (long *)0x0;
                  FUN_1082bdc90(param_6,&plStack_450);
                  plVar7 = plStack_450;
                  plStack_450 = (long *)0x0;
                  if (plVar7 != (long *)0x0) {
                    func_0x0001082bf730();
                  }
                  if (!bVar5 && uVar8 != 0) {
                    uStack_268 = *(undefined8 *)(param_6[2] + 0x90);
                    lStack_270 = 0;
                    func_0x0001082bf8fc(&plStack_220,param_6);
                    plVar7 = alStack_120;
                    FUN_1082bdcfc(plVar7,&plStack_220);
                    func_0x0001082bf9a8();
                    if (alStack_120[0] == 0) {
                      lStack_458 = 0;
                      func_0x0001082bf7f8();
                      lVar6 = lStack_458;
                      lStack_458 = 0;
                      if (lVar6 != 0) {
                        func_0x0001082bf730();
                      }
                      func_0x0001082bfabc();
                      goto joined_r0x0001082bd658;
                    }
                  }
                  func_0x0001082bfabc();
                  if (plVar7 != (long *)0x0) {
                    func_0x0001082bf730();
                  }
                }
                func_0x000108363fe4(0x40000000,0x40000000,auStack_400);
                for (lVar6 = 0; in_ZR = (int)lVar6 == 0x3c, !(bool)in_ZR; lVar6 = lVar6 + 4) {
                  *(undefined4 *)((long)&plStack_220 + lVar6) = 0;
                }
                uStack_1dc = uStack_c0;
                uStack_1d4 = uStack_b8;
                uStack_470 = 0;
                uStack_1e4 = uVar17;
                uStack_1e0 = uVar20;
                if (plStack_2e0 != (long *)0x0) {
                  do {
                    func_0x0001082bf758();
                    uStack_470 = extraout_x8_07;
                  } while (extraout_w11_05 != 0);
                }
                uStack_468 = uStack_2d8;
                uStack_464 = uStack_2d4;
                func_0x0001082bf920(&lStack_460,&uStack_470,*(undefined4 *)(param_1 + 0x34));
                FUN_1082764bc(&uStack_470);
                lStack_478 = lStack_460;
                lStack_460 = 0;
                func_0x0001082bf7a0(&lStack_270,&lStack_478,&plStack_220);
                FUN_10829718c();
                lVar9 = lStack_270;
                lVar6 = lStack_460;
                lStack_270 = 0;
                lStack_460 = lVar9;
                if (lVar6 != 0) {
                  func_0x0001082bf730();
                  lVar6 = lStack_270;
                  lStack_270 = 0;
                  if (lVar6 != 0) {
                    func_0x0001082bf730();
                  }
                }
                lVar6 = lStack_478;
                lStack_478 = 0;
                if (lVar6 != 0) {
                  func_0x0001082bf730();
                }
                lStack_480 = lStack_460;
                lStack_460 = 0;
                FUN_1082bdc90(puStack_388,&lStack_480);
                lVar6 = lStack_480;
                lStack_480 = 0;
                if (lVar6 != 0) {
                  func_0x0001082bf730();
                }
                if (bVar4) {
LAB_1082bd1f4:
                  plStack_4a0 = plStack_2e0;
                  for (lVar6 = 0; in_ZR = (int)lVar6 == 0x3c, !(bool)in_ZR; lVar6 = lVar6 + 4) {
                    *(undefined4 *)((long)&lStack_270 + lVar6) = 0;
                  }
                  uStack_228 = uStack_6e0;
                  plStack_2e0 = (long *)0x0;
                  uStack_498 = uStack_2d8;
                  uStack_494 = uStack_2d4;
                  uStack_234 = uVar18;
                  uStack_22c = uVar19;
                  func_0x0001082bf920(&plStack_490,&plStack_4a0,*(undefined4 *)(param_1 + 0x34));
                  FUN_1082764bc(&plStack_4a0);
                  plStack_4a8 = plStack_490;
                  plStack_490 = (long *)0x0;
                  func_0x0001082bf7a0(&plStack_2b0,&plStack_4a8,&lStack_270);
                  FUN_10829718c();
                  plVar15 = plStack_2b0;
                  plVar7 = plStack_490;
                  plStack_2b0 = (long *)0x0;
                  plStack_490 = plVar15;
                  if (plVar7 != (long *)0x0) {
                    func_0x0001082bf730();
                    func_0x0001082bfabc();
                    if (plVar7 != (long *)0x0) {
                      func_0x0001082bf730();
                    }
                  }
                  plVar7 = plStack_4a8;
                  plStack_4a8 = (long *)0x0;
                  if (plVar7 != (long *)0x0) {
                    func_0x0001082bf730();
                  }
                  plStack_4b0 = plStack_490;
                  plStack_490 = (long *)0x0;
                  FUN_1082bdc90(plStack_3b0,&plStack_4b0);
                  plVar7 = plStack_4b0;
                  plStack_4b0 = (long *)0x0;
                  if (plVar7 != (long *)0x0) {
                    func_0x0001082bf730();
                  }
                  if (bVar4) {
                    func_0x0001082bf998(aplStack_4f0);
                    FUN_10828d3a4(&plStack_2b0,aplStack_4f0);
                    func_0x00010828afb8(aplStack_4f0);
                    func_0x0001082bf990(auStack_528);
                    FUN_10828d3a4(aplStack_4f0,auStack_528);
                    func_0x00010828afb8(auStack_528);
                    func_0x0001082bf990(&uStack_560);
                    FUN_10828d3a4(auStack_528,&uStack_560);
                    func_0x00010828afb8(&uStack_560);
                    uStack_558 = 0;
                    uStack_560 = 0;
                    uStack_548 = 0;
                    uStack_550 = 0;
                    lStack_530 = 0;
                    uStack_540 = 0;
                    if (param_4 != 0) {
                      func_0x0001082bf998(auStack_5b8);
                      FUN_10828d3a4(aplStack_598,auStack_5b8);
                      func_0x00010827ebf8(&uStack_560,aplStack_598);
                      func_0x00010827ec18(aplStack_598);
                      func_0x00010828afb8(auStack_5b8);
                    }
                    puVar12 = puStack_328;
                    FUN_108290898(auStack_5f0,&plStack_2b0);
                    func_0x0001082bf818();
                    puVar13 = puStack_388;
                    if ((int)puVar12 == 0) {
LAB_1082bd664:
                      func_0x0001082bfa74();
LAB_1082bd668:
                      func_0x0001082bf7f8();
                      func_0x0001082bfb14();
                    }
                    else {
                      FUN_108290898(auStack_628,aplStack_4f0);
                      func_0x0001082bf818();
                      plVar7 = plStack_3b0;
                      if ((int)puVar13 == 0) {
                        func_0x0001082bfa30();
                        puVar12 = puVar13;
                        goto LAB_1082bd664;
                      }
                      FUN_108290898(auStack_660,auStack_528);
                      func_0x0001082bf818();
                      in_ZR = (param_4 & (uint)plVar7) == 1;
                      if ((bool)in_ZR) {
                        FUN_108290898(auStack_698,&uStack_560);
                        plVar7 = param_6;
                        func_0x0001082bf818();
                        func_0x0001082bf988();
                      }
                      puVar12 = auStack_660;
                      func_0x00010827ec18();
                      func_0x0001082bfa30();
                      func_0x0001082bfa74();
                      if (((ulong)plVar7 & 1) == 0) goto LAB_1082bd668;
                      FUN_1082bdd90(aplStack_598,(int)param_2[0xb]);
                      uVar18 = 0;
                      if (lStack_280 != 0) {
                        do {
                          func_0x0001082bf774();
                          uVar18 = extraout_x8_09;
                        } while (extraout_w10 != 0);
                      }
                      func_0x0001082bf9a0();
                      FUN_1082beaf4(uVar18);
                      uVar18 = 0;
                      if (lStack_4c0 != 0) {
                        do {
                          func_0x0001082bf774();
                          uVar18 = extraout_x8_10;
                        } while (extraout_w10_00 != 0);
                      }
                      func_0x0001082bf9a0();
                      FUN_1082beaf4(uVar18);
                      puVar12 = (undefined1 *)0x0;
                      if (lStack_4f8 != 0) {
                        do {
                          func_0x0001082bf774();
                          puVar12 = extraout_x8_11;
                        } while (extraout_w10_01 != 0);
                      }
                      func_0x0001082bf9a0();
                      FUN_1082beaf4();
                      if (param_4 != 0) {
                        puStack_6c0 = (undefined1 *)0x0;
                        if (lStack_530 != 0) {
                          do {
                            func_0x0001082bf774();
                            puStack_6c0 = extraout_x8_12;
                          } while (extraout_w10_02 != 0);
                        }
                        func_0x0001082bf9a0();
                        puVar12 = puStack_6c0;
                        FUN_1082beaf4();
                      }
                      func_0x0001082bf7f8();
                      func_0x0001082bfab0();
                      param_2 = aplStack_598[0];
                    }
                    if (puVar12 != (undefined1 *)0x0) {
                      func_0x0001082bf730();
                    }
                    func_0x00010827ec18(&uStack_560);
                    func_0x00010827ec18(auStack_528);
                    func_0x00010827ec18(aplStack_4f0);
                    func_0x00010827ec18(&plStack_2b0);
                  }
                  else {
                    func_0x0001082bfb48();
                    aplStack_4f0[0] = (long *)0x0;
                    func_0x0001082bf8fc(&plStack_2b0);
                    FUN_1082bdcfc(alStack_180,&plStack_2b0);
                    func_0x0001082bef60(&plStack_2b0);
                    if (alStack_180[0] == 0) {
                      lStack_4b8 = 0;
                      func_0x0001082bf7f8();
                      lVar6 = lStack_4b8;
                      lStack_4b8 = 0;
                      if (lVar6 != 0) {
                        func_0x0001082bf730();
                      }
                    }
                    else {
                      puVar11 = (undefined8 *)0xe0;
                      __Znwm();
                      *puVar11 = param_11;
                      puVar11[1] = param_12;
                      puVar11[2] = param_2[0x13];
                      puVar11[3] = param_7;
                      FUN_1082beb3c(puVar11 + 4,alStack_f0);
                      FUN_1082beb3c(puVar11 + 10,alStack_150);
                      FUN_1082beb3c(puVar11 + 0x10,alStack_180);
                      FUN_1082beb3c(puVar11 + 0x16,alStack_120);
                      plStack_2b0 = (long *)0x0;
                      uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
                      uStack_2a0 = 0;
                      uStack_290 = 0;
                      uStack_278 = 0;
                      lStack_280 = 0;
                      pcStack_298 = FUN_1082befc4;
                      aplStack_4f0[0] = param_2;
                      puStack_288 = puVar11;
                      func_0x0001082bf824(aplStack_4f0,*(undefined8 *)(param_1 + 0x10));
                    }
                  }
                  plVar7 = plStack_490;
                  plStack_490 = (long *)0x0;
                }
                else {
                  func_0x0001082bfb48();
                  plStack_2b0 = (long *)0x0;
                  uStack_2a8 = extraout_x8_08;
                  func_0x0001082bf8fc(&lStack_270);
                  FUN_1082bdcfc(alStack_150,&lStack_270);
                  func_0x0001082bef60(&lStack_270);
                  if (alStack_150[0] != 0) goto LAB_1082bd1f4;
                  plStack_488 = (long *)0x0;
                  func_0x0001082bf7f8();
                  plVar7 = plStack_488;
                  plStack_488 = (long *)0x0;
                }
                if (plVar7 != (long *)0x0) {
                  func_0x0001082bf730();
                }
                lVar6 = lStack_460;
                lStack_460 = 0;
              }
              else {
                func_0x0001082bfb48();
                lStack_270 = 0;
                uStack_268 = extraout_x8_05;
                func_0x0001082bf8fc(&plStack_220);
                FUN_1082bdcfc(alStack_f0,&plStack_220);
                func_0x0001082bf9a8();
                if (alStack_f0[0] != 0) goto LAB_1082bcff4;
                lStack_438 = 0;
                func_0x0001082bf7f8();
                lVar6 = lStack_438;
                lStack_438 = 0;
              }
joined_r0x0001082bd658:
              if (lVar6 != 0) {
                func_0x0001082bf730();
              }
              plVar7 = plStack_410;
              plStack_410 = (long *)0x0;
              if (plVar7 != (long *)0x0) {
                func_0x0001082bf730();
              }
              func_0x0001082bef60(alStack_180);
              func_0x0001082bef60(alStack_150);
              func_0x0001082bef60(alStack_120);
              func_0x0001082bef60(alStack_f0);
            }
            plVar7 = plStack_3b0;
            plStack_3b0 = (long *)0x0;
            if (plVar7 != (long *)0x0) {
              func_0x0001082bf730();
            }
            puVar12 = puStack_388;
            puStack_388 = (undefined1 *)0x0;
            if (puVar12 != (undefined1 *)0x0) {
              func_0x0001082bf730();
            }
            FUN_10810a400(&piStack_380);
            if (param_6 != (long *)0x0) {
              func_0x0001082bf784();
            }
            puVar12 = puStack_328;
            puStack_328 = (undefined1 *)0x0;
            if (puVar12 != (undefined1 *)0x0) {
              func_0x0001082bf730();
            }
            FUN_10810a400(&piStack_320);
          }
        }
        FUN_1082764bc(&plStack_2e0);
        goto LAB_1082bd740;
      }
      lStack_2d0 = 0;
      func_0x0001082bf7f8();
      lVar6 = lStack_2d0;
      lStack_2d0 = 0;
    }
    else {
      in_ZR = *(char *)(lVar6 + 10) == '\x01';
      if ((bool)in_ZR) {
        lStack_2c0 = 0;
        func_0x0001082bf7f8();
        lVar6 = lStack_2c0;
        lStack_2c0 = 0;
      }
      else {
        func_0x0001082bfb34();
        if ((extraout_w8 >> 3 & 1) == 0) goto LAB_1082bca64;
        lStack_2c8 = 0;
        func_0x0001082bf7f8();
        lVar6 = lStack_2c8;
        lStack_2c8 = 0;
      }
    }
  }
  if (lVar6 != 0) {
    func_0x0001082bf730();
  }
LAB_1082bd740:
  func_0x0001082bf7d8(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1082beaf4(puStack_6c0);
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  func_0x00010827ec18(&uStack_560);
  func_0x00010827ec18(auStack_528);
  func_0x00010827ec18(aplStack_4f0);
  func_0x00010827ec18(&plStack_2b0);
  plVar7 = plStack_490;
  plStack_490 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    func_0x0001082bf730();
  }
  lVar6 = lStack_460;
  lStack_460 = 0;
  if (lVar6 != 0) {
    func_0x0001082bf730();
  }
  plVar7 = plStack_410;
  plStack_410 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    func_0x0001082bf730();
  }
  func_0x0001082bef60(alStack_180);
  func_0x0001082bef60(alStack_150);
  func_0x0001082bef60(alStack_120);
  func_0x0001082bef60(alStack_f0);
  plVar7 = plStack_3b0;
  plStack_3b0 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    func_0x0001082bf730();
  }
  puVar12 = puStack_388;
  puStack_388 = (undefined1 *)0x0;
  if (puVar12 != (undefined1 *)0x0) {
    func_0x0001082bf730();
  }
  do {
    FUN_10810a400(&piStack_380);
    if (param_6 != (long *)0x0) {
      func_0x0001082bf784();
    }
    puVar12 = puStack_328;
    puStack_328 = (undefined1 *)0x0;
    if (puVar12 != (undefined1 *)0x0) {
      func_0x0001082bf730();
    }
    FUN_10810a400(&piStack_320);
    FUN_1082764bc(&plStack_2e0);
    func_0x0001082bf890();
    func_0x00010828afb8(auStack_3a8);
  } while( true );
}



/* Entry: 1082bdc90; end: 1082bdcfb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1082bdc90(long param_1,long *param_2)

{
  long lVar1;
  long alStack_38 [3];
  
  alStack_38[2] = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x90);
  alStack_38[1] = 0;
  alStack_38[0] = *param_2;
  *param_2 = 0;
  FUN_1082c4338(param_1,alStack_38 + 1,alStack_38);
  lVar1 = alStack_38[0];
  alStack_38[0] = 0;
  if (lVar1 != 0) {
    FUN_1082bf730();
  }
  return;
}



/* Entry: 1082bdcfc; end: 1082bdd8f;  */

void FUN_1082bdcfc(void)

{
  long lVar1;
  undefined8 uVar2;
  code *extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001082bf9f8();
  FUN_10828fb9c();
  *(undefined8 *)(unaff_x19 + 8) = *(undefined8 *)(unaff_x20 + 8);
  lVar1 = *(long *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  if (lVar1 == unaff_x19 + 0x10) {
    uVar2 = 0x20;
  }
  else {
    if (lVar1 == 0) goto LAB_1082bdd44;
    uVar2 = 0x28;
  }
  func_0x0001082bfa48(uVar2);
LAB_1082bdd44:
  lVar1 = *(long *)(unaff_x20 + 0x28);
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
  }
  else if (lVar1 == unaff_x20 + 0x10) {
    *(long *)(unaff_x19 + 0x28) = unaff_x19 + 0x10;
    func_0x0001082bf8b4(*(undefined8 *)(unaff_x20 + 0x28));
    (*extraout_x8)();
  }
  else {
    *(long *)(unaff_x19 + 0x28) = lVar1;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
  }
  return;
}



/* Entry: 1082bdd90; end: 1082bdddf;  */

void FUN_1082bdd90(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  *puVar1 = &PTR_FUN_110a373a8;
  puVar1[0xd] = puVar1 + 1;
  puVar1[0xe] = 0x800000000;
  *(undefined4 *)(puVar1 + 0xf) = param_2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082bdde0; end: 1082bdf5f;  */

void FUN_1082bdde0(undefined8 *param_1,long param_2,ulong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  bool bVar1;
  bool bVar2;
  undefined1 in_ZR;
  int iVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  int extraout_w11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar3 = (int)*(undefined8 *)(param_2 + 8);
  uStack_60 = param_6;
  uStack_58 = param_7;
  uStack_50 = param_4;
  uStack_48 = param_5;
  func_0x0001082bf830();
  if (iVar3 == 0) {
    func_0x0001082bfb20();
    lVar5 = extraout_x8;
    if ((bool)in_ZR) {
      FUN_10827b938();
      lVar5 = *(long *)(param_2 + 8);
    }
    if ((*(byte *)(*(long *)(param_2 + 0x10) + 0x18) >> 3 & 1) == 0) {
      uVar4 = *(ulong *)(*(long *)(lVar5 + 0x10) + 0xb8);
      FUN_10828a5e0(uVar4,*(long *)(param_2 + 0x10),&uStack_60,*param_3,&uStack_50);
      if ((uVar4 & 1) != 0) {
        if (param_8 != 0) {
          uVar4 = *param_3;
          FUN_1082b1e14();
          if ((uVar4 & 1) == 0) {
            iVar3 = (int)uStack_48;
            if (((int)uStack_48 - (int)uStack_50 < (int)uStack_58 - (int)uStack_60) &&
               (uVar4 = *param_3, (int)uStack_48 == *(int *)(uVar4 + 0x90))) {
              FUN_1082b1dfc();
              bVar1 = iVar3 < (int)uVar4;
            }
            else {
              bVar1 = false;
            }
            iVar3 = uStack_48._4_4_;
            if ((uStack_48._4_4_ - uStack_50._4_4_ < uStack_58._4_4_ - uStack_60._4_4_) &&
               (uVar4 = *param_3, uStack_48._4_4_ == *(int *)(uVar4 + 0x94))) {
              FUN_1082b1dfc();
              bVar2 = iVar3 < (int)(uVar4 >> 0x20);
            }
            else {
              bVar2 = false;
            }
            if (bVar1 || bVar2) goto LAB_1082bdf00;
          }
        }
        if (*(long *)(param_2 + 0x10) != 0) {
          do {
            func_0x0001082bf758();
          } while (extraout_w11 != 0);
        }
        FUN_1082939f0(param_1);
        func_0x0001082bf8f4();
        return;
      }
    }
  }
LAB_1082bdf00:
  *param_1 = 0;
  return;
}



/* Entry: 1082bdf60; end: 1082be943;  */

int FUN_1082bdf60(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long *param_5,long *param_6,long *param_7,undefined8 *param_8,undefined8 param_9,
                 undefined8 param_10,int param_11,uint param_12)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long **pplVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar15;
  undefined8 extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  undefined8 extraout_x8_05;
  long *extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w12;
  long *plVar16;
  ulong *puVar17;
  int iVar18;
  int iVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined4 uVar23;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long alStack_168 [2];
  undefined8 auStack_158 [2];
  undefined8 uStack_148;
  long lStack_140;
  int iStack_138;
  undefined2 uStack_134;
  long *plStack_130;
  undefined8 *puStack_128;
  undefined8 auStack_120 [2];
  undefined1 auStack_110 [32];
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  long lStack_b8;
  int iStack_b0;
  undefined2 uStack_ac;
  long *plStack_a8;
  undefined1 auStack_a0 [32];
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  long lStack_48;
  int iStack_40;
  undefined2 uStack_3c;
  long lStack_38;
  int iStack_30;
  undefined2 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  func_0x0001082bfb54();
  uStack_28 = param_9;
  uStack_20 = param_10;
  uStack_18 = param_7;
  uStack_10 = param_8;
  func_0x0001082bfb48();
  uStack_e0 = (long *)0x0;
  puVar10 = &uStack_e0;
  uStack_d8 = extraout_x8;
  func_0x000108219544(puVar10,&uStack_18);
  if (((int)puVar10 == 0) ||
     ((((lVar11 = param_5[2], lVar11 != 0 && (func_0x0001082bf83c(), lVar11 != 0)) &&
       ((*(byte *)(lVar11 + 10) & 1) != 0)) ||
      (lVar11 = param_5[2], (*(byte *)(lVar11 + 0x18) >> 3 & 1) != 0)))) {
    return 0;
  }
  piVar1 = (int *)(lVar11 + 8);
  do {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar8) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar16 = (long *)0x0;
  iStack_30 = (int)param_5[3];
  uStack_2c = *(undefined2 *)((long)param_5 + 0x1c);
  iVar5 = (int)uStack_10 - (int)uStack_18;
  iVar6 = uStack_10._4_4_ - uStack_18._4_4_;
  bVar8 = iVar5 == (int)uStack_20 - (int)uStack_28;
  bVar9 = iVar6 == uStack_20._4_4_ - uStack_28._4_4_;
  if (bVar8 && bVar9) {
    param_12 = 0;
  }
  lStack_38 = lVar11;
  if ((param_11 != 0) && (!bVar8 || !bVar9)) {
    puVar17 = (ulong *)(param_5 + 4);
    uVar12 = *puVar17;
    if ((uVar12 != 0) && (FUN_108343d54(), (uVar12 & 1) == 0)) {
      do {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      iStack_40 = iStack_30;
      uStack_3c = uStack_2c;
      lStack_48 = lVar11;
      FUN_1082be944(&uStack_e0,param_5,&lStack_48,uStack_28,uStack_20);
      plStack_70 = &lStack_38;
      puStack_68 = &uStack_28;
      FUN_1082bea6c(&plStack_70,&uStack_e0);
      func_0x0001082bf868();
      FUN_1082764bc(&lStack_48);
      if (lStack_38 != 0) {
        FUN_108343d7c(&plStack_130,*puVar17);
        plStack_78 = plStack_130;
        plStack_130 = (long *)0x0;
        func_0x0001082bf9e0();
        FUN_1082a0b14(&plStack_70,0x11);
        FUN_10810a400(&plStack_78);
        uStack_e0 = (long *)param_5[1];
        func_0x0001082a0b90(auStack_a0,&plStack_70);
        func_0x0001082bf7a0(&plStack_80,&uStack_e0,auStack_a0);
        func_0x0001082bf888();
        func_0x00010828afb8(auStack_a0);
        lVar11 = lStack_38;
        if (plStack_80 != (long *)0x0) {
          lStack_38 = 0;
          lStack_b8 = lVar11;
          iStack_b0 = iStack_30;
          uStack_ac = uStack_2c;
          uVar23 = *(undefined4 *)((long)param_5 + 0x34);
          FUN_1082beaa0(&uStack_e0,uStack_28);
          func_0x0001082bf794(&plStack_a8,&lStack_b8,uVar23,&uStack_e0);
          FUN_1082764bc(&lStack_b8);
          plStack_e8 = plStack_a8;
          plStack_a8 = (long *)0x0;
          FUN_10828b764(&uStack_e0,&plStack_e8,puVar17,plStack_80 + 4);
          plVar16 = plStack_a8;
          plStack_a8 = uStack_e0;
          if (plVar16 != (long *)0x0) {
            func_0x0001082bf730();
          }
          plVar16 = plStack_e8;
          plStack_e8 = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            func_0x0001082bf730();
          }
          plStack_f0 = plStack_a8;
          plStack_a8 = (long *)0x0;
          FUN_1082bdc90(plStack_80,&plStack_f0);
          plVar16 = plStack_f0;
          plStack_f0 = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            func_0x0001082bf730();
          }
          plVar16 = (long *)0x0;
          plVar21 = plStack_80;
          if (plStack_80[2] != 0) {
            do {
              func_0x0001082bf9b0();
              plVar21 = extraout_x8_04;
              plVar16 = extraout_x9;
            } while (extraout_w12 != 0);
          }
          uStack_d8 = CONCAT26(uStack_d8._6_2_,(int6)plVar21[3]);
          uStack_e0 = plVar16;
          func_0x0001082bfa54();
          func_0x0001082bf868();
          plVar16 = plStack_80;
          plStack_80 = (long *)0x0;
          func_0x0001082bf9e0();
          plVar21 = plStack_a8;
          uStack_28 = 0;
          plStack_a8 = (long *)0x0;
          uStack_20 = extraout_x8_05;
          if (plVar21 != (long *)0x0) {
            func_0x0001082bf730();
            plVar21 = plStack_80;
            plStack_80 = (long *)0x0;
            if (plVar21 != (long *)0x0) {
              func_0x0001082bf730();
            }
          }
          func_0x0001082bfa40();
          func_0x0001082bfa60();
          goto LAB_1082be054;
        }
        func_0x0001082bfa40();
        func_0x0001082bfa60();
      }
      iVar19 = 0;
      goto LAB_1082be56c;
    }
    plVar16 = (long *)0x0;
  }
LAB_1082be054:
  plVar21 = (long *)0x0;
  plVar20 = param_6;
  do {
    iVar19 = iVar5;
    iVar18 = iVar6;
    if (1 < param_12) {
      iVar7 = (int)uStack_20 - (int)uStack_28;
      if (iVar5 < iVar7) {
        iVar19 = (iVar7 + 1) / 2;
        if (iVar19 <= iVar5) {
          iVar19 = iVar5;
        }
      }
      else {
        iVar2 = iVar5;
        if (iVar7 * 2 <= iVar5) {
          iVar2 = iVar7 * 2;
        }
        if (iVar7 < iVar5) {
          iVar19 = iVar2;
        }
      }
      iVar7 = uStack_20._4_4_ - uStack_28._4_4_;
      if (iVar6 < iVar7) {
        iVar18 = (iVar7 + 1) / 2;
        if (iVar18 <= iVar6) {
          iVar18 = iVar6;
        }
      }
      else {
        iVar2 = iVar6;
        if (iVar7 * 2 <= iVar6) {
          iVar2 = iVar7 * 2;
        }
        if (iVar7 < iVar6) {
          iVar18 = iVar2;
        }
      }
    }
    plVar13 = param_5;
    if (plVar16 != (long *)0x0) {
      plVar13 = plVar16;
    }
    plStack_80 = (long *)0x0;
    plStack_70 = (long *)0x0;
    puStack_68 = (undefined8 *)0x0;
    if (iVar19 == iVar5 && iVar18 == iVar6) {
      puStack_68 = uStack_10;
      plStack_70 = uStack_18;
      param_1 = uStack_18;
      FUN_10828b188(&uStack_e0,plVar13 + 4,param_6 + 4);
      plVar20 = plStack_80;
      plStack_80 = uStack_e0;
      uStack_e0 = (long *)0x0;
      FUN_1082bf4a4(plVar20);
      FUN_10827f5a4(&uStack_e0);
      plVar20 = param_6;
LAB_1082be204:
      plVar22 = plVar21;
      if (param_12 == 3) {
        uVar15 = 0;
        if (lStack_38 != 0) {
          do {
            func_0x0001082bf758();
            uVar15 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        auStack_120[0] = uVar15;
        func_0x0001082bf9d0(iStack_30);
        FUN_1082be944(&uStack_e0,param_5,auStack_120,uStack_28,uStack_20);
        puStack_128 = &uStack_28;
        plStack_130 = &lStack_38;
        func_0x0001082bfa68();
        func_0x0001082bf868();
        FUN_1082764bc(auStack_120);
        lVar11 = lStack_38;
        uVar23 = SUB84(param_1,0);
        if (lStack_38 == 0) goto LAB_1082be3d0;
        lStack_38 = 0;
        lStack_140 = lVar11;
        iStack_138 = iStack_30;
        uStack_134 = uStack_2c;
        uVar3 = *(undefined4 *)((long)plVar13 + 0x34);
        FUN_10817500c(&uStack_28);
        uStack_e0 = (long *)CONCAT44(param_2,uVar23);
        uStack_d8 = CONCAT44(param_4,param_3);
        param_1 = (long *)0x0;
        param_2 = 0x3f000000;
        func_0x0001082bf904(&plStack_130,&lStack_140,uVar3);
        FUN_1082c6024();
        plVar13 = &lStack_140;
        plVar22 = plStack_130;
LAB_1082be46c:
        plStack_130 = (long *)0x0;
        FUN_1082764bc(plVar13);
      }
      else {
        if ((plStack_80 != (long *)0x0) || (iStack_30 != (int)plVar20[3])) {
LAB_1082be2e8:
          uVar15 = 0;
          if (lStack_38 != 0) {
            do {
              func_0x0001082bf758();
              uVar15 = extraout_x8_02;
            } while (extraout_w11_01 != 0);
          }
          auStack_158[0] = uVar15;
          func_0x0001082bf9d0(iStack_30);
          FUN_1082be944(&uStack_e0,param_5,auStack_158,uStack_28,uStack_20);
          puStack_128 = &uStack_28;
          plStack_130 = &lStack_38;
          func_0x0001082bfa68();
          func_0x0001082bf868();
          FUN_1082764bc(auStack_158);
          if (lStack_38 == 0) goto LAB_1082be3d0;
          FUN_10817500c(&uStack_28);
          alStack_168[0] = lStack_38;
          uStack_e0 = (long *)CONCAT44(param_2,(int)param_1);
          uStack_d8 = CONCAT44(param_4,param_3);
          lStack_38 = 0;
          func_0x0001082bf9d0(iStack_30);
          func_0x0001082bf904(&plStack_130,alStack_168,*(undefined4 *)((long)param_5 + 0x34));
          FUN_1082cdf9c();
          plVar13 = alStack_168;
          plVar22 = plStack_130;
          goto LAB_1082be46c;
        }
        uVar15 = 0;
        if (lStack_38 != 0) {
          do {
            func_0x0001082bf758();
            uVar15 = extraout_x8_01;
          } while (extraout_w11_00 != 0);
        }
        uStack_148 = uVar15;
        FUN_1082bdde0(&uStack_e0,plVar20,&uStack_148,uStack_28,uStack_20,plStack_70,puStack_68,
                      param_12 != 0);
        plVar13 = uStack_e0;
        FUN_10828ea04(&uStack_e0);
        func_0x0001082bfa7c();
        if (plVar13 == (long *)0x0) goto LAB_1082be2e8;
        plVar22 = (long *)0x0;
      }
      if (plStack_80 != (long *)0x0) {
        plStack_178 = plStack_80;
        plStack_80 = (long *)0x0;
        plStack_170 = plVar22;
        FUN_10828b6b8(&uStack_e0,&plStack_170,&plStack_178);
        plVar22 = uStack_e0;
        pplVar14 = &plStack_178;
        FUN_10827f5a4();
        func_0x0001082bfad4();
        if (pplVar14 != (long **)0x0) {
          func_0x0001082bf730();
        }
      }
      if (plVar22 != (long *)0x0) {
        plStack_180 = plVar22;
        FUN_108287478(plVar20,&uStack_28,&plStack_70,&plStack_180);
        plVar13 = plStack_180;
        plStack_180 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          func_0x0001082bf730();
        }
      }
      plVar13 = (long *)0x0;
      if (plVar20[2] != 0) {
        do {
          func_0x0001082bf758();
          plVar13 = extraout_x8_03;
        } while (extraout_w11_02 != 0);
      }
      uStack_d8 = CONCAT26(uStack_d8._6_2_,(int6)plVar20[3]);
      uStack_e0 = plVar13;
      func_0x0001082bfa54();
      func_0x0001082bf868();
      if (plVar16 != (long *)0x0) {
        func_0x0001082bf910();
      }
      plVar22 = (long *)0x0;
      uStack_20 = CONCAT44(iVar18,iVar19);
      uStack_28 = 0;
      iVar19 = 1;
      plVar16 = plVar21;
    }
    else {
      FUN_10828aef0(&uStack_e0,plVar13 + 4);
      uStack_c8 = CONCAT44(iVar18,iVar19);
      plStack_a8 = (long *)param_5[1];
      FUN_1082a0b6c(auStack_110,&uStack_e0);
      func_0x0001082bf7a0(&plStack_130,&plStack_a8,auStack_110);
      func_0x0001082bf888();
      plVar22 = plStack_130;
      plStack_130 = (long *)0x0;
      if (plVar21 != (long *)0x0) {
        func_0x0001082bf808();
        plVar21 = plStack_130;
        plStack_130 = (long *)0x0;
        if (plVar21 != (long *)0x0) {
          func_0x0001082bf730();
        }
      }
      func_0x0001082bf880();
      if (plVar22 != (long *)0x0) {
        puStack_68 = *(undefined8 **)(plVar22[2] + 0x90);
        plStack_70 = (long *)0x0;
        plVar20 = plVar22;
      }
      func_0x00010828afb8(&uStack_e0);
      plVar21 = plVar22;
      if (plVar22 != (long *)0x0) goto LAB_1082be204;
      plVar22 = (long *)0x0;
LAB_1082be3d0:
      iVar19 = 0;
    }
    FUN_10827f5a4(&plStack_80);
    if (iVar19 == 0) break;
    plVar21 = plVar22;
  } while ((int)uStack_20 - (int)uStack_28 != iVar5 || uStack_20._4_4_ - uStack_28._4_4_ != iVar6);
  if (plVar22 != (long *)0x0) {
    func_0x0001082bf808();
  }
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 8))(plVar16);
  }
LAB_1082be56c:
  FUN_1082764bc(&lStack_38);
  return iVar19;
}



/* Entry: 1082be944; end: 1082bea6b;  */

void FUN_1082be944(long *param_1,long param_2,long *param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lStack_60;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined1 auStack_50 [16];
  
  uVar5 = param_4 >> 0x20;
  lVar1 = *param_3;
  if (lVar1 == 0) {
    lStack_60 = 0;
  }
  else {
    func_0x0001082bf848();
    lStack_60 = *param_3;
    if (lVar1 != 0) goto LAB_1082bea24;
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  *param_3 = 0;
  uStack_58 = (undefined4)param_3[1];
  uStack_54 = *(undefined2 *)((long)param_3 + 0xc);
  FUN_1082b28ac(auStack_50,uVar2,&lStack_60,0,param_4,param_5,0,0,param_8,&UNK_10f483fe6,0x1a);
  FUN_108279f20(param_3,auStack_50);
  FUN_1082764bc(auStack_50);
  FUN_1082764bc(&lStack_60);
  iVar4 = (int)param_4;
  uVar3 = param_4 & 0xffffffff00000000;
  lStack_60 = 0;
  if (*param_3 != 0) {
    param_4 = 0;
    uVar5 = 0;
    lStack_60 = *param_3;
    param_5 = param_5 - uVar3 & 0xffffffff00000000 | (ulong)(uint)((int)param_5 - iVar4);
  }
LAB_1082bea24:
  *param_3 = 0;
  *param_1 = lStack_60;
  *(int *)(param_1 + 1) = (int)param_3[1];
  *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_3 + 0xc);
  param_1[2] = param_4 & 0xffffffff | uVar5 << 0x20;
  param_1[3] = param_5;
  return;
}



/* Entry: 1082bea6c; end: 1082bea9f;  */

undefined8 * FUN_1082bea6c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_108279f20(*param_1);
  puVar1 = (undefined8 *)param_1[1];
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puVar1[1] = *(undefined8 *)(param_2 + 0x18);
  *puVar1 = uVar2;
  return param_1;
}



/* Entry: 1082beaa0; end: 1082beacb;  */

void FUN_1082beaa0(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)(int)param_2;
  fVar4 = (float)(int)((ulong)param_2 >> 0x20);
  FUN_10810c9b4();
  bVar1 = false;
  if ((fVar4 == 0.0) && (bVar1 = false, !NAN(fVar3))) {
    bVar1 = fVar3 == 0.0;
  }
  *param_1 = 0x3f800000;
  *(float *)(param_1 + 1) = fVar3;
  *(undefined8 *)((long)param_1 + 0xc) = 0x3f80000000000000;
  uVar2 = 0x10;
  if (!bVar1) {
    uVar2 = 0x11;
  }
  *(float *)((long)param_1 + 0x14) = fVar4;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x24) = uVar2;
  return;
}



/* Entry: 1082beacc; end: 1082beaf3;  */

/* WARNING: Possible PIC construction at 0x0001082beae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001082beae4) */

long * FUN_1082beacc(long param_1)

{
  FUN_10827f5a4(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001078bdee8();
  }
  return (long *)(param_1 + 0x20);
}



/* Entry: 1082beaf4; end: 1082beaff;  */

void FUN_1082beaf4(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_1 != (int *)0x0) && (iVar1 == 1)) {
    if (*(code **)(param_1 + 2) != (code *)0x0) {
      (**(code **)(param_1 + 2))(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 4));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1082beb00; end: 1082beb3b;  */

void FUN_1082beb00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001082bf9f8();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  FUN_1082a0b6c(param_1 + 2,param_2 + 2);
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    do {
      func_0x0001082bf774();
      uVar1 = extraout_x8;
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  return;
}



/* Entry: 1082beb3c; end: 1082bebab;  */

undefined8 * FUN_1082beb3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_2 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  puVar3 = (undefined8 *)param_2[5];
  if (puVar3 == (undefined8 *)0x0) {
    param_1[5] = 0;
  }
  else if (puVar3 == param_2 + 2) {
    param_1[5] = param_1 + 2;
    (**(code **)(*(long *)param_2[5] + 0x18))((long *)param_2[5],param_1 + 2);
  }
  else {
    param_1[5] = puVar3;
    param_2[5] = 0;
  }
  return param_1;
}



/* Entry: 1082bebac; end: 1082bec4b;  */

void FUN_1082bebac(undefined8 *param_1)

{
  ulong uVar1;
  ulong uStack_38;
  
  func_0x0001082bfaa4();
  uVar1 = uStack_38;
  func_0x0001082bf8c0(uStack_38,param_1 + 4,param_1[2],param_1[5]);
  if (((uVar1 & 1) == 0) && (uStack_38 != 0)) {
    func_0x0001082bf930();
    uStack_38 = 0;
  }
  func_0x0001082bf8ac(*param_1,param_1[1]);
  if (uStack_38 != 0) {
    func_0x0001082bf730();
  }
  func_0x0001082bef60(param_1 + 4);
  __ZdlPv(param_1);
  return;
}



/* Entry: 1082bec4c; end: 1082bee47;  */

bool FUN_1082bec4c(long param_1,long *param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar3 = *param_2;
  plVar4 = param_2;
  FUN_1082a0214();
  if (lVar3 != 0) {
    if (param_2[5] == 0) {
      lVar6 = *param_2;
      if (lVar6 != 0) {
        do {
          func_0x0001082bf774();
        } while (extraout_w10 != 0);
      }
      uVar7 = *(undefined8 *)(param_5 + 0x28);
      puVar5 = (undefined8 *)0x10;
      lStack_78 = lVar6;
      __Znwm();
      lStack_78 = 0;
      *puVar5 = uVar7;
      puVar5[1] = lVar6;
      *(undefined8 **)(param_5 + 0x28) = puVar5;
      func_0x0001082bfa04();
      uVar7 = 0;
      if (*param_2 != 0) {
        do {
          func_0x0001082bf758();
          uVar7 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      iVar1 = *(int *)(param_1 + 0x70);
      lVar6 = (long)iVar1;
      if (iVar1 < (int)(*(uint *)(param_1 + 0x74) >> 1)) {
        uStack_80 = 0;
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x68) + (long)iVar1 * 0x18);
        *puVar5 = 0;
        uStack_58 = 0;
        puVar5[1] = uVar7;
        puVar5[2] = param_4;
        FUN_10826b598(&uStack_58);
      }
      else {
        uStack_80 = uVar7;
        FUN_1082bee48();
        uVar7 = uStack_80;
        puVar5 = (undefined8 *)(lVar6 + (long)*(int *)(param_1 + 0x70) * 0x18);
        uStack_80 = 0;
        *puVar5 = 0;
        uStack_58 = 0;
        puVar5[1] = uVar7;
        puVar5[2] = param_4;
        FUN_10826b598(&uStack_58);
        FUN_1082bee90(param_1 + 0x68,lVar6,plVar4);
      }
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      FUN_10826b598(&uStack_80);
    }
    else {
      FUN_1083464d4(&lStack_68,param_4 * (param_3 >> 0x20));
      uStack_58 = *(undefined8 *)(lStack_68 + 0x18);
      plVar4 = (long *)param_2[5];
      lStack_60 = lVar3;
      if (plVar4 == (long *)0x0) {
        func_0x000104bfeb48();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1082bee08);
        (*pcVar2)();
      }
      (**(code **)(*plVar4 + 0x30))(plVar4,&uStack_58,&lStack_60);
      lStack_70 = lStack_68;
      lStack_68 = 0;
      FUN_1082bc920(param_1,&lStack_70,param_4);
      FUN_1082beaf4(lStack_70);
      func_0x0001082a0268(*param_2);
      FUN_1082beaf4(0);
    }
  }
  return lVar3 != 0;
}



/* Entry: 1082bee48; end: 1082bee8f;  */

void FUN_1082bee48(int param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 == 0x7fffffff) {
    func_0x00010bdb1a68();
    func_0x0001082bf9f8();
    lVar3 = 0;
    for (lVar4 = 0; lVar4 < (int)unaff_x19[1]; lVar4 = lVar4 + 1) {
      puVar1 = (undefined8 *)(unaff_x20 + lVar3);
      puVar2 = (undefined8 *)(*unaff_x19 + lVar3);
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar1[1] = uVar6;
      *puVar1 = uVar5;
      puVar1[2] = puVar2[2];
      FUN_1082bef38();
      lVar3 = lVar3 + 0x18;
    }
    if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
      _free(*unaff_x19);
    }
    param_3 = param_3 / 0x18;
    if (0x7ffffffe < param_3) {
      param_3 = 0x7fffffff;
    }
    *unaff_x19 = unaff_x20;
    *(uint *)((long)unaff_x19 + 0xc) = (int)param_3 << 1 | 1;
    return;
  }
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x18;
  FUN_10840fe24(0x3ff8000000000000,&uStack_20,param_1 + 1);
  return;
}



/* Entry: 1082bee90; end: 1082bef37;  */

void FUN_1082bee90(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x0001082bf9f8();
  lVar3 = 0;
  for (lVar4 = 0; lVar4 < (int)unaff_x19[1]; lVar4 = lVar4 + 1) {
    puVar1 = (undefined8 *)(unaff_x20 + lVar3);
    puVar2 = (undefined8 *)(*unaff_x19 + lVar3);
    uVar6 = puVar2[1];
    uVar5 = *puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar1[1] = uVar6;
    *puVar1 = uVar5;
    puVar1[2] = puVar2[2];
    FUN_1082bef38();
    lVar3 = lVar3 + 0x18;
  }
  if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
    _free(*unaff_x19);
  }
  param_3 = param_3 / 0x18;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *unaff_x19 = unaff_x20;
  *(uint *)((long)unaff_x19 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1082bef38; end: 1082befc3;  */

undefined8 FUN_1082bef38(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10826b598(param_1 + 8);
  func_0x0001078be09c();
  if (param_1 != 0) {
    func_0x000106f47128();
  }
  return unaff_x19;
}



/* Entry: 1082befc4; end: 1082bf137;  */

void FUN_1082befc4(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uStack_40;
  ulong uStack_38;
  
  func_0x0001082bfaa4();
  uVar1 = uStack_38;
  func_0x0001082bf8c0(uStack_38,param_1 + 4,param_1[3],param_1[5]);
  if ((uVar1 & 1) == 0) {
    func_0x0001082bfae0();
    func_0x0001082bf8ac();
  }
  else {
    uVar2 = CONCAT44(*(int *)((long)param_1 + 0x1c) / 2,*(int *)(param_1 + 3) / 2);
    uVar1 = uStack_38;
    func_0x0001082bf8c0(uStack_38,param_1 + 10,uVar2,param_1[0xb]);
    if ((uVar1 & 1) == 0) {
      func_0x0001082bfae0();
      func_0x0001082bf8ac();
    }
    else {
      uVar1 = uStack_38;
      func_0x0001082bf8c0(uStack_38,param_1 + 0x10,uVar2,param_1[0x11]);
      if ((uVar1 & 1) == 0) {
        func_0x0001082bfae0();
        func_0x0001082bf8ac();
      }
      else if ((param_1[0x16] == 0) ||
              (uVar1 = uStack_38,
              func_0x0001082bf8c0(uStack_38,param_1 + 0x16,param_1[3],param_1[0x17]),
              (uVar1 & 1) != 0)) {
        uStack_40 = uStack_38;
        func_0x0001082bf8ac(*param_1,param_1[1]);
        uStack_38 = 0;
      }
      else {
        func_0x0001082bfae0();
        func_0x0001082bf8ac();
      }
    }
  }
  if (uStack_40 != 0) {
    func_0x0001082bf730();
  }
  func_0x0001082bef60(param_1 + 0x16);
  func_0x0001082bef60(param_1 + 0x10);
  func_0x0001082bef60(param_1 + 10);
  func_0x0001082bef60(param_1 + 4);
  __ZdlPv(param_1);
  if (uStack_38 != 0) {
    func_0x0001082bf784();
  }
  return;
}



/* Entry: 1082bf138; end: 1082bf15b;  */

void FUN_1082bf138(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001082bfa94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1082bf15c; end: 1082bf217;  */

void FUN_1082bf15c(ulong *param_1,uint param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  for (uVar2 = uVar4 + (long)(int)param_1[0x2e] * 0x18; uVar4 < uVar2; uVar2 = uVar2 - 0x18) {
    func_0x0001078bddf8(uVar2 - 8);
  }
  if ((uint)param_1[0x2e] == param_2) {
    puVar1 = (ulong *)*param_1;
  }
  else {
    if (0xf < (int)(uint)param_1[0x2e]) {
      _free(*param_1);
    }
    if ((int)param_2 < 0x10) {
      puVar1 = param_1 + 1;
      if ((int)param_2 < 1) {
        puVar1 = (ulong *)0x0;
      }
    }
    else {
      puVar1 = (ulong *)(ulong)param_2;
      FUN_10840ffdc(puVar1,0x18);
    }
    *param_1 = (ulong)puVar1;
    *(uint *)(param_1 + 0x2e) = param_2;
  }
  puVar3 = puVar1 + (long)(int)param_2 * 3;
  for (; puVar1 < puVar3; puVar1 = puVar1 + 3) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  return;
}



/* Entry: 1082bf218; end: 1082bf23f;  */

undefined8 FUN_1082bf218(undefined8 param_1)

{
  FUN_1082bf15c(param_1,0);
  return param_1;
}



/* Entry: 1082bf240; end: 1082bf243;  */

long * FUN_1082bf240(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lStack_70;
  int iStack_68;
  undefined1 auStack_60 [16];
  long *plStack_50;
  long *plStack_48;
  
  lVar8 = 0;
  *param_1 = (long)&PTR_FUN_110a373a8;
  plVar2 = param_1;
  do {
    iVar1 = (int)param_1[0xe];
    if (iVar1 <= lVar8) {
      if (iVar1 != 0) {
        uVar3 = param_1[0xd];
        uVar7 = uVar3 + (long)iVar1 * 0x18;
        do {
          FUN_1082bef38();
          uVar3 = uVar3 + 0x18;
        } while (uVar3 < uVar7);
      }
      if ((*(byte *)((long)param_1 + 0x74) & 1) != 0) {
        _free(param_1[0xd]);
      }
      return param_1;
    }
    plVar6 = (long *)(param_1[0xd] + lVar8 * 0x18 + 8);
    lVar5 = *plVar6;
    if (lVar5 != 0) {
      iStack_68 = (int)param_1[0xf];
      *plVar6 = 0;
      lStack_70 = lVar5;
      FUN_10828ad10();
      plStack_50 = plVar2 + 3;
      func_0x0001081efc58();
      lVar5 = 0;
      do {
        if ((ulong)(*(uint *)((long)plVar2 + 0x14) &
                   ((int)*(uint *)((long)plVar2 + 0x14) >> 0x1f ^ 0xffffffffU)) << 3 == lVar5)
        goto LAB_1082bf3f4;
        plVar6 = *(long **)(plVar2[1] + lVar5);
        lVar5 = lVar5 + 8;
      } while (iStack_68 != (int)plVar6[4]);
      FUN_10828fb58(auStack_60,&lStack_70);
      plStack_48 = plVar6 + 2;
      func_0x0001081efc58();
      if ((int)plVar6[1] < (int)(*(uint *)((long)plVar6 + 0xc) >> 1)) {
        FUN_10828fb58(*plVar6 + (long)(int)plVar6[1] * 0x10,auStack_60);
      }
      else {
        uVar4 = 1;
        plVar2 = plVar6;
        FUN_10828fc74(0x3ff8000000000000,plVar6,1);
        FUN_10828fb58(plVar2 + (long)(int)plVar6[1] * 2,auStack_60);
        FUN_10828fc24(plVar6,plVar2,uVar4);
      }
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      FUN_1081efc78(&plStack_48);
      FUN_10826b598(auStack_60);
LAB_1082bf3f4:
      FUN_1081efc78(&plStack_50);
      plVar2 = &lStack_70;
      FUN_10826b598();
      func_0x0001082bfa04();
    }
    lVar8 = lVar8 + 1;
  } while( true );
}



/* Entry: 1082bf244; end: 1082bf257;  */

void FUN_1082bf244(void)

{
  FUN_1082bf2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082bf258; end: 1082bf2bf;  */

undefined4 FUN_1082bf258(long param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



/* Entry: 1082bf2c0; end: 1082bf4a3;  */

long * FUN_1082bf2c0(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lStack_70;
  int iStack_68;
  undefined1 auStack_60 [16];
  long *plStack_50;
  long *plStack_48;
  
  lVar8 = 0;
  *param_1 = (long)&PTR_FUN_110a373a8;
  plVar2 = param_1;
  do {
    iVar1 = (int)param_1[0xe];
    if (iVar1 <= lVar8) {
      if (iVar1 != 0) {
        uVar3 = param_1[0xd];
        uVar7 = uVar3 + (long)iVar1 * 0x18;
        do {
          FUN_1082bef38();
          uVar3 = uVar3 + 0x18;
        } while (uVar3 < uVar7);
      }
      if ((*(byte *)((long)param_1 + 0x74) & 1) != 0) {
        _free(param_1[0xd]);
      }
      return param_1;
    }
    plVar6 = (long *)(param_1[0xd] + lVar8 * 0x18 + 8);
    lVar5 = *plVar6;
    if (lVar5 != 0) {
      iStack_68 = (int)param_1[0xf];
      *plVar6 = 0;
      lStack_70 = lVar5;
      FUN_10828ad10();
      plStack_50 = plVar2 + 3;
      func_0x0001081efc58();
      lVar5 = 0;
      do {
        if ((ulong)(*(uint *)((long)plVar2 + 0x14) &
                   ((int)*(uint *)((long)plVar2 + 0x14) >> 0x1f ^ 0xffffffffU)) << 3 == lVar5)
        goto LAB_1082bf3f4;
        plVar6 = *(long **)(plVar2[1] + lVar5);
        lVar5 = lVar5 + 8;
      } while (iStack_68 != (int)plVar6[4]);
      FUN_10828fb58(auStack_60,&lStack_70);
      plStack_48 = plVar6 + 2;
      func_0x0001081efc58();
      if ((int)plVar6[1] < (int)(*(uint *)((long)plVar6 + 0xc) >> 1)) {
        FUN_10828fb58(*plVar6 + (long)(int)plVar6[1] * 0x10,auStack_60);
      }
      else {
        uVar4 = 1;
        plVar2 = plVar6;
        FUN_10828fc74(0x3ff8000000000000,plVar6,1);
        FUN_10828fb58(plVar2 + (long)(int)plVar6[1] * 2,auStack_60);
        FUN_10828fc24(plVar6,plVar2,uVar4);
      }
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      FUN_1081efc78(&plStack_48);
      FUN_10826b598(auStack_60);
LAB_1082bf3f4:
      FUN_1081efc78(&plStack_50);
      plVar2 = &lStack_70;
      FUN_10826b598();
      func_0x0001082bfa04();
    }
    lVar8 = lVar8 + 1;
  } while( true );
}



/* Entry: 1082bf4a4; end: 1082bf4cf;  */

void FUN_1082bf4a4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001082bf4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}


