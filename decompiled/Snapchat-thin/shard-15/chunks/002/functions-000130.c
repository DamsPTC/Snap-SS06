/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8cda28; end: 10b8cda47;  */

void FUN_10b8cda28(void)

{
  func_0x00010b8cfe04();
  FUN_10b8cda48();
  return;
}



/* Entry: 10b8cda48; end: 10b8cda5f;  */

void FUN_10b8cda48(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010b8c5e34(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8cda60; end: 10b8cda7b;  */

void FUN_10b8cda60(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010b8c5e34(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8cda7c; end: 10b8cda9b;  */

void FUN_10b8cda7c(void)

{
  func_0x00010b8cfe04();
  FUN_10b8cda9c();
  return;
}



/* Entry: 10b8cda9c; end: 10b8cdab3;  */

void FUN_10b8cda9c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010b8d1c3c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8cdab4; end: 10b8cdacf;  */

void FUN_10b8cdab4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010b8d1c3c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8cdad0; end: 10b8cdaef;  */

void FUN_10b8cdad0(void)

{
  func_0x00010b8cfe04();
  FUN_10b8cdaf0();
  return;
}



/* Entry: 10b8cdaf0; end: 10b8cdb07;  */

void FUN_10b8cdaf0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10b8d0148(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8cdb08; end: 10b8cdb23;  */

void FUN_10b8cdb08(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10b8d0148(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8cdb24; end: 10b8cdbf3;  */

void FUN_10b8cdb24(void)

{
  func_0x00010b8cfe04();
  func_0x00010b8cdb44();
  return;
}



/* Entry: 10b8cdbf4; end: 10b8cdc0f;  */

void FUN_10b8cdbf4(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8cdc10; end: 10b8cdc33;  */

undefined8 * FUN_10b8cdc10(undefined8 *param_1)

{
  func_0x00010b8a2000(*param_1);
  return param_1;
}



/* Entry: 10b8cdc34; end: 10b8cdc67;  */

void FUN_10b8cdc34(undefined8 param_1,ulong *param_2,long *param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x00010b8cf878();
  func_0x000104bda318();
  func_0x00010b8cf998();
  uVar2 = 0;
  param_3[2] = param_3[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_3));
  uVar5 = *(ulong *)(*param_3 + ((ulong)puVar3 & param_3[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_3 + (param_3[3] & 7U) + (param_3[3] & (ulong)puVar3) + 1) = uVar4;
  param_3[5] = param_3[5] + uVar2;
  return;
}



/* Entry: 10b8cdc68; end: 10b8cdd0b;  */

void FUN_10b8cdc68(long *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 10b8cdd0c; end: 10b8cdd6f;  */

void FUN_10b8cdd0c(undefined8 param_1)

{
  func_0x00010b8cdd40();
  func_0x00010b8cfabc();
  func_0x00010b950ce0();
  func_0x0001080c5c80(param_1);
  return;
}



/* Entry: 10b8cdd70; end: 10b8cddc7;  */

undefined8 * FUN_10b8cdd70(long param_1)

{
  func_0x0001080d2890(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10b8cddc8; end: 10b8cde27;  */

void FUN_10b8cddc8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long alStack_30 [2];
  
  func_0x000108108ae0(alStack_30,param_3 + 0x10);
  if (((alStack_30[0] != 0) &&
      (iVar1 = *(int *)(alStack_30[0] + 0x1a4) + -1, *(int *)(alStack_30[0] + 0x1a4) = iVar1,
      iVar1 == 0)) && ((*(byte *)(alStack_30[0] + 0x1c8) >> 4 & 1) == 0)) {
    FUN_10b8c67d0();
  }
  func_0x0001081091b4(alStack_30);
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 10b8cde28; end: 10b8cde7f;  */

long FUN_10b8cde28(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 8;
}



/* Entry: 10b8cde80; end: 10b8ce1e7;  */

/* WARNING: Possible PIC construction at 0x00010b8cdfa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8cdfac) */

undefined8 * FUN_10b8cde80(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar17;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar9 = param_1;
  if (param_1[3] == 0) goto code_r0x0001080da3f0;
  (*(code *)param_1[4])(param_1);
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uVar8 = param_1[2];
  unaff_x20 = (long *)param_1[3];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_d0 = uStack_e0;
  uStack_c8 = uStack_d8;
  uStack_c0 = uVar8;
  __ZNSt3__15mutex4lockEv(unaff_x20 + 6);
  puVar9 = (undefined8 *)unaff_x20[1];
  puVar16 = (undefined8 *)unaff_x20[2];
  uVar4 = (long)puVar16 - (long)puVar9;
  lVar12 = 0;
  if (uVar4 != 0) {
    lVar12 = ((long)puVar16 - (long)puVar9 >> 3) * 0xaa + -1;
  }
  uVar3 = unaff_x20[4];
  uVar7 = uStack_e0;
  uVar17 = uStack_d8;
  if (lVar12 == unaff_x20[5] + uVar3) {
    if (uVar3 < 0xaa) {
      plVar14 = unaff_x20 + 3;
      puVar13 = (undefined8 *)*plVar14;
      puVar15 = (undefined8 *)*unaff_x20;
      if (uVar4 < (ulong)((long)puVar13 - (long)puVar15)) {
        uVar7 = 0xff0;
        __Znwm();
        if (puVar13 == puVar16) {
          if (puVar9 == puVar15) {
            lVar12 = (long)puVar13 - (long)puVar9 >> 2;
            if (puVar16 == puVar9) {
              lVar12 = 1;
            }
            plStack_70 = plVar14;
            FUN_10b8ce2f8();
            func_0x00010b8cfd08(lVar12 * 2 + 6);
            FUN_10b8ce2d0(&puStack_90,unaff_x20[1],unaff_x20[2]);
            puVar16 = (undefined8 *)unaff_x20[1];
            puVar9 = (undefined8 *)*unaff_x20;
            puVar15 = (undefined8 *)unaff_x20[3];
            puVar13 = (undefined8 *)unaff_x20[2];
            unaff_x20[1] = (long)puStack_88;
            *unaff_x20 = (long)puStack_90;
            unaff_x20[3] = (long)puStack_78;
            unaff_x20[2] = (long)puStack_80;
            puStack_90 = puVar9;
            puStack_88 = puVar16;
            puStack_80 = puVar13;
            puStack_78 = puVar15;
            func_0x00010b8cff38();
            puVar9 = (undefined8 *)unaff_x20[1];
          }
          puVar9[-1] = uVar7;
          unaff_x20[1] = (long)puVar9;
          func_0x00010b8cfd8c();
          goto LAB_10b8cdf20;
        }
        *puVar16 = uVar7;
        unaff_x20[2] = (long)(puVar16 + 1);
        uVar7 = uStack_e0;
        uVar17 = uStack_d8;
      }
      else {
        puVar10 = (undefined8 *)((long)puVar13 - (long)puVar15 >> 2);
        if (puVar13 == puVar15) {
          puVar10 = (undefined8 *)0x1;
        }
        plStack_98 = plVar14;
        FUN_10b8ce2f8();
        puVar13 = (undefined8 *)((long)puVar10 + uVar4);
        puVar15 = puVar10 + param_2;
        uVar8 = 0xff0;
        lVar12 = param_2;
        puStack_b8 = puVar10;
        puStack_b0 = puVar13;
        puStack_a0 = puVar15;
        __Znwm();
        puVar11 = puVar13;
        if (uVar4 == param_2 * 8) {
          if (puVar16 == puVar9) {
            puVar9 = (undefined8 *)0x1;
            plStack_70 = plVar14;
            FUN_10b8ce2f8();
            puStack_78 = puVar9 + lVar12;
            puStack_90 = puVar9;
            puStack_88 = puVar9;
            puStack_80 = puVar9;
            FUN_10b8ce2d0(&puStack_90,puVar13,puVar13);
            puVar2 = puStack_78;
            puVar11 = puStack_80;
            puVar16 = puStack_88;
            puVar9 = puStack_90;
            puStack_b8 = puStack_90;
            puStack_b0 = puStack_88;
            puStack_a0 = puStack_78;
            puStack_90 = puVar10;
            puStack_88 = puVar13;
            puStack_80 = puVar13;
            puStack_78 = puVar15;
            func_0x00010b8cff38();
            puVar10 = puVar9;
            puVar13 = puVar16;
            puVar15 = puVar2;
          }
          else {
            puVar13 = puVar13 + (((long)puVar13 - (long)puVar10 >> 3) + 1) / -2;
            puVar11 = puVar13;
            puStack_b0 = puVar13;
          }
        }
        puVar9 = puVar11 + 1;
        *puVar11 = uVar8;
        puVar16 = (undefined8 *)unaff_x20[2];
        puStack_a8 = puVar9;
        while (puVar11 = (undefined8 *)unaff_x20[1], puVar16 != puVar11) {
          puVar11 = puVar13;
          if (puVar13 == puVar10) {
            if (puVar9 < puVar15) {
              lVar12 = (long)puVar9 - (long)puVar10;
              puVar2 = puVar9 + (((long)puVar15 - (long)puVar9 >> 3) + 1) / 2;
              puVar11 = (undefined8 *)((long)puVar2 - ((long)puVar9 - (long)puVar10));
              puVar9 = puVar2;
              if (lVar12 != 0) {
                _memmove(puVar11,puVar13,lVar12);
              }
            }
            else {
              lVar12 = (long)puVar15 - (long)puVar10 >> 2;
              if ((long)puVar15 - (long)puVar10 == 0) {
                lVar12 = 1;
              }
              plStack_70 = plVar14;
              FUN_10b8ce2f8();
              func_0x00010b8cfd08(lVar12 * 2 + 6);
              FUN_10b8ce2d0(&puStack_90,puVar10,puVar9);
              puVar6 = puStack_78;
              puVar5 = puStack_80;
              puVar11 = puStack_88;
              puVar2 = puStack_90;
              puStack_90 = puVar10;
              puStack_88 = puVar13;
              puStack_80 = puVar9;
              puStack_78 = puVar15;
              func_0x00010b8cff38();
              puVar10 = puVar2;
              puVar9 = puVar5;
              puVar15 = puVar6;
            }
          }
          puVar16 = puVar16 + -1;
          puVar13 = puVar11 + -1;
          *puVar13 = *puVar16;
        }
        puStack_b8 = (undefined8 *)*unaff_x20;
        *unaff_x20 = (long)puVar10;
        unaff_x20[1] = (long)puVar13;
        puStack_a0 = (undefined8 *)unaff_x20[3];
        puStack_a8 = (undefined8 *)unaff_x20[2];
        unaff_x20[2] = (long)puVar9;
        unaff_x20[3] = (long)puVar15;
        puStack_b0 = puVar11;
        func_0x00010b8ce328(&puStack_b8);
        uVar8 = uStack_c0;
        uVar7 = uStack_d0;
        uVar17 = uStack_c8;
      }
    }
    else {
      unaff_x20[4] = uVar3 - 0xaa;
      unaff_x20[1] = (long)(puVar9 + 1);
LAB_10b8cdf20:
      FUN_10b8ce1e8();
      uVar7 = uStack_e0;
      uVar17 = uStack_d8;
    }
  }
  lVar12 = unaff_x20[5];
  uVar4 = lVar12 + unaff_x20[4];
  puVar9 = (undefined8 *)(*(long *)(unaff_x20[1] + (uVar4 / 0xaa) * 8) + (uVar4 % 0xaa) * 0x18);
  puVar9[1] = uVar17;
  *puVar9 = uVar7;
  puVar9[2] = uVar8;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  unaff_x20[5] = lVar12 + 1;
  __ZNSt3__15mutex6unlockEv(unaff_x20 + 6);
  puVar9 = &uStack_d0;
  unaff_x30 = 0x10b8cdfac;
  register0x00000008 = (BADSPACEBASE *)&uStack_e0;
  unaff_x19 = param_1;
  unaff_x29 = puVar1;
code_r0x0001080da3f0:
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 **)((long)register0x00000008 + -0x28) = puVar9;
  func_0x0001080da41c((undefined1 *)((long)register0x00000008 + -0x28));
  return puVar9;
}



/* Entry: 10b8ce1e8; end: 10b8ce2cf;  */

void FUN_10b8ce1e8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  func_0x00010b8cf9f0();
  puStack_50 = (ulong *)(param_1 + 0x18);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *unaff_x19;
    uVar4 = unaff_x19[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_10b8ce2f8();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_10b8ce2d0(&uStack_70,unaff_x19[1],unaff_x19[2]);
      uVar4 = unaff_x19[1];
      uVar7 = *unaff_x19;
      uVar8 = unaff_x19[3];
      uVar6 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x00010b8ce328(&uStack_70);
      puVar5 = (undefined8 *)unaff_x19[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      unaff_x19[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10b8ce2d0; end: 10b8ce2f7;  */

void FUN_10b8ce2d0(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10b8ce2f8; end: 10b8ce397;  */

undefined1  [16] FUN_10b8ce2f8(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bfe188();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10b8ce398; end: 10b8ce3af;  */

void FUN_10b8ce398(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  return;
}



/* Entry: 10b8ce3b0; end: 10b8ce3db;  */

void FUN_10b8ce3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_10b8ce3dc(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10b8ce3dc; end: 10b8ce467;  */

void FUN_10b8ce3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined1 *puVar3;
  int extraout_w11;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  puVar1 = auStack_60;
  func_0x00010b8cf80c();
  uStack_48 = extraout_x8;
  FUN_10b8ce484(auStack_60,1);
  FUN_10b8ce4dc(lStack_50,param_3,param_4,param_5,param_6);
  lVar2 = lStack_50;
  lStack_50 = 0;
  FUN_10b8ce468(param_1,lVar2 + 0x18);
  FUN_10b8ce5b0();
  func_0x00010b8cf7e8(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8_00 = puVar1;
  extraout_x8_00[1] = lVar2;
  puVar3 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1 + 8;
  }
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(long *)(puVar3 + 8) == 0 || (*(long *)(*(long *)(puVar3 + 8) + 8) == -1)))) {
    pcStack_68 = FUN_10b8ce468;
    lStack_78 = extraout_x8_00[1];
    puStack_80 = puVar1;
    puStack_70 = &stack0xfffffffffffffff0;
    if (lStack_78 != 0) {
      do {
        func_0x00010b8cf9bc();
        puVar3 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(puVar3,&puStack_80);
    func_0x000107c284e8(&puStack_80);
    return;
  }
  return;
}



/* Entry: 10b8ce468; end: 10b8ce483;  */

void FUN_10b8ce468(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x00010b8cf9bc();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(lVar1,&lStack_20);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b8ce484; end: 10b8ce4ab;  */

long FUN_10b8ce484(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b8ce4ac();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b8ce4ac; end: 10b8ce4db;  */

undefined8 * FUN_10b8ce4ac(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x73615a240e6c2c) {
    puVar1 = (undefined8 *)(param_2 * 0x238);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d71ed0;
  param_1[1] = 0;
  FUN_10b8c5ef8(param_1 + 3,0);
  return param_1;
}



/* Entry: 10b8ce4dc; end: 10b8ce513;  */

undefined8 * FUN_10b8ce4dc(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d71ed0;
  param_1[1] = 0;
  FUN_10b8c5ef8(param_1 + 3,0);
  return param_1;
}



/* Entry: 10b8ce514; end: 10b8ce517;  */

void FUN_10b8ce514(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71ed0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8ce518; end: 10b8ce52b;  */

void FUN_10b8ce518(void)

{
  func_0x00010b8ce53c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8ce52c; end: 10b8ce54f;  */

void FUN_10b8ce52c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8ce534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8ce550; end: 10b8ce5af;  */

void FUN_10b8ce550(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x00010b8cf9bc();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8ce5b0; end: 10b8ce5bf;  */

void FUN_10b8ce5b0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8ce5c0; end: 10b8ce613;  */

void FUN_10b8ce5c0(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  func_0x0001090fbb04(param_1,param_2 + 1);
  lVar1 = param_2[3];
  plVar2 = param_1 + 2;
  *plVar2 = lVar1;
  *(long *)((long)plVar2 + *(long *)(lVar1 + -0x18)) = param_2[4];
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[5];
  *plVar2 = param_2[6];
  return;
}



/* Entry: 10b8ce614; end: 10b8ce61b;  */

void FUN_10b8ce614(void)

{
  return;
}



/* Entry: 10b8ce61c; end: 10b8ce64b;  */

void FUN_10b8ce61c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110d71f20;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10b8ce64c; end: 10b8ce66f;  */

void FUN_10b8ce64c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110d71f20;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10b8ce670; end: 10b8ce6f7;  */

long FUN_10b8ce670(long param_1,long *param_2,int *param_3)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *param_3 + -1;
  uVar2 = iVar1 == 0;
  if (0 < *param_3) {
    lVar3 = *param_2;
    func_0x00010b8cfe98();
    func_0x00010b8cfb8c();
    while (func_0x00010b8cfb80(), !(bool)uVar2) {
      func_0x00010b8cf90c();
      if (*(int *)(lVar3 + 0x1b0) != 0) {
        return lVar3;
      }
      lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x18);
      FUN_10b8cb394(lVar4,lVar3,iVar1);
      if (lVar4 != 0) {
        return lVar4;
      }
      func_0x00010b8cfd2c();
      lVar3 = lVar4;
    }
  }
  return 0;
}



/* Entry: 10b8ce6f8; end: 10b8ce723;  */

void FUN_10b8ce6f8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b8cfe18(param_2,param_1,&PTR_DAT_110d71f90);
  func_0x00010b8cfcd8();
  return;
}



/* Entry: 10b8ce724; end: 10b8ce72f;  */

undefined ** FUN_10b8ce724(void)

{
  return &PTR_DAT_110d71f90;
}



/* Entry: 10b8ce730; end: 10b8ce7d7;  */

undefined8 * FUN_10b8ce730(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam00000001133fad70 & 1) == 0) {
    iVar1 = 0x133fad70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x70;
      __Znwm();
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[6] = 0x32aaaba7;
      puVar2[8] = 0;
      puVar2[7] = 0;
      puVar2[10] = 0;
      puVar2[9] = 0;
      puVar2[0xc] = 0;
      puVar2[0xb] = 0;
      puVar2[0xd] = 0;
      puRam00000001133fad68 = puVar2;
      ___cxa_guard_release(0x1133fad70);
    }
  }
  return puRam00000001133fad68;
}



/* Entry: 10b8ce7d8; end: 10b8ce7e3;  */

void FUN_10b8ce7d8(undefined8 *param_1)

{
  param_1[1] = *param_1;
  return;
}



/* Entry: 10b8ce7e4; end: 10b8ce8b3;  */

void FUN_10b8ce7e4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long extraout_x8;
  undefined8 *puVar1;
  long extraout_x9;
  long extraout_x10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x30);
  if (*(long *)(param_2 + 0x28) == 0) {
    uVar2 = *param_4;
    uStack_48 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x0001080da3f0(&uStack_48);
    uVar3 = 0;
  }
  else {
    func_0x00010b8cfdb0(*(undefined8 *)(param_2 + 8));
    puVar1 = (undefined8 *)(extraout_x8 + extraout_x9 * extraout_x10);
    uStack_88 = puVar1[1];
    uStack_90 = *puVar1;
    uVar3 = puVar1[2];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_10b8ce8b4(param_2);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uVar2 = *param_4;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    func_0x0001080da3f0(&uStack_78);
    func_0x0001080da3f0(&uStack_60);
  }
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[2] = uVar3;
  param_1[3] = param_2;
  param_1[4] = uVar2;
  __ZNSt3__15mutex6unlockEv(param_2 + 0x30);
  return;
}



/* Entry: 10b8ce8b4; end: 10b8ce953;  */

uint FUN_10b8ce8b4(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  long extraout_x10;
  
  func_0x00010b8cfdb0(*(undefined8 *)(param_1 + 8));
  lVar2 = extraout_x8 + extraout_x9 * extraout_x10;
  func_0x0001080da3f0();
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  func_0x00010b8d00d4();
  if (*(ulong *)(lVar2 + 0x20) < 0xaa) {
    param_2 = 1;
  }
  uVar1 = 0;
  if (*(ulong *)(lVar2 + 0x20) < 0x154) {
    uVar1 = param_2;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(**(undefined8 **)(lVar2 + 8));
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 8;
    *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) + -0xaa;
  }
  return uVar1 ^ 1;
}



/* Entry: 10b8ce954; end: 10b8ce99b;  */

void FUN_10b8ce954(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong unaff_x19;
  long *unaff_x20;
  
  func_0x00010b8cf8a8();
  puVar1 = PTR___ZSt7nothrow_1103469d8;
  while (param_2 != 0) {
    lVar2 = unaff_x19 << 3;
    __ZnwmRKSt9nothrow_t(lVar2,puVar1);
    if (lVar2 != 0) goto LAB_10b8ce990;
    unaff_x19 = unaff_x19 >> 1;
    param_2 = unaff_x19;
  }
  lVar2 = 0;
LAB_10b8ce990:
  *unaff_x20 = lVar2;
  unaff_x20[1] = unaff_x19;
  return;
}



/* Entry: 10b8ce99c; end: 10b8ce9cb;  */

void FUN_10b8ce99c(void)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010b8cf8a8();
  *unaff_x19 = 0;
  FUN_10b8ceb54();
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19[1];
  return;
}



/* Entry: 10b8ce9cc; end: 10b8ceb53;  */

void FUN_10b8ce9cc(long *param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  long *param_6,long param_7)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long extraout_x8;
  long lVar12;
  long *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long *extraout_x9_02;
  long extraout_x10;
  ulong uVar13;
  ulong uVar14;
  long extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  long lVar15;
  long extraout_x12;
  long lVar16;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x25;
  long *plVar17;
  long *plVar18;
  
  cVar5 = SBORROW8((long)param_3,2);
  cVar6 = (long)param_3 + -2 < 0;
  if ((long *)0x1 < param_3) {
    if (param_3 == (long *)0x2) {
      func_0x00010b8cfcf8(param_2[-1]);
      if (cVar6 != cVar5) {
        *param_1 = extraout_x8;
        param_2[-1] = extraout_x9;
      }
    }
    else {
      cVar5 = SBORROW8((long)param_3,0x80);
      cVar6 = (long)(param_3 + -0x10) < 0;
      bVar7 = param_3 == (long *)0x80;
      if ((long)param_3 < 0x81) {
        if (param_1 != param_2) {
          lVar12 = 0;
          plVar8 = param_1;
          while (plVar8 + 1 != param_2) {
            lVar15 = *plVar8;
            lVar1 = plVar8[1];
            iVar2 = *(int *)(lVar1 + 0x1a0);
            lVar4 = lVar12;
            if (iVar2 < *(int *)(lVar15 + 0x1a0)) {
              do {
                lVar16 = lVar4;
                *(long *)((long)param_1 + lVar16 + 8) = lVar15;
                plVar9 = param_1;
                if (lVar16 == 0) goto LAB_10b8cea8c;
                lVar15 = *(long *)((long)param_1 + lVar16 + -8);
                lVar4 = lVar16 + -8;
              } while (iVar2 < *(int *)(lVar15 + 0x1a0));
              plVar9 = (long *)((long)param_1 + lVar16);
LAB_10b8cea8c:
              *plVar9 = lVar1;
            }
            lVar12 = lVar12 + 8;
            plVar8 = plVar8 + 1;
          }
        }
      }
      else {
        plVar8 = param_1;
        plVar9 = param_3;
        func_0x00010b8cfa14();
        if (!bVar7 && cVar6 == cVar5) {
          FUN_10b8ce9cc();
          func_0x00010b8cfa64();
          FUN_10b8ce9cc();
          func_0x00010b8cfbb8();
          do {
            plVar11 = plVar9;
            plVar9 = plVar8;
            if (unaff_x22 == 0) {
              return;
            }
            while( true ) {
              cVar5 = param_7 < unaff_x22 && SBORROW8((long)unaff_x21,param_7);
              cVar6 = param_7 < unaff_x22 && (long)unaff_x21 - param_7 < 0;
              plVar10 = param_2;
              plVar8 = plVar9;
              if (unaff_x22 <= param_7 || (long)unaff_x21 <= param_7) {
                if ((long)unaff_x21 <= unaff_x22) {
                  lVar12 = -(long)param_6;
                  plVar8 = param_6;
                  for (plVar10 = plVar9; plVar10 != param_2; plVar10 = plVar10 + 1) {
                    *plVar8 = *plVar10;
                    lVar12 = lVar12 + -8;
                    plVar8 = plVar8 + 1;
                  }
                  while( true ) {
                    if (plVar8 == param_6) {
                      return;
                    }
                    cVar5 = SBORROW8((long)param_2,(long)plVar11);
                    cVar6 = (long)param_2 - (long)plVar11 < 0;
                    if (param_2 == plVar11) break;
                    func_0x00010b8d009c();
                    lVar12 = extraout_x10_00;
                    if (cVar6 == cVar5) {
                      lVar12 = 0;
                    }
                    param_2 = (long *)((long)param_2 + lVar12);
                    lVar12 = 0;
                    if (cVar6 == cVar5) {
                      lVar12 = extraout_x10_00;
                    }
                    param_6 = (long *)((long)param_6 + lVar12);
                    *plVar9 = extraout_x11_00;
                    lVar12 = extraout_x8_02;
                    plVar8 = extraout_x9_02;
                    plVar9 = plVar9 + 1;
                  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR__memmove_11034c660)(plVar9,param_6,-((long)param_6 + lVar12));
                  return;
                }
                for (lVar12 = 0; (long *)((long)param_2 + lVar12) != plVar11; lVar12 = lVar12 + 8) {
                  *(long *)((long)param_6 + lVar12) = *(long *)((long)param_2 + lVar12);
                }
                plVar8 = (long *)((long)param_6 + lVar12);
                while( true ) {
                  plVar11 = plVar11 + -1;
                  if (plVar8 == param_6) {
                    return;
                  }
                  if (param_2 == plVar9) break;
                  lVar15 = plVar8[-1];
                  lVar12 = param_2[-1];
                  plVar10 = param_2 + -1;
                  if (*(int *)(lVar12 + 0x1a0) <= *(int *)(lVar15 + 0x1a0)) {
                    plVar8 = plVar8 + -1;
                    plVar10 = param_2;
                    lVar12 = lVar15;
                  }
                  param_2 = plVar10;
                  *plVar11 = lVar12;
                }
                while (plVar8 != param_6) {
                  plVar8 = plVar8 + -1;
                  *plVar11 = *plVar8;
                  plVar11 = plVar11 + -1;
                }
                return;
              }
              while( true ) {
                if (unaff_x21 == (long *)0x0) {
                  return;
                }
                func_0x00010b8cfcf8(*plVar10);
                if (cVar6 != cVar5) break;
                unaff_x21 = (long *)((long)unaff_x21 + -1);
                plVar8 = plVar8 + 1;
              }
              if ((long)unaff_x21 < unaff_x22) {
                lVar12 = 0;
                if (extraout_x12 != 0) {
                  lVar12 = unaff_x22 / extraout_x12;
                }
                param_2 = plVar10 + lVar12;
                uVar3 = (long)plVar10 - (long)plVar8 >> 3;
                plVar17 = plVar8;
                while (uVar3 != 0) {
                  uVar13 = uVar3 >> 1;
                  uVar14 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
                  uVar3 = uVar13;
                  if (*(int *)(plVar17[uVar13] + 0x1a0) <= *(int *)(*param_2 + 0x1a0)) {
                    uVar3 = uVar14;
                    plVar17 = plVar17 + uVar13 + 1;
                  }
                }
                plVar18 = (long *)((long)plVar17 - (long)plVar8 >> 3);
              }
              else {
                if (unaff_x21 == (long *)0x1) {
                  *plVar8 = extraout_x8_01;
                  *plVar10 = extraout_x9_01;
                  return;
                }
                plVar18 = (long *)0x0;
                if (extraout_x12 != 0) {
                  plVar18 = (long *)((long)unaff_x21 / extraout_x12);
                }
                plVar17 = plVar8 + (long)plVar18;
                uVar3 = (long)plVar11 - (long)plVar10 >> 3;
                plVar9 = plVar10;
                while (param_2 = plVar9, uVar3 != 0) {
                  uVar14 = uVar3 >> 1;
                  uVar3 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
                  plVar9 = param_2 + uVar14 + 1;
                  if (*(int *)(*plVar17 + 0x1a0) <= *(int *)(param_2[uVar14] + 0x1a0)) {
                    uVar3 = uVar14;
                    plVar9 = param_2;
                  }
                }
                lVar12 = (long)param_2 - (long)plVar10 >> 3;
              }
              unaff_x21 = (long *)((long)unaff_x21 - (long)plVar18);
              unaff_x22 = unaff_x22 - lVar12;
              plVar9 = plVar17;
              FUN_10b8cf010();
              if ((long)unaff_x21 + unaff_x22 <= (long)plVar18 + lVar12) break;
              FUN_10b8ced10(plVar8,plVar17,plVar9,plVar18,lVar12,param_6,param_7);
              if (unaff_x22 == 0) {
                return;
              }
            }
            FUN_10b8ced10(plVar9,param_2,plVar11,unaff_x21,unaff_x22,param_6,param_7);
            param_2 = plVar17;
            unaff_x22 = lVar12;
            unaff_x21 = plVar18;
          } while( true );
        }
        FUN_10b8ceb8c();
        plVar8 = unaff_x21 + unaff_x25;
        func_0x00010b8cfa64();
        FUN_10b8ceb8c();
        param_3 = unaff_x21 + (long)param_3;
        plVar9 = plVar8;
        while (unaff_x21 != plVar8) {
          cVar5 = SBORROW8((long)plVar9,(long)param_3);
          cVar6 = (long)plVar9 - (long)param_3 < 0;
          if (plVar9 == param_3) {
            for (; unaff_x21 != plVar8; unaff_x21 = unaff_x21 + 1) {
              *param_1 = *unaff_x21;
              param_1 = param_1 + 1;
            }
            return;
          }
          func_0x00010b8d009c();
          lVar12 = 0;
          if (cVar6 == cVar5) {
            lVar12 = extraout_x10;
          }
          unaff_x21 = (long *)((long)unaff_x21 + lVar12);
          lVar12 = extraout_x10;
          if (cVar6 == cVar5) {
            lVar12 = 0;
          }
          plVar9 = (long *)(extraout_x9_00 + lVar12);
          *param_1 = extraout_x11;
          param_3 = extraout_x8_00;
          param_1 = param_1 + 1;
        }
        for (; plVar9 != param_3; plVar9 = plVar9 + 1) {
          *param_1 = *plVar9;
          param_1 = param_1 + 1;
        }
      }
    }
  }
  return;
}



/* Entry: 10b8ceb54; end: 10b8ceb6b;  */

void FUN_10b8ceb54(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8ceb6c; end: 10b8ceb8b;  */

void FUN_10b8ceb6c(void)

{
  func_0x00010b8cfe04();
  FUN_10b8ceb54();
  return;
}



/* Entry: 10b8ceb8c; end: 10b8ced0f;  */

void FUN_10b8ceb8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long extraout_x8;
  long lVar4;
  long *plVar5;
  long extraout_x9;
  long lVar6;
  long lVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  
  if (param_3 != 0) {
    func_0x00010b8cfd5c();
    if ((bool)in_ZR) {
      func_0x00010b8cfcf8(unaff_x21[-1]);
      if (in_NG == in_OV) {
        *unaff_x19 = extraout_x9;
        lVar4 = unaff_x21[-1];
      }
      else {
        *unaff_x19 = extraout_x8;
        lVar4 = *unaff_x20;
      }
      unaff_x19[1] = lVar4;
    }
    else if (unaff_x23 == 1) {
      func_0x00010b8d00bc();
    }
    else if (unaff_x23 < 9) {
      if (unaff_x20 != unaff_x21) {
        lVar4 = 0;
        *unaff_x19 = *unaff_x20;
        plVar5 = unaff_x19;
        while (unaff_x20 = unaff_x20 + 1, unaff_x20 != unaff_x21) {
          plVar1 = plVar5 + 1;
          if (*(int *)(*unaff_x20 + 0x1a0) < *(int *)(*plVar5 + 0x1a0)) {
            *plVar1 = *plVar5;
            for (lVar6 = lVar4; plVar5 = unaff_x19, lVar6 != 0; lVar6 = lVar6 + -8) {
              lVar7 = ((long *)((long)unaff_x19 + lVar6))[-1];
              plVar5 = (long *)((long)unaff_x19 + lVar6);
              if (*(int *)(lVar7 + 0x1a0) <= *(int *)(*unaff_x20 + 0x1a0)) break;
              *(long *)((long)unaff_x19 + lVar6) = lVar7;
            }
            *plVar5 = *unaff_x20;
          }
          else {
            *plVar1 = *unaff_x20;
          }
          lVar4 = lVar4 + 8;
          plVar5 = plVar1;
        }
      }
    }
    else {
      func_0x00010b8cfb98();
      FUN_10b8ce9cc();
      func_0x00010b8cfd74();
      FUN_10b8ce9cc();
      plVar5 = unaff_x22;
      for (; unaff_x20 != unaff_x22; unaff_x20 = (long *)((long)unaff_x20 + lVar6)) {
        if (plVar5 == unaff_x21) {
          for (; unaff_x20 != unaff_x22; unaff_x20 = unaff_x20 + 1) {
            *unaff_x19 = *unaff_x20;
            unaff_x19 = unaff_x19 + 1;
          }
          return;
        }
        iVar2 = *(int *)(*plVar5 + 0x1a0);
        iVar3 = *(int *)(*unaff_x20 + 0x1a0);
        lVar4 = *plVar5;
        if (iVar3 <= iVar2) {
          lVar4 = *unaff_x20;
        }
        lVar6 = 8;
        if (iVar3 <= iVar2) {
          lVar6 = 0;
        }
        plVar5 = (long *)((long)plVar5 + lVar6);
        lVar6 = 0;
        if (iVar3 <= iVar2) {
          lVar6 = 8;
        }
        *unaff_x19 = lVar4;
        unaff_x19 = unaff_x19 + 1;
      }
      for (; plVar5 != unaff_x21; plVar5 = plVar5 + 1) {
        *unaff_x19 = *plVar5;
        unaff_x19 = unaff_x19 + 1;
      }
    }
  }
  return;
}



/* Entry: 10b8ced10; end: 10b8cf00f;  */

void FUN_10b8ced10(long *param_1,long *param_2,long *param_3,long param_4,long param_5,long *param_6
                  ,long param_7)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  long *plVar5;
  long *plVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long *extraout_x9_00;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long extraout_x10;
  long extraout_x11;
  long extraout_x12;
  long lVar10;
  long lVar11;
  
  do {
    plVar6 = param_3;
    param_3 = param_1;
    if (param_5 == 0) {
      return;
    }
    while( true ) {
      cVar3 = param_7 < param_5 && SBORROW8(param_4,param_7);
      cVar4 = param_7 < param_5 && param_4 - param_7 < 0;
      plVar5 = param_2;
      param_1 = param_3;
      if (param_5 <= param_7 || param_4 <= param_7) {
        if (param_4 <= param_5) {
          lVar11 = -(long)param_6;
          plVar5 = param_6;
          for (plVar9 = param_3; plVar9 != param_2; plVar9 = plVar9 + 1) {
            *plVar5 = *plVar9;
            lVar11 = lVar11 + -8;
            plVar5 = plVar5 + 1;
          }
          while( true ) {
            if (plVar5 == param_6) {
              return;
            }
            cVar3 = SBORROW8((long)param_2,(long)plVar6);
            cVar4 = (long)param_2 - (long)plVar6 < 0;
            if (param_2 == plVar6) break;
            func_0x00010b8d009c();
            lVar11 = extraout_x10;
            if (cVar4 == cVar3) {
              lVar11 = 0;
            }
            param_2 = (long *)((long)param_2 + lVar11);
            lVar11 = 0;
            if (cVar4 == cVar3) {
              lVar11 = extraout_x10;
            }
            param_6 = (long *)((long)param_6 + lVar11);
            *param_3 = extraout_x11;
            lVar11 = extraout_x8_00;
            plVar5 = extraout_x9_00;
            param_3 = param_3 + 1;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memmove_11034c660)(param_3,param_6,-((long)param_6 + lVar11));
          return;
        }
        for (lVar11 = 0; (long *)((long)param_2 + lVar11) != plVar6; lVar11 = lVar11 + 8) {
          *(long *)((long)param_6 + lVar11) = *(long *)((long)param_2 + lVar11);
        }
        plVar5 = (long *)((long)param_6 + lVar11);
        while( true ) {
          plVar6 = plVar6 + -1;
          if (plVar5 == param_6) {
            return;
          }
          if (param_2 == param_3) break;
          lVar10 = plVar5[-1];
          lVar11 = param_2[-1];
          plVar9 = param_2 + -1;
          if (*(int *)(lVar11 + 0x1a0) <= *(int *)(lVar10 + 0x1a0)) {
            plVar5 = plVar5 + -1;
            plVar9 = param_2;
            lVar11 = lVar10;
          }
          param_2 = plVar9;
          *plVar6 = lVar11;
        }
        while (plVar5 != param_6) {
          plVar5 = plVar5 + -1;
          *plVar6 = *plVar5;
          plVar6 = plVar6 + -1;
        }
        return;
      }
      while( true ) {
        if (param_4 == 0) {
          return;
        }
        func_0x00010b8cfcf8(*plVar5);
        if (cVar4 != cVar3) break;
        param_4 = param_4 + -1;
        param_1 = param_1 + 1;
      }
      if (param_4 < param_5) {
        lVar10 = 0;
        if (extraout_x12 != 0) {
          lVar10 = param_5 / extraout_x12;
        }
        param_2 = plVar5 + lVar10;
        uVar1 = (long)plVar5 - (long)param_1 >> 3;
        plVar9 = param_1;
        while (uVar1 != 0) {
          uVar7 = uVar1 >> 1;
          uVar8 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
          uVar1 = uVar7;
          if (*(int *)(plVar9[uVar7] + 0x1a0) <= *(int *)(*param_2 + 0x1a0)) {
            uVar1 = uVar8;
            plVar9 = plVar9 + uVar7 + 1;
          }
        }
        lVar11 = (long)plVar9 - (long)param_1 >> 3;
      }
      else {
        if (param_4 == 1) {
          *param_1 = extraout_x8;
          *plVar5 = extraout_x9;
          return;
        }
        lVar11 = 0;
        if (extraout_x12 != 0) {
          lVar11 = param_4 / extraout_x12;
        }
        plVar9 = param_1 + lVar11;
        uVar1 = (long)plVar6 - (long)plVar5 >> 3;
        plVar2 = plVar5;
        while (param_2 = plVar2, uVar1 != 0) {
          uVar8 = uVar1 >> 1;
          uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
          plVar2 = param_2 + uVar8 + 1;
          if (*(int *)(*plVar9 + 0x1a0) <= *(int *)(param_2[uVar8] + 0x1a0)) {
            uVar1 = uVar8;
            plVar2 = param_2;
          }
        }
        lVar10 = (long)param_2 - (long)plVar5 >> 3;
      }
      param_4 = param_4 - lVar11;
      param_5 = param_5 - lVar10;
      param_3 = plVar9;
      FUN_10b8cf010();
      if (param_4 + param_5 <= lVar11 + lVar10) break;
      FUN_10b8ced10(param_1,plVar9,param_3,lVar11,lVar10,param_6,param_7);
      if (param_5 == 0) {
        return;
      }
    }
    FUN_10b8ced10(param_3,param_2,plVar6,param_4,param_5,param_6,param_7);
    param_2 = plVar9;
    param_5 = lVar10;
    param_4 = lVar11;
  } while( true );
}



/* Entry: 10b8cf010; end: 10b8cf15b;  */

undefined8 * FUN_10b8cf010(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar7 = param_3;
  if ((param_1 != param_2) && (puVar7 = param_1, param_2 != param_3)) {
    if (param_1 + 1 == param_2) {
      uVar3 = *param_1;
      _memmove(param_1,param_1 + 1,(long)param_3 - (long)param_2);
      puVar7 = (undefined8 *)((long)param_1 + ((long)param_3 - (long)param_2));
      *puVar7 = uVar3;
    }
    else if (param_2 + 1 == param_3) {
      puVar7 = param_3 + -1;
      uVar3 = *puVar7;
      if ((long)puVar7 - (long)param_1 != 0) {
        func_0x00010b8cfac8(param_1,param_2,(long)puVar7 - (long)param_1);
        _memmove();
      }
      *param_1 = uVar3;
      puVar7 = (undefined8 *)((long)param_3 - ((long)puVar7 - (long)param_1));
    }
    else {
      lVar1 = (long)param_2 - (long)param_1;
      lVar4 = lVar1 >> 3;
      lVar6 = (long)param_3 - (long)param_2 >> 3;
      puVar2 = param_2;
      lVar8 = lVar4;
      if (lVar4 == lVar6) {
        for (; puVar7 = param_2, param_1 != param_2 && puVar2 != param_3; param_1 = param_1 + 1) {
          uVar3 = *param_1;
          *param_1 = *puVar2;
          *puVar2 = uVar3;
          puVar2 = puVar2 + 1;
        }
      }
      else {
        do {
          lVar5 = lVar6;
          lVar6 = 0;
          if (lVar5 != 0) {
            lVar6 = lVar8 / lVar5;
          }
          lVar6 = lVar8 - lVar6 * lVar5;
          lVar8 = lVar5;
        } while (lVar6 != 0);
        puVar7 = param_1 + lVar5;
        while (puVar7 != param_1) {
          puVar7 = puVar7 + -1;
          uVar3 = *puVar7;
          puVar2 = (undefined8 *)(lVar1 + (long)puVar7);
          puVar10 = puVar7;
          do {
            puVar9 = puVar2;
            *puVar10 = *puVar9;
            lVar6 = (long)param_3 - (long)puVar9 >> 3;
            puVar2 = (undefined8 *)((long)puVar9 + lVar1);
            if (lVar6 <= lVar4) {
              puVar2 = param_1 + (lVar4 - lVar6);
            }
            puVar10 = puVar9;
          } while (puVar2 != puVar7);
          *puVar9 = uVar3;
        }
        puVar7 = (undefined8 *)(((long)param_3 - (long)param_2) + (long)param_1);
      }
    }
  }
  return puVar7;
}



/* Entry: 10b8cf15c; end: 10b8cf2f7;  */

void FUN_10b8cf15c(ulong *param_1,ulong *param_2,ulong *param_3,undefined8 param_4,
                  undefined8 param_5,ulong *param_6,long param_7)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *unaff_x21;
  ulong *puVar12;
  long unaff_x22;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  long unaff_x25;
  ulong *puVar16;
  ulong uVar17;
  ulong *puStack_70;
  
  if ((ulong *)0x1 < param_3) {
    if (param_3 == (ulong *)0x2) {
      uVar7 = param_2[-1];
      FUN_10b8cf2f8(uVar7,*param_1);
      if ((int)uVar7 != 0) {
        uVar7 = *param_1;
        *param_1 = param_2[-1];
        param_2[-1] = uVar7;
      }
    }
    else {
      cVar4 = SBORROW8((long)param_3,0x80);
      cVar5 = (long)(param_3 + -0x10) < 0;
      bVar6 = param_3 == (ulong *)0x80;
      if ((long)param_3 < 0x81) {
        if (param_1 != param_2) {
          lVar13 = 0;
          puVar8 = param_1;
          while (puVar12 = puVar8 + 1, puVar12 != param_2) {
            uVar7 = puVar8[1];
            FUN_10b8cf2f8(uVar7,*puVar8);
            if ((int)uVar7 != 0) {
              uVar7 = *puVar12;
              lVar2 = lVar13;
              do {
                lVar15 = lVar2;
                puVar1 = (undefined8 *)((long)param_1 + lVar15);
                puVar1[1] = *puVar1;
                puVar8 = param_1;
                if (lVar15 == 0) goto LAB_10b8cf224;
                uVar10 = uVar7;
                FUN_10b8cf2f8(uVar7,puVar1[-1]);
                lVar2 = lVar15 + -8;
              } while ((uVar10 & 1) != 0);
              puVar8 = (ulong *)((long)param_1 + lVar15);
LAB_10b8cf224:
              *puVar8 = uVar7;
            }
            lVar13 = lVar13 + 8;
            puVar8 = puVar12;
          }
        }
      }
      else {
        puVar8 = param_1;
        puStack_70 = param_3;
        func_0x00010b8cfa14();
        if (!bVar6 && cVar5 == cVar4) {
          FUN_10b8cf15c();
          func_0x00010b8cfa64();
          FUN_10b8cf15c();
          func_0x00010b8cfbb8();
          do {
            puVar11 = puVar8;
            puVar12 = param_2;
            lVar13 = unaff_x22;
            puVar16 = unaff_x21;
            if (unaff_x22 == 0) {
              return;
            }
            while( true ) {
              puVar8 = puVar11;
              if (lVar13 <= param_7 || (long)puVar16 <= param_7) {
                if ((long)puVar16 <= lVar13) {
                  lVar13 = -(long)param_6;
                  puVar16 = param_6;
                  for (; puVar8 != puVar12; puVar8 = puVar8 + 1) {
                    *puVar16 = *puVar8;
                    lVar13 = lVar13 + -8;
                    puVar16 = puVar16 + 1;
                  }
                  while( true ) {
                    if (puVar16 == param_6) {
                      return;
                    }
                    if (puVar12 == puStack_70) break;
                    uVar7 = *puVar12;
                    FUN_10b8cf2f8(uVar7,*param_6);
                    bVar6 = (int)uVar7 == 0;
                    puVar8 = puVar12;
                    if (bVar6) {
                      puVar8 = param_6;
                    }
                    lVar2 = 8;
                    if (bVar6) {
                      lVar2 = 0;
                    }
                    puVar12 = (ulong *)((long)puVar12 + lVar2);
                    lVar2 = 0;
                    if (bVar6) {
                      lVar2 = 8;
                    }
                    param_6 = (ulong *)((long)param_6 + lVar2);
                    *puVar11 = *puVar8;
                    puVar11 = puVar11 + 1;
                  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR__memmove_11034c660)(puVar11,param_6,-((long)param_6 + lVar13));
                  return;
                }
                for (lVar13 = 0; (ulong *)((long)puVar12 + lVar13) != puStack_70;
                    lVar13 = lVar13 + 8) {
                  *(ulong *)((long)param_6 + lVar13) = *(ulong *)((long)puVar12 + lVar13);
                }
                puVar8 = (ulong *)((long)param_6 + lVar13);
                while( true ) {
                  puStack_70 = puStack_70 + -1;
                  if (puVar8 == param_6) {
                    return;
                  }
                  if (puVar12 == puVar11) break;
                  uVar7 = puVar8[-1];
                  FUN_10b8cf2f8(uVar7,puVar12[-1]);
                  puVar16 = puVar8;
                  puVar3 = puVar12 + -1;
                  puVar14 = puVar12;
                  if ((int)uVar7 == 0) {
                    puVar16 = puVar8 + -1;
                    puVar3 = puVar12;
                    puVar14 = puVar8;
                  }
                  puVar12 = puVar3;
                  *puStack_70 = puVar14[-1];
                  puVar8 = puVar16;
                }
                while (puVar8 != param_6) {
                  puVar8 = puVar8 + -1;
                  *puStack_70 = *puVar8;
                  puStack_70 = puStack_70 + -1;
                }
                return;
              }
              while( true ) {
                if (puVar16 == (ulong *)0x0) {
                  return;
                }
                uVar7 = *puVar12;
                func_0x00010b8cfe28();
                if ((uVar7 & 1) != 0) break;
                puVar16 = (ulong *)((long)puVar16 + -1);
                puVar8 = puVar8 + 1;
              }
              if ((long)puVar16 < lVar13) {
                unaff_x22 = lVar13 / 2;
                puVar14 = puVar12 + unaff_x22;
                uVar7 = (long)puVar12 - (long)puVar8 >> 3;
                param_2 = puVar8;
                while (uVar7 != 0) {
                  uVar17 = uVar7 >> 1;
                  uVar9 = *puVar14;
                  FUN_10b8cf2f8(uVar9,param_2[uVar17]);
                  uVar10 = uVar7 + (uVar7 >> 1 ^ 0xffffffffffffffff);
                  uVar7 = uVar17;
                  if ((int)uVar9 == 0) {
                    uVar7 = uVar10;
                    param_2 = param_2 + uVar17 + 1;
                  }
                }
                unaff_x21 = (ulong *)((long)param_2 - (long)puVar8 >> 3);
              }
              else {
                if (puVar16 == (ulong *)0x1) {
                  uVar7 = *puVar8;
                  *puVar8 = *puVar12;
                  *puVar12 = uVar7;
                  return;
                }
                unaff_x21 = (ulong *)((long)puVar16 / 2);
                param_2 = puVar8 + (long)unaff_x21;
                uVar7 = (long)puStack_70 - (long)puVar12 >> 3;
                puVar11 = puVar12;
                while (puVar14 = puVar11, uVar7 != 0) {
                  uVar9 = uVar7 >> 1;
                  uVar10 = puVar14[uVar9];
                  FUN_10b8cf2f8(uVar10,*param_2);
                  uVar7 = uVar7 + (uVar7 >> 1 ^ 0xffffffffffffffff);
                  puVar11 = puVar14 + uVar9 + 1;
                  if ((int)uVar10 == 0) {
                    uVar7 = uVar9;
                    puVar11 = puVar14;
                  }
                }
                unaff_x22 = (long)puVar14 - (long)puVar12 >> 3;
              }
              puVar16 = (ulong *)((long)puVar16 - (long)unaff_x21);
              lVar13 = lVar13 - unaff_x22;
              puVar11 = param_2;
              FUN_10b8cf010(param_2,puVar12,puVar14);
              if ((long)puVar16 + lVar13 <= (long)unaff_x21 + unaff_x22) break;
              FUN_10b8cf4b8(puVar8,param_2,puVar11,unaff_x21,unaff_x22,param_6,param_7);
              puVar12 = puVar14;
              if (lVar13 == 0) {
                return;
              }
            }
            FUN_10b8cf4b8(puVar11,puVar14,puStack_70,puVar16,lVar13,param_6,param_7);
            puStack_70 = puVar11;
          } while( true );
        }
        FUN_10b8cf334();
        puVar8 = unaff_x21 + unaff_x25;
        func_0x00010b8cfa64();
        FUN_10b8cf334();
        param_3 = unaff_x21 + (long)param_3;
        puVar12 = puVar8;
        while (unaff_x21 != puVar8) {
          if (puVar12 == param_3) {
            for (; unaff_x21 != puVar8; unaff_x21 = unaff_x21 + 1) {
              *param_1 = *unaff_x21;
              param_1 = param_1 + 1;
            }
            return;
          }
          uVar7 = *puVar12;
          FUN_10b8cf2f8(uVar7,*unaff_x21);
          bVar6 = (int)uVar7 == 0;
          puVar16 = puVar12;
          if (bVar6) {
            puVar16 = unaff_x21;
          }
          lVar13 = 0;
          if (bVar6) {
            lVar13 = 8;
          }
          unaff_x21 = (ulong *)((long)unaff_x21 + lVar13);
          lVar13 = 8;
          if (bVar6) {
            lVar13 = 0;
          }
          puVar12 = (ulong *)((long)puVar12 + lVar13);
          *param_1 = *puVar16;
          param_1 = param_1 + 1;
        }
        for (; puVar12 != param_3; puVar12 = puVar12 + 1) {
          *param_1 = *puVar12;
          param_1 = param_1 + 1;
        }
      }
    }
  }
  return;
}



/* Entry: 10b8cf2f8; end: 10b8cf333;  */

bool FUN_10b8cf2f8(float param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  
  FUN_10b8cc524();
  fVar1 = param_1;
  FUN_10b8cc524(param_3);
  return fVar1 < param_1;
}



/* Entry: 10b8cf334; end: 10b8cf4b7;  */

void FUN_10b8cf334(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long lVar4;
  long unaff_x23;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (param_3 != 0) {
    func_0x00010b8cfd5c();
    if ((bool)in_ZR) {
      iVar2 = (int)unaff_x21[-1];
      func_0x00010b8cfe28();
      if (iVar2 == 0) {
        func_0x00010b8d00bc();
        uVar3 = unaff_x21[-1];
      }
      else {
        *unaff_x19 = unaff_x21[-1];
        uVar3 = *unaff_x20;
      }
      unaff_x19[1] = uVar3;
    }
    else if (unaff_x23 == 1) {
      func_0x00010b8d00bc();
    }
    else if (unaff_x23 < 9) {
      if (unaff_x20 != unaff_x21) {
        lVar4 = 0;
        func_0x00010b8d00bc();
        puVar5 = unaff_x19;
        while (unaff_x20 = unaff_x20 + 1, unaff_x20 != unaff_x21) {
          uVar3 = *unaff_x20;
          FUN_10b8cf2f8(uVar3,*puVar5);
          if ((int)uVar3 == 0) {
            puVar5[1] = *unaff_x20;
          }
          else {
            puVar5[1] = *puVar5;
            for (lVar6 = lVar4; puVar7 = unaff_x19, lVar6 != 0; lVar6 = lVar6 + -8) {
              uVar3 = *unaff_x20;
              puVar7 = (undefined8 *)((long)unaff_x19 + lVar6);
              FUN_10b8cf2f8(uVar3,puVar7[-1]);
              if ((int)uVar3 == 0) break;
              *(undefined8 *)((long)unaff_x19 + lVar6) = puVar7[-1];
            }
            *puVar7 = *unaff_x20;
          }
          lVar4 = lVar4 + 8;
          puVar5 = puVar5 + 1;
        }
      }
    }
    else {
      func_0x00010b8cfb98();
      FUN_10b8cf15c();
      func_0x00010b8cfd74();
      FUN_10b8cf15c();
      puVar5 = unaff_x22;
      for (; unaff_x20 != unaff_x22; unaff_x20 = (undefined8 *)((long)unaff_x20 + lVar4)) {
        if (puVar5 == unaff_x21) {
          for (; unaff_x20 != unaff_x22; unaff_x20 = unaff_x20 + 1) {
            *unaff_x19 = *unaff_x20;
            unaff_x19 = unaff_x19 + 1;
          }
          return;
        }
        iVar2 = (int)*puVar5;
        func_0x00010b8cfe28();
        bVar1 = iVar2 == 0;
        puVar7 = puVar5;
        if (bVar1) {
          puVar7 = unaff_x20;
        }
        lVar4 = 8;
        if (bVar1) {
          lVar4 = 0;
        }
        puVar5 = (undefined8 *)((long)puVar5 + lVar4);
        lVar4 = 0;
        if (bVar1) {
          lVar4 = 8;
        }
        *unaff_x19 = *puVar7;
        unaff_x19 = unaff_x19 + 1;
      }
      for (; puVar5 != unaff_x21; puVar5 = puVar5 + 1) {
        *unaff_x19 = *puVar5;
        unaff_x19 = unaff_x19 + 1;
      }
    }
  }
  return;
}



/* Entry: 10b8cf4b8; end: 10b8cf7e7;  */

void FUN_10b8cf4b8(ulong *param_1,ulong *param_2,ulong *param_3,long param_4,long param_5,
                  ulong *param_6,long param_7)

{
  ulong *puVar1;
  ulong *puVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong *puStack_70;
  
  puStack_70 = param_3;
  do {
    puVar7 = param_1;
    puVar9 = param_2;
    lVar11 = param_5;
    lVar12 = param_4;
    if (param_5 == 0) {
      return;
    }
    while( true ) {
      param_1 = puVar7;
      if (lVar11 <= param_7 || lVar12 <= param_7) {
        if (lVar12 <= lVar11) {
          lVar12 = -(long)param_6;
          puVar10 = param_6;
          for (puVar8 = puVar7; puVar8 != puVar9; puVar8 = puVar8 + 1) {
            *puVar10 = *puVar8;
            lVar12 = lVar12 + -8;
            puVar10 = puVar10 + 1;
          }
          while( true ) {
            if (puVar10 == param_6) {
              return;
            }
            if (puVar9 == puStack_70) break;
            uVar4 = *puVar9;
            FUN_10b8cf2f8(uVar4,*param_6);
            bVar3 = (int)uVar4 == 0;
            puVar8 = puVar9;
            if (bVar3) {
              puVar8 = param_6;
            }
            lVar11 = 8;
            if (bVar3) {
              lVar11 = 0;
            }
            puVar9 = (ulong *)((long)puVar9 + lVar11);
            lVar11 = 0;
            if (bVar3) {
              lVar11 = 8;
            }
            param_6 = (ulong *)((long)param_6 + lVar11);
            *puVar7 = *puVar8;
            puVar7 = puVar7 + 1;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memmove_11034c660)(puVar7,param_6,-((long)param_6 + lVar12));
          return;
        }
        for (lVar12 = 0; (ulong *)((long)puVar9 + lVar12) != puStack_70; lVar12 = lVar12 + 8) {
          *(ulong *)((long)param_6 + lVar12) = *(ulong *)((long)puVar9 + lVar12);
        }
        puVar8 = (ulong *)((long)param_6 + lVar12);
        while( true ) {
          puStack_70 = puStack_70 + -1;
          if (puVar8 == param_6) {
            return;
          }
          if (puVar9 == puVar7) break;
          uVar4 = puVar8[-1];
          FUN_10b8cf2f8(uVar4,puVar9[-1]);
          puVar10 = puVar8;
          puVar2 = puVar9 + -1;
          puVar1 = puVar9;
          if ((int)uVar4 == 0) {
            puVar10 = puVar8 + -1;
            puVar2 = puVar9;
            puVar1 = puVar8;
          }
          puVar9 = puVar2;
          *puStack_70 = puVar1[-1];
          puVar8 = puVar10;
        }
        while (puVar8 != param_6) {
          puVar8 = puVar8 + -1;
          *puStack_70 = *puVar8;
          puStack_70 = puStack_70 + -1;
        }
        return;
      }
      while( true ) {
        if (lVar12 == 0) {
          return;
        }
        uVar4 = *puVar9;
        func_0x00010b8cfe28();
        if ((uVar4 & 1) != 0) break;
        lVar12 = lVar12 + -1;
        param_1 = param_1 + 1;
      }
      if (lVar12 < lVar11) {
        param_5 = lVar11 / 2;
        puVar8 = puVar9 + param_5;
        uVar4 = (long)puVar9 - (long)param_1 >> 3;
        param_2 = param_1;
        while (uVar4 != 0) {
          uVar13 = uVar4 >> 1;
          uVar5 = *puVar8;
          FUN_10b8cf2f8(uVar5,param_2[uVar13]);
          uVar6 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
          uVar4 = uVar13;
          if ((int)uVar5 == 0) {
            uVar4 = uVar6;
            param_2 = param_2 + uVar13 + 1;
          }
        }
        param_4 = (long)param_2 - (long)param_1 >> 3;
      }
      else {
        if (lVar12 == 1) {
          uVar4 = *param_1;
          *param_1 = *puVar9;
          *puVar9 = uVar4;
          return;
        }
        param_4 = lVar12 / 2;
        param_2 = param_1 + param_4;
        uVar4 = (long)puStack_70 - (long)puVar9 >> 3;
        puVar7 = puVar9;
        while (puVar8 = puVar7, uVar4 != 0) {
          uVar5 = uVar4 >> 1;
          uVar6 = puVar8[uVar5];
          FUN_10b8cf2f8(uVar6,*param_2);
          uVar4 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
          puVar7 = puVar8 + uVar5 + 1;
          if ((int)uVar6 == 0) {
            uVar4 = uVar5;
            puVar7 = puVar8;
          }
        }
        param_5 = (long)puVar8 - (long)puVar9 >> 3;
      }
      lVar12 = lVar12 - param_4;
      lVar11 = lVar11 - param_5;
      puVar7 = param_2;
      FUN_10b8cf010(param_2,puVar9,puVar8);
      if (lVar12 + lVar11 <= param_4 + param_5) break;
      FUN_10b8cf4b8(param_1,param_2,puVar7,param_4,param_5,param_6,param_7);
      puVar9 = puVar8;
      if (lVar11 == 0) {
        return;
      }
    }
    FUN_10b8cf4b8(puVar7,puVar8,puStack_70,lVar12,lVar11,param_6,param_7);
    puStack_70 = puVar7;
  } while( true );
}



/* Entry: 10b8cf7e8; end: 10b8d0147;  */

void FUN_10b8cf7e8(void)

{
  return;
}



/* Entry: 10b8d0148; end: 10b8d0253;  */

long FUN_10b8d0148(long param_1)

{
  func_0x000107c278f4(param_1 + 0x30);
  func_0x000107c278f4(param_1 + 0x28);
  func_0x000107c278f4(param_1 + 0x20);
  func_0x000107c278f4(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b8d0254; end: 10b8d029b;  */

bool FUN_10b8d0254(long param_1)

{
  if ((((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 0xc) == 0)) &&
      ((*(long *)(param_1 + 0x20) == 0 || (*(int *)(*(long *)(param_1 + 0x20) + 0xc) == 0)))) &&
     ((*(long *)(param_1 + 0x28) == 0 || (*(int *)(*(long *)(param_1 + 0x28) + 0xc) == 0)))) {
    if (*(long *)(param_1 + 0x30) != 0) {
      return *(int *)(*(long *)(param_1 + 0x30) + 0xc) != 0;
    }
    return false;
  }
  return true;
}



/* Entry: 10b8d029c; end: 10b8d0433;  */

int FUN_10b8d029c(double param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *extraout_x9;
  int iVar2;
  undefined1 auStack_30 [8];
  char cStack_28;
  
  iVar2 = *(int *)((long)param_2 + 0xc);
  if (iVar2 == 0) {
    func_0x00010b8d044c(*param_2);
    (*extraout_x9)();
    if ((cStack_28 == '\x01') || (FUN_10b9a92f0(auStack_30), 0.0 < param_1)) {
      puVar1 = param_2;
      func_0x00010b8d0188();
      if ((int)puVar1 == 1) {
        puVar1 = param_2;
        FUN_10b8d0254();
        if ((int)puVar1 == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = 3;
          if ((param_2[6] != 0) && (iVar2 = 3, *(int *)(param_2[6] + 0xc) != 0)) {
            iVar2 = 4;
          }
        }
      }
      else {
        iVar2 = 2;
      }
    }
    else {
      iVar2 = 5;
    }
    func_0x00010b8d045c();
  }
  return iVar2;
}



/* Entry: 10b8d0434; end: 10b8d046f;  */

bool FUN_10b8d0434(long param_1)

{
  return *(int *)(param_1 + 0xc) != 0;
}



/* Entry: 10b8d0470; end: 10b8d2617;  */

undefined8 * FUN_10b8d0470(undefined8 *param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  *param_1 = &PTR_DAT_110d71fb0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110d71ff0;
  func_0x000108108cd0(param_1 + 4,param_2);
  func_0x00010b8d0514(param_1 + 6,*(undefined8 *)(param_2 + 0x1d0));
  lVar5 = 0;
  if ((*(long *)(param_2 + 0x1d0) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_2 + 0x1d0) + 0xb8), lVar5 != 0)) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[8] = lVar5;
  uVar2 = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 9) = param_3;
  *(undefined4 *)((long)param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  return param_1;
}



/* Entry: 10b8d2618; end: 10b8d2913;  */

undefined8 *
FUN_10b8d2618(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 *param_5
             ,long param_6,undefined1 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar5;
  int extraout_w11;
  int extraout_w11_00;
  
  *param_1 = &PTR_FUN_110d72080;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110d720c0;
  lVar4 = *param_2;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    do {
      func_0x00010b8d7258();
      lVar4 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[4] = lVar4;
  uVar5 = 0;
  if (*param_3 != 0) {
    do {
      func_0x00010b8d72d0();
      uVar5 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  param_1[5] = uVar5;
  param_1[6] = param_4;
  uVar5 = *param_5;
  *param_5 = 0;
  param_5[1] = 0;
  param_1[7] = uVar5;
  param_1[8] = &UNK_10dd5b8b0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = &UNK_10dd5b8b0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  if (param_6 != 0) {
    plVar1 = (long *)(param_6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x1a] = param_6;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x27] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  FUN_10b9a1f28(param_1 + 0x28);
  param_1[0x31] = &UNK_10dd5b8b0;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)((long)param_1 + 0x1d4) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  *(undefined8 *)((long)param_1 + 0x1bd) = 0;
  *(undefined1 *)((long)param_1 + 0x1d9) = param_7;
  *(undefined8 *)((long)param_1 + 0x1da) = 0x1000101000000;
  *(undefined8 *)((long)param_1 + 0x1e4) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return param_1;
}



/* Entry: 10b8d2914; end: 10b8d296f;  */

void FUN_10b8d2914(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  FUN_10b8d2998();
  if (*(char *)(param_1 + 0x208) == '\x01') {
    *(undefined1 *)(param_1 + 0x208) = 0;
  }
  if (*(char *)(param_1 + 0x218) == '\x01') {
    *(undefined1 *)(param_1 + 0x218) = 0;
  }
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  lVar2 = 0;
  func_0x00010b8d2a90(param_1 + 0x38);
  FUN_10b8d2acc(param_1 + 0x40);
  plVar1 = (long *)(param_1 + 0xe0);
  func_0x00010b8d5374();
  lVar3 = lVar2;
  func_0x00010b8d7708();
  do {
    lVar7 = lVar2 + -0xff0;
    do {
      if (lVar2 == lVar3) {
        *(undefined8 *)(param_1 + 0x108) = 0;
        puVar4 = *(undefined8 **)(param_1 + 0xe8);
        while (uVar6 = *(long *)(param_1 + 0xf0) - (long)puVar4 >> 3, 2 < uVar6) {
          __ZdlPv(*puVar4);
          puVar4 = (undefined8 *)(*(long *)(param_1 + 0xe8) + 8);
          *(undefined8 **)(param_1 + 0xe8) = puVar4;
        }
        if (uVar6 == 1) {
          uVar5 = 0x11;
        }
        else {
          if (uVar6 != 2) {
            return;
          }
          uVar5 = 0x22;
        }
        *(undefined8 *)(param_1 + 0x100) = uVar5;
        return;
      }
      FUN_10b8d52a0(lVar2);
      lVar2 = lVar2 + 0x78;
      lVar7 = lVar7 + 0x78;
    } while (*plVar1 != lVar7);
    plVar1 = plVar1 + 1;
    lVar2 = *plVar1;
  } while( true );
}



/* Entry: 10b8d2970; end: 10b8d297b;  */

undefined8 * FUN_10b8d2970(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_110d72080;
  param_1[3] = &PTR_DAT_110d720c0;
  FUN_10b8d2914();
  lVar2 = param_1[0x44];
  param_1[0x44] = 0;
  if (lVar2 != 0) {
    func_0x00010b8d7400();
  }
  lVar2 = param_1[0x34];
  if (lVar2 != 0) {
    lVar5 = 8;
    for (lVar3 = 0; lVar3 != lVar2; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(param_1[0x31] + lVar3)) {
        func_0x00010b8b5d14(param_1[0x32] + lVar5);
        lVar2 = param_1[0x34];
      }
      lVar5 = lVar5 + 0x10;
    }
    __ZdlPv();
    param_1[0x36] = 0;
    param_1[0x31] = &UNK_10dd5b8b0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
  }
  FUN_10b9a1f40(param_1 + 0x28);
  func_0x00010b8a0948(param_1 + 0x25);
  func_0x00010b8a0948(param_1 + 0x22);
  FUN_10b8d2b84(param_1 + 0x1c);
  puVar1 = (undefined8 *)param_1[0x1e];
  for (puVar4 = (undefined8 *)param_1[0x1d]; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  lVar2 = param_1[0x1e];
  while (lVar2 != param_1[0x1d]) {
    lVar2 = lVar2 + -8;
    param_1[0x1e] = lVar2;
  }
  if (param_1[0x1c] != 0) {
    __ZdlPv();
  }
  FUN_10b8d532c(param_1 + 0x1b);
  func_0x000104bd56f4(param_1 + 0x1a);
  func_0x0001080c5c5c(param_1 + 0x19);
  func_0x00010b8b5d14(param_1 + 0x18);
  func_0x00010b8d0fd0(param_1 + 0x17);
  func_0x00010b8d5320(param_1[0x16]);
  func_0x00010b8d5314(param_1[0x15]);
  func_0x0001080da474(param_1 + 0x14);
  lVar2 = param_1[0x11];
  if (lVar2 != 0) {
    lVar5 = 8;
    for (lVar3 = 0; lVar3 != lVar2; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(param_1[0xe] + lVar3)) {
        func_0x0001080da474(param_1[0xf] + lVar5);
        lVar2 = param_1[0x11];
      }
      lVar5 = lVar5 + 0x10;
    }
    __ZdlPv();
    param_1[0x13] = 0;
    param_1[0xe] = &UNK_10dd5b8b0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  FUN_10b8d4a24(param_1 + 8);
  func_0x000104c62548(param_1 + 7);
  func_0x0001080d5ce8(param_1 + 5);
  func_0x0001052768f0(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b8d297c; end: 10b8d298f;  */

void FUN_10b8d297c(void)

{
  func_0x00010b8d2760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8d2990; end: 10b8d2997;  */

void FUN_10b8d2990(long param_1)

{
  func_0x00010b8d2760(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8d2998; end: 10b8d2acb;  */

void FUN_10b8d2998(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  double dVar6;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(*(long *)(*(long *)(param_1 + 0x38) + 0x40) + 0x50);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((*(char *)(param_1 + 0x208) == '\x01') && (*(char *)(param_1 + 0x218) == '\x01')) &&
         (dVar6 = (double)(*(long *)(param_1 + 0x210) - *(long *)(param_1 + 0x200)) / 1000000.0,
         32.0 < dVar6)) {
        if (((ulong)(long)((((double)*(long *)(param_1 + 0x1f8) / 1000000.0) / dVar6) * 100.0) < 5)
           || ((**(code **)(*plVar5 + 0x118))(plVar5,*(long *)(param_1 + 0x20) + 0x38),
              *(char *)(param_1 + 0x208) == '\x01')) {
          *(undefined1 *)(param_1 + 0x208) = 0;
        }
        if (*(char *)(param_1 + 0x218) == '\x01') {
          *(undefined1 *)(param_1 + 0x218) = 0;
        }
        *(undefined8 *)(param_1 + 0x1f8) = 0;
      }
    }
  }
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104bd5894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b8d2acc; end: 10b8d2b83;  */

void FUN_10b8d2acc(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_1[2] != 0) {
    uVar2 = param_1[3];
    if (0x7f < uVar2) {
      lVar1 = param_1[3];
      if (lVar1 != 0) {
        lVar3 = 0;
        for (lVar4 = 0; lVar4 != lVar1; lVar4 = lVar4 + 1) {
          if (-1 < *(char *)(*param_1 + lVar4)) {
            FUN_10b8d4aa0(param_1[1] + lVar3);
            lVar1 = param_1[3];
          }
          lVar3 = lVar3 + 0x10;
        }
        __ZdlPv();
        param_1[5] = 0;
        *param_1 = (long)&UNK_10dd5b8b0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      return;
    }
    if (uVar2 != 0) {
      lVar1 = 0;
      for (uVar5 = 0; uVar5 != uVar2; uVar5 = uVar5 + 1) {
        if (-1 < *(char *)(*param_1 + uVar5)) {
          FUN_10b8d4aa0(param_1[1] + lVar1);
          uVar2 = param_1[3];
        }
        lVar1 = lVar1 + 0x10;
      }
      param_1[2] = 0;
      _memset(*param_1,0x80,uVar2 + 8);
      *(undefined1 *)(*param_1 + uVar2) = 0xff;
      uVar2 = param_1[3];
      lVar1 = 6;
      if (uVar2 != 7) {
        lVar1 = uVar2 - (uVar2 >> 3);
      }
      func_0x00010b8d74f0(lVar1);
    }
  }
  return;
}



/* Entry: 10b8d2b84; end: 10b8d2c47;  */

void FUN_10b8d2b84(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = param_1;
  func_0x00010b8d5374();
  lVar3 = param_2;
  func_0x00010b8d7708();
  do {
    lVar5 = param_2 + -0xff0;
    do {
      if (param_2 == lVar3) {
        param_1[5] = 0;
        puVar2 = (undefined8 *)param_1[1];
        while (uVar4 = param_1[2] - (long)puVar2 >> 3, 2 < uVar4) {
          __ZdlPv(*puVar2);
          puVar2 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar2;
        }
        if (uVar4 == 1) {
          lVar3 = 0x11;
        }
        else {
          if (uVar4 != 2) {
            return;
          }
          lVar3 = 0x22;
        }
        param_1[4] = lVar3;
        return;
      }
      FUN_10b8d52a0(param_2);
      param_2 = param_2 + 0x78;
      lVar5 = lVar5 + 0x78;
    } while (*plVar1 != lVar5);
    plVar1 = plVar1 + 1;
    param_2 = *plVar1;
  } while( true );
}



/* Entry: 10b8d2c48; end: 10b8d2c93;  */

void FUN_10b8d2c48(undefined8 *param_1)

{
  long lStack_28;
  
  FUN_10b8d2c94(&lStack_28);
  if (lStack_28 != 0) {
    FUN_10b8c646c(param_1,lStack_28);
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10b8d2c94; end: 10b8d2d53;  */

void FUN_10b8d2c94(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long lVar3;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar2 = *(long *)(param_2 + 0xa0);
  if (lVar2 == 0) {
    lStack_38 = 0;
    *param_1 = 0;
  }
  else {
    if (*(long *)(lVar2 + 0x10) != 0) {
      do {
        func_0x00010b8d74bc();
      } while (extraout_w10 != 0);
    }
    uStack_40 = 0;
    lStack_50 = 0;
    lStack_48 = 0;
    lVar1 = param_3[1];
    lStack_38 = lVar2;
    for (lVar3 = *param_3; lVar3 != lVar1; lVar3 = lVar3 + 0x10) {
      FUN_10b8cbbd4();
      if ((lStack_50 == lStack_48) ||
         ((ulong)(lStack_48 - lStack_50 >> 3) <= (ulong)(long)*(int *)(lVar3 + 8)))
      goto LAB_10b8d2d38;
      FUN_10b8d2d54(&lStack_38,lStack_50 + (long)*(int *)(lVar3 + 8) * 8);
      FUN_10b8ccf78(&lStack_50);
    }
    *param_1 = lStack_38;
    param_1 = &lStack_38;
LAB_10b8d2d38:
    *param_1 = 0;
    func_0x00010b8ccf10(&lStack_50);
    lVar2 = lStack_38;
  }
  func_0x0001080d289c(lVar2);
  return;
}



/* Entry: 10b8d2d54; end: 10b8d2d9b;  */

void FUN_10b8d2d54(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  long *unaff_x19;
  
  func_0x00010b8d7430();
  if (!(bool)in_ZR) {
    lVar1 = *param_2;
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
      do {
        func_0x00010b8d7258();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *unaff_x19 = lVar1;
    func_0x0001080d289c();
  }
  return;
}



/* Entry: 10b8d2d9c; end: 10b8d2ddb;  */

void FUN_10b8d2d9c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 200);
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x10) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = lVar4;
    return;
  }
  if (*(long *)(param_2 + 0xa0) != 0) {
    lVar4 = *(long *)(*(long *)(param_2 + 0xa0) + 0x1d8);
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x18) = 0;
      if (*(long *)(lVar4 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    *param_1 = lVar4;
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10b8d2ddc; end: 10b8d2e47;  */

void FUN_10b8d2ddc(long param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b8d756c(*(undefined8 *)(param_1 + 0x30));
  FUN_10b8d2e48(&uStack_28,param_1,&uStack_30);
  func_0x000107c278f8(uStack_30);
  func_0x00010b950b58(&uStack_30,uStack_28,param_1,*(undefined8 *)(param_1 + 0xa0),1);
  FUN_10b8d2ef4(param_1,&uStack_30);
  func_0x0001080c5c80(uStack_30);
  func_0x00010b8d76d0();
  return;
}



/* Entry: 10b8d2e48; end: 10b8d2ef3;  */

void FUN_10b8d2e48(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_2;
  func_0x00010b8d312c();
  if (*param_1 == 0) {
    func_0x00010b8a7524();
    if (*param_3 == *plVar1) {
      FUN_10b8d31ac(&uStack_38,param_2);
      func_0x00010b8d7450();
      func_0x00010b8d3104();
      uStack_40 = uStack_38;
    }
    else {
      func_0x00010b94fae0(&uStack_40,*(undefined8 *)(param_2[5] + 0x118),param_3);
      FUN_10b8d3034(&uStack_38,param_2,&uStack_40);
      func_0x00010b8d7450();
      func_0x00010b8d3104();
      func_0x00010b8d76d0();
    }
    func_0x0001080d2890(uStack_40);
    FUN_10b8d2ff4(param_2,param_3,param_1);
  }
  return;
}



/* Entry: 10b8d2ef4; end: 10b8d2f53;  */

void FUN_10b8d2ef4(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x20;
  undefined1 auStack_118 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_28;
  
  func_0x00010b8d7104();
  pcStack_58 = FUN_10b8d4ac8;
  ppuStack_50 = &PTR_FUN_110d72118;
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_28 = extraout_x8;
  FUN_10b8d2f54();
  func_0x00010b8d71f4(ppuStack_50);
  func_0x00010b8d70d8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8d72e0();
  func_0x00010b8d7104();
  FUN_10b9a8974(auStack_e0,unaff_x20 + 0x140);
  func_0x00010b8c3d48(auStack_e8,unaff_x20 + 0x20);
  uStack_c8 = 0x10b8d4ef8;
  ppuStack_c0 = &PTR_FUN_110d721d8;
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x30))(&uStack_c8);
  func_0x00010b8d73d0(ppuStack_c0);
  func_0x00010b8c3d80(auStack_e8);
  func_0x00010b9a8a24(auStack_e0);
  func_0x00010b8d70d8(extraout_x8_00);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8d72e0();
  FUN_10b8d3034(auStack_118);
  FUN_10b8d30e0(unaff_x20 + 0x40,&pcStack_58);
  FUN_10b8d3104();
  func_0x00010b8d76d0();
  return;
}



/* Entry: 10b8d2f54; end: 10b8d2ff3;  */

void FUN_10b8d2f54(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x20;
  undefined1 auStack_b8 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  
  func_0x00010b8d72e0();
  func_0x00010b8d7104();
  FUN_10b9a8974(auStack_80,unaff_x20 + 0x140);
  func_0x00010b8c3d48(auStack_88,unaff_x20 + 0x20);
  uStack_68 = 0x10b8d4ef8;
  ppuStack_60 = &PTR_FUN_110d721d8;
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x30))(&uStack_68);
  func_0x00010b8d73d0(ppuStack_60);
  func_0x00010b8c3d80(auStack_88);
  func_0x00010b9a8a24(auStack_80);
  func_0x00010b8d70d8(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8d72e0();
  FUN_10b8d3034(auStack_b8);
  FUN_10b8d30e0(unaff_x20 + 0x40);
  FUN_10b8d3104();
  func_0x00010b8d76d0();
  return;
}



/* Entry: 10b8d2ff4; end: 10b8d3033;  */

void FUN_10b8d2ff4(void)

{
  long unaff_x20;
  undefined1 auStack_28 [8];
  
  func_0x00010b8d72e0();
  FUN_10b8d3034(auStack_28);
  FUN_10b8d30e0(unaff_x20 + 0x40);
  FUN_10b8d3104();
  func_0x00010b8d76d0();
  return;
}



/* Entry: 10b8d3034; end: 10b8d30df;  */

void FUN_10b8d3034(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w11;
  long lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    *param_1 = 0;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x28);
    if (*(long *)(lVar2 + 0x20) == *(long *)(lVar3 + 0x10)) {
      if (*(long *)(lVar2 + 0x10) != 0) {
        do {
          func_0x00010b8d7258();
          lVar2 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      *param_1 = lVar2;
    }
    else {
      func_0x00010b8d756c();
      FUN_10b8a6d18(&uStack_38,lVar3 + 0x18,&uStack_40);
      func_0x000107c278f8(uStack_40);
      plVar1 = *(long **)(*(long *)(param_2 + 0x28) + 0x10);
      (**(code **)(*plVar1 + 0x30))(param_1,plVar1,param_3,&uStack_38);
      func_0x0001080d5cdc(uStack_38);
    }
  }
  return;
}



/* Entry: 10b8d30e0; end: 10b8d3103;  */

long FUN_10b8d30e0(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b8d53c8(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b8d3104; end: 10b8d31ab;  */

void FUN_10b8d3104(void)

{
  undefined1 in_ZR;
  
  func_0x00010b8d7430();
  if (!(bool)in_ZR) {
    func_0x00010b8d7154();
    func_0x0001080d2890();
  }
  return;
}



/* Entry: 10b8d31ac; end: 10b8d32c7;  */

void FUN_10b8d31ac(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar3;
  undefined8 *extraout_x8_01;
  int extraout_w11;
  long *plVar4;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_2;
  func_0x00010b8d7104();
  plVar4 = *(long **)(lVar1 + 0x30);
  uStack_38 = extraout_x8;
  (**(code **)(*plVar4 + 0x20))(&uStack_70,plVar4);
  FUN_10b8d2e48(&uStack_78,param_2,&uStack_70);
  uStack_40 = 0;
  puStack_68 = &UNK_10dd5b8b0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  FUN_10b8d32c8(&lStack_80);
  uVar3 = 0;
  if (lStack_80 != 0) {
    do {
      func_0x00010b8d72d0();
      uVar3 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  FUN_10b8a9414(&uStack_88);
  func_0x0001080cfa50(0);
  func_0x0001080ceeb8(uVar3);
  (**(code **)(*plVar4 + 0x28))(param_1,plVar4,&uStack_70,&uStack_88);
  func_0x0001080d5cdc(uStack_88);
  func_0x00010b8d5a20(lStack_80);
  func_0x00010810452c(&puStack_68);
  func_0x0001080d2890(uStack_78);
  func_0x000107c278f8(uStack_70);
  func_0x00010b8d70d8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar2 = (undefined8 *)0x10;
    __Znwm();
    *puVar2 = &PTR_FUN_110d70df0;
    puVar2[1] = 1;
    *extraout_x8_01 = puVar2;
    return;
  }
  return;
}



/* Entry: 10b8d32c8; end: 10b8d3473;  */

void FUN_10b8d32c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110d70df0;
  puVar1[1] = 1;
  *param_1 = puVar1;
  return;
}



/* Entry: 10b8d3474; end: 10b8d35b7;  */

void FUN_10b8d3474(undefined4 param_1,undefined4 param_2,long *param_3,long **param_4,code **param_5
                  ,undefined4 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined **ppuStack_110;
  long *plStack_108;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  long *plStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  undefined8 uStack_58;
  
  func_0x00010b8d7104();
  uVar10 = SUB84(param_5,0);
  uVar9 = SUB84(param_4,0);
  uVar5 = param_3[0x25] == param_3[0x26];
  plVar6 = param_3;
  uStack_58 = extraout_x8;
  if (!(bool)uVar5) {
    plVar7 = param_3;
    FUN_10b8d2d9c(&plStack_90);
    uVar10 = SUB84(param_5,0);
    uVar9 = SUB84(param_4,0);
    if (plStack_90 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      puVar11 = (undefined8 *)param_3[0x25];
      lStack_b8 = param_3[0x27];
      puStack_c0 = (undefined8 *)param_3[0x26];
      param_3[0x26] = 0;
      param_3[0x27] = 0;
      param_3[0x25] = 0;
      puStack_a8 = puVar11;
      puStack_a0 = puStack_c0;
      lStack_98 = lStack_b8;
      func_0x00010b8d74a8();
      func_0x00010b951e90();
      puVar4 = puStack_c0;
      plVar6 = plVar7;
      puVar12 = puStack_c0;
      while( true ) {
        uVar10 = SUB84(param_5,0);
        uVar9 = SUB84(param_4,0);
        param_1 = SUB84(puVar12,0);
        uVar5 = puVar11 == puVar4;
        if ((bool)uVar5) break;
        unaff_x20 = (long *)*puVar11;
        if (unaff_x20 != (long *)0x0) {
          plVar1 = unaff_x20 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          pcStack_88 = FUN_10b8d4e10;
          ppuStack_80 = &PTR_FUN_110d721b8;
          func_0x00010b8d76c8();
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          *plVar6 = (long)unaff_x20;
          param_4 = &plStack_90;
          param_5 = &pcStack_88;
          plStack_78 = plVar6;
          (**(code **)(*plVar7 + 0xa0))(plVar7);
          (*(code *)*ppuStack_80)(&ppuStack_80);
          plVar6 = unaff_x20;
          func_0x000104bda3ac();
        }
        puVar11 = puVar11 + 1;
      }
      func_0x00010b8a0948(&puStack_a8);
      plVar6 = plStack_90;
      param_3 = plVar7;
    }
    func_0x0001080c5c80();
    unaff_x19 = param_3;
  }
  func_0x00010b8d70d8(uStack_58);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_10b8d35b8;
  plStack_e0 = unaff_x20;
  plStack_d8 = unaff_x19;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010b8d7104();
  uStack_120 = 0;
  pcStack_118 = FUN_10b8d4bec;
  ppuStack_110 = &PTR_FUN_110d72138;
  plVar7 = (long *)0x38;
  uStack_134 = param_6;
  uStack_130 = uVar10;
  uStack_12c = param_2;
  uStack_128 = uVar9;
  uStack_124 = param_1;
  uStack_e8 = extraout_x8_00;
  __Znwm();
  *plVar7 = (long)plVar6;
  plVar7[1] = (long)&uStack_120;
  plVar7[2] = (long)&uStack_124;
  plVar7[3] = (long)&uStack_128;
  plVar7[4] = (long)&uStack_12c;
  plVar7[5] = (long)&uStack_130;
  plVar7[6] = (long)&uStack_134;
  uVar8 = SUB81(&pcStack_118,0);
  plStack_108 = plVar7;
  FUN_10b8d2f54();
  func_0x00010b8d73c4(ppuStack_110);
  func_0x00010b8d70d8(uStack_e8,uStack_120 & 0xffffffff,uStack_120._4_4_);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8d76a8();
  *(undefined1 *)((long)plVar6 + 0x1e1) = uVar8;
  func_0x00010b8d73a4();
  return;
}



/* Entry: 10b8d35b8; end: 10b8d36cb;  */

void FUN_10b8d35b8(undefined4 param_1,undefined4 param_2,long param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  long *plStack_48;
  undefined8 uStack_28;
  
  uStack_68 = param_4;
  func_0x00010b8d7104();
  uStack_60 = 0;
  pcStack_58 = FUN_10b8d4bec;
  ppuStack_50 = &PTR_FUN_110d72138;
  plVar1 = (long *)0x38;
  uStack_74 = param_6;
  uStack_70 = param_5;
  uStack_6c = param_2;
  uStack_64 = param_1;
  uStack_28 = extraout_x8;
  __Znwm();
  *plVar1 = param_3;
  plVar1[1] = (long)&uStack_60;
  plVar1[2] = (long)&uStack_64;
  plVar1[3] = (long)&uStack_68;
  plVar1[4] = (long)&uStack_6c;
  plVar1[5] = (long)&uStack_70;
  plVar1[6] = (long)&uStack_74;
  uVar2 = SUB81(&pcStack_58,0);
  plStack_48 = plVar1;
  FUN_10b8d2f54();
  func_0x00010b8d73c4(ppuStack_50);
  func_0x00010b8d70d8(uStack_28,(undefined4)uStack_60,uStack_60._4_4_);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8d76a8();
  *(undefined1 *)(param_3 + 0x1e1) = uVar2;
  func_0x00010b8d73a4();
  return;
}



/* Entry: 10b8d36cc; end: 10b8d37cb;  */

void FUN_10b8d36cc(float param_1,float param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code **ppcVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 auStack_150 [5];
  code *pcStack_128;
  undefined8 auStack_120 [5];
  undefined8 uStack_f8;
  undefined8 auStack_c0 [3];
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined8 uStack_48;
  
  puVar3 = auStack_c0;
  func_0x00010b8d7104();
  uStack_48 = extraout_x8;
  func_0x00010b8d76fc();
  *(undefined1 *)(param_3 + 0x1dc) = 1;
  *(undefined1 *)(param_3 + 0x1de) = 0;
  uStack_98 = (ulong)(uint)*(float *)(param_3 + 0x1b8);
  if ((*(float *)(param_3 + 0x1b8) != param_1) ||
     (uStack_98 = (ulong)(uint)*(float *)(param_3 + 0x1bc), *(float *)(param_3 + 0x1bc) != param_2))
  {
    *(float *)(param_3 + 0x1b8) = param_1;
    *(float *)(param_3 + 0x1bc) = param_2;
    *(undefined1 *)(param_3 + 0x1dd) = 1;
  }
  uVar8 = 0;
  uVar2 = *(int *)(param_3 + 0x1c0) == param_4;
  if (!(bool)uVar2) {
    *(int *)(param_3 + 0x1c0) = param_4;
    *(undefined1 *)(param_3 + 0x1dd) = 1;
  }
  pcStack_78 = FUN_10b8d4ca8;
  ppuStack_70 = &PTR_DAT_110d72158;
  lStack_68 = param_3;
  func_0x00010b8d7620();
  ppuStack_a0 = &PTR_DAT_110a21c28;
  ppcVar5 = &pcStack_78;
  puVar6 = &uStack_a8;
  uStack_90 = uVar8;
  uStack_88 = uStack_98;
  uStack_80 = uVar8;
  FUN_10b8d37cc(param_3);
  func_0x00010b8d73d0(ppuStack_a0);
  func_0x00010b8d73c4(ppuStack_70);
  func_0x00010b9a8a24();
  func_0x00010b8d70d8(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8d7104();
  pcStack_128 = *ppcVar5;
  uStack_f8 = extraout_x8_00;
  (**(code **)(ppcVar5[1] + 0x10))(auStack_120);
  uStack_158 = *puVar6;
  plVar7 = puVar6 + 1;
  (**(code **)(*plVar7 + 0x10))(auStack_150,plVar7);
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  FUN_10b8d4470(puVar3,&pcStack_128,&uStack_158,&uStack_170);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_170);
  func_0x00010b8d76b4(auStack_150[0]);
  func_0x00010b8d73d0(auStack_120[0]);
  func_0x00010b8d70d8(uStack_f8);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8d74b0();
  func_0x00010b8d71e8();
  puVar1 = (undefined8 *)((long)puVar6 + 0x1cc);
  puVar4 = puVar1;
  FUN_10b8d38d8(puVar1,puVar3);
  if ((int)puVar4 != 0) {
    uVar9 = puVar3[1];
    uVar8 = *puVar3;
    *(undefined1 *)((long)puVar6 + 0x1dc) = *(undefined1 *)(puVar3 + 2);
    *(undefined8 *)((long)puVar6 + 0x1d4) = uVar9;
    *puVar1 = uVar8;
    FUN_10b8d38fc(plVar7);
  }
  func_0x00010b8d73a4();
  return;
}



/* Entry: 10b8d37cc; end: 10b8d38d7;  */

void FUN_10b8d37cc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_90 [5];
  undefined8 uStack_68;
  undefined8 auStack_60 [5];
  undefined8 uStack_38;
  
  func_0x00010b8d7104();
  uStack_68 = *param_2;
  uStack_38 = extraout_x8;
  (**(code **)(param_2[1] + 0x10))(auStack_60);
  uStack_98 = *param_3;
  plVar3 = param_3 + 1;
  (**(code **)(*plVar3 + 0x10))(auStack_90,plVar3);
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  FUN_10b8d4470(param_1,&uStack_68,&uStack_98,&uStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
  func_0x00010b8d76b4(auStack_90[0]);
  func_0x00010b8d73d0(auStack_60[0]);
  func_0x00010b8d70d8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8d74b0();
  func_0x00010b8d71e8();
  puVar1 = (undefined8 *)((long)param_3 + 0x1cc);
  puVar2 = puVar1;
  FUN_10b8d38d8(puVar1,param_1);
  if ((int)puVar2 != 0) {
    uVar5 = param_1[1];
    uVar4 = *param_1;
    *(undefined1 *)((long)param_3 + 0x1dc) = *(undefined1 *)(param_1 + 2);
    *(undefined8 *)((long)param_3 + 0x1d4) = uVar5;
    *puVar1 = uVar4;
    FUN_10b8d38fc(plVar3);
  }
  func_0x00010b8d73a4();
  return;
}



/* Entry: 10b8d38d8; end: 10b8d38fb;  */

uint FUN_10b8d38d8(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 != *(char *)(param_2 + 0x10) || cVar1 == '\0') {
    return (uint)(cVar1 != *(char *)(param_2 + 0x10));
  }
  func_0x00010b9ad864();
  return (uint)param_1 ^ 1;
}



/* Entry: 10b8d38fc; end: 10b8d3a3f;  */

void FUN_10b8d38fc(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 uVar1;
  
  func_0x00010b8d7104();
  if ((*(byte *)(param_1 + 0x1df) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1df) = 1;
    func_0x00010b8d7620();
    FUN_10b8d37cc();
    func_0x00010b8d73c4(&PTR_DAT_110a21c28);
    func_0x00010b8d71f4(&PTR_DAT_110d72178);
  }
  func_0x00010b8d70d8(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8d71e8();
  uVar1 = *(undefined8 *)(param_1 + 0x1c4);
  extraout_x8_00[1] = *(undefined8 *)(param_1 + 0x1cc);
  *extraout_x8_00 = uVar1;
  *(undefined4 *)(extraout_x8_00 + 2) = *(undefined4 *)(param_1 + 0x1d4);
  func_0x00010b8d73a4();
  return;
}



/* Entry: 10b8d3a40; end: 10b8d3b13;  */

void FUN_10b8d3a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined1 auStack_b8 [24];
  undefined1 uStack_a0;
  undefined1 auStack_98 [8];
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined8 uStack_38;
  
  uVar4 = param_2;
  func_0x00010b8d7104();
  uStack_38 = extraout_x8;
  func_0x0001080cbe58(auStack_b8);
  pcStack_68 = FUN_10b8d4d10;
  ppuStack_60 = &PTR_FUN_110d72198;
  lVar5 = 0x28;
  uStack_a0 = param_4;
  __Znwm();
  func_0x00010b8d7724(uVar4);
  *(undefined1 *)(lVar5 + 0x20) = uStack_a0;
  lStack_58 = lVar5;
  func_0x00010b8d7620();
  ppuStack_90 = &PTR_DAT_110a21c28;
  uStack_88 = param_1;
  uStack_78 = param_1;
  FUN_10b8d37cc(param_2,&pcStack_68,auStack_98);
  func_0x00010b8d71f4(ppuStack_90);
  func_0x00010b8d76b4(ppuStack_60);
  puVar6 = auStack_b8;
  func_0x000104bfe1e0();
  func_0x00010b8d70d8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = 0;
  if ((*(long *)(puVar6 + 0x38) != 0) &&
     (lVar5 = *(long *)(*(long *)(*(long *)(puVar6 + 0x38) + 0x40) + 0x50), lVar5 != 0)) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *extraout_x8_00 = lVar5;
  return;
}



/* Entry: 10b8d3b14; end: 10b8d3b43;  */

void FUN_10b8d3b14(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = 0;
  if ((*(long *)(param_2 + 0x38) != 0) &&
     (lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + 0x40) + 0x50), lVar4 != 0)) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 10b8d3b44; end: 10b8d3b87;  */

void FUN_10b8d3b44(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long unaff_x20;
  undefined4 uStack_24;
  
  func_0x00010b8d72e0();
  uStack_24 = param_3;
  FUN_10b8d3b88();
  FUN_10b8d3bf8(unaff_x20 + 0xc0);
  FUN_10b8d3c20(unaff_x20 + 0x188,&uStack_24);
  FUN_10b8b4938();
  return;
}



/* Entry: 10b8d3b88; end: 10b8d3bf7;  */

void FUN_10b8d3b88(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined1 auStack_40 [16];
  
  plVar2 = param_1 + 0x18;
  if (*plVar2 != 0) {
    plVar1 = param_1;
    func_0x00010b8d3398();
    func_0x00010b951e90();
    func_0x00010b8a0834(auStack_40,param_1[0x18]);
    (**(code **)(*plVar1 + 0x90))(plVar1,plVar2,auStack_40);
    FUN_10b9a8d98(auStack_40);
    FUN_10b8b443c(plVar2,0);
  }
  return;
}



/* Entry: 10b8d3bf8; end: 10b8d3c1f;  */

void FUN_10b8d3bf8(void)

{
  undefined1 in_ZR;
  
  func_0x00010b8d7430();
  if (!(bool)in_ZR) {
    func_0x00010b8d7154();
    func_0x0001080da468();
  }
  return;
}



/* Entry: 10b8d3c20; end: 10b8d3c43;  */

long FUN_10b8d3c20(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b8d5a44(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b8d3c44; end: 10b8d3d47;  */

void FUN_10b8d3c44(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long extraout_x8;
  int extraout_w11;
  undefined4 uStack_24;
  
  plVar1 = (long *)(param_1 + 0x188);
  puVar2 = &uStack_24;
  uStack_24 = param_2;
  func_0x00010b8d3cc4();
  if ((long *)(*(long *)(param_1 + 0x188) + *(long *)(param_1 + 0x1a0)) != plVar1) {
    lVar3 = *(long *)(puVar2 + 2);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
      do {
        func_0x00010b8d7258();
        lVar3 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x00010b8d74a8();
    func_0x00010b951e90();
    (**(code **)(*plVar1 + 0x98))();
    func_0x0001080da468(lVar3);
  }
  return;
}



/* Entry: 10b8d3d48; end: 10b8d3d7f;  */

undefined1  [16] FUN_10b8d3d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b8d7348();
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10b8d5eb8(&uStack_40);
  func_0x00010b8d7420();
  FUN_10b8d5eec();
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 10b8d3d80; end: 10b8d3daf;  */

void FUN_10b8d3d80(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined1 auStack_40 [16];
  
  if (param_1[0x18] != 0) {
    func_0x00010b8d3300();
    plVar2 = param_1 + 0x18;
    if (*plVar2 != 0) {
      plVar1 = param_1;
      func_0x00010b8d3398();
      func_0x00010b951e90();
      func_0x00010b8a0834(auStack_40,param_1[0x18]);
      (**(code **)(*plVar1 + 0x90))(plVar1,plVar2,auStack_40);
      FUN_10b9a8d98(auStack_40);
      FUN_10b8b443c(plVar2,0);
    }
    return;
  }
  return;
}


