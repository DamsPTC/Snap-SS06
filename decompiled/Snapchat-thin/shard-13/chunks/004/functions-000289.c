/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a5b6770; end: 10a5b6863;  */

/* WARNING: Removing unreachable block (ram,0x00010a5b6a48) */
/* WARNING: Removing unreachable block (ram,0x00010a5b6a50) */
/* WARNING: Removing unreachable block (ram,0x00010a5b6aa4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b6aac) */

void FUN_10a5b6770(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined8 ***pppuVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 ***pppuStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined1 uStack_e8;
  undefined8 **ppuStack_e0;
  ulong *puStack_d8;
  ulong *puStack_d0;
  undefined1 uStack_c8;
  undefined8 ***pppuStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong *puStack_a0;
  ulong *puStack_98;
  undefined8 uStack_90;
  
  uVar7 = param_1[1];
  if (uVar7 < (ulong)param_1[2]) {
    __ZNSt13exception_ptrC1ERKS_(uVar7,param_2);
    lVar17 = uVar7 + 8;
    goto LAB_10a5b6844;
  }
  lVar16 = uVar7 - *param_1;
  uVar1 = (lVar16 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar13 = param_1[2] - *param_1;
    uVar14 = (long)uVar13 >> 2;
    if (uVar14 <= uVar1) {
      uVar14 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar14 = 0x1fffffffffffffff;
    }
    if (uVar14 == 0) {
      lVar8 = 0;
    }
    else {
      if (uVar14 >> 0x3d != 0) goto LAB_10a5b6860;
      lVar8 = uVar14 << 3;
      __Znwm();
    }
    lVar16 = lVar8 + lVar16;
    __ZNSt13exception_ptrC1ERKS_(lVar16,param_2);
    lVar17 = lVar16 + 8;
    lVar2 = *param_1;
    lVar16 = lVar16 - (param_1[1] - lVar2);
    _memcpy(lVar16,lVar2);
    *param_1 = lVar16;
    param_1[1] = lVar17;
    param_1[2] = lVar8 + uVar14 * 8;
    if (lVar2 != 0) {
      __ZdlPv(lVar2);
    }
LAB_10a5b6844:
    param_1[1] = lVar17;
    return;
  }
  FUN_10a5bf458();
LAB_10a5b6860:
  func_0x000109ffded8();
  FUN_10a5b6c0c(*(undefined8 *)(uVar7 + 8),uVar7 + 0x18);
  plVar15 = *(long **)(uVar7 + 0x18);
  plVar3 = *(long **)(uVar7 + 0x20);
  *(undefined1 *)(uVar7 + 0x14) = 1;
  lVar17 = 0;
  if (plVar3 != plVar15) {
    lVar17 = LZCOUNT((long)plVar3 - (long)plVar15 >> 3) * -2 + 0x7e;
  }
  FUN_10a5bf4c8(plVar15,plVar3,lVar17,1);
  if (plVar3 != plVar15) {
    ppuVar9 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar10 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    do {
      lVar17 = *plVar15;
      plVar11 = (long *)(lVar17 + 0x68);
      (**(code **)(*plVar11 + 0x30))();
      iVar6 = (int)plVar11;
      FUN_10ad055a0();
      if (iVar6 != 0) {
        if (*ppuVar9 == (undefined *)0x0) {
          plVar11 = (long *)*ppuVar10;
          if ((plVar11 == (long *)0x0) || ((**(code **)(*plVar11 + 0x18))(), plVar11 == (long *)0x0)
             ) goto LAB_10a5b692c;
          plVar11 = plVar11 + 7;
        }
        else {
          plVar11 = (long *)(*ppuVar9 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar11 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&ppuStack_e0,&UNK_10f66692c);
          FUN_10a3c829c(&pppuStack_100,lVar17);
          uVar1 = uStack_f8;
          ppppuVar4 = (undefined8 ****)pppuStack_100;
          if (-1 < (long)uStack_f0) {
            uVar1 = uStack_f0 >> 0x38;
            ppppuVar4 = &pppuStack_100;
          }
          pppuVar12 = &ppuStack_e0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppuVar12,ppppuVar4,uVar1);
          puStack_98 = (ulong *)pppuVar12[1];
          puStack_a0 = (ulong *)*pppuVar12;
          uStack_90 = pppuVar12[2];
          pppuVar12[1] = (undefined8 **)0x0;
          pppuVar12[2] = (undefined8 **)0x0;
          *pppuVar12 = (undefined8 **)0x0;
          if ((long)uStack_f0 < 0) {
            __ZdlPv(pppuStack_100);
          }
          if ((long)puStack_d0 < 0) {
            __ZdlPv(ppuStack_e0);
          }
          lVar17 = *(long *)(*(long *)(uVar7 + 8) + 0x100);
          if (*(char *)(lVar17 + 0x21f) < '\0') {
            func_0x000107c3192c(&pppuStack_c0,*(undefined8 *)(lVar17 + 0x208),
                                *(undefined8 *)(lVar17 + 0x210));
          }
          else {
            uStack_b8 = *(ulong *)(lVar17 + 0x210);
            pppuStack_c0 = *(undefined8 ****)(lVar17 + 0x208);
            uStack_b0 = *(ulong *)(lVar17 + 0x218);
          }
          pppuStack_100 = (undefined8 ***)0x10f29b0c6;
          ppuStack_e0 = pppuStack_100;
          if (uStack_90._7_1_ != '\0') {
            ppuStack_e0 = &puStack_a0;
          }
          if ((long)uStack_b0 < 0) {
            if (uStack_b8 != 0) {
              pppuStack_100 = pppuStack_c0;
            }
          }
          else if (uStack_b0._7_1_ != '\0') {
            pppuStack_100 = &pppuStack_c0;
          }
          FUN_10a224324(&ppuStack_e0,&pppuStack_100);
          if (uStack_90._7_1_ == '\0') {
            ppuStack_e0 = (undefined8 **)((ulong)ppuStack_e0 & 0xffffffffffffff00);
          }
          else {
            puStack_d8 = puStack_98;
            ppuStack_e0 = (undefined8 **)puStack_a0;
            puStack_d0 = (ulong *)uStack_90;
          }
          uStack_c8 = uStack_90._7_1_ != '\0';
          if ((long)uStack_b0 < 0) {
            if (uStack_b8 == 0) {
LAB_10a5b6b08:
              uStack_e8 = 0;
              pppuStack_100 = (undefined8 ***)((ulong)pppuStack_100 & 0xffffffffffffff00);
              goto LAB_10a5b6b28;
            }
            func_0x000107c3192c(&pppuStack_100,pppuStack_c0);
          }
          else {
            if (uStack_b0._7_1_ == '\0') goto LAB_10a5b6b08;
            uStack_f8 = uStack_b8;
            pppuStack_100 = pppuStack_c0;
            uStack_f0 = uStack_b0;
          }
          uStack_e8 = 1;
LAB_10a5b6b28:
          FUN_10a234a0c(&ppuStack_e0,&pppuStack_100);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a5b6b3c);
          (*pcVar5)();
        }
      }
LAB_10a5b692c:
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar3);
    if (uVar7 == 0) goto LAB_10a5b696c;
  }
  *(undefined1 *)(uVar7 + 0x14) = 0;
  *(undefined8 *)(uVar7 + 0x20) = *(undefined8 *)(uVar7 + 0x18);
LAB_10a5b696c:
  *(undefined4 *)(uVar7 + 0x10) = 0;
  return;
}



/* Entry: 10a5b6864; end: 10a5b6c0b;  */

/* WARNING: Removing unreachable block (ram,0x00010a5b6a48) */
/* WARNING: Removing unreachable block (ram,0x00010a5b6a50) */
/* WARNING: Removing unreachable block (ram,0x00010a5b6aa4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b6aac) */

void FUN_10a5b6864(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 ****ppppuVar3;
  code *pcVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined8 ***pppuVar9;
  long *plVar10;
  long lVar11;
  undefined8 ***pppuStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined1 uStack_a8;
  undefined8 **ppuStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  undefined1 uStack_88;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong *puStack_60;
  ulong *puStack_58;
  undefined8 uStack_50;
  
  FUN_10a5b6c0c(*(undefined8 *)(param_1 + 8),param_1 + 0x18);
  plVar10 = *(long **)(param_1 + 0x18);
  plVar2 = *(long **)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x14) = 1;
  lVar11 = 0;
  if (plVar2 != plVar10) {
    lVar11 = LZCOUNT((long)plVar2 - (long)plVar10 >> 3) * -2 + 0x7e;
  }
  FUN_10a5bf4c8(plVar10,plVar2,lVar11,1);
  if (plVar2 != plVar10) {
    ppuVar6 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar7 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    do {
      lVar11 = *plVar10;
      plVar8 = (long *)(lVar11 + 0x68);
      (**(code **)(*plVar8 + 0x30))();
      iVar5 = (int)plVar8;
      FUN_10ad055a0();
      if (iVar5 != 0) {
        if (*ppuVar6 == (undefined *)0x0) {
          plVar8 = (long *)*ppuVar7;
          if ((plVar8 == (long *)0x0) || ((**(code **)(*plVar8 + 0x18))(), plVar8 == (long *)0x0))
          goto LAB_10a5b692c;
          plVar8 = plVar8 + 7;
        }
        else {
          plVar8 = (long *)(*ppuVar6 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar8 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&ppuStack_a0,&UNK_10f66692c);
          FUN_10a3c829c(&pppuStack_c0,lVar11);
          uVar1 = uStack_b8;
          ppppuVar3 = (undefined8 ****)pppuStack_c0;
          if (-1 < (long)uStack_b0) {
            uVar1 = uStack_b0 >> 0x38;
            ppppuVar3 = &pppuStack_c0;
          }
          pppuVar9 = &ppuStack_a0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppuVar9,ppppuVar3,uVar1);
          puStack_58 = (ulong *)pppuVar9[1];
          puStack_60 = (ulong *)*pppuVar9;
          uStack_50 = pppuVar9[2];
          pppuVar9[1] = (undefined8 **)0x0;
          pppuVar9[2] = (undefined8 **)0x0;
          *pppuVar9 = (undefined8 **)0x0;
          if ((long)uStack_b0 < 0) {
            __ZdlPv(pppuStack_c0);
          }
          if ((long)puStack_90 < 0) {
            __ZdlPv(ppuStack_a0);
          }
          lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x100);
          if (*(char *)(lVar11 + 0x21f) < '\0') {
            func_0x000107c3192c(&pppuStack_80,*(undefined8 *)(lVar11 + 0x208),
                                *(undefined8 *)(lVar11 + 0x210));
          }
          else {
            uStack_78 = *(ulong *)(lVar11 + 0x210);
            pppuStack_80 = *(undefined8 ****)(lVar11 + 0x208);
            uStack_70 = *(ulong *)(lVar11 + 0x218);
          }
          pppuStack_c0 = (undefined8 ***)0x10f29b0c6;
          ppuStack_a0 = pppuStack_c0;
          if (uStack_50._7_1_ != '\0') {
            ppuStack_a0 = &puStack_60;
          }
          if ((long)uStack_70 < 0) {
            if (uStack_78 != 0) {
              pppuStack_c0 = pppuStack_80;
            }
          }
          else if (uStack_70._7_1_ != '\0') {
            pppuStack_c0 = &pppuStack_80;
          }
          FUN_10a224324(&ppuStack_a0,&pppuStack_c0);
          if (uStack_50._7_1_ == '\0') {
            ppuStack_a0 = (undefined8 **)((ulong)ppuStack_a0 & 0xffffffffffffff00);
          }
          else {
            puStack_98 = puStack_58;
            ppuStack_a0 = (undefined8 **)puStack_60;
            puStack_90 = (ulong *)uStack_50;
          }
          uStack_88 = uStack_50._7_1_ != '\0';
          if ((long)uStack_70 < 0) {
            if (uStack_78 == 0) {
LAB_10a5b6b08:
              uStack_a8 = 0;
              pppuStack_c0 = (undefined8 ***)((ulong)pppuStack_c0 & 0xffffffffffffff00);
              goto LAB_10a5b6b28;
            }
            func_0x000107c3192c(&pppuStack_c0,pppuStack_80);
          }
          else {
            if (uStack_70._7_1_ == '\0') goto LAB_10a5b6b08;
            uStack_b8 = uStack_78;
            pppuStack_c0 = pppuStack_80;
            uStack_b0 = uStack_70;
          }
          uStack_a8 = 1;
LAB_10a5b6b28:
          FUN_10a234a0c(&ppuStack_a0,&pppuStack_c0);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5b6b3c);
          (*pcVar4)();
        }
      }
LAB_10a5b692c:
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar2);
    if (param_1 == 0) goto LAB_10a5b696c;
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
LAB_10a5b696c:
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10a5b6c0c; end: 10a5b6d2b;  */

undefined8 * FUN_10a5b6c0c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  uVar3 = param_1[0x9b];
  lVar4 = *param_2;
  puVar6 = (undefined8 *)param_2[1];
  uVar7 = (long)puVar6 - lVar4 >> 3;
  if (uVar7 < uVar3) {
    uVar7 = uVar3 - uVar7;
    if ((ulong)(param_2[2] - (long)puVar6 >> 3) < uVar7) {
      if (uVar3 >> 0x3d != 0) {
        FUN_10a3ec524();
        *param_1 = &PTR_DAT_110bf75e0;
        lVar4 = 8;
        do {
          *(undefined8 *)((long)param_1 + lVar4) = 0;
          ((undefined8 *)((long)param_1 + lVar4))[1] = 0;
          lVar4 = lVar4 + 0x14;
        } while (lVar4 != 0xa8);
        do {
          *(undefined8 *)((long)param_1 + lVar4) = 0;
          ((undefined8 *)((long)param_1 + lVar4))[1] = 0;
          lVar4 = lVar4 + 0x14;
        } while (lVar4 != 0x10c);
        *(undefined1 *)(param_1 + 3) = 1;
        param_1[2] = 0x3f8000003f800000;
        param_1[1] = 0xbf800000bf800000;
        *(undefined1 *)((long)param_1 + 0x2c) = 1;
        *(undefined8 *)((long)param_1 + 0x24) = 0x3f8000003f800000;
        *(undefined8 *)((long)param_1 + 0x1c) = 0xbf800000bf800000;
        *(undefined1 *)(param_1 + 8) = 1;
        param_1[7] = 0x3f8000003f800000;
        param_1[6] = 0xbf800000bf800000;
        *(undefined1 *)((long)param_1 + 0x54) = 0;
        *(undefined8 *)((long)param_1 + 0x4c) = 0xc2c60000c2c60000;
        *(undefined8 *)((long)param_1 + 0x44) = 0xc2c80000c2c80000;
        *(undefined1 *)(param_1 + 0xd) = 0;
        param_1[0xc] = 0xc2c60000c2c60000;
        param_1[0xb] = 0xc2c80000c2c80000;
        *(undefined1 *)((long)param_1 + 0x7c) = 0;
        *(undefined8 *)((long)param_1 + 0x74) = 0xc2c60000c2c60000;
        *(undefined8 *)((long)param_1 + 0x6c) = 0xc2c80000c2c80000;
        *(undefined1 *)(param_1 + 0x12) = 0;
        param_1[0x11] = 0xc2c60000c2c60000;
        param_1[0x10] = 0xc2c80000c2c80000;
        FUN_10a5b6de0(param_1);
        return param_1;
      }
      uVar5 = param_2[2] - lVar4;
      uVar8 = (long)uVar5 >> 2;
      if (uVar8 <= uVar3) {
        uVar8 = uVar3;
      }
      if (0x7ffffffffffffff7 < uVar5) {
        uVar8 = 0x1fffffffffffffff;
      }
      plVar1 = param_2;
      FUN_10a3ec538();
      lVar4 = (long)plVar1 + ((long)puVar6 - lVar4);
      _bzero(lVar4,uVar7 * 8);
      lVar10 = lVar4 - (param_2[1] - *param_2);
      _memcpy(lVar10);
      puVar2 = (undefined8 *)*param_2;
      *param_2 = lVar10;
      param_2[1] = lVar4 + uVar7 * 8;
      param_2[2] = (long)(plVar1 + uVar8);
      if (puVar2 != (undefined8 *)0x0) {
        __ZdlPv();
      }
      goto LAB_10a5b6cec;
    }
    puVar2 = puVar6;
    _bzero(puVar6,uVar7 * 8);
    puVar6 = puVar6 + uVar7;
  }
  else {
    puVar2 = param_1;
    if (uVar7 <= uVar3) goto LAB_10a5b6cec;
    puVar6 = (undefined8 *)(lVar4 + uVar3 * 8);
  }
  param_2[1] = (long)puVar6;
LAB_10a5b6cec:
  puVar6 = (undefined8 *)param_1[0x9a];
  if (puVar6 != param_1 + 0x99) {
    puVar9 = (undefined8 *)*param_2;
    do {
      *puVar9 = puVar6[2];
      puVar6 = (undefined8 *)puVar6[1];
      puVar9 = puVar9 + 1;
    } while (puVar6 != param_1 + 0x99);
  }
  return puVar2;
}



/* Entry: 10a5b6d2c; end: 10a5b6ddf;  */

undefined8 * FUN_10a5b6d2c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_110bf75e0;
  lVar1 = 8;
  do {
    *(undefined8 *)((long)param_1 + lVar1) = 0;
    ((undefined8 *)((long)param_1 + lVar1))[1] = 0;
    lVar1 = lVar1 + 0x14;
  } while (lVar1 != 0xa8);
  do {
    *(undefined8 *)((long)param_1 + lVar1) = 0;
    ((undefined8 *)((long)param_1 + lVar1))[1] = 0;
    lVar1 = lVar1 + 0x14;
  } while (lVar1 != 0x10c);
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[2] = 0x3f8000003f800000;
  param_1[1] = 0xbf800000bf800000;
  *(undefined1 *)((long)param_1 + 0x2c) = 1;
  *(undefined8 *)((long)param_1 + 0x24) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0xbf800000bf800000;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[7] = 0x3f8000003f800000;
  param_1[6] = 0xbf800000bf800000;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0xc2c60000c2c60000;
  *(undefined8 *)((long)param_1 + 0x44) = 0xc2c80000c2c80000;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xc] = 0xc2c60000c2c60000;
  param_1[0xb] = 0xc2c80000c2c80000;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0xc2c60000c2c60000;
  *(undefined8 *)((long)param_1 + 0x6c) = 0xc2c80000c2c80000;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x11] = 0xc2c60000c2c60000;
  param_1[0x10] = 0xc2c80000c2c80000;
  FUN_10a5b6de0(param_1);
  return param_1;
}



/* Entry: 10a5b6de0; end: 10a5b6f23;  */

void FUN_10a5b6de0(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0xcc) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_1 + 0x54);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x4c);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x44);
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    fVar3 = *(float *)(param_1 + 8);
    fVar6 = *(float *)(param_1 + 0xc);
    fVar4 = *(float *)(param_1 + 0x10);
    fVar5 = *(float *)(param_1 + 0x14);
    if (*(char *)(param_1 + 0xcc) == '\x01') {
      uVar1 = *(undefined8 *)(param_1 + 0xbc);
      fVar3 = (float)((uint)fVar3 ^
                     ((uint)fVar3 ^ *(uint *)(param_1 + 0xbc)) & -(uint)(fVar3 < (float)uVar1));
      fVar6 = (float)((uint)fVar6 ^
                     ((uint)fVar6 ^ *(uint *)(param_1 + 0xc0)) &
                     -(uint)(fVar6 < (float)((ulong)uVar1 >> 0x20)));
      fVar4 = (float)((uint)fVar4 ^
                     ((uint)fVar4 ^ *(uint *)(param_1 + 0xc4)) &
                     -(uint)((float)*(undefined8 *)(param_1 + 0xc4) < fVar4));
      fVar5 = (float)((uint)fVar5 ^
                     ((uint)fVar5 ^ *(uint *)(param_1 + 200)) &
                     -(uint)((float)((ulong)*(undefined8 *)(param_1 + 0xc4) >> 0x20) < fVar5));
    }
    if (*(char *)(param_1 + 0xe0) == '\x01') {
      uVar1 = *(undefined8 *)(param_1 + 0xd0);
      fVar3 = (float)((uint)fVar3 ^
                     ((uint)fVar3 ^ *(uint *)(param_1 + 0xd0)) & -(uint)(fVar3 < (float)uVar1));
      fVar6 = (float)((uint)fVar6 ^
                     ((uint)fVar6 ^ *(uint *)(param_1 + 0xd4)) &
                     -(uint)(fVar6 < (float)((ulong)uVar1 >> 0x20)));
      fVar4 = (float)((uint)fVar4 ^
                     ((uint)fVar4 ^ *(uint *)(param_1 + 0xd8)) &
                     -(uint)((float)*(undefined8 *)(param_1 + 0xd8) < fVar4));
      fVar5 = (float)((uint)fVar5 ^
                     ((uint)fVar5 ^ *(uint *)(param_1 + 0xdc)) &
                     -(uint)((float)((ulong)*(undefined8 *)(param_1 + 0xd8) >> 0x20) < fVar5));
    }
    if ((*(char *)(param_1 + 0x68) == '\x01') && (*(float *)(param_1 + 0x5c) < fVar5)) {
      fVar5 = *(float *)(param_1 + 0x5c);
    }
    uVar2 = (undefined1)*(undefined4 *)(param_1 + 0x18);
    if ((*(char *)(param_1 + 0x54) == '\x01') && (fVar6 < *(float *)(param_1 + 0x50))) {
      fVar6 = *(float *)(param_1 + 0x50);
    }
    *(float *)(param_1 + 0xe4) = fVar3;
    *(float *)(param_1 + 0xe8) = fVar6;
    *(float *)(param_1 + 0xec) = fVar4;
    *(float *)(param_1 + 0xf0) = fVar5;
  }
  else {
    *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_1 + 0x80);
    uVar2 = *(undefined1 *)(param_1 + 0x90);
  }
  *(undefined1 *)(param_1 + 0xf4) = uVar2;
  return;
}



/* Entry: 10a5b6f24; end: 10a5b6f83;  */

undefined8 * FUN_10a5b6f24(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a5b6f84; end: 10a5b6f8f;  */

undefined8 * FUN_10a5b6f84(undefined8 *param_1)

{
  code *pcVar1;
  
  if ((ulong)*(byte *)(param_1 + 0x80) < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x80)])(param_1 + 0x78);
    if ((ulong)*(byte *)(param_1 + 0x77) < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x77)])(param_1 + 0x6f);
      if ((ulong)*(byte *)(param_1 + 0x6e) < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x6e)])(param_1 + 0x66);
        if ((ulong)*(byte *)(param_1 + 0x65) < 4) {
          (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x65)])(param_1 + 0x5d);
          if ((ulong)*(byte *)(param_1 + 0x5c) < 4) {
            (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x5c)])(param_1 + 0x54);
            FUN_10a282d6c(param_1 + 0x52);
            if ((ulong)*(byte *)(param_1 + 0x3b) < 4) {
              (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x3b)])(param_1 + 0x33);
              if ((ulong)*(byte *)(param_1 + 0x32) < 4) {
                (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x32)])(param_1 + 0x2a);
                if ((ulong)*(byte *)(param_1 + 0x29) < 4) {
                  (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x29)])(param_1 + 0x21);
                  if ((ulong)*(byte *)(param_1 + 0x20) < 4) {
                    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x20)])(param_1 + 0x18);
                    if ((ulong)*(byte *)(param_1 + 0x17) < 4) {
                      (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x17)])(param_1 + 0xf);
                      FUN_10a282d6c(param_1 + 0xd);
                      if (param_1[10] != 0) {
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                      }
                      param_1[4] = &PTR_DAT_110bf7618;
                      param_1[0xa1] = &PTR_FUN_110bf7690;
                      func_0x00010a004e5c(param_1 + 7);
                      func_0x00010a004e04(param_1 + 5);
                      *param_1 = &PTR_FUN_110b9f9a8;
                      if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
                        *(undefined8 *)param_1[3] = 0;
                      }
                      func_0x00010a004e5c(param_1 + 1);
                      return param_1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a282d6c);
  (*pcVar1)();
}



/* Entry: 10a5b6f90; end: 10a5b6fab;  */

void FUN_10a5b6f90(undefined8 param_1)

{
  FUN_10a282be0(param_1,&PTR_PTR_110bf8100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5b6fac; end: 10a5b6fbb;  */

undefined8 * FUN_10a5b6fac(undefined8 *param_1)

{
  code *pcVar1;
  
  if ((ulong)*(byte *)(param_1 + 0x7c) < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x7c)])(param_1 + 0x74);
    if ((ulong)*(byte *)(param_1 + 0x73) < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x73)])(param_1 + 0x6b);
      if ((ulong)*(byte *)(param_1 + 0x6a) < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x6a)])(param_1 + 0x62);
        if ((ulong)*(byte *)(param_1 + 0x61) < 4) {
          (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x61)])(param_1 + 0x59);
          if ((ulong)*(byte *)(param_1 + 0x58) < 4) {
            (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x58)])(param_1 + 0x50);
            FUN_10a282d6c(param_1 + 0x4e);
            if ((ulong)*(byte *)(param_1 + 0x37) < 4) {
              (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x37)])(param_1 + 0x2f);
              if ((ulong)*(byte *)(param_1 + 0x2e) < 4) {
                (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x2e)])(param_1 + 0x26);
                if ((ulong)*(byte *)(param_1 + 0x25) < 4) {
                  (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x25)])(param_1 + 0x1d);
                  if ((ulong)*(byte *)(param_1 + 0x1c) < 4) {
                    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x1c)])(param_1 + 0x14);
                    if ((ulong)*(byte *)(param_1 + 0x13) < 4) {
                      (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x13)])(param_1 + 0xb);
                      FUN_10a282d6c(param_1 + 9);
                      if (param_1[6] != 0) {
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                      }
                      *param_1 = &PTR_DAT_110bf7618;
                      param_1[0x9d] = &PTR_FUN_110bf7690;
                      func_0x00010a004e5c(param_1 + 3);
                      func_0x00010a004e04(param_1 + 1);
                      param_1[-4] = &PTR_FUN_110b9f9a8;
                      if ((undefined8 *)param_1[-1] != (undefined8 *)0x0) {
                        *(undefined8 *)param_1[-1] = 0;
                      }
                      func_0x00010a004e5c(param_1 + -3);
                      return param_1 + -4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a282d6c);
  (*pcVar1)();
}



/* Entry: 10a5b6fbc; end: 10a5b6fdb;  */

void FUN_10a5b6fbc(long param_1)

{
  FUN_10a282be0(param_1 + -0x20,&PTR_PTR_110bf8100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5b6fdc; end: 10a5b6ff3;  */

undefined8 * FUN_10a5b6fdc(long *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  if ((ulong)*(byte *)(puVar1 + 0x80) < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(puVar1 + 0x80)])(puVar1 + 0x78);
    if ((ulong)*(byte *)(puVar1 + 0x77) < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(puVar1 + 0x77)])(puVar1 + 0x6f);
      if ((ulong)*(byte *)(puVar1 + 0x6e) < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(puVar1 + 0x6e)])(puVar1 + 0x66);
        if ((ulong)*(byte *)(puVar1 + 0x65) < 4) {
          (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(puVar1 + 0x65)])(puVar1 + 0x5d);
          if ((ulong)*(byte *)(puVar1 + 0x5c) < 4) {
            (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(puVar1 + 0x5c)])(puVar1 + 0x54);
            FUN_10a282d6c(puVar1 + 0x52);
            if ((ulong)*(byte *)(puVar1 + 0x3b) < 4) {
              (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(puVar1 + 0x3b)])(puVar1 + 0x33);
              if ((ulong)*(byte *)(puVar1 + 0x32) < 4) {
                (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(puVar1 + 0x32)])(puVar1 + 0x2a);
                if ((ulong)*(byte *)(puVar1 + 0x29) < 4) {
                  (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(puVar1 + 0x29)])(puVar1 + 0x21);
                  if ((ulong)*(byte *)(puVar1 + 0x20) < 4) {
                    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(puVar1 + 0x20)])(puVar1 + 0x18);
                    if ((ulong)*(byte *)(puVar1 + 0x17) < 4) {
                      (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(puVar1 + 0x17)])(puVar1 + 0xf);
                      FUN_10a282d6c(puVar1 + 0xd);
                      if (puVar1[10] != 0) {
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                      }
                      puVar1[4] = &PTR_DAT_110bf7618;
                      puVar1[0xa1] = &PTR_FUN_110bf7690;
                      func_0x00010a004e5c(puVar1 + 7);
                      func_0x00010a004e04(puVar1 + 5);
                      *puVar1 = &PTR_FUN_110b9f9a8;
                      if ((undefined8 *)puVar1[3] != (undefined8 *)0x0) {
                        *(undefined8 *)puVar1[3] = 0;
                      }
                      func_0x00010a004e5c(puVar1 + 1);
                      return puVar1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a282d6c);
  (*pcVar2)();
}



/* Entry: 10a5b6ff4; end: 10a5b71c7;  */

