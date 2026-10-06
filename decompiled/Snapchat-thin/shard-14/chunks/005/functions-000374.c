/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4becac; end: 10b4bed67;  */

void FUN_10b4becac(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined **param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 auStack_118 [24];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_68;
  long lStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = param_4;
  lStack_60 = param_5;
  if ((param_5 == 0) || (*(char *)((long)param_4 + param_5 + -1) != '/')) {
    puVar1 = &UNK_10f773c6d;
    uVar3 = param_3;
    func_0x000107c284bc();
    pppuVar2 = &ppuStack_68;
    ppuVar4 = &puStack_98;
    param_4 = &puStack_c8;
    puStack_c8 = param_2;
    uStack_c0 = param_3;
    puStack_98 = puVar1;
    uStack_90 = uVar3;
    func_0x000107c2ba44(param_1,pppuVar2,ppuVar4,param_4);
  }
  else {
    pppuVar2 = &ppuStack_68;
    ppuVar4 = &puStack_98;
    puStack_98 = param_2;
    uStack_90 = param_3;
    func_0x000107c2ba40(param_1,pppuVar2,ppuVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  ppuVar5 = *pppuVar2;
  FUN_10b4becac(auStack_118,param_7,param_8,param_5,param_6);
  func_0x000107c3024c(ppuVar5,auStack_118,ppuVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
  ppuVar5 = pppuVar2[1];
  func_0x000107c30250(ppuVar5,ppuVar4);
  func_0x000107c30364(param_4,ppuVar5);
  return;
}



/* Entry: 10b4bed68; end: 10b4bedfb;  */

void FUN_10b4bed68(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  FUN_10b4becac(auStack_48,param_6,param_7,param_4,param_5);
  func_0x000107c3024c(uVar1,auStack_48,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  uVar1 = param_1[1];
  func_0x000107c30250(uVar1,param_2);
  func_0x000107c30364(param_3,uVar1);
  return;
}



/* Entry: 10b4bedfc; end: 10b4bee4b;  */

void FUN_10b4bedfc(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10b4bee4c();
  if (param_1 != 0) {
    func_0x000100063660(param_4,&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 10b4bee4c; end: 10b4bee9f;  */

bool FUN_10b4bee4c(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(*(ulong *)*param_1 & 0xfffffffffffffffc);
  uVar2 = (ulong)*(char *)((long)puVar3 + 0x17);
  if ((long)uVar2 < 0) {
    uVar2 = puVar3[1];
    puVar3 = (undefined8 *)*puVar3;
  }
  if ((uVar2 < param_3 + 1) || (*(char *)((long)puVar3 + ~param_3 + uVar2) != '/')) {
    return false;
  }
  if (param_3 == 0) {
    return true;
  }
  if (param_3 <= uVar2) {
    lVar1 = (long)puVar3 + (uVar2 - param_3);
    _memcmp(lVar1,param_2,param_3);
    return (int)lVar1 == 0;
  }
  return false;
}



/* Entry: 10b4beea0; end: 10b4beee3;  */

bool FUN_10b4beea0(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  if (param_4 == 0) {
    return true;
  }
  if (param_2 < param_4) {
    return false;
  }
  param_1 = param_1 + (param_2 - param_4);
  _memcmp(param_1,param_3,param_4);
  return (int)param_1 == 0;
}



/* Entry: 10b4beee4; end: 10b4bef9f;  */

undefined8 FUN_10b4beee4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  lStack_38 = param_2;
  func_0x000107885418(puVar2,0x2f,0xffffffffffffffff);
  if ((puVar2 != (undefined8 *)0xffffffffffffffff) && (lVar1 = (long)puVar2 + 1, lVar1 != lStack_38)
     ) {
    if (param_3 != 0) {
      func_0x000107c2810c(&uStack_40,0,lVar1);
      FUN_10b4befa0();
      func_0x000107c27b9c(param_3,auStack_58);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
    }
    func_0x000107c2810c(&uStack_40,lVar1,0xffffffffffffffff);
    FUN_10b4befa0();
    func_0x000107c27b9c(param_4,auStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
    return 1;
  }
  return 0;
}



/* Entry: 10b4befa0; end: 10b4befaf;  */

undefined1 * FUN_10b4befa0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000008 = param_1;
  uStack0000000000000010 = param_2;
  func_0x000107c60c50(&stack0x00000018,param_1,param_2);
  return &stack0x00000018;
}



/* Entry: 10b4befb0; end: 10b4bf053;  */

undefined8 * FUN_10b4befb0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam000000011383d910 & 1) == 0) {
    iVar1 = 0x1383d910;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&UNK_10ae7c978,0x11383d908,0x100000000);
      ___cxa_guard_release(0x11383d910);
    }
  }
  func_0x000107c2b9f0(0x11383d908);
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 == (undefined8 *)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
              (param_1,*param_1,param_1[1]);
    param_1[3] = param_1;
    puVar2 = param_1;
  }
  func_0x000107c2b9fc(0x11383d908);
  return puVar2;
}



/* Entry: 10b4bf054; end: 10b4bf087;  */

ulong FUN_10b4bf054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = &uStack_18;
  uStack_28 = param_3;
  uStack_20 = param_2;
  uStack_18 = param_1;
  FUN_10b4bf19c(puVar1,&uStack_20,&uStack_28);
  return (ulong)puVar1 | 3;
}



/* Entry: 10b4bf088; end: 10b4bf10f;  */

void FUN_10b4bf088(ulong *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  if ((*param_1 & 3) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm_1103462b8)
              (*param_1 & 0xfffffffffffffffc);
    return;
  }
  if (param_4 == 0) {
    func_0x000107c39894(param_2,param_3);
  }
  else {
    FUN_10b4bf054();
    param_2 = param_4;
  }
  *param_1 = param_2;
  return;
}



/* Entry: 10b4bf110; end: 10b4bf127;  */

undefined8 * FUN_10b4bf110(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    return (undefined8 *)param_1[3];
  }
  if ((bRam000000011383d910 & 1) == 0) {
    iVar1 = 0x1383d910;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&UNK_10ae7c978,0x11383d908,0x100000000);
      ___cxa_guard_release(0x11383d910);
    }
  }
  func_0x000107c2b9f0(0x11383d908);
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 == (undefined8 *)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
              (param_1,*param_1,param_1[1]);
    param_1[3] = param_1;
    puVar2 = param_1;
  }
  func_0x000107c2b9fc(0x11383d908);
  return puVar2;
}



/* Entry: 10b4bf128; end: 10b4bf19b;  */

void FUN_10b4bf128(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lStack_38;
  
  plVar1 = &lStack_38;
  lStack_38 = param_2;
  func_0x000107c30264(plVar1);
  if (lStack_38 != 0) {
    func_0x000107c30254(param_3,param_4);
    func_0x000107c30268(param_1,lStack_38,plVar1,param_3);
  }
  return;
}



/* Entry: 10b4bf19c; end: 10b4bf1ff;  */

long FUN_10b4bf19c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    func_0x000107c3989c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
  }
  else {
    FUN_10b4d80a4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
  }
  return lVar1;
}



/* Entry: 10b4bf200; end: 10b4bf217;  */

void FUN_10b4bf200(long param_1)

{
  if (param_1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4bf218; end: 10b4bf223;  */

void FUN_10b4bf218(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4bf224; end: 10b4bf25f;  */

bool FUN_10b4bf224(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_10b4bf260();
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    uVar4 = puVar1[2];
    uVar6 = puVar1[5];
    uVar5 = puVar1[4];
    param_3[3] = puVar1[3];
    param_3[2] = uVar4;
    param_3[5] = uVar6;
    param_3[4] = uVar5;
    param_3[1] = uVar3;
    *param_3 = uVar2;
  }
  return puVar1 != (undefined8 *)0x0;
}



/* Entry: 10b4bf260; end: 10b4bf367;  */

long * FUN_10b4bf260(long param_1,uint param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  byte bVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar10;
  byte bVar16;
  long lStack_60;
  ulong auStack_58 [5];
  
  puVar2 = puRam00000001137f7128;
  plVar8 = &lStack_60;
  if (puRam00000001137f7128 != (ulong *)0x0) {
    auStack_58[1] = 0;
    auStack_58[4] = 0;
    auStack_58[3] = 0;
    auStack_58[2] = 0;
    auStack_58[0] = (ulong)param_2;
    Hint_Prefetch(*puRam00000001137f7128,0,2,0);
    lStack_60 = param_1;
    func_0x000107c30288(&lStack_60,auStack_58);
    lVar3 = 0;
    uVar4 = *puVar2;
    uVar6 = uVar4 >> 0xc ^ (ulong)plVar8 >> 7;
    bVar5 = (byte)plVar8 & 0x7f;
    while( true ) {
      uVar6 = uVar6 & puVar2[2];
      uVar10 = *(undefined8 *)(uVar4 + uVar6);
      bVar9 = (byte)((ulong)uVar10 >> 8);
      bVar11 = (byte)((ulong)uVar10 >> 0x10);
      bVar12 = (byte)((ulong)uVar10 >> 0x18);
      bVar13 = (byte)((ulong)uVar10 >> 0x20);
      bVar14 = (byte)((ulong)uVar10 >> 0x28);
      bVar15 = (byte)((ulong)uVar10 >> 0x30);
      bVar16 = (byte)((ulong)uVar10 >> 0x38);
      for (uVar7 = CONCAT17(-(bVar16 == bVar5),
                            CONCAT16(-(bVar15 == bVar5),
                                     CONCAT15(-(bVar14 == bVar5),
                                              CONCAT14(-(bVar13 == bVar5),
                                                       CONCAT13(-(bVar12 == bVar5),
                                                                CONCAT12(-(bVar11 == bVar5),
                                                                         CONCAT11(-(bVar9 == bVar5),
                                                                                  -((byte)uVar10 ==
                                                                                   bVar5)))))))) &
                   0x8080808080808080; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
        uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        plVar8 = (long *)(puVar2[1] +
                         (uVar6 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & puVar2[2])
                         * 0x30);
        if (*plVar8 == param_1 && *(uint *)(plVar8 + 1) == param_2) {
          if (uVar4 == 0) {
            return (long *)0x0;
          }
          return plVar8;
        }
      }
      bVar9 = NEON_umaxv(CONCAT17(-(bVar16 == 0x80),
                                  CONCAT16(-(bVar15 == 0x80),
                                           CONCAT15(-(bVar14 == 0x80),
                                                    CONCAT14(-(bVar13 == 0x80),
                                                             CONCAT13(-(bVar12 == 0x80),
                                                                      CONCAT12(-(bVar11 == 0x80),
                                                                               CONCAT11(-(bVar9 == 
                                                  0x80),-((byte)uVar10 == 0x80)))))))),1);
      if ((bVar9 & 1) != 0) break;
      lVar3 = lVar3 + 8;
      uVar6 = lVar3 + uVar6;
    }
  }
  return (long *)0x0;
}



/* Entry: 10b4bf368; end: 10b4bf373;  */

void FUN_10b4bf368(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b4bf370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 10b4bf374; end: 10b4bf41b;  */

byte FUN_10b4bf374(long param_1)

{
  byte bVar1;
  
  func_0x00010b4bf3a0();
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) ^ 1;
  }
  return bVar1 & 1;
}



/* Entry: 10b4bf41c; end: 10b4bf493;  */

void FUN_10b4bf41c(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar4;
  undefined8 auStack_20 [2];
  
  puVar3 = auStack_20;
  func_0x00010b4c5260(*(undefined1 *)(param_1 + 8));
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5b4878)[extraout_x8] * 4 + 0x10b4bf44c))();
    return;
  }
  func_0x00010b4c52dc();
  func_0x00010bdb2a00(auStack_20);
  FUN_10b22d104(auStack_20,&UNK_10f773dde);
  func_0x00010b4c52cc();
  func_0x00010b4bf3a0();
  if (puVar3 != (undefined8 *)0x0) {
    bVar1 = *(char *)((long)puVar3 + 9) != '\0';
    bVar2 = *(char *)((long)puVar3 + 9) == '\x01';
    if (bVar2) {
      func_0x00010b4c5260(*(undefined1 *)(puVar3 + 1));
      if (!bVar1 || bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e5b4882)[extraout_x8_00] * 4 + 0x10b4bf4f4))();
        return;
      }
    }
    else if ((*(byte *)((long)puVar3 + 10) & 1) == 0) {
      if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(puVar3 + 1) * 4) == 10) {
        if ((*(byte *)((long)puVar3 + 10) >> 4 & 1) == 0) {
          pcVar4 = *(code **)(*(long *)*puVar3 + 0x18);
        }
        else {
          pcVar4 = *(code **)(*(long *)*puVar3 + 0x88);
        }
        (*pcVar4)();
      }
      else if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(puVar3 + 1) * 4) == 9) {
        func_0x000107c27fa8(*puVar3);
      }
      *(byte *)((long)puVar3 + 10) = *(byte *)((long)puVar3 + 10) & 0xf0 | 1;
    }
    return;
  }
  return;
}



/* Entry: 10b4bf494; end: 10b4bf4b3;  */

void FUN_10b4bf494(undefined8 *param_1)

{
  bool bVar1;
  bool bVar2;
  long extraout_x8;
  code *pcVar3;
  
  func_0x00010b4bf3a0();
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  bVar1 = *(char *)((long)param_1 + 9) != '\0';
  bVar2 = *(char *)((long)param_1 + 9) == '\x01';
  if (bVar2) {
    func_0x00010b4c5260(*(undefined1 *)(param_1 + 1));
    if (!bVar1 || bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e5b4882)[extraout_x8] * 4 + 0x10b4bf4f4))();
      return;
    }
  }
  else if ((*(byte *)((long)param_1 + 10) & 1) == 0) {
    if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(param_1 + 1) * 4) == 10) {
      if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
        pcVar3 = *(code **)(*(long *)*param_1 + 0x18);
      }
      else {
        pcVar3 = *(code **)(*(long *)*param_1 + 0x88);
      }
      (*pcVar3)();
    }
    else if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(param_1 + 1) * 4) == 9) {
      func_0x000107c27fa8(*param_1);
    }
    *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) & 0xf0 | 1;
  }
  return;
}



/* Entry: 10b4bf4b4; end: 10b4bf5bf;  */

void FUN_10b4bf4b4(undefined8 *param_1)

{
  bool bVar1;
  bool bVar2;
  long extraout_x8;
  code *pcVar3;
  
  bVar1 = *(char *)((long)param_1 + 9) != '\0';
  bVar2 = *(char *)((long)param_1 + 9) == '\x01';
  if (bVar2) {
    func_0x00010b4c5260(*(undefined1 *)(param_1 + 1));
    if (!bVar1 || bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e5b4882)[extraout_x8] * 4 + 0x10b4bf4f4))();
      return;
    }
  }
  else if ((*(byte *)((long)param_1 + 10) & 1) == 0) {
    if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(param_1 + 1) * 4) == 10) {
      if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
        pcVar3 = *(code **)(*(long *)*param_1 + 0x18);
      }
      else {
        pcVar3 = *(code **)(*(long *)*param_1 + 0x88);
      }
      (*pcVar3)();
    }
    else if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(param_1 + 1) * 4) == 9) {
      func_0x000107c27fa8(*param_1);
    }
    *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) & 0xf0 | 1;
  }
  return;
}



/* Entry: 10b4bf5c0; end: 10b4bf5ef;  */

void FUN_10b4bf5c0(undefined4 *param_1,uint param_2)

{
  undefined4 unaff_w19;
  undefined8 unaff_x21;
  
  func_0x00010b4c5238();
  *(undefined8 *)(param_1 + 4) = unaff_x21;
  if ((param_2 & 1) != 0) {
    func_0x00010b4c560c();
  }
  func_0x00010b4c5278();
  *param_1 = unaff_w19;
  return;
}



/* Entry: 10b4bf5f0; end: 10b4bf62f;  */

ulong FUN_10b4bf5f0(long param_1)

{
  long extraout_x8;
  int unaff_w19;
  ulong unaff_x20;
  
  func_0x00010b4c52f4();
  if (param_1 != 0) {
    func_0x00010b4c5354();
    return (ulong)*(uint *)(extraout_x8 + (long)unaff_w19 * 4);
  }
  func_0x00010b4c5038();
  func_0x00010b4c52d4();
  func_0x00010b4c5068();
  func_0x00010b4c52cc();
  func_0x00010b4c50cc();
  func_0x00010b4c50dc();
  return unaff_x20;
}



/* Entry: 10b4bf630; end: 10b4bf64f;  */

void FUN_10b4bf630(void)

{
  func_0x00010b4c50cc();
  func_0x00010b4c50dc();
  return;
}



/* Entry: 10b4bf650; end: 10b4bf69b;  */

void FUN_10b4bf650(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x20;
  
  func_0x000107c398f0();
  func_0x00010b4c510c();
  func_0x00010b4c56a0();
  if ((param_2 & 1) != 0) {
    func_0x00010b4c508c();
    FUN_10b4c361c();
    *unaff_x20 = param_1;
  }
  func_0x000107c2845c();
  return;
}



/* Entry: 10b4bf69c; end: 10b4bf6c7;  */

undefined8 FUN_10b4bf69c(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b4c56b4();
  if ((param_1 != (undefined8 *)0x0) && ((*(byte *)((long)param_1 + 10) & 1) == 0)) {
    unaff_x19 = *param_1;
  }
  return unaff_x19;
}



/* Entry: 10b4bf6c8; end: 10b4bf6f7;  */

void FUN_10b4bf6c8(undefined8 *param_1,uint param_2)

{
  undefined8 unaff_x19;
  undefined8 unaff_x21;
  
  func_0x00010b4c5628();
  param_1[2] = unaff_x21;
  if ((param_2 & 1) != 0) {
    func_0x00010b4c560c();
  }
  func_0x00010b4c5278();
  *param_1 = unaff_x19;
  return;
}



/* Entry: 10b4bf6f8; end: 10b4bf737;  */

long FUN_10b4bf6f8(long param_1,ulong param_2)

{
  long extraout_x8;
  int unaff_w19;
  long *unaff_x20;
  
  func_0x00010b4c52f4();
  if (param_1 != 0) {
    func_0x00010b4c5354();
    return *(long *)(extraout_x8 + (long)unaff_w19 * 8);
  }
  func_0x00010b4c5038();
  func_0x00010b4c52d4();
  func_0x00010b4c5068();
  func_0x00010b4c52cc();
  func_0x000107c398f0();
  func_0x00010b4c510c();
  func_0x00010b4c56a0();
  if ((param_2 & 1) == 0) {
    param_1 = *unaff_x20;
  }
  else {
    func_0x00010b4c508c();
    func_0x00010b4c364c();
    *unaff_x20 = param_1;
  }
  FUN_10b227ed8();
  return param_1;
}



/* Entry: 10b4bf738; end: 10b4bf783;  */

void FUN_10b4bf738(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x20;
  
  func_0x000107c398f0();
  func_0x00010b4c510c();
  func_0x00010b4c56a0();
  if ((param_2 & 1) != 0) {
    func_0x00010b4c508c();
    func_0x00010b4c364c();
    *unaff_x20 = param_1;
  }
  FUN_10b227ed8();
  return;
}



/* Entry: 10b4bf784; end: 10b4bf7af;  */

ulong FUN_10b4bf784(uint *param_1)

{
  ulong unaff_x19;
  
  func_0x00010b4c52f4();
  if ((param_1 != (uint *)0x0) && ((*(byte *)((long)param_1 + 10) & 1) == 0)) {
    unaff_x19 = (ulong)*param_1;
  }
  return unaff_x19;
}



/* Entry: 10b4bf7b0; end: 10b4bf7df;  */

void FUN_10b4bf7b0(undefined4 *param_1,uint param_2)

{
  undefined4 unaff_w19;
  undefined8 unaff_x21;
  
  func_0x00010b4c5238();
  *(undefined8 *)(param_1 + 4) = unaff_x21;
  if ((param_2 & 1) != 0) {
    func_0x00010b4c560c();
  }
  func_0x00010b4c5278();
  *param_1 = unaff_w19;
  return;
}



/* Entry: 10b4bf7e0; end: 10b4bf81f;  */

ulong FUN_10b4bf7e0(ulong param_1,ulong param_2)

