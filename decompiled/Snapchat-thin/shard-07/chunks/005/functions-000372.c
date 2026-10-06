/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056c3ca0; end: 1056c3e57; -[SCFlatBufferBackedOverlayFormat _genericAssetDataOverlayForTag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c3ca0(long param_1,undefined8 param_2,long param_3)

{
  uint *puVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  ushort *puVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  
  piVar8 = *(int **)(param_1 + _DAT_112727b4c);
  puVar5 = (ushort *)((long)piVar8 - (long)*piVar8);
  if ((10 < *puVar5) && (uVar9 = (ulong)puVar5[5], uVar9 != 0)) {
    uVar10 = (ulong)*(uint *)((long)piVar8 + uVar9);
    puVar1 = (uint *)((long)((long)piVar8 + uVar9) + uVar10);
    puVar6 = (uint *)0x0;
    if ((ulong)puVar5[4] != 0) {
      puVar6 = (uint *)((long)piVar8 + (ulong)puVar5[4]);
      puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    }
    if (*puVar1 != 0) {
      lVar11 = 0;
      do {
        uVar14 = (ulong)*(uint *)((long)puVar1 + lVar11 + 4);
        lVar15 = uVar14 - (long)*(int *)((long)puVar1 + uVar14 + lVar11 + 4);
        lVar4 = lVar15 + lVar11 + uVar9 + uVar10;
        uVar2 = *(ushort *)((long)piVar8 + lVar4 + 4);
        if (uVar2 < 5) {
          lVar4 = 0;
        }
        else {
          uVar3 = (ulong)*(ushort *)((long)piVar8 + lVar4 + 8);
          lVar4 = 0;
          if (uVar3 != 0) {
            lVar4 = (long)*(int *)((long)piVar8 + uVar14 + uVar3 + lVar11 + uVar9 + uVar10 + 4);
          }
        }
        if (param_3 == lVar4) {
          if (uVar2 < 7) {
LAB_1056c3d98:
            iVar7 = 0;
          }
          else {
            lVar11 = lVar11 + uVar9 + uVar10;
            uVar9 = (ulong)*(ushort *)((long)piVar8 + lVar15 + lVar11 + 10);
            if (uVar9 == 0) goto LAB_1056c3d98;
            iVar7 = *(int *)((long)piVar8 + uVar9 + uVar14 + lVar11 + 4);
          }
          if (*puVar6 != 0) {
            lVar11 = 0;
            goto LAB_1056c3dac;
          }
          break;
        }
        lVar11 = lVar11 + 4;
      } while ((ulong)*puVar1 * 4 - lVar11 != 0);
    }
  }
  goto LAB_1056c3e08;
  while (lVar11 = lVar11 + 4, (ulong)*puVar6 * 4 - lVar11 != 0) {
LAB_1056c3dac:
    uVar9 = (ulong)*(uint *)((long)puVar6 + lVar11 + 4);
    lVar12 = uVar9 - (long)*(int *)((long)puVar6 + uVar9 + lVar11 + 4);
    lVar15 = lVar12 + lVar11;
    if (*(ushort *)((long)puVar6 + lVar15 + 4) < 5) {
      iVar13 = 0;
    }
    else {
      uVar10 = (ulong)*(ushort *)((long)puVar6 + lVar15 + 8);
      iVar13 = 0;
      if (uVar10 != 0) {
        iVar13 = *(int *)((long)puVar6 + uVar9 + uVar10 + lVar11 + 4);
      }
    }
    if (iVar7 == iVar13) {
      uVar10 = (ulong)*(ushort *)((long)puVar6 + lVar12 + lVar11 + 10);
      lVar11 = uVar10 + *(uint *)((long)puVar6 + uVar10 + lVar11 + uVar9 + 4) + lVar11 + uVar9;
      func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778,lVar4,(long)puVar6 + lVar11 + 8,
                          *(undefined4 *)((long)puVar6 + lVar11 + 4),0);
      _objc_retainAutoreleasedReturnValue();
      break;
    }
  }
LAB_1056c3e08:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056c3e58; end: 1056c3e93; -[SCFlatBufferBackedOverlayFormat .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1056c3e58(long param_1)

{
  long *plVar1;
  long lVar2;
  
  _objc_storeStrong(param_1 + _DAT_112727b48,0);
  plVar1 = (long *)(param_1 + _DAT_112727b44);
  lVar2 = plVar1[2];
  if (lVar2 != 0) {
    (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,lVar2,plVar1[3]);
  }
  if (((char)plVar1[1] == '\x01') && ((long *)*plVar1 != (long *)0x0)) {
    (**(code **)(*(long *)*plVar1 + 8))();
  }
  *plVar1 = 0;
  *(undefined1 *)(plVar1 + 1) = 0;
  plVar1[3] = 0;
  plVar1[2] = 0;
  plVar1[5] = 0;
  plVar1[4] = 0;
  return plVar1;
}



/* Entry: 1056c3e94; end: 1056c3eb3; -[SCFlatBufferBackedOverlayFormat .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c3e94(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112727b44);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 1056c3eb4; end: 1056c3f27;  */

long * FUN_1056c3eb4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,lVar1,param_1[3]);
  }
  if (((char)param_1[1] == '\x01') && ((long *)*param_1 != (long *)0x0)) {
    (**(code **)(*(long *)*param_1 + 8))();
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1056c3f28; end: 1056c459b; -[SCOverlayFormat overlayFormatWithMediaOverlayArray:screenOverlayArray:useWebP:webPQuality:] */

void FUN_1056c3f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined *param_5,int param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  bool bVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined **ppuStack_160;
  undefined1 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  ulong uStack_138;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [3];
  undefined1 uStack_ad;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined2 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar14 = param_4;
  func_0x00010bf529e0();
  if ((uVar14 == 0) && (puVar12 = param_5, func_0x00010bf529e0(), puVar12 == (undefined *)0x0)) {
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar14 = param_4;
    func_0x00010bf529e0();
    if ((uVar14 == 0) && (puVar12 = param_5, func_0x00010bf529e0(), puVar12 == (undefined *)0x1)) {
      puVar12 = param_5;
      func_0x00010c0dfd40(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar12;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      if (param_6 == 0) {
        puVar10 = puVar5;
        _UIImagePNGRepresentation(puVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar10 = PTR_PTR_1126b9658;
        func_0x00010bf92f60(param_1,PTR_PTR_1126b9658);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar12 = PTR_PTR_1126bd018;
      _objc_alloc(PTR_PTR_1126bd018);
      func_0x00010c01c620();
      _objc_release(puVar10);
      _objc_release(puVar5);
    }
    else {
      if ((bRam00000001136bd6e0 & 1) == 0) {
        iVar4 = 0x136bd6e0;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          ___cxa_guard_release(0x1136bd6e0);
        }
      }
      ppuStack_f8 = &PTR_PTR_1130f3028;
      uStack_f0 = 0;
      uStack_e8 = 0x400;
      uStack_a8 = 0;
      uStack_a0 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
      lStack_c8 = 0;
      lStack_d0 = 0;
      lStack_b8 = 0;
      lStack_c0 = 0;
      _auStack_b0 = 0;
      uStack_98 = 0;
      lStack_90 = 1;
      uStack_88 = 0x100;
      uStack_80 = 0;
      lVar6 = 0x80;
      __Znwm();
      lStack_b8 = lVar6 + 0x80;
      lStack_c8 = lVar6;
      lStack_c0 = lVar6;
      FUN_1056c5718(&uStack_a8,0x10);
      lStack_110 = 0;
      lStack_108 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      lStack_120 = 0;
      uStack_118 = 0;
      uStack_12c = 0;
      uVar14 = param_4;
      func_0x00010bf529e0();
      if (uVar14 != 0) {
        func_0x00010bdc7b60(param_1,PTR_PTR_1126bd008);
      }
      puVar12 = param_5;
      func_0x00010bf529e0();
      if (puVar12 != (undefined *)0x0) {
        func_0x00010bdc7b60(param_1,PTR_PTR_1126bd008);
      }
      uVar14 = param_4;
      func_0x00010bf529e0();
      if (uVar14 < 2) {
        puVar12 = param_5;
        func_0x00010bf529e0(param_5);
        bVar11 = (undefined *)0x1 < puVar12;
      }
      else {
        bVar11 = true;
      }
      lVar1 = lStack_108;
      lVar6 = lStack_110;
      uVar14 = lStack_108 - lStack_110;
      lVar13 = (long)uVar14 >> 2;
      FUN_1056c6148(&ppuStack_f8,lVar13,4);
      if (lVar1 != lVar6) {
        do {
          iVar4 = *(int *)(lVar6 + -4 + lVar13 * 4);
          FUN_1056c596c(&ppuStack_f8,4);
          func_0x0001056c5910(&ppuStack_f8,
                              ((((int)uStack_e0 - (int)lStack_d0) + (int)lStack_d8) - iVar4) + 4);
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      auStack_b0 = (undefined1  [3])CONCAT12(0,auStack_b0._0_2_);
      pppuVar7 = &ppuStack_f8;
      func_0x0001056c5910(pppuVar7,uVar14 >> 2);
      lVar1 = lStack_120;
      lVar6 = lStack_128;
      uVar14 = lStack_120 - lStack_128;
      lVar13 = (long)uVar14 >> 2;
      FUN_1056c6148(&ppuStack_f8,lVar13,4);
      if (lVar1 != lVar6) {
        do {
          iVar4 = *(int *)(lVar6 + -4 + lVar13 * 4);
          FUN_1056c596c(&ppuStack_f8,4);
          func_0x0001056c5910(&ppuStack_f8,
                              ((((int)uStack_e0 - (int)lStack_d0) + (int)lStack_d8) - iVar4) + 4);
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      auStack_b0 = (undefined1  [3])CONCAT12(0,auStack_b0._0_2_);
      pppuVar8 = &ppuStack_f8;
      func_0x0001056c5910(pppuVar8,uVar14 >> 2);
      FUN_1056c6148(&ppuStack_f8,0,4);
      auStack_b0 = (undefined1  [3])CONCAT12(0,auStack_b0._0_2_);
      pppuVar9 = &ppuStack_f8;
      func_0x0001056c5910(pppuVar9,0);
      auStack_b0 = (undefined1  [3])CONCAT12(1,auStack_b0._0_2_);
      iVar3 = (int)lStack_d0;
      iVar4 = (int)uStack_e0;
      iVar2 = (int)lStack_d8;
      if ((int)pppuVar9 != 0) {
        FUN_1056c596c(&ppuStack_f8,4);
        func_0x0001056c58b4(&ppuStack_f8,10,
                            ((((int)uStack_e0 - (int)lStack_d0) + (int)lStack_d8) - (int)pppuVar9) +
                            4);
      }
      if ((int)pppuVar8 != 0) {
        FUN_1056c596c(&ppuStack_f8,4);
        func_0x0001056c58b4(&ppuStack_f8,8,
                            ((((int)uStack_e0 - (int)lStack_d0) + (int)lStack_d8) - (int)pppuVar8) +
                            4);
      }
      if ((int)pppuVar7 != 0) {
        FUN_1056c596c(&ppuStack_f8,4);
        func_0x0001056c58b4(&ppuStack_f8,6,
                            ((((int)uStack_e0 - (int)lStack_d0) + (int)lStack_d8) - (int)pppuVar7) +
                            4);
      }
      FUN_1056c5b78(&ppuStack_f8,4,bVar11);
      pppuVar7 = &ppuStack_f8;
      FUN_1056c5c30(pppuVar7,(iVar4 - iVar3) + iVar2);
      FUN_1056c59a0(&ppuStack_f8,
                    -(ulong)(uint)(((int)uStack_e0 - (int)lStack_d0) + (int)lStack_d8) - 8 &
                    lStack_90 - 1U);
      if ((ulong)(lStack_d0 - lStack_d8) < 4) {
        FUN_1056c5a08(&ppuStack_f8,4);
      }
      *(undefined4 *)(lStack_d0 + -4) = 0x464f4353;
      lStack_d0 = lStack_d0 + -4;
      FUN_1056c596c(&ppuStack_f8,4);
      func_0x0001056c5910(&ppuStack_f8,
                          ((((int)uStack_e0 - (int)lStack_d0) + (int)lStack_d8) - (int)pppuVar7) + 4
                         );
      _auStack_b0 = CONCAT13(1,auStack_b0);
      puVar12 = PTR_PTR_1126bd020;
      _objc_alloc(PTR_PTR_1126bd020);
      uStack_138 = (ulong)(uint)(((int)uStack_e0 + (int)lStack_d8) - (int)lStack_d0);
      ppuStack_160 = ppuStack_f8;
      uStack_158 = uStack_f0;
      lStack_150 = lStack_d8;
      uStack_148 = uStack_e0;
      lStack_140 = lStack_d0;
      ppuStack_f8 = (undefined **)0x0;
      uStack_f0 = 0;
      lStack_d8 = 0;
      lStack_d0 = 0;
      uStack_e0 = 0;
      func_0x00010c032940();
      FUN_1056c3eb4(&ppuStack_160);
      if (lStack_128 != 0) {
        lStack_120 = lStack_128;
        __ZdlPv();
      }
      if (lStack_110 != 0) {
        lStack_108 = lStack_110;
        __ZdlPv();
      }
      FUN_1056c5e50(&ppuStack_f8);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1056c459c; end: 1056c4ef3; +[SCOverlayFormat _addOverlayArrayToCanvasAndEmbeddables:overlayType:flatBufferBuilder:canvas:embeddables:embeddableID:useWebP:webPQuality:] */

void FUN_1056c459c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined4 param_6,long param_7,long *param_8,long *param_9,int *param_10,
                  char param_11)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ushort uVar16;
  ulong uVar17;
  long lVar18;
  undefined4 *puVar19;
  long lVar20;
  long lVar21;
  undefined4 *puVar22;
  long lVar23;
  undefined *puVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 *puStack_178;
  undefined4 *puStack_160;
  undefined4 *puStack_158;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  dVar25 = 0.0;
  _objc_retain(param_5);
  lVar21 = param_5;
  func_0x00010bf52a60();
  lVar18 = lRam0000000000000000;
  if (lVar21 == 0) {
    puStack_158 = (undefined4 *)0x0;
    puStack_178 = (undefined4 *)0x0;
  }
  else {
    puStack_160 = (undefined4 *)0x0;
    puStack_158 = (undefined4 *)0x0;
    puStack_178 = (undefined4 *)0x0;
    do {
      lVar23 = 0;
      do {
        if (lRam0000000000000000 != lVar18) {
          _objc_enumerationMutation(param_5);
        }
        puVar24 = *(undefined **)(lVar23 * 8);
        iVar2 = *param_10;
        *param_10 = iVar2 + 1;
        puVar8 = PTR_PTR_1126b9658;
        puVar7 = puVar24;
        if (param_11 == '\0') {
          func_0x00010bfe6ac0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          _UIImagePNGRepresentation();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bfe6ac0(puVar24);
          _objc_retainAutoreleasedReturnValue();
          dVar25 = param_1;
          func_0x00010bf92f60();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar7);
        _objc_retainAutorelease(puVar8);
        puVar7 = puVar8;
        func_0x00010bf25f00(puVar8);
        puVar9 = puVar8;
        func_0x00010c08fa60();
        FUN_1056c6148(param_7,puVar9,1);
        lVar14 = *(long *)(param_7 + 0x28);
        if ((undefined *)(lVar14 - *(long *)(param_7 + 0x20)) < puVar9) {
          FUN_1056c5a08(param_7,puVar9);
          lVar14 = *(long *)(param_7 + 0x28);
        }
        *(long *)(param_7 + 0x28) = lVar14 - (long)puVar9;
        _memcpy(lVar14 - (long)puVar9,puVar7,puVar9);
        *(undefined1 *)(param_7 + 0x4a) = 0;
        lVar14 = param_7;
        func_0x0001056c5910(param_7,puVar9);
        *(undefined1 *)(param_7 + 0x4a) = 1;
        iVar3 = *(int *)(param_7 + 0x18);
        iVar4 = *(int *)(param_7 + 0x28);
        iVar5 = *(int *)(param_7 + 0x20);
        if ((int)lVar14 != 0) {
          FUN_1056c596c(param_7,4);
          func_0x0001056c58b4(param_7,6,
                              (((*(int *)(param_7 + 0x18) - *(int *)(param_7 + 0x28)) +
                               *(int *)(param_7 + 0x20)) - (int)lVar14) + 4);
        }
        FUN_1056c5b78(param_7,4,iVar2);
        lVar14 = param_7;
        FUN_1056c5c30(param_7,(iVar3 - iVar4) + iVar5);
        puVar19 = (undefined4 *)param_9[1];
        if (puVar19 < (undefined4 *)param_9[2]) {
          puVar22 = puVar19 + 1;
          *puVar19 = (int)lVar14;
        }
        else {
          lVar11 = *param_9;
          lVar20 = (long)puVar19 - lVar11;
          uVar1 = (lVar20 >> 2) + 1;
          if (uVar1 >> 0x3e != 0) {
            func_0x0001056c5ee0();
            goto LAB_1056c4dd0;
          }
          uVar15 = param_9[2] - lVar11;
          uVar17 = (long)uVar15 >> 1;
          if (uVar17 <= uVar1) {
            uVar17 = uVar1;
          }
          if (0x7ffffffffffffffb < uVar15) {
            uVar17 = 0x3fffffffffffffff;
          }
          if (uVar17 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_1056c4dd0;
          }
          lVar10 = uVar17 << 2;
          __Znwm();
          puVar19 = (undefined4 *)(lVar10 + lVar20);
          puVar22 = puVar19 + 1;
          *puVar19 = (int)lVar14;
          _memcpy(puVar19 + -(lVar20 >> 2),lVar11,lVar20);
          *param_9 = (long)(puVar19 + -(lVar20 >> 2));
          param_9[1] = (long)puVar22;
          param_9[2] = lVar10 + uVar17 * 4;
          if (lVar11 != 0) {
            __ZdlPv(lVar11);
          }
        }
        param_9[1] = (long)puVar22;
        func_0x00010c268120(puVar24);
        *(undefined1 *)(param_7 + 0x4a) = 1;
        iVar3 = *(int *)(param_7 + 0x18);
        iVar4 = *(int *)(param_7 + 0x28);
        iVar5 = *(int *)(param_7 + 0x20);
        FUN_1056c5b78(param_7,6,puVar24);
        FUN_1056c5b78(param_7,4,iVar2);
        lVar14 = param_7;
        FUN_1056c5c30(param_7,(iVar3 - iVar4) + iVar5);
        if (puStack_158 < puStack_160) {
          *puStack_158 = (int)lVar14;
          puVar19 = puStack_178;
        }
        else {
          lVar20 = (long)puStack_158 - (long)puStack_178;
          uVar1 = (lVar20 >> 2) + 1;
          if (uVar1 >> 0x3e != 0) {
            func_0x0001056c5ef4();
            goto LAB_1056c4dd0;
          }
          uVar17 = (long)puStack_160 - (long)puStack_178 >> 1;
          if (uVar17 <= uVar1) {
            uVar17 = uVar1;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puStack_160 - (long)puStack_178)) {
            uVar17 = 0x3fffffffffffffff;
          }
          if (uVar17 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_1056c4dd0;
          }
          lVar11 = uVar17 << 2;
          __Znwm();
          puStack_158 = (undefined4 *)(lVar11 + lVar20);
          puStack_160 = (undefined4 *)(lVar11 + uVar17 * 4);
          puVar19 = puStack_158 + -(lVar20 >> 2);
          *puStack_158 = (int)lVar14;
          _memcpy(puVar19,puStack_178,lVar20);
          if (puStack_178 != (undefined4 *)0x0) {
            __ZdlPv(puStack_178);
          }
        }
        puStack_178 = puVar19;
        puStack_158 = puStack_158 + 1;
        _objc_release(puVar8);
        lVar23 = lVar23 + 1;
      } while (lVar21 != lVar23);
      lVar21 = param_5;
      func_0x00010bf52a60();
    } while (lVar21 != 0);
  }
  _objc_release(param_5);
  lVar18 = param_5;
  func_0x00010c0dfd40(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar18;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  lVar23 = param_5;
  dVar26 = dVar25;
  func_0x00010c0dfd40(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar23;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  lVar20 = param_5;
  dVar27 = dVar26;
  func_0x00010c0dfd40(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar20;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  lVar10 = param_5;
  func_0x00010c0dfd40(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar10;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar11);
  _objc_release(lVar20);
  _objc_release(lVar14);
  _objc_release(lVar23);
  _objc_release(lVar21);
  _objc_release(lVar18);
  lVar18 = (long)puStack_158 - (long)puStack_178 >> 2;
  FUN_1056c6148(param_7,lVar18,4);
  if (puStack_158 != puStack_178) {
    lVar18 = lVar18 + -1;
    do {
      iVar2 = puStack_178[lVar18];
      FUN_1056c596c(param_7,4);
      func_0x0001056c5910(param_7,(((*(int *)(param_7 + 0x18) - *(int *)(param_7 + 0x28)) +
                                   *(int *)(param_7 + 0x20)) - iVar2) + 4);
      lVar18 = lVar18 + -1;
    } while (lVar18 != -1);
  }
  *(undefined1 *)(param_7 + 0x4a) = 0;
  lVar18 = param_7;
  func_0x0001056c5910(param_7,(ulong)((long)puStack_158 - (long)puStack_178) >> 2);
  *(undefined1 *)(param_7 + 0x4a) = 1;
  iVar2 = *(int *)(param_7 + 0x18);
  iVar3 = *(int *)(param_7 + 0x28);
  iVar4 = *(int *)(param_7 + 0x20);
  if ((int)lVar18 != 0) {
    FUN_1056c596c(param_7,4);
    func_0x0001056c58b4(param_7,0xc,
                        (((*(int *)(param_7 + 0x18) - *(int *)(param_7 + 0x28)) +
                         *(int *)(param_7 + 0x20)) - (int)lVar18) + 4);
  }
  FUN_1056c596c(param_7,4);
  lVar18 = *(long *)(param_7 + 0x28);
  if ((ulong)(lVar18 - *(long *)(param_7 + 0x20)) < 8) {
    FUN_1056c5a08(param_7,8);
    lVar18 = *(long *)(param_7 + 0x28);
  }
  *(long *)(param_7 + 0x28) = lVar18 + -8;
  *(ulong *)(lVar18 + -8) = CONCAT44((int)(param_2 * dVar27),(int)(dVar25 * dVar26));
  FUN_1056c5aa4(param_7 + 0x30,
                (ulong)(uint)((*(int *)(param_7 + 0x18) - *(int *)(param_7 + 0x28)) +
                             *(int *)(param_7 + 0x20)) | 0x800000000);
  uVar16 = *(ushort *)(param_7 + 0x48);
  if (uVar16 < 9) {
    uVar16 = 8;
  }
  *(ushort *)(param_7 + 0x48) = uVar16;
  FUN_1056c5b78(param_7,4,param_6);
  if (*(char *)(param_7 + 0x70) == '\x01') {
    FUN_1056c596c(param_7,1);
    lVar18 = *(long *)(param_7 + 0x28);
    if (lVar18 == *(long *)(param_7 + 0x20)) {
      FUN_1056c5a08(param_7,1);
      lVar18 = *(long *)(param_7 + 0x28);
    }
    *(long *)(param_7 + 0x28) = lVar18 + -1;
    *(undefined1 *)(lVar18 + -1) = 0;
    FUN_1056c5aa4(param_7 + 0x30,
                  (ulong)(uint)((*(int *)(param_7 + 0x18) - *(int *)(param_7 + 0x28)) +
                               *(int *)(param_7 + 0x20)) | 0x600000000);
    uVar16 = *(ushort *)(param_7 + 0x48);
    if (uVar16 < 7) {
      uVar16 = 6;
    }
    *(ushort *)(param_7 + 0x48) = uVar16;
  }
  FUN_1056c5c30(param_7,(iVar2 - iVar3) + iVar4);
  puVar19 = (undefined4 *)param_8[1];
  if (puVar19 < (undefined4 *)param_8[2]) {
    puVar22 = puVar19 + 1;
    *puVar19 = (int)param_7;
LAB_1056c4d44:
    param_8[1] = (long)puVar22;
    if (puStack_178 != (undefined4 *)0x0) {
      __ZdlPv();
    }
    _objc_release(param_5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar18 = *param_8;
    lVar21 = (long)puVar19 - lVar18;
    uVar1 = (lVar21 >> 2) + 1;
    if (uVar1 >> 0x3e == 0) {
      uVar15 = param_8[2] - lVar18;
      uVar17 = (long)uVar15 >> 1;
      if (uVar17 <= uVar1) {
        uVar17 = uVar1;
      }
      if (0x7ffffffffffffffb < uVar15) {
        uVar17 = 0x3fffffffffffffff;
      }
      if (uVar17 >> 0x3e != 0) {
        func_0x000104bd35f4();
        goto LAB_1056c4dd0;
      }
      lVar23 = uVar17 << 2;
      __Znwm();
      puVar19 = (undefined4 *)(lVar23 + lVar21);
      puVar22 = puVar19 + 1;
      *puVar19 = (int)param_7;
      _memcpy(puVar19 + -(lVar21 >> 2),lVar18,lVar21);
      *param_8 = (long)(puVar19 + -(lVar21 >> 2));
      param_8[1] = (long)puVar22;
      param_8[2] = lVar23 + uVar17 * 4;
      if (lVar18 != 0) {
        __ZdlPv(lVar18);
      }
      goto LAB_1056c4d44;
    }
  }
  func_0x0001056c5f08();
LAB_1056c4dd0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1056c4dd4);
  (*pcVar6)();
}



/* Entry: 1056c4ef4; end: 1056c5673; -[SCOverlayFormat overlayFormatWithBlob:error:] */

void FUN_1056c4ef4(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 *param_4)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int *piVar11;
  uint **ppuVar12;
  int *piVar13;
  undefined *puVar14;
  ushort *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ushort uVar24;
  ulong uVar25;
  uint *puStack_88;
  uint *puStack_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar8 = param_3;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  puVar9 = param_3;
  func_0x00010c08fa60();
  puStack_80 = (uint *)((long)puVar8 + (long)puVar9);
  uStack_70 = 0xf424000000000;
  iStack_78 = 0;
  uStack_74 = 0x40;
  puStack_88 = puVar8;
  if ((uint *)0x7 < puVar9) {
    puVar10 = puVar8 + 1;
    _strncmp(puVar10,&UNK_10f2e82d1,4);
    if ((((int)puVar10 == 0) && (3 < (long)puVar9)) && (uVar23 = (ulong)*puVar8, *puVar8 != 0)) {
      piVar1 = (int *)((long)puVar8 + uVar23);
      piVar11 = piVar1;
      FUN_1056c5f1c(piVar1,&puStack_88);
      puVar10 = puStack_80;
      puVar9 = puStack_88;
      if ((int)piVar11 != 0) {
        lVar21 = -(long)*piVar1;
        puVar15 = (ushort *)((long)piVar1 - (long)*piVar1);
        if (*puVar15 < 5) {
LAB_1056c5314:
          uVar24 = *(ushort *)((long)piVar1 + lVar21);
          if (uVar24 < 9) {
LAB_1056c55bc:
            lVar21 = 0;
LAB_1056c55c0:
            ppuVar12 = &puStack_88;
            FUN_1056c5f9c(ppuVar12,lVar21);
            if ((int)ppuVar12 != 0) {
              puVar14 = PTR_PTR_1126bd020;
              _objc_alloc();
              func_0x00010c008240();
              puVar20 = puVar14;
              func_0x00010c298be0();
              if ((int)puVar20 < 2) {
                _objc_retain(puVar14);
                puVar20 = puVar14;
              }
              else if (param_4 == (undefined8 *)0x0) {
                puVar20 = (undefined *)0x0;
              }
              else {
                puVar20 = PTR__OBJC_CLASS___NSError_1126ae858;
                func_0x00010bf99240();
                _objc_retainAutoreleasedReturnValue();
                _objc_autorelease();
                *param_4 = puVar20;
                puVar20 = (undefined *)0x0;
              }
              _objc_release(puVar14);
              goto LAB_1056c5590;
            }
          }
          else {
            uVar16 = (ulong)((ushort *)((long)piVar1 + lVar21))[4];
            if (uVar16 == 0) {
LAB_1056c54d0:
              if ((uVar24 < 0xb) ||
                 (uVar23 = (ulong)*(ushort *)((long)piVar1 + lVar21 + 10), uVar23 == 0))
              goto LAB_1056c55bc;
              if ((3 < (ulong)((long)puVar10 - (long)puVar9)) &&
                 (((puVar8 = (uint *)((long)piVar1 + uVar23), puVar9 <= puVar8 &&
                   (puVar8 <= puVar10 + -1)) && (*puVar8 != 0)))) {
                ppuVar12 = &puStack_88;
                FUN_1056c60c8(ppuVar12,(long)puVar8 + (ulong)*puVar8,4,auStack_68);
                if ((int)ppuVar12 != 0) {
                  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
                     (uVar23 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar23 == 0))
                  goto LAB_1056c55bc;
                  puVar8 = (uint *)((long)piVar1 + uVar23);
                  lVar21 = (long)puVar8 + (ulong)*puVar8;
                  goto LAB_1056c55c0;
                }
              }
            }
            else if (((3 < (ulong)((long)puVar10 - (long)puVar9)) &&
                     (puVar2 = (uint *)((long)piVar1 + uVar16),
                     puVar9 <= puVar2 && puVar2 <= puVar10 + -1)) && (*puVar2 != 0)) {
              ppuVar12 = &puStack_88;
              FUN_1056c60c8(ppuVar12,(long)puVar2 + (ulong)*puVar2,4,auStack_68);
              if ((int)ppuVar12 != 0) {
                puVar15 = (ushort *)((long)piVar1 - (long)*piVar1);
                uVar24 = *puVar15;
                if (uVar24 < 9) goto LAB_1056c55bc;
                lVar21 = -(long)*piVar1;
                uVar16 = (ulong)puVar15[4];
                if (uVar16 != 0) {
                  uVar18 = (ulong)*(uint *)((long)piVar1 + uVar16);
                  uVar5 = *(uint *)((long)((long)piVar1 + uVar16) + uVar18);
                  if (uVar5 != 0) {
                    lVar22 = 0;
                    lVar3 = uVar23 + uVar18 + uVar16;
                    do {
                      lVar7 = lVar22 + lVar3;
                      uVar23 = (ulong)*(uint *)((long)puVar8 + lVar7 + 4);
                      lVar17 = (long)puVar8 + uVar23 + lVar7 + 4;
                      FUN_1056c5f1c(lVar17,&puStack_88);
                      if ((int)lVar17 == 0) goto LAB_1056c4f5c;
                      lVar17 = uVar23 - (long)*(int *)((long)puVar8 + uVar23 + lVar7 + 4);
                      uVar6 = *(ushort *)((long)puVar8 + lVar17 + lVar7 + 4);
                      if (4 < uVar6) {
                        uVar16 = (ulong)*(ushort *)((long)puVar8 + lVar17 + lVar22 + lVar3 + 8);
                        if ((uVar16 != 0) &&
                           (puVar9 = (uint *)((long)puVar8 + uVar23 + uVar16 + lVar22 + lVar3 + 4),
                           (puVar9 < puStack_88 || (ulong)((long)puStack_80 - (long)puStack_88) < 4)
                           || puStack_80 + -1 < puVar9)) goto LAB_1056c4f5c;
                        if (6 < uVar6) {
                          uVar16 = (ulong)*(ushort *)((long)puVar8 + lVar17 + lVar22 + lVar3 + 10);
                          if (uVar16 != 0) {
                            if ((ulong)((long)puStack_80 - (long)puStack_88) < 4)
                            goto LAB_1056c4f5c;
                            lVar17 = uVar23 + uVar16 + lVar22 + lVar3;
                            puVar9 = (uint *)((long)puVar8 + lVar17 + 4);
                            if (puVar9 < puStack_88 || puStack_80 + -1 < puVar9) goto LAB_1056c4f5c;
                            uVar4 = *(uint *)((long)puVar8 + lVar17 + 4);
                            lVar17 = uVar23 + uVar16 + (ulong)uVar4 + lVar22 + lVar3;
                            puVar9 = (uint *)((long)puVar8 + lVar17 + 4);
                            if ((((uVar4 == 0 || puVar9 < puStack_88) || puStack_80 + -1 < puVar9)
                                || (uVar4 = *(uint *)((long)puVar8 + lVar17 + 4), 0x7ffffffe < uVar4
                                   )) || ((ulong)((long)puStack_80 - (long)puStack_88) <
                                          (ulong)uVar4 + 4 ||
                                          (uint *)((long)puStack_80 + (-4 - (ulong)uVar4)) < puVar9)
                               ) goto LAB_1056c4f5c;
                          }
                        }
                      }
                      iStack_78 = iStack_78 + -1;
                      lVar22 = lVar22 + 4;
                      puVar9 = puStack_88;
                      puVar10 = puStack_80;
                    } while ((ulong)uVar5 << 2 != lVar22);
                  }
                }
                goto LAB_1056c54d0;
              }
            }
          }
        }
        else if (((ulong)puVar15[2] == 0) ||
                (puVar2 = (uint *)((long)piVar1 + (ulong)puVar15[2]),
                (puStack_88 <= puVar2 && 3 < (ulong)((long)puStack_80 - (long)puStack_88)) &&
                puVar2 <= puStack_80 + -1)) {
          if ((*puVar15 < 7) || ((ulong)puVar15[3] == 0)) goto LAB_1056c5314;
          if (((3 < (ulong)((long)puStack_80 - (long)puStack_88)) &&
              (puVar2 = (uint *)((long)piVar1 + (ulong)puVar15[3]),
              puStack_88 <= puVar2 && puVar2 <= puStack_80 + -1)) && (*puVar2 != 0)) {
            ppuVar12 = &puStack_88;
            FUN_1056c60c8(ppuVar12,(long)puVar2 + (ulong)*puVar2,4,auStack_68);
            if ((int)ppuVar12 != 0) {
              lVar21 = -(long)*piVar1;
              puVar15 = (ushort *)((long)piVar1 - (long)*piVar1);
              if ((6 < *puVar15) && (uVar16 = (ulong)puVar15[3], uVar16 != 0)) {
                uVar18 = (ulong)*(uint *)((long)piVar1 + uVar16);
                puVar2 = (uint *)((long)((long)piVar1 + uVar16) + uVar18);
                if (*puVar2 != 0) {
                  uVar25 = 0;
                  lVar21 = (long)puVar8 + uVar18 + uVar16 + uVar23 + 8;
                  do {
                    uVar16 = (ulong)puVar2[uVar25 + 1];
                    piVar11 = (int *)((long)(puVar2 + uVar25 + 1) + uVar16);
                    piVar13 = piVar11;
                    FUN_1056c5f1c(piVar11,&puStack_88);
                    if ((int)piVar13 == 0) goto LAB_1056c4f5c;
                    puVar15 = (ushort *)((long)piVar11 - (long)*piVar11);
                    uVar24 = *puVar15;
                    if (4 < uVar24) {
                      if (((ulong)puVar15[2] != 0) &&
                         (puVar9 = (uint *)((long)piVar11 + (ulong)puVar15[2]),
                         (puVar9 < puStack_88 || (ulong)((long)puStack_80 - (long)puStack_88) < 4)
                         || puStack_80 + -1 < puVar9)) goto LAB_1056c4f5c;
                      if (6 < uVar24) {
                        if (((ulong)puVar15[3] != 0) &&
                           (puVar9 = (uint *)((long)piVar11 + (ulong)puVar15[3]),
                           (puVar9 < puStack_88 || puStack_80 == puStack_88) ||
                           (uint *)((long)puStack_80 + -1) < puVar9)) goto LAB_1056c4f5c;
                        if (8 < uVar24) {
                          if (((ulong)puVar15[4] != 0) &&
                             (puVar9 = (uint *)((long)piVar11 + (ulong)puVar15[4]),
                             (puVar9 < puStack_88 ||
                             (ulong)((long)puStack_80 - (long)puStack_88) < 8) ||
                             puStack_80 + -2 < puVar9)) goto LAB_1056c4f5c;
                          if (10 < uVar24) {
                            if (((ulong)puVar15[5] != 0) &&
                               (puVar9 = (uint *)((long)piVar11 + (ulong)puVar15[5]),
                               (puVar9 < puStack_88 ||
                               (ulong)((long)puStack_80 - (long)puStack_88) < 8) ||
                               puStack_80 + -2 < puVar9)) goto LAB_1056c4f5c;
                            if ((0xc < uVar24) && ((ulong)puVar15[6] != 0)) {
                              if ((((ulong)((long)puStack_80 - (long)puStack_88) < 4) ||
                                  (puVar9 = (uint *)((long)piVar11 + (ulong)puVar15[6]),
                                  puVar9 < puStack_88 || puStack_80 + -1 < puVar9)) ||
                                 (*puVar9 == 0)) goto LAB_1056c4f5c;
                              ppuVar12 = &puStack_88;
                              FUN_1056c60c8(ppuVar12,(long)puVar9 + (ulong)*puVar9,4,auStack_68);
                              if ((int)ppuVar12 == 0) goto LAB_1056c4f5c;
                              if ((0xc < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
                                 (uVar18 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[6],
                                 uVar18 != 0)) {
                                uVar19 = (ulong)*(uint *)((long)piVar11 + uVar18);
                                uVar5 = *(uint *)((long)((long)piVar11 + uVar18) + uVar19);
                                if (uVar5 != 0) {
                                  lVar22 = 0;
                                  lVar3 = lVar21 + uVar16 + uVar19 + uVar18;
                                  do {
                                    uVar16 = (ulong)*(uint *)(lVar3 + lVar22);
                                    lVar17 = lVar3 + lVar22 + uVar16;
                                    FUN_1056c5f1c(lVar17,&puStack_88);
                                    if ((int)lVar17 == 0) goto LAB_1056c4f5c;
                                    lVar17 = uVar16 - (long)*(int *)(lVar3 + uVar16 + lVar22);
                                    uVar24 = *(ushort *)(lVar3 + lVar22 + lVar17);
                                    if (4 < uVar24) {
                                      uVar18 = (ulong)*(ushort *)(lVar3 + lVar22 + lVar17 + 4);
                                      if ((uVar18 != 0) &&
                                         (puVar9 = (uint *)(lVar3 + lVar22 + uVar16 + uVar18),
                                         (puVar9 < puStack_88 ||
                                         (ulong)((long)puStack_80 - (long)puStack_88) < 4) ||
                                         puStack_80 + -1 < puVar9)) goto LAB_1056c4f5c;
                                      if (6 < uVar24) {
                                        uVar18 = (ulong)*(ushort *)(lVar3 + lVar22 + lVar17 + 6);
                                        if ((uVar18 != 0) &&
                                           (puVar9 = (uint *)(lVar3 + lVar22 + uVar16 + uVar18),
                                           (puVar9 < puStack_88 ||
                                           (ulong)((long)puStack_80 - (long)puStack_88) < 4) ||
                                           puStack_80 + -1 < puVar9)) goto LAB_1056c4f5c;
                                      }
                                    }
                                    iStack_78 = iStack_78 + -1;
                                    lVar22 = lVar22 + 4;
                                  } while ((ulong)uVar5 << 2 != lVar22);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    iStack_78 = iStack_78 + -1;
                    uVar25 = uVar25 + 1;
                    lVar21 = lVar21 + 4;
                  } while (uVar25 < *puVar2);
                  lVar21 = -(long)*piVar1;
                  puVar9 = puStack_88;
                  puVar10 = puStack_80;
                }
              }
              goto LAB_1056c5314;
            }
          }
        }
      }
    }
  }
LAB_1056c4f5c:
  puVar8 = param_3;
  func_0x00010c105b00();
  if (((ulong)puVar8 & 0xfffffffffffffffe) == 2) {
    puVar20 = PTR_PTR_1126bd018;
    _objc_alloc(PTR_PTR_1126bd018);
    func_0x00010c01c620();
  }
  else if (param_4 == (undefined8 *)0x0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar20 = (undefined *)0x0;
    *param_4 = puVar14;
  }
LAB_1056c5590:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 1056c5674; end: 1056c56f7; +[SCOverlayFormat _isPNG:] */

bool FUN_1056c5674(undefined8 param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  
  _objc_retain(param_3);
  plVar2 = param_3;
  func_0x00010c08fa60();
  if (plVar2 < (long *)0x8) {
    bVar1 = false;
  }
  else {
    plVar2 = param_3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    bVar1 = *plVar2 == 0xa1a0a0d474e5089;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1056c56f8; end: 1056c56ff; -[SCOverlayFormat mediaOverlayImageForTag:] */

undefined8 FUN_1056c56f8(void)

{
  return 0;
}



/* Entry: 1056c5700; end: 1056c5707; -[SCOverlayFormat screenOverlayImageForTag:] */

undefined8 FUN_1056c5700(void)

{
  return 0;
}



/* Entry: 1056c5708; end: 1056c570f; -[SCOverlayFormat genericAssetDataOverlayForTag:] */

undefined8 FUN_1056c5708(void)

{
  return 0;
}



/* Entry: 1056c5710; end: 1056c5717; -[SCOverlayFormat blob] */

undefined8 FUN_1056c5710(void)

{
  return 0;
}



/* Entry: 1056c5718; end: 1056c57a3;  */

void FUN_1056c5718(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = param_1 + 2;
  lVar2 = *param_1;
  if ((ulong)(*plVar1 - lVar2 >> 2) < param_2) {
    if (param_2 >> 0x3e != 0) {
      FUN_105536fa8();
      return;
    }
    lVar3 = param_1[1];
    func_0x00010014b23c();
    lVar2 = (long)plVar1 + (lVar3 - lVar2);
    lVar4 = lVar2 - (param_1[1] - *param_1);
    _memcpy(lVar4);
    lVar3 = *param_1;
    *param_1 = lVar4;
    param_1[1] = lVar2;
    param_1[2] = (long)plVar1 + param_2 * 4;
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 1056c57a4; end: 1056c57c3;  */

void FUN_1056c57a4(void)

{
  return;
}



/* Entry: 1056c57c4; end: 1056c583f;  */

long * FUN_1056c57c4(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x10))(param_1,param_4);
  _memcpy((long)plVar1 + (param_4 - param_3),param_2,param_3);
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  return plVar1;
}



/* Entry: 1056c5840; end: 1056c5853;  */

long * FUN_1056c5840(void)

{
  long *plVar1;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (plVar1[4] != 0) {
    (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,plVar1[4],plVar1[3]);
  }
  if (((char)plVar1[1] == '\x01') && ((long *)*plVar1 != (long *)0x0)) {
    (**(code **)(*(long *)*plVar1 + 8))();
  }
  return plVar1;
}



/* Entry: 1056c5854; end: 1056c58b3;  */

long * FUN_1056c5854(long *param_1)

{
  if (param_1[4] != 0) {
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[4],param_1[3]);
  }
  if (((char)param_1[1] == '\x01') && ((long *)*param_1 != (long *)0x0)) {
    (**(code **)(*(long *)*param_1 + 8))();
  }
  return param_1;
}



/* Entry: 1056c58b4; end: 1056c596b;  */

void FUN_1056c58b4(ulong param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (((int)param_3 != 0) || (*(char *)(param_1 + 0x70) == '\x01')) {
    uVar2 = param_1;
    func_0x0001056c5910(param_1,param_3);
    FUN_1056c5aa4(param_1 + 0x30,uVar2 & 0xffffffff | (ulong)param_2 << 0x20);
    uVar1 = (uint)*(ushort *)(param_1 + 0x48);
    if (*(ushort *)(param_1 + 0x48) <= param_2) {
      uVar1 = param_2;
    }
    *(short *)(param_1 + 0x48) = (short)uVar1;
  }
  return;
}



/* Entry: 1056c596c; end: 1056c599f;  */

void FUN_1056c596c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(ulong *)(param_1 + 0x68) < param_2) {
    *(ulong *)(param_1 + 0x68) = param_2;
  }
  uVar2 = param_2 - 1 &
          -(ulong)(uint)((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x28)) +
                        *(int *)(param_1 + 0x20));
  if ((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) < uVar2) {
    FUN_1056c5a08(param_1,uVar2);
    lVar1 = *(long *)(param_1 + 0x28) - uVar2;
    *(long *)(param_1 + 0x28) = lVar1;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28) - uVar2;
    *(long *)(param_1 + 0x28) = lVar1;
    if (uVar2 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(lVar1,uVar2);
  return;
}



/* Entry: 1056c59a0; end: 1056c5a07;  */

void FUN_1056c59a0(long param_1,ulong param_2)

{
  long lVar1;
  
  if ((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) < param_2) {
    FUN_1056c5a08(param_1,param_2);
    lVar1 = *(long *)(param_1 + 0x28) - param_2;
    *(long *)(param_1 + 0x28) = lVar1;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28) - param_2;
    *(long *)(param_1 + 0x28) = lVar1;
    if (param_2 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(lVar1,param_2);
  return;
}



/* Entry: 1056c5a08; end: 1056c5aa3;  */

void FUN_1056c5a08(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = param_1[4];
  lVar2 = param_1[5];
  uVar5 = param_1[3];
  if (uVar5 == 0) {
    uVar4 = param_1[2];
  }
  else {
    uVar4 = uVar5 >> 1 & 0x7ffffffffffffff8;
  }
  if (param_2 <= uVar4) {
    param_2 = uVar4;
  }
  uVar4 = uVar5 + param_2 + 7 & 0xfffffffffffffff8;
  param_1[3] = uVar4;
  plVar3 = (long *)*param_1;
  if (lVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,uVar4);
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3,lVar1,uVar5);
  }
  param_1[4] = (long)plVar3;
  param_1[5] = (long)plVar3 + (param_1[3] - (ulong)(uint)(((int)uVar5 - (int)lVar2) + (int)lVar1));
  return;
}



/* Entry: 1056c5aa4; end: 1056c5b77;  */

void FUN_1056c5aa4(long *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  plVar4 = (long *)param_1[1];
  if (plVar4 < (long *)param_1[2]) {
    plVar9 = plVar4 + 1;
    *plVar4 = param_2;
LAB_1056c5b54:
    param_1[1] = (long)plVar9;
    return;
  }
  lVar7 = *param_1;
  lVar8 = (long)plVar4 - lVar7;
  uVar1 = (lVar8 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar5 = param_1[2] - lVar7;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 >> 0x3d == 0) {
      lVar3 = uVar6 << 3;
      __Znwm();
      plVar4 = (long *)(lVar3 + lVar8);
      plVar9 = plVar4 + 1;
      *plVar4 = param_2;
      _memcpy(plVar4 + -(lVar8 >> 3),lVar7,lVar8);
      *param_1 = (long)(plVar4 + -(lVar8 >> 3));
      param_1[1] = (long)plVar9;
      param_1[2] = lVar3 + uVar6 * 8;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
      }
      goto LAB_1056c5b54;
    }
  }
  else {
    FUN_1056c5840();
  }
  func_0x000104bd35f4();
  if (((int)param_3 != 0) || ((char)param_1[0xe] == '\x01')) {
    plVar4 = param_1;
    func_0x0001056c5bd4(param_1,param_3);
    FUN_1056c5aa4(param_1 + 6,(ulong)plVar4 & 0xffffffff | param_2 << 0x20);
    uVar2 = (uint)*(ushort *)(param_1 + 9);
    if ((uint)*(ushort *)(param_1 + 9) <= (uint)param_2) {
      uVar2 = (uint)param_2;
    }
    *(short *)(param_1 + 9) = (short)uVar2;
  }
  return;
}



/* Entry: 1056c5b78; end: 1056c5c2f;  */

void FUN_1056c5b78(ulong param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (((int)param_3 != 0) || (*(char *)(param_1 + 0x70) == '\x01')) {
    uVar2 = param_1;
    func_0x0001056c5bd4(param_1,param_3);
    FUN_1056c5aa4(param_1 + 0x30,uVar2 & 0xffffffff | (ulong)param_2 << 0x20);
    uVar1 = (uint)*(ushort *)(param_1 + 0x48);
    if (*(ushort *)(param_1 + 0x48) <= param_2) {
      uVar1 = param_2;
    }
    *(short *)(param_1 + 0x48) = (short)uVar1;
  }
  return;
}



/* Entry: 1056c5c30; end: 1056c5e4f;  */

long * FUN_1056c5c30(long *param_1,short param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  short sVar4;
  long *plVar5;
  short *psVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  short *psVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  
  plVar5 = param_1;
  func_0x0001056c5bd4(param_1,0);
  uVar17 = *(ushort *)(param_1 + 9) + 2 & 0xffff;
  if (uVar17 < 5) {
    uVar17 = 4;
  }
  uVar14 = (ulong)uVar17;
  *(short *)(param_1 + 9) = (short)uVar17;
  lVar8 = param_1[5];
  if ((ulong)(lVar8 - param_1[4]) < uVar14) {
    FUN_1056c5a08(param_1,uVar14);
    lVar8 = param_1[5];
  }
  param_1[5] = lVar8 - uVar14;
  _bzero(lVar8 - uVar14,uVar14);
  psVar12 = (short *)param_1[5];
  puVar2 = (undefined4 *)param_1[6];
  psVar12[1] = (short)plVar5 - param_2;
  *psVar12 = (short)param_1[9];
  puVar10 = (undefined4 *)param_1[7];
  for (puVar1 = puVar2; puVar1 != puVar10; puVar1 = puVar1 + 2) {
    *(short *)((long)psVar12 + (ulong)*(ushort *)(puVar1 + 1)) = (short)plVar5 - (short)*puVar1;
  }
  param_1[7] = (long)puVar2;
  *(undefined2 *)(param_1 + 9) = 0;
  lVar8 = param_1[3];
  lVar13 = param_1[4];
  uVar17 = ((int)lVar8 - (int)psVar12) + (int)lVar13;
  if ((*(byte *)((long)param_1 + 0x71) & 1) != 0) {
    puVar15 = (uint *)param_1[10];
    puVar16 = (uint *)param_1[0xb];
    if (puVar15 != puVar16) {
      sVar4 = *psVar12;
      do {
        uVar3 = *puVar15;
        psVar6 = (short *)((lVar13 + lVar8) - (ulong)uVar3);
        if ((sVar4 == *psVar6) && (_memcmp(psVar6,psVar12,sVar4), (int)psVar6 == 0)) {
          psVar12 = (short *)((long)psVar12 + (ulong)(uVar17 - (int)plVar5));
          param_1[5] = (long)psVar12;
          uVar17 = uVar3;
          break;
        }
        puVar15 = puVar15 + 1;
      } while (puVar15 != puVar16);
    }
  }
  if (uVar17 == ((int)lVar8 + (int)lVar13) - (int)psVar12) {
    plVar7 = param_1 + 0xc;
    puVar15 = (uint *)param_1[0xb];
    if (puVar15 < (uint *)*plVar7) {
      puVar16 = puVar15 + 1;
      *puVar15 = uVar17;
    }
    else {
      lVar8 = (long)puVar15 - param_1[10];
      uVar14 = (lVar8 >> 2) + 1;
      if (uVar14 >> 0x3e != 0) {
        FUN_105536fa8();
        lVar8 = plVar7[0xf];
        if (lVar8 != 0) {
          func_0x0001056c5ea8(*(undefined8 *)(lVar8 + 8));
          __ZdlPv(lVar8);
        }
        if (plVar7[10] != 0) {
          plVar7[0xb] = plVar7[10];
          __ZdlPv();
        }
        if (plVar7[6] != 0) {
          plVar7[7] = plVar7[6];
          __ZdlPv();
        }
        if (plVar7[4] != 0) {
          (**(code **)(*(long *)*plVar7 + 0x18))((long *)*plVar7,plVar7[4],plVar7[3]);
        }
        if (((char)plVar7[1] == '\x01') && ((long *)*plVar7 != (long *)0x0)) {
          (**(code **)(*(long *)*plVar7 + 8))();
        }
        return plVar7;
      }
      uVar9 = *plVar7 - param_1[10];
      uVar11 = (long)uVar9 >> 1;
      if (uVar11 <= uVar14) {
        uVar11 = uVar14;
      }
      if (0x7ffffffffffffffb < uVar9) {
        uVar11 = 0x3fffffffffffffff;
      }
      func_0x00010014b23c();
      puVar15 = (uint *)((long)plVar7 + lVar8);
      lVar13 = (long)puVar15 - (param_1[0xb] - param_1[10]);
      puVar16 = puVar15 + 1;
      *puVar15 = uVar17;
      _memcpy(lVar13);
      lVar8 = param_1[10];
      param_1[10] = lVar13;
      param_1[0xb] = (long)puVar16;
      param_1[0xc] = (long)plVar7 + uVar11 * 4;
      if (lVar8 != 0) {
        __ZdlPv();
      }
    }
    param_1[0xb] = (long)puVar16;
    lVar8 = param_1[3];
    lVar13 = param_1[4];
  }
  *(uint *)((lVar13 + lVar8) - ((ulong)plVar5 & 0xffffffff)) = uVar17 - (int)plVar5;
  *(undefined1 *)((long)param_1 + 0x4a) = 0;
  return plVar5;
}



/* Entry: 1056c5e50; end: 1056c5edf;  */

long * FUN_1056c5e50(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xf];
  if (lVar1 != 0) {
    func_0x0001056c5ea8(*(undefined8 *)(lVar1 + 8));
    __ZdlPv(lVar1);
  }
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[4] != 0) {
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[4],param_1[3]);
  }
  if (((char)param_1[1] == '\x01') && ((long *)*param_1 != (long *)0x0)) {
    (**(code **)(*(long *)*param_1 + 8))();
  }
  return param_1;
}



/* Entry: 1056c5ee0; end: 1056c5f1b;  */

bool FUN_1056c5ee0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  long lVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  
  func_0x000104bd47e8(&DAT_10f62a4d8);
  func_0x000104bd47e8(&DAT_10f62a4d8);
  puVar7 = (ushort *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  puVar3 = (ushort *)*param_2;
  lVar4 = param_2[1];
  if ((puVar3 <= puVar7 && 3 < (ulong)(lVar4 - (long)puVar3)) && puVar7 <= (ushort *)(lVar4 + -4)) {
    iVar6 = *(int *)puVar7;
    iVar1 = *(int *)(param_2 + 2);
    *(uint *)(param_2 + 2) = iVar1 + 1U;
    iVar2 = *(int *)(param_2 + 3);
    *(uint *)(param_2 + 3) = iVar2 + 1U;
    if ((((iVar1 + 1U <= *(uint *)((long)param_2 + 0x14) &&
           iVar2 + 1U <= *(uint *)((long)param_2 + 0x1c)) &&
         (puVar7 = (ushort *)((long)puVar7 - (long)iVar6),
         puVar3 <= puVar7 && puVar7 <= (ushort *)(lVar4 + -2))) &&
        (uVar5 = *puVar7, (uVar5 & 1) == 0)) && ((ulong)uVar5 <= (ulong)(lVar4 - (long)puVar3))) {
      return puVar7 <= (ushort *)(lVar4 - (ulong)uVar5);
    }
  }
  return false;
}



/* Entry: 1056c5f1c; end: 1056c5f9b;  */

bool FUN_1056c5f1c(ushort *param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uVar5;
  int iVar6;
  
  puVar3 = (ushort *)*param_2;
  uVar4 = param_2[1];
  if ((puVar3 <= param_1 && 3 < uVar4 - (long)puVar3) && param_1 <= (ushort *)(uVar4 - 4)) {
    iVar6 = *(int *)param_1;
    uVar1 = (int)param_2[2] + 1;
    *(uint *)(param_2 + 2) = uVar1;
    uVar2 = (int)param_2[3] + 1;
    *(uint *)(param_2 + 3) = uVar2;
    if ((((uVar1 <= *(uint *)((long)param_2 + 0x14) && uVar2 <= *(uint *)((long)param_2 + 0x1c)) &&
         (param_1 = (ushort *)((long)param_1 - (long)iVar6),
         puVar3 <= param_1 && param_1 <= (ushort *)(uVar4 - 2))) &&
        (uVar5 = *param_1, (uVar5 & 1) == 0)) && ((ulong)uVar5 <= uVar4 - (long)puVar3)) {
      return param_1 <= (ushort *)(uVar4 - uVar5);
    }
  }
  return false;
}



/* Entry: 1056c5f9c; end: 1056c60c7;  */

long FUN_1056c5f9c(ulong *param_1,uint *param_2)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 == (uint *)0x0) {
    return 1;
  }
  if (*param_2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      uVar6 = (ulong)*(uint *)((long)param_2 + lVar4 + 4);
      lVar2 = (long)param_2 + uVar6 + lVar4 + 4;
      FUN_1056c5f1c(lVar2,param_1);
      if ((int)lVar2 == 0) {
        return lVar2;
      }
      lVar2 = uVar6 - (long)*(int *)((long)param_2 + uVar6 + lVar4 + 4);
      uVar1 = *(ushort *)((long)param_2 + lVar2 + lVar4 + 4);
      if ((4 < uVar1) &&
         (((uVar3 = (ulong)*(ushort *)((long)param_2 + lVar2 + lVar4 + 8), uVar3 != 0 &&
           (uVar3 = (long)param_2 + uVar6 + uVar3 + lVar4 + 4,
           (uVar3 < *param_1 || param_1[1] - *param_1 < 4) || param_1[1] - 4 < uVar3)) ||
          ((6 < uVar1 &&
           ((uVar3 = (ulong)*(ushort *)((long)param_2 + lVar2 + lVar4 + 10), uVar3 != 0 &&
            (uVar6 = (long)param_2 + uVar6 + uVar3 + lVar4 + 4,
            (uVar6 < *param_1 || param_1[1] - *param_1 < 4) || param_1[1] - 4 < uVar6)))))))) {
        return 0;
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 4;
    } while (uVar5 < *param_2);
  }
  return 1;
}



/* Entry: 1056c60c8; end: 1056c6147;  */

bool FUN_1056c60c8(ulong *param_1,uint *param_2,long param_3,long *param_4)

{
  ulong uVar1;
  uint uVar2;
  
  if (((uint *)*param_1 <= param_2 && 3 < param_1[1] - (long)*param_1) &&
      param_2 <= (uint *)(param_1[1] - 4)) {
    uVar2 = 0;
    if ((uint)param_3 != 0) {
      uVar2 = 0x7fffffff / (uint)param_3;
    }
    if (*param_2 < uVar2) {
      param_3 = param_3 * (ulong)*param_2;
      uVar1 = param_3 + 4;
      *param_4 = (long)param_2 + uVar1;
      if (param_2 < (uint *)*param_1) {
        return false;
      }
      if (param_1[1] - (long)*param_1 < uVar1) {
        return false;
      }
      return param_2 <= (uint *)((param_1[1] - param_3) + -4);
    }
  }
  return false;
}



/* Entry: 1056c6148; end: 1056c61c3;  */

void FUN_1056c6148(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  *(undefined1 *)(param_1 + 0x4a) = 1;
  FUN_1056c59a0(param_1,*(int *)(param_1 + 0x28) -
                        (*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) +
                        (int)(param_3 * param_2)) & 3);
  uVar2 = param_3 - 1U &
          -(param_3 * param_2 +
           (ulong)(uint)((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x28)) +
                        *(int *)(param_1 + 0x20)));
  if ((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) < uVar2) {
    FUN_1056c5a08(param_1,uVar2);
    lVar1 = *(long *)(param_1 + 0x28) - uVar2;
    *(long *)(param_1 + 0x28) = lVar1;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28) - uVar2;
    *(long *)(param_1 + 0x28) = lVar1;
    if (uVar2 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(lVar1,uVar2);
  return;
}



/* Entry: 1056c61c4; end: 1056c620f;  */

void FUN_1056c61c4(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bd050;
    _objc_alloc_init(PTR_PTR_1126bd050);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056c6210; end: 1056c6313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c6210(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126bd058;
    _objc_alloc(PTR_PTR_1126bd058);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    lVar4 = lVar3 + _DAT_112727b58;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3 + _DAT_112727b5c;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010bf05fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c200(puVar8,param_2,uVar1,uVar2,uVar9,lVar5,lVar7,*(undefined8 *)(param_1 + 0x38)
                       );
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1056c6314; end: 1056c639f; -[SCFideliusClientInitEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c6314(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112727b68,0);
  _objc_storeStrong(param_1 + _DAT_112727b64,0);
  _objc_storeStrong(param_1 + _DAT_112727b60,0);
  _objc_destroyWeak(param_1 + _DAT_112727b5c);
  _objc_destroyWeak(param_1 + _DAT_112727b58);
  _objc_destroyWeak(param_1 + _DAT_112727b54);
  _objc_destroyWeak(param_1 + _DAT_112727b50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727b6c);
  return;
}



/* Entry: 1056c63a0; end: 1056c6597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c63a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfac480(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c085320();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfac480(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010bfded60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c0b44e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112727ba0));
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1056c6598; end: 1056c664f; -[SCFideliusServicesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c6598(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + _DAT_112727b70;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfac540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282720();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_112727ba0));
  puStack_48 = PTR_PTR_1126e9a80;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056c6650; end: 1056c6757; -[SCFideliusServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c6650(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112727bb0,0);
  _objc_storeStrong(param_1 + _DAT_112727bac,0);
  _objc_storeStrong(param_1 + _DAT_112727ba8,0);
  _objc_destroyWeak(param_1 + _DAT_112727b80);
  _objc_destroyWeak(param_1 + _DAT_112727bb4);
  _objc_destroyWeak(param_1 + _DAT_112727b74);
  _objc_destroyWeak(param_1 + _DAT_112727b90);
  _objc_destroyWeak(param_1 + _DAT_112727b8c);
  _objc_destroyWeak(param_1 + _DAT_112727b88);
  _objc_destroyWeak(param_1 + _DAT_112727b70);
  _objc_destroyWeak(param_1 + _DAT_112727b84);
  _objc_destroyWeak(param_1 + _DAT_112727b7c);
  _objc_destroyWeak(param_1 + _DAT_112727b78);
  _objc_destroyWeak(param_1 + _DAT_112727ba4);
  _objc_destroyWeak(param_1 + _DAT_112727b94);
  _objc_destroyWeak(param_1 + _DAT_112727b9c);
  _objc_destroyWeak(param_1 + _DAT_112727b98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112727ba0,0);
  return;
}



/* Entry: 1056c6758; end: 1056c67cf; -[SCFideliusUnauthenticatedEntryPoint begin] */

void FUN_1056c6758(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd038;
  func_0x00010bf3e280(PTR_PTR_1126bd038);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056c67d0; end: 1056c680b; -[SCFideliusUnauthenticatedEntryPoint end] */

void FUN_1056c67d0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e9a88;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056c680c; end: 1056c6867; +[SCFideliusUnauthenticatedEntryPoint attributedTask] */

void FUN_1056c680c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126bd0b0;
  func_0x00010bfac640(PTR_PTR_1126bd0b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149360(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056c6868; end: 1056c689f; -[SCFideliusUnauthenticatedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c6868(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727bbc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727bb8);
  return;
}



/* Entry: 1056c68a0; end: 1056c691f; -[SCDocObjectFideliusFriendMetadataCoordinator fideliusFriendMetadataWithUserId:] */

void FUN_1056c68a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bfac420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1056c6920; end: 1056c6923; -[SCDocObjectFideliusFriendMetadataCoordinator allFideliusFriendMetadata] */

void FUN_1056c6920(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfac430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fideliusFriendMetadataMap_1125c8ab0);
  return;
}



/* Entry: 1056c6924; end: 1056c6a53; -[SCDocObjectFideliusFriendMetadataCoordinator setFideliusFriendMetadata:completionQueue:completionHandler:] */

void FUN_1056c6924(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056c6a54; end: 1056c6a8b;  */

void FUN_1056c6a54(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea3f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056c6a8c; end: 1056c6bbb; -[SCDocObjectFideliusFriendMetadataCoordinator setFideliusFriendMetadatas:completionQueue:completionHandler:] */

void FUN_1056c6a8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056c6bbc; end: 1056c6c3b;  */

void FUN_1056c6bbc(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea3f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056c6c3c; end: 1056c6cdb; -[SCDocObjectFideliusFriendMetadataCoordinator _setFideliusFriendMetadata:completionQueue:completionHandler:] */

void FUN_1056c6c3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1056c6cdc;
  puStack_40 = &UNK_11085adb8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,param_4,param_5);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1056c6cdc; end: 1056c6cf3;  */

void FUN_1056c6cdc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    _objc_retain();
    func_0x00010af549a0(lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1056c6cf4; end: 1056c6d93; -[SCDocObjectFideliusFriendMetadataCoordinator _setFideliusFriendMetadatas:completionQueue:completionHandler:] */

void FUN_1056c6cf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1056c6d94;
  puStack_40 = &UNK_11085adb8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,param_4,param_5);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1056c6d94; end: 1056c6e9f;  */

void FUN_1056c6d94(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010af53be8(param_2,*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_2 + 0x30,0);
  _objc_storeStrong(param_2 + 0x28,0);
  _objc_storeStrong(param_2 + 0x20,0);
  _objc_storeStrong(param_2 + 0x18,0);
  _objc_storeStrong(param_2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
  return;
}



/* Entry: 1056c6ea0; end: 1056c6eff; -[SCDocObjectFideliusFriendMetadataCoordinator .cxx_destruct] */

void FUN_1056c6ea0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056c6f00; end: 1056c6fa3;  */

void FUN_1056c6f00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1d0640(puVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1056c6fa4; end: 1056c6fa7; -[SCDocObjectFideliusFriendMetadataObservableRepository didStartSnapchattersUpdateDataRequest:] */

void FUN_1056c6fa4(void)

{
  return;
}



/* Entry: 1056c6fa8; end: 1056c70cb; -[SCDocObjectFideliusFriendMetadataObservableRepository didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_1056c6fa8(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 != 0) {
    lVar1 = param_3;
    func_0x00010bf0aac0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(param_3);
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c0f7fc0(uVar3);
      _objc_destroyWeak(auStack_50);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1056c70cc; end: 1056c715b;  */

void FUN_1056c70cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf0a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bf0a620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      return;
    }
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be63820();
  }
  else {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be63780();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056c715c; end: 1056c722b; -[SCDocObjectFideliusFriendMetadataObservableRepository _nextAddSnapchatterDataRequest:] */

void FUN_1056c715c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfac420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf0aac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  FUN_1056c6f00(uVar4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b15e8;
  func_0x00010c2894a0(PTR_PTR_1126b15e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be63840(param_1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1056c722c; end: 1056c72ff; -[SCDocObjectFideliusFriendMetadataObservableRepository _nextDeleteSnapchatterDataRequest:] */

void FUN_1056c722c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfac420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = param_3;
  func_0x00010bf0aac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1056c6f00(uVar4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b15e8;
  func_0x00010c2894a0(PTR_PTR_1126b15e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be63840(param_1);
  _objc_release(puVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1056c7300; end: 1056c73d7; -[SCDocObjectFideliusFriendMetadataObservableRepository _nextFullStateFideliusFriendMetadataMap:snapchattersDataRequest:] */

void FUN_1056c7300(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f2e8584;
  func_0x0001000ba800(&UNK_10f2e8584);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    puVar3 = PTR_PTR_1126bd0b8;
    _objc_alloc(PTR_PTR_1126bd0b8);
    func_0x00010c00c700();
    func_0x00010c0d9840(uVar4,param_2,puVar3);
    _objc_release(puVar3);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056c73d8; end: 1056c7437; -[SCDocObjectFideliusFriendMetadataObservableRepository .cxx_destruct] */

void FUN_1056c73d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056c7438; end: 1056c7443; -[SCFeatureSettingsService isViewedSaturnPrivacySettingsAvailable] */

void FUN_1056c7438(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110df63d8);
  return;
}



/* Entry: 1056c7444; end: 1056c744f; -[SCFeatureSettingsService viewedSaturnPrivacySettingsServerParam] */

undefined ** FUN_1056c7444(void)

{
  return &PTR____CFConstantStringClassReference_110df63d8;
}



/* Entry: 1056c7450; end: 1056c745f; -[SCFeatureSettingsService setViewedSaturnPrivacySettings:] */

void FUN_1056c7450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110df63d8,param_3);
  return;
}



/* Entry: 1056c7460; end: 1056c7467; -[SCFeatureSettingsService viewed_saturn_privacy_settings_client_value:] */

undefined * FUN_1056c7460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1056c7468; end: 1056c746f; -[SCFeatureSettingsService viewed_saturn_privacy_settings_server_value:] */

void FUN_1056c7468(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1056c7470; end: 1056c747f; -[SCFeatureSettingsService viewedSaturnPrivacySettings] */

void FUN_1056c7470(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110df63d8,0);
  return;
}



/* Entry: 1056c7480; end: 1056c751b; -[SCPreRegistrationScope initWithDelegate:uiContainer:] */

undefined1 *
FUN_1056c7480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9aa0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056c751c; end: 1056c7533; -[SCPreRegistrationScope delegate] */

void FUN_1056c751c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056c7534; end: 1056c753b; -[SCPreRegistrationScope uiContainer] */

undefined8 FUN_1056c7534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1056c753c; end: 1056c7567; -[SCPreRegistrationScope .cxx_destruct] */

void FUN_1056c753c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1056c7568; end: 1056c75db; -[UNIDeviceStateReceiver initWithUnifiedGrpcService:] */

undefined1 * FUN_1056c7568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9aa8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056c75dc; end: 1056c76bf; -[UNIDeviceStateReceiver reportDeviceStateWithRequest:callOptionsBuilder:handler:] */

void FUN_1056c75dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bd0c0;
  _objc_opt_class(PTR_PTR_1126bd0c0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df63f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056c76c0; end: 1056c76cb; -[UNIDeviceStateReceiver .cxx_destruct] */

void FUN_1056c76c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056c76cc; end: 1056c7733; +[ReportDeviceStateRequest descriptor] */

void FUN_1056c76cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd6e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58100,
                        &PTR____CFConstantStringClassReference_110df6418,&PTR_DAT_1130f30f0,
                        &PTR_s_userId_1130f3128,3,0x20,0x1c);
    puRam00000001136bd6e8 = puVar1;
  }
  return;
}



/* Entry: 1056c7734; end: 1056c779b; +[ReportDeviceStateResponse descriptor] */

void FUN_1056c7734(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd6f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58150,
                        &PTR____CFConstantStringClassReference_110df6438,&PTR_DAT_1130f30f0,
                        &PTR_s_statusCode_1130f3108,1,0x10,0x1c);
    puRam00000001136bd6f0 = puVar1;
  }
  return;
}



/* Entry: 1056c779c; end: 1056c7813; -[SCUserSessionValidationCppListener initWithBlock:] */

undefined1 * FUN_1056c779c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9ab0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056c7814; end: 1056c782b; -[SCUserSessionValidationCppListener onResult:] */

void FUN_1056c7814(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001056c7824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 1056c782c; end: 1056c7837; -[SCUserSessionValidationCppListener .cxx_destruct] */

void FUN_1056c782c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056c7838; end: 1056c7a07; -[SCUserSessionValidationReporter initWithHttpMetadataService:httpRequestModifier:grapheneRegistry:snapTokenInternalManager:oneTapLoginRegistry:circumstanceEngine:userSessionDelegate:nativeValidationService:] */

undefined1 *
FUN_1056c7838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e9ab8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c293940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    puVar3 = &UNK_10f2e86b5;
    _dispatch_queue_create(&UNK_10f2e86b5,0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_9);
    *(undefined1 *)((long)puVar1 + 0x38) = 0;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056c7a08; end: 1056c7bc3; -[SCUserSessionValidationReporter validateSessionWithReferrer:logoutSource:onBeforeLogout:] */

void FUN_1056c7a08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar1 = PTR_PTR_1126b8670;
  func_0x00010bf10920(PTR_PTR_1126b8670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc34c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  uStack_60 = param_4;
  _objc_retain(param_5);
  _objc_retain(puVar1);
  func_0x00010bfc97a0(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1056c7bc4; end: 1056c7c1f;  */

void FUN_1056c7bc4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be902e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056c7c20; end: 1056c7d8f; -[SCUserSessionValidationReporter _reportSessionWithReferrer:logoutSource:onBeforeLogout:refreshToken:requestUrl:] */

void FUN_1056c7c20(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126bd0c8;
  _objc_retain(param_7);
  _objc_opt_new(puVar1);
  func_0x00010c1e9600();
  _objc_release(param_7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010af82634();
  func_0x00010c0df7c0(puVar2,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dace0(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _CACurrentMediaTime();
  if (*(long *)(param_2 + 0x50) != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010bf1f440(uVar4,param_3,&PTR____CFConstantStringClassReference_110df64d8,0,0);
    if ((int)uVar4 != 0) {
      func_0x00010bee7d20(param_1,param_2,param_3,puVar1,param_4,param_8,param_5,param_6);
      goto LAB_1056c7d58;
    }
  }
  func_0x00010bee7d40(param_1,param_2,param_3,puVar1,param_4,param_8,param_5,param_6);
LAB_1056c7d58:
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056c7d90; end: 1056c7fff; -[SCUserSessionValidationReporter _validateViaHttpWithRequest:startTime:referrer:requestUrl:logoutSource:onBeforeLogout:] */

void FUN_1056c7d90(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_8);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(param_6);
  func_0x00010bf63640(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf225e0(uVar11,param_3,1,param_6,0,param_4,&PTR___NSConcreteGlobalBlock_1108a89c8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  puVar1 = PTR_PTR_1126b7220;
  func_0x00010c135080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_3,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2af9a0(puVar1,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2b7240();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2b3680();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar9 = *(undefined8 *)(param_2 + 8);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1056c8004;
  puStack_a0 = &UNK_1108a89e8;
  lStack_98 = param_2;
  uStack_90 = param_5;
  uStack_88 = param_8;
  uStack_80 = param_1;
  uStack_78 = param_7;
  _objc_retain(param_8);
  _objc_retain(param_5);
  func_0x00010c25f600(uVar9,param_3,uVar11,puVar8,uVar10,&puStack_b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(puVar8);
  _objc_release(uVar11);
  return;
}



/* Entry: 1056c8000; end: 1056c8003;  */

void FUN_1056c8000(void)

{
  return;
}



/* Entry: 1056c8004; end: 1056c8047;  */

void FUN_1056c8004(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x00010be820a0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),param_2,
                      param_3,param_2,param_4,param_5,*(undefined8 *)(param_1 + 0x28),param_6,
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1056c8048; end: 1056c8207; -[SCUserSessionValidationReporter _validateViaCppWithRequest:startTime:referrer:requestUrl:logoutSource:onBeforeLogout:] */

void FUN_1056c8048(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = param_4;
  func_0x00010bf63640(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_2);
  puVar2 = PTR_PTR_1126bd0d0;
  _objc_alloc(PTR_PTR_1126bd0d0);
  _objc_copyWeak(auStack_90,auStack_78);
  uStack_88 = param_1;
  _objc_retain(param_5);
  uStack_80 = param_7;
  _objc_retain(param_8);
  _objc_retain(param_6);
  func_0x00010bff8d00(puVar2);
  func_0x00010c2967c0(*(undefined8 *)(param_2 + 0x50));
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1056c8208; end: 1056c831f;  */

void FUN_1056c8208(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1056c8320;
    puStack_80 = &UNK_1108a8a18;
    _objc_retain(param_2);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uStack_78 = param_2;
    lStack_70 = lVar1;
    _objc_retain(uVar3);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uStack_68 = uVar3;
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_58 = uVar4;
    _objc_retain(uVar3);
    uStack_60 = uVar3;
    _objc_retain(uVar2);
    func_0x00010007380c(uVar2,&puStack_98);
    _objc_release(uStack_60);
    _objc_release(uStack_58);
    _objc_release(uStack_68);
    _objc_release(uStack_78);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1056c8320; end: 1056c844f;  */

void FUN_1056c8320(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar3 = 1;
  }
  else {
    func_0x00010c252ee0();
    if ((int)lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
      _objc_alloc(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c252ee0(uVar3);
      func_0x00010c057ca0(puVar2,param_2,uVar4,(long)(int)uVar3,0,0);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf1e9c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010be820a0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x28),param_2,0,
                          0,puVar2,uVar3,*(undefined8 *)(param_1 + 0x30),0,
                          *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x40));
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
    uVar3 = 1;
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar3 = 2;
    }
  }
  func_0x00010be820a0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x28),param_2,uVar3,
                      0,0,0,*(undefined8 *)(param_1 + 0x30),0,*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 1056c8450; end: 1056c86bf; -[SCUserSessionValidationReporter _processResponseWithStartTime:outcome:request:response:data:referrer:error:logoutSource:onBeforeLogout:] */

void FUN_1056c8450(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_x6);
  _CACurrentMediaTime();
  puVar1 = PTR_PTR_1126bd0e0;
  func_0x00010c133b60(PTR_PTR_1126bd0e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x6);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = puVar2;
  if (in_x4 == 0) {
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c252ee0();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar3 = in_x4;
    func_0x00010c252ee0();
    if (lVar3 != 0x191) goto LAB_1056c8650;
    puVar2 = PTR_PTR_1126bd0e8;
    func_0x00010c0f3fc0();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar2 != (undefined *)0x0) &&
       (puVar1 = PTR_PTR_1126bd0e8, func_0x00010bfd8ba0(), (int)puVar1 != 0)) {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1056c86c0;
      puStack_88 = &UNK_110845188;
      lStack_80 = param_1;
      _objc_retain(puVar2);
      uStack_68 = in_stack_00000000;
      puStack_78 = puVar2;
      _objc_retain(in_stack_00000008);
      uStack_70 = in_stack_00000008;
      func_0x0001000d76cc("APPSTORE",&puStack_a0);
      _objc_release(uStack_70);
      _objc_release(puStack_78);
    }
  }
  _objc_release(puVar2);
LAB_1056c8650:
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010befbfe0(*(undefined8 *)(param_1 + 0x18));
  _objc_release(puVar4);
  _objc_release(in_stack_00000008);
  _objc_release(in_x5);
  _objc_release(in_x4);
  return;
}



/* Entry: 1056c86c0; end: 1056c87c3;  */

void FUN_1056c86c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x38) & 1) != 0) {
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x38) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf3a680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ebf40();
    _objc_release(uVar2);
  }
  puVar3 = PTR_PTR_1126af4a0;
  _objc_alloc(PTR_PTR_1126af4a0);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c15ffa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027ba0(puVar3,param_2,uVar1,0,uVar2);
  _objc_release(uVar2);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  lVar4 = *(long *)(param_1 + 0x20) + 0x30;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c2937a0();
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1056c87c4; end: 1056c8843; +[SCUserSessionValidationReporter parseEndpointResponse:] */

void FUN_1056c87c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_28;
  
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lStack_28 = 0;
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,0,&lStack_28
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined *)0x0;
    if (lStack_28 == 0) {
      puVar2 = PTR_PTR_1126bd0f0;
      _objc_alloc(PTR_PTR_1126bd0f0);
      func_0x00010c0206e0();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056c8844; end: 1056c88d3; +[SCUserSessionValidationReporter hasLogoutFlagsWithAuthResponse:] */

undefined8 FUN_1056c8844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb4d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f3c0();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c252d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1056c88d4; end: 1056c8953; -[SCUserSessionValidationReporter .cxx_destruct] */

void FUN_1056c88d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056c8954; end: 1056c8a37; -[SCUserSessionValidationServiceProvider provide] */

void FUN_1056c8954(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd0f8;
  _objc_alloc(PTR_PTR_1126bd0f8);
  func_0x00010c0603a0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056c8a38; end: 1056c8a77;  */

void FUN_1056c8a38(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bee7140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1056c8a78; end: 1056c8def; -[SCUserSessionValidationServiceProvider _userSessionValidator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c8a78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  puVar1 = PTR_PTR_1126b7f00;
  _objc_alloc();
  lVar2 = param_1;
  FUN_1056c8df0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x0001056c8e14(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f280(puVar1,param_2,lVar4,0,0,0,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126bd100;
  puVar7 = PTR_PTR_1126b8670;
  func_0x00010bf10920(PTR_PTR_1126b8670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf542c0(puVar8,param_2,puVar1,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126bd0e8;
  _objc_alloc();
  lVar2 = param_1;
  func_0x0001056c8e38();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x0001056c8e38();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112727c34;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar17;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_112727c44;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar18;
  func_0x00010c069440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_112727c3c;
    _objc_loadWeakRetained(lVar19);
  }
  lVar13 = lVar19;
  func_0x00010c08d7c0(lVar19);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x0001056c8e14(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1056c8df0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c293960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ac80(puVar7,param_2,lVar4,lVar9,lVar11,lVar12,lVar13,lVar15,lVar16,puVar8);
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar19);
  _objc_release(lVar12);
  _objc_release(lVar18);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar17);
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1056c8df0; end: 1056c8e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c8df0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112727c30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056c8e5c; end: 1056c8ec3; -[SCUserSessionValidationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056c8e5c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727c44);
  _objc_destroyWeak(param_1 + _DAT_112727c40);
  _objc_destroyWeak(param_1 + _DAT_112727c3c);
  _objc_destroyWeak(param_1 + _DAT_112727c38);
  _objc_destroyWeak(param_1 + _DAT_112727c34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727c30);
  return;
}



/* Entry: 1056c8ec4; end: 1056c8eef; +[SCGrapheneUserSessionValidatorMetric reportSession] */

void FUN_1056c8ec4(void)

{
  _objc_alloc(PTR_PTR_1126bd0e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056c8ef0; end: 1056c8f8f; -[SCGrapheneUserSessionValidatorMetric description] */

void FUN_1056c8ef0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110df64f8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110df64f8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e9ac0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1056c8f90; end: 1056c90d3; -[SCGrapheneRegistry userSessionValidatorGraphene] */

void FUN_1056c8f90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1056c9018;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bd700 != -1) {
    func_0x00010002a2fc(0x1136bd700,&puStack_48);
  }
  uVar1 = uRam00000001136bd6f8;
  _objc_retain(uRam00000001136bd6f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