void FUN_10a5b6ff4(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a282be0((long)param_1 + lVar1,&PTR_PTR_110bf8100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a5b71c8; end: 10a5b7ab3;  */

long * FUN_10a5b71c8(long *param_1,uint *param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  long *plVar12;
  undefined *puVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  ulong unaff_x25;
  long lStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = param_1 + 5;
  func_0x00010a5ce4b4();
  if (plVar12 == (long *)0x0) {
    (**(code **)(*param_1 + 0x18))(&lStack_c8,param_1,param_2);
    if (lStack_c8 == 0) {
      iVar6 = 0x137eb478;
      plVar21 = (long *)0x1137eb490;
      if (((bRam00000001137eb478 & 1) == 0) && (___cxa_guard_acquire(), iVar6 != 0)) {
        uRam00000001137eb498 = 0;
        plVar21 = (long *)0x1137eb490;
        uRam00000001137eb490 = 0;
        ___cxa_guard_release(0x1137eb478);
      }
LAB_10a5b79e0:
      if (ppuStack_c0 != (undefined **)0x0) {
        ppuVar7 = ppuStack_c0 + 1;
        do {
          puVar11 = *ppuVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
          if (bVar3) {
            *ppuVar7 = puVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar11 == (undefined *)0x0) {
          (**(code **)(*ppuStack_c0 + 0x10))(ppuStack_c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_c0);
        }
      }
      goto LAB_10a5b728c;
    }
    plVar21 = param_1 + 5;
    func_0x00010a5ce4b4(plVar21,param_2);
    if (plVar21 == (long *)0x0) {
      lStack_b8 = lStack_c8;
      ppuStack_b0 = ppuStack_c0;
      if (ppuStack_c0 != (undefined **)0x0) {
        ppuVar7 = ppuStack_c0 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
          if (bVar3) {
            *ppuVar7 = *ppuVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      plStack_a8 = (long *)&UNK_1053a6a3c;
      ppuStack_a0 = &PTR_DAT_110ae9180;
      uVar17 = (ulong)*param_2 + 0x9e3779b9;
      uVar17 = (ulong)param_2[1] + uVar17 * 0x40 + (uVar17 >> 2) + 0x9e3779b9 ^ uVar17;
      uVar17 = ((ulong)(byte)param_2[2] | uVar17 << 6) + (uVar17 >> 2) + 0x9e3779b9 ^ uVar17;
      uVar22 = param_1[6];
      if (uVar22 != 0) {
        uVar14 = uVar22 - 1;
        if ((uVar22 & uVar14) == 0) {
          unaff_x25 = uVar17 & uVar14;
        }
        else {
          unaff_x25 = uVar17;
          if (uVar22 <= uVar17) {
            uVar19 = 0;
            if (uVar22 != 0) {
              uVar19 = uVar17 / uVar22;
            }
            unaff_x25 = uVar17 - uVar19 * uVar22;
          }
        }
        puVar18 = *(undefined8 **)(param_1[5] + unaff_x25 * 8);
        if (puVar18 != (undefined8 *)0x0) {
          for (plVar21 = (long *)*puVar18; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
            uVar19 = plVar21[1];
            if (uVar19 == uVar17) {
              if (((*(uint *)(plVar21 + 2) == *param_2) &&
                  (*(uint *)((long)plVar21 + 0x14) == param_2[1])) &&
                 (*(byte *)(plVar21 + 3) == (byte)param_2[2])) goto LAB_10a5b77c4;
            }
            else {
              if ((uVar22 & uVar14) == 0) {
                uVar19 = uVar19 & uVar14;
              }
              else if (uVar22 <= uVar19) {
                uVar10 = 0;
                if (uVar22 != 0) {
                  uVar10 = uVar19 / uVar22;
                }
                uVar19 = uVar19 - uVar10 * uVar22;
              }
              if (uVar19 != unaff_x25) break;
            }
          }
        }
      }
      plVar21 = (long *)0x70;
      __Znwm();
      *plVar21 = 0;
      plVar21[1] = uVar17;
      plVar21[2] = *(long *)param_2;
      *(uint *)(plVar21 + 3) = param_2[2];
      plVar21[4] = lStack_c8;
      plVar21[5] = (long)ppuStack_b0;
      lStack_b8 = 0;
      ppuStack_b0 = (undefined **)0x0;
      plVar21[6] = (long)&UNK_1053a6a3c;
      plVar21[7] = (long)&PTR_DAT_110ae9180;
      plStack_a8 = (long *)&UNK_1053a6a3c;
      ppuStack_a0 = &PTR_DAT_110ae9180;
      if ((uVar22 == 0) || (*(float *)(param_1 + 9) * (float)uVar22 < (float)(param_1[8] + 1))) {
        uVar14 = 1;
        if (2 < uVar22) {
          uVar14 = (ulong)((uVar22 & uVar22 - 1) != 0);
        }
        uVar14 = uVar14 | uVar22 << 1;
        uVar19 = (ulong)((float)(param_1[8] + 1) / *(float *)(param_1 + 9));
        if (uVar14 <= uVar19) {
          uVar14 = uVar19;
        }
        if (uVar14 - 1 == 0) {
          uVar14 = 2;
        }
        else if ((uVar14 & uVar14 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
          uVar22 = param_1[6];
        }
        if (uVar22 < uVar14) {
LAB_10a5b75d8:
          if (uVar14 >> 0x3d != 0) {
            func_0x000109ffded8();
            goto LAB_10a5b7a70;
          }
          lVar8 = uVar14 << 3;
          __Znwm();
          lVar9 = param_1[5];
          param_1[5] = lVar8;
          if (lVar9 != 0) {
            __ZdlPv();
          }
          uVar22 = 0;
          param_1[6] = uVar14;
          do {
            *(undefined8 *)(param_1[5] + uVar22 * 8) = 0;
            uVar22 = uVar22 + 1;
          } while (uVar14 != uVar22);
          plVar12 = (long *)param_1[7];
          uVar22 = uVar14;
          if (plVar12 != (long *)0x0) {
            uVar19 = plVar12[1];
            uVar10 = uVar14 - 1;
            if ((uVar14 & uVar10) == 0) {
              uVar19 = uVar19 & uVar10;
            }
            else if (uVar14 <= uVar19) {
              uVar20 = 0;
              if (uVar14 != 0) {
                uVar20 = uVar19 / uVar14;
              }
              uVar19 = uVar19 - uVar20 * uVar14;
            }
            *(long **)(param_1[5] + uVar19 * 8) = param_1 + 7;
            plVar15 = (long *)*plVar12;
            while (plVar15 != (long *)0x0) {
              uVar20 = plVar15[1];
              if ((uVar14 & uVar10) == 0) {
                uVar20 = uVar20 & uVar10;
              }
              else if (uVar14 <= uVar20) {
                uVar4 = 0;
                if (uVar14 != 0) {
                  uVar4 = uVar20 / uVar14;
                }
                uVar20 = uVar20 - uVar4 * uVar14;
              }
              plVar16 = plVar15;
              if (uVar20 != uVar19) {
                lVar8 = param_1[5];
                if (*(long *)(lVar8 + uVar20 * 8) == 0) {
                  *(long **)(lVar8 + uVar20 * 8) = plVar12;
                  uVar19 = uVar20;
                }
                else {
                  *plVar12 = *plVar15;
                  *plVar15 = **(undefined8 **)(lVar8 + uVar20 * 8);
                  **(long **)(lVar8 + uVar20 * 8) = (long)plVar15;
                  plVar16 = plVar12;
                }
              }
              plVar12 = plVar16;
              plVar15 = (long *)*plVar16;
            }
          }
        }
        else if (uVar14 < uVar22) {
          uVar19 = (ulong)((float)(ulong)param_1[8] / *(float *)(param_1 + 9));
          if ((uVar22 < 3) || ((uVar22 & uVar22 - 1) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if (1 < uVar19) {
            uVar19 = 1L << (-LZCOUNT(uVar19 - 1) & 0x3fU);
          }
          if (uVar14 <= uVar19) {
            uVar14 = uVar19;
          }
          if (uVar14 < uVar22) {
            if (uVar14 != 0) goto LAB_10a5b75d8;
            lVar8 = param_1[5];
            param_1[5] = 0;
            if (lVar8 != 0) {
              __ZdlPv();
            }
            param_1[6] = 0;
            uVar22 = 0;
          }
          else {
            uVar22 = param_1[6];
          }
        }
        if ((uVar22 & uVar22 - 1) == 0) {
          unaff_x25 = uVar22 - 1 & uVar17;
        }
        else {
          unaff_x25 = uVar17;
          if (uVar22 <= uVar17) {
            uVar14 = 0;
            if (uVar22 != 0) {
              uVar14 = uVar17 / uVar22;
            }
            unaff_x25 = uVar17 - uVar14 * uVar22;
          }
        }
      }
      lVar8 = param_1[5];
      plVar12 = *(long **)(lVar8 + unaff_x25 * 8);
      if (plVar12 == (long *)0x0) {
        plVar12 = param_1 + 7;
        *plVar21 = *plVar12;
        *plVar12 = (long)plVar21;
        *(long **)(lVar8 + unaff_x25 * 8) = plVar12;
        if (*plVar21 != 0) {
          uVar17 = *(ulong *)(*plVar21 + 8);
          if ((uVar22 & uVar22 - 1) == 0) {
            uVar17 = uVar17 & uVar22 - 1;
          }
          else if (uVar22 <= uVar17) {
            uVar14 = 0;
            if (uVar22 != 0) {
              uVar14 = uVar17 / uVar22;
            }
            uVar17 = uVar17 - uVar14 * uVar22;
          }
          *(long **)(param_1[5] + uVar17 * 8) = plVar21;
        }
      }
      else {
        *plVar21 = *plVar12;
        *plVar12 = (long)plVar21;
      }
      param_1[8] = param_1[8] + 1;
LAB_10a5b77c4:
      FUN_10a044790(&plStack_a8);
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      ppuVar7 = ppuStack_b0;
      if (ppuStack_b0 != (undefined **)0x0) {
        ppuVar1 = ppuStack_b0 + 1;
        do {
          puVar11 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = puVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar11 == (undefined *)0x0) {
          (**(code **)(*ppuStack_b0 + 0x10))(ppuStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
        }
      }
      ppuVar7 = (undefined **)0x20;
      __Znwm();
      puVar13 = *(undefined **)param_2;
      *(uint *)(ppuVar7 + 3) = param_2[2];
      plVar12 = param_1 + 2;
      puVar11 = (undefined *)*plVar12;
      ppuVar7[1] = (undefined *)plVar12;
      ppuVar7[2] = puVar13;
      *ppuVar7 = puVar11;
      *(undefined ***)(puVar11 + 8) = ppuVar7;
      *plVar12 = (long)ppuVar7;
      param_1[4] = param_1[4] + 1;
      lStack_b8 = 0x10a5ce59c;
      ppuStack_b0 = &PTR_DAT_110bf7f50;
      plStack_a8 = param_1;
      ppuStack_a0 = ppuVar7;
      func_0x00010a108320(plVar21 + 6,&lStack_b8);
      FUN_10a044790(&lStack_b8);
      (*(code *)*ppuStack_b0)(&ppuStack_b0);
      uVar17 = param_1[4];
      uVar22 = (ulong)*(uint *)(param_1 + 1);
      if (uVar22 < uVar17) {
        do {
          plVar12 = param_1 + 5;
          func_0x00010a5ce4b4(plVar12,param_1[3] + 0x10);
          if (plVar12 != (long *)0x0) {
            uVar22 = param_1[6];
            uVar17 = plVar12[1];
            uVar14 = uVar22 - 1;
            if ((uVar22 & uVar14) == 0) {
              uVar17 = uVar14 & uVar17;
            }
            else if (uVar22 <= uVar17) {
              uVar19 = 0;
              if (uVar22 != 0) {
                uVar19 = uVar17 / uVar22;
              }
              uVar17 = uVar17 - uVar19 * uVar22;
            }
            lVar8 = *plVar12;
            plVar15 = *(long **)(param_1[5] + uVar17 * 8);
            do {
              plVar16 = plVar15;
              plVar15 = (long *)*plVar16;
            } while ((long *)*plVar16 != plVar12);
            if (plVar16 == param_1 + 7) {
LAB_10a5b7938:
              if (lVar8 == 0) {
LAB_10a5b796c:
                *(undefined8 *)(param_1[5] + uVar17 * 8) = 0;
                lVar8 = *plVar12;
                goto LAB_10a5b7974;
              }
              uVar19 = *(ulong *)(lVar8 + 8);
              if ((uVar22 & uVar14) == 0) {
                uVar10 = uVar19 & uVar14;
              }
              else {
                uVar10 = uVar19;
                if (uVar22 <= uVar19) {
                  uVar10 = 0;
                  if (uVar22 != 0) {
                    uVar10 = uVar19 / uVar22;
                  }
                  uVar10 = uVar19 - uVar10 * uVar22;
                }
              }
              if (uVar10 != uVar17) goto LAB_10a5b796c;
LAB_10a5b797c:
              if ((uVar22 & uVar14) == 0) {
                uVar19 = uVar19 & uVar14;
              }
              else if (uVar22 <= uVar19) {
                uVar14 = 0;
                if (uVar22 != 0) {
                  uVar14 = uVar19 / uVar22;
                }
                uVar19 = uVar19 - uVar14 * uVar22;
              }
              if (uVar19 != uVar17) {
                *(long **)(param_1[5] + uVar19 * 8) = plVar16;
                lVar8 = *plVar12;
              }
            }
            else {
              uVar19 = plVar16[1];
              if ((uVar22 & uVar14) == 0) {
                uVar19 = uVar19 & uVar14;
              }
              else if (uVar22 <= uVar19) {
                uVar10 = 0;
                if (uVar22 != 0) {
                  uVar10 = uVar19 / uVar22;
                }
                uVar19 = uVar19 - uVar10 * uVar22;
              }
              if (uVar19 != uVar17) goto LAB_10a5b7938;
LAB_10a5b7974:
              if (lVar8 != 0) {
                uVar19 = *(ulong *)(lVar8 + 8);
                goto LAB_10a5b797c;
              }
            }
            *plVar16 = lVar8;
            *plVar12 = 0;
            param_1[8] = param_1[8] + -1;
            FUN_10a5ce5e8(1);
            uVar17 = param_1[4];
            uVar22 = (ulong)*(uint *)(param_1 + 1);
          }
        } while (uVar22 < uVar17);
      }
LAB_10a5b79dc:
      plVar21 = plVar21 + 4;
      goto LAB_10a5b79e0;
    }
    if ((char)param_1[10] != '\x01') {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f6404ef,&UNK_10f6670c2,0x91,&UNK_10f64071c);
      }
      func_0x00010a015c50(plVar21 + 4,&lStack_c8);
      ppuVar7 = (undefined **)0x20;
      __Znwm();
      puVar13 = *(undefined **)param_2;
      *(uint *)(ppuVar7 + 3) = param_2[2];
      plVar12 = param_1 + 2;
      puVar11 = (undefined *)*plVar12;
      ppuVar7[1] = (undefined *)plVar12;
      ppuVar7[2] = puVar13;
      *ppuVar7 = puVar11;
      *(undefined ***)(puVar11 + 8) = ppuVar7;
      *plVar12 = (long)ppuVar7;
      param_1[4] = param_1[4] + 1;
      lStack_b8 = 0x10a5ce59c;
      ppuStack_b0 = &PTR_DAT_110bf7f50;
      plStack_a8 = param_1;
      ppuStack_a0 = ppuVar7;
      func_0x00010a108320(plVar21 + 6,&lStack_b8);
      FUN_10a044790(&lStack_b8);
      (*(code *)*ppuStack_b0)(&ppuStack_b0);
      goto LAB_10a5b79dc;
    }
  }
  else {
    plVar21 = plVar12 + 4;
    ppuVar7 = (undefined **)0x20;
    __Znwm();
    puVar13 = *(undefined **)param_2;
    *(uint *)(ppuVar7 + 3) = param_2[2];
    plVar15 = param_1 + 2;
    puVar11 = (undefined *)*plVar15;
    ppuVar7[1] = (undefined *)plVar15;
    ppuVar7[2] = puVar13;
    *ppuVar7 = puVar11;
    *(undefined ***)(puVar11 + 8) = ppuVar7;
    *plVar15 = (long)ppuVar7;
    param_1[4] = param_1[4] + 1;
    lStack_b8 = 0x10a5ce59c;
    ppuStack_b0 = &PTR_DAT_110bf7f50;
    plStack_a8 = param_1;
    ppuStack_a0 = ppuVar7;
    func_0x00010a108320(plVar12 + 6,&lStack_b8);
    FUN_10a044790(&lStack_b8);
    (*(code *)*ppuStack_b0)(&ppuStack_b0);
LAB_10a5b728c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return plVar21;
    }
    ___stack_chk_fail();
  }
  FUN_10a00946c(&UNK_10f6404c1);
LAB_10a5b7a70:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a5b7a74);
  (*pcVar5)();
}



/* Entry: 10a5b7ab4; end: 10a5b7ab7;  */

void FUN_10a5b7ab4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5b7ab8; end: 10a5b8373;  */

undefined8 * FUN_10a5b7ab8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110bf6fe0;
  param_1[3] = &PTR_DAT_110bf7038;
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    __ZdlPv(param_1[0x1a]);
  }
  if (param_1[0x16] != 0) {
    param_1[0x17] = param_1[0x16];
    __ZdlPv();
  }
  FUN_10a5bae18(param_1 + 0xf);
  __ZNSt3__15mutexD1Ev(param_1 + 7);
  param_1[3] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[6] = 0;
  }
  func_0x00010a004e5c(param_1 + 4);
  *param_1 = &PTR_DAT_110bf6f90;
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10a5b8374; end: 10a5b838f;  */

void FUN_10a5b8374(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  
  param_2 = param_2 + (long)param_3 * 0x14;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 10a5b8390; end: 10a5b83ef;  */

long FUN_10a5b8390(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5b83f0; end: 10a5b873b;  */

/* WARNING: Removing unreachable block (ram,0x00010a5b84e8) */

void FUN_10a5b83f0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x88;
  __Znwm();
  *puVar5 = FUN_10a5d26b0;
  puVar5[1] = FUN_10a5d2958;
  func_0x0001092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  uVar11 = *param_3;
  puVar5[10] = param_3[1];
  puVar5[9] = uVar11;
  *param_3 = 0;
  param_3[1] = 0;
  uVar11 = param_3[3];
  puVar5[0xb] = param_3[2];
  puVar5[0xc] = uVar11;
  param_3[3] = 0;
  puVar5[0xd] = param_2;
  *(undefined1 *)(puVar5 + 0xe) = 0;
  *(undefined1 *)(puVar5 + 0x10) = 0;
  puVar6 = puVar5 + 0xd;
  func_0x0001092ba064(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10a5b873c(puVar5 + 0xf,puVar5 + 9);
    puVar5[0xd] = puVar5[0xf];
    plVar7 = (long *)(puVar5[0xf] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[0xd] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x10) = 1;
      lVar8 = puVar5[0xd];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            puStack_40 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[0xd];
    if (((uint)*(undefined8 *)(puVar5[0xd] + 0x10) >> 5 & 1) == 0) {
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)puVar5[0xf];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar5 + 2);
      plVar7 = (long *)puVar5[0xc];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      if (puVar5[10] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return;
    }
    func_0x0001092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5b8658);
    (*pcVar4)();
  }
  return;
}



/* Entry: 10a5b873c; end: 10a5b8b0f;  */

void FUN_10a5b873c(long *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  *puVar6 = FUN_10a5d2330;
  puVar6[1] = FUN_10a5d2608;
  puVar6[0xc] = param_2;
  func_0x0001092ba17c(puVar6 + 2);
  lVar8 = puVar6[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  lVar8 = *(long *)(param_2 + 0x18);
  puVar6[0xb] = lVar8;
  plVar7 = (long *)(lVar8 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0xb] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0xd) = 0;
    lVar8 = puVar6[0xb];
    plVar7 = (long *)(lVar8 + 0x10);
    uStack_38 = puVar6[3];
    do {
      lVar10 = *plVar7;
      if (lVar10 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lStack_48 = 0;
          plStack_40 = puVar6;
          func_0x000109d1b588(lVar8 + 0x18,&lStack_48);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  lVar8 = puVar6[0xb];
  if (((uint)*(undefined8 *)(puVar6[0xb] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xa8) & 1) != 0) {
      FUN_10a5b8b10(puVar6 + 9,*(undefined8 *)(lVar8 + 0x98),*(undefined8 *)(lVar8 + 0xa0));
      plVar7 = (long *)puVar6[0xb];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar9 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar9 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      if (puVar6[9] == 0) {
        FUN_10a00946c(&UNK_10f6669b2);
      }
      else {
        lStack_48 = 0;
        plStack_40 = (long *)0x0;
        plVar7 = *(long **)(puVar6[0xc] + 8);
        if ((plVar7 != (long *)0x0) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), plStack_40 = plVar7, plVar7 != (long *)0x0)) {
          lVar8 = *(long *)puVar6[0xc];
          lStack_48 = lVar8;
          if (lVar8 != 0) {
            if ((*(long *)(lVar8 + 0x4b8) == ((long *)puVar6[0xc])[2]) &&
               (*(int *)(lVar8 + 0x288) == 1)) {
              FUN_10a593f9c(lVar8 + 0x290,puVar6 + 9);
              *(undefined4 *)(lVar8 + 0x288) = 2;
              plVar2 = plVar7 + 1;
              do {
                lVar8 = *plVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *plVar2 = lVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar8 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
              plVar7 = (long *)puVar6[10];
              if (plVar7 != (long *)0x0) {
                plVar2 = plVar7 + 1;
                do {
                  lVar8 = *plVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *plVar2 = lVar8 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar8 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
                }
              }
              func_0x0001092ba100(puVar6 + 2);
              func_0x000109d1a1d0(puVar6 + 2);
              __ZdlPv(puVar6);
              return;
            }
            FUN_10a219b78(puVar6[9]);
            FUN_10a00946c(&UNK_10f666a01);
            goto LAB_10a5b8a98;
          }
        }
        FUN_10a219b78(puVar6[9]);
        FUN_10a00946c(&UNK_10f666a01);
      }
    }
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
LAB_10a5b8a98:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a5b8a9c);
  (*pcVar5)();
}



/* Entry: 10a5b8b10; end: 10a5b8b83;  */

undefined8 * FUN_10a5b8b10(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
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
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a5b8b84; end: 10a5b8c0f;  */

void FUN_10a5b8b84(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)(&uStack_30,param_1);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a5b8c10; end: 10a5b8c63;  */

void FUN_10a5b8c10(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00010a4bab48(param_1,param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10a5b8c64; end: 10a5b8dff;  */

/* WARNING: Removing unreachable block (ram,0x00010a5b8dc0) */

void FUN_10a5b8c64(long *param_1,long param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x23;
  long lVar7;
  long lVar8;
  long alStack_88 [3];
  long lStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  lVar6 = *param_1;
  plVar2 = param_1;
  if ((ulong)((param_1[2] - lVar6 >> 3) * -0x5555555555555555) < param_4) {
    plVar1 = param_1;
    func_0x000107c3193c();
    if (0xaaaaaaaaaaaaaaa < param_4) {
      FUN_10a05a0c0();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0xaaaaaaaaaaaaaaa;
      __Unwind_Resume();
      alStack_88[1] = 0xaaaaaaaaaaaaaaa;
      pcStack_58 = FUN_10a5b8e00;
      lVar6 = *plVar1;
      if (lVar6 != 0) {
        lVar5 = plVar1[1];
        lVar3 = lVar6;
        alStack_88[2] = param_2;
        lStack_70 = param_3;
        plStack_68 = param_1;
        puStack_60 = &stack0xfffffffffffffff0;
        if (lVar5 != lVar6) {
          do {
            lVar5 = lVar5 + -0x18;
            alStack_88[0] = lVar5;
            func_0x00010a10356c(alStack_88);
          } while (lVar5 != lVar6);
          lVar3 = *plVar1;
        }
        plVar1[1] = lVar6;
        __ZdlPv(lVar3);
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
      }
      return;
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar6 * 0x5555555555555556;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar4 = 0xaaaaaaaaaaaaaaa;
    }
    FUN_10a0cf150(param_1,uVar4);
    FUN_10a102f88(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar3 = param_1[1];
    lVar5 = lVar3 - lVar6;
    if (param_4 <= (ulong)((lVar5 >> 3) * -0x5555555555555555)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar6,param_2);
          param_2 = param_2 + 0x18;
          lVar6 = lVar6 + 0x18;
        } while (param_2 != param_3);
        lVar3 = param_1[1];
      }
      for (; lVar3 != lVar6; lVar3 = lVar3 + -0x18) {
      }
      param_1[1] = lVar6;
      return;
    }
    lVar7 = param_2;
    lVar8 = lVar5;
    if (lVar3 != lVar6) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar6,lVar7);
        lVar6 = lVar6 + 0x18;
        lVar8 = lVar8 + -0x18;
        lVar7 = lVar7 + 0x18;
      } while (lVar8 != 0);
      lVar3 = param_1[1];
    }
    FUN_10a102f88(param_1,param_2 + lVar5,param_3,lVar3);
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 10a5b8e00; end: 10a5b8e6f;  */

void FUN_10a5b8e00(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        lVar3 = lVar3 + -0x18;
        lStack_38 = lVar3;
        func_0x00010a10356c(&lStack_38);
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a5b8e70; end: 10a5b8e83;  */

undefined1  [16] FUN_10a5b8e70(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  puVar3 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar3 >> 0x3d == 0) {
    lVar4 = (long)puVar3 << 3;
    __Znwm(lVar4);
    auVar11._8_8_ = puVar3;
    auVar11._0_8_ = lVar4;
    return auVar11;
  }
  func_0x000109ffded8();
  plVar9 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar9 >> 0x3b == 0) {
    lVar4 = (long)plVar9 << 5;
    __Znwm(lVar4);
    auVar12._8_8_ = plVar9;
    auVar12._0_8_ = lVar4;
    return auVar12;
  }
  func_0x000109ffded8();
  uVar5 = plVar9[1];
  if (uVar5 != 0) {
    uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
    uVar6 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = uVar5 - 1;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = uVar7 & uVar6;
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar6 / uVar5;
        }
        uVar8 = uVar6 - uVar8 * uVar5;
      }
    }
    plVar9 = *(long **)(*plVar9 + uVar8 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if (plVar9[2] == param_2) break;
        }
        else {
          if ((uVar5 & uVar7) == 0) {
            uVar10 = uVar10 & uVar7;
          }
          else if (uVar5 <= uVar10) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar1 * uVar5;
          }
          if (uVar10 != uVar8) goto LAB_10a5b8fcc;
        }
      }
      auVar13._8_8_ = param_2;
      auVar13._0_8_ = plVar9;
      return auVar13;
    }
  }
LAB_10a5b8fcc:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}



/* Entry: 10a5b8e84; end: 10a5b8eb7;  */

undefined1  [16] FUN_10a5b8e84(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_1 >> 0x3d == 0) {
    lVar3 = param_1 << 3;
    __Znwm(lVar3);
    auVar10._8_8_ = param_1;
    auVar10._0_8_ = lVar3;
    return auVar10;
  }
  func_0x000109ffded8();
  plVar8 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar8 >> 0x3b == 0) {
    lVar3 = (long)plVar8 << 5;
    __Znwm(lVar3);
    auVar11._8_8_ = plVar8;
    auVar11._0_8_ = lVar3;
    return auVar11;
  }
  func_0x000109ffded8();
  uVar4 = plVar8[1];
  if (uVar4 != 0) {
    uVar5 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
    uVar5 = (param_2 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
    uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = uVar4 - 1;
    if ((uVar4 & uVar6) == 0) {
      uVar7 = uVar6 & uVar5;
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar5 / uVar4;
        }
        uVar7 = uVar5 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*plVar8 + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar5) {
          if (plVar8[2] == param_2) break;
        }
        else {
          if ((uVar4 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar4 <= uVar9) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar1 * uVar4;
          }
          if (uVar9 != uVar7) goto LAB_10a5b8fcc;
        }
      }
      auVar12._8_8_ = param_2;
      auVar12._0_8_ = plVar8;
      return auVar12;
    }
  }
LAB_10a5b8fcc:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}



/* Entry: 10a5b8eb8; end: 10a5b8ecb;  */

undefined1  [16] FUN_10a5b8eb8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  plVar8 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar8 >> 0x3b == 0) {
    lVar3 = (long)plVar8 << 5;
    __Znwm(lVar3);
    auVar10._8_8_ = plVar8;
    auVar10._0_8_ = lVar3;
    return auVar10;
  }
  func_0x000109ffded8();
  uVar4 = plVar8[1];
  if (uVar4 != 0) {
    uVar5 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
    uVar5 = (param_2 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
    uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = uVar4 - 1;
    if ((uVar4 & uVar6) == 0) {
      uVar7 = uVar6 & uVar5;
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar5 / uVar4;
        }
        uVar7 = uVar5 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*plVar8 + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar5) {
          if (plVar8[2] == param_2) break;
        }
        else {
          if ((uVar4 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar4 <= uVar9) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar1 * uVar4;
          }
          if (uVar9 != uVar7) goto LAB_10a5b8fcc;
        }
      }
      auVar11._8_8_ = param_2;
      auVar11._0_8_ = plVar8;
      return auVar11;
    }
  }
LAB_10a5b8fcc:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}



/* Entry: 10a5b8ecc; end: 10a5b8eff;  */