{
  long extraout_x8;
  int unaff_w19;
  ulong *unaff_x20;
  
  func_0x00010b4c52f4();
  if (param_1 != 0) {
    func_0x00010b4c5354();
    return (ulong)*(uint *)(extraout_x8 + (long)unaff_w19 * 4);
  }
  func_0x00010b4c5038();
  func_0x00010b4c52d4();
  func_0x00010b4c5068();
  func_0x00010b4c52cc();
  func_0x000107c398f0();
  func_0x00010b4c510c();
  func_0x00010b4c56a0();
  if ((param_2 & 1) == 0) {
    param_1 = *unaff_x20;
  }
  else {
    func_0x00010b4c508c();
    func_0x00010b4c367c();
    *unaff_x20 = param_1;
  }
  func_0x000107c29100();
  return param_1;
}



/* Entry: 10b4bf820; end: 10b4bf86b;  */

void FUN_10b4bf820(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x20;
  
  func_0x000107c398f0();
  func_0x00010b4c510c();
  func_0x00010b4c56a0();
  if ((param_2 & 1) != 0) {
    func_0x00010b4c508c();
    func_0x00010b4c367c();
    *unaff_x20 = param_1;
  }
  func_0x000107c29100();
  return;
}



/* Entry: 10b4bf86c; end: 10b4bf897;  */

undefined8 FUN_10b4bf86c(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b4c56b4();
  if ((param_1 != (undefined8 *)0x0) && ((*(byte *)((long)param_1 + 10) & 1) == 0)) {
    unaff_x19 = *param_1;
  }
  return unaff_x19;
}



/* Entry: 10b4bf898; end: 10b4bf8c7;  */

void FUN_10b4bf898(undefined8 *param_1,uint param_2)

{
  undefined8 unaff_x19;
  undefined8 unaff_x21;
  
  func_0x00010b4c5628();
  param_1[2] = unaff_x21;
  if ((param_2 & 1) != 0) {
    func_0x00010b4c560c();
  }
  func_0x00010b4c5278();
  *param_1 = unaff_x19;
  return;
}



/* Entry: 10b4bf8c8; end: 10b4bf907;  */

long FUN_10b4bf8c8(long param_1,ulong param_2)

{
  long extraout_x8;
  int unaff_w19;
  long *unaff_x20;
  
  func_0x00010b4c52f4();
  if (param_1 != 0) {
    func_0x00010b4c5354();
    return *(long *)(extraout_x8 + (long)unaff_w19 * 8);
  }
  func_0x00010b4c5038();
  func_0x00010b4c52d4();
  func_0x00010b4c5068();
  func_0x00010b4c52cc();
  func_0x000107c398f0();
  func_0x00010b4c510c();
  func_0x00010b4c56a0();
  if ((param_2 & 1) == 0) {
    param_1 = *unaff_x20;
  }
  else {
    func_0x00010b4c508c();
    func_0x00010b4c36ac();
    *unaff_x20 = param_1;
  }
  func_0x000108767594();
  return param_1;
}



/* Entry: 10b4bf908; end: 10b4bf953;  */

void FUN_10b4bf908(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x20;
  
  func_0x000107c398f0();
  func_0x00010b4c510c();
  func_0x00010b4c56a0();
  if ((param_2 & 1) != 0) {
    func_0x00010b4c508c();
    func_0x00010b4c36ac();
    *unaff_x20 = param_1;
  }
  func_0x000108767594();
  return;
}



/* Entry: 10b4bf954; end: 10b4bf987;  */

ulong FUN_10b4bf954(ulong param_1,uint *param_2)

{
  func_0x00010b4bf3a0();
  if ((param_2 != (uint *)0x0) && ((*(byte *)((long)param_2 + 10) & 1) == 0)) {
    param_1 = (ulong)*param_2;
  }
  return param_1;
}



/* Entry: 10b4bf988; end: 10b4bf9c7;  */

void FUN_10b4bf988(undefined4 param_1,undefined4 *param_2,uint param_3,undefined1 param_4,
                  undefined8 param_5)

{
  FUN_10b4c0fe8();
  *(undefined8 *)(param_2 + 4) = param_5;
  if ((param_3 & 1) != 0) {
    *(undefined1 *)(param_2 + 2) = param_4;
    *(undefined1 *)((long)param_2 + 9) = 0;
  }
  func_0x00010b4c5278();
  *param_2 = param_1;
  return;
}



/* Entry: 10b4bf9c8; end: 10b4bfa0f;  */

ulong FUN_10b4bf9c8(ulong param_1,long *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                   long param_6)

{
  long *plVar1;
  long extraout_x8;
  int unaff_w19;
  
  func_0x00010b4c52f4();
  if (param_2 == (long *)0x0) {
    func_0x00010b4c5038();
    func_0x00010b4c52d4();
    func_0x00010b4c5068();
    func_0x00010b4c52cc();
    func_0x00010b4c5360();
    param_2[2] = param_6;
    if ((param_3 & 1) != 0) {
      plVar1 = param_2;
      func_0x00010b4c55b4();
      func_0x00010b4c36dc();
      *param_2 = (long)plVar1;
    }
    FUN_10b4bfa6c(param_1);
    return param_1;
  }
  func_0x00010b4c5354();
  return (ulong)*(uint *)(extraout_x8 + (long)unaff_w19 * 4);
}



/* Entry: 10b4bfa10; end: 10b4bfa6b;  */

void FUN_10b4bfa10(undefined8 param_1,long *param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  
  func_0x00010b4c5360();
  param_2[2] = param_6;
  if ((param_3 & 1) != 0) {
    plVar1 = param_2;
    func_0x00010b4c55b4();
    func_0x00010b4c36dc();
    *param_2 = (long)plVar1;
  }
  FUN_10b4bfa6c(param_1);
  return;
}



/* Entry: 10b4bfa6c; end: 10b4bfab7;  */

void FUN_10b4bfa6c(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  iVar1 = param_2[1];
  if (iVar2 == iVar1) {
    func_0x000109311970(param_2,iVar1,iVar1 + 1);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  *(undefined4 *)(*(long *)(param_2 + 2) + (long)iVar2 * 4) = param_1;
  return;
}



/* Entry: 10b4bfab8; end: 10b4bfaeb;  */

undefined8 FUN_10b4bfab8(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010b4bf3a0();
  if ((param_2 != (undefined8 *)0x0) && ((*(byte *)((long)param_2 + 10) & 1) == 0)) {
    param_1 = *param_2;
  }
  return param_1;
}



/* Entry: 10b4bfaec; end: 10b4bfb2b;  */

void FUN_10b4bfaec(undefined8 param_1,undefined8 *param_2,uint param_3,undefined1 param_4,
                  undefined8 param_5)

{
  FUN_10b4c0fe8();
  param_2[2] = param_5;
  if ((param_3 & 1) != 0) {
    *(undefined1 *)(param_2 + 1) = param_4;
    *(undefined1 *)((long)param_2 + 9) = 0;
  }
  func_0x00010b4c5278();
  *param_2 = param_1;
  return;
}



/* Entry: 10b4bfb2c; end: 10b4bfb73;  */

undefined8
FUN_10b4bfb2c(undefined8 param_1,long *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
             long param_6)

{
  long *plVar1;
  long extraout_x8;
  int unaff_w19;
  
  func_0x00010b4c52f4();
  if (param_2 == (long *)0x0) {
    func_0x00010b4c5038();
    func_0x00010b4c52d4();
    func_0x00010b4c5068();
    func_0x00010b4c52cc();
    func_0x00010b4c5360();
    param_2[2] = param_6;
    if ((param_3 & 1) != 0) {
      plVar1 = param_2;
      func_0x00010b4c55b4();
      func_0x00010b4c370c();
      *param_2 = (long)plVar1;
    }
    FUN_10b4bfbd0(param_1);
    return param_1;
  }
  func_0x00010b4c5354();
  return *(undefined8 *)(extraout_x8 + (long)unaff_w19 * 8);
}



/* Entry: 10b4bfb74; end: 10b4bfbcf;  */

void FUN_10b4bfb74(undefined8 param_1,long *param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  
  func_0x00010b4c5360();
  param_2[2] = param_6;
  if ((param_3 & 1) != 0) {
    plVar1 = param_2;
    func_0x00010b4c55b4();
    func_0x00010b4c370c();
    *param_2 = (long)plVar1;
  }
  FUN_10b4bfbd0(param_1);
  return;
}



/* Entry: 10b4bfbd0; end: 10b4bfc1b;  */

void FUN_10b4bfbd0(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  iVar1 = param_2[1];
  if (iVar2 == iVar1) {
    func_0x000109340710(param_2,iVar1,iVar1 + 1);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  *(undefined8 *)(*(long *)(param_2 + 2) + (long)iVar2 * 8) = param_1;
  return;
}



/* Entry: 10b4bfc1c; end: 10b4bfc47;  */

byte FUN_10b4bfc1c(byte *param_1)

{
  byte unaff_w19;
  
  func_0x00010b4c52f4();
  if ((param_1 != (byte *)0x0) && ((param_1[10] & 1) == 0)) {
    unaff_w19 = *param_1;
  }
  return unaff_w19 & 1;
}



/* Entry: 10b4bfc48; end: 10b4bfc77;  */

void FUN_10b4bfc48(undefined1 *param_1,uint param_2)

{
  undefined1 unaff_w19;
  undefined8 unaff_x21;
  
  func_0x00010b4c5238();
  *(undefined8 *)(param_1 + 0x10) = unaff_x21;
  if ((param_2 & 1) != 0) {
    func_0x00010b4c560c();
  }
  func_0x00010b4c5278();
  *param_1 = unaff_w19;
  return;
}



/* Entry: 10b4bfc78; end: 10b4bfcb7;  */

ulong FUN_10b4bfc78(ulong param_1,ulong param_2)

{
  long extraout_x8;
  int unaff_w19;
  ulong *unaff_x20;
  
  func_0x00010b4c52f4();
  if (param_1 != 0) {
    func_0x00010b4c5354();
    return (ulong)*(byte *)(extraout_x8 + unaff_w19);
  }
  func_0x00010b4c5038();
  func_0x00010b4c52d4();
  func_0x00010b4c5068();
  func_0x00010b4c52cc();
  func_0x000107c398f0();
  func_0x00010b4c510c();
  func_0x00010b4c56a0();
  if ((param_2 & 1) == 0) {
    param_1 = *unaff_x20;
  }
  else {
    func_0x00010b4c508c();
    func_0x00010b4c373c();
    *unaff_x20 = param_1;
  }
  FUN_10b4bfd04();
  return param_1;
}



/* Entry: 10b4bfcb8; end: 10b4bfd03;  */

void FUN_10b4bfcb8(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x20;
  
  func_0x000107c398f0();
  func_0x00010b4c510c();
  func_0x00010b4c56a0();
  if ((param_2 & 1) != 0) {
    func_0x00010b4c508c();
    func_0x00010b4c373c();
    *unaff_x20 = param_1;
  }
  FUN_10b4bfd04();
  return;
}



/* Entry: 10b4bfd04; end: 10b4bfd6f;  */

void FUN_10b4bfd04(int *param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = param_1[1];
  if (iVar2 == iVar1) {
    func_0x000109311b98(param_1,iVar1,iVar1 + 1);
    iVar2 = *param_1;
  }
  *param_1 = iVar2 + 1;
  *(undefined1 *)(*(long *)(param_1 + 2) + (long)iVar2) = param_2;
  return;
}



/* Entry: 10b4bfd70; end: 10b4bfe4f;  */

undefined8 *
FUN_10b4bfd70(undefined8 *param_1,uint param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar1;
  long extraout_x8;
  uint unaff_w21;
  
  func_0x000107c398f0();
  func_0x00010b4c5410();
  param_1[2] = param_5;
  if ((param_2 & 1) != 0) {
    *(undefined1 *)((long)param_1 + 9) = 1;
    *(char *)(param_1 + 1) = (char)unaff_w21;
    *(undefined1 *)((long)param_1 + 0xb) = param_4;
    puVar1 = param_1;
    func_0x00010b4c54bc(*(undefined4 *)(&UNK_10e5b4ac0 + (ulong)unaff_w21 * 4));
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bfdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e5b488c)[extraout_x8] * 4 + 0x10b4bfdd8))();
      return puVar1;
    }
  }
  return (undefined8 *)*param_1;
}



/* Entry: 10b4bfe50; end: 10b4bfe9b;  */

void FUN_10b4bfe50(void)

{
  func_0x00010b4c50cc();
  func_0x00010b4c50dc();
  return;
}



/* Entry: 10b4bfe9c; end: 10b4bfecb;  */

void FUN_10b4bfe9c(undefined4 *param_1,uint param_2)

{
  undefined4 unaff_w19;
  undefined8 unaff_x21;
  
  func_0x00010b4c5238();
  *(undefined8 *)(param_1 + 4) = unaff_x21;
  if ((param_2 & 1) != 0) {
    func_0x00010b4c560c();
  }
  func_0x00010b4c5278();
  *param_1 = unaff_w19;
  return;
}



/* Entry: 10b4bfecc; end: 10b4bff0b;  */

ulong FUN_10b4bfecc(ulong param_1,ulong param_2)

{
  long extraout_x8;
  int unaff_w19;
  ulong *unaff_x20;
  
  func_0x00010b4c52f4();
  if (param_1 != 0) {
    func_0x00010b4c5354();
    return (ulong)*(uint *)(extraout_x8 + (long)unaff_w19 * 4);
  }
  func_0x00010b4c5038();
  func_0x00010b4c52d4();
  func_0x00010b4c5068();
  func_0x00010b4c52cc();
  func_0x000107c398f0();
  func_0x00010b4c510c();
  func_0x00010b4c56a0();
  if ((param_2 & 1) == 0) {
    param_1 = *unaff_x20;
  }
  else {
    func_0x00010b4c508c();
    FUN_10b4c361c();
    *unaff_x20 = param_1;
  }
  func_0x000107c2845c();
  return param_1;
}



/* Entry: 10b4bff0c; end: 10b4bff57;  */

void FUN_10b4bff0c(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x20;
  
  func_0x000107c398f0();
  func_0x00010b4c510c();
  func_0x00010b4c56a0();
  if ((param_2 & 1) != 0) {
    func_0x00010b4c508c();
    FUN_10b4c361c();
    *unaff_x20 = param_1;
  }
  func_0x000107c2845c();
  return;
}



/* Entry: 10b4bff58; end: 10b4bff83;  */

undefined8 FUN_10b4bff58(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b4c56b4();
  if ((param_1 != (undefined8 *)0x0) && ((*(byte *)((long)param_1 + 10) & 1) == 0)) {
    unaff_x19 = *param_1;
  }
  return unaff_x19;
}



/* Entry: 10b4bff84; end: 10b4bffdb;  */

void FUN_10b4bff84(long *param_1,uint param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined1 unaff_w21;
  
  func_0x00010b4c5410();
  param_1[2] = param_4;
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = unaff_w21;
    *(undefined1 *)((long)param_1 + 9) = 0;
    plVar1 = param_1;
    func_0x00010b4c5194();
    func_0x000107c30270();
    *param_1 = (long)plVar1;
  }
  *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) & 0xf0;
  return;
}



/* Entry: 10b4bffdc; end: 10b4c0017;  */

void FUN_10b4bffdc(long *param_1,uint param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined1 unaff_w21;
  
  func_0x00010b4c52f4();
  if (param_1 == (long *)0x0) {
    func_0x00010b4c5038();
    func_0x00010b4c52d4();
    func_0x00010b4c5068();
    func_0x00010b4c52cc();
    func_0x00010b4c5410();
    param_1[2] = param_4;
    if ((param_2 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = unaff_w21;
      *(undefined1 *)((long)param_1 + 9) = 1;
      *(undefined1 *)((long)param_1 + 0xb) = 0;
      plVar1 = param_1;
      func_0x00010b4c5194();
      func_0x00010b4c376c();
      *param_1 = (long)plVar1;
    }
    func_0x000107c303b4();
    return;
  }
  func_0x00010b4c5154();
  return;
}



/* Entry: 10b4c0018; end: 10b4c006f;  */

void FUN_10b4c0018(long *param_1,uint param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined1 unaff_w21;
  
  func_0x00010b4c5410();
  param_1[2] = param_4;
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = unaff_w21;
    *(undefined1 *)((long)param_1 + 9) = 1;
    *(undefined1 *)((long)param_1 + 0xb) = 0;
    plVar1 = param_1;
    func_0x00010b4c5194();
    func_0x00010b4c376c();
    *param_1 = (long)plVar1;
  }
  func_0x000107c303b4();
  return;
}



/* Entry: 10b4c0070; end: 10b4c00bf;  */

long * FUN_10b4c0070(undefined8 *param_1)

{
  long *unaff_x19;
  
  func_0x00010b4c58c0();
  func_0x00010b4bf3a0();
  if ((param_1 != (undefined8 *)0x0) &&
     (unaff_x19 = (long *)*param_1, (*(byte *)((long)param_1 + 10) >> 4 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010b4c00bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x18))();
    return unaff_x19;
  }
  return unaff_x19;
}



/* Entry: 10b4c00c0; end: 10b4c0213;  */

void FUN_10b4c00c0(undefined8 *param_1,ulong param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5)

{
  byte bVar1;
  undefined8 *unaff_x21;
  
  func_0x00010b4c5360();
  param_1[2] = param_5;
  if ((param_2 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 10);
    *(byte *)((long)param_1 + 10) = bVar1 & 0xf0;
    if ((bVar1 >> 4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b4c0160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,param_4,*unaff_x21);
      return;
    }
  }
  else {
    func_0x00010b4c575c();
    (**(code **)(*param_4 + 0x10))(param_4,*unaff_x21);
    *param_1 = param_4;
    *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) & 0xf0;
  }
  return;
}



/* Entry: 10b4c0214; end: 10b4c028f;  */

void FUN_10b4c0214(long param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iStack_24;
  
  piVar2 = *(int **)(param_1 + 0x10);
  iStack_24 = param_2;
  if ((long)*(short *)(param_1 + 10) < 0) {
    FUN_10b4c30e4(piVar2,&iStack_24);
  }
  else {
    piVar1 = piVar2 + (long)*(short *)(param_1 + 10) * 8;
    func_0x00010b4c30c0(piVar2,piVar1,&iStack_24);
    if ((piVar2 != piVar1) && (*piVar2 == iStack_24)) {
      if (piVar1 != piVar2 + 8) {
        _memmove();
      }
      *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
    }
  }
  return;
}



/* Entry: 10b4c0290; end: 10b4c02cb;  */

void FUN_10b4c0290(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *unaff_x21;
  undefined1 unaff_w22;
  undefined8 uStack_28;
  
  func_0x00010b4c52f4();
  if (param_1 == (long *)0x0) {
    func_0x00010b4c5038();
    func_0x00010b4c52d4();
    func_0x00010b4c5068();
    func_0x00010b4c52cc();
    func_0x000107c398f0();
    func_0x00010b4c5360();
    param_1[2] = param_5;
    if ((param_2 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = unaff_w22;
      *(undefined1 *)((long)param_1 + 9) = 1;
      uStack_28 = *unaff_x21;
      puVar1 = &uStack_28;
      func_0x00010b4c37a4();
      *param_1 = (long)puVar1;
    }
    func_0x000107c303b8();
    return;
  }
  func_0x00010b4c5154();
  return;
}



/* Entry: 10b4c02cc; end: 10b4c032f;  */

void FUN_10b4c02cc(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *unaff_x21;
  undefined1 unaff_w22;
  undefined8 in_stack_00000008;
  
  func_0x000107c398f0();
  func_0x00010b4c5360();
  param_1[2] = param_5;
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = unaff_w22;
    *(undefined1 *)((long)param_1 + 9) = 1;
    in_stack_00000008 = *unaff_x21;
    puVar1 = &stack0x00000008;
    func_0x00010b4c37a4();
    *param_1 = (long)puVar1;
  }
  func_0x000107c303b8();
  return;
}



/* Entry: 10b4c0330; end: 10b4c03bb;  */

void FUN_10b4c0330(long param_1)

