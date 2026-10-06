/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0062c24c; end: 0062c263;  */

void FUN_0062c24c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  return;
}



/* Entry: 0062c264; end: 0062cc37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062c264(long param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_38 = param_2;
  func_0x0077ee80(*(undefined8 *)(*(long *)(param_1 + 0x30) + (long)_DAT_00ac5ba8),param_2,
                  &uStack_38,4);
  uStack_34 = param_3;
  func_0x0077ee80(*(undefined8 *)(*(long *)(param_1 + 0x30) + (long)_DAT_00ac5ba8));
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(long *)(lVar2 + 0x18) + 1;
  *(ulong *)(lVar2 + 0x18) = uVar1;
  if (*(uint *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) <= uVar1) {
    *param_4 = 1;
  }
  return;
}



/* Entry: 0062cc38; end: 0062ccbf;  */

void FUN_0062cc38(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = *param_1;
  func_0x0077ee80(param_2,param_2,&uStack_28,8);
  uStack_28 = param_1[2];
  func_0x0077ee80(param_2);
  uStack_28._0_4_ = *(undefined4 *)(param_1 + 1);
  func_0x0077ee80(param_2);
  uStack_28 = CONCAT44(uStack_28._4_4_,*(undefined4 *)((long)param_1 + 0xc));
  func_0x0077ee80(param_2);
  return;
}



/* Entry: 0062ccc0; end: 0062cdaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062ccc0(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = _DAT_00ac5b8c;
  lVar4 = **(long **)(param_1 + _DAT_00ac5b8c);
  lVar2 = *(long *)(param_1 + _DAT_00ac5b88) + lVar4;
  _strlen();
  uVar1 = lVar2 + 1;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar1 + lVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    iVar3 = _DAT_00ac5b8c;
  }
  if (1 < uVar1) {
    _CFStringCreateWithBytes
              (0,*(long *)(param_1 + _DAT_00ac5b88) + **(long **)(param_1 + iVar3),lVar2,0x8000100,0
              );
    _objc_autorelease();
    iVar3 = _DAT_00ac5b8c;
  }
  **(long **)(param_1 + iVar3) = **(long **)(param_1 + iVar3) + uVar1;
  return;
}



/* Entry: 0062cdb0; end: 0062cdc7;  */

void FUN_0062cdb0(undefined8 param_1,undefined8 param_2)

{
  func_0x007877e0(param_1,param_2,param_2);
  return;
}



/* Entry: 0062cdc8; end: 0062cdcb;  */

void FUN_0062cdc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007843b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_hash_00abbdf0);
  return;
}