undefined1  [16] FUN_10a5b8ecc(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if ((ulong)param_1 >> 0x3b == 0) {
    lVar3 = (long)param_1 << 5;
    __Znwm(lVar3);
    auVar10._8_8_ = param_1;
    auVar10._0_8_ = lVar3;
    return auVar10;
  }
  func_0x000109ffded8();
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
    uVar5 = (param_2 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
    uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = uVar4 - 1;
    if ((uVar4 & uVar6) == 0) {
      uVar7 = uVar6 & uVar5;
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar5 / uVar4;
        }
        uVar7 = uVar5 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar5) {
          if (plVar8[2] == param_2) break;
        }
        else {
          if ((uVar4 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar4 <= uVar9) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar1 * uVar4;
          }
          if (uVar9 != uVar7) goto LAB_10a5b8fcc;
        }
      }
      auVar11._8_8_ = param_2;
      auVar11._0_8_ = plVar8;
      return auVar11;
    }
  }
LAB_10a5b8fcc:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}



/* Entry: 10a5b8f00; end: 10a5b8fd3;  */

long * FUN_10a5b8f00(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar4 = ((ulong)uVar2 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a5b8fd4; end: 10a5b907f;  */

void FUN_10a5b8fd4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a3f8758(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a5b9080; end: 10a5b924f;  */

long * FUN_10a5b9080(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  iVar4 = (int)param_2;
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar15 = (long *)param_1[1];
  if (plVar15 > param_2 || param_2 == plVar15) {
    if (plVar15 <= param_2) {
      return plVar3;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar15 <= param_2) {
      return plVar3;
    }
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar3;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar15 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar15 * 8) = 0;
      plVar15 = (long *)((long)plVar15 + 1);
    } while (param_2 != plVar15);
    plVar15 = (long *)param_1[2];
    if (plVar15 != (long *)0x0) {
      plVar7 = (long *)plVar15[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar6);
      }
      else if (param_2 <= plVar7) {
        uVar8 = 0;
        if (param_2 != (long *)0x0) {
          uVar8 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar8 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar15;
      while (plVar10 != (long *)0x0) {
        plVar13 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar6);
        }
        else if (param_2 <= plVar13) {
          uVar8 = 0;
          if (param_2 != (long *)0x0) {
            uVar8 = (ulong)plVar13 / (ulong)param_2;
          }
          plVar13 = (long *)((long)plVar13 - uVar8 * (long)param_2);
        }
        plVar11 = plVar10;
        if (plVar13 != plVar7) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar13 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar13 * 8) = plVar15;
            plVar7 = plVar13;
          }
          else {
            *plVar15 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar2 + (long)plVar13 * 8);
            **(long **)(lVar2 + (long)plVar13 * 8) = (long)plVar10;
            plVar11 = plVar15;
          }
        }
        plVar15 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
    return plVar3;
  }
  func_0x000109ffded8();
  uVar6 = plVar3[1];
  if (uVar6 != 0) {
    uVar8 = ((ulong)(uint)(iVar4 << 3) + 8 ^ (ulong)uVar5) * -0x622015f714c7d297;
    uVar8 = ((ulong)uVar5 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
    uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    uVar9 = uVar6 - 1;
    if ((uVar6 & uVar9) == 0) {
      uVar12 = uVar9 & uVar8;
    }
    else {
      uVar12 = uVar8;
      if (uVar6 <= uVar8) {
        uVar12 = 0;
        if (uVar6 != 0) {
          uVar12 = uVar8 / uVar6;
        }
        uVar12 = uVar8 - uVar12 * uVar6;
      }
    }
    plVar3 = *(long **)(*plVar3 + uVar12 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar14 = plVar3[1];
        if (uVar8 - uVar14 == 0) {
          if (plVar3[2] == CONCAT44(uVar5,iVar4)) {
            return plVar3;
          }
        }
        else {
          if ((uVar6 & uVar9) == 0) {
            uVar14 = uVar14 & uVar9;
          }
          else if (uVar6 <= uVar14) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar1 * uVar6;
          }
          if (uVar14 != uVar12) {
            return (long *)0x0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a5b9250; end: 10a5b9323;  */

long * FUN_10a5b9250(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar4 = ((ulong)uVar2 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a5b9324; end: 10a5b95b3;  */

long * FUN_10a5b9324(ulong param_1,long param_2,ulong *param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong unaff_x24;
  
  plVar3 = (long *)*param_3;
  func_0x00010a5c6560(plVar3,param_3[1],param_1);
  if ((plVar3 != (long *)0x0) ||
     (plVar3 = param_4, FUN_10a5c662c(param_4,param_1,param_1), ((ulong)plVar3 & 1) == 0)) {
    return plVar3;
  }
  for (lVar14 = *(long *)(param_1 + 0x500); lVar14 != 0; lVar14 = *(long *)(lVar14 + 0x500)) {
    lVar10 = param_2;
    FUN_10a5b9250(param_2,lVar14);
    if (lVar10 != 0) {
      FUN_10a5b9324(lVar14,param_2,param_3,param_4);
      *(byte *)(param_1 + 0x4f3) = *(byte *)(param_1 + 0x4f3) | *(byte *)(lVar14 + 0x4f3);
      break;
    }
  }
  uVar5 = param_4[1];
  if (uVar5 != 0) {
    uVar7 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ param_1 >> 0x20) * -0x622015f714c7d297;
    uVar7 = (param_1 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar8 = uVar5 - 1;
    if ((uVar5 & uVar8) == 0) {
      uVar9 = uVar8 & uVar7;
    }
    else {
      uVar9 = uVar7;
      if (uVar5 <= uVar7) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar7 / uVar5;
        }
        uVar9 = uVar7 - uVar9 * uVar5;
      }
    }
    lVar14 = *param_4;
    puVar11 = *(undefined8 **)(lVar14 + uVar9 * 8);
    if ((puVar11 != (undefined8 *)0x0) && (plVar3 = (long *)*puVar11, plVar3 != (long *)0x0)) {
LAB_10a5b9444:
      uVar12 = plVar3[1];
      if (uVar12 == uVar7) {
        if (plVar3[2] != param_1) goto LAB_10a5b9488;
        lVar10 = *plVar3;
        if ((uVar5 & uVar8) == 0) {
          uVar7 = uVar7 & uVar8;
        }
        else if (uVar5 <= uVar7) {
          uVar9 = 0;
          if (uVar5 != 0) {
            uVar9 = uVar7 / uVar5;
          }
          uVar7 = uVar7 - uVar9 * uVar5;
        }
        plVar2 = *(long **)(lVar14 + uVar7 * 8);
        do {
          plVar13 = plVar2;
          plVar2 = (long *)*plVar13;
        } while ((long *)*plVar13 != plVar3);
        if (plVar13 == param_4 + 2) {
LAB_10a5b9504:
          if (lVar10 == 0) {
LAB_10a5b9538:
            *(undefined8 *)(lVar14 + uVar7 * 8) = 0;
            lVar10 = *plVar3;
            goto LAB_10a5b9540;
          }
          uVar9 = *(ulong *)(lVar10 + 8);
          if ((uVar5 & uVar8) == 0) {
            uVar12 = uVar9 & uVar8;
          }
          else {
            uVar12 = uVar9;
            if (uVar5 <= uVar9) {
              uVar12 = 0;
              if (uVar5 != 0) {
                uVar12 = uVar9 / uVar5;
              }
              uVar12 = uVar9 - uVar12 * uVar5;
            }
          }
          if (uVar12 != uVar7) goto LAB_10a5b9538;
LAB_10a5b9548:
          if ((uVar5 & uVar8) == 0) {
            uVar9 = uVar9 & uVar8;
          }
          else if (uVar5 <= uVar9) {
            uVar8 = 0;
            if (uVar5 != 0) {
              uVar8 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar8 * uVar5;
          }
          if (uVar9 != uVar7) {
            *(long **)(*param_4 + uVar9 * 8) = plVar13;
            lVar10 = *plVar3;
          }
        }
        else {
          uVar9 = plVar13[1];
          if ((uVar5 & uVar8) == 0) {
            uVar9 = uVar9 & uVar8;
          }
          else if (uVar5 <= uVar9) {
            uVar12 = 0;
            if (uVar5 != 0) {
              uVar12 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar12 * uVar5;
          }
          if (uVar9 != uVar7) goto LAB_10a5b9504;
LAB_10a5b9540:
          if (lVar10 != 0) {
            uVar9 = *(ulong *)(lVar10 + 8);
            goto LAB_10a5b9548;
          }
        }
        *plVar13 = lVar10;
        *plVar3 = 0;
        param_4[3] = param_4[3] + -1;
        __ZdlPv();
      }
      else {
        if ((uVar5 & uVar8) == 0) {
          uVar12 = uVar12 & uVar8;
        }
        else if (uVar5 <= uVar12) {
          uVar1 = 0;
          if (uVar5 != 0) {
            uVar1 = uVar12 / uVar5;
          }
          uVar12 = uVar12 - uVar1 * uVar5;
        }
        if (uVar12 == uVar9) goto LAB_10a5b9488;
      }
    }
  }
code_r0x00010a5c662c:
  uVar5 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ param_1 >> 0x20) * -0x622015f714c7d297;
  uVar5 = (param_1 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
  uVar7 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
  uVar5 = param_3[1];
  if (uVar5 != 0) {
    uVar8 = uVar5 - 1;
    if ((uVar5 & uVar8) == 0) {
      unaff_x24 = uVar8 & uVar7;
    }
    else {
      unaff_x24 = uVar7;
      if (uVar5 <= uVar7) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar7 / uVar5;
        }
        unaff_x24 = uVar7 - uVar9 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_3 + unaff_x24 * 8);
    if (plVar3 != (long *)0x0) {
      do {
        while( true ) {
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) goto LAB_10a5c670c;
          uVar9 = plVar3[1];
          if (uVar9 != uVar7) break;
          if (plVar3[2] == param_1) {
            return (long *)0x0;
          }
        }
        if ((uVar5 & uVar8) == 0) {
          uVar9 = uVar9 & uVar8;
        }
        else if (uVar5 <= uVar9) {
          uVar12 = 0;
          if (uVar5 != 0) {
            uVar12 = uVar9 / uVar5;
          }
          uVar9 = uVar9 - uVar12 * uVar5;
        }
      } while (uVar9 == unaff_x24);
    }
  }
LAB_10a5c670c:
  puVar4 = (ulong *)0x18;
  __Znwm();
  *puVar4 = 0;
  puVar4[1] = uVar7;
  puVar4[2] = param_1;
  if ((uVar5 == 0) || (*(float *)(param_3 + 4) * (float)uVar5 < (float)(param_3[3] + 1))) {
    uVar8 = 1;
    if (2 < uVar5) {
      uVar8 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar8 = uVar8 | uVar5 << 1;
    uVar5 = (ulong)((float)(param_3[3] + 1) / *(float *)(param_3 + 4));
    if (uVar8 <= uVar5) {
      uVar8 = uVar5;
    }
    FUN_10a5c6854(param_3,uVar8);
    uVar5 = param_3[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      unaff_x24 = uVar5 - 1 & uVar7;
    }
    else {
      unaff_x24 = uVar7;
      if (uVar5 <= uVar7) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar7 / uVar5;
        }
        unaff_x24 = uVar7 - uVar8 * uVar5;
      }
    }
  }
  uVar7 = *param_3;
  puVar6 = *(ulong **)(uVar7 + unaff_x24 * 8);
  if (puVar6 == (ulong *)0x0) {
    puVar6 = param_3 + 2;
    *puVar4 = *puVar6;
    *puVar6 = (ulong)puVar4;
    *(ulong **)(uVar7 + unaff_x24 * 8) = puVar6;
    if (*puVar4 == 0) goto LAB_10a5c6814;
    uVar7 = *(ulong *)(*puVar4 + 8);
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar7 = uVar7 & uVar5 - 1;
    }
    else if (uVar5 <= uVar7) {
      uVar8 = 0;
      if (uVar5 != 0) {
        uVar8 = uVar7 / uVar5;
      }
      uVar7 = uVar7 - uVar8 * uVar5;
    }
    puVar6 = (ulong *)(*param_3 + uVar7 * 8);
  }
  else {
    *puVar4 = *puVar6;
  }
  *puVar6 = (ulong)puVar4;
LAB_10a5c6814:
  param_3[3] = param_3[3] + 1;
  return (long *)0x1;
LAB_10a5b9488:
  plVar3 = (long *)*plVar3;
  if (plVar3 == (long *)0x0) goto code_r0x00010a5c662c;
  goto LAB_10a5b9444;
}



/* Entry: 10a5b95b4; end: 10a5b9953;  */

long * FUN_10a5b95b4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  plVar3 = param_2;
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar11 = (long *)param_1[1];
  if (plVar11 > param_2 || param_2 == plVar11) {
    if (plVar11 <= param_2) {
      return plVar4;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar11 < (long *)0x3) || (((ulong)plVar11 & (long)plVar11 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar11 <= param_2) {
      return plVar4;
    }
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar3;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar11 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar11 = (long *)((ulong)plVar11 & uVar5);
      }
      else if (param_2 <= plVar11) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar11 / (ulong)param_2;
        }
        plVar11 = (long *)((long)plVar11 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar11 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar9 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar5);
        }
        else if (param_2 <= plVar9) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar9 != plVar11) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar9 * 8) = plVar4;
            plVar11 = plVar9;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar9 * 8);
            **(long **)(lVar2 + (long)plVar9 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return plVar3;
  }
  func_0x000109ffded8();
  plVar11 = plVar4;
  if ((long)plVar3 - 1U == 0) {
    plVar3 = (long *)0x2;
  }
  else if (((ulong)plVar3 & (long)plVar3 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar11 = plVar3;
  }
  plVar6 = (long *)plVar4[1];
  if (plVar6 > plVar3 || plVar3 == plVar6) {
    if (plVar6 <= plVar3) {
      return plVar11;
    }
    plVar11 = (long *)(long)((float)(ulong)plVar4[3] / *(float *)(plVar4 + 4));
    if ((plVar6 < (long *)0x3) || (((ulong)plVar6 & (long)plVar6 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar11) {
      plVar11 = (long *)(1L << (-LZCOUNT((long)plVar11 + -1) & 0x3fU));
    }
    if (plVar3 <= plVar11) {
      plVar3 = plVar11;
    }
    if (plVar6 <= plVar3) {
      return plVar11;
    }
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)*plVar4;
      *plVar4 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      plVar4[1] = 0;
      return plVar3;
    }
  }
  if ((ulong)plVar3 >> 0x3d == 0) {
    lVar2 = (long)plVar3 << 3;
    __Znwm();
    plVar11 = (long *)*plVar4;
    *plVar4 = lVar2;
    if (plVar11 != (long *)0x0) {
      __ZdlPv();
    }
    plVar6 = (long *)0x0;
    plVar4[1] = (long)plVar3;
    do {
      *(undefined8 *)(*plVar4 + (long)plVar6 * 8) = 0;
      plVar6 = (long *)((long)plVar6 + 1);
    } while (plVar3 != plVar6);
    plVar6 = (long *)plVar4[2];
    if (plVar6 != (long *)0x0) {
      plVar9 = (long *)plVar6[1];
      uVar5 = (long)plVar3 - 1;
      if (((ulong)plVar3 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (plVar3 <= plVar9) {
        uVar1 = 0;
        if (plVar3 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar3;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar3);
      }
      *(long **)(*plVar4 + (long)plVar9 * 8) = plVar4 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        plVar10 = (long *)plVar7[1];
        if (((ulong)plVar3 & uVar5) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar5);
        }
        else if (plVar3 <= plVar10) {
          uVar1 = 0;
          if (plVar3 != (long *)0x0) {
            uVar1 = (ulong)plVar10 / (ulong)plVar3;
          }
          plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar3);
        }
        plVar8 = plVar7;
        if (plVar10 != plVar9) {
          lVar2 = *plVar4;
          if (*(long *)(lVar2 + (long)plVar10 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar10 * 8) = plVar6;
            plVar9 = plVar10;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + (long)plVar10 * 8);
            **(long **)(lVar2 + (long)plVar10 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
    return plVar11;
  }
  func_0x000109ffded8();
  plVar3 = (long *)plVar11[2];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = *plVar11;
  *plVar11 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar11;
}



/* Entry: 10a5b9954; end: 10a5b999b;  */

long * FUN_10a5b9954(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5b999c; end: 10a5b9a6f;  */

/* WARNING: Possible PIC construction at 0x00010a5b9b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5b9b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5b9d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5b9dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5ba74c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5ba888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5baacc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5baa98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5baab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5b9ba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a5baa9c) */
/* WARNING: Removing unreachable block (ram,0x00010a5baad0) */
/* WARNING: Removing unreachable block (ram,0x00010a5baadc) */
/* WARNING: Removing unreachable block (ram,0x00010a5baae8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab00) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab18) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab28) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab30) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab88) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab3c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab50) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab6c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab80) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab8c) */
/* WARNING: Removing unreachable block (ram,0x00010a5babf8) */
/* WARNING: Removing unreachable block (ram,0x00010a5baba4) */
/* WARNING: Removing unreachable block (ram,0x00010a5babb8) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba88c) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba8a8) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba8bc) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba8cc) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba8f0) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba904) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba914) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba938) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba94c) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba95c) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba980) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba9c8) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba994) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba9a4) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba9ac) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba750) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba76c) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba780) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba790) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba7b4) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba7c8) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba7d8) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba7fc) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba844) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba810) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba820) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba828) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9dd0) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d94) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f5c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f64) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9db0) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9b70) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9bac) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9bc4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9bd4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9be8) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ddc) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9df0) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e30) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e34) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e44) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e54) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9dfc) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e00) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e0c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e1c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e28) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e64) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e74) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e78) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e80) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e90) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e9c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f38) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ea4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9eb0) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ebc) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ec4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ed4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9eec) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9efc) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f00) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f08) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f1c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f28) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f30) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f3c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f48) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f50) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9bf8) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c00) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c10) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c24) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c38) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c4c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c84) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c88) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c90) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ca0) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c5c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c64) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c74) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c80) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9cac) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d60) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9cb4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9cc4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9cd8) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ce0) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9cf4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d08) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d18) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d1c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d24) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d38) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d44) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d50) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d64) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d6c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d74) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9db4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d84) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba9d4) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa68) */
/* WARNING: Removing unreachable block (ram,0x00010a5baaa0) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa70) */
/* WARNING: Removing unreachable block (ram,0x00010a5babbc) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa78) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa80) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa10) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa14) */
/* WARNING: Removing unreachable block (ram,0x00010a5baab8) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa1c) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa38) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac08) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac38) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac44) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac30) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac50) */
/* WARNING: Removing unreachable block (ram,0x00010a5baccc) */
/* WARNING: Removing unreachable block (ram,0x00010a5bacd0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bacec) */
/* WARNING: Removing unreachable block (ram,0x00010a5bada4) */
/* WARNING: Removing unreachable block (ram,0x00010a5bacf8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad10) */
/* WARNING: Removing unreachable block (ram,0x00010a5bada8) */
/* WARNING: Removing unreachable block (ram,0x00010a5badac) */
/* WARNING: Removing unreachable block (ram,0x00010a5badb8) */
/* WARNING: Removing unreachable block (ram,0x00010a5badbc) */
/* WARNING: Removing unreachable block (ram,0x00010a5badc8) */
/* WARNING: Removing unreachable block (ram,0x00010a5badcc) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac5c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bade0) */
/* WARNING: Removing unreachable block (ram,0x00010a5badf8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bae00) */
/* WARNING: Removing unreachable block (ram,0x00010a5bae08) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac64) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac7c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac80) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac88) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac9c) */
/* WARNING: Removing unreachable block (ram,0x00010a5baca8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad18) */
/* WARNING: Removing unreachable block (ram,0x00010a5bacb8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bacc0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad1c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad2c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad4c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad38) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad40) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad50) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad58) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad9c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad64) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad84) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad88) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad98) */
/* WARNING: Removing unreachable block (ram,0x00010a5badd0) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa4c) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa5c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9b44) */
/* WARNING: Removing unreachable block (ram,0x00010a5baab4) */
/* WARNING: Removing unreachable block (ram,0x00010a5babd4) */
/* WARNING: Removing unreachable block (ram,0x00010a5babd8) */

void FUN_10a5b999c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 **ppuVar24;
  undefined1 **ppuVar25;
  undefined8 uVar26;
  undefined1 auStack_110 [16];
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  puVar23 = (undefined8 *)param_1[1];
  if (puVar23 < (undefined8 *)param_1[2]) {
    puVar20 = puVar23 + 1;
    *puVar23 = param_2;
LAB_10a5b9a4c:
    param_1[1] = puVar20;
    return;
  }
  puVar18 = (undefined8 *)*param_1;
  puVar21 = (undefined8 *)((long)puVar23 - (long)puVar18);
  puVar22 = (undefined8 *)((long)puVar21 >> 3);
  puVar20 = (undefined8 *)((long)puVar22 + 1);
  puVar11 = param_2;
  if ((ulong)puVar20 >> 0x3d == 0) {
    uVar15 = (long)param_1[2] - (long)puVar18;
    unaff_x25 = (undefined8 *)((long)uVar15 >> 2);
    if (unaff_x25 <= puVar20) {
      unaff_x25 = puVar20;
    }
    if (0x7ffffffffffffff7 < uVar15) {
      unaff_x25 = (undefined8 *)0x1fffffffffffffff;
    }
    if ((ulong)unaff_x25 >> 0x3d == 0) {
      lVar7 = (long)unaff_x25 << 3;
      __Znwm();
      puVar23 = (undefined8 *)(lVar7 + (long)puVar21);
      puVar20 = puVar23 + 1;
      *puVar23 = param_2;
      _memcpy(puVar23 + -(long)puVar22,puVar18,puVar21);
      *param_1 = puVar23 + -(long)puVar22;
      param_1[1] = puVar20;
      param_1[2] = lVar7 + (long)unaff_x25 * 8;
      if (puVar18 != (undefined8 *)0x0) {
        __ZdlPv(puVar18);
      }
      goto LAB_10a5b9a4c;
    }
  }
  else {
    FUN_10a5b9a70();
  }
  func_0x000109ffded8();
  ppuVar24 = &puStack_60;
  ppuVar25 = &puStack_60;
  ppuVar5 = &puStack_60;
  ppuVar6 = &puStack_60;
  pcStack_58 = FUN_10a5b9a70;
  puVar8 = (undefined8 *)&DAT_10f62a4d8;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  uStack_68 = 0x10a5b9a84;
  puStack_f0 = (undefined8 *)CONCAT44(puStack_f0._4_4_,(int)param_5);
  puVar19 = puVar11 + -1;
  puStack_f8 = puVar11 + -2;
  puStack_100 = puVar11 + -3;
  puVar16 = (undefined8 *)((long)puVar11 - (long)puVar8 >> 3);
  puVar20 = puVar8;
  puVar13 = param_3;
  puVar14 = param_4;
  puStack_e8 = puVar19;
  puStack_d0 = param_3;
  puStack_c8 = puVar11;
  if ((long)puVar16 - 2U == 0 || (long)puVar16 < 2) {
    if (puVar16 < (undefined8 *)0x2) {
      return;
    }
    if (puVar16 == (undefined8 *)0x2) {
      puVar21 = (undefined8 *)puVar11[-1];
      puVar22 = (undefined8 *)*puVar8;
      puVar23 = (undefined8 *)*param_3;
      puVar20 = puVar23;
      puVar12 = puVar21;
      puStack_70 = (undefined1 *)&puStack_60;
      FUN_10a5b9250();
      unaff_x27 = param_3;
      if ((puVar20 != (undefined8 *)0x0) &&
         (puVar18 = puVar23, puVar12 = puVar22, FUN_10a5b9250(), param_1 = puVar20,
         puVar18 != (undefined8 *)0x0)) {
        if (*(ushort *)(puVar18 + 3) <= *(ushort *)(puVar20 + 3)) {
          return;
        }
        *puVar8 = puVar21;
        puStack_c8[-1] = puVar22;
        return;
      }
LAB_10a5ba5a4:
      puVar20 = (undefined8 *)&UNK_10f639994;
      uVar26 = 0x10a5ba5b0;
      FUN_109ffdddc();
      ppuVar5 = (undefined1 **)auStack_110;
      puVar19 = puVar13;
      param_3 = puVar14;
      puVar18 = param_4;
      param_2 = puVar8;
      ppuVar24 = &puStack_70;
      goto SUB_10a5ba5b0;
    }
  }
  else {
    if (puVar16 == (undefined8 *)0x3) {
      puVar12 = puVar8 + 1;
      uVar26 = 0x10a5b9a84;
      puStack_70 = (undefined1 *)&puStack_60;
      goto SUB_10a5ba5b0;
    }
    if (puVar16 == (undefined8 *)0x4) {
      puVar11 = puVar8 + 1;
      puVar16 = puVar8 + 2;
      uVar26 = 0x10a5b9a84;
      puVar13 = puVar19;
      puStack_70 = (undefined1 *)&puStack_60;
      goto SUB_10a5ba718;
    }
    if (puVar16 == (undefined8 *)0x5) {
      puVar11 = puVar8 + 1;
      puVar16 = puVar8 + 2;
      puVar22 = puVar8 + 3;
      uStack_68 = 0x10a5b9a84;
      ppuVar6 = (undefined1 **)&stack0xffffffffffffff40;
      ppuVar25 = &puStack_70;
      uVar26 = 0x10a5ba88c;
      puVar13 = puVar22;
      param_1 = puVar11;
      puVar18 = puVar8;
      param_2 = param_3;
      puVar21 = puVar16;
      puVar23 = puVar19;
      puStack_70 = (undefined1 *)&puStack_60;
      goto SUB_10a5ba718;
    }
  }
  puVar22 = puVar11;
  if ((long)puVar16 < 0x18) {
    puVar21 = puVar8 + 1;
    if (((ulong)param_5 & 1) == 0) {
      if (puVar8 != puVar11 && puVar21 != puVar11) {
        puVar23 = (undefined8 *)0x8;
        param_4 = (undefined8 *)0x0;
        puStack_70 = (undefined1 *)&puStack_60;
        do {
          param_1 = puVar23;
          puVar21 = (undefined8 *)*puVar21;
          unaff_x25 = (undefined8 *)*param_3;
          puVar18 = unaff_x25;
          puVar12 = puVar21;
          FUN_10a5b9250();
          puVar23 = puVar20;
          unaff_x27 = param_3;
          if (puVar18 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
          puVar22 = *(undefined8 **)((long)puVar8 + (long)param_4);
          puVar11 = unaff_x25;
          puVar12 = puVar22;
          FUN_10a5b9250();
          puVar23 = puVar18;
          if (puVar11 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
          param_4 = param_1;
          puVar20 = puVar18;
          if (*(ushort *)(puVar18 + 3) < *(ushort *)(puVar11 + 3)) {
            do {
              unaff_x26 = (undefined8 *)((long)puVar8 + (long)param_4);
              *unaff_x26 = puVar22;
              if (param_4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5ba5a4);
                (*pcVar4)();
              }
              unaff_x25 = (undefined8 *)*param_3;
              puVar20 = unaff_x25;
              puVar12 = puVar21;
              FUN_10a5b9250();
              puVar23 = puVar18;
              if (puVar20 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
              puVar22 = (undefined8 *)unaff_x26[-2];
              puVar11 = unaff_x25;
              puVar12 = puVar22;
              FUN_10a5b9250();
              puVar23 = puVar20;
              if (puVar11 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
              param_4 = param_4 + -1;
              puVar18 = puVar20;
            } while (*(ushort *)(puVar20 + 3) < *(ushort *)(puVar11 + 3));
            *(undefined8 **)((long)puVar8 + (long)param_4) = puVar21;
          }
          puVar21 = (undefined8 *)((long)puVar8 + (long)(param_1 + 1));
          puVar23 = param_1 + 1;
          param_4 = param_1;
        } while (puVar21 != puStack_c8);
      }
    }
    else if (puVar8 != puVar11 && puVar21 != puVar11) {
      param_1 = (undefined8 *)0x0;
      param_4 = puVar8;
      puVar23 = puVar8;
      puStack_70 = (undefined1 *)&puStack_60;
      do {
        unaff_x26 = puVar21;
        puVar21 = (undefined8 *)param_4[1];
        unaff_x25 = (undefined8 *)*param_3;
        puVar20 = unaff_x25;
        puVar12 = puVar21;
        FUN_10a5b9250();
        unaff_x27 = param_3;
        if (puVar20 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
        puVar22 = (undefined8 *)*param_4;
        puVar18 = unaff_x25;
        puVar12 = puVar22;
        FUN_10a5b9250();
        puVar23 = puVar20;
        if (puVar18 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
        param_4 = param_1;
        if (*(ushort *)(puVar20 + 3) < *(ushort *)(puVar18 + 3)) {
          do {
            unaff_x27 = (undefined8 *)((long)puVar8 + (long)param_4);
            unaff_x27[1] = puVar22;
            puVar23 = puVar8;
            if (param_4 == (undefined8 *)0x0) goto LAB_10a5ba120;
            unaff_x25 = (undefined8 *)*puStack_d0;
            puVar18 = unaff_x25;
            puVar12 = puVar21;
            FUN_10a5b9250();
            puVar23 = puVar20;
            if (puVar18 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            puVar22 = (undefined8 *)unaff_x27[-1];
            puVar11 = unaff_x25;
            puVar12 = puVar22;
            FUN_10a5b9250();
            puVar23 = puVar18;
            if (puVar11 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            param_4 = param_4 + -1;
            puVar20 = puVar18;
          } while (*(ushort *)(puVar18 + 3) < *(ushort *)(puVar11 + 3));
          puVar23 = (undefined8 *)((long)puVar8 + (long)param_4 + 8);
LAB_10a5ba120:
          *puVar23 = puVar21;
          param_3 = puStack_d0;
        }
        param_1 = param_1 + 1;
        puVar21 = unaff_x26 + 1;
        param_4 = unaff_x26;
        puVar23 = puVar20;
      } while (unaff_x26 + 1 != puStack_c8);
    }
  }
  else {
    if (param_4 != (undefined8 *)0x0) {
      puVar23 = puVar8 + ((ulong)puVar16 >> 1);
      puVar18 = param_4;
      param_2 = puVar8;
      if (puVar16 < (undefined8 *)0x81) {
        uVar26 = 0x10a5b9bac;
        ppuVar5 = (undefined1 **)auStack_110;
        puVar20 = puVar23;
        puVar12 = puVar8;
        unaff_x27 = param_3;
        ppuVar24 = &puStack_70;
        puStack_70 = (undefined1 *)&puStack_60;
      }
      else {
        uVar26 = 0x10a5b9b44;
        ppuVar5 = (undefined1 **)auStack_110;
        puVar12 = puVar23;
        unaff_x27 = param_3;
        ppuVar24 = &puStack_70;
        puStack_70 = (undefined1 *)&puStack_60;
      }
SUB_10a5ba5b0:
      do {
        ppuVar6 = (undefined1 **)((long)ppuVar5 + -0x60);
        *(undefined8 **)((long)ppuVar5 + -0x60) = unaff_x28;
        *(undefined8 **)((long)ppuVar5 + -0x58) = unaff_x27;
        *(undefined8 **)((long)ppuVar5 + -0x50) = unaff_x26;
        *(undefined8 **)((long)ppuVar5 + -0x48) = unaff_x25;
        *(undefined8 **)((long)ppuVar5 + -0x40) = puVar23;
        *(undefined8 **)((long)ppuVar5 + -0x38) = puVar22;
        *(undefined8 **)((long)ppuVar5 + -0x30) = puVar21;
        *(undefined8 **)((long)ppuVar5 + -0x28) = param_2;
        *(undefined8 **)((long)ppuVar5 + -0x20) = puVar18;
        *(undefined8 **)((long)ppuVar5 + -0x18) = param_1;
        *(undefined1 ***)((long)ppuVar5 + -0x10) = ppuVar24;
        *(undefined8 *)((long)ppuVar5 + -8) = uVar26;
        ppuVar25 = (undefined1 **)((long)ppuVar5 + -0x10);
        puVar23 = (undefined8 *)*puVar12;
        puVar21 = (undefined8 *)*puVar20;
        unaff_x26 = (undefined8 *)*param_3;
        puVar18 = unaff_x26;
        puVar11 = puVar23;
        puVar16 = puVar19;
        puVar13 = param_3;
        FUN_10a5b9250();
        puVar22 = param_3;
        if (puVar18 != (undefined8 *)0x0) {
          uVar2 = *(ushort *)(puVar18 + 3);
          unaff_x27 = (undefined8 *)(ulong)uVar2;
          puVar18 = unaff_x26;
          puVar11 = puVar21;
          FUN_10a5b9250();
          if (puVar18 != (undefined8 *)0x0) {
            uVar3 = *(ushort *)(puVar18 + 3);
            unaff_x28 = (undefined8 *)(ulong)uVar3;
            unaff_x25 = (undefined8 *)*puVar19;
            puVar18 = unaff_x26;
            puVar11 = unaff_x25;
            FUN_10a5b9250();
            if (uVar2 < uVar3) {
              if (puVar18 != (undefined8 *)0x0) {
                if (*(ushort *)(puVar18 + 3) < uVar2) {
                  *puVar20 = unaff_x25;
                  goto LAB_10a5ba6ec;
                }
                *puVar20 = puVar23;
                *puVar12 = puVar21;
                puVar20 = (undefined8 *)*puVar19;
                puVar23 = (undefined8 *)*param_3;
                puVar18 = puVar23;
                puVar11 = puVar20;
                FUN_10a5b9250();
                if ((puVar18 != (undefined8 *)0x0) &&
                   (puVar8 = puVar23, puVar11 = puVar21, FUN_10a5b9250(), puVar22 = puVar18,
                   puVar8 != (undefined8 *)0x0)) {
                  if (*(ushort *)(puVar18 + 3) < *(ushort *)(puVar8 + 3)) {
                    *puVar12 = puVar20;
LAB_10a5ba6ec:
                    *puVar19 = puVar21;
                  }
                  return;
                }
              }
            }
            else if (puVar18 != (undefined8 *)0x0) {
              if (uVar2 <= *(ushort *)(puVar18 + 3)) {
                return;
              }
              *puVar12 = unaff_x25;
              *puVar19 = puVar23;
              puVar19 = (undefined8 *)*puVar12;
              puVar21 = (undefined8 *)*puVar20;
              puVar23 = (undefined8 *)*param_3;
              puVar18 = puVar23;
              puVar11 = puVar19;
              FUN_10a5b9250();
              if ((puVar18 != (undefined8 *)0x0) &&
                 (puVar8 = puVar23, puVar11 = puVar21, FUN_10a5b9250(), puVar22 = puVar18,
                 puVar8 != (undefined8 *)0x0)) {
                if (*(ushort *)(puVar8 + 3) <= *(ushort *)(puVar18 + 3)) {
                  return;
                }
                *puVar20 = puVar19;
                *puVar12 = puVar21;
                return;
              }
            }
          }
        }
        puVar8 = (undefined8 *)&UNK_10f639994;
        uVar26 = 0x10a5ba718;
        FUN_109ffdddc();
        param_3 = param_5;
        param_1 = puVar12;
        puVar18 = puVar19;
        param_2 = puVar20;
SUB_10a5ba718:
        *(undefined8 **)((long)ppuVar6 + -0x60) = unaff_x28;
        *(undefined8 **)((long)ppuVar6 + -0x58) = unaff_x27;
        *(undefined8 **)((long)ppuVar6 + -0x50) = unaff_x26;
        *(undefined8 **)((long)ppuVar6 + -0x48) = unaff_x25;
        *(undefined8 **)((long)ppuVar6 + -0x40) = puVar23;
        *(undefined8 **)((long)ppuVar6 + -0x38) = puVar22;
        *(undefined8 **)((long)ppuVar6 + -0x30) = puVar21;
        *(undefined8 **)((long)ppuVar6 + -0x28) = param_2;
        *(undefined8 **)((long)ppuVar6 + -0x20) = puVar18;
        *(undefined8 **)((long)ppuVar6 + -0x18) = param_1;
        *(undefined1 ***)((long)ppuVar6 + -0x10) = ppuVar25;
        *(undefined8 *)((long)ppuVar6 + -8) = uVar26;
        uVar26 = 0x10a5ba750;
        ppuVar5 = (undefined1 **)((long)ppuVar6 + -0x60);
        puVar20 = puVar8;
        puVar12 = puVar11;
        puVar19 = puVar16;
        param_5 = param_3;
        param_1 = puVar11;
        puVar18 = puVar8;
        param_2 = param_3;
        puVar21 = puVar16;
        puVar22 = puVar13;
        ppuVar24 = (undefined1 **)((long)ppuVar6 + -0x10);
      } while( true );
    }
    if (puVar8 != puVar11) {
      puVar23 = (undefined8 *)((long)puVar16 - 2U >> 1);
      puVar18 = puVar8;
      puVar20 = unaff_x25;
      puStack_e8 = puVar23;
      puStack_d8 = puVar16;
      puStack_70 = (undefined1 *)&puStack_60;
      do {
        param_4 = puVar23;
        if ((long)puVar23 <= (long)puStack_e8) {
          param_1 = (undefined8 *)((long)puVar23 << 1 | 1);
          puVar11 = puVar8 + (long)param_1;
          param_4 = (undefined8 *)((long)puVar23 * 2 + 2);
          puVar19 = (undefined8 *)*puVar11;
          unaff_x25 = puVar20;
          puVar21 = puVar19;
          puVar22 = puVar11;
          puStack_f8 = puVar23;
          if ((long)param_4 < (long)puVar16) {
            puVar18 = (undefined8 *)*param_3;
            puVar20 = puVar18;
            puVar12 = puVar19;
            FUN_10a5b9250();
            puVar23 = puVar18;
            unaff_x27 = param_3;
            if (puVar20 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            unaff_x27 = puVar11 + 1;
            unaff_x25 = (undefined8 *)*unaff_x27;
            puVar16 = puVar18;
            puVar12 = unaff_x25;
            FUN_10a5b9250();
            unaff_x26 = puVar20;
            if (puVar16 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            puVar17 = param_4;
            puVar21 = unaff_x25;
            puVar22 = unaff_x27;
            param_3 = puStack_d0;
            if (*(ushort *)(puVar16 + 3) <= *(ushort *)(puVar20 + 3)) {
              puVar17 = param_1;
              puVar21 = puVar19;
              puVar22 = puVar11;
            }
          }
          else {
            puVar18 = (undefined8 *)*param_3;
            puVar17 = param_1;
          }
          param_4 = puStack_f8;
          unaff_x26 = puVar8 + (long)puStack_f8;
          unaff_x28 = (undefined8 *)*unaff_x26;
          puVar20 = puVar18;
          puVar12 = puVar21;
          FUN_10a5b9250();
          param_1 = puVar17;
          puVar23 = puVar18;
          unaff_x27 = param_3;
          if ((puVar20 == (undefined8 *)0x0) ||
             (puVar11 = puVar18, puVar12 = unaff_x28, FUN_10a5b9250(), unaff_x25 = puVar20,
             puVar11 == (undefined8 *)0x0)) goto LAB_10a5ba5a4;
          puVar16 = puStack_d8;
          puVar23 = unaff_x28;
          if (*(ushort *)(puVar11 + 3) <= *(ushort *)(puVar20 + 3)) {
            do {
              puStack_f0 = puVar23;
              param_4 = puVar22;
              *unaff_x26 = puVar21;
              puVar22 = param_4;
              if ((long)puStack_e8 < (long)puVar17) break;
              unaff_x28 = (undefined8 *)((long)puVar17 << 1 | 1);
              puVar11 = puVar8 + (long)unaff_x28;
              param_1 = (undefined8 *)((long)puVar17 * 2 + 2);
              puVar19 = (undefined8 *)*puVar11;
              puVar21 = puVar19;
              puVar22 = puVar11;
              if ((long)param_1 < (long)puStack_d8) {
                puVar18 = (undefined8 *)*param_3;
                puVar16 = puVar18;
                puVar12 = puVar19;
                FUN_10a5b9250();
                puVar23 = puVar18;
                unaff_x25 = puVar20;
                unaff_x27 = param_3;
                if (puVar16 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
                unaff_x27 = puVar11 + 1;
                unaff_x26 = (undefined8 *)*unaff_x27;
                puVar20 = puVar18;
                puVar12 = unaff_x26;
                FUN_10a5b9250();
                unaff_x25 = puVar16;
                if (puVar20 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
                puVar17 = param_1;
                puVar21 = unaff_x26;
                puVar22 = unaff_x27;
                param_3 = puStack_d0;
                if (*(ushort *)(puVar20 + 3) <= *(ushort *)(puVar16 + 3)) {
                  puVar17 = unaff_x28;
                  puVar21 = puVar19;
                  puVar22 = puVar11;
                }
              }
              else {
                puVar18 = (undefined8 *)*param_3;
                puVar17 = unaff_x28;
                puVar16 = puVar20;
              }
              puVar20 = puVar18;
              puVar12 = puVar21;
              FUN_10a5b9250();
              unaff_x28 = puStack_f0;
              param_1 = puVar17;
              puVar23 = puVar18;
              unaff_x25 = puVar16;
              unaff_x27 = param_3;
              if ((puVar20 == (undefined8 *)0x0) ||
                 (puVar11 = puVar18, puVar12 = puStack_f0, FUN_10a5b9250(), unaff_x25 = puVar20,
                 puVar11 == (undefined8 *)0x0)) goto LAB_10a5ba5a4;
              unaff_x26 = param_4;
              puVar23 = puStack_f0;
            } while (*(ushort *)(puVar11 + 3) <= *(ushort *)(puVar20 + 3));
            *param_4 = unaff_x28;
            puVar16 = puStack_d8;
            param_4 = puStack_f8;
          }
        }
        puVar23 = (undefined8 *)((long)param_4 + -1);
      } while (param_4 != (undefined8 *)0x0);
      puVar23 = (undefined8 *)0x0;
      puStack_e0 = puVar8;
      do {
        puVar20 = (undefined8 *)0x0;
        puStack_e8 = (undefined8 *)*puVar8;
        puVar19 = (undefined8 *)((long)puVar16 - 2U >> 1);
        puVar11 = puStack_c8;
        param_1 = puVar8;
        param_4 = puVar23;
        puStack_d8 = puVar19;
        do {
          unaff_x25 = param_1 + (long)puVar20;
          unaff_x28 = unaff_x25 + 1;
          puVar21 = (undefined8 *)*unaff_x28;
          unaff_x26 = (undefined8 *)((long)puVar20 << 1 | 1);
          unaff_x27 = (undefined8 *)((long)puVar20 * 2 + 2);
          puVar20 = unaff_x26;
          puVar23 = param_4;
          puVar12 = puVar21;
          puVar17 = unaff_x28;
          if ((long)unaff_x27 < (long)puVar16) {
            puVar18 = (undefined8 *)*puStack_d0;
            puVar9 = puVar18;
            FUN_10a5b9250();
            puVar8 = puVar16;
            puVar23 = puVar18;
            if (puVar9 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            param_4 = unaff_x25 + 2;
            unaff_x25 = (undefined8 *)*param_4;
            puVar10 = puVar18;
            puVar12 = unaff_x25;
            FUN_10a5b9250();
            puVar22 = puVar9;
            if (puVar10 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            puVar20 = unaff_x27;
            puVar11 = puStack_c8;
            puVar19 = puStack_d8;
            puVar23 = param_4;
            puVar8 = puStack_e0;
            puVar12 = unaff_x25;
            puVar17 = param_4;
            if (*(ushort *)(puVar10 + 3) <= *(ushort *)(puVar9 + 3)) {
              puVar20 = unaff_x26;
              puVar12 = puVar21;
              puVar17 = unaff_x28;
            }
          }
          unaff_x28 = puVar17;
          unaff_x27 = puStack_d0;
          *param_1 = puVar12;
          param_1 = unaff_x28;
          param_4 = puVar23;
        } while ((long)puVar20 <= (long)puVar19);
        puStack_c8 = puVar11 + -1;
        if (unaff_x28 == puStack_c8) {
          *unaff_x28 = puStack_e8;
        }
        else {
          *unaff_x28 = *puStack_c8;
          *puStack_c8 = puStack_e8;
          lVar7 = (long)unaff_x28 + (8 - (long)puVar8) >> 3;
          if (1 < lVar7) {
            param_4 = (undefined8 *)(lVar7 - 2U >> 1);
            unaff_x26 = puVar8 + (long)param_4;
            puVar22 = (undefined8 *)*unaff_x26;
            puVar21 = (undefined8 *)*unaff_x28;
            unaff_x25 = (undefined8 *)*puStack_d0;
            puVar20 = unaff_x25;
            puVar12 = puVar22;
            puStack_d8 = puVar16;
            FUN_10a5b9250();
            puVar23 = puVar18;
            if ((puVar20 == (undefined8 *)0x0) ||
               (puVar11 = unaff_x25, puVar12 = puVar21, FUN_10a5b9250(), puVar23 = puVar20,
               puVar11 == (undefined8 *)0x0)) goto LAB_10a5ba5a4;
            puVar16 = puStack_d8;
            puVar23 = param_4;
            puVar18 = puVar20;
            if (*(ushort *)(puVar20 + 3) < *(ushort *)(puVar11 + 3)) {
              do {
                param_1 = unaff_x26;
                *unaff_x28 = puVar22;
                puVar23 = (undefined8 *)0x0;
                puVar18 = puVar20;
                if (param_4 == (undefined8 *)0x0) break;
                param_4 = (undefined8 *)((long)param_4 - 1U >> 1);
                unaff_x26 = puVar8 + (long)param_4;
                puVar22 = (undefined8 *)*unaff_x26;
                unaff_x25 = (undefined8 *)*unaff_x27;
                puVar18 = unaff_x25;
                puVar12 = puVar22;
                FUN_10a5b9250();
                puVar23 = puVar20;
                if ((puVar18 == (undefined8 *)0x0) ||
                   (puVar11 = unaff_x25, puVar12 = puVar21, FUN_10a5b9250(), puVar23 = puVar18,
                   puVar11 == (undefined8 *)0x0)) goto LAB_10a5ba5a4;
                puVar23 = param_4;
                puVar20 = puVar18;
                unaff_x28 = param_1;
              } while (*(ushort *)(puVar18 + 3) < *(ushort *)(puVar11 + 3));
              *param_1 = puVar21;
              puVar16 = puStack_d8;
            }
          }
        }
        bVar1 = 2 < (long)puVar16;
        puVar16 = (undefined8 *)((long)puVar16 + -1);
      } while (bVar1);
    }
  }
  return;
}



/* Entry: 10a5b9a70; end: 10a5b9a83;  */

/* WARNING: Possible PIC construction at 0x00010a5b9b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5b9b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5b9d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5b9dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5ba74c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5ba888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5baacc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5baa98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5baab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5b9ba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a5baa9c) */
/* WARNING: Removing unreachable block (ram,0x00010a5baad0) */
/* WARNING: Removing unreachable block (ram,0x00010a5baadc) */
/* WARNING: Removing unreachable block (ram,0x00010a5baae8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab00) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab18) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab28) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab30) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab88) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab3c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab50) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab6c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab80) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab8c) */
/* WARNING: Removing unreachable block (ram,0x00010a5babf8) */
/* WARNING: Removing unreachable block (ram,0x00010a5baba4) */
/* WARNING: Removing unreachable block (ram,0x00010a5babb8) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba88c) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba8a8) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba8bc) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba8cc) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba8f0) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba904) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba914) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba938) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba94c) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba95c) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba980) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba9c8) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba994) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba9a4) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba9ac) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba750) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba76c) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba780) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba790) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba7b4) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba7c8) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba7d8) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba7fc) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba844) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba810) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba820) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba828) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9dd0) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d94) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f5c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f64) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9db0) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9b70) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9bac) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9bc4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9bd4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9be8) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ddc) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9df0) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e30) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e34) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e44) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e54) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9dfc) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e00) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e0c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e1c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e28) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e64) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e74) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e78) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e80) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e90) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e9c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f38) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ea4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9eb0) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ebc) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ec4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ed4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9eec) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9efc) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f00) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f08) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f1c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f28) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f30) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f3c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f48) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f50) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9bf8) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c00) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c10) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c24) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c38) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c4c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c84) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c88) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c90) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ca0) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c5c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c64) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c74) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c80) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9cac) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d60) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9cb4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9cc4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9cd8) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ce0) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9cf4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d08) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d18) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d1c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d24) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d38) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d44) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d50) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d64) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d6c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d74) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9db4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d84) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba9d4) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa68) */
/* WARNING: Removing unreachable block (ram,0x00010a5baaa0) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa70) */
/* WARNING: Removing unreachable block (ram,0x00010a5babbc) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa78) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa80) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa10) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa14) */
/* WARNING: Removing unreachable block (ram,0x00010a5baab8) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa1c) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa38) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac08) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac38) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac44) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac30) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac50) */
/* WARNING: Removing unreachable block (ram,0x00010a5baccc) */
/* WARNING: Removing unreachable block (ram,0x00010a5bacd0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bacec) */
/* WARNING: Removing unreachable block (ram,0x00010a5bada4) */
/* WARNING: Removing unreachable block (ram,0x00010a5bacf8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad10) */
/* WARNING: Removing unreachable block (ram,0x00010a5bada8) */
/* WARNING: Removing unreachable block (ram,0x00010a5badac) */
/* WARNING: Removing unreachable block (ram,0x00010a5badb8) */
/* WARNING: Removing unreachable block (ram,0x00010a5badbc) */
/* WARNING: Removing unreachable block (ram,0x00010a5badc8) */
/* WARNING: Removing unreachable block (ram,0x00010a5badcc) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac5c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bade0) */
/* WARNING: Removing unreachable block (ram,0x00010a5badf8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bae00) */
/* WARNING: Removing unreachable block (ram,0x00010a5bae08) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac64) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac7c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac80) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac88) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac9c) */
/* WARNING: Removing unreachable block (ram,0x00010a5baca8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad18) */
/* WARNING: Removing unreachable block (ram,0x00010a5bacb8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bacc0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad1c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad2c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad4c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad38) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad40) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad50) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad58) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad9c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad64) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad84) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad88) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad98) */
/* WARNING: Removing unreachable block (ram,0x00010a5badd0) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa4c) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa5c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9b44) */
/* WARNING: Removing unreachable block (ram,0x00010a5baab4) */
/* WARNING: Removing unreachable block (ram,0x00010a5babd4) */
/* WARNING: Removing unreachable block (ram,0x00010a5babd8) */

void FUN_10a5b9a70(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *unaff_x19;
  undefined8 *puVar16;
  undefined8 *unaff_x20;
  undefined8 *puVar17;
  undefined8 *unaff_x21;
  undefined8 *puVar18;
  undefined8 *unaff_x22;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 **ppuVar21;
  undefined1 **ppuVar22;
  undefined8 uVar23;
  undefined1 auStack_c0 [16];
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  ppuVar21 = (undefined1 **)&stack0xfffffffffffffff0;
  ppuVar22 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar6 = &stack0xfffffffffffffff0;
  puVar7 = &stack0xfffffffffffffff0;
  puVar8 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  uStack_18 = 0x10a5b9a84;
  puStack_a0 = (undefined8 *)CONCAT44(puStack_a0._4_4_,(int)param_5);
  puVar17 = param_2 + -1;
  puStack_a8 = param_2 + -2;
  puStack_b0 = param_2 + -3;
  puVar15 = (undefined8 *)((long)param_2 - (long)puVar8 >> 3);
  puVar18 = puVar8;
  puVar11 = param_3;
  puVar12 = param_4;
  puStack_98 = puVar17;
  puStack_80 = param_3;
  puStack_78 = param_2;
  if ((long)puVar15 - 2U == 0 || (long)puVar15 < 2) {
    if (puVar15 < (undefined8 *)0x2) {
      return;
    }
    if (puVar15 == (undefined8 *)0x2) {
      unaff_x22 = (undefined8 *)param_2[-1];
      unaff_x23 = (undefined8 *)*puVar8;
      unaff_x24 = (undefined8 *)*param_3;
      puVar18 = unaff_x24;
      puVar13 = unaff_x22;
      puStack_20 = &stack0xfffffffffffffff0;
      FUN_10a5b9250();
      unaff_x27 = param_3;
      if ((puVar18 != (undefined8 *)0x0) &&
         (puVar17 = unaff_x24, puVar13 = unaff_x23, FUN_10a5b9250(), unaff_x19 = puVar18,
         puVar17 != (undefined8 *)0x0)) {
        if (*(ushort *)(puVar17 + 3) <= *(ushort *)(puVar18 + 3)) {
          return;
        }
        *puVar8 = unaff_x22;
        puStack_78[-1] = unaff_x23;
        return;
      }
LAB_10a5ba5a4:
      puVar18 = (undefined8 *)&UNK_10f639994;
      uVar23 = 0x10a5ba5b0;
      FUN_109ffdddc();
      puVar6 = auStack_c0;
      puVar17 = puVar11;
      param_3 = puVar12;
      unaff_x20 = param_4;
      unaff_x21 = puVar8;
      ppuVar21 = &puStack_20;
      goto SUB_10a5ba5b0;
    }
  }
  else {
    if (puVar15 == (undefined8 *)0x3) {
      puVar13 = puVar8 + 1;
      uVar23 = 0x10a5b9a84;
      puStack_20 = &stack0xfffffffffffffff0;
      goto SUB_10a5ba5b0;
    }
    if (puVar15 == (undefined8 *)0x4) {
      puVar15 = puVar8 + 1;
      puVar11 = puVar8 + 2;
      uVar23 = 0x10a5b9a84;
      puVar12 = puVar17;
      puStack_20 = &stack0xfffffffffffffff0;
      goto SUB_10a5ba718;
    }
    if (puVar15 == (undefined8 *)0x5) {
      puVar15 = puVar8 + 1;
      puVar11 = puVar8 + 2;
      unaff_x23 = puVar8 + 3;
      uStack_18 = 0x10a5b9a84;
      puVar7 = &stack0xffffffffffffff90;
      ppuVar22 = &puStack_20;
      uVar23 = 0x10a5ba88c;
      puVar12 = unaff_x23;
      unaff_x19 = puVar15;
      unaff_x20 = puVar8;
      unaff_x21 = param_3;
      unaff_x22 = puVar11;
      unaff_x24 = puVar17;
      puStack_20 = &stack0xfffffffffffffff0;
      goto SUB_10a5ba718;
    }
  }
  unaff_x23 = param_2;
  if ((long)puVar15 < 0x18) {
    puVar18 = puVar8 + 1;
    if (((ulong)param_5 & 1) == 0) {
      if (puVar8 != param_2 && puVar18 != param_2) {
        puVar15 = (undefined8 *)0x8;
        param_4 = (undefined8 *)0x0;
        puVar17 = puVar8;
        puStack_20 = &stack0xfffffffffffffff0;
        do {
          unaff_x19 = puVar15;
          unaff_x22 = (undefined8 *)*puVar18;
          unaff_x25 = (undefined8 *)*param_3;
          puVar18 = unaff_x25;
          puVar13 = unaff_x22;
          FUN_10a5b9250();
          unaff_x24 = puVar17;
          unaff_x27 = param_3;
          if (puVar18 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
          unaff_x23 = *(undefined8 **)((long)puVar8 + (long)param_4);
          puVar15 = unaff_x25;
          puVar13 = unaff_x23;
          FUN_10a5b9250();
          unaff_x24 = puVar18;
          if (puVar15 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
          param_4 = unaff_x19;
          puVar17 = puVar18;
          if (*(ushort *)(puVar18 + 3) < *(ushort *)(puVar15 + 3)) {
            do {
              unaff_x26 = (undefined8 *)((long)puVar8 + (long)param_4);
              *unaff_x26 = unaff_x23;
              if (param_4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10a5ba5a4);
                (*pcVar5)();
              }
              unaff_x25 = (undefined8 *)*param_3;
              puVar17 = unaff_x25;
              puVar13 = unaff_x22;
              FUN_10a5b9250();
              unaff_x24 = puVar18;
              if (puVar17 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
              unaff_x23 = (undefined8 *)unaff_x26[-2];
              puVar15 = unaff_x25;
              puVar13 = unaff_x23;
              FUN_10a5b9250();
              unaff_x24 = puVar17;
              if (puVar15 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
              param_4 = param_4 + -1;
              puVar18 = puVar17;
            } while (*(ushort *)(puVar17 + 3) < *(ushort *)(puVar15 + 3));
            *(undefined8 **)((long)puVar8 + (long)param_4) = unaff_x22;
          }
          puVar18 = (undefined8 *)((long)puVar8 + (long)(unaff_x19 + 1));
          puVar15 = unaff_x19 + 1;
          param_4 = unaff_x19;
        } while (puVar18 != puStack_78);
      }
    }
    else if (puVar8 != param_2 && puVar18 != param_2) {
      unaff_x19 = (undefined8 *)0x0;
      param_4 = puVar8;
      unaff_x24 = puVar8;
      puStack_20 = &stack0xfffffffffffffff0;
      do {
        unaff_x26 = puVar18;
        unaff_x22 = (undefined8 *)param_4[1];
        unaff_x25 = (undefined8 *)*param_3;
        puVar17 = unaff_x25;
        puVar13 = unaff_x22;
        FUN_10a5b9250();
        unaff_x27 = param_3;
        if (puVar17 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
        unaff_x23 = (undefined8 *)*param_4;
        puVar18 = unaff_x25;
        puVar13 = unaff_x23;
        FUN_10a5b9250();
        unaff_x24 = puVar17;
        if (puVar18 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
        param_4 = unaff_x19;
        if (*(ushort *)(puVar17 + 3) < *(ushort *)(puVar18 + 3)) {
          do {
            unaff_x27 = (undefined8 *)((long)puVar8 + (long)param_4);
            unaff_x27[1] = unaff_x23;
            puVar18 = puVar8;
            if (param_4 == (undefined8 *)0x0) goto LAB_10a5ba120;
            unaff_x25 = (undefined8 *)*puStack_80;
            puVar18 = unaff_x25;
            puVar13 = unaff_x22;
            FUN_10a5b9250();
            unaff_x24 = puVar17;
            if (puVar18 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            unaff_x23 = (undefined8 *)unaff_x27[-1];
            puVar15 = unaff_x25;
            puVar13 = unaff_x23;
            FUN_10a5b9250();
            unaff_x24 = puVar18;
            if (puVar15 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            param_4 = param_4 + -1;
            puVar17 = puVar18;
          } while (*(ushort *)(puVar18 + 3) < *(ushort *)(puVar15 + 3));
          puVar18 = (undefined8 *)((long)puVar8 + (long)param_4 + 8);
LAB_10a5ba120:
          *puVar18 = unaff_x22;
          param_3 = puStack_80;
        }
        unaff_x19 = unaff_x19 + 1;
        puVar18 = unaff_x26 + 1;
        param_4 = unaff_x26;
        unaff_x24 = puVar17;
      } while (unaff_x26 + 1 != puStack_78);
    }
  }
  else {
    if (param_4 != (undefined8 *)0x0) {
      unaff_x24 = puVar8 + ((ulong)puVar15 >> 1);
      unaff_x20 = param_4;
      unaff_x21 = puVar8;
      if (puVar15 < (undefined8 *)0x81) {
        uVar23 = 0x10a5b9bac;
        puVar6 = auStack_c0;
        puVar18 = unaff_x24;
        puVar13 = puVar8;
        unaff_x27 = param_3;
        ppuVar21 = &puStack_20;
        puStack_20 = &stack0xfffffffffffffff0;
      }
      else {
        uVar23 = 0x10a5b9b44;
        puVar6 = auStack_c0;
        puVar13 = unaff_x24;
        unaff_x27 = param_3;
        ppuVar21 = &puStack_20;
        puStack_20 = &stack0xfffffffffffffff0;
      }
SUB_10a5ba5b0:
      do {
        puVar7 = puVar6 + -0x60;
        *(undefined8 **)(puVar6 + -0x60) = unaff_x28;
        *(undefined8 **)(puVar6 + -0x58) = unaff_x27;
        *(undefined8 **)(puVar6 + -0x50) = unaff_x26;
        *(undefined8 **)(puVar6 + -0x48) = unaff_x25;
        *(undefined8 **)(puVar6 + -0x40) = unaff_x24;
        *(undefined8 **)(puVar6 + -0x38) = unaff_x23;
        *(undefined8 **)(puVar6 + -0x30) = unaff_x22;
        *(undefined8 **)(puVar6 + -0x28) = unaff_x21;
        *(undefined8 **)(puVar6 + -0x20) = unaff_x20;
        *(undefined8 **)(puVar6 + -0x18) = unaff_x19;
        *(undefined1 ***)(puVar6 + -0x10) = ppuVar21;
        *(undefined8 *)(puVar6 + -8) = uVar23;
        ppuVar22 = (undefined1 **)(puVar6 + -0x10);
        unaff_x24 = (undefined8 *)*puVar13;
        unaff_x22 = (undefined8 *)*puVar18;
        unaff_x26 = (undefined8 *)*param_3;
        puVar8 = unaff_x26;
        puVar15 = unaff_x24;
        puVar11 = puVar17;
        puVar12 = param_3;
        FUN_10a5b9250();
        unaff_x23 = param_3;
        if (puVar8 != (undefined8 *)0x0) {
          uVar2 = *(ushort *)(puVar8 + 3);
          unaff_x27 = (undefined8 *)(ulong)uVar2;
          puVar8 = unaff_x26;
          puVar15 = unaff_x22;
          FUN_10a5b9250();
          if (puVar8 != (undefined8 *)0x0) {
            uVar3 = *(ushort *)(puVar8 + 3);
            unaff_x28 = (undefined8 *)(ulong)uVar3;
            unaff_x25 = (undefined8 *)*puVar17;
            puVar8 = unaff_x26;
            puVar15 = unaff_x25;
            FUN_10a5b9250();
            if (uVar2 < uVar3) {
              if (puVar8 != (undefined8 *)0x0) {
                if (*(ushort *)(puVar8 + 3) < uVar2) {
                  *puVar18 = unaff_x25;
                  goto LAB_10a5ba6ec;
                }
                *puVar18 = unaff_x24;
                *puVar13 = unaff_x22;
                puVar18 = (undefined8 *)*puVar17;
                unaff_x24 = (undefined8 *)*param_3;
                puVar8 = unaff_x24;
                puVar15 = puVar18;
                FUN_10a5b9250();
                if ((puVar8 != (undefined8 *)0x0) &&
                   (puVar20 = unaff_x24, puVar15 = unaff_x22, FUN_10a5b9250(), unaff_x23 = puVar8,
                   puVar20 != (undefined8 *)0x0)) {
                  if (*(ushort *)(puVar8 + 3) < *(ushort *)(puVar20 + 3)) {
                    *puVar13 = puVar18;
LAB_10a5ba6ec:
                    *puVar17 = unaff_x22;
                  }
                  return;
                }
              }
            }
            else if (puVar8 != (undefined8 *)0x0) {
              if (uVar2 <= *(ushort *)(puVar8 + 3)) {
                return;
              }
              *puVar13 = unaff_x25;
              *puVar17 = unaff_x24;
              puVar17 = (undefined8 *)*puVar13;
              unaff_x22 = (undefined8 *)*puVar18;
              unaff_x24 = (undefined8 *)*param_3;
              puVar8 = unaff_x24;
              puVar15 = puVar17;
              FUN_10a5b9250();
              if ((puVar8 != (undefined8 *)0x0) &&
                 (puVar20 = unaff_x24, puVar15 = unaff_x22, FUN_10a5b9250(), unaff_x23 = puVar8,
                 puVar20 != (undefined8 *)0x0)) {
                if (*(ushort *)(puVar20 + 3) <= *(ushort *)(puVar8 + 3)) {
                  return;
                }
                *puVar18 = puVar17;
                *puVar13 = unaff_x22;
                return;
              }
            }
          }
        }
        puVar8 = (undefined8 *)&UNK_10f639994;
        uVar23 = 0x10a5ba718;
        FUN_109ffdddc();
        param_3 = param_5;
        unaff_x19 = puVar13;
        unaff_x20 = puVar17;
        unaff_x21 = puVar18;
SUB_10a5ba718:
        *(undefined8 **)(puVar7 + -0x60) = unaff_x28;
        *(undefined8 **)(puVar7 + -0x58) = unaff_x27;
        *(undefined8 **)(puVar7 + -0x50) = unaff_x26;
        *(undefined8 **)(puVar7 + -0x48) = unaff_x25;
        *(undefined8 **)(puVar7 + -0x40) = unaff_x24;
        *(undefined8 **)(puVar7 + -0x38) = unaff_x23;
        *(undefined8 **)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 **)(puVar7 + -0x28) = unaff_x21;
        *(undefined8 **)(puVar7 + -0x20) = unaff_x20;
        *(undefined8 **)(puVar7 + -0x18) = unaff_x19;
        *(undefined1 ***)(puVar7 + -0x10) = ppuVar22;
        *(undefined8 *)(puVar7 + -8) = uVar23;
        uVar23 = 0x10a5ba750;
        puVar6 = puVar7 + -0x60;
        puVar18 = puVar8;
        puVar13 = puVar15;
        puVar17 = puVar11;
        param_5 = param_3;
        unaff_x19 = puVar15;
        unaff_x20 = puVar8;
        unaff_x21 = param_3;
        unaff_x22 = puVar11;
        unaff_x23 = puVar12;
        ppuVar21 = (undefined1 **)(puVar7 + -0x10);
      } while( true );
    }
    if (puVar8 != param_2) {
      puVar13 = (undefined8 *)((long)puVar15 - 2U >> 1);
      puVar17 = puVar8;
      puVar18 = unaff_x25;
      puStack_98 = puVar13;
      puStack_88 = puVar15;
      puStack_20 = &stack0xfffffffffffffff0;
      do {
        param_4 = puVar13;
        if ((long)puVar13 <= (long)puStack_98) {
          unaff_x19 = (undefined8 *)((long)puVar13 << 1 | 1);
          puVar20 = puVar8 + (long)unaff_x19;
          param_4 = (undefined8 *)((long)puVar13 * 2 + 2);
          puVar19 = (undefined8 *)*puVar20;
          unaff_x22 = puVar19;
          unaff_x23 = puVar20;
          unaff_x25 = puVar18;
          puStack_a8 = puVar13;
          if ((long)param_4 < (long)puVar15) {
            puVar17 = (undefined8 *)*param_3;
            puVar18 = puVar17;
            puVar13 = puVar19;
            FUN_10a5b9250();
            unaff_x24 = puVar17;
            unaff_x27 = param_3;
            if (puVar18 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            unaff_x27 = puVar20 + 1;
            unaff_x25 = (undefined8 *)*unaff_x27;
            puVar15 = puVar17;
            puVar13 = unaff_x25;
            FUN_10a5b9250();
            unaff_x26 = puVar18;
            if (puVar15 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            puVar16 = param_4;
            unaff_x22 = unaff_x25;
            unaff_x23 = unaff_x27;
            param_3 = puStack_80;
            if (*(ushort *)(puVar15 + 3) <= *(ushort *)(puVar18 + 3)) {
              puVar16 = unaff_x19;
              unaff_x22 = puVar19;
              unaff_x23 = puVar20;
            }
          }
          else {
            puVar17 = (undefined8 *)*param_3;
            puVar16 = unaff_x19;
          }
          param_4 = puStack_a8;
          unaff_x26 = puVar8 + (long)puStack_a8;
          unaff_x28 = (undefined8 *)*unaff_x26;
          puVar18 = puVar17;
          puVar13 = unaff_x22;
          FUN_10a5b9250();
          unaff_x19 = puVar16;
          unaff_x24 = puVar17;
          unaff_x27 = param_3;
          if ((puVar18 == (undefined8 *)0x0) ||
             (puVar20 = puVar17, puVar13 = unaff_x28, FUN_10a5b9250(), unaff_x25 = puVar18,
             puVar20 == (undefined8 *)0x0)) goto LAB_10a5ba5a4;
          puVar15 = puStack_88;
          puVar13 = unaff_x28;
          if (*(ushort *)(puVar20 + 3) <= *(ushort *)(puVar18 + 3)) {
            do {
              puStack_a0 = puVar13;
              param_4 = unaff_x23;
              *unaff_x26 = unaff_x22;
              unaff_x23 = param_4;
              if ((long)puStack_98 < (long)puVar16) break;
              unaff_x28 = (undefined8 *)((long)puVar16 << 1 | 1);
              puVar15 = puVar8 + (long)unaff_x28;
              unaff_x19 = (undefined8 *)((long)puVar16 * 2 + 2);
              puVar20 = (undefined8 *)*puVar15;
              unaff_x22 = puVar20;
              unaff_x23 = puVar15;
              if ((long)unaff_x19 < (long)puStack_88) {
                puVar17 = (undefined8 *)*param_3;
                puVar19 = puVar17;
                puVar13 = puVar20;
                FUN_10a5b9250();
                unaff_x24 = puVar17;
                unaff_x25 = puVar18;
                unaff_x27 = param_3;
                if (puVar19 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
                unaff_x27 = puVar15 + 1;
                unaff_x26 = (undefined8 *)*unaff_x27;
                puVar18 = puVar17;
                puVar13 = unaff_x26;
                FUN_10a5b9250();
                unaff_x25 = puVar19;
                if (puVar18 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
                puVar16 = unaff_x19;
                unaff_x22 = unaff_x26;
                unaff_x23 = unaff_x27;
                param_3 = puStack_80;
                if (*(ushort *)(puVar18 + 3) <= *(ushort *)(puVar19 + 3)) {
                  puVar16 = unaff_x28;
                  unaff_x22 = puVar20;
                  unaff_x23 = puVar15;
                }
              }
              else {
                puVar17 = (undefined8 *)*param_3;
                puVar16 = unaff_x28;
                puVar19 = puVar18;
              }
              puVar18 = puVar17;
              puVar13 = unaff_x22;
              FUN_10a5b9250();
              unaff_x28 = puStack_a0;
              unaff_x19 = puVar16;
              unaff_x24 = puVar17;
              unaff_x25 = puVar19;
              unaff_x27 = param_3;
              if ((puVar18 == (undefined8 *)0x0) ||
                 (puVar15 = puVar17, puVar13 = puStack_a0, FUN_10a5b9250(), unaff_x25 = puVar18,
                 puVar15 == (undefined8 *)0x0)) goto LAB_10a5ba5a4;
              unaff_x26 = param_4;
              puVar13 = puStack_a0;
            } while (*(ushort *)(puVar15 + 3) <= *(ushort *)(puVar18 + 3));
            *param_4 = unaff_x28;
            puVar15 = puStack_88;
            param_4 = puStack_a8;
          }
        }
        puVar13 = (undefined8 *)((long)param_4 + -1);
      } while (param_4 != (undefined8 *)0x0);
      puVar18 = (undefined8 *)0x0;
      puStack_90 = puVar8;
      do {
        puVar13 = (undefined8 *)0x0;
        puStack_98 = (undefined8 *)*puVar8;
        puVar19 = (undefined8 *)((long)puVar15 - 2U >> 1);
        puVar20 = puStack_78;
        unaff_x19 = puVar8;
        param_4 = puVar18;
        puStack_88 = puVar19;
        do {
          unaff_x25 = unaff_x19 + (long)puVar13;
          unaff_x28 = unaff_x25 + 1;
          unaff_x22 = (undefined8 *)*unaff_x28;
          unaff_x26 = (undefined8 *)((long)puVar13 << 1 | 1);
          unaff_x27 = (undefined8 *)((long)puVar13 * 2 + 2);
          puVar13 = unaff_x26;
          puVar18 = param_4;
          puVar16 = unaff_x22;
          puVar4 = unaff_x28;
          if ((long)unaff_x27 < (long)puVar15) {
            puVar17 = (undefined8 *)*puStack_80;
            puVar9 = puVar17;
            puVar13 = unaff_x22;
            FUN_10a5b9250();
            puVar8 = puVar15;
            unaff_x24 = puVar17;
            if (puVar9 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            param_4 = unaff_x25 + 2;
            unaff_x25 = (undefined8 *)*param_4;
            puVar10 = puVar17;
            puVar13 = unaff_x25;
            FUN_10a5b9250();
            unaff_x23 = puVar9;
            if (puVar10 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            puVar13 = unaff_x27;
            puVar20 = puStack_78;
            puVar19 = puStack_88;
            puVar18 = param_4;
            puVar8 = puStack_90;
            puVar16 = unaff_x25;
            puVar4 = param_4;
            if (*(ushort *)(puVar10 + 3) <= *(ushort *)(puVar9 + 3)) {
              puVar13 = unaff_x26;
              puVar16 = unaff_x22;
              puVar4 = unaff_x28;
            }
          }
          unaff_x28 = puVar4;
          unaff_x27 = puStack_80;
          *unaff_x19 = puVar16;
          unaff_x19 = unaff_x28;
          param_4 = puVar18;
        } while ((long)puVar13 <= (long)puVar19);
        puStack_78 = puVar20 + -1;
        if (unaff_x28 == puStack_78) {
          *unaff_x28 = puStack_98;
        }
        else {
          *unaff_x28 = *puStack_78;
          *puStack_78 = puStack_98;
          lVar14 = (long)unaff_x28 + (8 - (long)puVar8) >> 3;
          if (1 < lVar14) {
            param_4 = (undefined8 *)(lVar14 - 2U >> 1);
            unaff_x26 = puVar8 + (long)param_4;
            unaff_x23 = (undefined8 *)*unaff_x26;
            unaff_x22 = (undefined8 *)*unaff_x28;
            unaff_x25 = (undefined8 *)*puStack_80;
            puVar20 = unaff_x25;
            puVar13 = unaff_x23;
            puStack_88 = puVar15;
            FUN_10a5b9250();
            unaff_x24 = puVar17;
            if ((puVar20 == (undefined8 *)0x0) ||
               (puVar19 = unaff_x25, puVar13 = unaff_x22, FUN_10a5b9250(), unaff_x24 = puVar20,
               puVar19 == (undefined8 *)0x0)) goto LAB_10a5ba5a4;
            puVar15 = puStack_88;
            puVar18 = param_4;
            puVar17 = puVar20;
            if (*(ushort *)(puVar20 + 3) < *(ushort *)(puVar19 + 3)) {
              do {
                unaff_x19 = unaff_x26;
                *unaff_x28 = unaff_x23;
                puVar18 = (undefined8 *)0x0;
                puVar17 = puVar20;
                if (param_4 == (undefined8 *)0x0) break;
                param_4 = (undefined8 *)((long)param_4 - 1U >> 1);
                unaff_x26 = puVar8 + (long)param_4;
                unaff_x23 = (undefined8 *)*unaff_x26;
                unaff_x25 = (undefined8 *)*unaff_x27;
                puVar17 = unaff_x25;
                puVar13 = unaff_x23;
                FUN_10a5b9250();
                unaff_x24 = puVar20;
                if ((puVar17 == (undefined8 *)0x0) ||
                   (puVar15 = unaff_x25, puVar13 = unaff_x22, FUN_10a5b9250(), unaff_x24 = puVar17,
                   puVar15 == (undefined8 *)0x0)) goto LAB_10a5ba5a4;
                puVar18 = param_4;
                puVar20 = puVar17;
                unaff_x28 = unaff_x19;
              } while (*(ushort *)(puVar17 + 3) < *(ushort *)(puVar15 + 3));
              *unaff_x19 = unaff_x22;
              puVar15 = puStack_88;
            }
          }
        }
        bVar1 = 2 < (long)puVar15;
        puVar15 = (undefined8 *)((long)puVar15 + -1);
      } while (bVar1);
    }
  }
  return;
}



/* Entry: 10a5b9a84; end: 10a5bac13;  */

/* WARNING: Possible PIC construction at 0x00010a5b9b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5b9b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5b9d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5ba74c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5ba888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5baacc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5baa98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5baab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a5b9ba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a5baa9c) */
/* WARNING: Removing unreachable block (ram,0x00010a5baad0) */
/* WARNING: Removing unreachable block (ram,0x00010a5baadc) */
/* WARNING: Removing unreachable block (ram,0x00010a5baae8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab00) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab18) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab28) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab30) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab88) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab3c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab50) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab6c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab80) */
/* WARNING: Removing unreachable block (ram,0x00010a5bab8c) */
/* WARNING: Removing unreachable block (ram,0x00010a5babf8) */
/* WARNING: Removing unreachable block (ram,0x00010a5baba4) */
/* WARNING: Removing unreachable block (ram,0x00010a5babb8) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba88c) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba8a8) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba8bc) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba8cc) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba8f0) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba904) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba914) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba938) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba94c) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba95c) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba980) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba9c8) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba994) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba9a4) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba9ac) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba750) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba76c) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba780) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba790) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba7b4) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba7c8) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba7d8) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba7fc) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba844) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba810) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba820) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba828) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d94) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f5c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f64) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9db0) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9b70) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9bac) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9bc4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9bd4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9be8) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ddc) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9df0) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e30) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e34) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e44) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e54) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9dfc) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e00) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e0c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e1c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e28) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e64) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e74) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e78) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e80) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e90) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9e9c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f38) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ea4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9eb0) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ebc) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ec4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ed4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9eec) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9efc) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f00) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f08) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f1c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f28) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f30) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f3c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f48) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9f50) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9bf8) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c00) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c10) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c24) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c38) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c4c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c84) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c88) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c90) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ca0) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c5c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c64) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c74) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9c80) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9cac) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d60) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9cb4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9cc4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9cd8) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9ce0) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9cf4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d08) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d18) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d1c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d24) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d38) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d44) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d50) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d64) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d6c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d74) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9db4) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9d84) */
/* WARNING: Removing unreachable block (ram,0x00010a5ba9d4) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa68) */
/* WARNING: Removing unreachable block (ram,0x00010a5baaa0) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa70) */
/* WARNING: Removing unreachable block (ram,0x00010a5babbc) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa78) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa80) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa10) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa14) */
/* WARNING: Removing unreachable block (ram,0x00010a5baab8) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa1c) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa38) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac08) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac38) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac44) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac30) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac50) */
/* WARNING: Removing unreachable block (ram,0x00010a5baccc) */
/* WARNING: Removing unreachable block (ram,0x00010a5bacd0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bacec) */
/* WARNING: Removing unreachable block (ram,0x00010a5bada4) */
/* WARNING: Removing unreachable block (ram,0x00010a5bacf8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad10) */
/* WARNING: Removing unreachable block (ram,0x00010a5bada8) */
/* WARNING: Removing unreachable block (ram,0x00010a5badac) */
/* WARNING: Removing unreachable block (ram,0x00010a5badb8) */
/* WARNING: Removing unreachable block (ram,0x00010a5badbc) */
/* WARNING: Removing unreachable block (ram,0x00010a5badc8) */
/* WARNING: Removing unreachable block (ram,0x00010a5badcc) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac5c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bade0) */
/* WARNING: Removing unreachable block (ram,0x00010a5badf8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bae00) */
/* WARNING: Removing unreachable block (ram,0x00010a5bae08) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac64) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac7c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac80) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac88) */
/* WARNING: Removing unreachable block (ram,0x00010a5bac9c) */
/* WARNING: Removing unreachable block (ram,0x00010a5baca8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad18) */
/* WARNING: Removing unreachable block (ram,0x00010a5bacb8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bacc0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad1c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad2c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad4c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad38) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad40) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad50) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad58) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad9c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad64) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad84) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad88) */
/* WARNING: Removing unreachable block (ram,0x00010a5bad98) */
/* WARNING: Removing unreachable block (ram,0x00010a5badd0) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa4c) */
/* WARNING: Removing unreachable block (ram,0x00010a5baa5c) */
/* WARNING: Removing unreachable block (ram,0x00010a5b9b44) */
/* WARNING: Removing unreachable block (ram,0x00010a5baab4) */
/* WARNING: Removing unreachable block (ram,0x00010a5babd4) */
/* WARNING: Removing unreachable block (ram,0x00010a5babd8) */

void FUN_10a5b9a84(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  undefined1 *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x19;
  undefined8 *puVar14;
  undefined8 *unaff_x20;
  undefined8 *puVar15;
  undefined8 *unaff_x21;
  undefined8 *puVar16;
  undefined8 *unaff_x22;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_b0 [16];
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar2 = &stack0xfffffffffffffff0;
  puStack_90 = (undefined8 *)CONCAT44(puStack_90._4_4_,(int)param_5);
  puVar15 = param_2 + -1;
  puStack_98 = param_2 + -2;
  puStack_a0 = param_2 + -3;
  puVar13 = (undefined8 *)((long)param_2 - (long)param_1 >> 3);
  puVar16 = param_1;
  puVar9 = param_3;
  puVar10 = param_4;
  puStack_88 = puVar15;
  puStack_70 = param_3;
  puStack_68 = param_2;
  if ((long)puVar13 - 2U == 0 || (long)puVar13 < 2) {
    if (puVar13 < (undefined8 *)0x2) {
      return;
    }
    if (puVar13 == (undefined8 *)0x2) {
      unaff_x22 = (undefined8 *)param_2[-1];
      unaff_x23 = (undefined8 *)*param_1;
      unaff_x24 = (undefined8 *)*param_3;
      puVar16 = unaff_x24;
      puVar11 = unaff_x22;
      FUN_10a5b9250();
      unaff_x27 = param_3;
      if ((puVar16 != (undefined8 *)0x0) &&
         (puVar15 = unaff_x24, puVar11 = unaff_x23, FUN_10a5b9250(), unaff_x19 = puVar16,
         puVar15 != (undefined8 *)0x0)) {
        if (*(ushort *)(puVar15 + 3) <= *(ushort *)(puVar16 + 3)) {
          return;
        }
        *param_1 = unaff_x22;
        puStack_68[-1] = unaff_x23;
        return;
      }
LAB_10a5ba5a4:
      puVar16 = (undefined8 *)&UNK_10f639994;
      unaff_x30 = 0x10a5ba5b0;
      FUN_109ffdddc();
      register0x00000008 = (BADSPACEBASE *)auStack_b0;
      puVar15 = puVar9;
      param_3 = puVar10;
      unaff_x20 = param_4;
      unaff_x21 = param_1;
      unaff_x29 = puVar2;
      goto SUB_10a5ba5b0;
    }
  }
  else {
    if (puVar13 == (undefined8 *)0x3) {
      puVar11 = param_1 + 1;
      goto SUB_10a5ba5b0;
    }
    if (puVar13 == (undefined8 *)0x4) {
      puVar13 = param_1 + 1;
      puVar9 = param_1 + 2;
      puVar10 = puVar15;
      goto SUB_10a5ba718;
    }
    if (puVar13 == (undefined8 *)0x5) {
      puVar13 = param_1 + 1;
      puVar9 = param_1 + 2;
      unaff_x23 = param_1 + 3;
      unaff_x29 = &stack0xfffffffffffffff0;
      unaff_x30 = 0x10a5ba88c;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
      puVar10 = unaff_x23;
      unaff_x19 = puVar13;
      unaff_x20 = param_1;
      unaff_x21 = param_3;
      unaff_x22 = puVar9;
      unaff_x24 = puVar15;
      goto SUB_10a5ba718;
    }
  }
  unaff_x23 = param_2;
  if ((long)puVar13 < 0x18) {
    puVar16 = param_1 + 1;
    if (((ulong)param_5 & 1) == 0) {
      if (param_1 != param_2 && puVar16 != param_2) {
        puVar13 = (undefined8 *)0x8;
        param_4 = (undefined8 *)0x0;
        puVar15 = param_1;
        do {
          unaff_x19 = puVar13;
          unaff_x22 = (undefined8 *)*puVar16;
          unaff_x25 = (undefined8 *)*param_3;
          puVar16 = unaff_x25;
          puVar11 = unaff_x22;
          FUN_10a5b9250();
          unaff_x24 = puVar15;
          unaff_x27 = param_3;
          if (puVar16 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
          unaff_x23 = *(undefined8 **)((long)param_1 + (long)param_4);
          puVar13 = unaff_x25;
          puVar11 = unaff_x23;
          FUN_10a5b9250();
          unaff_x24 = puVar16;
          if (puVar13 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
          param_4 = unaff_x19;
          puVar15 = puVar16;
          if (*(ushort *)(puVar16 + 3) < *(ushort *)(puVar13 + 3)) {
            do {
              unaff_x26 = (undefined8 *)((long)param_1 + (long)param_4);
              *unaff_x26 = unaff_x23;
              if (param_4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10a5ba5a4);
                (*pcVar6)();
              }
              unaff_x25 = (undefined8 *)*param_3;
              puVar15 = unaff_x25;
              puVar11 = unaff_x22;
              FUN_10a5b9250();
              unaff_x24 = puVar16;
              if (puVar15 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
              unaff_x23 = (undefined8 *)unaff_x26[-2];
              puVar13 = unaff_x25;
              puVar11 = unaff_x23;
              FUN_10a5b9250();
              unaff_x24 = puVar15;
              if (puVar13 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
              param_4 = param_4 + -1;
              puVar16 = puVar15;
            } while (*(ushort *)(puVar15 + 3) < *(ushort *)(puVar13 + 3));
            *(undefined8 **)((long)param_1 + (long)param_4) = unaff_x22;
          }
          puVar16 = (undefined8 *)((long)param_1 + (long)(unaff_x19 + 1));
          puVar13 = unaff_x19 + 1;
          param_4 = unaff_x19;
        } while (puVar16 != puStack_68);
      }
    }
    else if (param_1 != param_2 && puVar16 != param_2) {
      unaff_x19 = (undefined8 *)0x0;
      param_4 = param_1;
      unaff_x24 = param_1;
      do {
        unaff_x26 = puVar16;
        unaff_x22 = (undefined8 *)param_4[1];
        unaff_x25 = (undefined8 *)*param_3;
        puVar15 = unaff_x25;
        puVar11 = unaff_x22;
        FUN_10a5b9250();
        unaff_x27 = param_3;
        if (puVar15 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
        unaff_x23 = (undefined8 *)*param_4;
        puVar16 = unaff_x25;
        puVar11 = unaff_x23;
        FUN_10a5b9250();
        unaff_x24 = puVar15;
        if (puVar16 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
        param_4 = unaff_x19;
        if (*(ushort *)(puVar15 + 3) < *(ushort *)(puVar16 + 3)) {
          do {
            unaff_x27 = (undefined8 *)((long)param_1 + (long)param_4);
            unaff_x27[1] = unaff_x23;
            puVar16 = param_1;
            if (param_4 == (undefined8 *)0x0) goto LAB_10a5ba120;
            unaff_x25 = (undefined8 *)*puStack_70;
            puVar16 = unaff_x25;
            puVar11 = unaff_x22;
            FUN_10a5b9250();
            unaff_x24 = puVar15;
            if (puVar16 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            unaff_x23 = (undefined8 *)unaff_x27[-1];
            puVar13 = unaff_x25;
            puVar11 = unaff_x23;
            FUN_10a5b9250();
            unaff_x24 = puVar16;
            if (puVar13 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            param_4 = param_4 + -1;
            puVar15 = puVar16;
          } while (*(ushort *)(puVar16 + 3) < *(ushort *)(puVar13 + 3));
          puVar16 = (undefined8 *)((long)param_1 + (long)param_4 + 8);
LAB_10a5ba120:
          *puVar16 = unaff_x22;
          param_3 = puStack_70;
        }
        unaff_x19 = unaff_x19 + 1;
        puVar16 = unaff_x26 + 1;
        param_4 = unaff_x26;
        unaff_x24 = puVar15;
      } while (unaff_x26 + 1 != puStack_68);
    }
  }
  else {
    if (param_4 != (undefined8 *)0x0) {
      unaff_x24 = param_1 + ((ulong)puVar13 >> 1);
      unaff_x20 = param_4;
      unaff_x21 = param_1;
      if (puVar13 < (undefined8 *)0x81) {
        unaff_x30 = 0x10a5b9bac;
        register0x00000008 = (BADSPACEBASE *)auStack_b0;
        puVar16 = unaff_x24;
        puVar11 = param_1;
        unaff_x27 = param_3;
        unaff_x29 = puVar2;
      }
      else {
        unaff_x30 = 0x10a5b9b44;
        register0x00000008 = (BADSPACEBASE *)auStack_b0;
        puVar11 = unaff_x24;
        unaff_x27 = param_3;
        unaff_x29 = puVar2;
      }
SUB_10a5ba5b0:
      do {
        *(undefined8 **)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        unaff_x24 = (undefined8 *)*puVar11;
        unaff_x22 = (undefined8 *)*puVar16;
        unaff_x26 = (undefined8 *)*param_3;
        puVar18 = unaff_x26;
        puVar13 = unaff_x24;
        puVar9 = puVar15;
        puVar10 = param_3;
        FUN_10a5b9250();
        unaff_x23 = param_3;
        if (puVar18 != (undefined8 *)0x0) {
          uVar3 = *(ushort *)(puVar18 + 3);
          unaff_x27 = (undefined8 *)(ulong)uVar3;
          puVar18 = unaff_x26;
          puVar13 = unaff_x22;
          FUN_10a5b9250();
          if (puVar18 != (undefined8 *)0x0) {
            uVar4 = *(ushort *)(puVar18 + 3);
            unaff_x28 = (undefined8 *)(ulong)uVar4;
            unaff_x25 = (undefined8 *)*puVar15;
            puVar18 = unaff_x26;
            puVar13 = unaff_x25;
            FUN_10a5b9250();
            if (uVar3 < uVar4) {
              if (puVar18 != (undefined8 *)0x0) {
                if (*(ushort *)(puVar18 + 3) < uVar3) {
                  *puVar16 = unaff_x25;
                  goto LAB_10a5ba6ec;
                }
                *puVar16 = unaff_x24;
                *puVar11 = unaff_x22;
                puVar16 = (undefined8 *)*puVar15;
                unaff_x24 = (undefined8 *)*param_3;
                puVar18 = unaff_x24;
                puVar13 = puVar16;
                FUN_10a5b9250();
                if ((puVar18 != (undefined8 *)0x0) &&
                   (puVar17 = unaff_x24, puVar13 = unaff_x22, FUN_10a5b9250(), unaff_x23 = puVar18,
                   puVar17 != (undefined8 *)0x0)) {
                  if (*(ushort *)(puVar18 + 3) < *(ushort *)(puVar17 + 3)) {
                    *puVar11 = puVar16;
LAB_10a5ba6ec:
                    *puVar15 = unaff_x22;
                  }
                  return;
                }
              }
            }
            else if (puVar18 != (undefined8 *)0x0) {
              if (uVar3 <= *(ushort *)(puVar18 + 3)) {
                return;
              }
              *puVar11 = unaff_x25;
              *puVar15 = unaff_x24;
              puVar15 = (undefined8 *)*puVar11;
              unaff_x22 = (undefined8 *)*puVar16;
              unaff_x24 = (undefined8 *)*param_3;
              puVar18 = unaff_x24;
              puVar13 = puVar15;
              FUN_10a5b9250();
              if ((puVar18 != (undefined8 *)0x0) &&
                 (puVar17 = unaff_x24, puVar13 = unaff_x22, FUN_10a5b9250(), unaff_x23 = puVar18,
                 puVar17 != (undefined8 *)0x0)) {
                if (*(ushort *)(puVar17 + 3) <= *(ushort *)(puVar18 + 3)) {
                  return;
                }
                *puVar16 = puVar15;
                *puVar11 = unaff_x22;
                return;
              }
            }
          }
        }
        param_1 = (undefined8 *)&UNK_10f639994;
        unaff_x30 = 0x10a5ba718;
        FUN_109ffdddc();
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
        param_3 = param_5;
        unaff_x19 = puVar11;
        unaff_x20 = puVar15;
        unaff_x21 = puVar16;
SUB_10a5ba718:
        *(undefined8 **)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        unaff_x30 = 0x10a5ba750;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
        puVar16 = param_1;
        puVar11 = puVar13;
        puVar15 = puVar9;
        param_5 = param_3;
        unaff_x19 = puVar13;
        unaff_x20 = param_1;
        unaff_x21 = param_3;
        unaff_x22 = puVar9;
        unaff_x23 = puVar10;
      } while( true );
    }
    if (param_1 != param_2) {
      puVar11 = (undefined8 *)((long)puVar13 - 2U >> 1);
      puVar15 = param_1;
      puVar16 = unaff_x25;
      puStack_88 = puVar11;
      puStack_78 = puVar13;
      do {
        param_4 = puVar11;
        if ((long)puVar11 <= (long)puStack_88) {
          unaff_x19 = (undefined8 *)((long)puVar11 << 1 | 1);
          puVar18 = param_1 + (long)unaff_x19;
          param_4 = (undefined8 *)((long)puVar11 * 2 + 2);
          puVar17 = (undefined8 *)*puVar18;
          unaff_x22 = puVar17;
          unaff_x23 = puVar18;
          unaff_x25 = puVar16;
          puStack_98 = puVar11;
          if ((long)param_4 < (long)puVar13) {
            puVar15 = (undefined8 *)*param_3;
            puVar16 = puVar15;
            puVar11 = puVar17;
            FUN_10a5b9250();
            unaff_x24 = puVar15;
            unaff_x27 = param_3;
            if (puVar16 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            unaff_x27 = puVar18 + 1;
            unaff_x25 = (undefined8 *)*unaff_x27;
            puVar13 = puVar15;
            puVar11 = unaff_x25;
            FUN_10a5b9250();
            unaff_x26 = puVar16;
            if (puVar13 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            puVar14 = param_4;
            unaff_x22 = unaff_x25;
            unaff_x23 = unaff_x27;
            param_3 = puStack_70;
            if (*(ushort *)(puVar13 + 3) <= *(ushort *)(puVar16 + 3)) {
              puVar14 = unaff_x19;
              unaff_x22 = puVar17;
              unaff_x23 = puVar18;
            }
          }
          else {
            puVar15 = (undefined8 *)*param_3;
            puVar14 = unaff_x19;
          }
          param_4 = puStack_98;
          unaff_x26 = param_1 + (long)puStack_98;
          unaff_x28 = (undefined8 *)*unaff_x26;
          puVar16 = puVar15;
          puVar11 = unaff_x22;
          FUN_10a5b9250();
          unaff_x19 = puVar14;
          unaff_x24 = puVar15;
          unaff_x27 = param_3;
          if ((puVar16 == (undefined8 *)0x0) ||
             (puVar18 = puVar15, puVar11 = unaff_x28, FUN_10a5b9250(), unaff_x25 = puVar16,
             puVar18 == (undefined8 *)0x0)) goto LAB_10a5ba5a4;
          puVar13 = puStack_78;
          puVar11 = unaff_x28;
          if (*(ushort *)(puVar18 + 3) <= *(ushort *)(puVar16 + 3)) {
            do {
              puStack_90 = puVar11;
              param_4 = unaff_x23;
              *unaff_x26 = unaff_x22;
              unaff_x23 = param_4;
              if ((long)puStack_88 < (long)puVar14) break;
              unaff_x28 = (undefined8 *)((long)puVar14 << 1 | 1);
              puVar13 = param_1 + (long)unaff_x28;
              unaff_x19 = (undefined8 *)((long)puVar14 * 2 + 2);
              puVar18 = (undefined8 *)*puVar13;
              unaff_x22 = puVar18;
              unaff_x23 = puVar13;
              if ((long)unaff_x19 < (long)puStack_78) {
                puVar15 = (undefined8 *)*param_3;
                puVar17 = puVar15;
                puVar11 = puVar18;
                FUN_10a5b9250();
                unaff_x24 = puVar15;
                unaff_x25 = puVar16;
                unaff_x27 = param_3;
                if (puVar17 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
                unaff_x27 = puVar13 + 1;
                unaff_x26 = (undefined8 *)*unaff_x27;
                puVar16 = puVar15;
                puVar11 = unaff_x26;
                FUN_10a5b9250();
                unaff_x25 = puVar17;
                if (puVar16 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
                puVar14 = unaff_x19;
                unaff_x22 = unaff_x26;
                unaff_x23 = unaff_x27;
                param_3 = puStack_70;
                if (*(ushort *)(puVar16 + 3) <= *(ushort *)(puVar17 + 3)) {
                  puVar14 = unaff_x28;
                  unaff_x22 = puVar18;
                  unaff_x23 = puVar13;
                }
              }
              else {
                puVar15 = (undefined8 *)*param_3;
                puVar14 = unaff_x28;
                puVar17 = puVar16;
              }
              puVar16 = puVar15;
              puVar11 = unaff_x22;
              FUN_10a5b9250();
              unaff_x28 = puStack_90;
              unaff_x19 = puVar14;
              unaff_x24 = puVar15;
              unaff_x25 = puVar17;
              unaff_x27 = param_3;
              if ((puVar16 == (undefined8 *)0x0) ||
                 (puVar13 = puVar15, puVar11 = puStack_90, FUN_10a5b9250(), unaff_x25 = puVar16,
                 puVar13 == (undefined8 *)0x0)) goto LAB_10a5ba5a4;
              unaff_x26 = param_4;
              puVar11 = puStack_90;
            } while (*(ushort *)(puVar13 + 3) <= *(ushort *)(puVar16 + 3));
            *param_4 = unaff_x28;
            puVar13 = puStack_78;
            param_4 = puStack_98;
          }
        }
        puVar11 = (undefined8 *)((long)param_4 + -1);
      } while (param_4 != (undefined8 *)0x0);
      puVar16 = (undefined8 *)0x0;
      puStack_80 = param_1;
      do {
        puVar11 = (undefined8 *)0x0;
        puStack_88 = (undefined8 *)*param_1;
        puVar17 = (undefined8 *)((long)puVar13 - 2U >> 1);
        puVar18 = puStack_68;
        unaff_x19 = param_1;
        param_4 = puVar16;
        puStack_78 = puVar17;
        do {
          unaff_x25 = unaff_x19 + (long)puVar11;
          unaff_x28 = unaff_x25 + 1;
          unaff_x22 = (undefined8 *)*unaff_x28;
          unaff_x26 = (undefined8 *)((long)puVar11 << 1 | 1);
          unaff_x27 = (undefined8 *)((long)puVar11 * 2 + 2);
          puVar11 = unaff_x26;
          puVar16 = param_4;
          puVar14 = unaff_x22;
          puVar5 = unaff_x28;
          if ((long)unaff_x27 < (long)puVar13) {
            puVar15 = (undefined8 *)*puStack_70;
            puVar7 = puVar15;
            puVar11 = unaff_x22;
            FUN_10a5b9250();
            param_1 = puVar13;
            unaff_x24 = puVar15;
            if (puVar7 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            param_4 = unaff_x25 + 2;
            unaff_x25 = (undefined8 *)*param_4;
            puVar8 = puVar15;
            puVar11 = unaff_x25;
            FUN_10a5b9250();
            unaff_x23 = puVar7;
            if (puVar8 == (undefined8 *)0x0) goto LAB_10a5ba5a4;
            puVar11 = unaff_x27;
            puVar18 = puStack_68;
            puVar17 = puStack_78;
            puVar16 = param_4;
            param_1 = puStack_80;
            puVar14 = unaff_x25;
            puVar5 = param_4;
            if (*(ushort *)(puVar8 + 3) <= *(ushort *)(puVar7 + 3)) {
              puVar11 = unaff_x26;
              puVar14 = unaff_x22;
              puVar5 = unaff_x28;
            }
          }
          unaff_x28 = puVar5;
          unaff_x27 = puStack_70;
          *unaff_x19 = puVar14;
          unaff_x19 = unaff_x28;
          param_4 = puVar16;
        } while ((long)puVar11 <= (long)puVar17);
        puStack_68 = puVar18 + -1;
        if (unaff_x28 == puStack_68) {
          *unaff_x28 = puStack_88;
        }
        else {
          *unaff_x28 = *puStack_68;
          *puStack_68 = puStack_88;
          lVar12 = (long)unaff_x28 + (8 - (long)param_1) >> 3;
          if (1 < lVar12) {
            param_4 = (undefined8 *)(lVar12 - 2U >> 1);
            unaff_x26 = param_1 + (long)param_4;
            unaff_x23 = (undefined8 *)*unaff_x26;
            unaff_x22 = (undefined8 *)*unaff_x28;
            unaff_x25 = (undefined8 *)*puStack_70;
            puVar18 = unaff_x25;
            puVar11 = unaff_x23;
            puStack_78 = puVar13;
            FUN_10a5b9250();
            unaff_x24 = puVar15;
            if ((puVar18 == (undefined8 *)0x0) ||
               (puVar17 = unaff_x25, puVar11 = unaff_x22, FUN_10a5b9250(), unaff_x24 = puVar18,
               puVar17 == (undefined8 *)0x0)) goto LAB_10a5ba5a4;
            puVar13 = puStack_78;
            puVar16 = param_4;
            puVar15 = puVar18;
            if (*(ushort *)(puVar18 + 3) < *(ushort *)(puVar17 + 3)) {
              do {
                unaff_x19 = unaff_x26;
                *unaff_x28 = unaff_x23;
                puVar16 = (undefined8 *)0x0;
                puVar15 = puVar18;
                if (param_4 == (undefined8 *)0x0) break;
                param_4 = (undefined8 *)((long)param_4 - 1U >> 1);
                unaff_x26 = param_1 + (long)param_4;
                unaff_x23 = (undefined8 *)*unaff_x26;
                unaff_x25 = (undefined8 *)*unaff_x27;
                puVar15 = unaff_x25;
                puVar11 = unaff_x23;
                FUN_10a5b9250();
                unaff_x24 = puVar18;
                if ((puVar15 == (undefined8 *)0x0) ||
                   (puVar13 = unaff_x25, puVar11 = unaff_x22, FUN_10a5b9250(), unaff_x24 = puVar15,
                   puVar13 == (undefined8 *)0x0)) goto LAB_10a5ba5a4;
                puVar16 = param_4;
                puVar18 = puVar15;
                unaff_x28 = unaff_x19;
              } while (*(ushort *)(puVar15 + 3) < *(ushort *)(puVar13 + 3));
              *unaff_x19 = unaff_x22;
              puVar13 = puStack_78;
            }
          }
        }
        bVar1 = 2 < (long)puVar13;
        puVar13 = (undefined8 *)((long)puVar13 + -1);
      } while (bVar1);
    }
  }
  return;
}



/* Entry: 10a5bac14; end: 10a5bade3;  */

void FUN_10a5bac14(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar6 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar5);
      }
      else if (param_2 <= plVar6) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)param_2;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar4;
      while (plVar9 != (long *)0x0) {
        plVar8 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar9;
        if (plVar8 != plVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar6 = plVar8;
          }
          else {
            *plVar4 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar9;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar9 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if ((((ulong)plVar4 & 1) != 0) && (plVar6[3] != 0)) {
    plVar6[4] = plVar6[3];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6);
  return;
}



/* Entry: 10a5bade4; end: 10a5bae17;  */

void FUN_10a5bade4(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x18);
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a5bae18; end: 10a5baf5f;  */

long * FUN_10a5bae18(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar5 = puVar4;
  if ((undefined8 *)param_1[2] != puVar4) {
    uVar3 = param_1[4];
    puVar6 = puVar4 + uVar3 / 0xaa;
    puVar1 = (undefined8 *)*puVar6;
    puVar8 = puVar1 + (uVar3 % 0xaa) * 3;
    puVar7 = (undefined8 *)
             (puVar4[(param_1[5] + uVar3) / 0xaa] + ((param_1[5] + uVar3) % 0xaa) * 0x18);
    puVar5 = (undefined8 *)param_1[2];
    if (puVar8 != puVar7) {
      do {
        if (*(char *)((long)puVar8 + 0x17) < '\0') {
          __ZdlPv(*puVar8);
          puVar1 = (undefined8 *)*puVar6;
        }
        puVar8 = puVar8 + 3;
        if ((long)puVar8 - (long)puVar1 == 0xff0) {
          puVar6 = puVar6 + 1;
          puVar1 = (undefined8 *)*puVar6;
          puVar8 = puVar1;
        }
      } while (puVar8 != puVar7);
      puVar4 = (undefined8 *)param_1[1];
      puVar5 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar2 = (long)puVar5 - (long)puVar4;
  while (uVar3 = lVar2 >> 3, 2 < uVar3) {
    __ZdlPv(*puVar4);
    puVar5 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar2 = (long)puVar5 - (long)puVar4;
  }
  if (uVar3 == 1) {
    lVar2 = 0x55;
  }
  else {
    if (uVar3 != 2) goto LAB_10a5baf3c;
    lVar2 = 0xaa;
  }
  param_1[4] = lVar2;
LAB_10a5baf3c:
  for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  lVar2 = param_1[2];
  if (lVar2 != param_1[1]) {
    param_1[2] = lVar2 + ((param_1[1] - lVar2) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5baf60; end: 10a5bafab;  */

long * FUN_10a5baf60(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5bafac; end: 10a5bb0af;  */

void FUN_10a5bafac(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar3 = param_1[4];
      uVar5 = uVar4;
      FUN_10a5bb0b0();
      puVar1 = (undefined8 *)(uVar3 + (uVar4 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar5 * 8;
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a5bb0b0; end: 10a5bb0e3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a5bb0b0(undefined ********param_1,undefined ********param_2,undefined ********param_3,
                  ulong param_4)

{
  undefined *******pppppppuVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined ********ppppppppuVar7;
  undefined ********ppppppppuVar8;
  undefined ********ppppppppuVar9;
  undefined ********ppppppppuVar10;
  undefined *******pppppppuVar11;
  undefined ********ppppppppuVar12;
  undefined ********ppppppppuVar13;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  int aiStack_180 [2];
  undefined8 *puStack_178;
  int aiStack_170 [2];
  undefined8 *puStack_168;
  undefined8 **ppuStack_160;
  undefined *******pppppppuStack_158;
  undefined1 *puStack_150;
  int **ppiStack_148;
  int *piStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined ********ppppppppuStack_128;
  undefined ********ppppppppuStack_120;
  undefined ********ppppppppuStack_118;
  undefined1 ***pppuStack_110;
  code *pcStack_108;
  undefined *******pppppppuStack_100;
  undefined ********ppppppppuStack_f8;
  undefined *******pppppppuStack_f0;
  undefined ********ppppppppuStack_e8;
  undefined *******pppppppuStack_e0;
  undefined ********ppppppppuStack_d8;
  undefined *******pppppppuStack_d0;
  undefined *******pppppppuStack_c8;
  undefined *******pppppppuStack_c0;
  undefined ********ppppppppuStack_b8;
  long lStack_98;
  ulong uStack_90;
  undefined ********ppppppppuStack_88;
  undefined ********ppppppppuStack_80;
  undefined ********ppppppppuStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  pcStack_28 = FUN_10a5bb0e4;
  pppppppuVar11 = param_1[2];
  ppppppppuVar13 = (undefined ********)*param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  if (param_4 <= (ulong)((long)pppppppuVar11 - (long)ppppppppuVar13 >> 2)) {
    ppppppppuVar12 = (undefined ********)param_1[1];
    if ((ulong)((long)ppppppppuVar12 - (long)ppppppppuVar13 >> 2) < param_4) {
      ppppppppuVar7 =
           (undefined ********)((long)param_2 + ((long)ppppppppuVar12 - (long)ppppppppuVar13));
      ppppppppuVar9 = ppppppppuVar12;
      if (ppppppppuVar12 != ppppppppuVar13) {
        _memmove(ppppppppuVar13,param_2);
        ppppppppuVar12 = (undefined ********)param_1[1];
        ppppppppuVar9 = ppppppppuVar12;
      }
      for (; ppppppppuVar7 != param_3; ppppppppuVar7 = (undefined ********)((long)ppppppppuVar7 + 4)
          ) {
        *(undefined4 *)ppppppppuVar12 = *(undefined4 *)ppppppppuVar7;
        ppppppppuVar12 = (undefined ********)((long)ppppppppuVar12 + 4);
        ppppppppuVar9 = (undefined ********)((long)ppppppppuVar9 + 4);
      }
    }
    else {
      lVar6 = (long)param_3 - (long)param_2;
      if (lVar6 != 0) {
        _memmove(ppppppppuVar13,param_2,lVar6);
      }
      ppppppppuVar9 = (undefined ********)((long)ppppppppuVar13 + lVar6);
    }
LAB_10a5bb1f8:
    param_1[1] = (undefined *******)ppppppppuVar9;
    return;
  }
  ppppppppuVar12 = param_1;
  ppppppppuVar9 = param_2;
  if (ppppppppuVar13 != (undefined ********)0x0) {
    param_1[1] = (undefined *******)ppppppppuVar13;
    __ZdlPv();
    pppppppuVar11 = (undefined *******)0x0;
    *param_1 = (undefined *******)0x0;
    param_1[1] = (undefined *******)0x0;
    param_1[2] = (undefined *******)0x0;
    ppppppppuVar12 = ppppppppuVar13;
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = (long)pppppppuVar11 >> 1;
    if ((ulong)((long)pppppppuVar11 >> 1) <= param_4) {
      uVar2 = param_4;
    }
    if ((undefined *******)0x7ffffffffffffffb < pppppppuVar11) {
      uVar2 = 0x3fffffffffffffff;
    }
    FUN_109ffe268(param_1,uVar2);
    ppppppppuVar9 = (undefined ********)param_1[1];
    for (; param_2 != param_3; param_2 = (undefined ********)((long)param_2 + 4)) {
      *(undefined4 *)ppppppppuVar9 = *(undefined4 *)param_2;
      ppppppppuVar9 = (undefined ********)((long)ppppppppuVar9 + 4);
    }
    goto LAB_10a5bb1f8;
  }
  func_0x000109ffdfac();
  ppppppppuVar13 = &pppppppuStack_100;
  pcStack_68 = FUN_10a5bb214;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = param_4;
  ppppppppuStack_88 = param_2;
  ppppppppuStack_80 = param_3;
  ppppppppuStack_78 = param_1;
  ppuStack_70 = &puStack_30;
  if (*(char *)(ppppppppuVar12 + 8) == '\x01') {
    pppppppuVar11 = *ppppppppuVar12;
    ppppppppuStack_d8 = (undefined ********)ppppppppuVar9[1];
    pppppppuStack_e0 = *ppppppppuVar9;
    if (ppppppppuVar9[1] != (undefined *******)0x0) {
      pppppppuVar1 = ppppppppuVar9[1] + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar1,0x10);
        if (bVar4) {
          *pppppppuVar1 = (undefined ******)((long)*pppppppuVar1 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppppppppuVar7 = &pppppppuStack_e0;
    ppppppppuVar10 = ppppppppuVar12;
    (*(code *)pppppppuVar11)(ppppppppuVar7,ppppppppuVar12);
    if (ppppppppuStack_d8 == (undefined ********)0x0) goto LAB_10a5bb3fc;
    ppppppppuVar9 = ppppppppuStack_d8 + 1;
    do {
      pppppppuVar11 = *ppppppppuVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
      if (bVar4) {
        *ppppppppuVar9 = (undefined *******)((long)pppppppuVar11 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppppppppuVar8 = ppppppppuStack_d8;
      ppppppppuVar13 = ppppppppuVar12;
    } while (cVar3 != '\0');
  }
  else {
    ppppppppuVar7 = ppppppppuVar12;
    ppppppppuVar10 = ppppppppuVar9;
    if (*(char *)(ppppppppuVar12 + 8) != '\x02') goto LAB_10a5bb3fc;
    param_2 = ppppppppuVar12;
    ppppppppuVar8 = ppppppppuVar9;
    FUN_10a688b40();
    if (param_2 != (undefined ********)0x0) {
      *param_2 = (undefined *******)CONCAT44((int)((ulong)*param_2 >> 0x20) + 1,(int)*param_2 + 1);
      ppppppppuVar7 = (undefined ********)*ppppppppuVar12;
      FUN_10a5bb484(ppppppppuVar7,ppppppppuVar9);
      iVar5 = *(int *)((long)param_2 + 4) + -1;
      *(int *)((long)param_2 + 4) = iVar5;
      ppppppppuVar10 = ppppppppuVar9;
      if (iVar5 == 0) {
        *(undefined4 *)param_2 = 0;
      }
      goto LAB_10a5bb3fc;
    }
    ppppppppuVar10 = (undefined ********)0x0;
    ppppppppuVar7 = (undefined ********)0x0;
    if (ppppppppuVar8 == (undefined ********)0x0) goto LAB_10a5bb3fc;
    pppppppuStack_c8 = ppppppppuVar12[1];
    pppppppuStack_d0 = *ppppppppuVar12;
    if (ppppppppuVar12[1] != (undefined *******)0x0) {
      pppppppuVar11 = ppppppppuVar12[1] + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
        if (bVar4) {
          *pppppppuVar11 = (undefined ******)((long)*pppppppuVar11 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppppuStack_f0 = *ppppppppuVar9;
    ppppppppuVar12 = (undefined ********)ppppppppuVar9[1];
    if (ppppppppuVar12 != (undefined ********)0x0) {
      ppppppppuVar9 = ppppppppuVar12 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
        if (bVar4) {
          *ppppppppuVar9 = (undefined *******)((long)*ppppppppuVar9 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppppuStack_e0 = (undefined *******)FUN_10a5bb614;
    ppppppppuStack_d8 = (undefined ********)&PTR_FUN_110bf7980;
    pppppppuStack_100 = (undefined *******)0x0;
    ppppppppuStack_f8 = (undefined ********)0x0;
    if (ppppppppuVar12 != (undefined ********)0x0) {
      ppppppppuVar9 = ppppppppuVar12 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
        if (bVar4) {
          *ppppppppuVar9 = (undefined *******)((long)*ppppppppuVar9 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_2 = &pppppppuStack_e0;
    ppppppppuVar10 = &pppppppuStack_e0;
    ppppppppuStack_e8 = ppppppppuVar12;
    pppppppuStack_c0 = pppppppuStack_f0;
    ppppppppuStack_b8 = ppppppppuVar12;
    FUN_10a4634ec(ppppppppuVar8,ppppppppuVar10);
    ppppppppuVar7 = (undefined ********)&ppppppppuStack_d8;
    (*(code *)*ppppppppuStack_d8)();
    if (ppppppppuVar12 != (undefined ********)0x0) {
      ppppppppuVar9 = ppppppppuVar12 + 1;
      do {
        pppppppuVar11 = *ppppppppuVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
        if (bVar4) {
          *ppppppppuVar9 = (undefined *******)((long)pppppppuVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppppuVar11 == (undefined *******)0x0) {
        (*(code *)(*ppppppppuVar12)[2])(ppppppppuVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppppuVar7 = ppppppppuVar12;
      }
    }
    ppppppppuVar12 = &pppppppuStack_100;
    if (ppppppppuStack_f8 == (undefined ********)0x0) goto LAB_10a5bb3fc;
    ppppppppuVar12 = ppppppppuStack_f8 + 1;
    do {
      pppppppuVar11 = *ppppppppuVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
      if (bVar4) {
        *ppppppppuVar12 = (undefined *******)((long)pppppppuVar11 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppppppppuVar8 = ppppppppuStack_f8;
    } while (cVar3 != '\0');
  }
  ppppppppuVar12 = ppppppppuVar13;
  if (pppppppuVar11 == (undefined *******)0x0) {
    (*(code *)(*ppppppppuVar8)[2])(ppppppppuVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppppuVar7 = ppppppppuVar8;
  }
LAB_10a5bb3fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    (*(code *)*ppppppppuStack_d8)(param_2 + 1);
    func_0x00010a1340b4(ppppppppuVar12 + 2);
    func_0x00010a004dac(&pppppppuStack_100);
    ppppppppuVar13 = ppppppppuVar7;
    __Unwind_Resume();
    pcStack_108 = FUN_10a5bb484;
    uStack_130 = param_4;
    ppppppppuStack_128 = param_2;
    ppppppppuStack_120 = ppppppppuVar12;
    ppppppppuStack_118 = ppppppppuVar7;
    pppuStack_110 = &ppuStack_70;
    func_0x000109884c0c(&ppuStack_160,ppppppppuVar13 + 1,*ppppppppuVar13);
    func_0x000109884820(&puStack_188,&ppuStack_160,*ppppppppuVar13);
    if (ppuStack_160 != (undefined8 **)0x0) {
      (*(code *)**ppuStack_160)();
    }
    (*(code *)(**ppppppppuVar13)[6])(&puStack_190);
    pppppppuVar11 = *ppppppppuVar13;
    FUN_10a2f7ec0(aiStack_170,pppppppuVar11,ppppppppuVar10);
    uStack_138 = 1;
    piStack_140 = aiStack_170;
    (*(code *)(*pppppppuVar11)[0xb])(pppppppuVar11);
    ppuStack_160 = &puStack_188;
    ppiStack_148 = &piStack_140;
    pppppppuStack_158 = pppppppuVar11;
    puStack_150 = (undefined1 *)&puStack_190;
    func_0x0001098960c0(aiStack_180);
    if ((3 < aiStack_180[0]) && (puStack_178 != (undefined8 *)0x0)) {
      (**(code **)*puStack_178)();
    }
    if ((3 < aiStack_170[0]) && (puStack_168 != (undefined8 *)0x0)) {
      (**(code **)*puStack_168)();
    }
    if (puStack_190 != (undefined8 *)0x0) {
      (**(code **)*puStack_190)();
    }
    if (puStack_188 != (undefined8 *)0x0) {
      (**(code **)*puStack_188)();
    }
    return;
  }
  return;
}



/* Entry: 10a5bb0e4; end: 10a5bb213;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a5bb0e4(undefined ********param_1,undefined ********param_2,undefined ********param_3,
                  ulong param_4)

{
  undefined *******pppppppuVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined ********ppppppppuVar7;
  undefined ********ppppppppuVar8;
  undefined ********ppppppppuVar9;
  undefined ********ppppppppuVar10;
  undefined *******pppppppuVar11;
  undefined ********ppppppppuVar12;
  undefined ********ppppppppuVar13;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  int aiStack_160 [2];
  undefined8 *puStack_158;
  int aiStack_150 [2];
  undefined8 *puStack_148;
  undefined8 **ppuStack_140;
  undefined *******pppppppuStack_138;
  undefined1 *puStack_130;
  int **ppiStack_128;
  int *piStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined ********ppppppppuStack_108;
  undefined ********ppppppppuStack_100;
  undefined ********ppppppppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined *******pppppppuStack_e0;
  undefined ********ppppppppuStack_d8;
  undefined *******pppppppuStack_d0;
  undefined ********ppppppppuStack_c8;
  undefined *******pppppppuStack_c0;
  undefined ********ppppppppuStack_b8;
  undefined *******pppppppuStack_b0;
  undefined *******pppppppuStack_a8;
  undefined *******pppppppuStack_a0;
  undefined ********ppppppppuStack_98;
  long lStack_78;
  ulong uStack_70;
  undefined ********ppppppppuStack_68;
  undefined ********ppppppppuStack_60;
  undefined ********ppppppppuStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  pppppppuVar11 = param_1[2];
  ppppppppuVar13 = (undefined ********)*param_1;
  if (param_4 <= (ulong)((long)pppppppuVar11 - (long)ppppppppuVar13 >> 2)) {
    ppppppppuVar12 = (undefined ********)param_1[1];
    if ((ulong)((long)ppppppppuVar12 - (long)ppppppppuVar13 >> 2) < param_4) {
      ppppppppuVar7 =
           (undefined ********)((long)param_2 + ((long)ppppppppuVar12 - (long)ppppppppuVar13));
      ppppppppuVar9 = ppppppppuVar12;
      if (ppppppppuVar12 != ppppppppuVar13) {
        _memmove(ppppppppuVar13,param_2);
        ppppppppuVar12 = (undefined ********)param_1[1];
        ppppppppuVar9 = ppppppppuVar12;
      }
      for (; ppppppppuVar7 != param_3; ppppppppuVar7 = (undefined ********)((long)ppppppppuVar7 + 4)
          ) {
        *(undefined4 *)ppppppppuVar12 = *(undefined4 *)ppppppppuVar7;
        ppppppppuVar12 = (undefined ********)((long)ppppppppuVar12 + 4);
        ppppppppuVar9 = (undefined ********)((long)ppppppppuVar9 + 4);
      }
    }
    else {
      lVar6 = (long)param_3 - (long)param_2;
      if (lVar6 != 0) {
        _memmove(ppppppppuVar13,param_2,lVar6);
      }
      ppppppppuVar9 = (undefined ********)((long)ppppppppuVar13 + lVar6);
    }
LAB_10a5bb1f8:
    param_1[1] = (undefined *******)ppppppppuVar9;
    return;
  }
  ppppppppuVar12 = param_1;
  ppppppppuVar9 = param_2;
  if (ppppppppuVar13 != (undefined ********)0x0) {
    param_1[1] = (undefined *******)ppppppppuVar13;
    __ZdlPv();
    pppppppuVar11 = (undefined *******)0x0;
    *param_1 = (undefined *******)0x0;
    param_1[1] = (undefined *******)0x0;
    param_1[2] = (undefined *******)0x0;
    ppppppppuVar12 = ppppppppuVar13;
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = (long)pppppppuVar11 >> 1;
    if ((ulong)((long)pppppppuVar11 >> 1) <= param_4) {
      uVar2 = param_4;
    }
    if ((undefined *******)0x7ffffffffffffffb < pppppppuVar11) {
      uVar2 = 0x3fffffffffffffff;
    }
    FUN_109ffe268(param_1,uVar2);
    ppppppppuVar9 = (undefined ********)param_1[1];
    for (; param_2 != param_3; param_2 = (undefined ********)((long)param_2 + 4)) {
      *(undefined4 *)ppppppppuVar9 = *(undefined4 *)param_2;
      ppppppppuVar9 = (undefined ********)((long)ppppppppuVar9 + 4);
    }
    goto LAB_10a5bb1f8;
  }
  func_0x000109ffdfac();
  ppppppppuVar13 = &pppppppuStack_e0;
  pcStack_48 = FUN_10a5bb214;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = param_4;
  ppppppppuStack_68 = param_2;
  ppppppppuStack_60 = param_3;
  ppppppppuStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if (*(char *)(ppppppppuVar12 + 8) == '\x01') {
    pppppppuVar11 = *ppppppppuVar12;
    ppppppppuStack_b8 = (undefined ********)ppppppppuVar9[1];
    pppppppuStack_c0 = *ppppppppuVar9;
    if (ppppppppuVar9[1] != (undefined *******)0x0) {
      pppppppuVar1 = ppppppppuVar9[1] + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar1,0x10);
        if (bVar4) {
          *pppppppuVar1 = (undefined ******)((long)*pppppppuVar1 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppppppppuVar7 = &pppppppuStack_c0;
    ppppppppuVar10 = ppppppppuVar12;
    (*(code *)pppppppuVar11)(ppppppppuVar7,ppppppppuVar12);
    if (ppppppppuStack_b8 == (undefined ********)0x0) goto LAB_10a5bb3fc;
    ppppppppuVar9 = ppppppppuStack_b8 + 1;
    do {
      pppppppuVar11 = *ppppppppuVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
      if (bVar4) {
        *ppppppppuVar9 = (undefined *******)((long)pppppppuVar11 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppppppppuVar8 = ppppppppuStack_b8;
      ppppppppuVar13 = ppppppppuVar12;
    } while (cVar3 != '\0');
  }
  else {
    ppppppppuVar7 = ppppppppuVar12;
    ppppppppuVar10 = ppppppppuVar9;
    if (*(char *)(ppppppppuVar12 + 8) != '\x02') goto LAB_10a5bb3fc;
    param_2 = ppppppppuVar12;
    ppppppppuVar8 = ppppppppuVar9;
    FUN_10a688b40();
    if (param_2 != (undefined ********)0x0) {
      *param_2 = (undefined *******)CONCAT44((int)((ulong)*param_2 >> 0x20) + 1,(int)*param_2 + 1);
      ppppppppuVar7 = (undefined ********)*ppppppppuVar12;
      FUN_10a5bb484(ppppppppuVar7,ppppppppuVar9);
      iVar5 = *(int *)((long)param_2 + 4) + -1;
      *(int *)((long)param_2 + 4) = iVar5;
      ppppppppuVar10 = ppppppppuVar9;
      if (iVar5 == 0) {
        *(undefined4 *)param_2 = 0;
      }
      goto LAB_10a5bb3fc;
    }
    ppppppppuVar10 = (undefined ********)0x0;
    ppppppppuVar7 = (undefined ********)0x0;
    if (ppppppppuVar8 == (undefined ********)0x0) goto LAB_10a5bb3fc;
    pppppppuStack_a8 = ppppppppuVar12[1];
    pppppppuStack_b0 = *ppppppppuVar12;
    if (ppppppppuVar12[1] != (undefined *******)0x0) {
      pppppppuVar11 = ppppppppuVar12[1] + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
        if (bVar4) {
          *pppppppuVar11 = (undefined ******)((long)*pppppppuVar11 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppppuStack_d0 = *ppppppppuVar9;
    ppppppppuVar12 = (undefined ********)ppppppppuVar9[1];
    if (ppppppppuVar12 != (undefined ********)0x0) {
      ppppppppuVar9 = ppppppppuVar12 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
        if (bVar4) {
          *ppppppppuVar9 = (undefined *******)((long)*ppppppppuVar9 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppppuStack_c0 = (undefined *******)FUN_10a5bb614;
    ppppppppuStack_b8 = (undefined ********)&PTR_FUN_110bf7980;
    pppppppuStack_e0 = (undefined *******)0x0;
    ppppppppuStack_d8 = (undefined ********)0x0;
    if (ppppppppuVar12 != (undefined ********)0x0) {
      ppppppppuVar9 = ppppppppuVar12 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
        if (bVar4) {
          *ppppppppuVar9 = (undefined *******)((long)*ppppppppuVar9 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_2 = &pppppppuStack_c0;
    ppppppppuVar10 = &pppppppuStack_c0;
    ppppppppuStack_c8 = ppppppppuVar12;
    pppppppuStack_a0 = pppppppuStack_d0;
    ppppppppuStack_98 = ppppppppuVar12;
    FUN_10a4634ec(ppppppppuVar8,ppppppppuVar10);
    ppppppppuVar7 = (undefined ********)&ppppppppuStack_b8;
    (*(code *)*ppppppppuStack_b8)();
    if (ppppppppuVar12 != (undefined ********)0x0) {
      ppppppppuVar9 = ppppppppuVar12 + 1;
      do {
        pppppppuVar11 = *ppppppppuVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
        if (bVar4) {
          *ppppppppuVar9 = (undefined *******)((long)pppppppuVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppppuVar11 == (undefined *******)0x0) {
        (*(code *)(*ppppppppuVar12)[2])(ppppppppuVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppppuVar7 = ppppppppuVar12;
      }
    }
    ppppppppuVar12 = &pppppppuStack_e0;
    if (ppppppppuStack_d8 == (undefined ********)0x0) goto LAB_10a5bb3fc;
    ppppppppuVar12 = ppppppppuStack_d8 + 1;
    do {
      pppppppuVar11 = *ppppppppuVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppppuVar12,0x10);
      if (bVar4) {
        *ppppppppuVar12 = (undefined *******)((long)pppppppuVar11 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppppppppuVar8 = ppppppppuStack_d8;
    } while (cVar3 != '\0');
  }
  ppppppppuVar12 = ppppppppuVar13;
  if (pppppppuVar11 == (undefined *******)0x0) {
    (*(code *)(*ppppppppuVar8)[2])(ppppppppuVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppppuVar7 = ppppppppuVar8;
  }
LAB_10a5bb3fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    (*(code *)*ppppppppuStack_b8)(param_2 + 1);
    func_0x00010a1340b4(ppppppppuVar12 + 2);
    func_0x00010a004dac(&pppppppuStack_e0);
    ppppppppuVar13 = ppppppppuVar7;
    __Unwind_Resume();
    pcStack_e8 = FUN_10a5bb484;
    uStack_110 = param_4;
    ppppppppuStack_108 = param_2;
    ppppppppuStack_100 = ppppppppuVar12;
    ppppppppuStack_f8 = ppppppppuVar7;
    ppuStack_f0 = &puStack_50;
    func_0x000109884c0c(&ppuStack_140,ppppppppuVar13 + 1,*ppppppppuVar13);
    func_0x000109884820(&puStack_168,&ppuStack_140,*ppppppppuVar13);
    if (ppuStack_140 != (undefined8 **)0x0) {
      (*(code *)**ppuStack_140)();
    }
    (*(code *)(**ppppppppuVar13)[6])(&puStack_170);
    pppppppuVar11 = *ppppppppuVar13;
    FUN_10a2f7ec0(aiStack_150,pppppppuVar11,ppppppppuVar10);
    uStack_118 = 1;
    piStack_120 = aiStack_150;
    (*(code *)(*pppppppuVar11)[0xb])(pppppppuVar11);
    ppuStack_140 = &puStack_168;
    ppiStack_128 = &piStack_120;
    pppppppuStack_138 = pppppppuVar11;
    puStack_130 = (undefined1 *)&puStack_170;
    func_0x0001098960c0(aiStack_160);
    if ((3 < aiStack_160[0]) && (puStack_158 != (undefined8 *)0x0)) {
      (**(code **)*puStack_158)();
    }
    if ((3 < aiStack_150[0]) && (puStack_148 != (undefined8 *)0x0)) {
      (**(code **)*puStack_148)();
    }
    if (puStack_170 != (undefined8 *)0x0) {
      (**(code **)*puStack_170)();
    }
    if (puStack_168 != (undefined8 *)0x0) {
      (**(code **)*puStack_168)();
    }
    return;
  }
  return;
}



/* Entry: 10a5bb214; end: 10a5bb483;  */

void FUN_10a5bb214(undefined ******param_1,undefined ******param_2)

{
  undefined *****pppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ******ppppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined ******ppppppuVar9;
  undefined *****pppppuVar10;
  undefined ******unaff_x21;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  int aiStack_110 [2];
  undefined8 *puStack_108;
  undefined8 **ppuStack_100;
  undefined ****ppppuStack_f8;
  undefined1 *puStack_f0;
  int **ppiStack_e8;
  int *piStack_e0;
  undefined8 uStack_d8;
  undefined ****ppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined ****ppppuStack_90;
  undefined *****pppppuStack_88;
  undefined ****ppppuStack_80;
  undefined *****pppppuStack_78;
  undefined ****ppppuStack_70;
  undefined ****ppppuStack_68;
  undefined ****ppppuStack_60;
  undefined *****pppppuStack_58;
  long lStack_38;
  
  ppppppuVar9 = (undefined ******)&ppppuStack_a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 8) == '\x01') {
    pppppuVar10 = *param_1;
    pppppuStack_78 = param_2[1];
    ppppuStack_80 = (undefined ****)*param_2;
    if (param_2[1] != (undefined *****)0x0) {
      pppppuVar1 = param_2[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar5 = (undefined ******)&ppppuStack_80;
    ppppppuVar8 = param_1;
    (*(code *)pppppuVar10)(ppppppuVar5,param_1);
    if ((undefined ******)pppppuStack_78 == (undefined ******)0x0) goto LAB_10a5bb3fc;
    ppppppuVar7 = (undefined ******)(pppppuStack_78 + 1);
    do {
      pppppuVar10 = *ppppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar3) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar6 = (undefined ******)pppppuStack_78;
      ppppppuVar9 = param_1;
    } while (cVar2 != '\0');
  }
  else {
    ppppppuVar5 = param_1;
    ppppppuVar8 = param_2;
    if (*(char *)(param_1 + 8) != '\x02') goto LAB_10a5bb3fc;
    unaff_x21 = param_1;
    ppppppuVar7 = param_2;
    FUN_10a688b40();
    if (unaff_x21 != (undefined ******)0x0) {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      ppppppuVar5 = (undefined ******)*param_1;
      FUN_10a5bb484(ppppppuVar5,param_2);
      iVar4 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar4;
      ppppppuVar8 = param_2;
      if (iVar4 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
      goto LAB_10a5bb3fc;
    }
    ppppppuVar8 = (undefined ******)0x0;
    ppppppuVar5 = (undefined ******)0x0;
    if (ppppppuVar7 == (undefined ******)0x0) goto LAB_10a5bb3fc;
    ppppuStack_68 = (undefined ****)param_1[1];
    ppppuStack_70 = (undefined ****)*param_1;
    if (param_1[1] != (undefined *****)0x0) {
      pppppuVar10 = param_1[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
        if (bVar3) {
          *pppppuVar10 = (undefined ****)((long)*pppppuVar10 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_90 = (undefined ****)*param_2;
    ppppppuVar6 = (undefined ******)param_2[1];
    if (ppppppuVar6 != (undefined ******)0x0) {
      ppppppuVar5 = ppppppuVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
        if (bVar3) {
          *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_80 = (undefined ****)FUN_10a5bb614;
    pppppuStack_78 = (undefined *****)&PTR_FUN_110bf7980;
    ppppuStack_a0 = (undefined ****)0x0;
    pppppuStack_98 = (undefined *****)0x0;
    if (ppppppuVar6 != (undefined ******)0x0) {
      ppppppuVar5 = ppppppuVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
        if (bVar3) {
          *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x21 = (undefined ******)&ppppuStack_80;
    ppppppuVar8 = (undefined ******)&ppppuStack_80;
    pppppuStack_88 = (undefined *****)ppppppuVar6;
    ppppuStack_60 = ppppuStack_90;
    pppppuStack_58 = (undefined *****)ppppppuVar6;
    FUN_10a4634ec(ppppppuVar7,ppppppuVar8);
    ppppppuVar5 = &pppppuStack_78;
    (*(code *)*pppppuStack_78)();
    if (ppppppuVar6 != (undefined ******)0x0) {
      ppppppuVar7 = ppppppuVar6 + 1;
      do {
        pppppuVar10 = *ppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar3) {
          *ppppppuVar7 = (undefined *****)((long)pppppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar10 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar6)[2])(ppppppuVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar5 = ppppppuVar6;
      }
    }
    param_1 = (undefined ******)&ppppuStack_a0;
    if ((undefined ******)pppppuStack_98 == (undefined ******)0x0) goto LAB_10a5bb3fc;
    ppppppuVar7 = (undefined ******)(pppppuStack_98 + 1);
    do {
      pppppuVar10 = *ppppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar3) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar6 = (undefined ******)pppppuStack_98;
    } while (cVar2 != '\0');
  }
  param_1 = ppppppuVar9;
  if (pppppuVar10 == (undefined *****)0x0) {
    (*(code *)(*ppppppuVar6)[2])(ppppppuVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar5 = ppppppuVar6;
  }
LAB_10a5bb3fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*pppppuStack_78)(unaff_x21 + 1);
    func_0x00010a1340b4(param_1 + 2);
    func_0x00010a004dac(&ppppuStack_a0);
    __Unwind_Resume();
    func_0x000109884c0c(&ppuStack_100,ppppppuVar5 + 1,*ppppppuVar5);
    func_0x000109884820(&puStack_128,&ppuStack_100,*ppppppuVar5);
    if (ppuStack_100 != (undefined8 **)0x0) {
      (*(code *)**ppuStack_100)();
    }
    (*(code *)(**ppppppuVar5)[6])(&puStack_130);
    pppppuVar10 = *ppppppuVar5;
    FUN_10a2f7ec0(aiStack_110,pppppuVar10,ppppppuVar8);
    uStack_d8 = 1;
    piStack_e0 = aiStack_110;
    (*(code *)(*pppppuVar10)[0xb])(pppppuVar10);
    ppuStack_100 = &puStack_128;
    ppiStack_e8 = &piStack_e0;
    ppppuStack_f8 = (undefined ****)pppppuVar10;
    puStack_f0 = (undefined1 *)&puStack_130;
    func_0x0001098960c0(aiStack_120);
    if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
      (**(code **)*puStack_118)();
    }
    if ((3 < aiStack_110[0]) && (puStack_108 != (undefined8 *)0x0)) {
      (**(code **)*puStack_108)();
    }
    if (puStack_130 != (undefined8 *)0x0) {
      (**(code **)*puStack_130)();
    }
    if (puStack_128 != (undefined8 *)0x0) {
      (**(code **)*puStack_128)();
    }
    return;
  }
  return;
}



/* Entry: 10a5bb484; end: 10a5bb613;  */

void FUN_10a5bb484(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  FUN_10a2f7ec0(aiStack_70,plVar1,param_2);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a5bb614; end: 10a5bb623;  */

void FUN_10a5bb614(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  FUN_10a2f7ec0(aiStack_70,plVar2,param_1 + 0x20);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a5bb624; end: 10a5bb64b;  */

long FUN_10a5bb624(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a1340b4(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 8;
}



/* Entry: 10a5bb64c; end: 10a5bb68b;  */

void FUN_10a5bb64c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bf7980;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
  if (lVar4 != 0) {
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
  return;
}



/* Entry: 10a5bb68c; end: 10a5bb6d3;  */

void FUN_10a5bb68c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a1340b4(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a5bb6d4; end: 10a5bb6e7;  */

void FUN_10a5bb6d4(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = plVar1[1];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a1340b4();
      } while (lVar2 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a5bb6e8; end: 10a5bb743;  */

void FUN_10a5bb6e8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a1340b4();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a5bb744; end: 10a5bb88b;  */

void FUN_10a5bb744(undefined8 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 ***pppuVar6;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined1 uStack_55;
  char cStack_49;
  undefined8 ***apppuStack_48 [2];
  char cStack_31;
  
  lVar5 = (long)*(char *)(param_2 + 0x87);
  lVar1 = lVar5;
  if (lVar5 < 0) {
    lVar1 = *(long *)(param_2 + 0x78);
  }
  if (lVar1 == 0) {
    puVar4 = &UNK_10f666b6c;
    FUN_10a00946c();
    if (cStack_49 < '\0') {
      __ZdlPv(CONCAT17((undefined1)uStack_59,uStack_60));
    }
    if (cStack_31 < '\0') {
      __ZdlPv(apppuStack_48[0]);
    }
    __Unwind_Resume(puVar4);
    if ((bRam00000001137eb470 & 1) == 0) {
      iVar2 = 0x137eb470;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x00010ad031c0();
        FUN_10a0ca0d8(0x1137eb4a0);
        ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                      ,0x1137eb4a0,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1137eb470);
        return;
      }
    }
    return;
  }
  lVar1 = *(long *)(param_2 + 0x78);
  if (-1 < *(char *)(param_2 + 0x87)) {
    lVar1 = lVar5;
  }
  FUN_10a003c90(apppuStack_48,lVar1 + 1,&uStack_60);
  ppppuVar3 = (undefined8 ****)apppuStack_48[0];
  if (-1 < cStack_31) {
    ppppuVar3 = apppuStack_48;
  }
  if (lVar1 != 0) {
    lVar5 = *(long *)(param_2 + 0x70);
    if (-1 < *(char *)(param_2 + 0x87)) {
      lVar5 = param_2 + 0x70;
    }
    _memmove(ppppuVar3,lVar5,lVar1);
  }
  *(undefined2 *)((long)ppppuVar3 + lVar1) = 0x2f;
  cStack_49 = '\v';
  uStack_60 = 0x2e6769666e6f63;
  uStack_59 = 0x6e6f736a;
  uStack_55 = 0;
  ppppuVar3 = apppuStack_48;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar3,&uStack_60,0xb);
  pppuVar6 = *ppppuVar3;
  param_1[1] = ppppuVar3[1];
  *param_1 = pppuVar6;
  param_1[2] = ppppuVar3[2];
  ppppuVar3[1] = (undefined8 ***)0x0;
  ppppuVar3[2] = (undefined8 ***)0x0;
  *ppppuVar3 = (undefined8 ***)0x0;
  if (cStack_49 < '\0') {
    __ZdlPv(CONCAT17((undefined1)uStack_59,uStack_60));
  }
  if (cStack_31 < '\0') {
    __ZdlPv(apppuStack_48[0]);
  }
  return;
}



/* Entry: 10a5bb88c; end: 10a5bb91f;  */

void FUN_10a5bb88c(void)

{
  int iVar1;
  
  if ((bRam00000001137eb470 & 1) == 0) {
    iVar1 = 0x137eb470;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010ad031c0();
      FUN_10a0ca0d8(0x1137eb4a0);
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                    ,0x1137eb4a0,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1137eb470);
      return;
    }
  }
  return;
}



/* Entry: 10a5bb920; end: 10a5bb98f;  */

void FUN_10a5bb920(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a5bb990();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a5bb990; end: 10a5bb9e7;  */

long FUN_10a5bb990(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a5bb9e8; end: 10a5bbb37;  */

void FUN_10a5bb9e8(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  long *plStack_28;
  
  if (((*(byte *)((long)param_1 + 0x69) & 1) == 0) &&
     (((*(byte *)(param_1 + 0xd) & 1) != 0 ||
      ((*(int *)((long)param_1 + 100) != 0 && (param_1[0xe] != 0)))))) {
    FUN_10a0f984c(&ppuStack_70);
    (**(code **)(*param_1 + 0x50))(param_1,&ppuStack_70);
    uVar1 = (((int)*(undefined8 *)(lStack_58 + 0x10) + (int)*(undefined8 *)(lStack_48 + 0x10) +
             (int)*(undefined8 *)(lStack_38 + 0x10)) -
            ((int)*(undefined8 *)(lStack_58 + 8) + (int)*(undefined8 *)(lStack_48 + 8) +
            (int)*(undefined8 *)(lStack_38 + 8))) + 0x48;
    *(uint *)((long)param_1 + 0x6c) = uVar1;
    *(undefined1 *)((long)param_1 + 0x69) = 1;
    if ((*(uint *)((long)param_1 + 100) < uVar1) &&
       (puVar3 = (undefined8 *)param_1[0xe], puVar3 != (undefined8 *)0x0)) {
      if (*(char *)(puVar3 + 8) == '\x01') {
        (*(code *)*puVar3)();
      }
      else if (*(char *)(puVar3 + 8) == '\x02') {
        FUN_10a05e614();
      }
    }
    plVar2 = plStack_28;
    ppuStack_70 = &PTR_FUN_110ba53b0;
    ppuStack_68 = &PTR_FUN_110ba5578;
    plStack_28 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_40 = &PTR_SUB_110b01d60;
    func_0x000107c2acd4(&ppuStack_40);
    ppuStack_50 = &PTR_SUB_110b01d60;
    func_0x000107c2acd4(&ppuStack_50);
    ppuStack_60 = &PTR_SUB_110b01d60;
    func_0x000107c2acd4(&ppuStack_60);
  }
  return;
}



/* Entry: 10a5bbb38; end: 10a5bbb4b;  */

undefined8 * FUN_10a5bbb38(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar4 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar6 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)puVar4[1];
  puVar4[1] = uVar8;
  *puVar4 = uVar7;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 10a5bbb4c; end: 10a5bbbc7;  */

undefined8 * FUN_10a5bbb4c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a5bbbc8; end: 10a5bbc6f;  */

long * FUN_10a5bbbc8(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  
  plVar3 = param_1;
  __ZSt19uncaught_exceptionsv();
  if (0 < (int)plVar3) {
    lVar5 = *param_1;
    uVar1 = *(ulong *)(lVar5 + 0x210);
    lVar2 = *(long *)(lVar5 + 0x208);
    if (-1 < (char)*(byte *)(lVar5 + 0x21f)) {
      uVar1 = (ulong)*(byte *)(lVar5 + 0x21f);
      lVar2 = lVar5 + 0x208;
    }
    FUN_10ae03140(0,lVar2,uVar1);
    ppuVar4 = &PTR_PTR_113302790;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar4,&PTR_PTR_113302790);
  }
  return param_1;
}



/* Entry: 10a5bbc70; end: 10a5bbed7;  */

void FUN_10a5bbc70(undefined8 *param_1)

{
  func_0x00010a5bbca8();
  func_0x00010a5bc890(*param_1);
  _glBindFramebuffer(0x8d40,0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



/* Entry: 10a5bbed8; end: 10a5bbfeb;  */

void FUN_10a5bbed8(long param_1,undefined8 param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 0xa0);
  FUN_10a5bc3c0();
  if (*(char *)(param_1 + 0x270) != '\x01' || *pcVar1 != '\0') {
    _glDisable(param_2);
    *pcVar1 = '\0';
  }
  return;
}



/* Entry: 10a5bbfec; end: 10a5bc293;  */

void FUN_10a5bbfec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)param_3;
  iVar5 = (int)param_4;
  iVar4 = (int)param_5;
  iVar7 = (int)param_2;
  if (*(char *)(param_1 + 0x270) != '\x01') goto LAB_10a5bc0a0;
  if (iVar7 == 0x405) {
    bVar2 = true;
LAB_10a5bc068:
    if ((*(int *)(param_1 + 0xf8) == iVar6) && (*(int *)(param_1 + 0x100) == iVar5)) {
      bVar3 = *(int *)(param_1 + 0x108) == iVar4;
    }
    else {
      bVar3 = false;
    }
    bVar1 = !bVar2;
    bVar2 = bVar3;
    if (bVar1) goto LAB_10a5bc0a0;
  }
  else {
    if ((*(int *)(param_1 + 0xf4) == iVar6) && (*(int *)(param_1 + 0xfc) == iVar5)) {
      bVar2 = *(int *)(param_1 + 0x104) == iVar4;
    }
    else {
      bVar2 = false;
    }
    if (iVar7 != 0x404) goto LAB_10a5bc068;
  }
  if (bVar2) {
    return;
  }
LAB_10a5bc0a0:
  _glStencilOpSeparate(param_2,param_3,param_4,param_5);
  if (iVar7 != 0x405) {
    *(int *)(param_1 + 0xf4) = iVar6;
    *(int *)(param_1 + 0xfc) = iVar5;
    *(int *)(param_1 + 0x104) = iVar4;
    if (iVar7 == 0x404) {
      return;
    }
  }
  *(int *)(param_1 + 0xf8) = iVar6;
  *(int *)(param_1 + 0x100) = iVar5;
  *(int *)(param_1 + 0x108) = iVar4;
  return;
}



/* Entry: 10a5bc294; end: 10a5bc3bf;  */

void FUN_10a5bc294(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_2;
  iVar2 = (int)param_3;
  if (iVar1 == 0x8893 && *(char *)(param_1 + 0x270) != '\0') {
    if (*(int *)(param_1 + 0xac) == iVar2) {
      return;
    }
    _glBindBuffer(0x8893,param_3);
LAB_10a5bc308:
    *(int *)(param_1 + 0xac) = iVar2;
  }
  else {
    if ((iVar1 == 0x8892) && (*(char *)(param_1 + 0x270) != '\0')) {
      if (*(int *)(param_1 + 0xa8) == iVar2) {
        return;
      }
      _glBindBuffer(0x8892,param_3);
    }
    else {
      _glBindBuffer(param_2,param_3);
      if (iVar1 != 0x8892) {
        if (iVar1 != 0x8893) {
          return;
        }
        goto LAB_10a5bc308;
      }
    }
    *(int *)(param_1 + 0xa8) = iVar2;
  }
  return;
}



/* Entry: 10a5bc3c0; end: 10a5bc46f;  */

long FUN_10a5bc3c0(long param_1,int param_2)

{
  int iStack_20;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&iStack_20;
  if (param_2 < 0xbe2) {
    if (param_2 == 0xb44) {
      return param_1 + 0x13a;
    }
    if (param_2 == 0xb71) {
      return param_1 + 0x139;
    }
    if (param_2 == 0xb90) {
      return param_1 + 0x13b;
    }
  }
  else {
    if (param_2 == 0x809e) {
      return param_1 + 0x13c;
    }
    if (param_2 == 0x3000) {
      return param_1 + 0x13e;
    }
    if (param_2 == 0xbe2) {
      return param_1 + 0x138;
    }
  }
  param_1 = param_1 + 0x110;
  iStack_20 = param_2;
  FUN_10a5bc470(param_1,&iStack_20,&UNK_10dd5b8f9,&puStack_18,&uStack_19);
  return param_1 + 0x14;
}



/* Entry: 10a5bc470; end: 10a5bc683;  */

undefined1  [16] FUN_10a5bc470(long *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x24;
  undefined1 auVar14 [16];
  
  uVar1 = *param_2;
  uVar13 = (ulong)uVar1;
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar5 = uVar12 - 1;
    uVar11 = (uint)uVar12;
    if ((uVar12 & uVar5) == 0) {
      unaff_x24 = (ulong)(uVar11 - 1 & uVar1);
    }
    else {
      unaff_x24 = uVar13;
      if (uVar12 <= uVar13) {
        uVar2 = 0;
        if (uVar11 != 0) {
          uVar2 = uVar1 / uVar11;
        }
        unaff_x24 = (ulong)(uVar1 - uVar2 * uVar11);
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar7; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar8 = plVar10[1];
        if (uVar8 == uVar13) {
          if (*(uint *)(plVar10 + 2) == uVar1) {
            uVar4 = 0;
            goto LAB_10a5bc650;
          }
        }
        else {
          if ((uVar12 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar12 <= uVar8) {
            uVar3 = 0;
            if (uVar12 != 0) {
              uVar3 = uVar8 / uVar12;
            }
            uVar8 = uVar8 - uVar3 * uVar12;
          }
          if (uVar8 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x18;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar13;
  *(undefined4 *)(plVar10 + 2) = *(undefined4 *)*param_4;
  *(undefined1 *)((long)plVar10 + 0x14) = 0;
  if ((uVar12 == 0) || (*(float *)(param_1 + 4) * (float)uVar12 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar12) {
      uVar5 = (ulong)((uVar12 & uVar12 - 1) != 0);
    }
    uVar5 = uVar5 | uVar12 << 1;
    uVar12 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar12) {
      uVar5 = uVar12;
    }
    FUN_10a5bc684(param_1,uVar5);
    uVar12 = param_1[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar12 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar13;
      if (uVar12 <= uVar13) {
        uVar5 = 0;
        if (uVar12 != 0) {
          uVar5 = uVar13 / uVar12;
        }
        unaff_x24 = uVar13 - uVar5 * uVar12;
      }
    }
  }
  lVar9 = *param_1;
  plVar6 = *(long **)(lVar9 + unaff_x24 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar10 = *plVar6;
    *plVar6 = (long)plVar10;
    *(long **)(lVar9 + unaff_x24 * 8) = plVar6;
    if (*plVar10 == 0) goto LAB_10a5bc640;
    uVar13 = *(ulong *)(*plVar10 + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar13 = uVar13 & uVar12 - 1;
    }
    else if (uVar12 <= uVar13) {
      uVar5 = 0;
      if (uVar12 != 0) {
        uVar5 = uVar13 / uVar12;
      }
      uVar13 = uVar13 - uVar5 * uVar12;
    }
    plVar6 = (long *)(*param_1 + uVar13 * 8);
  }
  else {
    *plVar10 = *plVar6;
  }
  *plVar6 = (long)plVar10;
LAB_10a5bc640:
  param_1[3] = param_1[3] + 1;
  uVar4 = 1;
LAB_10a5bc650:
  auVar14._8_8_ = uVar4;
  auVar14._0_8_ = plVar10;
  return auVar14;
}



/* Entry: 10a5bc684; end: 10a5bc753;  */

long ***** FUN_10a5bc684(long *****param_1,long *****param_2)

{
  ulong uVar1;
  code *pcVar2;
  long ****pppplVar3;
  long *****ppppplVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long *****ppppplVar9;
  long ****pppplVar10;
  long *****ppppplVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long ****pppplStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  long ***ppplStack_50;
  undefined8 uStack_48;
  long ****pppplStack_40;
  long ****pppplStack_38;
  
  ppppplVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *****)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    ppppplVar4 = param_2;
  }
  ppppplVar11 = (long *****)param_1[1];
  if (param_2 <= ppppplVar11) {
    if (param_2 < ppppplVar11) {
      ppppplVar4 = (long *****)(long)((float)param_1[3] / *(float *)(param_1 + 4));
      if ((ppppplVar11 < (long *****)0x3) || (((ulong)ppppplVar11 & (long)ppppplVar11 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *****)0x1 < ppppplVar4) {
        ppppplVar4 = (long *****)(1L << (-LZCOUNT((long)ppppplVar4 + -1) & 0x3fU));
      }
      if (param_2 <= ppppplVar4) {
        param_2 = ppppplVar4;
      }
      if (param_2 < ppppplVar11) goto LAB_10a5bc6cc;
    }
    return ppppplVar4;
  }
LAB_10a5bc6cc:
  if (param_2 == (long *****)0x0) {
    ppppplVar4 = (long *****)*param_1;
    *param_1 = (long ****)0x0;
    if (ppppplVar4 != (long *****)0x0) {
      __ZdlPv();
    }
    param_1[1] = (long ****)0x0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      ppppplVar4 = param_1;
      func_0x000109ffded8();
      ppppplVar11 = (long *****)&ppplStack_50;
      if (ppppplVar4 != (long *****)0x0) {
        ppplStack_50 = (long ***)&UNK_10f635282;
        uStack_48 = 0x2b;
        pppplStack_40 = (long ****)param_2;
        pppplStack_38 = (long ****)param_1;
        if (ppppplVar4[2] == (long ****)0x0) {
          FUN_10a0edfc4();
          __ZSt19uncaught_exceptionsv();
          ppppplVar4 = ppppplVar11;
          FUN_10ad4bc5c();
          if ((uint)ppppplVar4 != 0) {
            FUN_10a185264(&pppplStack_a8,0x400);
            puStack_b8 = &UNK_10f66429f;
            uStack_b0 = 0;
            FUN_10a304b28(&pppplStack_a8,&puStack_b8,0,0,ppppplVar4);
            ppppplVar9 = (long *****)pppplStack_a8;
            if (-1 < (char)bStack_91) {
              uStack_a0 = (ulong)bStack_91;
              ppppplVar9 = &pppplStack_a8;
            }
            FUN_10ae03140(0,ppppplVar9,uStack_a0);
            ppuVar5 = &PTR_PTR_113300cb8;
            FUN_10ae079a0();
            FUN_10ae0314c();
            FUN_10ae07cd4(ppuVar5,&PTR_PTR_113300cb8);
            if (((int)ppppplVar11 < 1) && (__ZSt19uncaught_exceptionsv(), (int)ppuVar5 == 0)) {
              if (((uint)ppppplVar4 >> 5 & 1) == 0) {
                FUN_10a5bca18(&pppplStack_a8);
              }
              else {
                FUN_10a31bdc4(&pppplStack_a8);
              }
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5bc9f8);
              (*pcVar2)();
            }
            ppppplVar4 = (long *****)ppuVar5;
            if ((char)bStack_91 < '\0') {
              __ZdlPv(pppplStack_a8);
              ppppplVar4 = (long *****)pppplStack_a8;
            }
          }
          return ppppplVar4;
        }
        func_0x00010a090848(ppppplVar4[2] + 10);
      }
      return (long *****)(ulong)(ppppplVar4 != (long *****)0x0);
    }
    pppplVar3 = (long ****)((long)param_2 << 3);
    __Znwm();
    ppppplVar4 = (long *****)*param_1;
    *param_1 = pppplVar3;
    if (ppppplVar4 != (long *****)0x0) {
      __ZdlPv();
    }
    ppppplVar11 = (long *****)0x0;
    param_1[1] = (long ****)param_2;
    do {
      (*param_1)[(long)ppppplVar11] = (long ***)0x0;
      ppppplVar11 = (long *****)((long)ppppplVar11 + 1);
    } while (param_2 != ppppplVar11);
    pppplVar3 = param_1[2];
    if (pppplVar3 != (long ****)0x0) {
      ppppplVar11 = (long *****)pppplVar3[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        ppppplVar11 = (long *****)((ulong)ppppplVar11 & uVar6);
      }
      else if (param_2 <= ppppplVar11) {
        uVar1 = 0;
        if (param_2 != (long *****)0x0) {
          uVar1 = (ulong)ppppplVar11 / (ulong)param_2;
        }
        ppppplVar11 = (long *****)((long)ppppplVar11 - uVar1 * (long)param_2);
      }
      (*param_1)[(long)ppppplVar11] = (long ***)(param_1 + 2);
      pppplVar7 = (long ****)*pppplVar3;
      while (pppplVar7 != (long ****)0x0) {
        ppppplVar9 = (long *****)pppplVar7[1];
        if (((ulong)param_2 & uVar6) == 0) {
          ppppplVar9 = (long *****)((ulong)ppppplVar9 & uVar6);
        }
        else if (param_2 <= ppppplVar9) {
          uVar1 = 0;
          if (param_2 != (long *****)0x0) {
            uVar1 = (ulong)ppppplVar9 / (ulong)param_2;
          }
          ppppplVar9 = (long *****)((long)ppppplVar9 - uVar1 * (long)param_2);
        }
        pppplVar8 = pppplVar7;
        if (ppppplVar9 != ppppplVar11) {
          pppplVar10 = *param_1;
          if (pppplVar10[(long)ppppplVar9] == (long ***)0x0) {
            pppplVar10[(long)ppppplVar9] = (long ***)pppplVar3;
            ppppplVar11 = ppppplVar9;
          }
          else {
            *pppplVar3 = *pppplVar7;
            *pppplVar7 = (long ***)*pppplVar10[(long)ppppplVar9];
            *pppplVar10[(long)ppppplVar9] = (long **)pppplVar7;
            pppplVar8 = pppplVar3;
          }
        }
        pppplVar3 = pppplVar8;
        pppplVar7 = (long ****)*pppplVar8;
      }
    }
  }
  return ppppplVar4;
}



/* Entry: 10a5bc754; end: 10a5bc8e7;  */

undefined8 **** FUN_10a5bc754(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  code *pcVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  long *plStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    ppppuVar5 = (undefined8 ****)*param_1;
    *param_1 = 0;
    if (ppppuVar5 != (undefined8 ****)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar10 = param_1;
      func_0x000109ffded8();
      ppppuVar5 = (undefined8 ****)&ppuStack_50;
      uStack_28 = 0x10a5bc890;
      if (plVar10 != (long *)0x0) {
        ppuStack_50 = (undefined8 **)&UNK_10f635282;
        uStack_48 = 0x2b;
        uStack_40 = param_2;
        plStack_38 = param_1;
        puStack_30 = &stack0xfffffffffffffff0;
        if (plVar10[2] == 0) {
          FUN_10a0edfc4();
          __ZSt19uncaught_exceptionsv();
          ppppuVar6 = ppppuVar5;
          FUN_10ad4bc5c();
          if ((uint)ppppuVar6 != 0) {
            FUN_10a185264(&pppuStack_a8,0x400);
            puStack_b8 = &UNK_10f66429f;
            uStack_b0 = 0;
            FUN_10a304b28(&pppuStack_a8,&puStack_b8,0,0,ppppuVar6);
            ppppuVar2 = (undefined8 ****)pppuStack_a8;
            if (-1 < (char)bStack_91) {
              uStack_a0 = (ulong)bStack_91;
              ppppuVar2 = &pppuStack_a8;
            }
            FUN_10ae03140(0,ppppuVar2,uStack_a0);
            ppuVar7 = &PTR_PTR_113300cb8;
            FUN_10ae079a0();
            FUN_10ae0314c();
            FUN_10ae07cd4(ppuVar7,&PTR_PTR_113300cb8);
            if (((int)ppppuVar5 < 1) && (__ZSt19uncaught_exceptionsv(), (int)ppuVar7 == 0)) {
              if (((uint)ppppuVar6 >> 5 & 1) == 0) {
                FUN_10a5bca18(&pppuStack_a8);
              }
              else {
                FUN_10a31bdc4(&pppuStack_a8);
              }
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10a5bc9f8);
              (*pcVar3)();
            }
            ppppuVar6 = (undefined8 ****)ppuVar7;
            if ((char)bStack_91 < '\0') {
              __ZdlPv(pppuStack_a8);
              ppppuVar6 = (undefined8 ****)pppuStack_a8;
            }
          }
          return ppppuVar6;
        }
        func_0x00010a090848(plVar10[2] + 0x50);
      }
      return (undefined8 ****)(ulong)(plVar10 != (long *)0x0);
    }
    lVar4 = param_2 << 3;
    __Znwm();
    ppppuVar5 = (undefined8 ****)*param_1;
    *param_1 = lVar4;
    if (ppppuVar5 != (undefined8 ****)0x0) {
      __ZdlPv();
    }
    uVar8 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
      uVar8 = uVar8 + 1;
    } while (param_2 != uVar8);
    plVar10 = (long *)param_1[2];
    if (plVar10 != (long *)0x0) {
      uVar8 = plVar10[1];
      uVar9 = param_2 - 1;
      if ((param_2 & uVar9) == 0) {
        uVar8 = uVar8 & uVar9;
      }
      else if (param_2 <= uVar8) {
        uVar13 = 0;
        if (param_2 != 0) {
          uVar13 = uVar8 / param_2;
        }
        uVar8 = uVar8 - uVar13 * param_2;
      }
      *(long **)(*param_1 + uVar8 * 8) = param_1 + 2;
      plVar11 = (long *)*plVar10;
      while (plVar11 != (long *)0x0) {
        uVar13 = plVar11[1];
        if ((param_2 & uVar9) == 0) {
          uVar13 = uVar13 & uVar9;
        }
        else if (param_2 <= uVar13) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar13 / param_2;
          }
          uVar13 = uVar13 - uVar1 * param_2;
        }
        plVar12 = plVar11;
        if (uVar13 != uVar8) {
          lVar4 = *param_1;
          if (*(long *)(lVar4 + uVar13 * 8) == 0) {
            *(long **)(lVar4 + uVar13 * 8) = plVar10;
            uVar8 = uVar13;
          }
          else {
            *plVar10 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar4 + uVar13 * 8);
            **(long **)(lVar4 + uVar13 * 8) = (long)plVar11;
            plVar12 = plVar10;
          }
        }
        plVar10 = plVar12;
        plVar11 = (long *)*plVar12;
      }
    }
  }
  return ppppuVar5;
}



/* Entry: 10a5bc8e8; end: 10a5bca17;  */

void FUN_10a5bc8e8(undefined8 param_1)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined **ppuVar5;
  
  __ZSt19uncaught_exceptionsv();
  uVar4 = param_1;
  FUN_10ad4bc5c();
  if ((uint)uVar4 != 0) {
    FUN_10a185264(&pppuStack_58,0x400);
    puStack_68 = &UNK_10f66429f;
    uStack_60 = 0;
    FUN_10a304b28(&pppuStack_58,&puStack_68,0,0,uVar4);
    ppppuVar1 = (undefined8 ****)pppuStack_58;
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      ppppuVar1 = &pppuStack_58;
    }
    FUN_10ae03140(0,ppppuVar1,uStack_50);
    ppuVar5 = &PTR_PTR_113300cb8;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113300cb8);
    iVar3 = (int)ppuVar5;
    if (((int)param_1 < 1) && (__ZSt19uncaught_exceptionsv(), iVar3 == 0)) {
      if (((uint)uVar4 >> 5 & 1) == 0) {
        FUN_10a5bca18(&pppuStack_58);
      }
      else {
        FUN_10a31bdc4(&pppuStack_58);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5bc9f8);
      (*pcVar2)();
    }
    if ((char)bStack_41 < '\0') {
      __ZdlPv(pppuStack_58);
    }
  }
  return;
}



/* Entry: 10a5bca18; end: 10a5bcae7;  */

void FUN_10a5bca18(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a002a94(appuStack_150,param_1);
  appuStack_150[0] = &PTR_FUN_110bf79e0;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110bf79e0;
  ___cxa_throw(puVar2,&PTR_DAT_110bf79b8,FUN_10a5bcae8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5bcad0);
  (*pcVar1)();
}



/* Entry: 10a5bcae8; end: 10a5bcaeb;  */

void FUN_10a5bcae8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a5bcaec; end: 10a5bcaff;  */

void FUN_10a5bcaec(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5bcb00; end: 10a5bcbcf;  */

void FUN_10a5bcb00(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a002a94(appuStack_150,param_1);
  appuStack_150[0] = &PTR_FUN_110bf7a20;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110bf7a20;
  ___cxa_throw(puVar2,&PTR_DAT_110bf79f8,FUN_10a5bcbd0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5bcbb8);
  (*pcVar1)();
}



/* Entry: 10a5bcbd0; end: 10a5bcbd3;  */

void FUN_10a5bcbd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a5bcbd4; end: 10a5bcbfb;  */

void FUN_10a5bcbd4(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5bcbfc; end: 10a5bcc4f;  */

void FUN_10a5bcbfc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a5bcc50; end: 10a5bcccb;  */

long * FUN_10a5bcc50(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    lVar1 = *param_3;
    lVar2 = param_3[1];
    plVar3 = (long *)*plVar4;
    do {
      while (plVar5 = plVar3, lVar6 = plVar5[4], lVar1 == lVar6) {
        lVar6 = plVar5[5];
        if (lVar6 <= lVar2) {
          if (lVar6 != lVar2 && lVar6 < lVar2) goto LAB_10a5bccb0;
          goto LAB_10a5bccc4;
        }
LAB_10a5bcc94:
        plVar4 = plVar5;
        plVar3 = (long *)*plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_10a5bccc4;
      }
      if (lVar1 < lVar6) goto LAB_10a5bcc94;
      if (lVar1 <= lVar6) break;
LAB_10a5bccb0:
      plVar4 = plVar5 + 1;
      plVar3 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_10a5bccc4:
  *param_2 = (long)plVar5;
  return plVar4;
}



/* Entry: 10a5bcccc; end: 10a5bcd53;  */

void FUN_10a5bcccc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a5bcccc(param_1,*param_2);
    FUN_10a5bcccc(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a5bcd54; end: 10a5bcdcb;  */

void FUN_10a5bcd54(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    func_0x00010a191c6c(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a5bcdcc; end: 10a5bcea3;  */

long * FUN_10a5bcdcc(long *param_1)

{
  long lVar1;
  
  func_0x00010a5bce04(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5bcea4; end: 10a5bceb3;  */

void FUN_10a5bcea4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf7a48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a5bceb4; end: 10a5bced3;  */

void FUN_10a5bceb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf7a48;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5bced4; end: 10a5bcee7;  */

void FUN_10a5bced4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a5bcedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a5bcee8; end: 10a5bcefb;  */

void FUN_10a5bcee8(void)

{
  FUN_10a0a28f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5bcefc; end: 10a5bcf9b;  */

long FUN_10a5bcefc(long param_1)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    if (*(char *)(param_1 + 0xb0) == '\x01') {
      func_0x00010a09db64(param_1 + 0x80);
    }
    if (*(char *)(param_1 + 0x6f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x58));
    }
  }
  return param_1;
}



/* Entry: 10a5bcf9c; end: 10a5bd06f;  */

long * FUN_10a5bcf9c(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar4 = ((ulong)uVar2 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a5bd070; end: 10a5bd0a3;  */

undefined * FUN_10a5bd070(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  ppuVar6 = &PTR_PTR_1133027d0;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0(0);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a5bd0a4; end: 10a5bd0f7;  */

undefined * FUN_10a5bd0a4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  FUN_10ae030a0(0,param_1);
  ppuVar6 = &PTR_PTR_113302828;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a5bd0f8; end: 10a5bd167;  */

undefined8 * FUN_10a5bd0f8(undefined8 *param_1)

{
  long *plVar1;
  
  if (*(long *)*param_1 != 0) {
    FUN_10a08f2ac();
  }
  plVar1 = *(long **)param_1[1];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xe0))();
    if ((plVar1 != (long *)0x0) && (*(int *)((long)plVar1 + 0x734) == 1)) {
      func_0x000109297280();
    }
    (**(code **)(**(long **)param_1[1] + 0xf0))();
  }
  return param_1;
}



/* Entry: 10a5bd168; end: 10a5bd23b;  */

undefined8 *
FUN_10a5bd168(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined1 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
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
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = uVar5;
  if (lVar4 != 0) {
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
  lVar4 = param_4[1];
  uVar5 = *param_4;
  param_1[5] = param_4[1];
  param_1[4] = uVar5;
  if (lVar4 != 0) {
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
  FUN_10a5bd23c(param_1 + 6,param_5);
  *(undefined1 *)(param_1 + 9) = param_6;
  return param_1;
}



/* Entry: 10a5bd23c; end: 10a5bd28f;  */

undefined8 * FUN_10a5bd23c(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_10a5bd290(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 10a5bd290; end: 10a5bd38f;  */

void FUN_10a5bd290(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  while (param_2 != param_3) {
    func_0x00010a5bd310(param_1,param_1 + 8,param_2 + 4,param_2 + 4);
    plVar1 = (long *)param_2[1];
    plVar3 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar3[2];
        bVar2 = (long *)*param_2 != plVar3;
        plVar3 = param_2;
      } while (bVar2);
    }
    else {
      do {
        param_2 = plVar1;
        plVar1 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a5bd390; end: 10a5bd51f;  */

long * FUN_10a5bd390(undefined8 *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if (param_1 + 1 == param_2) {
LAB_10a5bd3f4:
    plVar3 = (long *)*param_2;
    plVar5 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar8 = param_2;
      plVar2 = plVar3;
      if (plVar3 == (long *)0x0) {
        do {
          plVar5 = (long *)plVar8[2];
          bVar1 = (long *)*plVar5 == plVar8;
          plVar8 = plVar5;
        } while (bVar1);
      }
      else {
        do {
          plVar5 = plVar2;
          plVar2 = (long *)plVar5[1];
        } while ((long *)plVar5[1] != (long *)0x0);
      }
      bVar1 = plVar5[4] < *param_5;
      if (plVar5[4] == *param_5) {
        bVar1 = plVar5[5] != param_5[1] && plVar5[5] < param_5[1];
      }
      if (!bVar1) goto FUN_10a5bd5dc;
    }
    if (plVar3 == (long *)0x0) {
      *param_3 = (long)param_2;
    }
    else {
      *param_3 = (long)plVar5;
      param_2 = plVar5 + 1;
    }
  }
  else {
    lVar4 = *param_5;
    lVar6 = param_2[4];
    if (lVar4 == lVar6) {
      lVar6 = param_5[1];
      lVar7 = param_2[5];
      if (lVar6 < lVar7) goto LAB_10a5bd3f4;
      if (lVar7 == lVar6 || lVar6 <= lVar7) {
LAB_10a5bd4a8:
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
    }
    else {
      if (lVar4 < lVar6) goto LAB_10a5bd3f4;
      if (lVar4 <= lVar6) goto LAB_10a5bd4a8;
    }
    plVar8 = (long *)param_2[1];
    plVar5 = param_2;
    plVar3 = plVar8;
    if (plVar8 == (long *)0x0) {
      do {
        plVar2 = (long *)plVar5[2];
        bVar1 = (long *)*plVar2 != plVar5;
        plVar5 = plVar2;
      } while (bVar1);
    }
    else {
      do {
        plVar2 = plVar3;
        plVar3 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
    if (plVar2 != param_1 + 1) {
      bVar1 = lVar4 < plVar2[4];
      if (lVar4 == plVar2[4]) {
        bVar1 = param_5[1] != plVar2[5] && param_5[1] < plVar2[5];
      }
      if (!bVar1) {
FUN_10a5bd5dc:
        plVar5 = param_1 + 1;
        plVar3 = plVar5;
        if ((long *)*plVar5 != (long *)0x0) {
          lVar4 = *param_5;
          lVar6 = param_5[1];
          plVar8 = (long *)*plVar5;
          do {
            while (plVar3 = plVar8, lVar7 = plVar3[4], lVar4 == lVar7) {
              lVar7 = plVar3[5];
              if (lVar6 < lVar7) goto LAB_10a5bd620;
              if (lVar7 == lVar6 || lVar6 <= lVar7) goto LAB_10a5bd650;
LAB_10a5bd63c:
              plVar5 = plVar3 + 1;
              plVar8 = (long *)*plVar5;
              if ((long *)*plVar5 == (long *)0x0) goto LAB_10a5bd650;
            }
            if (lVar7 <= lVar4) {
              if (lVar7 < lVar4) goto LAB_10a5bd63c;
              break;
            }
LAB_10a5bd620:
            plVar5 = plVar3;
            plVar8 = (long *)*plVar3;
          } while ((long *)*plVar3 != (long *)0x0);
        }
LAB_10a5bd650:
        *param_3 = (long)plVar3;
        return plVar5;
      }
    }
    if (plVar8 == (long *)0x0) {
      *param_3 = (long)param_2;
      param_2 = param_2 + 1;
    }
    else {
      *param_3 = (long)plVar2;
      param_2 = plVar2;
    }
  }
  return param_2;
}



/* Entry: 10a5bd520; end: 10a5bd587;  */

void FUN_10a5bd520(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xe8;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  FUN_10a5bd658(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a5bd588; end: 10a5bd5db;  */

void FUN_10a5bd588(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a5bd5dc; end: 10a5bd657;  */

long * FUN_10a5bd5dc(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    lVar1 = *param_3;
    lVar2 = param_3[1];
    plVar3 = (long *)*plVar4;
    do {
      while (plVar5 = plVar3, lVar6 = plVar5[4], lVar1 == lVar6) {
        lVar6 = plVar5[5];
        if (lVar6 <= lVar2) {
          if (lVar6 != lVar2 && lVar6 < lVar2) goto LAB_10a5bd63c;
          goto LAB_10a5bd650;
        }
LAB_10a5bd620:
        plVar4 = plVar5;
        plVar3 = (long *)*plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_10a5bd650;
      }
      if (lVar1 < lVar6) goto LAB_10a5bd620;
      if (lVar1 <= lVar6) break;
LAB_10a5bd63c:
      plVar4 = plVar5 + 1;
      plVar3 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_10a5bd650:
  *param_2 = (long)plVar5;
  return plVar4;
}



/* Entry: 10a5bd658; end: 10a5bd773;  */

undefined8 * FUN_10a5bd658(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  uVar8 = param_2[9];
  uVar7 = param_2[8];
  uVar6 = param_2[0xb];
  uVar4 = param_2[10];
  uVar10 = param_2[7];
  uVar9 = param_2[6];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[9] = uVar8;
  param_1[8] = uVar7;
  param_1[0xb] = uVar6;
  param_1[10] = uVar4;
  param_1[7] = uVar10;
  param_1[6] = uVar9;
  uVar4 = param_2[2];
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  param_1[5] = uVar7;
  param_1[4] = uVar6;
  if (*(char *)((long)param_2 + 0x7f) < '\0') {
    func_0x000107c3192c(param_1 + 0xd,param_2[0xd],param_2[0xe]);
  }
  else {
    uVar6 = param_2[0xe];
    uVar4 = param_2[0xd];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar6;
    param_1[0xd] = uVar4;
  }
  uVar4 = param_2[0x10];
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  param_1[0x10] = uVar4;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    lVar5 = param_2[0x13];
    uVar4 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar4;
    if (lVar5 != 0) {
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
    uVar6 = param_2[0x15];
    uVar4 = param_2[0x14];
    uVar7 = *(undefined8 *)((long)param_2 + 0xa9);
    *(undefined8 *)((long)param_1 + 0xb1) = *(undefined8 *)((long)param_2 + 0xb1);
    *(undefined8 *)((long)param_1 + 0xa9) = uVar7;
    param_1[0x15] = uVar6;
    param_1[0x14] = uVar4;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return param_1;
}



/* Entry: 10a5bd774; end: 10a5bd82b;  */

undefined * FUN_10a5bd774(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  FUN_10a384e60();
  ppuVar6 = &PTR_PTR_113302878;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  func_0x00010a384ea0();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a5bd82c; end: 10a5bd90b;  */

long FUN_10a5bd82c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}