{
  char cVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x00010b4bf3a0();
  if (param_1 == 0) {
    func_0x00010b4c5038();
    func_0x00010b4c52d4();
    func_0x00010b4c5068();
    func_0x00010b4c52cc();
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    if ((long)*(short *)(param_1 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        FUN_10b4bf4b4(lVar2 + 0x18);
        func_0x00010b4c5688();
      }
    }
    else {
      for (lVar4 = (long)*(short *)(param_1 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        FUN_10b4bf4b4(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    return;
  }
  func_0x00010b4c5260(*(undefined1 *)(param_1 + 8));
  if ((bool)in_CY && !(bool)in_ZR) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b4c0364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e5b4896)[extraout_x8] * 4 + 0x10b4c0368))();
  return;
}



/* Entry: 10b4c03bc; end: 10b4c043b;  */

void FUN_10b4c03bc(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if ((long)*(short *)(param_1 + 10) < 0) {
    lVar4 = puVar3[1];
    lVar2 = *(long *)*puVar3;
    cVar1 = *(char *)(lVar4 + 10);
    while (lVar2 != lVar4 || cVar1 != '\0') {
      FUN_10b4bf4b4(lVar2 + 0x18);
      func_0x00010b4c5688();
    }
  }
  else {
    for (lVar4 = (long)*(short *)(param_1 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
      FUN_10b4bf4b4(puVar3 + 1);
      puVar3 = puVar3 + 4;
    }
  }
  return;
}



/* Entry: 10b4c043c; end: 10b4c0687;  */

void FUN_10b4c043c(long param_1,long param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  if (-1 < (long)*(short *)(param_1 + 10)) {
    lVar8 = (long)*(short *)(param_3 + 10);
    piVar11 = *(int **)(param_1 + 0x10);
    piVar1 = piVar11 + (long)*(short *)(param_1 + 10) * 8;
    piVar5 = *(int **)(param_3 + 0x10);
    if (-1 < lVar8) {
      lVar9 = 0;
      lVar7 = lVar8 << 5;
      piVar2 = piVar5 + lVar8 * 8;
      do {
        lVar8 = (long)piVar1 - (long)piVar11;
        lVar9 = -lVar9;
LAB_10b4c0494:
        if (piVar11 == piVar1 || piVar5 == piVar2) {
          lVar9 = (lVar8 >> 5) - lVar9;
          for (; lVar7 != 0; lVar7 = lVar7 + -0x20) {
            lVar9 = lVar9 + ((ulong)~(uint)*(byte *)((long)piVar5 + 0x12) & 1);
            piVar5 = piVar5 + 8;
          }
          goto LAB_10b4c0518;
        }
        if (*piVar11 < *piVar5) goto code_r0x00010b4c04b0;
        if (*piVar11 == *piVar5) {
          piVar11 = piVar11 + 8;
          uVar10 = 1;
        }
        else {
          uVar10 = (ulong)~(uint)*(byte *)((long)piVar5 + 0x12) & 1;
        }
        lVar9 = uVar10 - lVar9;
        piVar5 = piVar5 + 8;
        lVar7 = lVar7 + -0x20;
      } while( true );
    }
    lVar9 = 0;
    lVar8 = *(long *)(piVar5 + 2);
    lStack_78 = **(long **)piVar5;
    bVar4 = *(byte *)(lVar8 + 10);
    uStack_70 = 0;
    while ((piVar5 = piVar1, piVar11 != piVar1 &&
           (piVar5 = piVar11, lStack_78 != lVar8 || (uint)uStack_70 != bVar4))) {
      lVar7 = lStack_78 + (uStack_70 & 0xff) * 0x20;
      iVar3 = *(int *)(lVar7 + 0x10);
      if (*piVar11 < iVar3) {
LAB_10b4c0630:
        lVar9 = lVar9 + 1;
        piVar11 = piVar11 + 8;
      }
      else {
        if (*piVar11 == iVar3) {
          func_0x00010b4c5408();
          goto LAB_10b4c0630;
        }
        lVar9 = lVar9 + ((ulong)~(uint)*(byte *)(lVar7 + 0x22) & 1);
        func_0x00010b4c5408();
      }
    }
    lVar9 = lVar9 + ((long)piVar1 - (long)piVar5 >> 5);
    while (lStack_78 != lVar8 || (uint)uStack_70 != bVar4) {
      lVar9 = lVar9 + ((ulong)~(uint)*(byte *)(lStack_78 + (uStack_70 & 0xff) * 0x20 + 0x22) & 1);
      func_0x00010b4c5408();
    }
LAB_10b4c0518:
    FUN_10b4c0688(param_1,lVar9);
  }
  puVar6 = *(undefined8 **)(param_3 + 0x10);
  lStack_78 = param_2;
  uStack_70 = param_1;
  lStack_68 = param_3;
  if ((long)*(short *)(param_3 + 10) < 0) {
    lVar8 = puVar6[1];
    lStack_60 = *(long *)*puVar6;
    bVar4 = *(byte *)(lVar8 + 10);
    uStack_58 = 0;
    uStack_58._0_4_ = 0;
    while (lStack_60 != lVar8 || (uint)uStack_58 != bVar4) {
      lVar9 = lStack_60 + (ulong)((uint)uStack_58 & 0xff) * 0x20;
      func_0x00010b4c380c(&lStack_78,*(undefined4 *)(lVar9 + 0x10),lVar9 + 0x18);
      func_0x00010b4c386c(&lStack_60);
    }
  }
  else {
    for (lVar8 = (long)*(short *)(param_3 + 10) << 5; lVar8 != 0; lVar8 = lVar8 + -0x20) {
      func_0x00010b4c380c(&lStack_78,*(undefined4 *)puVar6,puVar6 + 1);
      puVar6 = puVar6 + 4;
    }
  }
  return;
code_r0x00010b4c04b0:
  piVar11 = piVar11 + 8;
  lVar8 = lVar8 + -0x20;
  lVar9 = lVar9 + -1;
  goto LAB_10b4c0494;
}



/* Entry: 10b4c0688; end: 10b4c0953;  */

void FUN_10b4c0688(undefined **param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  char *pcVar14;
  undefined8 *puVar15;
  long lVar16;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  int *piVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int iStack_94;
  undefined **ppuStack_90;
  ulong uStack_88;
  undefined **ppuStack_70;
  ulong uStack_68;
  
  uVar5 = *(ushort *)((long)param_1 + 10);
  if ((-1 < (short)uVar5) && (uVar22 = (ulong)*(ushort *)(param_1 + 1), uVar22 < param_2)) {
    do {
      uVar6 = (int)uVar22 << 2;
      if ((uVar22 & 0xffff) == 0) {
        uVar6 = 1;
      }
      uVar22 = (ulong)uVar6;
      uVar17 = uVar22 & 0xffff;
    } while (uVar17 < param_2);
    piVar20 = (int *)param_1[2];
    uVar22 = (ulong)uVar5 << 5;
    ppuVar18 = (undefined **)*param_1;
    if ((uVar6 & 0xffff) < 0x101) {
      ppuStack_90 = (undefined **)0x7ffffffffffffff;
      puVar11 = &uStack_b8;
      uStack_b8 = uVar17;
      func_0x0001053abb00(puVar11,&ppuStack_90,
                          "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
      if (puVar11 != (undefined8 *)0x0) {
        lVar16 = (long)*(char *)((long)puVar11 + 0x17);
        puVar15 = puVar11;
        if (lVar16 < 0) {
          puVar15 = (undefined8 *)*puVar11;
          lVar16 = puVar11[1];
        }
        func_0x00010bdb2a08(&uStack_b8,
                            "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                            ,0x10a,puVar15,lVar16);
        pcVar14 = "Requested size is too large to fit into size_t.";
        puVar11 = &uStack_b8;
        func_0x0001053abb1c();
        func_0x00010b4c5648();
        uVar8 = *(char *)((long)puVar15 + 9) != '\0';
        uVar9 = *(char *)((long)puVar15 + 9) == '\x01';
        if ((bool)uVar9) {
          uVar19 = puVar15[2];
          func_0x00010b4c5794();
          puVar11[2] = uVar19;
          bVar4 = *(byte *)(puVar15 + 1);
          if (((ulong)pcVar14 & 1) != 0) {
            *(byte *)(puVar11 + 1) = bVar4;
            *(undefined1 *)((long)puVar11 + 0xb) = *(undefined1 *)((long)puVar15 + 0xb);
            *(undefined1 *)((long)puVar11 + 9) = 1;
          }
          func_0x00010b4c54bc(*(undefined4 *)(&UNK_10e5b4ac0 + (ulong)bVar4 * 4));
          if (!(bool)uVar8 || (bool)uVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010b4c09dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_10e5b48aa)[extraout_x8] * 4 + 0x10b4c09e0))();
            return;
          }
        }
        else if (((*(byte *)((long)puVar15 + 10) & 1) == 0) &&
                (func_0x00010b4c54bc(*(undefined4 *)
                                      (&UNK_10e5b4ac0 + (ulong)*(byte *)(puVar15 + 1) * 4)),
                !(bool)uVar8 || (bool)uVar9)) {
                    /* WARNING: Could not recover jumptable at 0x00010b4c0a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10e5b48a0)[extraout_x8_00] * 4 + 0x10b4c0a24))();
          return;
        }
        return;
      }
      ppuVar13 = (undefined **)(uVar17 << 5);
      if (ppuVar18 == (undefined **)0x0) {
        __Znam();
      }
      else {
        ppuVar12 = ppuVar18;
        func_0x0001053abb54(ppuVar18,ppuVar13,8);
        ppuVar13 = ppuVar12;
      }
      if (uVar5 != 0) {
        _memmove(ppuVar13,piVar20,uVar22);
      }
    }
    else {
      if (ppuVar18 == (undefined **)0x0) {
        ppuVar13 = param_1;
        func_0x00010b4c57d4();
      }
      else {
        ppuVar13 = ppuVar18;
        FUN_10b4d7e6c(ppuVar18,0x18,8,FUN_10b4c4818);
      }
      *ppuVar13 = (undefined *)&PTR_LOOP_110cf0bd0;
      ppuVar13[1] = (undefined *)&PTR_LOOP_110cf0bd0;
      ppuVar13[2] = (undefined *)0x0;
      piVar1 = piVar20;
      uVar17 = 0;
      ppuVar12 = &PTR_LOOP_110cf0bd0;
      uVar7 = (ulong)uVar5;
      while (uVar7 != 0) {
        uVar21 = uVar17 & 0xffffffff;
        iVar2 = *piVar1;
        uVar7 = uStack_b8 >> 0x20;
        uStack_b8 = CONCAT44((int)uVar7,iVar2);
        uStack_a8 = *(undefined8 *)(piVar1 + 4);
        uStack_b0 = *(undefined8 *)(piVar1 + 2);
        uStack_a0 = *(undefined8 *)(piVar1 + 6);
        iStack_94 = iVar2;
        ppuStack_70 = ppuVar12;
        uStack_68 = uVar21;
        if (ppuVar13[2] == (undefined *)0x0) {
LAB_10b4c0838:
          FUN_10b4c3d44(&ppuStack_90,ppuVar13,&iStack_94,&uStack_b8);
          ppuVar12 = ppuStack_90;
          uVar21 = uStack_88;
        }
        else {
          if (((undefined **)ppuVar13[1] == ppuVar12 &&
               (uint)uVar17 == (uint)*(byte *)((long)ppuVar13[1] + 10)) ||
             (iVar3 = *(int *)((long)ppuVar12 + ((long)(uVar17 << 0x20) >> 0x1b) + 0x10),
             iVar2 < iVar3)) {
            if ((*(undefined ***)*ppuVar13 != ppuVar12 || (uint)uVar17 != 0) &&
               (ppuStack_90 = ppuVar12, uStack_88 = uVar21,
               FUN_10b4c481c(&ppuStack_90,0xffffffffffffffff),
               iVar2 <= *(int *)((long)ppuStack_90 + ((long)(uStack_88 << 0x20) >> 0x1b) + 0x10)))
            goto LAB_10b4c0838;
          }
          else {
            if (iVar2 <= iVar3) goto LAB_10b4c084c;
            func_0x00010b4c386c(&ppuStack_70);
            ppuVar12 = ppuStack_70;
            uVar21 = uStack_68;
            if ((ppuStack_70 != (undefined **)ppuVar13[1] ||
                 (uint)uStack_68 != *(byte *)((long)ppuVar13[1] + 10)) &&
               (*(int *)(ppuStack_70 + (long)(int)(uint)uStack_68 * 4 + 2) <= iVar2))
            goto LAB_10b4c0838;
          }
          ppuVar10 = ppuVar13;
          FUN_10b4c3e18(ppuVar13,ppuVar12,uVar21,&uStack_b8);
          uStack_88 = CONCAT44(uStack_88._4_4_,(int)ppuVar12);
          ppuVar12 = ppuVar10;
          uVar21 = uStack_88;
        }
LAB_10b4c084c:
        uStack_88 = uVar21;
        ppuStack_90 = ppuVar12;
        piVar1 = piVar1 + 8;
        uVar22 = uVar22 - 0x20;
        uVar17 = uStack_88;
        ppuVar12 = ppuStack_90;
        uVar7 = uVar22;
      }
      *(undefined2 *)((long)param_1 + 10) = 0xffff;
    }
    if (ppuVar18 == (undefined **)0x0) {
      __ZdaPv(piVar20);
    }
    *(short *)(param_1 + 1) = (short)uVar6;
    param_1[2] = (undefined *)ppuVar13;
  }
  return;
}



/* Entry: 10b4c0954; end: 10b4c0d97;  */

void FUN_10b4c0954(long param_1,uint param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar4;
  
  uVar2 = *(char *)(param_4 + 9) != '\0';
  uVar3 = *(char *)(param_4 + 9) == '\x01';
  if ((bool)uVar3) {
    uVar4 = *(undefined8 *)(param_4 + 0x10);
    func_0x00010b4c5794();
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    bVar1 = *(byte *)(param_4 + 8);
    if ((param_2 & 1) != 0) {
      *(byte *)(param_1 + 8) = bVar1;
      *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_4 + 0xb);
      *(undefined1 *)(param_1 + 9) = 1;
    }
    func_0x00010b4c54bc(*(undefined4 *)(&UNK_10e5b4ac0 + (ulong)bVar1 * 4));
    if (!(bool)uVar2 || (bool)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010b4c09dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e5b48aa)[extraout_x8] * 4 + 0x10b4c09e0))();
      return;
    }
  }
  else if (((*(byte *)(param_4 + 10) & 1) == 0) &&
          (func_0x00010b4c54bc(*(undefined4 *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(param_4 + 8) * 4)),
          !(bool)uVar2 || (bool)uVar3)) {
                    /* WARNING: Could not recover jumptable at 0x00010b4c0a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5b48a0)[extraout_x8_00] * 4 + 0x10b4c0a24))();
    return;
  }
  return;
}



/* Entry: 10b4c0d98; end: 10b4c0df7;  */

undefined1  [16] FUN_10b4c0d98(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar3 = *param_2;
  if (iVar3 != 0) {
    func_0x00010b4c3828(param_1,*param_1 + iVar3);
    iVar1 = *param_1;
    *param_1 = iVar1 + iVar3;
    puVar2 = *(undefined1 **)(param_2 + 2);
    puVar4 = (undefined1 *)(*(long *)(param_1 + 2) + (long)iVar1);
    puVar5 = puVar2;
    puVar6 = puVar4;
    while (0 < iVar3) {
      *puVar6 = *puVar5;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    }
    auVar8._8_8_ = puVar4;
    auVar8._0_8_ = puVar2;
    return auVar8;
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 10b4c0df8; end: 10b4c0e1f;  */

void FUN_10b4c0df8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10b4bff84();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*param_1);
  }
  uVar2 = param_4[1];
  uVar1 = *param_4;
  param_1[2] = param_4[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)((long)param_4 + 0x17) = 0;
  *(undefined1 *)param_4 = 0;
  return;
}



/* Entry: 10b4c0e20; end: 10b4c0e67;  */

undefined8 FUN_10b4c0e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_19 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_18 = param_2;
  FUN_10b4c12d0(param_1,2,param_3,&uStack_18,&uStack_50,&uStack_19);
  if ((int)param_1 == 0) {
    uStack_40 = 0;
  }
  return uStack_40;
}



/* Entry: 10b4c0e68; end: 10b4c0eab;  */

void FUN_10b4c0e68(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  uVar1 = *(undefined2 *)(param_1 + 1);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)(param_2 + 1) = uVar1;
  uVar1 = *(undefined2 *)((long)param_1 + 10);
  *(undefined2 *)((long)param_1 + 10) = *(undefined2 *)((long)param_2 + 10);
  *(undefined2 *)((long)param_2 + 10) = uVar1;
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar2;
  return;
}



/* Entry: 10b4c0eac; end: 10b4c0fe7;  */

void FUN_10b4c0eac(long *param_1)

{
  bool bVar1;
  bool bVar2;
  long extraout_x8;
  
  bVar1 = *(char *)((long)param_1 + 9) != '\0';
  bVar2 = *(char *)((long)param_1 + 9) == '\x01';
  if (bVar2) {
    func_0x00010b4c54bc();
    if (!bVar1 || bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010b4c0ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e5b48b4)[extraout_x8] * 4 + 0x10b4c0ef4))();
      return;
    }
  }
  else if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(param_1 + 1) * 4) == 10) {
    if ((long *)*param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b4c0f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*param_1 + 8))();
      return;
    }
  }
  else if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(param_1 + 1) * 4) == 9) {
    if (*param_1 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b4c0fe8; end: 10b4c1207;  */

void FUN_10b4c0fe8(long param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  int aiStack_70 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  int iStack_38;
  int iStack_34;
  
  iStack_38 = param_2;
  if ((long)*(short *)(param_1 + 10) < 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    aiStack_70[0] = param_2;
    iStack_34 = param_2;
    FUN_10b4c3d44(auStack_50,*(undefined8 *)(param_1 + 0x10),&iStack_34,aiStack_70);
    return;
  }
  piVar4 = *(int **)(param_1 + 0x10);
  piVar1 = piVar4 + (long)*(short *)(param_1 + 10) * 8;
  func_0x00010b4c30c0(piVar4,piVar1,&iStack_38);
  iVar3 = iStack_38;
  if (piVar4 == piVar1) {
    uVar2 = *(ushort *)(param_1 + 10);
    if (*(ushort *)(param_1 + 8) <= uVar2) goto LAB_10b4c10a4;
  }
  else {
    if (*piVar4 == iStack_38) {
      return;
    }
    uVar2 = *(ushort *)(param_1 + 10);
    if (*(ushort *)(param_1 + 8) <= uVar2) {
LAB_10b4c10a4:
      FUN_10b4c0688(param_1,(ulong)uVar2 + 1);
      FUN_10b4c0fe8(param_1,iStack_38);
      return;
    }
    _memmove(piVar4 + 8,piVar4,(long)piVar1 - (long)piVar4);
    uVar2 = *(ushort *)(param_1 + 10);
  }
  *(ushort *)(param_1 + 10) = uVar2 + 1;
  *piVar4 = iVar3;
  piVar4[2] = 0;
  piVar4[3] = 0;
  piVar4[4] = 0;
  piVar4[5] = 0;
  piVar4[6] = 0;
  piVar4[7] = 0;
  return;
}



/* Entry: 10b4c1208; end: 10b4c12cf;  */

void FUN_10b4c1208(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong *param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar1 = param_1;
  uStack_48 = param_4;
  FUN_10b4c12d0(param_1,(uint)param_2 & 7,param_2 >> 3,&uStack_48,&uStack_80,&uStack_49);
  if ((uVar1 & 1) == 0) {
    if ((*param_5 & 1) == 0) {
      FUN_10b4c3590(param_5);
    }
    else {
      param_5 = (ulong *)((*param_5 & 0xfffffffffffffffe) + 8);
    }
    FUN_10b4d2404(param_2,param_5,param_3,param_6);
  }
  else {
    FUN_10b4c134c(param_1,param_2 >> 3,uStack_49,&uStack_80,param_5,param_3,param_6);
  }
  return;
}



/* Entry: 10b4c12d0; end: 10b4c134b;  */

void FUN_10b4c12d0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5
                  ,undefined1 *param_6)

{
  int iVar1;
  
  FUN_10b4bf224(param_4,param_3,param_5);
  if ((int)param_4 != 0) {
    iVar1 = *(int *)(&UNK_10e5b4b0c + (ulong)*(byte *)(param_5 + 0xc) * 4);
    *param_6 = 0;
    if (((param_2 == 2) && ((*(byte *)(param_5 + 0xd) & 1) != 0)) && (iVar1 - 5U < 0xfffffffd)) {
      *param_6 = 1;
    }
  }
  return;
}



/* Entry: 10b4c134c; end: 10b4c1c83;  */

/* WARNING: Type propagation algorithm not settling */

ulong *******
FUN_10b4c134c(ulong *******param_1,ulong *******param_2,int param_3,ulong *******param_4,
             ulong *******param_5,ulong *******param_6,ulong *******param_7)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  ulong *******pppppppuVar7;
  long lVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 ******ppppppuVar14;
  ulong *******pppppppuVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  ulong *******pppppppuVar19;
  ulong *******pppppppuVar20;
  ulong *******pppppppuVar21;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  ulong ******ppppppuVar22;
  ulong *******extraout_x8;
  ulong *******extraout_x8_00;
  ulong *******extraout_x8_01;
  ulong *******extraout_x8_02;
  ulong *******extraout_x8_03;
  ulong *******extraout_x8_04;
  ulong *******extraout_x8_05;
  ulong *******extraout_x8_06;
  ulong *******extraout_x8_07;
  ulong *******extraout_x8_08;
  ulong *******extraout_x8_09;
  ulong *******extraout_x8_10;
  undefined8 extraout_x8_11;
  int iVar23;
  ulong *******pppppppuVar24;
  int iVar25;
  int iVar26;
  bool bVar27;
  int iVar28;
  long lVar29;
  ulong *******pppppppuVar30;
  undefined8 ******ppppppuVar31;
  undefined8 uVar32;
  undefined8 unaff_x30;
  undefined4 uStack_264;
  undefined8 uStack_260;
  undefined8 uStack_258;
  ulong *******pppppppuStack_250;
  ulong *******pppppppuStack_248;
  ulong *******pppppppuStack_240;
  ulong *******pppppppuStack_238;
  ulong *******pppppppuStack_230;
  undefined8 *******pppppppuStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined1 uStack_201;
  ulong ******ppppppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong *******pppppppuStack_1e0;
  undefined8 uStack_1d8;
  uint auStack_1c8 [3];
  uint uStack_1bc;
  undefined8 *******pppppppuStack_1b8;
  ulong *******pppppppuStack_1b0;
  undefined8 uStack_1a8;
  ulong *******pppppppuStack_1a0;
  ulong *******pppppppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  int iStack_148;
  undefined8 uStack_128;
  ulong uStack_f8;
  undefined8 uStack_e8;
  ulong *******pppppppuStack_e0;
  ulong *******pppppppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  undefined1 auStack_b0 [8];
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong *****pppppuStack_98;
  ulong ******ppppppuStack_90;
  undefined2 uStack_88;
  undefined4 uStack_7c;
  ulong *******pppppppuStack_78;
  ulong *****pppppuStack_70;
  ulong *****pppppuStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  
  pppppppuVar7 = (ulong *******)&pppppppuStack_c0;
  pppppppuVar19 = (ulong *******)&pppppppuStack_c0;
  pppppppuVar9 = (ulong *******)&pppppppuStack_c0;
  pppppppuVar30 = param_2;
  pppppppuVar20 = param_4;
  pppppppuVar21 = param_5;
  pppppppuVar24 = param_6;
  func_0x000107c398ec();
  iVar23 = *(byte *)((long)pppppppuVar20 + 0xc) - 1;
  cVar4 = SBORROW4(iVar23,0x11);
  cVar5 = (int)(*(byte *)((long)pppppppuVar20 + 0xc) - 0x12) < 0;
  uVar6 = iVar23 == 0x11;
  pppppppuStack_e0 = param_2;
  pppppppuStack_d8 = param_6;
  pppppppuStack_c0 = pppppppuVar24;
  if (param_3 == 0) {
    switch(iVar23) {
    case 0:
      func_0x00010b4c54b0(*param_6);
      if ((bool)uVar6) {
        func_0x00010b4c5078();
        FUN_10b4bfb74();
        param_6 = param_6 + 1;
      }
      else {
        pppppppuVar20 = (ulong *******)param_4[4];
        func_0x00010b4c52c0();
        FUN_10b4bfaec();
        param_6 = param_6 + 1;
      }
      break;
    case 1:
      func_0x00010b4c54b0(*(int *)param_6);
      if ((bool)uVar6) {
        func_0x00010b4c5078();
        FUN_10b4bfa10();
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      else {
        pppppppuVar20 = (ulong *******)param_4[4];
        func_0x00010b4c52c0();
        FUN_10b4bf988();
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      break;
    case 2:
      func_0x00010b4c5174();
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00010b4c54b0();
        if ((bool)uVar6) {
          pppppppuVar20 = (ulong *******)(ulong)*(byte *)((long)param_4 + 0xe);
          pppppppuVar21 = pppppppuStack_b8;
          func_0x00010b4c52c0();
          FUN_10b4bf738();
        }
        else {
          pppppppuVar21 = (ulong *******)param_4[4];
          pppppppuVar20 = pppppppuStack_b8;
          func_0x00010b4c52c0();
          FUN_10b4bf6c8();
        }
      }
      break;
    case 3:
      func_0x00010b4c5174();
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00010b4c54b0();
        if ((bool)uVar6) {
          pppppppuVar20 = (ulong *******)(ulong)*(byte *)((long)param_4 + 0xe);
          pppppppuVar21 = pppppppuStack_b8;
          func_0x00010b4c52c0();
          FUN_10b4bf908();
        }
        else {
          pppppppuVar21 = (ulong *******)param_4[4];
          pppppppuVar20 = pppppppuStack_b8;
          func_0x00010b4c52c0();
          FUN_10b4bf898();
        }
      }
      break;
    case 4:
      func_0x00010b4c5174();
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00010b4c54b0();
        if ((bool)uVar6) {
          pppppppuVar20 = (ulong *******)(ulong)*(byte *)((long)param_4 + 0xe);
          pppppppuVar21 = (ulong *******)((ulong)pppppppuStack_b8 & 0xffffffff);
          func_0x00010b4c52c0();
          FUN_10b4bf650();
        }
        else {
          pppppppuVar20 = (ulong *******)((ulong)pppppppuStack_b8 & 0xffffffff);
          pppppppuVar21 = (ulong *******)param_4[4];
          func_0x00010b4c52c0();
          FUN_10b4bf5c0();
        }
      }
      break;
    case 5:
      func_0x00010b4c5660(*param_6);
      if ((bool)uVar6) {
        func_0x00010b4c5568();
        func_0x00010b4c52c0();
        pppppppuVar21 = extraout_x8_03;
        FUN_10b4bf908();
        param_6 = param_6 + 1;
      }
      else {
        func_0x00010b4c50ec();
        pppppppuVar20 = extraout_x8_07;
        FUN_10b4bf898();
        param_6 = param_6 + 1;
      }
      break;
    case 6:
      func_0x00010b4c5660(*(int *)param_6);
      if ((bool)uVar6) {
        func_0x00010b4c5568();
        func_0x00010b4c52c0();
        pppppppuVar21 = extraout_x8_04;
        FUN_10b4bf820();
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      else {
        func_0x00010b4c50ec();
        pppppppuVar20 = extraout_x8_08;
        FUN_10b4bf7b0();
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      break;
    case 7:
      func_0x00010b4c5174();
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00010b4c54b0();
        if ((bool)uVar6) {
          pppppppuVar20 = (ulong *******)(ulong)*(byte *)((long)param_4 + 0xe);
          uVar6 = pppppppuStack_b8 == (ulong *******)0x0;
          pppppppuVar21 = (ulong *******)(ulong)!(bool)uVar6;
          func_0x00010b4c52c0();
          FUN_10b4bfcb8();
        }
        else {
          uVar6 = pppppppuStack_b8 == (ulong *******)0x0;
          pppppppuVar20 = (ulong *******)(ulong)!(bool)uVar6;
          pppppppuVar21 = (ulong *******)param_4[4];
          func_0x00010b4c52c0();
          FUN_10b4bfc48();
        }
      }
      break;
    case 8:
    case 0xb:
      pppppppuVar20 = (ulong *******)param_4[4];
      func_0x00010b4c52c0(*(byte *)((long)param_4 + 0xd));
      uVar6 = extraout_w8 == 1;
      if ((bool)uVar6) {
        FUN_10b4c0018();
      }
      else {
        FUN_10b4bff84();
      }
      func_0x000107c30264(&pppppppuStack_c0);
      if (pppppppuStack_c0 == (ulong *******)0x0) goto code_r0x00010b4c1bd0;
      param_6 = param_7;
      func_0x000107c30268(param_7,pppppppuStack_c0,pppppppuVar7);
      pppppppuVar20 = param_1;
      break;
    case 9:
      pppppppuVar20 = (ulong *******)param_4[2];
      func_0x00010b4c50ec(*(byte *)((long)param_4 + 0xd));
      if (extraout_w8_01 == 1) {
        FUN_10b4c02cc();
      }
      else {
        FUN_10b4c00c0();
      }
      iVar23 = *(int *)(param_7 + 0xb);
      iVar26 = iVar23 + -1;
      uVar6 = iVar26 == 0;
      *(int *)(param_7 + 0xb) = iVar26;
      if (0 < iVar23) {
        uVar3 = (int)param_2 << 3 | 3;
        param_2 = (ulong *******)(ulong)uVar3;
        *(int *)((long)param_7 + 0x5c) = *(int *)((long)param_7 + 0x5c) + 1;
        func_0x000107c398d8();
        func_0x000107c3032c();
        param_7[0xb] = (ulong ******)
                       CONCAT44((int)((ulong)param_7[0xb] >> 0x20) + -1,(int)param_7[0xb] + 1);
        uVar1 = *(uint *)(param_7 + 10);
        *(int *)(param_7 + 10) = 0;
        uVar6 = uVar1 == uVar3;
        goto code_r0x00010b4c1b7c;
      }
code_r0x00010b4c1bd0:
      param_6 = (ulong *******)0x0;
      break;
    case 10:
      pppppppuVar20 = (ulong *******)param_4[2];
      func_0x00010b4c50ec(*(byte *)((long)param_4 + 0xd));
      uVar6 = extraout_w8_00 == 1;
      if ((bool)uVar6) {
        FUN_10b4c02cc();
      }
      else {
        FUN_10b4c00c0();
      }
      func_0x00010b4c5050();
      if ((bool)uVar6) {
        func_0x00010b4c5800();
        pppppppuVar30 = param_7;
        func_0x00010055e218();
        if (pppppppuVar30 == (ulong *******)0x0) {
          return (ulong *******)0x0;
        }
        func_0x00010055e2f0(param_1,pppppppuVar30,param_7);
        *(int *)(param_7 + 0xb) = *(int *)(param_7 + 0xb) + 1;
        uStack_e8 = (ulong *******)CONCAT44(uStack_e8._4_4_,uStack_e8._4_4_);
        func_0x000100064534(param_7,&uStack_e8);
        if ((int)param_7 != 0) {
          return param_1;
        }
        return (ulong *******)0x0;
      }
      goto LAB_10b4c1c28;
    case 0xc:
      func_0x00010b4c5174();
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00010b4c54b0();
        if ((bool)uVar6) {
          pppppppuVar20 = (ulong *******)(ulong)*(byte *)((long)param_4 + 0xe);
          pppppppuVar21 = (ulong *******)((ulong)pppppppuStack_b8 & 0xffffffff);
          func_0x00010b4c52c0();
          FUN_10b4bf820();
        }
        else {
          pppppppuVar20 = (ulong *******)((ulong)pppppppuStack_b8 & 0xffffffff);
          pppppppuVar21 = (ulong *******)param_4[4];
          func_0x00010b4c52c0();
          FUN_10b4bf7b0();
        }
      }
      break;
    case 0xd:
      func_0x00010b4c5174();
      pppppppuVar30 = pppppppuStack_b8;
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        ppppppuVar22 = param_4[3];
        (*(code *)param_4[2])(ppppppuVar22,pppppppuStack_b8);
        param_7 = pppppppuVar30;
        if (((ulong)ppppppuVar22 & 1) == 0) {
          if (((ulong)*param_5 & 1) == 0) {
            FUN_10b4c3590(param_5);
          }
          else {
            param_5 = (ulong *******)(((ulong)*param_5 & 0xfffffffffffffffe) + 8);
          }
          FUN_10b4d2160(param_2,(long)(int)pppppppuVar30,param_5);
        }
        else {
          func_0x00010b4c54b0();
          if ((bool)uVar6) {
            func_0x00010b4c5568();
            func_0x00010b4c52c0();
            pppppppuVar21 = pppppppuVar30;
            FUN_10b4bff0c();
          }
          else {
            pppppppuVar21 = (ulong *******)param_4[4];
            func_0x00010b4c52c0();
            pppppppuVar20 = pppppppuVar30;
            FUN_10b4bfe9c();
          }
        }
      }
      break;
    case 0xe:
      func_0x00010b4c5660(*(int *)param_6);
      if ((bool)uVar6) {
        func_0x00010b4c5568();
        func_0x00010b4c52c0();
        pppppppuVar21 = extraout_x8_00;
        FUN_10b4bf650();
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      else {
        func_0x00010b4c50ec();
        pppppppuVar20 = extraout_x8_05;
        FUN_10b4bf5c0();
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      break;
    case 0xf:
      func_0x00010b4c5660(*param_6);
      if ((bool)uVar6) {
        func_0x00010b4c5568();
        func_0x00010b4c52c0();
        pppppppuVar21 = extraout_x8_01;
        FUN_10b4bf738();
        param_6 = param_6 + 1;
      }
      else {
        func_0x00010b4c50ec();
        pppppppuVar20 = extraout_x8_06;
        FUN_10b4bf6c8();
        param_6 = param_6 + 1;
      }
      break;
    case 0x10:
      func_0x00010b4c5174();
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00010b4c5660(-((uint)pppppppuStack_b8 & 1) ^ (uint)pppppppuStack_b8 >> 1);
        if ((bool)uVar6) {
          func_0x00010b4c5568();
          func_0x00010b4c52c0();
          pppppppuVar21 = extraout_x8;
          FUN_10b4bf650();
        }
        else {
          pppppppuVar21 = (ulong *******)param_4[4];
          func_0x00010b4c52c0();
          pppppppuVar20 = extraout_x8_09;
          FUN_10b4bf5c0();
        }
      }
      break;
    case 0x11:
      func_0x00010b4c5174();
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00010b4c5660(-((ulong)pppppppuStack_b8 & 1) ^ (ulong)pppppppuStack_b8 >> 1);
        if ((bool)uVar6) {
          func_0x00010b4c5568();
          func_0x00010b4c52c0();
          pppppppuVar21 = extraout_x8_02;
          FUN_10b4bf738();
        }
        else {
          pppppppuVar21 = (ulong *******)param_4[4];
          func_0x00010b4c52c0();
          pppppppuVar20 = extraout_x8_10;
          FUN_10b4bf6c8();
        }
      }
    }
    goto LAB_10b4c1bd4;
  }
  pppppppuVar7 = pppppppuVar20;
  pppppppuVar15 = pppppppuVar21;
  pppppppuVar24 = param_6;
  uStack_e8 = param_7;
  switch(iVar23) {
  case 0:
    func_0x00010b4c5078();
    FUN_10b4bfd70();
    func_0x00010b4c5050();
    if ((bool)uVar6) {
      func_0x000107c398d8();
      func_0x00010b4c5800();
      func_0x000107c39c8c();
      func_0x00010b4d34fc();
      FUN_10b4d2fb0();
      return param_1;
    }
    break;
  case 1:
    func_0x00010b4c5078();
    FUN_10b4bfd70();
    func_0x00010b4c5050();
    if ((bool)uVar6) {
      func_0x000107c398d8();
      func_0x00010b4c5800();
      func_0x000107c39c8c();
      func_0x00010b4d34fc();
      FUN_10b4d2ea8();
      return param_1;
    }
    break;
  case 2:
    func_0x00010b4c5078();
    FUN_10b4bfd70();
    func_0x00010b4c5050();
    if ((bool)uVar6) {
      func_0x00010b4c52b0();
      func_0x00010b4c5800();
      func_0x00010b4d36dc();
      func_0x00010b4d33f4();
      func_0x00010b4d3620();
      if (param_1 != (ulong *******)0x0) {
        while (func_0x00010b4d354c(), !(bool)uVar6 && cVar5 == cVar4) {
          FUN_10b4d2868();
          pppppppuStack_a8 = param_1;
          if (param_1 == (ulong *******)0x0) goto LAB_10b4d2840;
          func_0x00010b4d3490();
          if ((bool)uVar6 || cVar5 != cVar4) {
            func_0x00010b4d33c4();
            if (param_1 != (ulong *******)0x0) goto LAB_10b4d285c;
            func_0x00010b4d34a8();
            FUN_10b4d2868();
            uVar6 = param_1 == param_7;
            if ((bool)uVar6) {
              func_0x00010b4d363c();
            }
            else {
LAB_10b4d283c:
              param_1 = (ulong *******)0x0;
            }
            goto LAB_10b4d2840;
          }
          func_0x00010b4d3608();
          if (cVar5 != cVar4) goto LAB_10b4d283c;
          func_0x00010b4d35d0();
          if (param_1 == (ulong *******)0x0) goto LAB_10b4d2840;
          func_0x00010b4d34c0();
        }
        func_0x00010b4d353c();
        FUN_10b4d2868();
        func_0x00010b4d3648();
      }
LAB_10b4d2840:
      func_0x00010b4d3458();
      if ((bool)uVar6) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_10b4d285c:
      func_0x00010802bcb8();
      func_0x00010b4d3418();
      func_0x00010b4d3598();
      pcStack_c8 = FUN_10b4d2868;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x00010b4d352c();
      while ((param_6 < param_7 &&
             (func_0x00010b4d3510(), param_6 = param_1, param_1 != (ulong *******)0x0))) {
        param_1 = param_2;
        FUN_10b227ed8(param_2,uStack_f8);
      }
      return param_6;
    }
    break;
  case 3:
    func_0x00010b4c5078();
    FUN_10b4bfd70();
    func_0x00010b4c5050();
    if ((bool)uVar6) {
      func_0x00010b4c52b0();
      func_0x00010b4c5800();
      func_0x00010b4d36dc();
      func_0x00010b4d33f4();
      func_0x00010b4d3620();
      if (param_1 != (ulong *******)0x0) {
        while (func_0x00010b4d354c(), !(bool)uVar6 && cVar5 == cVar4) {
          FUN_10b4d295c();
          pppppppuStack_a8 = param_1;
          if (param_1 == (ulong *******)0x0) goto LAB_10b4d2934;
          func_0x00010b4d3490();
          if ((bool)uVar6 || cVar5 != cVar4) {
            func_0x00010b4d33c4();
            if (param_1 != (ulong *******)0x0) goto LAB_10b4d2950;
            func_0x00010b4d34a8();
            FUN_10b4d295c();
            uVar6 = param_1 == param_7;
            if ((bool)uVar6) {
              func_0x00010b4d363c();
            }
            else {
LAB_10b4d2930:
              param_1 = (ulong *******)0x0;
            }
            goto LAB_10b4d2934;
          }
          func_0x00010b4d3608();
          if (cVar5 != cVar4) goto LAB_10b4d2930;
          func_0x00010b4d35d0();
          if (param_1 == (ulong *******)0x0) goto LAB_10b4d2934;
          func_0x00010b4d34c0();
        }
        func_0x00010b4d353c();
        FUN_10b4d295c();
        func_0x00010b4d3648();
      }
LAB_10b4d2934:
      func_0x00010b4d3458();
      if ((bool)uVar6) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_10b4d2950:
      func_0x00010802bcb8();
      func_0x00010b4d3418();
      func_0x00010b4d3598();
      pcStack_c8 = FUN_10b4d295c;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x00010b4d352c();
      while( true ) {
        pppppppuVar30 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x00010b4d3510();
        if (pppppppuVar30 == (ulong *******)0x0) break;
        param_1 = param_2;
        func_0x000108767594(param_2,uStack_f8);
        param_6 = pppppppuVar30;
      }
      return (ulong *******)0x0;
    }
    break;
  case 4:
    func_0x00010b4c5078();
    pppppppuVar24 = (ulong *******)0x5;
    FUN_10b4bfd70();
    func_0x00010b4c5050();
    if ((bool)uVar6) {
      func_0x00010b4c52b0();
      func_0x00010b4c5800();
      func_0x00010b4d36dc();
      pppppppuStack_78 = *(ulong ********)PTR____stack_chk_guard_11034bdc0;
      pppppppuVar20 = (ulong *******)&pppppppuStack_a8;
      pppppppuStack_a8 = pppppppuVar30;
      func_0x000107c30264();
      func_0x00010b4d3620();
      pppppppuVar21 = pppppppuVar20;
      if (pppppppuVar20 != (ulong *******)0x0) {
        while( true ) {
          pppppppuVar30 = (ulong *******)param_1[1];
          iVar26 = (int)pppppppuVar30 - (int)pppppppuVar20;
          iVar23 = (int)param_7;
          uVar6 = iVar23 == iVar26;
          if (iVar23 <= iVar26) break;
          func_0x00010b4d36a4();
          pppppppuVar21 = (ulong *******)0x0;
          pppppppuStack_a8 = pppppppuVar20;
          if (pppppppuVar20 == (ulong *******)0x0) goto LAB_10b4d2638;
          ppppppuVar22 = param_1[1];
          lVar29 = (long)iVar23 - (long)iVar26;
          if ((int)lVar29 < 0x11) {
            uStack_88 = 0;
            ppppppuStack_90 = (ulong ******)0x0;
            pppppuStack_98 = ppppppuVar22[1];
            pppppppuStack_a0 = (ulong *******)*ppppppuVar22;
            pppppppuStack_c0 = (ulong *******)CONCAT44(pppppppuStack_c0._4_4_,(int)lVar29);
            auStack_b0._4_4_ = 0x10;
            pppppppuVar30 = (ulong *******)(auStack_b0 + 4);
            func_0x000107c302a8(&pppppppuStack_c0,pppppppuVar30,&UNK_10f773ed4);
            if (pppppppuVar19 != (ulong *******)0x0) goto LAB_10b4d2658;
            param_7 = (ulong *******)((long)&pppppppuStack_a0 + lVar29);
            pppppppuVar19 =
                 (ulong *******)
                 ((long)&pppppppuStack_a0 + (long)((int)pppppppuVar20 - (int)ppppppuVar22));
            pppppppuVar30 = param_7;
            func_0x00010b4d36a4(pppppppuVar19,param_7);
            uVar6 = pppppppuVar19 == param_7;
            if ((bool)uVar6) {
              pppppppuVar21 = (ulong *******)((long)param_1[1] + lVar29);
            }
            else {
LAB_10b4d2634:
              pppppppuVar21 = (ulong *******)0x0;
            }
            goto LAB_10b4d2638;
          }
          uVar6 = *(int *)((long)param_1 + 0x1c) == 0x11;
          if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_10b4d2634;
          pppppppuVar21 = param_1;
          FUN_10b4d1d34();
          if (pppppppuVar21 == (ulong *******)0x0) goto LAB_10b4d2638;
          func_0x00010b4d34c0();
          pppppppuVar20 = pppppppuVar21;
        }
        param_1 = (ulong *******)((long)pppppppuVar20 + (long)iVar23);
        pppppppuVar30 = param_1;
        func_0x00010b4d36a4();
        uVar6 = param_1 == pppppppuVar20;
        pppppppuVar21 = pppppppuVar20;
        if (!(bool)uVar6) {
          pppppppuVar21 = (ulong *******)0x0;
        }
      }
LAB_10b4d2638:
      func_0x00010b4d3458();
      if ((bool)uVar6) {
        return pppppppuVar21;
      }
      ___stack_chk_fail();
      pppppppuVar19 = pppppppuVar21;
LAB_10b4d2658:
      func_0x00010802bcb8();
      func_0x00010bdb2a88(&pppppppuStack_c0,&UNK_10f7740e7,0x4ce,pppppppuVar19,pppppppuVar30);
      func_0x00010b4d3598();
      __Unwind_Resume();
      pcStack_c8 = FUN_10b4d2680;
      uStack_e8 = param_7;
      pppppppuStack_e0 = pppppppuVar24;
      pppppppuStack_d8 = param_1;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x00010b4d352c();
      while( true ) {
        pppppppuVar30 = pppppppuVar9;
        if (param_7 <= param_1) {
          return param_1;
        }
        func_0x00010b4d3510();
        if (pppppppuVar30 == (ulong *******)0x0) break;
        pppppppuVar9 = pppppppuVar24;
        func_0x000107c2845c(pppppppuVar24,uStack_f8 & 0xffffffff);
        param_1 = pppppppuVar30;
      }
      return (ulong *******)0x0;
    }
    break;
  case 5:
    func_0x00010b4c5078();
    FUN_10b4bfd70();
    func_0x00010b4c5050();
    if ((bool)uVar6) {
      func_0x000107c398d8();
      func_0x00010b4c5800();
      func_0x000107c39c8c();
      func_0x00010b4d34fc();
      FUN_10b4cbe9c();
      return param_1;
    }
    break;
  case 6:
    func_0x00010b4c5078();
    FUN_10b4bfd70();
    func_0x00010b4c5050();
    if ((bool)uVar6) {
      func_0x000107c398d8();
      func_0x00010b4c5800();
      func_0x000107c39c8c();
      func_0x00010b4d34fc();
      FUN_10b4cbfb4();
      return param_1;
    }
    break;
  case 7:
    func_0x00010b4c5078();
    FUN_10b4bfd70();
    func_0x00010b4c5050();
    if ((bool)uVar6) {
      func_0x00010b4c52b0();
      func_0x00010b4c5800();
      func_0x00010b4d36dc();
      func_0x00010b4d33f4();
      func_0x00010b4d3620();
      if (param_1 != (ulong *******)0x0) {
        while (func_0x00010b4d354c(), !(bool)uVar6 && cVar5 == cVar4) {
          FUN_10b4d2c48();
          pppppppuStack_a8 = param_1;
          if (param_1 == (ulong *******)0x0) goto LAB_10b4d2c20;
          func_0x00010b4d3490();
          if ((bool)uVar6 || cVar5 != cVar4) {
            func_0x00010b4d33c4();
            if (param_1 != (ulong *******)0x0) goto LAB_10b4d2c3c;
            func_0x00010b4d34a8();
            FUN_10b4d2c48();
            uVar6 = param_1 == param_7;
            if ((bool)uVar6) {
              func_0x00010b4d363c();
            }
            else {
LAB_10b4d2c1c:
              param_1 = (ulong *******)0x0;
            }
            goto LAB_10b4d2c20;
          }
          func_0x00010b4d3608();
          if (cVar5 != cVar4) goto LAB_10b4d2c1c;
          func_0x00010b4d35d0();
          if (param_1 == (ulong *******)0x0) goto LAB_10b4d2c20;
          func_0x00010b4d34c0();
        }
        func_0x00010b4d353c();
        FUN_10b4d2c48();
        func_0x00010b4d3648();
      }
LAB_10b4d2c20:
      func_0x00010b4d3458();
      if ((bool)uVar6) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_10b4d2c3c:
      func_0x00010802bcb8();
      func_0x00010b4d3418();
      func_0x00010b4d3598();
      pcStack_c8 = FUN_10b4d2c48;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x00010b4d352c();
      while( true ) {
        pppppppuVar30 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x00010b4d3510();
        if (pppppppuVar30 == (ulong *******)0x0) break;
        param_1 = param_2;
        FUN_10b4bfd04(param_2,uStack_f8 != 0);
        param_6 = pppppppuVar30;
      }
      return (ulong *******)0x0;
    }
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    goto code_r0x00010b4c1c2c;
  case 0xc:
    func_0x00010b4c5078();
    FUN_10b4bfd70();
    func_0x00010b4c5050();
    if ((bool)uVar6) {
      func_0x00010b4c52b0();
      func_0x00010b4c5800();
      func_0x00010b4d36dc();
      func_0x00010b4d33f4();
      func_0x00010b4d3620();
      if (param_1 != (ulong *******)0x0) {
        while (func_0x00010b4d354c(), !(bool)uVar6 && cVar5 == cVar4) {
          FUN_10b4d2774();
          pppppppuStack_a8 = param_1;
          if (param_1 == (ulong *******)0x0) goto LAB_10b4d274c;
          func_0x00010b4d3490();
          if ((bool)uVar6 || cVar5 != cVar4) {
            func_0x00010b4d33c4();
            if (param_1 != (ulong *******)0x0) goto LAB_10b4d2768;
            func_0x00010b4d34a8();
            FUN_10b4d2774();
            uVar6 = param_1 == param_7;
            if ((bool)uVar6) {
              func_0x00010b4d363c();
            }
            else {
LAB_10b4d2748:
              param_1 = (ulong *******)0x0;
            }
            goto LAB_10b4d274c;
          }
          func_0x00010b4d3608();
          if (cVar5 != cVar4) goto LAB_10b4d2748;
          func_0x00010b4d35d0();
          if (param_1 == (ulong *******)0x0) goto LAB_10b4d274c;
          func_0x00010b4d34c0();
        }
        func_0x00010b4d353c();
        FUN_10b4d2774();
        func_0x00010b4d3648();
      }
LAB_10b4d274c:
      func_0x00010b4d3458();
      if ((bool)uVar6) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_10b4d2768:
      func_0x00010802bcb8();
      func_0x00010b4d3418();
      func_0x00010b4d3598();
      pcStack_c8 = FUN_10b4d2774;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x00010b4d352c();
      while( true ) {
        pppppppuVar30 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x00010b4d3510();
        if (pppppppuVar30 == (ulong *******)0x0) break;
        param_1 = param_2;
        func_0x000107c29100(param_2,uStack_f8 & 0xffffffff);
        param_6 = pppppppuVar30;
      }
      return (ulong *******)0x0;
    }
    break;
  case 0xd:
    func_0x00010b4c5078();
    FUN_10b4bfd70();
    pppppppuStack_a8 = (ulong *******)param_4[3];
    auStack_b0 = (undefined1  [8])param_4[2];
    pppppuStack_98 = (ulong *****)CONCAT44(pppppuStack_98._4_4_,(int)param_2);
    pppppppuVar24 = (ulong *******)&pppppppuStack_78;
    pppppppuStack_b8 = param_1;
    pppppppuStack_a0 = param_5;
    pppppppuStack_78 = param_6;
    func_0x000107c30264();
    if (pppppppuStack_78 == (ulong *******)0x0) goto code_r0x00010b4c1bd0;
    while( true ) {
      param_2 = (ulong *******)((long)param_7[1] - (long)pppppppuStack_78);
      iVar23 = (int)pppppppuVar24;
      iVar26 = (int)param_2;
      uVar6 = iVar23 == iVar26;
      if (iVar23 <= iVar26) break;
      FUN_10b4c3938(pppppppuStack_78,param_7[1],&pppppppuStack_b8);
      if (pppppppuStack_78 == (ulong *******)0x0) goto code_r0x00010b4c1bd0;
      ppppppuVar22 = param_7[1];
      iVar25 = (int)pppppppuStack_78 - (int)ppppppuVar22;
      lVar29 = (long)iVar23 - (long)iVar26;
      iVar28 = (int)lVar29;
      uVar6 = iVar28 == 0x10;
      if (iVar28 < 0x11) {
        uStack_58 = 0;
        uStack_60 = 0;
        pppppuStack_68 = ppppppuVar22[1];
        pppppuStack_70 = *ppppppuVar22;
        ppppppuStack_90 = (ulong ******)CONCAT44(ppppppuStack_90._4_4_,iVar28);
        uStack_7c = 0x10;
        pppppppuVar7 = &ppppppuStack_90;
        pppppppuVar15 = (ulong *******)&uStack_7c;
        func_0x000107c302a8(pppppppuVar7,pppppppuVar15,&UNK_10f773ed4);
        if (pppppppuVar7 != (ulong *******)0x0) {
          func_0x00010802bcb8();
          pppppppuVar30 = (ulong *******)&UNK_10f773ef4;
          pppppppuVar19 = (ulong *******)0x4ce;
          func_0x00010bdb2a88(&ppppppuStack_90);
          pppppppuVar9 = &ppppppuStack_90;
          func_0x00010ae6c700();
          goto LAB_10b4c1c7c;
        }
        lVar8 = (long)&pppppuStack_70 + (long)iVar25;
        func_0x00010b4c5830();
        uVar6 = lVar8 == (long)&pppppuStack_70 + lVar29;
        if (!(bool)uVar6) goto code_r0x00010b4c1bd0;
        param_6 = (ulong *******)((long)param_7[1] + lVar29);
        goto LAB_10b4c1bd4;
      }
      uVar6 = *(int *)((long)param_7 + 0x1c) == 0x11;
      if ((*(int *)((long)param_7 + 0x1c) < 0x11) ||
         (pppppppuVar30 = param_7, FUN_10b4d1d34(), pppppppuVar30 == (ulong *******)0x0))
      goto code_r0x00010b4c1bd0;
      pppppppuVar24 = (ulong *******)(ulong)(uint)((iVar23 - iVar26) - iVar25);
      pppppppuStack_78 = (ulong *******)((long)pppppppuVar30 + (long)iVar25);
    }
    pppppppuVar30 = (ulong *******)((long)pppppppuStack_78 + (long)iVar23);
    param_1 = pppppppuStack_78;
    func_0x00010b4c5830();
    uVar6 = pppppppuVar30 == param_1;
code_r0x00010b4c1b7c:
    param_6 = param_1;
    if (!(bool)uVar6) {
      param_6 = (ulong *******)0x0;
    }
  default:
LAB_10b4c1bd4:
    func_0x00010b4c5050();
    if ((bool)uVar6) {
      func_0x00010b4c5800(param_6,unaff_x30);
      return param_6;
    }
    break;
  case 0xe:
    func_0x00010b4c5078();
    FUN_10b4bfd70();
    func_0x00010b4c5050();
    if ((bool)uVar6) {
      func_0x000107c398d8();
      func_0x00010b4c5800();
      func_0x000107c39c8c();
      func_0x00010b4d34fc();
      FUN_10b4d2c98();
      return param_1;
    }
    break;
  case 0xf:
    func_0x00010b4c5078();
    FUN_10b4bfd70();
    func_0x00010b4c5050();
    if ((bool)uVar6) {
      func_0x000107c398d8();
      func_0x00010b4c5800();
      func_0x000107c39c8c();
      func_0x00010b4d34fc();
      FUN_10b4d2da0();
      return param_1;
    }
    break;
  case 0x10:
    func_0x00010b4c5078();
    FUN_10b4bfd70();
    func_0x00010b4c5050();
    if ((bool)uVar6) {
      func_0x00010b4c52b0();
      func_0x00010b4c5800();
      func_0x00010b4d36dc();
      func_0x00010b4d33f4();
      func_0x00010b4d3620();
      if (param_1 != (ulong *******)0x0) {
        while (func_0x00010b4d354c(), !(bool)uVar6 && cVar5 == cVar4) {
          FUN_10b4d2a50();
          pppppppuStack_a8 = param_1;
          if (param_1 == (ulong *******)0x0) goto LAB_10b4d2a28;
          func_0x00010b4d3490();
          if ((bool)uVar6 || cVar5 != cVar4) {
            func_0x00010b4d33c4();
            if (param_1 != (ulong *******)0x0) goto LAB_10b4d2a44;
            func_0x00010b4d34a8();
            FUN_10b4d2a50();
            uVar6 = param_1 == param_7;
            if ((bool)uVar6) {
              func_0x00010b4d363c();
            }
            else {
LAB_10b4d2a24:
              param_1 = (ulong *******)0x0;
            }
            goto LAB_10b4d2a28;
          }
          func_0x00010b4d3608();
          if (cVar5 != cVar4) goto LAB_10b4d2a24;
          func_0x00010b4d35d0();
          if (param_1 == (ulong *******)0x0) goto LAB_10b4d2a28;
          func_0x00010b4d34c0();
        }
        func_0x00010b4d353c();
        FUN_10b4d2a50();
        func_0x00010b4d3648();
      }
LAB_10b4d2a28:
      func_0x00010b4d3458();
      if ((bool)uVar6) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_10b4d2a44:
      func_0x00010802bcb8();
      func_0x00010b4d3418();
      func_0x00010b4d3598();
      pcStack_c8 = FUN_10b4d2a50;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x00010b4d352c();
      while( true ) {
        pppppppuVar30 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x00010b4d3510();
        if (pppppppuVar30 == (ulong *******)0x0) break;
        param_1 = param_2;
        func_0x000107c2845c(param_2,-((uint)uStack_f8 & 1) ^ (uint)uStack_f8 >> 1);
        param_6 = pppppppuVar30;
      }
      return (ulong *******)0x0;
    }
    break;
  case 0x11:
    func_0x00010b4c5078();
    FUN_10b4bfd70();
    func_0x00010b4c5050();
    if ((bool)uVar6) {
      func_0x00010b4c52b0();
      func_0x00010b4c5800();
      func_0x00010b4d36dc();
      func_0x00010b4d33f4();
      func_0x00010b4d3620();
      if (param_1 != (ulong *******)0x0) {
        while (func_0x00010b4d354c(), !(bool)uVar6 && cVar5 == cVar4) {
          FUN_10b4d2b4c();
          pppppppuStack_a8 = param_1;
          if (param_1 == (ulong *******)0x0) goto LAB_10b4d2b24;
          func_0x00010b4d3490();
          if ((bool)uVar6 || cVar5 != cVar4) {
            func_0x00010b4d33c4();
            if (param_1 != (ulong *******)0x0) goto LAB_10b4d2b40;
            func_0x00010b4d34a8();
            FUN_10b4d2b4c();
            uVar6 = param_1 == param_7;
            if ((bool)uVar6) {
              func_0x00010b4d363c();
            }
            else {
LAB_10b4d2b20:
              param_1 = (ulong *******)0x0;
            }
            goto LAB_10b4d2b24;
          }
          func_0x00010b4d3608();
          if (cVar5 != cVar4) goto LAB_10b4d2b20;
          func_0x00010b4d35d0();
          if (param_1 == (ulong *******)0x0) goto LAB_10b4d2b24;
          func_0x00010b4d34c0();
        }
        func_0x00010b4d353c();
        FUN_10b4d2b4c();
        func_0x00010b4d3648();
      }
LAB_10b4d2b24:
      func_0x00010b4d3458();
      if ((bool)uVar6) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_10b4d2b40:
      func_0x00010802bcb8();
      func_0x00010b4d3418();
      func_0x00010b4d3598();
      pcStack_c8 = FUN_10b4d2b4c;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x00010b4d352c();
      while( true ) {
        pppppppuVar30 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x00010b4d3510();
        if (pppppppuVar30 == (ulong *******)0x0) break;
        param_1 = param_2;
        FUN_10b227ed8(param_2,-(uStack_f8 & 1) ^ uStack_f8 >> 1);
        param_6 = pppppppuVar30;
      }
      return (ulong *******)0x0;
    }
  }