/* Entry: 0062cdcc; end: 0062d47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062cdcc(dword *param_1,dword *param_2,dword *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  char cVar5;
  short sVar6;
  dword *pdVar7;
  long lVar8;
  dword *pdVar9;
  undefined **ppuVar10;
  dword *pdVar11;
  ulong *puVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  dword adStack_200 [4];
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  dword adStack_1c0 [4];
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  dword *apdStack_178 [33];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar18 = *(ulong *)((long)param_1 + (long)_DAT_00ac5b98);
  uVar19 = uVar18;
  pdVar9 = param_2;
  ppuVar10 = (undefined **)param_3;
  _CFDataGetLength();
  if (param_2 < (undefined **)(uVar19 >> 3)) {
    _CFDataGetBytePtr();
    puVar17 = *(undefined **)(uVar18 + (long)param_2 * 8);
    pdVar7 = *(dword **)(puVar17 + 8);
    _NSClassFromString();
    if (pdVar7 != (dword *)0x0) goto LAB_0062ce44;
LAB_0062cf10:
    if ((int)param_3 != 0) {
      pdVar7 = (dword *)PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
      if (puVar17[0x18] == '\x01') {
        func_0x00781fe0();
        uVar16 = *(undefined8 *)((long)param_1 + (long)_DAT_00ac5b94);
        apdStack_178[0] = pdVar7;
        _CFDataGetLength(uVar16);
        pdVar9 = (dword *)apdStack_178;
        _CFDataAppendBytes(uVar16,pdVar9,8);
        ppuVar10 = (undefined **)PTR_PTR_00ac35c8;
        _objc_alloc();
        func_0x00784fc0();
        _objc_autorelease();
        if (*(int *)(puVar17 + 0x1c) != 0) {
          uVar19 = 0;
          do {
            pdVar9 = (dword *)ppuVar10;
            FUN_0062d480(param_1,ppuVar10,*(undefined8 *)(*(long *)(puVar17 + 0x28) + uVar19 * 8));
            uVar19 = uVar19 + 1;
          } while (uVar19 < *(uint *)(puVar17 + 0x1c));
        }
        func_0x0077f240();
        func_0x0077e4e0(pdVar7);
      }
      else {
        func_0x00782040();
        uVar16 = *(undefined8 *)((long)param_1 + (long)_DAT_00ac5b94);
        apdStack_178[0] = pdVar7;
        _CFDataGetLength(uVar16);
        pdVar9 = (dword *)apdStack_178;
        _CFDataAppendBytes(uVar16,pdVar9,8);
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        adStack_200[2] = 0;
        adStack_200[3] = 0;
        adStack_200[0] = 0;
        adStack_200[1] = 0;
        uStack_1e8 = 0;
        plStack_1f0 = (long *)0x0;
        lVar8 = *(long *)(puVar17 + 0x10);
        ppuVar10 = (undefined **)adStack_200;
        lVar15 = lVar8;
        func_0x00780ea0();
        if (lVar15 != 0) {
          lVar21 = *plStack_1f0;
          do {
            lVar20 = 0;
            do {
              while( true ) {
                if (*plStack_1f0 != lVar21) {
                  _objc_enumerationMutation(lVar8);
                }
                puVar12 = *(ulong **)((long)param_1 + (long)_DAT_00ac5b8c);
                uVar18 = *puVar12;
                uVar19 = uVar18 + 1;
                if (*(ulong *)((long)param_1 + (long)_DAT_00ac5b90) < uVar19) {
                  func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
                  puVar12 = *(ulong **)((long)param_1 + (long)_DAT_00ac5b8c);
                  uVar18 = *puVar12;
                  uVar19 = uVar18 + 1;
                }
                bVar2 = *(byte *)(*(long *)((long)param_1 + (long)_DAT_00ac5b88) + uVar18);
                *puVar12 = uVar19;
                if ((0x34 < bVar2) ||
                   (pcVar13 = *(code **)(*(long *)((long)param_1 + (long)_DAT_00ac5b84) +
                                        (ulong)bVar2 * 8), pcVar13 == (code *)0x0)) break;
                (*pcVar13)(param_1);
                func_0x00791180(pdVar7);
                lVar20 = lVar20 + 1;
                if (lVar15 == lVar20) goto LAB_0062d284;
              }
              func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
              func_0x00791180(pdVar7);
              lVar20 = lVar20 + 1;
            } while (lVar15 != lVar20);
LAB_0062d284:
            ppuVar10 = (undefined **)adStack_200;
            lVar15 = lVar8;
            func_0x00780ea0();
          } while (lVar15 != 0);
        }
      }
      goto LAB_0062d39c;
    }
    uVar16 = *(undefined8 *)((long)param_1 + (long)_DAT_00ac5b94);
    apdStack_178[0] = (dword *)0x0;
    _CFDataGetLength(uVar16);
    pdVar9 = (dword *)apdStack_178;
    ppuVar10 = (undefined **)&MACH_HEADER.cpusubtype;
    _CFDataAppendBytes(uVar16,pdVar9);
  }
  else {
    ppuVar10 = &PTR____CFConstantStringClassReference_00a478a0;
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar17 = PTR__OBJC_CLASS___NSNull_00ac2f90;
    func_0x00789b20();
    pdVar7 = *(dword **)(puVar17 + 8);
    _NSClassFromString();
    if (pdVar7 == (dword *)0x0) goto LAB_0062cf10;
LAB_0062ce44:
    if (puVar17[0x18] != '\x01') {
      _objc_opt_new();
      _objc_autorelease();
      uVar16 = *(undefined8 *)((long)param_1 + (long)_DAT_00ac5b94);
      apdStack_178[0] = pdVar7;
      _CFDataGetLength(uVar16);
      pdVar9 = (dword *)apdStack_178;
      _CFDataAppendBytes(uVar16,pdVar9,8);
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      adStack_1c0[2] = 0;
      adStack_1c0[3] = 0;
      adStack_1c0[0] = 0;
      adStack_1c0[1] = 0;
      uStack_1a8 = 0;
      plStack_1b0 = (long *)0x0;
      lVar8 = *(long *)(puVar17 + 0x10);
      ppuVar10 = (undefined **)adStack_1c0;
      lVar15 = lVar8;
      func_0x00780ea0();
      if (lVar15 != 0) {
        lVar21 = *plStack_1b0;
        do {
          lVar20 = 0;
          do {
            while( true ) {
              if (*plStack_1b0 != lVar21) {
                _objc_enumerationMutation(lVar8);
              }
              puVar12 = *(ulong **)((long)param_1 + (long)_DAT_00ac5b8c);
              uVar18 = *puVar12;
              uVar19 = uVar18 + 1;
              if (*(ulong *)((long)param_1 + (long)_DAT_00ac5b90) < uVar19) {
                func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
                puVar12 = *(ulong **)((long)param_1 + (long)_DAT_00ac5b8c);
                uVar18 = *puVar12;
                uVar19 = uVar18 + 1;
              }
              bVar2 = *(byte *)(*(long *)((long)param_1 + (long)_DAT_00ac5b88) + uVar18);
              *puVar12 = uVar19;
              if ((0x34 < bVar2) ||
                 (pcVar13 = *(code **)(*(long *)((long)param_1 + (long)_DAT_00ac5b84) +
                                      (ulong)bVar2 * 8), pcVar13 == (code *)0x0)) break;
              (*pcVar13)(param_1);
              func_0x00791180(pdVar7);
              lVar20 = lVar20 + 1;
              if (lVar15 == lVar20) goto LAB_0062d054;
            }
            func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
            func_0x00791180(pdVar7);
            lVar20 = lVar20 + 1;
          } while (lVar15 != lVar20);
LAB_0062d054:
          ppuVar10 = (undefined **)adStack_1c0;
          lVar15 = lVar8;
          func_0x00780ea0();
        } while (lVar15 != 0);
      }
      goto LAB_0062d39c;
    }
    pdVar11 = pdVar7;
    func_0x00783120();
    if (pdVar11 != (dword *)0x0 && *(undefined ***)(puVar17 + 0x20) == (undefined **)pdVar11) {
      _objc_opt_new();
      _objc_autorelease();
      uVar16 = *(undefined8 *)((long)param_1 + (long)_DAT_00ac5b94);
      apdStack_178[0] = pdVar7;
      _CFDataGetLength(uVar16);
      pdVar9 = (dword *)apdStack_178;
      _CFDataAppendBytes(uVar16,pdVar9,8);
      func_0x00781b40(pdVar7);
      ppuVar10 = (undefined **)param_1;
      goto LAB_0062d39c;
    }
    if (pdVar11 != (dword *)0x0 && *(undefined ***)(puVar17 + 0x20) != (undefined **)pdVar11) {
      _objc_opt_new();
      _objc_autorelease();
      uVar16 = *(undefined8 *)((long)param_1 + (long)_DAT_00ac5b94);
      apdStack_178[0] = pdVar7;
      _CFDataGetLength(uVar16);
      pdVar9 = (dword *)apdStack_178;
      ppuVar10 = (undefined **)&MACH_HEADER.cpusubtype;
      _CFDataAppendBytes(uVar16,pdVar9);
      if (*(int *)(puVar17 + 0x1c) != 0) {
        uVar19 = 0;
        do {
          ppuVar10 = *(undefined ***)(*(long *)(puVar17 + 0x28) + uVar19 * 8);
          pdVar9 = pdVar7;
          FUN_0062d480(param_1,pdVar7);
          uVar19 = uVar19 + 1;
        } while (uVar19 < *(uint *)(puVar17 + 0x1c));
      }
      goto LAB_0062d39c;
    }
    if (pdVar11 == (dword *)0x0) {
      uVar16 = *(undefined8 *)((long)param_1 + (long)_DAT_00ac5b94);
      apdStack_178[0] = (dword *)0x0;
      _CFDataGetLength(uVar16);
      pdVar9 = (dword *)apdStack_178;
      ppuVar10 = (undefined **)&MACH_HEADER.cpusubtype;
      _CFDataAppendBytes(uVar16,pdVar9);
      if (*(int *)(puVar17 + 0x1c) != 0) {
        uVar19 = 0;
        do {
          ppuVar10 = *(undefined ***)(*(long *)(puVar17 + 0x28) + uVar19 * 8);
          pdVar9 = (dword *)0x0;
          FUN_0062d480(param_1,0);
          pdVar7 = (dword *)0x0;
          uVar19 = uVar19 + 1;
        } while (uVar19 < *(uint *)(puVar17 + 0x1c));
        goto LAB_0062d39c;
      }
    }
  }
  pdVar7 = (dword *)0x0;
LAB_0062d39c:
  func_0x007820e0(pdVar7);
  pdVar11 = pdVar7;
  func_0x0077f680();
  if (pdVar11 != pdVar7) {
    ppuVar10 = &PTR____CFConstantStringClassReference_00a478a0;
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (((uint)ppuVar10 & 0xff) < 0x17) {
    uVar19 = (ulong)ppuVar10 >> 8;
    switch((ulong)ppuVar10 & 0xff) {
    case 0:
      puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      uVar14 = *puVar12;
      uVar18 = uVar14 + 1;
      if (*(ulong *)((long)pdVar11 + (long)_DAT_00ac5b90) < uVar18) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar14 = *puVar12;
        uVar18 = uVar14 + 1;
      }
      bVar2 = *(byte *)(*(long *)((long)pdVar11 + (long)_DAT_00ac5b88) + uVar14);
      *puVar12 = uVar18;
      if ((bVar2 < 0x35) &&
         (pcVar13 = *(code **)(*(long *)((long)pdVar11 + (long)_DAT_00ac5b84) + (ulong)bVar2 * 8),
         pcVar13 != (code *)0x0)) {
        (*pcVar13)(pdVar11);
      }
      else {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        pdVar11 = (dword *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x0078f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar9,PTR_s_setObject_forUInt64Key__00abea50,pdVar11,uVar19);
      return;
    case 1:
      puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      uVar14 = *puVar12;
      uVar18 = uVar14 + 1;
      if (*(ulong *)((long)pdVar11 + (long)_DAT_00ac5b90) < uVar18) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar14 = *puVar12;
        uVar18 = uVar14 + 1;
      }
      cVar5 = *(char *)(*(long *)((long)pdVar11 + (long)_DAT_00ac5b88) + uVar14);
      *puVar12 = uVar18;
                    /* WARNING: Could not recover jumptable at 0x0078d070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar9,PTR_s_setBool_forUInt64Key__00abe128,cVar5 == '\r',uVar19);
      return;
    case 2:
      puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      uVar14 = *puVar12;
      uVar18 = uVar14 + 1;
      if (*(ulong *)((long)pdVar11 + (long)_DAT_00ac5b90) < uVar18) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar14 = *puVar12;
        uVar18 = uVar14 + 1;
      }
      cVar5 = *(char *)(*(long *)((long)pdVar11 + (long)_DAT_00ac5b88) + uVar14);
      *puVar12 = uVar18;
                    /* WARNING: Could not recover jumptable at 0x00790210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar9,PTR_s_setSInt8_forUInt64Key__00abed90,(long)cVar5,uVar19);
      return;
    case 3:
      puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      uVar18 = *puVar12;
      if ((uVar18 & 1) != 0) {
        uVar18 = uVar18 + 1;
        *puVar12 = uVar18;
      }
      uVar14 = uVar18 + 2;
      if (*(ulong *)((long)pdVar11 + (long)_DAT_00ac5b90) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar18 = *puVar12;
        uVar14 = uVar18 + 2;
      }
      sVar6 = *(short *)(*(long *)((long)pdVar11 + (long)_DAT_00ac5b88) + uVar18);
      *puVar12 = uVar14;
                    /* WARNING: Could not recover jumptable at 0x007901b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar9,PTR_s_setSInt16_forUInt64Key__00abed78,(long)sVar6,uVar19);
      return;
    case 4:
      puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      uVar18 = *puVar12;
      if ((uVar18 & 3) != 0) {
        uVar18 = (uVar18 & 0xfffffffffffffffc) + 4;
        *puVar12 = uVar18;
      }
      uVar14 = uVar18 + 4;
      if (*(ulong *)((long)pdVar11 + (long)_DAT_00ac5b90) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar18 = *puVar12;
        uVar14 = uVar18 + 4;
      }
      uVar22 = *(undefined4 *)(*(long *)((long)pdVar11 + (long)_DAT_00ac5b88) + uVar18);
      *puVar12 = uVar14;
                    /* WARNING: Could not recover jumptable at 0x007901d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar9,PTR_s_setSInt32_forUInt64Key__00abed80,uVar22,uVar19);
      return;
    case 5:
      puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      uVar18 = *puVar12;
      if ((uVar18 & 7) != 0) {
        uVar18 = (uVar18 & 0xfffffffffffffff8) + 8;
        *puVar12 = uVar18;
      }
      uVar14 = uVar18 + 8;
      if (*(ulong *)((long)pdVar11 + (long)_DAT_00ac5b90) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar18 = *puVar12;
        uVar14 = uVar18 + 8;
      }
      uVar16 = *(undefined8 *)(*(long *)((long)pdVar11 + (long)_DAT_00ac5b88) + uVar18);
      *puVar12 = uVar14;
                    /* WARNING: Could not recover jumptable at 0x007901f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar9,PTR_s_setSInt64_forUInt64Key__00abed88,uVar16,uVar19);
      return;
    case 6:
      puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      uVar14 = *puVar12;
      uVar18 = uVar14 + 1;
      if (*(ulong *)((long)pdVar11 + (long)_DAT_00ac5b90) < uVar18) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar14 = *puVar12;
        uVar18 = uVar14 + 1;
      }
      uVar3 = *(undefined1 *)(*(long *)((long)pdVar11 + (long)_DAT_00ac5b88) + uVar14);
      *puVar12 = uVar18;
                    /* WARNING: Could not recover jumptable at 0x00790df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar9,PTR_s_setUInt8_forUInt64Key__00abf088,uVar3,uVar19);
      return;
    case 7:
      puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      uVar18 = *puVar12;
      if ((uVar18 & 1) != 0) {
        uVar18 = uVar18 + 1;
        *puVar12 = uVar18;
      }
      uVar14 = uVar18 + 2;
      if (*(ulong *)((long)pdVar11 + (long)_DAT_00ac5b90) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar18 = *puVar12;
        uVar14 = uVar18 + 2;
      }
      uVar4 = *(undefined2 *)(*(long *)((long)pdVar11 + (long)_DAT_00ac5b88) + uVar18);
      *puVar12 = uVar14;
                    /* WARNING: Could not recover jumptable at 0x00790d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar9,PTR_s_setUInt16_forUInt64Key__00abf070,uVar4,uVar19);
      return;
    case 8:
      puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      uVar18 = *puVar12;
      if ((uVar18 & 3) != 0) {
        uVar18 = (uVar18 & 0xfffffffffffffffc) + 4;
        *puVar12 = uVar18;
      }
      uVar14 = uVar18 + 4;
      if (*(ulong *)((long)pdVar11 + (long)_DAT_00ac5b90) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar18 = *puVar12;
        uVar14 = uVar18 + 4;
      }
      uVar22 = *(undefined4 *)(*(long *)((long)pdVar11 + (long)_DAT_00ac5b88) + uVar18);
      *puVar12 = uVar14;
                    /* WARNING: Could not recover jumptable at 0x00790db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar9,PTR_s_setUInt32_forUInt64Key__00abf078,uVar22,uVar19);
      return;
    case 9:
      puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      uVar18 = *puVar12;
      if ((uVar18 & 7) != 0) {
        uVar18 = (uVar18 & 0xfffffffffffffff8) + 8;
        *puVar12 = uVar18;
      }
      uVar14 = uVar18 + 8;
      if (*(ulong *)((long)pdVar11 + (long)_DAT_00ac5b90) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar18 = *puVar12;
        uVar14 = uVar18 + 8;
      }
      uVar16 = *(undefined8 *)(*(long *)((long)pdVar11 + (long)_DAT_00ac5b88) + uVar18);
      *puVar12 = uVar14;
                    /* WARNING: Could not recover jumptable at 0x00790dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar9,PTR_s_setUInt64_forUInt64Key__00abf080,uVar16,uVar19);
      return;
    case 10:
      puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      uVar18 = *puVar12;
      if ((uVar18 & 3) != 0) {
        uVar18 = (uVar18 & 0xfffffffffffffffc) + 4;
        *puVar12 = uVar18;
      }
      uVar14 = uVar18 + 4;
      if (*(ulong *)((long)pdVar11 + (long)_DAT_00ac5b90) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar18 = *puVar12;
        uVar14 = uVar18 + 4;
      }
      uVar22 = *(undefined4 *)(*(long *)((long)pdVar11 + (long)_DAT_00ac5b88) + uVar18);
      *puVar12 = uVar14;
                    /* WARNING: Could not recover jumptable at 0x0078e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar22,pdVar9,PTR_s_setFloat_forUInt64Key__00abe580,uVar19);
      return;
    case 0xb:
      puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      uVar18 = *puVar12;
      if ((uVar18 & 7) != 0) {
        uVar18 = (uVar18 & 0xfffffffffffffff8) + 8;
        *puVar12 = uVar18;
      }
      uVar14 = uVar18 + 8;
      if (*(ulong *)((long)pdVar11 + (long)_DAT_00ac5b90) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar18 = *puVar12;
        uVar14 = uVar18 + 8;
      }
      uVar16 = *(undefined8 *)(*(long *)((long)pdVar11 + (long)_DAT_00ac5b88) + uVar18);
      *puVar12 = uVar14;
                    /* WARNING: Could not recover jumptable at 0x0078db70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar16,pdVar9,PTR_s_setDouble_forUInt64Key__00abe3e8,uVar19);
      return;
    case 0xc:
      puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      uVar18 = *puVar12;
      if ((uVar18 & 7) != 0) {
        uVar18 = (uVar18 & 0xfffffffffffffff8) + 8;
        *puVar12 = uVar18;
      }
      uVar14 = uVar18 + 8;
      lVar15 = (long)_DAT_00ac5b90;
      if (*(ulong *)((long)pdVar11 + lVar15) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        lVar15 = (long)_DAT_00ac5b90;
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar18 = *puVar12;
        uVar14 = uVar18 + 8;
      }
      lVar8 = *(long *)((long)pdVar11 + (long)_DAT_00ac5b88);
      uVar16 = *(undefined8 *)(lVar8 + uVar18);
      *puVar12 = uVar14;
      uVar18 = uVar14 + 8;
      if (*(ulong *)((long)pdVar11 + lVar15) < uVar18) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar14 = *puVar12;
        uVar18 = uVar14 + 8;
        lVar8 = *(long *)((long)pdVar11 + (long)_DAT_00ac5b88);
      }
      uVar23 = *(undefined8 *)(lVar8 + uVar14);
      *puVar12 = uVar18;
                    /* WARNING: Could not recover jumptable at 0x0078f710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar16,uVar23,pdVar9,PTR_s_setPoint_forUInt64Key__00abead0,uVar19);
      return;
    case 0xd:
      puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      uVar18 = *puVar12;
      if ((uVar18 & 7) != 0) {
        uVar18 = (uVar18 & 0xfffffffffffffff8) + 8;
        *puVar12 = uVar18;
      }
      uVar14 = uVar18 + 8;
      lVar15 = (long)_DAT_00ac5b90;
      if (*(ulong *)((long)pdVar11 + lVar15) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        lVar15 = (long)_DAT_00ac5b90;
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar18 = *puVar12;
        uVar14 = uVar18 + 8;
      }
      lVar8 = *(long *)((long)pdVar11 + (long)_DAT_00ac5b88);
      uVar16 = *(undefined8 *)(lVar8 + uVar18);
      *puVar12 = uVar14;
      uVar18 = uVar14 + 8;
      if (*(ulong *)((long)pdVar11 + lVar15) < uVar18) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar14 = *puVar12;
        uVar18 = uVar14 + 8;
        lVar8 = *(long *)((long)pdVar11 + (long)_DAT_00ac5b88);
      }
      uVar23 = *(undefined8 *)(lVar8 + uVar14);
      *puVar12 = uVar18;
                    /* WARNING: Could not recover jumptable at 0x007905b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar16,uVar23,pdVar9,PTR_s_setSize_forUInt64Key__00abee78,uVar19);
      return;
    case 0xe:
      uVar18 = **(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      if ((uVar18 & 7) != 0) {
        **(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c) = (uVar18 & 0xfffffffffffffff8) + 8;
      }
      FUN_006286e0(pdVar11);
                    /* WARNING: Could not recover jumptable at 0x0078fb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(pdVar9,PTR_s_setRect_forUInt64Key__00abebe0,uVar19);
      return;
    case 0xf:
      puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      uVar18 = *puVar12;
      if ((uVar18 & 3) != 0) {
        uVar18 = (uVar18 & 0xfffffffffffffffc) + 4;
        *puVar12 = uVar18;
      }
      uVar14 = uVar18 + 4;
      lVar15 = (long)_DAT_00ac5b90;
      if (*(ulong *)((long)pdVar11 + lVar15) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        lVar15 = (long)_DAT_00ac5b90;
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar18 = *puVar12;
        uVar14 = uVar18 + 4;
      }
      lVar8 = *(long *)((long)pdVar11 + (long)_DAT_00ac5b88);
      uVar22 = *(undefined4 *)(lVar8 + uVar18);
      *puVar12 = uVar14;
      uVar18 = uVar14 + 4;
      if (*(ulong *)((long)pdVar11 + lVar15) < uVar18) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar14 = *puVar12;
        uVar18 = uVar14 + 4;
        lVar8 = *(long *)((long)pdVar11 + (long)_DAT_00ac5b88);
      }
      uVar1 = *(undefined4 *)(lVar8 + uVar14);
      *puVar12 = uVar18;
                    /* WARNING: Could not recover jumptable at 0x0078fab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar9,PTR_s_setRange_forUInt64Key__00abebb8,uVar22,uVar1,uVar19);
      return;
    case 0x10:
      puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      uVar18 = *puVar12;
      if ((uVar18 & 7) != 0) {
        uVar18 = (uVar18 & 0xfffffffffffffff8) + 8;
        *puVar12 = uVar18;
      }
      uVar14 = uVar18 + 8;
      lVar15 = (long)_DAT_00ac5b90;
      if (*(ulong *)((long)pdVar11 + lVar15) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        lVar15 = (long)_DAT_00ac5b90;
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar18 = *puVar12;
        uVar14 = uVar18 + 8;
      }
      lVar8 = *(long *)((long)pdVar11 + (long)_DAT_00ac5b88);
      uVar16 = *(undefined8 *)(lVar8 + uVar18);
      *puVar12 = uVar14;
      uVar18 = uVar14 + 8;
      if (*(ulong *)((long)pdVar11 + lVar15) < uVar18) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
        uVar14 = *puVar12;
        uVar18 = uVar14 + 8;
        lVar8 = *(long *)((long)pdVar11 + (long)_DAT_00ac5b88);
      }
      uVar23 = *(undefined8 *)(lVar8 + uVar14);
      *puVar12 = uVar18;
                    /* WARNING: Could not recover jumptable at 0x00791210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar16,uVar23,pdVar9,PTR_s_setVector_forUInt64Key__00abf190,uVar19);
      return;
    case 0x11:
      uVar19 = **(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      if ((uVar19 & 7) != 0) {
        **(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c) = (uVar19 & 0xfffffffffffffff8) + 8;
      }
      FUN_00628adc(&uStack_320,pdVar11);
      func_0x0078cac0(pdVar9);
      break;
    case 0x12:
      uVar19 = **(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      if ((uVar19 & 7) != 0) {
        **(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c) = (uVar19 & 0xfffffffffffffff8) + 8;
      }
      FUN_00628d3c(&uStack_320,pdVar11);
      func_0x0078c960(pdVar9);
      break;
    case 0x13:
      FUN_00629298(&uStack_320,pdVar11);
      func_0x0078d1a0(pdVar9);
      break;
    case 0x14:
      FUN_00629298(&uStack_320,pdVar11);
      FUN_00629298(&uStack_308,pdVar11);
      func_0x0078d1e0(pdVar9);
      break;
    case 0x15:
      FUN_00629298(&uStack_2a0,pdVar11);
      FUN_00629298(&uStack_288,pdVar11);
      uStack_318 = uStack_298;
      uStack_320 = uStack_2a0;
      uStack_308 = uStack_288;
      uStack_310 = uStack_290;
      uStack_2f8 = uStack_278;
      uStack_300 = uStack_280;
      FUN_00629298(&uStack_2a0,pdVar11);
      FUN_00629298(&uStack_288,pdVar11);
      uStack_2e8 = uStack_298;
      uStack_2f0 = uStack_2a0;
      uStack_2d8 = uStack_288;
      uStack_2e0 = uStack_290;
      uStack_2c8 = uStack_278;
      uStack_2d0 = uStack_280;
      func_0x0078d1c0(pdVar9);
      break;
    case 0x16:
      uVar18 = **(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c);
      if ((uVar18 & 7) != 0) {
        **(ulong **)((long)pdVar11 + (long)_DAT_00ac5b8c) = (uVar18 & 0xfffffffffffffff8) + 8;
      }
      FUN_00629528(pdVar11);
                    /* WARNING: Could not recover jumptable at 0x00790d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar9,PTR_s_setUIEdgeInsets_forUInt64Key__00abf068,uVar19);
      return;
    }
  }
  return;
}



/* Entry: 0062d480; end: 0062e27b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062d480(long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  char cVar5;
  short sVar6;
  ulong *puVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (((uint)param_3 & 0xff) < 0x17) {
    uVar13 = param_3 >> 8;
    switch(param_3 & 0xff) {
    case 0:
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar9 = *puVar7;
      uVar10 = uVar9 + 1;
      if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar10) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                        &PTR____CFConstantStringClassReference_00a478a0,
                        &PTR____CFConstantStringClassReference_00a479a0);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar9 = *puVar7;
        uVar10 = uVar9 + 1;
      }
      bVar2 = *(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar9);
      *puVar7 = uVar10;
      if ((bVar2 < 0x35) &&
         (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_00ac5b84) + (ulong)bVar2 * 8),
         pcVar8 != (code *)0x0)) {
        (*pcVar8)(param_1);
      }
      else {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        param_1 = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x0078f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_2,PTR_s_setObject_forUInt64Key__00abea50,param_1,uVar13);
      return;
    case 1:
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar9 = *puVar7;
      uVar10 = uVar9 + 1;
      if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar10) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                        &PTR____CFConstantStringClassReference_00a478a0,
                        &PTR____CFConstantStringClassReference_00a479a0);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar9 = *puVar7;
        uVar10 = uVar9 + 1;
      }
      cVar5 = *(char *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar9);
      *puVar7 = uVar10;
                    /* WARNING: Could not recover jumptable at 0x0078d070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_2,PTR_s_setBool_forUInt64Key__00abe128,cVar5 == '\r',uVar13);
      return;
    case 2:
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar9 = *puVar7;
      uVar10 = uVar9 + 1;
      if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar10) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                        &PTR____CFConstantStringClassReference_00a478a0,
                        &PTR____CFConstantStringClassReference_00a479a0);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar9 = *puVar7;
        uVar10 = uVar9 + 1;
      }
      cVar5 = *(char *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar9);
      *puVar7 = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00790210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_2,PTR_s_setSInt8_forUInt64Key__00abed90,(long)cVar5,uVar13);
      return;
    case 3:
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar10 = *puVar7;
      if ((uVar10 & 1) != 0) {
        uVar10 = uVar10 + 1;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 2;
      if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar9) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                        &PTR____CFConstantStringClassReference_00a478a0,
                        &PTR____CFConstantStringClassReference_00a479a0);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 2;
      }
      sVar6 = *(short *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar10);
      *puVar7 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x007901b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_2,PTR_s_setSInt16_forUInt64Key__00abed78,(long)sVar6,uVar13);
      return;
    case 4:
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar10 = *puVar7;
      if ((uVar10 & 3) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffffc) + 4;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 4;
      if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar9) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                        &PTR____CFConstantStringClassReference_00a478a0,
                        &PTR____CFConstantStringClassReference_00a479a0);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 4;
      }
      uVar14 = *(undefined4 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar10);
      *puVar7 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x007901d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_2,PTR_s_setSInt32_forUInt64Key__00abed80,uVar14,uVar13);
      return;
    case 5:
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar10 = *puVar7;
      if ((uVar10 & 7) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffff8) + 8;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 8;
      if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar9) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                        &PTR____CFConstantStringClassReference_00a478a0,
                        &PTR____CFConstantStringClassReference_00a479a0);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 8;
      }
      uVar16 = *(undefined8 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar10);
      *puVar7 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x007901f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_2,PTR_s_setSInt64_forUInt64Key__00abed88,uVar16,uVar13);
      return;
    case 6:
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar9 = *puVar7;
      uVar10 = uVar9 + 1;
      if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar10) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                        &PTR____CFConstantStringClassReference_00a478a0,
                        &PTR____CFConstantStringClassReference_00a479a0);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar9 = *puVar7;
        uVar10 = uVar9 + 1;
      }
      uVar3 = *(undefined1 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar9);
      *puVar7 = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00790df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_2,PTR_s_setUInt8_forUInt64Key__00abf088,uVar3,uVar13);
      return;
    case 7:
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar10 = *puVar7;
      if ((uVar10 & 1) != 0) {
        uVar10 = uVar10 + 1;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 2;
      if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar9) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                        &PTR____CFConstantStringClassReference_00a478a0,
                        &PTR____CFConstantStringClassReference_00a479a0);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 2;
      }
      uVar4 = *(undefined2 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar10);
      *puVar7 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00790d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_2,PTR_s_setUInt16_forUInt64Key__00abf070,uVar4,uVar13);
      return;
    case 8:
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar10 = *puVar7;
      if ((uVar10 & 3) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffffc) + 4;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 4;
      if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar9) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                        &PTR____CFConstantStringClassReference_00a478a0,
                        &PTR____CFConstantStringClassReference_00a479a0);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 4;
      }
      uVar14 = *(undefined4 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar10);
      *puVar7 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00790db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_2,PTR_s_setUInt32_forUInt64Key__00abf078,uVar14,uVar13);
      return;
    case 9:
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar10 = *puVar7;
      if ((uVar10 & 7) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffff8) + 8;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 8;
      if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar9) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                        &PTR____CFConstantStringClassReference_00a478a0,
                        &PTR____CFConstantStringClassReference_00a479a0);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 8;
      }
      uVar16 = *(undefined8 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar10);
      *puVar7 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00790dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_2,PTR_s_setUInt64_forUInt64Key__00abf080,uVar16,uVar13);
      return;
    case 10:
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar10 = *puVar7;
      if ((uVar10 & 3) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffffc) + 4;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 4;
      if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar9) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                        &PTR____CFConstantStringClassReference_00a478a0,
                        &PTR____CFConstantStringClassReference_00a479a0);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 4;
      }
      uVar14 = *(undefined4 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar10);
      *puVar7 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x0078e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar14,param_2,PTR_s_setFloat_forUInt64Key__00abe580,uVar13);
      return;
    case 0xb:
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar10 = *puVar7;
      if ((uVar10 & 7) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffff8) + 8;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 8;
      if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar9) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                        &PTR____CFConstantStringClassReference_00a478a0,
                        &PTR____CFConstantStringClassReference_00a479a0);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 8;
      }
      uVar16 = *(undefined8 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar10);
      *puVar7 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x0078db70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar16,param_2,PTR_s_setDouble_forUInt64Key__00abe3e8,uVar13);
      return;
    case 0xc:
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar10 = *puVar7;
      if ((uVar10 & 7) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffff8) + 8;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 8;
      lVar11 = (long)_DAT_00ac5b90;
      if (*(ulong *)(param_1 + lVar11) < uVar9) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                        &PTR____CFConstantStringClassReference_00a478a0,
                        &PTR____CFConstantStringClassReference_00a479a0);
        lVar11 = (long)_DAT_00ac5b90;
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 8;
      }
      lVar12 = *(long *)(param_1 + _DAT_00ac5b88);
      uVar16 = *(undefined8 *)(lVar12 + uVar10);
      *puVar7 = uVar9;
      uVar10 = uVar9 + 8;
      if (*(ulong *)(param_1 + lVar11) < uVar10) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar9 = *puVar7;
        uVar10 = uVar9 + 8;
        lVar12 = *(long *)(param_1 + _DAT_00ac5b88);
      }
      uVar15 = *(undefined8 *)(lVar12 + uVar9);
      *puVar7 = uVar10;
                    /* WARNING: Could not recover jumptable at 0x0078f710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar16,uVar15,param_2,PTR_s_setPoint_forUInt64Key__00abead0,uVar13);
      return;
    case 0xd:
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar10 = *puVar7;
      if ((uVar10 & 7) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffff8) + 8;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 8;
      lVar11 = (long)_DAT_00ac5b90;
      if (*(ulong *)(param_1 + lVar11) < uVar9) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                        &PTR____CFConstantStringClassReference_00a478a0,
                        &PTR____CFConstantStringClassReference_00a479a0);
        lVar11 = (long)_DAT_00ac5b90;
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 8;
      }
      lVar12 = *(long *)(param_1 + _DAT_00ac5b88);
      uVar16 = *(undefined8 *)(lVar12 + uVar10);
      *puVar7 = uVar9;
      uVar10 = uVar9 + 8;
      if (*(ulong *)(param_1 + lVar11) < uVar10) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar9 = *puVar7;
        uVar10 = uVar9 + 8;
        lVar12 = *(long *)(param_1 + _DAT_00ac5b88);
      }
      uVar15 = *(undefined8 *)(lVar12 + uVar9);
      *puVar7 = uVar10;
                    /* WARNING: Could not recover jumptable at 0x007905b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar16,uVar15,param_2,PTR_s_setSize_forUInt64Key__00abee78,uVar13);
      return;
    case 0xe:
      uVar10 = **(ulong **)(param_1 + _DAT_00ac5b8c);
      if ((uVar10 & 7) != 0) {
        **(ulong **)(param_1 + _DAT_00ac5b8c) = (uVar10 & 0xfffffffffffffff8) + 8;
      }
      FUN_006286e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0078fb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_2,PTR_s_setRect_forUInt64Key__00abebe0,uVar13);
      return;
    case 0xf:
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar10 = *puVar7;
      if ((uVar10 & 3) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffffc) + 4;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 4;
      lVar11 = (long)_DAT_00ac5b90;
      if (*(ulong *)(param_1 + lVar11) < uVar9) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                        &PTR____CFConstantStringClassReference_00a478a0,
                        &PTR____CFConstantStringClassReference_00a479a0);
        lVar11 = (long)_DAT_00ac5b90;
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 4;
      }
      lVar12 = *(long *)(param_1 + _DAT_00ac5b88);
      uVar14 = *(undefined4 *)(lVar12 + uVar10);
      *puVar7 = uVar9;
      uVar10 = uVar9 + 4;
      if (*(ulong *)(param_1 + lVar11) < uVar10) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar9 = *puVar7;
        uVar10 = uVar9 + 4;
        lVar12 = *(long *)(param_1 + _DAT_00ac5b88);
      }
      uVar1 = *(undefined4 *)(lVar12 + uVar9);
      *puVar7 = uVar10;
                    /* WARNING: Could not recover jumptable at 0x0078fab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_2,PTR_s_setRange_forUInt64Key__00abebb8,uVar14,uVar1,uVar13);
      return;
    case 0x10:
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar10 = *puVar7;
      if ((uVar10 & 7) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffff8) + 8;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 8;
      lVar11 = (long)_DAT_00ac5b90;
      if (*(ulong *)(param_1 + lVar11) < uVar9) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                        &PTR____CFConstantStringClassReference_00a478a0,
                        &PTR____CFConstantStringClassReference_00a479a0);
        lVar11 = (long)_DAT_00ac5b90;
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 8;
      }
      lVar12 = *(long *)(param_1 + _DAT_00ac5b88);
      uVar16 = *(undefined8 *)(lVar12 + uVar10);
      *puVar7 = uVar9;
      uVar10 = uVar9 + 8;
      if (*(ulong *)(param_1 + lVar11) < uVar10) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar9 = *puVar7;
        uVar10 = uVar9 + 8;
        lVar12 = *(long *)(param_1 + _DAT_00ac5b88);
      }
      uVar15 = *(undefined8 *)(lVar12 + uVar9);
      *puVar7 = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00791210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar16,uVar15,param_2,PTR_s_setVector_forUInt64Key__00abf190,uVar13);
      return;
    case 0x11:
      uVar13 = **(ulong **)(param_1 + _DAT_00ac5b8c);
      if ((uVar13 & 7) != 0) {
        **(ulong **)(param_1 + _DAT_00ac5b8c) = (uVar13 & 0xfffffffffffffff8) + 8;
      }
      FUN_00628adc(&uStack_100,param_1);
      func_0x0078cac0(param_2);
      break;
    case 0x12:
      uVar13 = **(ulong **)(param_1 + _DAT_00ac5b8c);
      if ((uVar13 & 7) != 0) {
        **(ulong **)(param_1 + _DAT_00ac5b8c) = (uVar13 & 0xfffffffffffffff8) + 8;
      }
      FUN_00628d3c(&uStack_100,param_1);
      func_0x0078c960(param_2);
      break;
    case 0x13:
      FUN_00629298(&uStack_100,param_1);
      func_0x0078d1a0(param_2);
      break;
    case 0x14:
      FUN_00629298(&uStack_100,param_1);
      FUN_00629298(&uStack_e8,param_1);
      func_0x0078d1e0(param_2);
      break;
    case 0x15:
      FUN_00629298(&uStack_80,param_1);
      FUN_00629298(&uStack_68,param_1);
      uStack_f8 = uStack_78;
      uStack_100 = uStack_80;
      uStack_e8 = uStack_68;
      uStack_f0 = uStack_70;
      uStack_d8 = uStack_58;
      uStack_e0 = uStack_60;
      FUN_00629298(&uStack_80,param_1);
      FUN_00629298(&uStack_68,param_1);
      uStack_c8 = uStack_78;
      uStack_d0 = uStack_80;
      uStack_b8 = uStack_68;
      uStack_c0 = uStack_70;
      uStack_a8 = uStack_58;
      uStack_b0 = uStack_60;
      func_0x0078d1c0(param_2);
      break;
    case 0x16:
      uVar10 = **(ulong **)(param_1 + _DAT_00ac5b8c);
      if ((uVar10 & 7) != 0) {
        **(ulong **)(param_1 + _DAT_00ac5b8c) = (uVar10 & 0xfffffffffffffff8) + 8;
      }
      FUN_00629528(param_1);
                    /* WARNING: Could not recover jumptable at 0x00790d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_2,PTR_s_setUIEdgeInsets_forUInt64Key__00abf068,uVar13);
      return;
    }
  }
  return;
}



/* Entry: 0062e27c; end: 0062e61f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0062e27c(undefined *param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  code *pcVar8;
  ulong uVar9;
  undefined *puStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  code *pcStack_68;
  
  puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar5 = *puVar7;
  uVar9 = uVar5 + 1;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar9) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar5 = *puVar7;
    uVar9 = uVar5 + 1;
  }
  bVar1 = *(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar5);
  *puVar7 = uVar9;
  if ((bVar1 < 0x35) &&
     (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_00ac5b84) + (ulong)bVar1 * 8),
     pcVar8 != (code *)0x0)) {
    puStack_a0 = param_1;
    (*pcVar8)();
  }
  else {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puStack_a0 = (undefined *)0x0;
  }
  uVar6 = *(undefined8 *)(param_1 + _DAT_00ac5bbc);
  lVar2 = *(long *)(param_1 + _DAT_00ac5ba0);
  func_0x00780e80();
  if (lVar2 == 0) {
    uStack_88 = 0;
    puStack_90 = (undefined *)0x0;
    uStack_78 = 0;
    uStack_80 = 0;
    pcStack_68 = FUN_0062cdc8;
    pcStack_70 = FUN_0062cdb0;
    _CFDictionaryCreateMutable();
    _objc_autorelease();
    *(long *)(param_1 + _DAT_00ac5bbc) = lVar2;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_00ac5ba0);
    func_0x00788220();
    *(undefined8 *)(param_1 + _DAT_00ac5bbc) = uVar3;
    func_0x0078b420(*(undefined8 *)(param_1 + _DAT_00ac5ba0));
    func_0x0078b280(*(undefined8 *)(param_1 + _DAT_00ac5bbc));
  }
  while( true ) {
    puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar5 = *puVar7;
    uVar9 = uVar5 + 1;
    if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar9) {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar5 = *puVar7;
      uVar9 = uVar5 + 1;
    }
    bVar1 = *(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar5);
    *puVar7 = uVar9;
    if ((0x34 < (ulong)bVar1) ||
       (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_00ac5b84) + (ulong)bVar1 * 8),
       pcVar8 == (code *)0x0)) break;
    puVar4 = param_1;
    (*pcVar8)();
    if (puVar4 == (undefined *)0x0) goto LAB_0062e53c;
    puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar5 = *puVar7;
    uVar9 = uVar5 + 1;
    if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar9) {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar5 = *puVar7;
      uVar9 = uVar5 + 1;
    }
    bVar1 = *(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar5);
    *puVar7 = uVar9;
    if ((bVar1 < 0x35) &&
       (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_00ac5b84) + (ulong)bVar1 * 8),
       pcVar8 != (code *)0x0)) {
      (*pcVar8)(param_1);
    }
    else {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    }
    func_0x0078f4e0(*(undefined8 *)(param_1 + _DAT_00ac5bbc));
  }
  func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
LAB_0062e53c:
  puVar4 = puStack_a0;
  _NSClassFromString();
  if (puVar4 == (undefined *)0x0) {
    if ((int)param_2 == 0) {
      puStack_a0 = (undefined *)0x0;
    }
    else {
      puStack_a0 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
      func_0x00782040();
      func_0x0077e4e0();
    }
  }
  else {
    _NSClassFromString();
    _objc_alloc();
    func_0x00785000();
    _objc_autorelease();
  }
  func_0x0077e720(*(undefined8 *)(param_1 + _DAT_00ac5ba0));
  *(undefined8 *)(param_1 + _DAT_00ac5bbc) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + _DAT_00ac5b94);
  puStack_90 = puStack_a0;
  _CFDataGetLength(uVar6);
  _CFDataAppendBytes(uVar6,&puStack_90,8);
  return puStack_a0;
}



/* Entry: 0062e620; end: 0062e627;  */

void FUN_0062e620(void)

{
  return;
}



/* Entry: 0062e628; end: 0062e68f; +[SCCofConfigTargetingResponseDebugData descriptor] */

void FUN_0062e628(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b634d0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae1588,
                    &PTR____CFConstantStringClassReference_00a47ae0,&PTR_DAT_00b23c48,
                    &PTR_DAT_00b23c60,1,0x10,0x1c);
    puRam0000000000b634d0 = puVar1;
  }
  return;
}



/* Entry: 0062e690; end: 0062e6f7; +[SCCofCofGradualRollout descriptor] */

void FUN_0062e690(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b634d8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae15d8,
                    &PTR____CFConstantStringClassReference_00a47b00,&PTR_DAT_00b23c48,
                    &PTR_s_uuid_00b23c80,2,0x10,0x1c);
    puRam0000000000b634d8 = puVar1;
  }
  return;
}



/* Entry: 0062e6f8; end: 0062e75f; +[SCCofConfigTargetingResponse descriptor] */

void FUN_0062e6f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b634e0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,
                    &_OBJC_CLASS___SCCofConfigTargetingResponse,
                    &PTR____CFConstantStringClassReference_00a47b20,&PTR_DAT_00b23c48,
                    &PTR_DAT_00b23cc0,9,0x40,0x1c);
    puRam0000000000b634e0 = puVar1;
  }
  return;
}