LAB_10b4c1c28:
  uVar6 = 0;
  ___stack_chk_fail();
  pppppppuVar7 = pppppppuVar20;
  pppppppuVar15 = pppppppuVar21;
  pppppppuVar24 = param_6;
code_r0x00010b4c1c2c:
  pppppppuVar19 = (ulong *******)0x38;
  func_0x00010bdb2a00(&pppppppuStack_b8,&UNK_10f773e2b);
  pppppppuVar30 = (ulong *******)&UNK_10f773db9;
  pppppppuVar9 = (ulong *******)&pppppppuStack_b8;
  FUN_10b4c3038();
LAB_10b4c1c7c:
  func_0x00010b4c5648();
  __Unwind_Resume();
  pcStack_c8 = FUN_10b4c1c84;
  uVar32 = 0;
  pppppppuVar21 = pppppppuVar19;
  pppppppuVar11 = pppppppuVar7;
  pppppppuVar20 = pppppppuVar15;
  uStack_e8 = param_7;
  pppppppuStack_e0 = param_2;
  pppppppuStack_d8 = pppppppuVar24;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000107c398ec();
  uStack_1a8 = 0;
  pppppppuStack_1b8 = (undefined8 *******)0x0;
  pppppppuStack_1b0 = (ulong *******)0x0;
  pppppppuVar24 = (ulong *******)0x0;
  pppppppuStack_1a0 = pppppppuVar30;
  uStack_128 = extraout_x8_11;
LAB_10b4c1cd4:
  do {
    while( true ) {
      uVar18 = SUB84(pppppppuVar21,0);
      pppppppuVar21 = pppppppuVar15;
      func_0x000107c302ac(pppppppuVar15,&pppppppuStack_1a0);
      pppppppuVar30 = pppppppuStack_1a0;
      iVar23 = (int)pppppppuVar11;
      if (((ulong)pppppppuVar21 & 1) != 0) goto LAB_10b4c1f10;
      pppppppuVar10 = (ulong *******)((long)pppppppuStack_1a0 + 1);
      uStack_1bc = (uint)*(byte *)pppppppuStack_1a0;
      iVar26 = (int)uVar32;
      if (uStack_1bc != 0x1a) break;
      uVar6 = iVar26 == 1;
      if ((bool)uVar6) {
        pppppppuVar30 = pppppppuVar9;
        pppppppuStack_1a0 = pppppppuVar10;
        func_0x00010b4c55e4(pppppppuVar9,(long)pppppppuVar24 << 3 | 2);
        iVar23 = (int)pppppppuVar11;
        uVar18 = SUB84(pppppppuVar10,0);
        pppppppuStack_1a0 = pppppppuVar30;
        if (pppppppuVar30 == (ulong *******)0x0) goto LAB_10b4c1ef8;
        uVar32 = 3;
        pppppppuVar21 = pppppppuVar10;
      }
      else {
        pppppppuStack_198 = (ulong *******)0x0;
        uStack_190 = 0;
        uStack_188 = 0;
        pppppppuVar21 = (ulong *******)&pppppppuStack_1a0;
        pppppppuStack_1a0 = pppppppuVar10;
        func_0x000107c30264();
        if (pppppppuStack_1a0 == (ulong *******)0x0) {
LAB_10b4c1e48:
          pppppppuVar21 = pppppppuVar10;
          bVar27 = false;
        }
        else {
          pppppppuVar11 = (ulong *******)&pppppppuStack_198;
          pppppppuVar30 = pppppppuVar15;
          func_0x000107c30268();
          pppppppuVar10 = pppppppuVar21;
          pppppppuStack_1a0 = pppppppuVar30;
          if (pppppppuVar30 == (ulong *******)0x0) goto LAB_10b4c1e48;
          if (iVar26 == 0) {
            func_0x000107c27b9c(&pppppppuStack_1b8,&pppppppuStack_198);
            uVar32 = 2;
          }
          bVar27 = true;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_198);
        iVar23 = (int)pppppppuVar11;
        uVar18 = SUB84(pppppppuVar21,0);
        if (!bVar27) goto LAB_10b4c1ef8;
      }
    }
    uVar6 = *(byte *)pppppppuStack_1a0 == 0x10;
    if ((bool)uVar6) {
      pppppppuVar21 = pppppppuVar10;
      pppppppuStack_1a0 = pppppppuVar10;
      FUN_10b4c39d0(pppppppuVar10,auStack_1c8);
      iVar23 = (int)pppppppuVar11;
      uVar18 = SUB84(pppppppuVar21,0);
      pppppppuStack_1a0 = pppppppuVar10;
      if ((pppppppuVar10 == (ulong *******)0x0) ||
         (pppppppuVar30 = (ulong *******)(ulong)auStack_1c8[0], auStack_1c8[0] == 0))
      goto LAB_10b4c1ef8;
      if (iVar26 == 0) {
        uVar32 = 1;
        pppppppuVar24 = pppppppuVar30;
      }
      else {
        uVar6 = 0;
        if (iVar26 == 2) {
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          pppppppuStack_1e0 = (ulong *******)0x0;
          uStack_1f8 = 0;
          ppppppuStack_200 = (ulong ******)0x0;
          pppppppuVar20 = &ppppppuStack_200;
          pppppppuVar21 = pppppppuVar9;
          pppppppuStack_198 = pppppppuVar19;
          FUN_10b4c12d0(pppppppuVar9,2,pppppppuVar30,&pppppppuStack_198,pppppppuVar20,&uStack_201);
          if (((ulong)pppppppuVar21 & 1) == 0) {
            uVar6 = uStack_1a8._7_1_ == 0;
            pppppppuVar21 = pppppppuStack_1b0;
            pppppppuVar12 = pppppppuStack_1b8;
            if (-1 < uStack_1a8) {
              pppppppuVar21 = (ulong *******)(ulong)uStack_1a8._7_1_;
              pppppppuVar12 = &pppppppuStack_1b8;
            }
            if (((ulong)*pppppppuVar7 & 1) == 0) {
              pppppppuVar11 = pppppppuVar7;
              FUN_10b4c3590();
            }
            else {
              pppppppuVar11 = (ulong *******)(((ulong)*pppppppuVar7 & 0xfffffffffffffffe) + 8);
            }
            FUN_10b4d21d8(pppppppuVar30,pppppppuVar12);
          }
          else {
            uVar6 = uStack_1f8._5_1_ == '\x01';
            pppppppuVar24 = pppppppuVar9;
            pppppppuVar20 = pppppppuStack_1e0;
            if ((bool)uVar6) {
              FUN_10b4c02cc(pppppppuVar9,pppppppuVar30,0xb);
            }
            else {
              FUN_10b4c00c0(pppppppuVar9,pppppppuVar30,0xb,uStack_1f0,pppppppuStack_1e0);
            }
            pppppppuVar11 = (ulong *******)&pppppppuStack_1b8;
            func_0x00010b4c3a9c(&pppppppuStack_198,pppppppuVar15,&uStack_210);
            pppppppuVar21 = (ulong *******)&pppppppuStack_198;
            pppppppuVar10 = pppppppuVar24;
            func_0x000107c3032c(pppppppuVar24,uStack_210);
            iVar23 = (int)pppppppuVar11;
            uVar18 = SUB84(pppppppuVar21,0);
            if ((pppppppuVar10 == (ulong *******)0x0) || (iStack_148 != 0)) goto LAB_10b4c1ef8;
          }
          uVar32 = 3;
          pppppppuVar24 = pppppppuVar30;
        }
      }
      goto LAB_10b4c1cd4;
    }
    uVar18 = 0;
    pppppppuStack_1a0 = pppppppuVar10;
    func_0x00010b4c3a44(pppppppuVar30,&uStack_1bc);
    iVar23 = (int)pppppppuVar11;
    if ((uStack_1bc == 0) || (uVar6 = (uStack_1bc & 7) == 4, (bool)uVar6)) {
      *(uint *)(pppppppuVar15 + 10) = uStack_1bc - 1;
      pppppppuVar30 = pppppppuStack_1a0;
      goto LAB_10b4c1f10;
    }
    pppppppuVar30 = pppppppuVar9;
    func_0x00010b4c55e4();
    iVar23 = (int)pppppppuVar11;
    uVar18 = SUB84(pppppppuStack_1a0,0);
    pppppppuVar21 = pppppppuStack_1a0;
    pppppppuStack_1a0 = pppppppuVar30;
    if (pppppppuVar30 == (ulong *******)0x0) {
LAB_10b4c1ef8:
      pppppppuVar30 = (ulong *******)0x0;
LAB_10b4c1f10:
      pppppppuVar12 = &pppppppuStack_1b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x000107c398a8(uStack_128);
      if ((bool)uVar6) {
        return pppppppuVar30;
      }
      ___stack_chk_fail();
      pppppppuVar13 = &pppppppuStack_1b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010b4c5400();
      uStack_260 = 2;
      pcStack_218 = FUN_10b4c1f80;
      ppppppuVar14 = pppppppuVar13[2];
      uStack_264 = uVar18;
      uStack_258 = uVar32;
      pppppppuStack_250 = pppppppuVar24;
      pppppppuStack_248 = pppppppuVar30;
      pppppppuStack_240 = pppppppuVar9;
      pppppppuStack_238 = pppppppuVar19;
      pppppppuStack_230 = pppppppuVar7;
      pppppppuStack_228 = pppppppuVar12;
      ppuStack_220 = &puStack_d0;
      if ((long)*(short *)((long)pppppppuVar13 + 10) < 0) {
        ppppppuVar31 = (undefined8 ******)ppppppuVar14[1];
        bVar2 = *(byte *)((long)ppppppuVar31 + 10);
        puVar16 = &uStack_264;
        FUN_10b4c2068();
        puVar17 = puVar16;
        while ((ppppppuVar14 != ppppppuVar31 || (uint)puVar17 != (uint)bVar2 &&
               (uVar1 = (uint)puVar17 & 0xff, *(int *)(ppppppuVar14 + (ulong)uVar1 * 4 + 2) < iVar23
               ))) {
          pppppppuVar20 = (ulong *******)(ppppppuVar14 + (ulong)uVar1 * 4 + 3);
          func_0x00010b4c5554(pppppppuVar20);
          func_0x00010b4c5408();
          puVar17 = (undefined4 *)((ulong)puVar16 & 0xffffffff);
        }
      }
      else {
        ppppppuVar31 = ppppppuVar14 + (long)*(short *)((long)pppppppuVar13 + 10) * 4;
        FUN_10b4c2a04(ppppppuVar14,ppppppuVar31,&uStack_264);
        for (; (ppppppuVar14 != ppppppuVar31 && (*(int *)ppppppuVar14 < iVar23));
            ppppppuVar14 = ppppppuVar14 + 4) {
          pppppppuVar20 = (ulong *******)(ppppppuVar14 + 1);
          func_0x00010b4c5554();
        }
      }
      func_0x00010b4c54e0(pppppppuVar20);
      return pppppppuVar20;
    }
  } while( true );
}