/* Entry: 0062e760; end: 0062e7eb; +[BenchmarkValue descriptor] */

undefined * FUN_0062e760(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b634e8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae16c8,
                    &PTR____CFConstantStringClassReference_00a47b40,&PTR_DAT_00b23de8,
                    &PTR_DAT_00b23e80,4,0x18,0x1c);
    func_0x00791460();
    puRam0000000000b634e8 = puVar1;
  }
  return puRam0000000000b634e8;
}



/* Entry: 0062e7ec; end: 0062e853; +[BenchmarkRequest descriptor] */

void FUN_0062e7ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b634f0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae1718,
                    &PTR____CFConstantStringClassReference_00a47b60,&PTR_DAT_00b23de8,
                    &PTR_DAT_00b23e00,2,0x18,0x1c);
    puRam0000000000b634f0 = puVar1;
  }
  return;
}



/* Entry: 0062e854; end: 0062e937; +[BenchmarkResult descriptor] */

void FUN_0062e854(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b634f8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae1768,
                    &PTR____CFConstantStringClassReference_00a47b80,&PTR_DAT_00b23de8,
                    &PTR_s_name_00b23e40,2,0x10,0x1c);
    puRam0000000000b634f8 = puVar1;
  }
  return;
}



/* Entry: 0062e938; end: 0062e943;  */