/* Entry: 10b4c1c84; end: 10b4c1f7f;  */

byte *****
FUN_10b4c1c84(byte *****param_1,byte *****param_2,byte *****param_3,byte *****param_4,
             byte *****param_5)

{
  uint uVar1;
  byte bVar2;
  byte ****ppppbVar3;
  undefined1 in_ZR;
  byte *****pppppbVar4;
  byte *****pppppbVar5;
  byte *****pppppbVar6;
  byte *****pppppbVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 ****ppppuVar10;
  byte *****pppppbVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 extraout_x8;
  bool bVar16;
  byte *****pppppbVar17;
  undefined8 ****ppppuVar18;
  int iVar19;
  undefined8 uVar20;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  byte ****ppppbStack_190;
  byte ****ppppbStack_188;
  byte ****ppppbStack_180;
  byte ****ppppbStack_178;
  byte ****ppppbStack_170;
  undefined8 ****ppppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined1 uStack_141;
  byte ***pppbStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  byte ****ppppbStack_120;
  undefined8 uStack_118;
  uint auStack_108 [3];
  uint uStack_fc;
  undefined8 ****ppppuStack_f8;
  byte ****ppppbStack_f0;
  undefined8 uStack_e8;
  byte ****ppppbStack_e0;
  byte ****ppppbStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int iStack_88;
  undefined8 uStack_68;
  
  uVar20 = 0;
  pppppbVar4 = param_3;
  pppppbVar7 = param_4;
  pppppbVar11 = param_5;
  func_0x000107c398ec();
  uStack_e8 = 0;
  ppppuStack_f8 = (undefined8 *****)0x0;
  ppppbStack_f0 = (byte ****)0x0;
  pppppbVar6 = (byte *****)0x0;
  ppppbStack_e0 = (byte ****)param_2;
  uStack_68 = extraout_x8;
LAB_10b4c1cd4:
  do {
    while( true ) {
      uVar14 = SUB84(pppppbVar4,0);
      pppppbVar4 = param_5;
      func_0x000107c302ac(param_5,&ppppbStack_e0);
      ppppbVar3 = ppppbStack_e0;
      iVar15 = (int)pppppbVar7;
      pppppbVar17 = (byte *****)ppppbStack_e0;
      if (((ulong)pppppbVar4 & 1) != 0) goto LAB_10b4c1f10;
      pppppbVar17 = (byte *****)((long)ppppbStack_e0 + 1);
      uStack_fc = (uint)*(byte *)ppppbStack_e0;
      iVar19 = (int)uVar20;
      if (uStack_fc != 0x1a) break;
      in_ZR = iVar19 == 1;
      if ((bool)in_ZR) {
        pppppbVar4 = param_1;
        ppppbStack_e0 = (byte ****)pppppbVar17;
        func_0x00010b4c55e4(param_1,(long)pppppbVar6 << 3 | 2);
        iVar15 = (int)pppppbVar7;
        uVar14 = SUB84(pppppbVar17,0);
        ppppbStack_e0 = (byte ****)pppppbVar4;
        if (pppppbVar4 == (byte *****)0x0) goto LAB_10b4c1ef8;
        uVar20 = 3;
        pppppbVar4 = pppppbVar17;
      }
      else {
        ppppbStack_d8 = (byte ****)0x0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        pppppbVar4 = &ppppbStack_e0;
        ppppbStack_e0 = (byte ****)pppppbVar17;
        func_0x000107c30264();
        if ((byte *****)ppppbStack_e0 == (byte *****)0x0) {
LAB_10b4c1e48:
          pppppbVar4 = pppppbVar17;
          bVar16 = false;
        }
        else {
          pppppbVar7 = &ppppbStack_d8;
          pppppbVar5 = param_5;
          func_0x000107c30268();
          pppppbVar17 = pppppbVar4;
          ppppbStack_e0 = (byte ****)pppppbVar5;
          if (pppppbVar5 == (byte *****)0x0) goto LAB_10b4c1e48;
          if (iVar19 == 0) {
            func_0x000107c27b9c(&ppppuStack_f8,&ppppbStack_d8);
            uVar20 = 2;
          }
          bVar16 = true;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppbStack_d8);
        iVar15 = (int)pppppbVar7;
        uVar14 = SUB84(pppppbVar4,0);
        if (!bVar16) goto LAB_10b4c1ef8;
      }
    }
    in_ZR = *(byte *)ppppbStack_e0 == 0x10;
    if ((bool)in_ZR) {
      pppppbVar4 = pppppbVar17;
      ppppbStack_e0 = (byte ****)pppppbVar17;
      FUN_10b4c39d0(pppppbVar17,auStack_108);
      iVar15 = (int)pppppbVar7;
      uVar14 = SUB84(pppppbVar4,0);
      ppppbStack_e0 = (byte ****)pppppbVar17;
      if ((pppppbVar17 == (byte *****)0x0) ||
         (pppppbVar17 = (byte *****)(ulong)auStack_108[0], auStack_108[0] == 0)) goto LAB_10b4c1ef8;
      if (iVar19 == 0) {
        uVar20 = 1;
        pppppbVar6 = pppppbVar17;
      }
      else {
        in_ZR = 0;
        if (iVar19 == 2) {
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          ppppbStack_120 = (byte ****)0x0;
          uStack_138 = 0;
          pppbStack_140 = (byte ***)0x0;
          pppppbVar11 = (byte *****)&pppbStack_140;
          pppppbVar4 = param_1;
          ppppbStack_d8 = (byte ****)param_3;
          FUN_10b4c12d0(param_1,2,pppppbVar17,&ppppbStack_d8,pppppbVar11,&uStack_141);
          if (((ulong)pppppbVar4 & 1) == 0) {
            in_ZR = uStack_e8._7_1_ == 0;
            pppppbVar4 = (byte *****)ppppbStack_f0;
            pppppuVar8 = (undefined8 *****)ppppuStack_f8;
            if (-1 < uStack_e8) {
              pppppbVar4 = (byte *****)(ulong)uStack_e8._7_1_;
              pppppuVar8 = &ppppuStack_f8;
            }
            if (((ulong)*param_4 & 1) == 0) {
              pppppbVar7 = param_4;
              FUN_10b4c3590();
            }
            else {
              pppppbVar7 = (byte *****)(((ulong)*param_4 & 0xfffffffffffffffe) + 8);
            }
            FUN_10b4d21d8(pppppbVar17,pppppuVar8);
          }
          else {
            in_ZR = uStack_138._5_1_ == '\x01';
            pppppbVar6 = param_1;
            pppppbVar11 = (byte *****)ppppbStack_120;
            if ((bool)in_ZR) {
              FUN_10b4c02cc(param_1,pppppbVar17,0xb);
            }
            else {
              FUN_10b4c00c0(param_1,pppppbVar17,0xb,uStack_130,ppppbStack_120);
            }
            pppppbVar7 = (byte *****)&ppppuStack_f8;
            func_0x00010b4c3a9c(&ppppbStack_d8,param_5,&uStack_150);
            pppppbVar4 = &ppppbStack_d8;
            pppppbVar5 = pppppbVar6;
            func_0x000107c3032c(pppppbVar6,uStack_150);
            iVar15 = (int)pppppbVar7;
            uVar14 = SUB84(pppppbVar4,0);
            if ((pppppbVar5 == (byte *****)0x0) || (iStack_88 != 0)) goto LAB_10b4c1ef8;
          }
          uVar20 = 3;
          pppppbVar6 = pppppbVar17;
        }
      }
      goto LAB_10b4c1cd4;
    }
    uVar14 = 0;
    ppppbStack_e0 = (byte ****)pppppbVar17;
    func_0x00010b4c3a44(ppppbVar3,&uStack_fc);
    iVar15 = (int)pppppbVar7;
    if ((uStack_fc == 0) || (in_ZR = (uStack_fc & 7) == 4, (bool)in_ZR)) {
      *(uint *)(param_5 + 10) = uStack_fc - 1;
      pppppbVar17 = (byte *****)ppppbStack_e0;
      goto LAB_10b4c1f10;
    }
    pppppbVar17 = param_1;
    func_0x00010b4c55e4();
    iVar15 = (int)pppppbVar7;
    uVar14 = SUB84(ppppbStack_e0,0);
    pppppbVar4 = (byte *****)ppppbStack_e0;
    ppppbStack_e0 = (byte ****)pppppbVar17;
    if (pppppbVar17 == (byte *****)0x0) {
LAB_10b4c1ef8:
      pppppbVar17 = (byte *****)0x0;
LAB_10b4c1f10:
      pppppuVar8 = &ppppuStack_f8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x000107c398a8(uStack_68);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        pppppuVar9 = &ppppuStack_f8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x00010b4c5400();
        uStack_1a0 = 2;
        pcStack_158 = FUN_10b4c1f80;
        ppppuVar10 = pppppuVar9[2];
        uStack_1a4 = uVar14;
        uStack_198 = uVar20;
        ppppbStack_190 = (byte ****)pppppbVar6;
        ppppbStack_188 = (byte ****)pppppbVar17;
        ppppbStack_180 = (byte ****)param_1;
        ppppbStack_178 = (byte ****)param_3;
        ppppbStack_170 = (byte ****)param_4;
        ppppuStack_168 = pppppuVar8;
        puStack_160 = &stack0xfffffffffffffff0;
        if ((long)*(short *)((long)pppppuVar9 + 10) < 0) {
          ppppuVar18 = (undefined8 ****)ppppuVar10[1];
          bVar2 = *(byte *)((long)ppppuVar18 + 10);
          puVar12 = &uStack_1a4;
          FUN_10b4c2068();
          puVar13 = puVar12;
          while ((ppppuVar10 != ppppuVar18 || (uint)puVar13 != (uint)bVar2 &&
                 (uVar1 = (uint)puVar13 & 0xff, *(int *)(ppppuVar10 + (ulong)uVar1 * 4 + 2) < iVar15
                 ))) {
            pppppbVar11 = (byte *****)(ppppuVar10 + (ulong)uVar1 * 4 + 3);
            func_0x00010b4c5554(pppppbVar11);
            func_0x00010b4c5408();
            puVar13 = (undefined4 *)((ulong)puVar12 & 0xffffffff);
          }
        }
        else {
          ppppuVar18 = ppppuVar10 + (long)*(short *)((long)pppppuVar9 + 10) * 4;
          FUN_10b4c2a04(ppppuVar10,ppppuVar18,&uStack_1a4);
          for (; (ppppuVar10 != ppppuVar18 && (*(int *)ppppuVar10 < iVar15));
              ppppuVar10 = ppppuVar10 + 4) {
            pppppbVar11 = (byte *****)(ppppuVar10 + 1);
            func_0x00010b4c5554();
          }
        }
        func_0x00010b4c54e0(pppppbVar11);
        return pppppbVar11;
      }
      return pppppbVar17;
    }
  } while( true );
}



/* Entry: 10b4c1f80; end: 10b4c2067;  */

void FUN_10b4c1f80(long param_1,undefined8 param_2,undefined4 param_3,int param_4,int *param_5)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uStack_54;
  
  piVar3 = *(int **)(param_1 + 0x10);
  uStack_54 = param_3;
  if ((long)*(short *)(param_1 + 10) < 0) {
    piVar6 = *(int **)(piVar3 + 2);
    bVar2 = *(byte *)((long)piVar6 + 10);
    puVar4 = &uStack_54;
    FUN_10b4c2068();
    puVar5 = puVar4;
    while ((piVar3 != piVar6 || (uint)puVar5 != (uint)bVar2 &&
           (uVar1 = (uint)puVar5 & 0xff, piVar3[(ulong)uVar1 * 8 + 4] < param_4))) {
      param_5 = piVar3 + (ulong)uVar1 * 8 + 6;
      func_0x00010b4c5554(param_5);
      func_0x00010b4c5408();
      puVar5 = (undefined4 *)((ulong)puVar4 & 0xffffffff);
    }
  }
  else {
    piVar6 = piVar3 + (long)*(short *)(param_1 + 10) * 8;
    FUN_10b4c2a04(piVar3,piVar6,&uStack_54);
    for (; (piVar3 != piVar6 && (*piVar3 < param_4)); piVar3 = piVar3 + 8) {
      param_5 = piVar3 + 2;
      func_0x00010b4c5554();
    }
  }
  func_0x00010b4c54e0(param_5);
  return;
}