bool FUN_0062e938(uint param_1)

{
  return param_1 < 0x2e;
}



/* Entry: 0062e944; end: 0062e9bf;  */

undefined * FUN_0062e944(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63508 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a47bc0,&UNK_0081d53c,&UNK_0081d580,4,
                    FUN_0062e9c0,0);
    do {
      if (puRam0000000000b63508 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63508;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63508,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63508 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63508;
}



/* Entry: 0062e9c0; end: 0062e9cb;  */

bool FUN_0062e9c0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 0062e9cc; end: 0062ea47;  */

undefined * FUN_0062e9cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63510 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a47be0,&UNK_0081d590,&UNK_0081d5a8,3,
                    FUN_0062ea48,0);
    do {
      if (puRam0000000000b63510 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63510;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63510,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63510 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63510;
}



/* Entry: 0062ea48; end: 0062ea53;  */

bool FUN_0062ea48(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 0062ea54; end: 0062eacf;  */

undefined * FUN_0062ea54(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63518 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a47c00,&UNK_0081d5b4,&UNK_0081d604,5,
                    FUN_0062ead0,0);
    do {
      if (puRam0000000000b63518 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63518;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63518,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63518 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63518;
}



/* Entry: 0062ead0; end: 0062eadb;  */

bool FUN_0062ead0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 0062eadc; end: 0062eb6b;  */

undefined * FUN_0062eadc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63520 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec20(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a47c20,&UNK_0081d618,&UNK_0081f908,
                    0x1b3,FUN_0062eb6c,0,&UNK_0081ffd4);
    do {
      if (puRam0000000000b63520 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63520;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63520,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63520 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63520;
}



/* Entry: 0062eb6c; end: 0062ebb7;  */

undefined8 FUN_0062eb6c(uint param_1)

{
  if (((0x135 < param_1) && (0x5e < param_1 - 0x179)) &&
     ((0x21 < param_1 - 0x155 || ((1L << ((ulong)(param_1 - 0x155) & 0x3f) & 0x3fc3fffffU) == 0))))
  {
    return 0;
  }
  return 1;
}



/* Entry: 0062ebb8; end: 0062ec33;  */

undefined * FUN_0062ebb8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63528 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a47c40,&UNK_00820094,&UNK_008200d4,3,
                    FUN_0062ec34,0);
    do {
      if (puRam0000000000b63528 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63528;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63528,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63528 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63528;
}



/* Entry: 0062ec34; end: 0062ec3f;  */

bool FUN_0062ec34(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 0062ec40; end: 0062eca7; +[ConfigResult descriptor] */

void FUN_0062ec40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63530 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae1858,
                    &PTR____CFConstantStringClassReference_00a47c60,&PTR_DAT_00b23f08,
                    &PTR_DAT_00b24220,0x11,0x60,0x1c);
    puRam0000000000b63530 = puVar1;
  }
  return;
}



/* Entry: 0062eca8; end: 0062ed23; +[ConfigResult_InternalFields descriptor] */

undefined * FUN_0062eca8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63538 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae19e8,
                    &PTR____CFConstantStringClassReference_00a47c80,&PTR_DAT_00b23f08,
                    &PTR_DAT_00b24440,0x11,0x48,0x1c);
    func_0x00791420();
    puRam0000000000b63538 = puVar1;
  }
  return puRam0000000000b63538;
}



/* Entry: 0062ed24; end: 0062eda7; +[ConfigResult_InternalFields_SequenceIdCandidate descriptor] */

undefined * FUN_0062ed24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63540 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae1a10,
                    &PTR____CFConstantStringClassReference_00a47ca0,&PTR_DAT_00b23f08,
                    &PTR_DAT_00b23f20,2,0x10,0x1c);
    func_0x00791420();
    puRam0000000000b63540 = puVar1;
  }
  return puRam0000000000b63540;
}



/* Entry: 0062eda8; end: 0062ee2b; +[ConfigResult_InternalFields_StudyContext descriptor] */

undefined * FUN_0062eda8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63548 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae1a38,
                    &PTR____CFConstantStringClassReference_00a47cc0,&PTR_DAT_00b23f08,
                    &PTR_DAT_00b23fe0,3,0x18,0x1c);
    func_0x00791420();
    puRam0000000000b63548 = puVar1;
  }
  return puRam0000000000b63548;
}



/* Entry: 0062ee2c; end: 0062ee93; +[ConfigResultBundle descriptor] */

void FUN_0062ee2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63550 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae1920,
                    &PTR____CFConstantStringClassReference_00a47ce0,&PTR_DAT_00b23f08,
                    &PTR_DAT_00b23f60,2,0x18,0x1c);
    puRam0000000000b63550 = puVar1;
  }
  return;
}



/* Entry: 0062ee94; end: 0062eefb; +[SequenceIdCandidate descriptor] */

void FUN_0062ee94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63558 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae1970,
                    &PTR____CFConstantStringClassReference_00a47ca0,&PTR_DAT_00b23f08,
                    &PTR_DAT_00b23fa0,2,0x10,0x1c);
    puRam0000000000b63558 = puVar1;
  }
  return;
}



/* Entry: 0062eefc; end: 0062ef63; +[ClientTargetingExpression descriptor] */

void FUN_0062eefc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63560 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae1a60,
                    &PTR____CFConstantStringClassReference_00a47d00,&PTR_DAT_00b23f08,
                    &PTR_DAT_00b24040,6,0x28,0x1c);
    puRam0000000000b63560 = puVar1;
  }
  return;
}



/* Entry: 0062ef64; end: 0062efff; +[ClientTargetingExpression_PropertyMetadata descriptor] */

undefined * FUN_0062ef64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63568 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae1a88,
                    &PTR____CFConstantStringClassReference_00a47d20,&PTR_DAT_00b23f08,
                    &PTR_DAT_00b24100,9,0x38,0x1c);
    func_0x00791460();
    func_0x00791420(puVar1,param_2,&PTR_PTR_00ae1a60);
    puRam0000000000b63568 = puVar1;
  }
  return puRam0000000000b63568;
}



/* Entry: 0062f000; end: 0062f08f;  */

undefined * FUN_0062f000(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63570 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec20(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a47d40,&UNK_008200e0,&UNK_00820da4,0xde
                    ,FUN_0062f090,0,&UNK_0082111c);
    do {
      if (puRam0000000000b63570 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63570;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63570,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63570 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63570;
}



/* Entry: 0062f090; end: 0062f09b;  */

bool FUN_0062f090(uint param_1)

{
  return param_1 < 0xde;
}



/* Entry: 0062f09c; end: 0062f117;  */

undefined * FUN_0062f09c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63578 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a47d60,&UNK_00821148,&UNK_00821218,0x13
                    ,FUN_0062f118,0);
    do {
      if (puRam0000000000b63578 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b63578;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb63578,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b63578 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b63578;
}



/* Entry: 0062f118; end: 0062f123;  */

bool FUN_0062f118(uint param_1)

{
  return param_1 < 0x13;
}



/* Entry: 0062f124; end: 0062f18b; +[SCCOMMONRuid descriptor] */

void FUN_0062f124(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63580 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae1b78,
                    &PTR____CFConstantStringClassReference_00a47d80,&PTR_DAT_00b24660,
                    &PTR_s_type_00b24678,3,0x18,0x1c);
    puRam0000000000b63580 = puVar1;
  }
  return;
}



/* Entry: 0062f18c; end: 0062f1f3; +[MapRecord descriptor] */

void FUN_0062f18c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63588 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae1c18,
                    &PTR____CFConstantStringClassReference_00a47da0,&PTR_DAT_00b246e0,
                    &PTR_s_key_00b24738,2,0x18,0x1c);
    puRam0000000000b63588 = puVar1;
  }
  return;
}



/* Entry: 0062f1f4; end: 0062f25b; +[MapRecords descriptor] */

void FUN_0062f1f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63590 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae1c68,
                    &PTR____CFConstantStringClassReference_00a47dc0,&PTR_DAT_00b246e0,
                    &PTR_DAT_00b246f8,1,0x10,0x1c);
    puRam0000000000b63590 = puVar1;
  }
  return;
}



/* Entry: 0062f25c; end: 0062f2c3; +[StringArray descriptor] */

void FUN_0062f25c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b63598 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae1cb8,
                    &PTR____CFConstantStringClassReference_00a47de0,&PTR_DAT_00b246e0,
                    &PTR_DAT_00b24718,1,0x10,0x1c);
    puRam0000000000b63598 = puVar1;
  }
  return;
}



/* Entry: 0062f2c4; end: 0062f34f; +[Value descriptor] */

undefined * FUN_0062f2c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b635a0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae1d08,
                    &PTR____CFConstantStringClassReference_00a47e00,&PTR_DAT_00b246e0,
                    &PTR_DAT_00b24778,10,0x48,0x1c);
    func_0x00791460();
    puRam0000000000b635a0 = puVar1;
  }
  return puRam0000000000b635a0;
}



/* Entry: 0062f350; end: 0062f43f;  */