/* Entry: 10b4c2068; end: 10b4c207f;  */

void FUN_10b4c2068(void)

{
  func_0x00010b4c3b00();
  return;
}



/* Entry: 10b4c2080; end: 10b4c2a03;  */

/* WARNING: Possible PIC construction at 0x00010b4c20e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4c27dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4c2960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4c2820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4c2888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4c28f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4c2844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4c28d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4c28ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4c25b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4c2274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4c26fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060189c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d3bb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006018a0) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2700) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2278) */
/* WARNING: Removing unreachable block (ram,0x00010b4c25b8) */
/* WARNING: Removing unreachable block (ram,0x00010b4c28b0) */
/* WARNING: Removing unreachable block (ram,0x00010b4c28d4) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2848) */
/* WARNING: Removing unreachable block (ram,0x00010b4c28f8) */
/* WARNING: Removing unreachable block (ram,0x00010b4c288c) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2824) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2964) */
/* WARNING: Removing unreachable block (ram,0x00010b4c27e0) */
/* WARNING: Removing unreachable block (ram,0x00010b4c20ec) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2100) */
/* WARNING: Removing unreachable block (ram,0x00010b4c27bc) */
/* WARNING: Removing unreachable block (ram,0x00010b4c27c0) */
/* WARNING: Removing unreachable block (ram,0x00010b4c27c8) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2940) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2944) */
/* WARNING: Removing unreachable block (ram,0x00010b4c294c) */
/* WARNING: Removing unreachable block (ram,0x00010b4c27e8) */
/* WARNING: Removing unreachable block (ram,0x00010b4c27ec) */
/* WARNING: Removing unreachable block (ram,0x00010b4c27f4) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2850) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2854) */
/* WARNING: Removing unreachable block (ram,0x00010b4c285c) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2808) */
/* WARNING: Removing unreachable block (ram,0x00010b4c280c) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2814) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2870) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2874) */
/* WARNING: Removing unreachable block (ram,0x00010b4c287c) */
/* WARNING: Removing unreachable block (ram,0x00010b4c29c4) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2a00) */
/* WARNING: Removing unreachable block (ram,0x00010b4c553c) */
/* WARNING: Removing unreachable block (ram,0x00010b4c28dc) */
/* WARNING: Removing unreachable block (ram,0x00010b4c28e0) */
/* WARNING: Removing unreachable block (ram,0x00010b4c28e8) */
/* WARNING: Removing unreachable block (ram,0x00010b4c296c) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2970) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2978) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2920) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2924) */
/* WARNING: Removing unreachable block (ram,0x00010b4c292c) */
/* WARNING: Removing unreachable block (ram,0x00010b4c282c) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2830) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2838) */
/* WARNING: Removing unreachable block (ram,0x00010b4c28b8) */
/* WARNING: Removing unreachable block (ram,0x00010b4c28bc) */
/* WARNING: Removing unreachable block (ram,0x00010b4c28c4) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2894) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2898) */
/* WARNING: Removing unreachable block (ram,0x00010b4c28a0) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2900) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2904) */
/* WARNING: Removing unreachable block (ram,0x00010b4c290c) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2118) */
/* WARNING: Removing unreachable block (ram,0x00010b4c211c) */
/* WARNING: Removing unreachable block (ram,0x00010b4c2124) */
/* WARNING: Removing unreachable block (ram,0x00010b4d3bb8) */
/* WARNING: Recovered jumptable eliminated as dead code */

ulong * FUN_10b4c2080(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                     ulong *param_5,ulong *param_6)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  ulong uVar9;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  undefined8 uVar10;
  undefined8 extraout_x8_10;
  undefined8 extraout_x8_11;
  undefined8 extraout_x8_12;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  long *plVar11;
  long lVar12;
  int iVar13;
  long unaff_x23;
  int iVar14;
  ulong unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x30;
  
  if (*(byte *)((long)param_1 + 9) == 1) {
    if (*(byte *)((long)param_1 + 0xb) != 1) {
      iVar13 = (byte)param_1[1] - 1;
      cVar2 = SBORROW4(iVar13,0x11);
      cVar3 = (int)((byte)param_1[1] - 0x12) < 0;
      switch(iVar13) {
      case 0:
        func_0x00010b4c56fc();
        while (func_0x00010b4c5144(), cVar3 != cVar2) {
          func_0x00010b4c50c0();
          func_0x00010b4c50fc();
          func_0x00010b4c534c();
          func_0x00010b4c570c();
        }
        break;
      case 1:
        func_0x00010b4c56ec();
        while (func_0x00010b4c5144(), cVar3 != cVar2) {
          func_0x00010b4c50c0();
          func_0x00010b4c50fc();
          func_0x00010b4c534c();
          func_0x00010b4c571c();
        }
        break;
      case 2:
        func_0x00010b4c54c8();
        while (func_0x00010b4c5144(), cVar3 != cVar2) {
          func_0x00010b4c50c0();
          func_0x00010b4c50fc();
          param_5 = *(ulong **)(extraout_x8_05 + unaff_x23 * 8);
          func_0x00010b4c534c();
          func_0x00010b4c57dc();
          func_0x00010b4c54a4();
        }
        break;
      case 3:
        func_0x00010b4c54c8();
        while (func_0x00010b4c5144(), cVar3 != cVar2) {
          func_0x00010b4c50c0();
          func_0x00010b4c50fc();
          param_5 = *(ulong **)(extraout_x8_06 + unaff_x23 * 8);
          func_0x00010b4c534c();
          func_0x00010b4c57dc();
          func_0x00010b4c54a4();
        }
        break;
      case 4:
        func_0x00010b4c54c8();
        while (func_0x00010b4c5144(), cVar3 != cVar2) {
          func_0x00010b4c50c0();
          func_0x00010b4c50fc();
          param_5 = (ulong *)(ulong)*(uint *)(extraout_x8_03 + unaff_x23 * 4);
          func_0x00010b4c534c();
          func_0x00010b4c57e8();
          func_0x00010b4c54a4();
        }
        break;
      case 5:
        func_0x00010b4c56fc();
        while (func_0x00010b4c5144(), cVar3 != cVar2) {
          func_0x00010b4c50c0();
          func_0x00010b4c50fc();
          func_0x00010b4c534c();
          func_0x00010b4c570c();
        }
        break;
      case 6:
        func_0x00010b4c56ec();
        while (func_0x00010b4c5144(), cVar3 != cVar2) {
          func_0x00010b4c50c0();
          func_0x00010b4c50fc();
          func_0x00010b4c534c();
          func_0x00010b4c571c();
        }
        break;
      case 7:
        func_0x00010b4c54c8();
        while (func_0x00010b4c5144(), cVar3 != cVar2) {
          func_0x00010b4c50c0();
          func_0x00010b4c50fc();
          param_5 = (ulong *)(ulong)*(byte *)(extraout_x8_07 + unaff_x23);
          func_0x00010b4c534c();
          func_0x00010b4c57f4();
          func_0x00010b4c54a4();
        }
        break;
      case 8:
        puVar4 = param_1;
        func_0x00010b4c583c();
        while( true ) {
          lVar12 = (long)*(int *)(*param_1 + 8);
          cVar2 = SBORROW8(unaff_x26,lVar12);
          cVar3 = unaff_x26 - lVar12 < 0;
          if (lVar12 <= unaff_x26) break;
          func_0x00010b4c50c0();
          func_0x00010b4c5448();
          if ((long)unaff_x24 < 0) {
            unaff_x24 = param_5[1];
            cVar2 = SBORROW8(unaff_x24,0x7f);
            cVar3 = (long)(unaff_x24 - 0x7f) < 0;
            if ((long)unaff_x24 < 0x80) goto code_r0x00010b4c2768;
code_r0x00010b4c27b0:
            func_0x00010b4c5520();
            param_5 = puVar4;
          }
          else {
code_r0x00010b4c2768:
            func_0x00010b4c5814();
            func_0x00010b4c572c();
            if (cVar3 != cVar2) goto code_r0x00010b4c27b0;
            uVar10 = unaff_x27;
            while (0x7f < (uint)uVar10) {
              func_0x00010b4c5898();
              uVar10 = extraout_x8_10;
            }
            *unaff_x25 = (char)uVar10;
            unaff_x25[1] = (char)unaff_x24;
            func_0x00010b4c5638();
            param_5 = (ulong *)(unaff_x25 + 2 + unaff_x24);
            unaff_x25 = unaff_x25 + 2;
          }
          unaff_x26 = unaff_x26 + 1;
        }
        break;
      case 9:
        lVar12 = 8;
        puVar4 = param_1;
        while (0 < *(int *)(*param_1 + 8)) {
          func_0x00010b4c50c0();
          uVar6 = *(ulong *)*param_1;
          puVar8 = (ulong *)*param_1;
          if ((uVar6 & 1) != 0) {
            puVar8 = (ulong *)((uVar6 + lVar12) - 1);
          }
          puVar5 = param_4;
          FUN_10b4d3b80(param_4,*puVar8,puVar4,param_6);
          func_0x00010b4c54a4();
          lVar12 = lVar12 + 8;
          puVar4 = puVar5;
        }
        break;
      case 10:
        param_1 = (ulong *)*param_1;
        if ((int)param_1[1] < 1) break;
        if ((*param_1 & 1) != 0) {
          param_1 = (ulong *)(*param_1 + 7);
        }
        (**(code **)(*(long *)*param_1 + 0x30))();
        goto code_r0x000107c303cc;
      case 0xb:
        puVar4 = param_1;
        func_0x00010b4c583c();
        while( true ) {
          lVar12 = (long)*(int *)(*param_1 + 8);
          cVar2 = SBORROW8(unaff_x26,lVar12);
          cVar3 = unaff_x26 - lVar12 < 0;
          if (lVar12 <= unaff_x26) break;
          func_0x00010b4c50c0();
          func_0x00010b4c5448();
          if ((long)unaff_x24 < 0) {
            unaff_x24 = param_5[1];
            cVar2 = SBORROW8(unaff_x24,0x7f);
            cVar3 = (long)(unaff_x24 - 0x7f) < 0;
            if ((long)unaff_x24 < 0x80) goto code_r0x00010b4c2330;
code_r0x00010b4c2378:
            func_0x00010b4c5520();
            param_5 = puVar4;
          }
          else {
code_r0x00010b4c2330:
            func_0x00010b4c5814();
            func_0x00010b4c572c();
            if (cVar3 != cVar2) goto code_r0x00010b4c2378;
            uVar10 = unaff_x27;
            while (0x7f < (uint)uVar10) {
              func_0x00010b4c5898();
              uVar10 = extraout_x8_01;
            }
            *unaff_x25 = (char)uVar10;
            unaff_x25[1] = (char)unaff_x24;
            func_0x00010b4c5638();
            param_5 = (ulong *)(unaff_x25 + 2 + unaff_x24);
            unaff_x25 = unaff_x25 + 2;
          }
          unaff_x26 = unaff_x26 + 1;
        }
        break;
      case 0xc:
        func_0x00010b4c54c8();
        while (func_0x00010b4c5144(), cVar3 != cVar2) {
          func_0x00010b4c50c0();
          func_0x00010b4c50fc();
          param_5 = (ulong *)(ulong)*(uint *)(extraout_x8_04 + unaff_x23 * 4);
          func_0x00010b4c534c();
          func_0x00010b4c57f4();
          func_0x00010b4c54a4();
        }
        break;
      case 0xd:
        func_0x00010b4c54c8();
        while (func_0x00010b4c5144(), cVar3 != cVar2) {
          func_0x00010b4c50c0();
          func_0x00010b4c50fc();
          param_5 = (ulong *)(ulong)*(uint *)(extraout_x8_09 + unaff_x23 * 4);
          func_0x00010b4c534c();
          func_0x00010b4c57e8();
          func_0x00010b4c54a4();
        }
        break;
      case 0xe:
        func_0x00010b4c56ec();
        while (func_0x00010b4c5144(), cVar3 != cVar2) {
          func_0x00010b4c50c0();
          func_0x00010b4c50fc();
          func_0x00010b4c534c();
          func_0x00010b4c571c();
        }
        break;
      case 0xf:
        func_0x00010b4c56fc();
        while (func_0x00010b4c5144(), cVar3 != cVar2) {
          func_0x00010b4c50c0();
          func_0x00010b4c50fc();
          func_0x00010b4c534c();
          func_0x00010b4c570c();
        }
        break;
      case 0x10:
        func_0x00010b4c54c8();
        func_0x00010b4c5144();
        if (cVar3 != cVar2) {
          func_0x00010b4c50c0();
          func_0x00010b4c50fc();
          iVar13 = *(int *)(extraout_x8 + unaff_x23 * 4);
          func_0x00010b4c534c();
          puVar4 = (ulong *)(ulong)(uint)(iVar13 << 1 ^ iVar13 >> 0x1f);
          param_6 = param_1;
          goto code_r0x0001001a59d8;
        }
        break;
      case 0x11:
        func_0x00010b4c54c8();
        func_0x00010b4c5144();
        if (cVar3 == cVar2) break;
        func_0x00010b4c50c0();
        func_0x00010b4c50fc();
        lVar12 = *(long *)(extraout_x8_08 + unaff_x23 * 8);
        func_0x00010b4c534c();
        uVar6 = lVar12 << 1 ^ lVar12 >> 0x3f;
        puVar4 = param_1;
        goto code_r0x0001001a5a0c;
      }
      goto LAB_10b4c2140;
    }
    if (*(int *)((long)param_1 + 0xc) == 0) goto LAB_10b4c2140;
    puVar4 = param_1;
    func_0x00010b4c50c0();
    func_0x00010b4c5828(2);
    iVar13 = *(int *)((long)param_1 + 0xc);
    param_1 = puVar4;
code_r0x000107c280b8:
    uVar6 = (ulong)iVar13;
    puVar4 = param_1;
    goto code_r0x0001001a5a0c;
  }
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) goto LAB_10b4c2140;
  iVar13 = (byte)param_1[1] - 1;
  cVar2 = SBORROW4(iVar13,0x11);
  cVar3 = (int)((byte)param_1[1] - 0x12) < 0;
  iVar14 = (int)param_6;
  puVar4 = param_1;
  switch(iVar13) {
  case 0:
  case 5:
  case 0xf:
    puVar4 = param_1;
    func_0x00010b4c50c0();
    uVar6 = *param_1;
    func_0x00010b4c5828(1);
    param_5 = puVar4 + 1;
    *puVar4 = uVar6;
    break;
  case 1:
  case 6:
  case 0xe:
    func_0x00010b4c50c0();
    func_0x00010b4c5878();
    func_0x00010b4c5828(5);
    param_5 = (ulong *)((long)param_1 + 4);
    *(int *)param_1 = iVar14;
    break;
  case 2:
  case 3:
    func_0x00010b4c50c0();
    uVar6 = *param_1;
    func_0x00010b4c554c();
    goto code_r0x00010b4c25dc;
  case 4:
  case 0xd:
    func_0x00010b4c50c0();
    func_0x00010b4c5878();
    func_0x00010b4c554c();
    func_0x00010b4c538c(param_6,param_1,unaff_x30);
    iVar13 = (int)param_6;
    goto code_r0x000107c280b8;
  case 7:
    puVar8 = param_1;
    func_0x00010b4c50c0();
    puVar4 = (ulong *)(ulong)(byte)*param_1;
    goto code_r0x00010b4c271c;
  case 8:
    func_0x00010b4c50c0();
    param_1 = (ulong *)*param_1;
    uVar6 = (ulong)*(char *)((long)param_1 + 0x17);
    if ((long)uVar6 < 0) {
      uVar6 = param_1[1];
      cVar2 = SBORROW8(uVar6,0x7f);
      cVar3 = (long)(uVar6 - 0x7f) < 0;
      if (0x7f < (long)uVar6) goto code_r0x00010b4c29dc;
    }
    func_0x00010b4c5650();
    func_0x00010b4c5744();
    if (cVar3 != cVar2) {
code_r0x00010b4c29dc:
      func_0x00010b4c538c(param_6,param_4);
      func_0x00010b4d564c();
      func_0x00010b4d56cc();
      uVar10 = extraout_x10;
      while (0x7f < (uint)uVar10) {
        func_0x00010b4d576c();
        uVar10 = extraout_x10_00;
      }
      func_0x00010b4d56b4();
      uVar10 = extraout_x8_11;
      while (0x7f < (uint)uVar10) {
        func_0x00010b4d5758();
        uVar10 = extraout_x8_12;
      }
      func_0x00010b4d5660();
      if ((long)(*param_6 - (long)puVar4) < (long)(int)param_1) {
        while( true ) {
          iVar14 = ((int)*param_6 - (int)puVar4) + 0x10;
          iVar13 = (int)param_1;
          param_1 = (ulong *)(ulong)(uint)(iVar13 - iVar14);
          if (iVar13 - iVar14 == 0 || iVar13 < iVar14) break;
          func_0x00010b4d5738();
          pbVar1 = (byte *)((long)puVar4 + (long)iVar14);
          puVar4 = param_6;
          func_0x000107c303e4(param_6,pbVar1);
        }
        func_0x00010b4d5738();
        return (ulong *)((long)puVar4 + (long)iVar13);
      }
      _memcpy(puVar4);
      return (ulong *)((long)puVar4 + (long)(int)param_1);
    }
    uVar9 = (ulong)((uint)unaff_x24 | 2);
    while (0x7f < (uint)uVar9) {
      func_0x00010b4c58ac();
      uVar9 = extraout_x8_02;
    }
    goto code_r0x00010b4c23c8;
  case 9:
    puVar4 = param_1;
    func_0x00010b4c50c0();
    func_0x00010b4c538c(param_4,*param_1,puVar4);
    func_0x000107c28094(param_6,puVar4);
    puVar4 = (ulong *)(ulong)((int)param_4 << 3 | 3);
    goto code_r0x0001001a59d8;
  case 10:
    if ((*(byte *)((long)param_1 + 10) >> 4 & 1) != 0) {
      func_0x00010b4c578c(param_3);
      param_1 = (ulong *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x98);
      func_0x00010b4c538c(param_1,param_3,param_4,param_5,param_6,UNRECOVERED_JUMPTABLE,unaff_x30);
                    /* WARNING: Could not recover jumptable at 0x00010b4c29c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return param_1;
    }
    plVar11 = (long *)*param_1;
    plVar7 = plVar11;
    (**(code **)(*plVar11 + 0x30))();
    func_0x00010b4c538c(param_4,plVar11,
                        *(undefined4 *)((long)plVar11 + (ulong)*(uint *)(plVar7 + 3)),param_5);
code_r0x000107c303cc:
    func_0x0001001a597c(param_6,param_5);
    puVar4 = (ulong *)(ulong)((int)param_4 << 3 | 2);
    goto code_r0x0001001a59d8;
  case 0xb:
    func_0x00010b4c50c0();
    param_1 = (ulong *)*param_1;
    uVar6 = (ulong)*(char *)((long)param_1 + 0x17);
    if ((long)uVar6 < 0) {
      uVar6 = param_1[1];
      cVar2 = SBORROW8(uVar6,0x7f);
      cVar3 = (long)(uVar6 - 0x7f) < 0;
      if (0x7f < (long)uVar6) goto code_r0x00010b4c29dc;
    }
    func_0x00010b4c5650();
    func_0x00010b4c5744();
    if (cVar3 != cVar2) goto code_r0x00010b4c29dc;
    uVar9 = (ulong)((uint)unaff_x24 | 2);
    while (0x7f < (uint)uVar9) {
      func_0x00010b4c58ac();
      uVar9 = extraout_x8_00;
    }
code_r0x00010b4c23c8:
    *(byte *)puVar4 = (byte)uVar9;
    *(byte *)((long)puVar4 + 1) = (byte)uVar6;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1 = (ulong *)*param_1;
    }
    _memcpy((byte *)((long)puVar4 + 2),param_1,uVar6);
    param_5 = (ulong *)((byte *)((long)puVar4 + 2) + uVar6);
    break;
  case 0xc:
    func_0x00010b4c50c0();
    func_0x00010b4c5878();
    puVar8 = param_1;
    puVar4 = param_6;
code_r0x00010b4c271c:
    func_0x00010b4c554c();
code_r0x00010b4c2728:
    func_0x00010b4c538c(puVar4,puVar8,unaff_x30);
    param_6 = puVar8;
code_r0x0001001a59d8:
    while( true ) {
      if ((uint)puVar4 < 0x80) break;
      *(byte *)param_6 = (byte)puVar4 | 0x80;
      puVar4 = (ulong *)(ulong)((uint)puVar4 >> 7);
      param_6 = (ulong *)((long)param_6 + 1);
    }
    *(byte *)param_6 = (byte)puVar4;
    return (ulong *)((long)param_6 + 1);
  case 0x10:
    func_0x00010b4c50c0();
    func_0x00010b4c5878();
    func_0x00010b4c554c();
    puVar4 = (ulong *)(ulong)(uint)(iVar14 << 1 ^ iVar14 >> 0x1f);
    puVar8 = param_1;
    goto code_r0x00010b4c2728;
  case 0x11:
    func_0x00010b4c50c0();
    uVar6 = *param_1;
    func_0x00010b4c554c();
    uVar6 = uVar6 << 1 ^ (long)uVar6 >> 0x3f;
code_r0x00010b4c25dc:
    func_0x00010b4c538c(uVar6,puVar4,unaff_x30);
code_r0x0001001a5a0c:
    while( true ) {
      if (uVar6 < 0x80) break;
      *(byte *)puVar4 = (byte)uVar6 | 0x80;
      uVar6 = uVar6 >> 7;
      puVar4 = (ulong *)((long)puVar4 + 1);
    }
    *(byte *)puVar4 = (byte)uVar6;
    return (ulong *)((long)puVar4 + 1);
  }
LAB_10b4c2140:
  func_0x00010b4c538c(param_5,unaff_x30);
  return param_5;
}



/* Entry: 10b4c2a04; end: 10b4c2a27;  */

void FUN_10b4c2a04(void)

{
  FUN_10b4c3500();
  return;
}



/* Entry: 10b4c2a28; end: 10b4c2ab7;  */

undefined8 FUN_10b4c2a28(long param_1,undefined8 param_2)

{
  ulong extraout_x8;
  long extraout_x8_00;
  ulong uVar1;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  int unaff_w20;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  ulong uStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = (undefined1 *)&uStack_40;
  uStack_40 = 0;
  if ((long)*(short *)(param_1 + 10) < 0) {
    func_0x00010b4c5434();
    uStack_30 = 0;
    uVar1 = extraout_x8;
    puStack_38 = (undefined1 *)extraout_x9;
    puStack_28 = (undefined1 *)&uStack_40;
    while (puStack_38 != (undefined1 *)unaff_x19 || (int)uVar1 != unaff_w20) {
      func_0x00010b4c56bc();
      FUN_10b4c3c5c(&puStack_28,param_2,extraout_x8_00 + 0x18);
      func_0x00010b4c5408();
      uVar1 = uStack_30 & 0xffffffff;
    }
  }
  else {
    for (lVar2 = (long)*(short *)(param_1 + 10) << 5; lVar2 != 0; lVar2 = lVar2 + -0x20) {
      func_0x00010b4c5850();
      FUN_10b4c3c5c();
    }
  }
  return uStack_40;
}



/* Entry: 10b4c2ab8; end: 10b4c3017;  */

ulong FUN_10b4c2ab8(uint *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  ulong extraout_x8_17;
  long extraout_x8_18;
  ulong extraout_x8_19;
  long extraout_x8_20;
  ulong extraout_x8_21;
  long extraout_x8_22;
  ulong extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  int extraout_w9;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  uint *puVar4;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  uint uVar5;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x10_02;
  undefined8 extraout_x10_03;
  undefined8 extraout_x10_04;
  undefined8 extraout_x10_05;
  undefined8 extraout_x10_06;
  undefined8 extraout_x10_07;
  undefined8 extraout_x10_08;
  undefined8 extraout_x10_09;
  undefined8 uVar6;
  undefined8 extraout_x10_10;
  ulong extraout_x11;
  long extraout_x11_00;
  ulong extraout_x11_01;
  long extraout_x11_02;
  ulong extraout_x11_03;
  long extraout_x11_04;
  ulong extraout_x11_05;
  long extraout_x11_06;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  ulong unaff_x20;
  ulong unaff_x21;
  long lVar7;
  
  func_0x000107c398f0();
  if (*(char *)((long)param_1 + 9) == '\x01') {
    if (*(char *)((long)param_1 + 0xb) == '\x01') {
      switch((byte)param_1[2]) {
      case 1:
      case 6:
      case 0x10:
        unaff_x21 = (ulong)**(uint **)param_1 << 3;
        break;
      case 2:
      case 7:
      case 0xf:
        unaff_x21 = (ulong)**(uint **)param_1 << 2;
        break;
      case 3:
        func_0x00010b4c51f0();
        lVar1 = (extraout_x11_03 & 0xffffffff) << 3;
        lVar7 = extraout_x8_06;
        while (lVar1 != lVar7) {
          func_0x00010b4c5324();
          lVar1 = extraout_x11_04;
          lVar7 = extraout_x8_07 + 8;
        }
        break;
      case 4:
        func_0x00010b4c51f0();
        lVar1 = (extraout_x11_05 & 0xffffffff) << 3;
        lVar7 = extraout_x8_08;
        while (lVar1 != lVar7) {
          func_0x00010b4c5324();
          lVar1 = extraout_x11_06;
          lVar7 = extraout_x8_09 + 8;
        }
        break;
      case 5:
        func_0x00010b4c51f0();
        lVar1 = (extraout_x11_01 & 0xffffffff) << 2;
        lVar7 = extraout_x8_04;
        while (lVar1 != lVar7) {
          func_0x00010b4c5324();
          lVar1 = extraout_x11_02;
          lVar7 = extraout_x8_05 + 4;
        }
        break;
      case 8:
        unaff_x21 = (ulong)**(uint **)param_1;
        break;
      case 9:
      case 10:
      case 0xb:
      case 0xc:
        func_0x00010b4c52dc();
        func_0x00010bdb2a00();
        func_0x00010b4c5618();
        func_0x00010b4c52cc();
        return (ulong)((int)LZCOUNT((long)register0x00000008 << 1 ^ (long)register0x00000008 >> 0x3f
                                   ) * -9 + 0x280U >> 6);
      case 0xd:
        func_0x00010b4c5594();
        lVar7 = extraout_x8_02;
        lVar1 = extraout_x10;
        while (lVar1 != lVar7) {
          func_0x00010b4c5310();
          unaff_x21 = unaff_x21 + extraout_x12;
          lVar1 = extraout_x10_00;
          lVar7 = extraout_x8_03 + 4;
        }
        break;
      case 0xe:
        func_0x00010b4c51f0();
        lVar1 = (extraout_x11 & 0xffffffff) << 2;
        lVar7 = extraout_x8;
        while (lVar1 != lVar7) {
          func_0x00010b4c5324();
          lVar1 = extraout_x11_00;
          lVar7 = extraout_x8_00 + 4;
        }
        break;
      case 0x11:
        func_0x00010b4c5594();
        lVar7 = extraout_x8_10;
        lVar1 = extraout_x10_01;
        while (lVar1 != lVar7) {
          func_0x00010b4c5310();
          unaff_x21 = unaff_x21 + extraout_x12_00;
          lVar1 = extraout_x10_02;
          lVar7 = extraout_x8_11 + 4;
        }
        break;
      case 0x12:
        unaff_x21 = 0;
        for (lVar7 = 0; lVar7 < **(int **)param_1; lVar7 = lVar7 + 1) {
          lVar1 = *(long *)(*(long *)(*(int **)param_1 + 2) + lVar7 * 8);
          FUN_10b4c3018();
          unaff_x21 = lVar1 + unaff_x21;
        }
        break;
      default:
        param_1[3] = 0;
        return 0;
      }
      param_1[3] = (uint)unaff_x21;
      if (unaff_x21 != 0) {
        func_0x00010b4c5470(LZCOUNT((uint)unaff_x21));
        return unaff_x21 + extraout_x8_01 +
               (ulong)((uint)(extraout_w9 + (int)LZCOUNT(param_2 << 3 | 2) * -9) >> 6);
      }
    }
    else {
      uVar5 = (uint)(byte)param_1[2];
      if (uVar5 - 1 < 0x12) {
        uVar3 = (ulong)((int)LZCOUNT(param_2 << 3) * -9 + 0x160U >> 6) << (uVar5 == 10);
        switch(uVar5) {
        default:
          uVar3 = uVar3 + 8;
          break;
        case 2:
        case 7:
        case 0xf:
          uVar3 = uVar3 + 4;
          break;
        case 3:
          func_0x00010b4c51d4();
          lVar1 = (extraout_x8_21 & 0xffffffff) << 3;
          lVar7 = extraout_x9_07;
          while (lVar1 != lVar7) {
            func_0x00010b4c5338();
            lVar1 = extraout_x8_22;
            lVar7 = extraout_x9_08 + 8;
          }
          return unaff_x20;
        case 4:
          func_0x00010b4c51d4();
          lVar1 = (extraout_x8_23 & 0xffffffff) << 3;
          lVar7 = extraout_x9_09;
          while (lVar1 != lVar7) {
            func_0x00010b4c5338();
            lVar1 = extraout_x8_24;
            lVar7 = extraout_x9_10 + 8;
          }
          return unaff_x20;
        case 5:
          func_0x00010b4c51d4();
          lVar1 = (extraout_x8_19 & 0xffffffff) << 2;
          lVar7 = extraout_x9_05;
          while (lVar1 != lVar7) {
            func_0x00010b4c5338();
            lVar1 = extraout_x8_20;
            lVar7 = extraout_x9_06 + 4;
          }
          return unaff_x20;
        case 8:
          return (ulong)**(uint **)param_1 + (ulong)**(uint **)param_1 * (uVar3 & 0xffffffff);
        case 9:
          func_0x00010b4c5298();
          uVar6 = extraout_x10_09;
          while ((long)unaff_x21 < (long)(int)uVar6) {
            func_0x00010b4c51a4();
            func_0x000107c282a0();
            unaff_x20 = (long)param_1 + unaff_x20;
            func_0x00010b4c52fc();
            uVar6 = extraout_x10_10;
          }
          return unaff_x20;
        case 10:
          func_0x00010b4c5298();
          uVar6 = extraout_x10_03;
          while ((long)unaff_x21 < (long)(int)uVar6) {
            func_0x00010b4c51a4();
            func_0x00010b4c5484();
            unaff_x20 = (long)param_1 + unaff_x20;
            func_0x00010b4c52fc();
            uVar6 = extraout_x10_04;
          }
          return unaff_x20;
        case 0xb:
          func_0x00010b4c5298();
          uVar6 = extraout_x10_05;
          while ((long)unaff_x21 < (long)(int)uVar6) {
            func_0x00010b4c51a4();
            func_0x00010b4c5484();
            unaff_x20 = (long)param_1 + ((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6) + unaff_x20;
            func_0x00010b4c52fc();
            uVar6 = extraout_x10_06;
          }
          return unaff_x20;
        case 0xc:
          func_0x00010b4c5298();
          uVar6 = extraout_x10_07;
          while ((long)unaff_x21 < (long)(int)uVar6) {
            func_0x00010b4c51a4();
            func_0x000107c28098();
            unaff_x20 = (long)param_1 + unaff_x20;
            func_0x00010b4c52fc();
            uVar6 = extraout_x10_08;
          }
          return unaff_x20;
        case 0xd:
          func_0x00010b4c5574();
          lVar1 = extraout_x8_14;
          lVar7 = extraout_x9_01;
          while (lVar1 != lVar7) {
            func_0x00010b4c5310();
            unaff_x20 = unaff_x20 + extraout_x12_02;
            lVar1 = extraout_x8_15;
            lVar7 = extraout_x9_02 + 4;
          }
          return unaff_x20;
        case 0xe:
          func_0x00010b4c51d4();
          lVar1 = (extraout_x8_17 & 0xffffffff) << 2;
          lVar7 = extraout_x9_03;
          while (lVar1 != lVar7) {
            func_0x00010b4c5338();
            lVar1 = extraout_x8_18;
            lVar7 = extraout_x9_04 + 4;
          }
          return unaff_x20;
        case 0x11:
          func_0x00010b4c5574();
          lVar1 = extraout_x8_12;
          lVar7 = extraout_x9;
          while (lVar1 != lVar7) {
            func_0x00010b4c5310();
            unaff_x20 = unaff_x20 + extraout_x12_01;
            lVar1 = extraout_x8_13;
            lVar7 = extraout_x9_00 + 4;
          }
          return unaff_x20;
        case 0x12:
          puVar4 = *(uint **)param_1;
          uVar5 = *puVar4;
          uVar3 = (uVar3 & 0xffffffff) * (ulong)uVar5;
          for (lVar7 = 0; lVar7 < (int)uVar5; lVar7 = lVar7 + 1) {
            lVar1 = *(long *)(*(long *)(puVar4 + 2) + lVar7 * 8);
            FUN_10b4c3018(lVar1);
            uVar3 = lVar1 + uVar3;
            puVar4 = *(uint **)param_1;
            uVar5 = *puVar4;
          }
          return uVar3;
        }
        return (uVar3 & 0xffffffff) * (ulong)**(uint **)param_1;
      }
    }
    return 0;
  }
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
    return 0;
  }
  uVar3 = (ulong)((int)LZCOUNT(param_2 << 3) * -9 + 0x160U >> 6) << ((char)param_1[2] == '\n');
  switch((char)param_1[2]) {
  case '\x01':
  case '\x06':
  case '\x10':
    uVar3 = uVar3 + 8;
    break;
  case '\x02':
  case '\a':
  case '\x0f':
    uVar3 = uVar3 + 4;
    break;
  case '\x03':
  case '\x04':
    lVar7 = *(long *)param_1;
    goto code_r0x00010b4c2c04;
  case '\x05':
  case '\x0e':
    lVar7 = (long)(int)*param_1;
code_r0x00010b4c2c04:
    uVar3 = ((int)LZCOUNT(lVar7) * -9 + 0x280U >> 6) + uVar3;
    break;
  case '\b':
    uVar3 = uVar3 + 1;
    break;
  case '\t':
    lVar7 = *(long *)param_1;
    func_0x000107c282a0(lVar7);
    goto code_r0x00010b4c2ef0;
  case '\n':
    lVar7 = *(long *)param_1;
    func_0x00010b4c5484(lVar7);
    goto code_r0x00010b4c2ef0;
  case '\v':
    plVar2 = *(long **)param_1;
    lVar7 = 0x28;
    if ((*(byte *)((long)param_1 + 10) & 0x10) != 0) {
      lVar7 = 0x68;
    }
    (**(code **)(*plVar2 + lVar7))();
    func_0x00010b4c5470(LZCOUNT((int)plVar2));
    uVar3 = (long)plVar2 + extraout_x8_25 + uVar3;
    break;
  case '\f':
    lVar7 = *(long *)param_1;
    func_0x000107c28098(lVar7);
    goto code_r0x00010b4c2ef0;
  case '\r':
    uVar5 = *param_1;
    goto code_r0x00010b4c2e88;
  case '\x11':
    uVar5 = *param_1 << 1 ^ (int)*param_1 >> 0x1f;
code_r0x00010b4c2e88:
    func_0x00010b4c5470(LZCOUNT(uVar5));
    uVar3 = uVar3 + extraout_x8_16;
    break;
  case '\x12':
    lVar7 = *(long *)param_1;
    FUN_10b4c3018(lVar7);
code_r0x00010b4c2ef0:
    uVar3 = lVar7 + uVar3;
  }
  return uVar3;
}



/* Entry: 10b4c3018; end: 10b4c3037;  */

uint FUN_10b4c3018(long param_1)

{
  return (int)LZCOUNT(param_1 << 1 ^ param_1 >> 0x3f) * -9 + 0x280U >> 6;
}



/* Entry: 10b4c3038; end: 10b4c30a7;  */

void FUN_10b4c3038(void)

{
  func_0x00010b4c50cc();
  func_0x00010b4c50dc();
  return;
}



/* Entry: 10b4c30a8; end: 10b4c30e3;  */

void FUN_10b4c30a8(void)

{
  FUN_10b4c3cc8();
  return;
}



/* Entry: 10b4c30e4; end: 10b4c313f;  */

undefined8 FUN_10b4c30e4(undefined8 param_1)

{
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10b4c4b2c(&uStack_40);
  FUN_10b4c4860(auStack_58,param_1,uStack_40,uStack_38,uStack_30,uStack_28);
  return auStack_58[0];
}



/* Entry: 10b4c3140; end: 10b4c31b3;  */

undefined8 FUN_10b4c3140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_138 [264];
  
  func_0x00010ae6abb8(auStack_138,param_3);
  func_0x00010ae6aa88(auStack_138,param_1);
  func_0x00010ae6a8c8(auStack_138);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(auStack_138,param_2);
  func_0x00010ae6a8f8(auStack_138);
  func_0x00010b4c57c8();
  return param_2;
}



/* Entry: 10b4c31b4; end: 10b4c31f3;  */

void FUN_10b4c31b4(void)

{
  func_0x00010b4c50cc();
  func_0x00010b4c50dc();
  return;
}



/* Entry: 10b4c31f4; end: 10b4c3213;  */

void FUN_10b4c31f4(undefined8 param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  func_0x00010ae6bbdc(param_1,&uStack_14);
  return;
}



/* Entry: 10b4c3214; end: 10b4c326b;  */

void FUN_10b4c3214(void)

{
  func_0x00010b4c50cc();
  func_0x00010b4c50dc();
  return;
}



/* Entry: 10b4c326c; end: 10b4c328b;  */

ulong FUN_10b4c326c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined **ppuVar2;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  ppuVar2 = &PTR_LOOP_110c8acd8;
  func_0x000100061c44(&PTR_LOOP_110c8acd8,&uStack_28,&uStack_28);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)ppuVar2 + (ulong)*(uint *)(param_2 + 1);
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)ppuVar2 + (ulong)*(uint *)(param_2 + 1)) * -0x622015f714c7d297;
}



/* Entry: 10b4c328c; end: 10b4c32af;  */

undefined8 FUN_10b4c328c(undefined8 param_1)

{
  FUN_10b4c32b0();
  return param_1;
}



/* Entry: 10b4c32b0; end: 10b4c32e7;  */

void FUN_10b4c32b0(undefined8 *param_1)

{
  if (param_1[2] != 0) {
    FUN_10b4c32e8(*param_1);
  }
  *param_1 = &PTR_LOOP_110cf0bd0;
  param_1[1] = &PTR_LOOP_110cf0bd0;
  param_1[2] = 0;
  return;
}



/* Entry: 10b4c32e8; end: 10b4c33db;  */

void FUN_10b4c32e8(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (*(char *)((long)param_1 + 0xb) == '\0') {
    if (*(char *)((long)param_1 + 10) != '\0') {
      puVar4 = (undefined8 *)*param_1;
      do {
        func_0x00010b4c343c();
      } while (*(char *)((long)param_1 + 0xb) == '\0');
      uVar5 = (ulong)*(byte *)(param_1 + 1);
      puVar3 = (undefined8 *)*param_1;
      do {
        func_0x00010b4c5604();
        param_1 = (undefined8 *)param_1[uVar5];
        cVar2 = *(char *)((long)param_1 + 0xb);
        if (cVar2 == '\0') {
          while (cVar2 == '\0') {
            func_0x00010b4c343c();
            cVar2 = *(char *)((long)param_1 + 0xb);
          }
          uVar5 = (ulong)*(byte *)(param_1 + 1);
          puVar3 = (undefined8 *)*param_1;
        }
        FUN_10b4c33dc(cVar2);
        __ZdlPv();
        if (*(byte *)((long)puVar3 + 10) <= uVar5) {
          do {
            param_1 = puVar3;
            bVar1 = *(byte *)(param_1 + 1);
            uVar5 = (ulong)bVar1;
            puVar3 = (undefined8 *)*param_1;
            func_0x00010b4c3410();
            __ZdlPv();
            if (puVar3 == puVar4) {
              return;
            }
          } while (*(byte *)((long)puVar3 + 10) <= bVar1);
        }
        uVar5 = uVar5 + 1;
      } while( true );
    }
    func_0x00010b4c3410();
  }
  else {
    FUN_10b4c33dc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}