undefined1 FUN_0062f350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x0078a860(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00782c00(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(param_3);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 0062f440; end: 0062f483;  */

void FUN_0062f440(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  func_0x00784340(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  if ((int)param_2 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 0062f484; end: 0062f557;  */

undefined1 * FUN_0062f484(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00784940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_0062f558();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar4 = puVar3;
  func_0x00780e80();
  if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
    puVar2 = puVar3;
    func_0x00789e20(puVar3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00787200();
    _objc_release(puVar2);
  }
  else {
    puVar4 = (undefined1 *)0xffffffffffffffff;
  }
  _objc_release(puVar3);
  return puVar4;
}



/* Entry: 0062f558; end: 0062f6e3;  */

undefined1 * FUN_0062f558(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x00780860(param_1,param_2,&PTR____CFConstantStringClassReference_00a23f60);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00780ea0(param_1,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_1);
        }
        uVar3 = *(undefined8 *)(lStack_118 + lVar9 * 8);
        func_0x00787200(uVar3);
        puVar4 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
        func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x0077e720(puVar1,param_2,puVar4);
        _objc_release(puVar4);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_1;
      func_0x00780ea0(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  puVar7 = puVar1;
  func_0x00780e80();
  if (puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
    puVar7 = puVar1;
    func_0x00780e20();
  }
  else {
    puVar7 = (undefined1 *)0x0;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00784940();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  FUN_0062f558();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar7 = puVar6;
  func_0x00780e80();
  if (puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
    puVar5 = puVar6;
    func_0x00789e20(puVar6,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00787200();
    _objc_release(puVar5);
  }
  else {
    puVar7 = (undefined1 *)0xffffffffffffffff;
  }
  _objc_release(puVar6);
  return puVar7;
}



/* Entry: 0062f6e4; end: 0062f7b7;  */

undefined1 * FUN_0062f6e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00784940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_0062f558();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar4 = puVar3;
  func_0x00780e80();
  if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
    puVar2 = puVar3;
    func_0x00789e20(puVar3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00787200();
    _objc_release(puVar2);
  }
  else {
    puVar4 = (undefined1 *)0xffffffffffffffff;
  }
  _objc_release(puVar3);
  return puVar4;
}



/* Entry: 0062f7b8; end: 0062fa4f;  */

undefined * FUN_0062f7b8(ulong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar7 = param_1;
  func_0x007882e0();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar7;
  func_0x00792160(puVar2,param_2,
                  (SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),8) & 0x7ffffffffffffffc) << 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x0077fde0();
  uVar7 = param_1;
  func_0x007882e0();
  if (uVar7 != 0) {
    uVar7 = 2;
    do {
      func_0x007882e0();
      uVar3 = param_1;
      func_0x007882e0();
      if (uVar7 <= uVar3) {
        func_0x007882e0();
        uVar3 = param_1;
        func_0x007882e0();
        if (uVar7 + 1 <= uVar3) {
          func_0x007882e0();
          uVar3 = param_1;
          func_0x007882e0();
          if (uVar7 + 2 <= uVar3) {
            func_0x007882e0();
            func_0x007882e0();
          }
        }
      }
      puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
      _objc_alloc(PTR__OBJC_CLASS___NSString_00ac2988);
      func_0x00784e20();
      func_0x0077ef80(puVar2,param_2,puVar4);
      _objc_release(puVar4);
      uVar5 = param_1;
      func_0x007882e0();
      uVar3 = uVar7 + 3;
      uVar7 = uVar7 + 5;
    } while (uVar3 < uVar5);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSCalendar_00ac35e8;
  func_0x00781280(PTR__OBJC_CLASS___NSCalendar_00ac35e8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x007876a0();
  _objc_release(puVar2);
  return puVar4;
}



/* Entry: 0062fa50; end: 0062fb8b;  */

undefined * FUN_0062fa50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_00ac35e8;
  func_0x00781280(PTR__OBJC_CLASS___NSCalendar_00ac35e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x007876a0();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 0062fb8c; end: 0062fc4f;  */

bool FUN_0062fb8c(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  func_0x007817e0(PTR__OBJC_CLASS___NSDate_00ac2c88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792900();
  _objc_release(puVar1);
  return param_1 <= (double)(param_4 * 0x15180);
}



/* Entry: 0062fc50; end: 0062fc8b;  */

void FUN_0062fc50(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x007928e0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00789cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (puVar1,PTR_s_numberWithLongLong__00abd440,(long)(param_1 * 1000.0));
  return;
}



/* Entry: 0062fc8c; end: 0062fd8b;  */

void FUN_0062fc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  _objc_retain(param_3);
  func_0x00791600(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00792080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0062fd8c; end: 0062fe0b;  */

bool FUN_0062fd8c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x007806a0(param_3,param_2,param_4);
  return param_3 == -1;
}



/* Entry: 0062fe0c; end: 006300cf;  */

void FUN_0062fe0c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  bVar1 = param_3 != 0;
  if (param_3 == 0 && param_4 == 0) {
    lVar2 = 0;
  }
  else {
    if ((param_3 != 0) && (param_4 != 0)) {
      lVar2 = param_3;
      func_0x007806a0(param_3,param_2,param_4);
      bVar1 = lVar2 == 1;
    }
    lVar2 = param_3;
    if (!bVar1) {
      lVar2 = param_4;
    }
    _objc_retain(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar2);
  return;
}



/* Entry: 006300d0; end: 006300ef;  */

void FUN_006300d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007818f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___NSDate_00ac2c88,PTR_s_dateFromTodayWithOffsetDays_offs_00abb330,0,0,
             param_3);
  return;
}



/* Entry: 006300f0; end: 006301af;  */

void FUN_006300f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_00ac35e8;
  func_0x00781280(PTR__OBJC_CLASS___NSCalendar_00ac35e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  func_0x007817e0(PTR__OBJC_CLASS___NSDate_00ac2c88);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00789940(puVar1,param_2,puVar2,param_3,param_4,0,0x400);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00781820((double)param_5,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 006301b0; end: 00630227;  */

bool FUN_006301b0(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_00ac2c88;
    _objc_opt_class(PTR__OBJC_CLASS___NSDate_00ac2c88);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    if ((uVar3 & 1) != 0) {
      func_0x00792920(param_4);
      bVar1 = param_1 <= ABS(dVar4);
      goto LAB_0063020c;
    }
  }
  bVar1 = false;
LAB_0063020c:
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 00630228; end: 0063026b;  */

undefined * FUN_00630228(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  func_0x007817e0(PTR__OBJC_CLASS___NSDate_00ac2c88);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00782d60();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 0063026c; end: 0063028f;  */

long FUN_0063026c(double param_1)

{
  func_0x007928e0();
  return (long)(param_1 * 1000.0);
}



/* Entry: 00630290; end: 006304f7;  */

void FUN_00630290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDateComponents_00ac35f0;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDateComponents_00ac35f0);
  func_0x0078f060();
  func_0x0078d940(puVar1,param_2,param_4);
  func_0x00791400(puVar1,param_2,param_5);
  puVar2 = PTR__OBJC_CLASS___NSCalendar_00ac35e8;
  _objc_alloc(PTR__OBJC_CLASS___NSCalendar_00ac35e8);
  func_0x00784ee0();
  puVar3 = puVar2;
  func_0x00781880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 006304f8; end: 0063064f;  */

void FUN_006304f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_00ac35e8;
  _objc_alloc(PTR__OBJC_CLASS___NSCalendar_00ac35e8);
  func_0x00784ee0();
  puVar2 = puVar1;
  func_0x007807c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00630650; end: 00630707;  */

void FUN_00630650(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  _objc_alloc_init();
  uVar1 = puRam0000000000b635b0;
  puRam0000000000b635b0 = puVar2;
  _objc_release(uVar1);
  func_0x0078d8e0(puRam0000000000b635b0,param_2,&PTR____CFConstantStringClassReference_00a47e40);
  puVar2 = puRam0000000000b635b0;
  puVar3 = PTR__OBJC_CLASS___NSLocale_00ac2990;
  func_0x00788500(PTR__OBJC_CLASS___NSLocale_00ac2990,param_2,
                  &PTR____CFConstantStringClassReference_00a27f20);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ec40(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b635b0;
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_00ac2f88;
  func_0x00792980(PTR__OBJC_CLASS___NSTimeZone_00ac2f88,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00790ae0(puVar2,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar3);
  return;
}



/* Entry: 00630708; end: 006307d7;  */

void FUN_00630708(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b635c8 != -1) {
    _dispatch_once(0xb635c8,&PTR___NSConcreteGlobalBlock_00a0b4a0);
  }
  uVar1 = uRam0000000000b635c0;
  _objc_retain(uRam0000000000b635c0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 006307d8; end: 00630843;  */

void FUN_006307d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x0077bd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x007818a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00630844; end: 0063095b;  */

void FUN_00630844(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  func_0x0077bd20(PTR__OBJC_CLASS___NSDate_00ac2c88);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00792080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0063095c; end: 006309c3;  */

void FUN_0063095c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  func_0x00789ea0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(param_4);
    param_1 = param_4;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 006309c4; end: 00630a97;  */

undefined1 FUN_006309c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  _objc_retain(param_3);
  func_0x00782b60(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 00630a98; end: 00630b0f;  */

void FUN_00630a98(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar1 + 0x10))();
  if ((int)lVar1 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 00630b10; end: 00630be7;  */

undefined1 FUN_00630b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 1;
  _objc_retain(param_3);
  func_0x00782b60(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 00630be8; end: 00630c1f;  */

void FUN_00630be8(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  (**(code **)(uVar1 + 0x10))();
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  }
  return;
}



/* Entry: 00630c20; end: 00630d2b;  */

void FUN_00630c20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_00630d2c;
  uStack_40 = 0x630d3c;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  func_0x00781fe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = puVar1;
  _objc_retain(param_3);
  func_0x00782b60(param_1);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00630d2c; end: 00630d43;  */

void FUN_00630d2c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 00630d44; end: 00630dbf;  */

void FUN_00630d44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x0078f4e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 00630dc0; end: 00630ddb;  */

void FUN_00630dc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_removeObjectForKey__00abda38);
    return;
  }
  return;
}



/* Entry: 00630ddc; end: 00630e07;  */

void FUN_00630ddc(ulong param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00788b40();
                    /* WARNING: Could not recover jumptable at 0x00789c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            ((double)param_1 / 1048576.0,puVar1,PTR_s_numberWithDouble__00abd418);
  return;
}



/* Entry: 00630e08; end: 00630e23;  */

void FUN_00630e08(undefined8 param_1,undefined8 param_2,ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00789c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            ((double)param_3 / 1048576.0,PTR__OBJC_CLASS___NSNumber_00ac29d8,
             PTR_s_numberWithDouble__00abd418);
  return;
}



/* Entry: 00630e24; end: 00630e77;  */

void FUN_00630e24(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b63608 != -1) {
    _dispatch_once(0xb63608,&PTR___NSConcreteGlobalBlock_00a0b4f0);
  }
  uVar1 = uRam0000000000b63600;
  _objc_retain(uRam0000000000b63600);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00630e78; end: 00630eb3;  */

void FUN_00630e78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
  func_0x007801a0(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0,param_2,
                  &PTR____CFConstantStringClassReference_00a47e60);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b63600;
  puRam0000000000b63600 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00630eb4; end: 00630f13;  */

undefined * FUN_00630eb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_00ac2d08;
  func_0x0078a7c0(PTR__OBJC_CLASS___NSPredicate_00ac2d08,param_2,
                  &PTR____CFConstantStringClassReference_00a25040);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00782ec0();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 00630f14; end: 00630fc7;  */

void FUN_00630f14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_retain(param_3);
  func_0x0078ac20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00780840(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00780820(uVar2,param_2,&PTR____CFConstantStringClassReference_00a212a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = uVar3;
  func_0x00788bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00630fc8; end: 00630ff7;  */

void FUN_00630fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _CFURLCreateStringByAddingPercentEscapes
            (0,param_3,0,&PTR____CFConstantStringClassReference_00a47e80,0x8000100);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00630ff8; end: 00631103;  */

void FUN_00630ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00791f80(param_3,param_2,&PTR____CFConstantStringClassReference_00a21380,
                  &PTR____CFConstantStringClassReference_00a27120);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00791f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00631104; end: 0063110f;  */

void FUN_00631104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00783a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_formatDate_referenceDate_maxHour_00abbb80,param_3,param_4,8,1);
  return;
}



/* Entry: 00631110; end: 00631a83;  */

void FUN_00631110(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,long param_6,int param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (lRam0000000000b63628 != -1) {
    _dispatch_once(0xb63628,&PTR___NSConcreteGlobalBlock_00a0b580);
  }
  _os_unfair_lock_lock(0xb635d4);
  func_0x00792900(param_4);
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
  if (-10.0 <= param_1) {
    if (param_7 == 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_00a47ec0;
      _SCLocalizedString(&PTR____CFConstantStringClassReference_00a47ec0,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_00a47ea0;
      _SCLocalizedString(&PTR____CFConstantStringClassReference_00a47ea0,0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if (-59.0 <= param_1) {
      ppuVar5 = &PTR____CFConstantStringClassReference_00a47ee0;
      _SCLocalizedString(&PTR____CFConstantStringClassReference_00a47ee0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078c100(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (-90.0 <= param_1) {
        ppuVar6 = &PTR____CFConstantStringClassReference_00a47f00;
        _SCLocalizedString(&PTR____CFConstantStringClassReference_00a47f00,0);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_00631398;
      }
      if (-3540.0 <= param_1) {
        ppuVar5 = &PTR____CFConstantStringClassReference_00a47f20;
        _SCLocalizedString(&PTR____CFConstantStringClassReference_00a47f20,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x0078c100(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (-5400.0 <= param_1) {
          ppuVar6 = &PTR____CFConstantStringClassReference_00a47f40;
          _SCLocalizedString(&PTR____CFConstantStringClassReference_00a47f40,0);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_00631398;
        }
        if (-param_1 <= (double)(ulong)(param_6 * 0xe10)) {
          ppuVar5 = &PTR____CFConstantStringClassReference_00a47f60;
          _SCLocalizedString(&PTR____CFConstantStringClassReference_00a47f60,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x0078c100(ppuVar6);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSDate_00ac2c88;
          func_0x007817e0(PTR__OBJC_CLASS___NSDate_00ac2c88);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSCalendar_00ac35e8;
          func_0x00781280();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x007807c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x0078e580();
          func_0x0078efe0(puVar2);
          func_0x00790300(puVar2);
          puVar3 = puVar1;
          func_0x00781880(puVar1);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_4;
          func_0x007806a0();
          if (lVar4 == 1) {
            if (ppuRam0000000000b635d8 == (undefined **)0x0) {
              ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
              _objc_alloc_init();
              ppuVar6 = ppuRam0000000000b635d8;
              ppuRam0000000000b635d8 = ppuVar10;
              _objc_release(ppuVar6);
              ppuVar10 = ppuRam0000000000b635d8;
              ppuVar6 = &PTR____CFConstantStringClassReference_00a47f80;
              _SCLocalizedString(&PTR____CFConstantStringClassReference_00a47f80,0);
              _objc_retainAutoreleasedReturnValue();
              func_0x0078d8e0(ppuVar10);
              _objc_release(ppuVar6);
            }
            FUN_00631a84();
            ppuVar6 = ppuRam0000000000b635d8;
            func_0x00792080(ppuRam0000000000b635d8);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar7 = PTR__OBJC_CLASS___NSDate_00ac2c88;
            func_0x00781940(0xc0f5180000000000);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar1;
            func_0x007807c0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar2);
            func_0x0078e580(puVar8);
            func_0x0078efe0(puVar8);
            func_0x00790300(puVar8);
            puVar9 = puVar1;
            func_0x00781880();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = param_4;
            func_0x007806a0();
            if (lVar4 == 1) {
              if (ppuRam0000000000b635e0 == (undefined **)0x0) {
                ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
                _objc_alloc_init();
                ppuVar6 = ppuRam0000000000b635e0;
                ppuRam0000000000b635e0 = ppuVar10;
                _objc_release(ppuVar6);
                ppuVar10 = ppuRam0000000000b635e0;
                ppuVar6 = &PTR____CFConstantStringClassReference_00a47fa0;
                _SCLocalizedString(&PTR____CFConstantStringClassReference_00a47fa0,0);
                _objc_retainAutoreleasedReturnValue();
                func_0x0078d8e0(ppuVar10);
                _objc_release(ppuVar6);
              }
              FUN_00631a84();
              ppuVar6 = ppuRam0000000000b635e0;
              func_0x00792080(ppuRam0000000000b635e0);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar8;
            }
            else {
              ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSLocale_00ac2990;
              func_0x00781320();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = PTR__OBJC_CLASS___NSDate_00ac2c88;
              func_0x00781940(0xc11fa40000000000);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar1;
              func_0x007807c0(puVar1);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar8);
              func_0x0078e580(puVar2);
              func_0x0078efe0(puVar2);
              func_0x00790300(puVar2);
              puVar8 = puVar1;
              func_0x00781880();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = param_4;
              func_0x007806a0();
              if (lVar4 == 1) {
                ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
                func_0x00792f80(PTR__OBJC_CLASS___NSDateFormatter_00ac2f98);
                _objc_retainAutoreleasedReturnValue();
                ppuVar6 = ppuVar12;
                func_0x00792080();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                if (ppuRam0000000000b635f0 == (undefined **)0x0) {
                  ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
                  _objc_alloc_init();
                  ppuVar6 = ppuRam0000000000b635f0;
                  ppuRam0000000000b635f0 = ppuVar12;
                  _objc_release(ppuVar6);
                }
                FUN_00631a84();
                puVar13 = puVar1;
                func_0x007807c0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar2);
                puVar14 = puVar13;
                func_0x00781960();
                ppuVar6 = ppuRam0000000000b635f0;
                puVar2 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
                ppuVar12 = ppuRam0000000000b635f0;
                if ((long)puVar14 < 10) {
                  func_0x007884a0(ppuRam0000000000b635f0);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00781860(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x0078d8e0(ppuVar6);
                }
                else {
                  func_0x007884a0(ppuRam0000000000b635f0);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00781860(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x0078d8e0(ppuVar6);
                }
                _objc_release(puVar2);
                _objc_release(ppuVar12);
                ppuVar6 = ppuRam0000000000b635f0;
                func_0x00792080(ppuRam0000000000b635f0);
                _objc_retainAutoreleasedReturnValue();
                ppuVar12 = ppuVar10;
                func_0x00789ea0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar15 = ppuVar12;
                func_0x007878e0();
                ppuVar18 = ppuVar6;
                if ((int)ppuVar15 != 0) {
                  ppuVar16 = ppuVar6;
                  func_0x00780860(ppuVar6);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar15 = ppuVar16;
                  func_0x00788220();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x007871a0();
                  _objc_release(ppuVar15);
                  ppuVar15 = &PTR____CFConstantStringClassReference_00a48020;
                  func_0x00780860(&PTR____CFConstantStringClassReference_00a48020);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar17 = ppuVar15;
                  func_0x00789e00();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00791ec0(ppuVar6);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar6);
                  _objc_release(ppuVar17);
                  _objc_release(ppuVar15);
                  _objc_release(ppuVar16);
                }
                puVar2 = puVar1;
                func_0x007807c0(puVar1);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar13);
                func_0x0078d940(puVar2);
                func_0x0078f060(puVar2);
                func_0x0078e580(puVar2);
                func_0x0078efe0(puVar2);
                func_0x00790300(puVar2);
                puVar13 = puVar1;
                func_0x00781880(puVar1);
                _objc_retainAutoreleasedReturnValue();
                lVar4 = param_4;
                func_0x007806a0();
                ppuVar6 = ppuVar18;
                if (lVar4 == -1) {
                  if (puRam0000000000b635e8 == (undefined *)0x0) {
                    puVar19 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
                    _objc_alloc_init();
                    puVar14 = puRam0000000000b635e8;
                    puRam0000000000b635e8 = puVar19;
                    _objc_release(puVar14);
                    func_0x0078d8e0(puRam0000000000b635e8);
                  }
                  puVar14 = PTR__OBJC_CLASS___NSString_00ac2988;
                  puVar19 = puRam0000000000b635e8;
                  func_0x00792080();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x0078c100();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar19);
                  if (puVar14 != (undefined *)0x0) {
                    func_0x00791ec0(ppuVar18);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar18);
                    _objc_release(puVar14);
                  }
                }
                _objc_release(puVar13);
              }
              _objc_release(ppuVar12);
              _objc_release(puVar8);
              _objc_release(puVar11);
              _objc_release(ppuVar10);
            }
            _objc_release(puVar9);
            _objc_release(puVar7);
          }
          _objc_release(puVar3);
          _objc_release(puVar2);
          _objc_release(puVar1);
        }
      }
    }
    _objc_release(ppuVar5);
  }
LAB_00631398:
  _os_unfair_lock_unlock(0xb635d4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar6);
  return;
}



/* Entry: 00631a84; end: 00631ad3;  */

void FUN_00631a84(void)

{
  if ((bRam0000000000b635d0 & 1) != 0) {
    if (lRam0000000000b63628 != -1) {
      _dispatch_once(0xb63628,&PTR___NSConcreteGlobalBlock_00a0b580);
    }
                    /* WARNING: Could not recover jumptable at 0x0077ab7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_assert_owner_0099a488)(0xb635d4);
    return;
  }
  return;
}



/* Entry: 00631ad4; end: 00631bb7;  */

void FUN_00631ad4(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b63628 != -1) {
    _dispatch_once(0xb63628,&PTR___NSConcreteGlobalBlock_00a0b580);
  }
  _os_unfair_lock_lock(0xb635d4);
  uVar1 = uRam0000000000b635d8;
  uRam0000000000b635d8 = 0;
  _objc_release(uVar1);
  uVar1 = uRam0000000000b635e0;
  uRam0000000000b635e0 = 0;
  _objc_release(uVar1);
  uVar1 = uRam0000000000b635e8;
  uRam0000000000b635e8 = 0;
  _objc_release(uVar1);
  uVar1 = uRam0000000000b635f0;
  uRam0000000000b635f0 = 0;
  _objc_release(uVar1);
  uRam0000000000b635d0 = 0;
                    /* WARNING: Could not recover jumptable at 0x0077aba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_0099a4a0)(0xb635d4);
  return;
}



/* Entry: 00631bb8; end: 00631dd3;  */

void FUN_00631bb8(double param_1,double param_2,undefined **param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7)

{
  undefined **ppuVar1;
  int iVar2;
  uint uVar3;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
  uVar3 = (uint)param_1;
  if ((int)uVar3 < 0) {
    func_0x00783ae0(-param_1);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_00631d24;
  }
  if ((double)uVar3 <= param_2) {
    if (param_5 == 0) {
      if (param_6 == 0) {
        param_3 = &PTR____CFConstantStringClassReference_00a47ec0;
      }
      else {
        param_3 = &PTR____CFConstantStringClassReference_00a47ea0;
      }
    }
    else {
      param_3 = &PTR____CFConstantStringClassReference_00a480a0;
    }
    _SCLocalizedString(param_3,0);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_00631d24;
  }
  if (uVar3 < 0x3c) {
    param_3 = &PTR____CFConstantStringClassReference_00a480c0;
LAB_00631ccc:
    _SCLocalizedString(param_3,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    iVar2 = 0x1e;
    if (param_7 == 0) {
      iVar2 = 0;
    }
    uVar3 = ((iVar2 + uVar3) / 0x3c) * 0x3c;
    if (uVar3 < 0xe10) {
      param_3 = &PTR____CFConstantStringClassReference_00a480e0;
      goto LAB_00631ccc;
    }
    iVar2 = 0x708;
    if (param_7 == 0) {
      iVar2 = 0;
    }
    uVar3 = ((uVar3 + iVar2) / 0xe10) * 0xe10;
    if (uVar3 >> 7 < 0x2a3) {
      param_3 = &PTR____CFConstantStringClassReference_00a48100;
      goto LAB_00631ccc;
    }
    iVar2 = 0xa8c0;
    if (param_7 == 0) {
      iVar2 = 0;
    }
    if (((uVar3 + iVar2) / 0x15180) * 0x15180 < 0x93a80) {
      FUN_006342d0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x006342e8();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  func_0x0078c100(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  param_3 = ppuVar1;
LAB_00631d24:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_3);
  return;
}



/* Entry: 00631dd4; end: 0063226b;  */

void FUN_00631dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                 long param_5)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00787b20();
  if (((ulong)puVar3 & 1) != 0) {
    ppuVar11 = (undefined **)0x0;
    goto LAB_00632100;
  }
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSCalendar_00ac35e8;
  func_0x00781280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  func_0x007817e0(PTR__OBJC_CLASS___NSDate_00ac2c88);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x007807e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00781960();
  ppuVar7 = ppuVar5;
  func_0x00789520();
  ppuVar8 = ppuVar5;
  func_0x00794560();
  ppuVar9 = ppuVar4;
  func_0x007807a0();
  ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
  ppuVar10 = ppuVar4;
  if (ppuVar8 == (undefined **)0x0) {
    if (ppuVar7 != (undefined **)0x0) {
      func_0x007807e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar10;
      func_0x00789520();
      ppuVar7 = ppuVar10;
      func_0x00781960();
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
      if (0.01 <= ABS((double)(long)((double)(long)ppuVar7 / 28.0 + (double)(long)ppuVar6) + -1.0))
      {
        ppuVar6 = &PTR____CFConstantStringClassReference_00a481e0;
        func_0x00634ad8(&PTR____CFConstantStringClassReference_00a481e0,
                        &PTR____CFConstantStringClassReference_00a481c0,0);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_006320c0;
      }
      ppuVar11 = &PTR____CFConstantStringClassReference_00a481a0;
      func_0x00634ad8(&PTR____CFConstantStringClassReference_00a481a0,
                      &PTR____CFConstantStringClassReference_00a481c0,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_006320e4;
    }
    if ((0 < (long)ppuVar6) &&
       ((ppuVar6 != (undefined **)((long)&MACH_HEADER.magic + 1) || (param_5 <= (long)ppuVar9)))) {
      if (ppuVar6 == (undefined **)((long)&MACH_HEADER.magic + 1)) {
        ppuVar10 = &PTR____CFConstantStringClassReference_00a48120;
        _SCLocalizedString(&PTR____CFConstantStringClassReference_00a48120,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else if ((undefined **)((long)&MACH_HEADER.cputype + 2) < ppuVar6) {
        if (ABS((double)(long)((double)ppuVar6 / 7.0) + -1.0) < 0.01) {
          ppuVar11 = &PTR____CFConstantStringClassReference_00a48160;
          _SCLocalizedString(&PTR____CFConstantStringClassReference_00a48160,0);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_006320e8;
        }
        ppuVar10 = &PTR____CFConstantStringClassReference_00a48180;
        _SCLocalizedString(&PTR____CFConstantStringClassReference_00a48180,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar10 = &PTR____CFConstantStringClassReference_00a48140;
        _SCLocalizedString(&PTR____CFConstantStringClassReference_00a48140,0);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x0078c100(ppuVar11);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_006320e4;
    }
    _objc_retain(param_4);
    ppuVar11 = param_4;
  }
  else {
    func_0x007807e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar10;
    func_0x00794560();
    ppuVar7 = ppuVar10;
    func_0x00781960();
    ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
    dVar12 = (double)(long)ppuVar7 / 365.0 + (double)(long)ppuVar6;
    if (1.2 <= dVar12) {
      if (1.7 <= dVar12) {
        dVar13 = (double)(long)dVar12 + 0.2;
        if (dVar12 <= dVar13) {
          ppuVar6 = &PTR____CFConstantStringClassReference_00a48240;
          _SCLocalizedString(&PTR____CFConstantStringClassReference_00a48240,0);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          dVar14 = (double)(long)dVar12 + 0.7;
          bVar1 = false;
          bVar2 = true;
          if (dVar13 <= dVar12) {
            bVar1 = false;
            bVar2 = true;
            if (!NAN(dVar12) && !NAN(dVar14)) {
              bVar1 = dVar12 == dVar14;
              bVar2 = dVar14 <= dVar12;
            }
          }
          if (!bVar2 || bVar1) {
            ppuVar6 = &PTR____CFConstantStringClassReference_00a48260;
            _SCLocalizedString(&PTR____CFConstantStringClassReference_00a48260,0);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            ppuVar6 = &PTR____CFConstantStringClassReference_00a48240;
            _SCLocalizedString(&PTR____CFConstantStringClassReference_00a48240,0);
            _objc_retainAutoreleasedReturnValue();
          }
        }
LAB_006320c0:
        func_0x0078c100(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
        goto LAB_006320e4;
      }
      ppuVar11 = &PTR____CFConstantStringClassReference_00a48220;
    }
    else {
      ppuVar11 = &PTR____CFConstantStringClassReference_00a48200;
    }
    _SCLocalizedString(ppuVar11,0);
    _objc_retainAutoreleasedReturnValue();
LAB_006320e4:
    _objc_release(ppuVar10);
  }
LAB_006320e8:
  _objc_release(ppuVar5);
  _objc_release(puVar3);
  _objc_release(ppuVar4);
LAB_00632100:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar11);
  return;
}



/* Entry: 0063226c; end: 0063227b;  */

void FUN_0063226c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00783ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___NSString_00ac2988,PTR_s_formatRelativeDate_localizedToda_00abbbb0,
             param_3,param_4,0);
  return;
}



/* Entry: 0063227c; end: 0063244f;  */

void FUN_0063227c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  _objc_retain(param_3);
  func_0x007916c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00792080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00632450; end: 00632567;  */

void FUN_00632450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSRegularExpression_00ac3188;
  func_0x0078b1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x007882e0(param_3);
  puVar2 = puVar1;
  func_0x00788f60();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar2 == (undefined *)0x0) ||
     (puVar3 = puVar2, func_0x00780e80(), puVar3 == (undefined *)0x0)) {
    uVar4 = 0;
  }
  else {
    puVar3 = puVar2;
    func_0x00789e00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078ad60();
    uVar4 = param_3;
    func_0x007924a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar4);
  return;
}



/* Entry: 00632568; end: 0063268f;  */

undefined *
FUN_00632568(double param_1,undefined8 param_2,double param_3,undefined *param_4,undefined8 param_5,
            long param_6,long param_7,undefined *param_8,undefined *param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_00ac32e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((param_6 != 0) && (param_7 != 0)) {
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_alloc();
    uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_00998fd0;
    param_8 = (undefined *)((long)&MACH_HEADER.magic + 1);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    lStack_50 = param_7;
    func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8,param_5,&lStack_50,&uStack_58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    func_0x00786960(puVar1,param_5,param_6,puVar2);
    _objc_release(param_6);
    _objc_release(puVar2);
    param_6 = 1;
    param_7 = 0;
    func_0x0077fc40(0x7fefffffffffffff,0,puVar1,param_5,1,0);
    param_1 = (double)(ulong)(uint)(int)param_3;
    _objc_release(puVar1);
    param_4 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((long)param_8 < (long)param_9) {
    dVar3 = (double)(long)param_9;
    puVar1 = PTR__OBJC_CLASS___UIFont_00ac3290;
    func_0x007839a0(PTR__OBJC_CLASS___UIFont_00ac3290,param_5,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00793ae0(PTR__OBJC_CLASS___NSString_00ac2988,param_5,param_6,puVar1);
    if (param_1 <= dVar3) {
      func_0x00788f80(param_1,param_4,param_5,param_6,param_7,param_8,(mach_header *)(param_9 + -1))
      ;
      param_9 = param_4;
    }
    param_8 = param_9;
    _objc_release(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return param_8;
}



/* Entry: 00632690; end: 0063276b;  */

long FUN_00632690(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  double dVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_6 < param_7) {
    dVar2 = (double)param_7;
    puVar1 = PTR__OBJC_CLASS___UIFont_00ac3290;
    func_0x007839a0(PTR__OBJC_CLASS___UIFont_00ac3290,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00793ae0(PTR__OBJC_CLASS___NSString_00ac2988,param_3,param_4,puVar1);
    if (param_1 <= dVar2) {
      func_0x00788f80(param_1,param_2,param_3,param_4,param_5,param_6,param_7 + -1);
      param_7 = param_2;
    }
    param_6 = param_7;
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return param_6;
}



/* Entry: 0063276c; end: 006327eb;  */

void FUN_0063276c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  func_0x00792160(PTR__OBJC_CLASS___NSMutableString_00ac2cc0);
  _objc_retainAutoreleasedReturnValue();
  if (0 < param_3) {
    do {
      _arc4random_uniform();
      func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a248e0);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 006327ec; end: 00632997;  */

ulong FUN_006327ec(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  long lStack_68;
  
  _objc_retain(param_3);
  lVar4 = param_1;
  func_0x007882e0();
  lVar5 = param_3;
  func_0x007882e0();
  uVar12 = 0xffffffffffffffff;
  if ((lVar4 != 0) && (lVar5 != 0)) {
    uVar12 = lVar4 + 1;
    uVar1 = lVar5 + 1;
    puVar6 = (ulong *)(uVar12 * uVar1 * 8);
    _malloc();
    if (lVar4 != -1) {
      uVar9 = 0;
      do {
        puVar6[uVar9] = uVar9;
        uVar9 = uVar9 + 1;
      } while (uVar12 != uVar9);
    }
    if (uVar1 != 0) {
      uVar9 = 0;
      puVar10 = puVar6;
      do {
        *puVar10 = uVar9;
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + lVar4 + 1;
      } while (uVar1 != uVar9);
    }
    if (1 < uVar12) {
      lStack_68 = 1;
      puVar10 = puVar6;
      do {
        puVar10 = puVar10 + 1;
        if (1 < uVar1) {
          lVar13 = 0;
          puVar11 = puVar10;
          do {
            lVar7 = param_1;
            func_0x00780140(param_1,param_2,lStack_68 + -1);
            lVar8 = param_3;
            func_0x00780140(param_3,param_2,lVar13);
            uVar2 = puVar11[-1];
            uVar9 = puVar11[lVar4] + 1;
            if ((int)lVar7 != (int)lVar8) {
              uVar2 = uVar2 + 1;
            }
            if (*puVar11 + 1 <= uVar9) {
              uVar9 = *puVar11 + 1;
            }
            if (uVar9 <= uVar2) {
              uVar2 = uVar9;
            }
            (puVar11 + lVar4)[1] = uVar2;
            lVar13 = lVar13 + 1;
            puVar11 = puVar11 + lVar4 + 1;
          } while (lVar5 != lVar13);
        }
        bVar3 = lStack_68 != lVar4;
        lStack_68 = lStack_68 + 1;
      } while (bVar3);
    }
    uVar12 = puVar6[uVar1 * uVar12 + -1];
    _free();
  }
  _objc_release(param_3);
  return uVar12;
}



/* Entry: 00632998; end: 00632a63;  */

void FUN_00632998(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  uVar1 = param_1;
  func_0x007882e0();
  func_0x00792160(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x007882e0(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_00999f30;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_00632a64;
  puStack_40 = &UNK_00a0b530;
  puStack_38 = puVar2;
  _objc_retain(puVar2);
  func_0x00782ca0(param_1,param_2,0,uVar1,0x102,&puStack_58);
  puVar3 = puVar2;
  func_0x00780e20(puVar2);
  _objc_release(puStack_38);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 00632a64; end: 00632a6f;  */

void FUN_00632a64(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077ef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_appendString__00aba8d8,param_2);
  return;
}



/* Entry: 00632a70; end: 00632b33;  */

void FUN_00632a70(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined2 uStack_43;
  undefined1 uStack_41;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_retainAutorelease();
  func_0x0077bcc0();
  uVar2 = param_3;
  func_0x007882e0();
  puVar3 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
  func_0x00781640(PTR__OBJC_CLASS___NSMutableData_00ac2cc8);
  _objc_retainAutoreleasedReturnValue();
  uStack_41 = 0;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      uStack_43 = *(undefined2 *)(uVar1 + uVar4);
      uVar4 = uVar4 + 2;
      _strtoul(&uStack_43,0,0x10);
      func_0x0077ee80(puVar3);
    } while (uVar4 < uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}


