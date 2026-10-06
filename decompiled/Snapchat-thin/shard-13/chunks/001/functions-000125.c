/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a19d4b8; end: 10a19d57b;  */

void FUN_10a19d4b8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_10a30f97c();
  FUN_10a30fb38(param_1);
  plVar1 = (long *)*param_3;
  (**(code **)(*plVar1 + 0x38))();
  plVar2 = (long *)*param_4;
  (**(code **)(*plVar2 + 0x38))();
  plVar3 = (long *)*param_1;
  (**(code **)(*plVar3 + 0x38))();
  FUN_10a19dd8c(param_2,plVar1,plVar2,plVar3);
  return;
}



/* Entry: 10a19d57c; end: 10a19d99f;  */

void FUN_10a19d57c(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  long *plVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined8 uStack_890;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined4 uStack_878;
  undefined4 uStack_874;
  undefined8 uStack_4b0;
  undefined3 uStack_4a8;
  undefined4 uStack_4a5;
  uint uStack_4a1;
  undefined4 uStack_49d;
  undefined1 uStack_499;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined1 auStack_48c [4];
  uint uStack_488;
  undefined8 auStack_ac [10];
  long lStack_58;
  long *plVar6;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a30f97c();
  FUN_10a30fb38(param_1);
  uStack_8b0 = 0;
  uStack_8a8 = 0;
  uStack_898 = 0;
  uStack_8a0 = 0;
  if (*(char *)(param_2 + 400) == '\x01') {
    ppuVar5 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    uVar11 = *(undefined8 *)(param_2 + 0x194);
    lVar12 = *(long *)(*ppuVar5 + 0x10);
    uStack_4b0._0_3_ = 0x635282;
    uStack_4b0._3_5_ = 0x10f;
    uStack_4a8 = 0x2b;
    uStack_4a5 = 0;
    uStack_4a1 = uStack_4a1 & 0xffffff00;
    if (lVar12 == 0) goto LAB_10a19d964;
    func_0x00010ab9ca70(&uStack_4b0,*param_1,0);
    uVar8 = 0x8ca9;
    if (uStack_488 < 2) {
      uVar8 = 0x8d40;
    }
    FUN_10ab9cbe8(&uStack_890,lVar12 + 0x50,uVar8,&uStack_4b0,0,uVar11,0);
    FUN_10ab9b224(&uStack_8b0,&uStack_890);
    FUN_10ab9ce18(&uStack_890);
  }
  else {
    if (*(int *)(param_2 + 0x1a8) == 0) {
      uVar11 = 1;
      FUN_10a303694(1);
      FUN_10a301f68(&uStack_4b0,uVar11);
      uVar13 = *(undefined8 *)(param_2 + 0x1b0);
      uStack_890 = *(undefined8 *)(param_2 + 0x1a8);
      uStack_888 = (undefined4)uVar13;
      uVar11 = *(undefined8 *)(param_2 + 0x1b4);
      uStack_87c = (undefined4)*(undefined8 *)(param_2 + 0x1bc);
      uStack_878 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x1bc) >> 0x20);
      uStack_884 = (undefined4)uVar11;
      uStack_880 = (undefined4)((ulong)uVar11 >> 0x20);
      *(ulong *)(param_2 + 0x1b0) = CONCAT17(uStack_499,CONCAT43(uStack_49d,uStack_4a1._1_3_));
      *(undefined8 *)(param_2 + 0x1a8) =
           CONCAT17((undefined1)uStack_4a1,CONCAT43(uStack_4a5,uStack_4a8));
      *(ulong *)(param_2 + 0x1bc) = CONCAT44(uStack_490,uStack_494);
      *(ulong *)(param_2 + 0x1b4) = CONCAT44(uStack_498,CONCAT13(uStack_499,uStack_49d._1_3_));
      uStack_4a1._1_3_ = (undefined3)uVar13;
      uStack_4a8 = (undefined3)uStack_890;
      uStack_4a5 = (undefined4)((ulong)uStack_890 >> 0x18);
      uStack_4a1._0_1_ = (undefined1)((ulong)uStack_890 >> 0x38);
      uStack_49d._0_1_ = (undefined1)((ulong)uVar13 >> 0x18);
      uStack_49d._1_3_ = (undefined3)uVar11;
      uStack_499 = (undefined1)((ulong)uVar11 >> 0x18);
      uStack_498 = uStack_880;
      uStack_494 = uStack_87c;
      uStack_490 = uStack_878;
      _memcpy(&uStack_890,param_2 + 0x1c4,0x3e0);
      _memcpy(param_2 + 0x1c4,auStack_48c,0x3e0);
      _memcpy(auStack_48c,&uStack_890,0x3e0);
      lVar12 = 0x404;
      puVar9 = (undefined8 *)(param_2 + 0x5a4);
      do {
        uVar13 = puVar9[1];
        uVar11 = *puVar9;
        uVar14 = *(undefined8 *)((long)&uStack_4b0 + lVar12);
        puVar9[1] = *(undefined8 *)((long)&uStack_4a8 + lVar12);
        *puVar9 = uVar14;
        *(undefined8 *)((long)&uStack_4a8 + lVar12) = uVar13;
        *(undefined8 *)((long)&uStack_4b0 + lVar12) = uVar11;
        lVar12 = lVar12 + 0x10;
        puVar9 = puVar9 + 2;
      } while (lVar12 != 0x444);
      *(ulong *)(param_2 + 0x1a0) = CONCAT53(uStack_4b0._3_5_,(undefined3)uStack_4b0);
      uStack_4b0._0_3_ = 0;
      uStack_4b0._3_5_ = 0;
      FUN_10a30206c(&uStack_4b0);
    }
    *(undefined4 *)(param_2 + 0x1ac) = 0x8d40;
    func_0x00010a3022a4(param_2 + 0x1a0);
    plVar7 = (long *)*param_1;
    uStack_4a5 = 0;
    uStack_4a1 = 0;
    uStack_4b0._3_5_ = 0;
    uStack_4a8 = 0;
    uStack_49d = 0;
    if (plVar7 == (long *)0x0) {
      uVar4 = 0;
      uVar3 = 0;
      uVar10 = 0;
      lVar12 = 0;
      uVar8 = 1;
    }
    else {
      plVar6 = plVar7;
      (**(code **)(*plVar7 + 0x50))();
      uVar3 = SUB84(plVar6,0);
      plVar6 = plVar7;
      (**(code **)(*plVar7 + 0x48))();
      uVar4 = SUB84(plVar6,0);
      lVar12 = plVar7[3];
      uVar8 = (undefined4)plVar7[4];
      uVar10 = -(*(byte *)((long)plVar7 + 0x54) >> 2 & 1) & 3;
    }
    uVar1 = *(uint *)(param_2 + 0x1c4);
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    *(uint *)(param_2 + 0x1c4) = uVar1;
    *(undefined4 *)(param_2 + 0x5a4) = 0x8ce0;
    *(undefined4 *)(param_2 + 0x1f8) = 0x8ce0;
    *(undefined4 *)(param_2 + 0x1c8) = uVar3;
    *(undefined4 *)(param_2 + 0x1cc) = uVar4;
    *(long *)(param_2 + 0x1d0) = lVar12;
    *(bool *)(param_2 + 0x1d8) = plVar7 != (long *)0x0;
    *(ulong *)(param_2 + 0x1e8) = CONCAT44(uStack_49d,uStack_4a1);
    *(ulong *)(param_2 + 0x1e1) = CONCAT17((undefined1)uStack_4a1,CONCAT43(uStack_4a5,uStack_4a8));
    *(ulong *)(param_2 + 0x1d9) = CONCAT53(uStack_4b0._3_5_,(undefined3)uStack_4b0);
    *(undefined4 *)(param_2 + 0x1f0) = uVar8;
    *(uint *)(param_2 + 500) = uVar10;
    FUN_10a3024c0(param_2 + 0x1a0,param_2 + 0x1c8);
    _glViewport(0,0,*(undefined4 *)(param_2 + 0x194),*(undefined4 *)(param_2 + 0x198));
  }
  FUN_10a3014a0(param_2);
  plVar7 = (long *)*param_3;
  (**(code **)(*plVar7 + 0x48))();
  FUN_10a31a3c8(*(undefined8 *)(param_2 + 0xf0),param_2 + 0x118,*(undefined4 *)(param_2 + 0x108),
                plVar7);
  plVar7 = (long *)*param_4;
  (**(code **)(*plVar7 + 0x48))();
  FUN_10a31a3c8(*(undefined8 *)(param_2 + 0x120),param_2 + 0x148,*(undefined4 *)(param_2 + 0x138),
                plVar7);
  uStack_4a8 = 0;
  uStack_4a5 = 0;
  uStack_4b0._0_3_ = 0;
  uStack_4b0._3_5_ = 0x3f80000000;
  uStack_498 = 0x3f800000;
  uStack_494 = 0x3f800000;
  uStack_4a1 = 0x80000000;
  uStack_49d = 0x3f;
  uStack_499 = 0;
  uStack_888 = 0;
  uStack_884 = 0x3f800000;
  uStack_890 = 0;
  uStack_878 = 0x3f800000;
  uStack_874 = 0;
  uStack_880 = 0x3f800000;
  uStack_87c = 0x3f800000;
  FUN_10a19dc6c(param_2 + 0x5f0,&uStack_4b0,8);
  FUN_10a31a478(*(undefined8 *)(param_2 + 0x170),*(undefined4 *)(param_2 + 0x188),&uStack_4b0);
  FUN_10a31a478(*(undefined8 *)(param_2 + 0x150),*(undefined4 *)(param_2 + 0x168),&uStack_890);
  _glDrawArrays(6,0,4);
  FUN_10a301590();
  if (*(char *)(param_2 + 400) == '\x01') {
    uStack_8c8 = 0;
    uStack_8d0 = 0;
    uStack_8b8 = 0;
    uStack_8c0 = 0;
    FUN_10ab9b224(&uStack_8b0,&uStack_8d0);
    FUN_10ab9ce18(&uStack_8d0);
  }
  else {
    func_0x00010a3022f0(param_2 + 0x1a0);
    func_0x00010a302418(param_2 + 0x1a0);
    func_0x00010a3020b0(param_2 + 0x1a0);
  }
  FUN_10ab9ce18(&uStack_8b0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_10a19d964:
  FUN_10a0edfc4(&uStack_4b0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a19d970);
  (*pcVar2)();
}



/* Entry: 10a19d9a0; end: 10a19dc67;  */

undefined8 * FUN_10a19d9a0(undefined8 *param_1,int param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 auStack_a18 [52];
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined4 uStack_868;
  int iStack_864;
  undefined4 uStack_860;
  undefined8 uStack_85c;
  undefined1 auStack_854 [992];
  undefined8 auStack_474 [9];
  undefined8 auStack_428 [2];
  char cStack_411;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined8 uStack_3fc;
  
  param_1[0xf] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((long)param_1 + 0x66) = 0;
  param_1[0xe] = param_1 + 0xf;
  puVar3 = param_1 + 0x14;
  *puVar3 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_1 + 0x12;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *param_1 = &PTR_FUN_110bab5c0;
  FUN_10a1ac944(param_1 + 0x1e,param_1,&UNK_10f641ef2);
  FUN_10a1ac944(param_1 + 0x24,param_1,&UNK_10f641efe);
  FUN_10a1acf80(param_1 + 0x2a,param_1,&UNK_10f641f0b);
  FUN_10a1acf80(param_1 + 0x2e,param_1,&UNK_10f641f1a);
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = 0;
  func_0x00010a1ad3f0(param_1 + 0x34,0);
  *(undefined4 *)(param_1 + 0xbe) = 0;
  func_0x000107c2b054(auStack_428,&UNK_10f6414e6);
  if (param_2 == 0) {
    func_0x000107c2b054(&uStack_878,&UNK_10f641505);
    FUN_10a0b4ec0(puVar3,&uStack_878);
  }
  else {
    func_0x000107c2b054(&uStack_878,&UNK_10f641519);
    FUN_10a0b4ec0(puVar3,&uStack_878);
  }
  *(undefined1 *)(param_1 + 0x1d) = 1;
  if (iStack_864 < 0) {
    __ZdlPv(uStack_878);
  }
  FUN_10a30103c(param_1,auStack_428,1);
  func_0x00010a1ad3f0(&uStack_878,0);
  uStack_410 = param_1[0x35];
  uStack_408 = (undefined4)param_1[0x36];
  uStack_3fc = *(undefined8 *)((long)param_1 + 0x1bc);
  uStack_404 = (undefined4)*(undefined8 *)((long)param_1 + 0x1b4);
  uStack_400 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x1b4) >> 0x20);
  param_1[0x36] = CONCAT44(iStack_864,uStack_868);
  param_1[0x35] = uStack_870;
  *(undefined8 *)((long)param_1 + 0x1bc) = uStack_85c;
  *(ulong *)((long)param_1 + 0x1b4) = CONCAT44(uStack_860,iStack_864);
  uStack_868 = uStack_408;
  uStack_870 = uStack_410;
  iStack_864 = uStack_404;
  uStack_860 = uStack_400;
  uStack_85c = uStack_3fc;
  _memcpy(&uStack_410,(long)param_1 + 0x1c4,0x3e0);
  _memcpy((long)param_1 + 0x1c4,auStack_854,0x3e0);
  _memcpy(auStack_854,&uStack_410,0x3e0);
  lVar2 = 0x5a4;
  do {
    uVar5 = ((undefined8 *)((long)param_1 + lVar2))[1];
    uVar4 = *(undefined8 *)((long)param_1 + lVar2);
    uVar6 = *(undefined8 *)((long)auStack_a18 + lVar2);
    ((undefined8 *)((long)param_1 + lVar2))[1] = *(undefined8 *)((long)auStack_a18 + lVar2 + 8);
    *(undefined8 *)((long)param_1 + lVar2) = uVar6;
    *(undefined8 *)((long)auStack_a18 + lVar2 + 8) = uVar5;
    *(undefined8 *)((long)auStack_a18 + lVar2) = uVar4;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x5e4);
  param_1[0x34] = uStack_878;
  uStack_878 = 0;
  FUN_10a30206c(&uStack_878);
  *(undefined4 *)(param_1 + 0xbe) = 4;
  pbVar1 = (byte *)0x113834ef0;
  FUN_10a1c5e98();
  *(byte *)(param_1 + 0x32) = *pbVar1 >> 5 & 1;
  if (cStack_411 < '\0') {
    __ZdlPv(auStack_428[0]);
  }
  return param_1;
}



/* Entry: 10a19dc68; end: 10a19dc6b;  */

undefined8 * FUN_10a19dc68(undefined8 *param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_110bc3a40;
  ppuVar2 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puStack_30 = (undefined8 *)&UNK_10f635282;
  uStack_28 = 0x2b;
  if (*(long *)(*ppuVar2 + 0x10) != 0) {
    if (*(undefined8 **)(*(long *)(*ppuVar2 + 0x10) + 0xb8) == param_1) {
      func_0x00010a31a2dc();
    }
    FUN_10a3012a8(param_1);
    if (param_1[0x1a] != 0) {
      param_1[0x1b] = param_1[0x1a];
      __ZdlPv();
    }
    func_0x000107c27bf0(param_1 + 0x17,param_1[0x18]);
    puStack_30 = param_1 + 0x14;
    FUN_10a0426d8(&puStack_30);
    func_0x00010a321d0c(param_1 + 0x11,param_1[0x12]);
    func_0x00010a321cc4(param_1 + 0xe,param_1[0xf]);
    if (*(char *)((long)param_1 + 0x67) < '\0') {
      __ZdlPv(param_1[10]);
    }
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      __ZdlPv(param_1[7]);
    }
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(param_1[1]);
    }
    return param_1;
  }
  FUN_10a0edfc4(&puStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a301270);
  (*pcVar1)();
}



/* Entry: 10a19dc6c; end: 10a19dd8b;  */

void FUN_10a19dc6c(undefined8 param_1,ulong *param_2,ulong param_3)

{
  code *pcVar1;
  ulong *puVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar5 = param_3 >> 1;
  if (1 < param_3) {
    uVar6 = 0xffffffffffffffff;
    puVar2 = param_2;
    uVar7 = uVar5;
    do {
      if ((param_3 <= uVar6 + 1) || (uVar6 = uVar6 + 2, param_3 <= uVar6)) goto LAB_10a19dd88;
      uVar7 = uVar7 - 1;
      FUN_10a108ed4(param_1,puVar2,(long)puVar2 + 4);
      puVar2 = puVar2 + 1;
    } while (uVar7 != 0);
  }
  if ((param_3 != 0) && (param_3 != 1)) {
    uVar6 = *param_2;
    if (3 < param_3) {
      lVar3 = uVar5 - 1;
      uVar7 = 1;
      puVar2 = param_2;
      do {
        puVar2 = puVar2 + 1;
        if ((param_3 <= uVar7 + 1) || (uVar7 = uVar7 + 2, param_3 <= uVar7)) goto LAB_10a19dd88;
        uVar8 = *puVar2;
        uVar6 = uVar6 ^ (uVar6 ^ uVar8) &
                        ~CONCAT44(-(uint)((float)(uVar6 >> 0x20) < (float)(uVar8 >> 0x20)),
                                  -(uint)((float)uVar6 < (float)uVar8));
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    uVar7 = 1;
    pfVar4 = (float *)((long)param_2 + 4);
    while ((uVar7 - 1 < param_3 && (pfVar4[-1] = pfVar4[-1] - (float)uVar6, uVar7 < param_3))) {
      *pfVar4 = *pfVar4 - (float)(uVar6 >> 0x20);
      uVar7 = uVar7 + 2;
      uVar5 = uVar5 - 1;
      pfVar4 = pfVar4 + 2;
      if (uVar5 == 0) {
        return;
      }
    }
  }
LAB_10a19dd88:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a19dd8c);
  (*pcVar1)();
}



/* Entry: 10a19dd8c; end: 10a19e72f;  */

void FUN_10a19dd8c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  undefined *puVar20;
  ulong unaff_x27;
  ulong uVar21;
  undefined1 auStack_908 [8];
  long lStack_900;
  long lStack_8f8;
  long alStack_7d8 [3];
  long alStack_7c0 [10];
  undefined8 auStack_770 [2];
  char cStack_759;
  uint auStack_758 [103];
  undefined4 uStack_5bc;
  long lStack_5b8;
  long lStack_5b0;
  undefined8 uStack_5a8;
  long *plStack_5a0;
  long *plStack_598;
  long lStack_590;
  undefined8 uStack_588;
  undefined4 *puStack_580;
  long lStack_578;
  long lStack_570;
  undefined8 uStack_568;
  long *plStack_560;
  undefined1 auStack_558 [8];
  long lStack_550;
  long lStack_530;
  undefined1 uStack_3c8;
  undefined8 uStack_360;
  undefined1 auStack_358 [128];
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [408];
  undefined8 uStack_138;
  undefined8 auStack_130 [2];
  char cStack_119;
  undefined8 uStack_118;
  char cStack_101;
  long lStack_f0;
  long lStack_e8;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined8 uStack_c0;
  undefined4 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar18 = *(long **)(*param_4 + 0x18);
  FUN_10a0e3e64(auStack_908,plVar18);
  FUN_10a0e67a0(alStack_7c0,param_3);
  plVar14 = plVar18;
  func_0x00010a08f1bc();
  auStack_758[1] = 0;
  auStack_758[2] = 0;
  auStack_758[0] = *(uint *)((long)param_1 + 0x34) & 0xc | -*(uint *)((long)param_1 + 0x34) & 3;
  auStack_758[5] = 0;
  auStack_758[6] = 0;
  auStack_758[3] = 0;
  auStack_758[4] = 0;
  auStack_758[7] = 0;
  auStack_758[8] = 1;
  auStack_758[9] = 0;
  FUN_10a19e730(&plStack_560,auStack_758,0,0);
  plVar19 = plStack_560;
  auStack_758[2] = 4;
  auStack_758[3] = 6;
  auStack_758[0] = 0x60;
  auStack_758[1] = 0;
  plVar15 = plVar18;
  func_0x00010a08f1bc();
  if ((*(byte *)(*plVar15 + 0x440) & 1) == 0) goto LAB_10a19e668;
  puVar12 = (undefined8 *)(*plVar15 + 0x170);
  func_0x00010a155750();
  FUN_10a1af024(*puVar12);
  FUN_10a1af068(&plStack_5a0,*puVar12,auStack_758);
  plVar15 = plStack_5a0;
  (**(code **)(*plStack_5a0 + 0x30))(plStack_5a0,2,0,0);
  *(undefined4 *)plVar15 = 0x3f000000;
  *(undefined8 *)((long)plVar15 + 0xc) = 0;
  *(undefined8 *)((long)plVar15 + 4) = 0;
  *(undefined8 *)((long)plVar15 + 0x1c) = 0x3f00000000000000;
  *(undefined8 *)((long)plVar15 + 0x14) = 0xbf000000;
  *(undefined8 *)((long)plVar15 + 0x24) = 0x3f8000003f000000;
  *(undefined4 *)((long)plVar15 + 0x2c) = 0;
  plVar15[6] = (long)plVar19;
  plVar15[7] = 0;
  plVar15[8] = lStack_550;
  plVar15[9] = 0;
  plVar15[10] = lStack_530;
  plVar15[0xb] = 0x3f800000;
  (**(code **)(*plStack_5a0 + 0x38))();
  FUN_10a19e9b8(alStack_7d8,&plStack_5a0);
  plVar19 = plStack_598;
  if (plStack_598 != (long *)0x0) {
    plVar15 = plStack_598 + 1;
    do {
      lVar10 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_598 + 0x10))(plStack_598);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  bVar3 = *(byte *)(*plVar14 + 0x440);
  if ((char)param_1[7] == '\x01') {
    if ((bVar3 & 1) == 0) goto LAB_10a19e668;
    lVar10 = 0x128;
  }
  else {
    if ((bVar3 & 1) == 0) goto LAB_10a19e668;
    lVar10 = 0xe0;
  }
  lVar10 = *plVar14 + lVar10;
  func_0x00010a155a18(lVar10);
  if ((lStack_8f8 == lStack_900) || (FUN_10a19ea9c(lStack_900,lVar10), lStack_8f8 == lStack_900))
  goto LAB_10a19e668;
  FUN_10a0e3f8c(&lStack_900);
  uVar11 = ((ulong)(uint)((int)plVar18 << 3) + 8 ^ (ulong)plVar18 >> 0x20) * -0x622015f714c7d297;
  uVar11 = ((ulong)plVar18 >> 0x20 ^ uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297;
  uVar21 = (uVar11 ^ uVar11 >> 0x2f) * -0x622015f714c7d297;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar9 = uVar11 - 1;
    if ((uVar11 & uVar9) == 0) {
      unaff_x27 = uVar9 & uVar21;
    }
    else {
      unaff_x27 = uVar21;
      if (uVar11 <= uVar21) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar21 / uVar11;
        }
        unaff_x27 = uVar21 - uVar13 * uVar11;
      }
    }
    puVar12 = *(undefined8 **)(*param_1 + unaff_x27 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar19 = (long *)*puVar12; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        uVar13 = plVar19[1];
        if (uVar13 == uVar21) {
          if ((long *)plVar19[2] == plVar18) goto LAB_10a19e310;
        }
        else {
          if ((uVar11 & uVar9) == 0) {
            uVar13 = uVar13 & uVar9;
          }
          else if (uVar11 <= uVar13) {
            uVar17 = 0;
            if (uVar11 != 0) {
              uVar17 = uVar13 / uVar11;
            }
            uVar13 = uVar13 - uVar17 * uVar11;
          }
          if (uVar13 != unaff_x27) break;
        }
      }
    }
  }
  plVar19 = (long *)0x20;
  __Znwm();
  *plVar19 = 0;
  plVar19[1] = uVar21;
  plVar19[2] = (long)plVar18;
  plVar19[3] = 0;
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar9 = 1;
    if (2 < uVar11) {
      uVar9 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar9 = uVar9 | uVar11 << 1;
    uVar13 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar13) {
      uVar9 = uVar13;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar11 = param_1[1];
    }
    if (uVar9 <= uVar11) {
      if (uVar9 < uVar11) {
        uVar13 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar13) {
          uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
        }
        if (uVar9 <= uVar13) {
          uVar9 = uVar13;
        }
        if (uVar9 < uVar11) {
          if (uVar9 != 0) goto LAB_10a19e124;
          lVar10 = *param_1;
          *param_1 = 0;
          if (lVar10 != 0) {
            __ZdlPv();
          }
          uVar11 = 0;
          param_1[1] = 0;
        }
        else {
          uVar11 = param_1[1];
        }
      }
LAB_10a19e270:
      if ((uVar11 & uVar11 - 1) == 0) {
        unaff_x27 = uVar11 - 1 & uVar21;
      }
      else {
        unaff_x27 = uVar21;
        if (uVar11 <= uVar21) {
          uVar9 = 0;
          if (uVar11 != 0) {
            uVar9 = uVar21 / uVar11;
          }
          unaff_x27 = uVar21 - uVar9 * uVar11;
        }
      }
      goto LAB_10a19e29c;
    }
LAB_10a19e124:
    uVar11 = uVar9;
    if (uVar11 >> 0x3d == 0) {
      lVar10 = uVar11 << 3;
      __Znwm();
      lVar8 = *param_1;
      *param_1 = lVar10;
      if (lVar8 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = uVar11;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar11 != uVar9);
      plVar14 = (long *)param_1[2];
      if (plVar14 != (long *)0x0) {
        uVar9 = plVar14[1];
        uVar13 = uVar11 - 1;
        if ((uVar11 & uVar13) == 0) {
          uVar9 = uVar9 & uVar13;
        }
        else if (uVar11 <= uVar9) {
          uVar17 = 0;
          if (uVar11 != 0) {
            uVar17 = uVar9 / uVar11;
          }
          uVar9 = uVar9 - uVar17 * uVar11;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar15 = (long *)*plVar14;
        while (plVar15 != (long *)0x0) {
          uVar17 = plVar15[1];
          if ((uVar11 & uVar13) == 0) {
            uVar17 = uVar17 & uVar13;
          }
          else if (uVar11 <= uVar17) {
            uVar6 = 0;
            if (uVar11 != 0) {
              uVar6 = uVar17 / uVar11;
            }
            uVar17 = uVar17 - uVar6 * uVar11;
          }
          plVar16 = plVar15;
          if (uVar17 != uVar9) {
            lVar10 = *param_1;
            if (*(long *)(lVar10 + uVar17 * 8) == 0) {
              *(long **)(lVar10 + uVar17 * 8) = plVar14;
              uVar9 = uVar17;
            }
            else {
              *plVar14 = *plVar15;
              *plVar15 = **(undefined8 **)(lVar10 + uVar17 * 8);
              **(long **)(lVar10 + uVar17 * 8) = (long)plVar15;
              plVar16 = plVar14;
            }
          }
          plVar14 = plVar16;
          plVar15 = (long *)*plVar16;
        }
      }
      goto LAB_10a19e270;
    }
  }
  else {
LAB_10a19e29c:
    lVar10 = *param_1;
    plVar14 = *(long **)(lVar10 + unaff_x27 * 8);
    if (plVar14 == (long *)0x0) {
      plVar14 = param_1 + 2;
      *plVar19 = *plVar14;
      *plVar14 = (long)plVar19;
      *(long **)(lVar10 + unaff_x27 * 8) = plVar14;
      if (*plVar19 != 0) {
        uVar21 = *(ulong *)(*plVar19 + 8);
        if ((uVar11 & uVar11 - 1) == 0) {
          uVar21 = uVar21 & uVar11 - 1;
        }
        else if (uVar11 <= uVar21) {
          uVar9 = 0;
          if (uVar11 != 0) {
            uVar9 = uVar21 / uVar11;
          }
          uVar21 = uVar21 - uVar9 * uVar11;
        }
        plVar14 = (long *)(*param_1 + uVar21 * 8);
        goto LAB_10a19e300;
      }
    }
    else {
      *plVar19 = *plVar14;
LAB_10a19e300:
      *plVar14 = (long)plVar19;
    }
    param_1[3] = param_1[3] + 1;
LAB_10a19e310:
    plVar19 = plVar19 + 3;
    lVar10 = *plVar19;
    if (lVar10 == 0) {
      lVar10 = param_1[5];
      func_0x000107c2b054(auStack_770,&UNK_10f64152d);
      lStack_578 = 0;
      puStack_580 = (undefined4 *)0x0;
      uStack_568 = 0;
      lStack_570 = 0;
      plStack_598 = (long *)0x0;
      plStack_5a0 = (long *)0x0;
      uStack_588 = 0;
      lStack_590 = 0;
      plStack_560 = (long *)0x3;
      uStack_5a8 = 0;
      lStack_5b8 = 0;
      lStack_5b0 = 0;
      FUN_10a0ea6f0(&lStack_5b8,&plStack_560,auStack_558,1);
      FUN_10a0ea7e0(&lStack_578,lStack_5b8,lStack_5b0,lStack_5b0 - lStack_5b8 >> 3);
      uVar2 = *(uint *)((long)plVar18 + 0x734);
      puVar20 = &UNK_10e495ef0;
      if (uVar2 != 2) {
        puVar20 = &UNK_10e495f08;
      }
      puVar1 = &UNK_10e495f20;
      if (uVar2 != 3) {
        puVar1 = puVar20;
      }
      puVar20 = &UNK_10e495ed8;
      if (1 < uVar2) {
        puVar20 = puVar1;
      }
      uStack_5bc = 1;
      if ((int)lVar10 != 0) {
        uStack_5bc = 2;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&plStack_5a0,puVar20)
      ;
      puStack_580 = &uStack_5bc;
      uStack_588 = 4;
      FUN_10a0e68b8(&plStack_560,uVar2);
      FUN_10a156e3c(auStack_758,plVar18,auStack_770);
      func_0x00010923a6e0(auStack_2d0,auStack_758);
      func_0x00010923ff08(auStack_758);
      uStack_138 = 0x200000001;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (auStack_130,auStack_770);
      uStack_360 = 0;
      puVar20 = &UNK_10e495bc0;
      lVar10 = 0x20;
      do {
        func_0x00010925ed60(&plStack_560,puVar20);
        puVar20 = puVar20 + 0x10;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
      uStack_2d8 = 0;
      puVar20 = &UNK_10e495dc8;
      lVar10 = 0x20;
      do {
        func_0x00010925ede0(auStack_358,puVar20);
        puVar20 = puVar20 + 0x10;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (auStack_d8,&plStack_5a0);
      puStack_b8 = puStack_580;
      uStack_c0 = uStack_588;
      FUN_10a0ea7e0(&lStack_b0,lStack_578,lStack_570,lStack_570 - lStack_578 >> 3);
      lVar10 = 0xc68;
      __Znwm();
      FUN_10a0e4ef8();
      if (lStack_b0 != 0) {
        lStack_a8 = lStack_b0;
        __ZdlPv();
      }
      if (cStack_c1 < '\0') {
        __ZdlPv(auStack_d8[0]);
      }
      if (lStack_f0 != 0) {
        lStack_e8 = lStack_f0;
        __ZdlPv();
      }
      if (cStack_101 < '\0') {
        __ZdlPv(uStack_118);
      }
      if (cStack_119 < '\0') {
        __ZdlPv(auStack_130[0]);
      }
      func_0x00010923ff08(auStack_2d0);
      if (lStack_5b8 != 0) {
        lStack_5b0 = lStack_5b8;
        __ZdlPv();
      }
      if (lStack_578 != 0) {
        lStack_570 = lStack_578;
        __ZdlPv();
      }
      if (lStack_590 < 0) {
        __ZdlPv(plStack_5a0);
      }
      lVar8 = *plVar19;
      *plVar19 = lVar10;
      if (lVar8 != 0) {
        func_0x00010a159354(plVar19);
      }
      if (cStack_759 < '\0') {
        __ZdlPv(auStack_770[0]);
      }
      lVar10 = *plVar19;
    }
    FUN_10a156fa0(&plStack_560,auStack_908);
    uStack_3c8 = 1;
    FUN_10a0e3928(lVar10,param_2,param_4,&UNK_10e49b2a0,&plStack_560);
    FUN_10a09d158(&plStack_560);
    plStack_560 = alStack_7c0;
    FUN_10a09d1bc(&plStack_560);
    plStack_560 = alStack_7d8;
    FUN_10a09d284(&plStack_560);
    plStack_560 = &lStack_900;
    func_0x00010a09d2f4(&plStack_560);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000109ffded8();
LAB_10a19e668:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a19e66c);
  (*pcVar7)();
}



/* Entry: 10a19e730; end: 10a19e9b7;  */

void FUN_10a19e730(float *param_1,long param_2,uint param_3,uint param_4)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  float fVar44;
  float fVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  float fVar51;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fStack_8c;
  float fStack_7c;
  undefined8 uVar45;
  undefined8 uVar52;
  
  *param_1 = 1.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[5] = 1.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 1.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xf] = 1.0;
  if (param_4 == 0) {
    fVar7 = 1.0;
    fVar20 = 0.0;
  }
  else {
    *param_1 = 0.5;
    param_1[5] = 0.5;
    param_1[7] = 0.0;
    param_1[0xc] = 0.5;
    param_1[0xd] = 0.5;
    param_1[0xf] = 1.0;
    fVar20 = 0.5;
    fVar7 = 0.5;
  }
  uVar8 = 0;
  uVar10 = 0;
  uVar12 = 0;
  uVar14 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  fVar56 = 0.0;
  fVar57 = 0.0;
  uVar40 = 0;
  uVar41 = 0;
  uVar42 = 0;
  uVar43 = 0;
  uVar45 = 0;
  uVar9 = 0;
  uVar11 = 0;
  uVar38 = (undefined1)((uint)fVar7 >> 0x10);
  uVar39 = (undefined1)((uint)fVar7 >> 0x18);
  uVar47 = 0;
  uVar48 = 0;
  uVar49 = 0;
  uVar50 = 0;
  uVar52 = 0;
  uVar13 = uVar9;
  uVar15 = uVar11;
  uVar36 = uVar38;
  uVar37 = uVar39;
  if (0 < (int)*(ulong *)(param_2 + 0x20)) {
    uVar4 = *(ulong *)(param_2 + 0x20) & 0x7fffffff;
    if (uVar4 < 9) {
      fVar56 = 1.0;
      fVar57 = 0.0;
      fVar54 = 0.0;
      fVar55 = 0.0;
      do {
        fVar32 = (float)CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47)));
        fVar7 = (float)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar11,uVar9)));
        uVar24 = *(uint *)(param_2 + -4 + uVar4 * 4);
        fVar5 = (float)___sincosf_stret();
        uVar21 = -(uint)(param_3 == (uVar24 >> 2 & 1));
        fVar44 = (float)((ulong)uVar52 >> 0x20);
        fStack_8c = (float)(CONCAT17(uVar37,CONCAT16(uVar36,CONCAT15(uVar15,CONCAT14(uVar13,fVar32))
                                                    )) >> 0x20);
        fVar27 = -(float)uVar52;
        fVar28 = -fVar44;
        fVar22 = (float)((uint)-fVar32 ^ ((uint)-fVar32 ^ (uint)fVar32) & uVar21);
        fVar23 = (float)((uint)-fStack_8c ^ ((uint)-fStack_8c ^ (uint)fStack_8c) & uVar21);
        fVar27 = (float)((uint)fVar27 ^ ((uint)fVar27 ^ (uint)(float)uVar52) & uVar21);
        fVar28 = (float)((uint)fVar28 ^ ((uint)fVar28 ^ (uint)fVar44) & uVar21);
        uVar24 = -(uint)((uVar24 & 8) == 0);
        fVar32 = (float)((ulong)uVar45 >> 0x20);
        fStack_7c = (float)(CONCAT17(uVar43,CONCAT16(uVar42,CONCAT15(uVar41,CONCAT14(uVar40,fVar7)))
                                    ) >> 0x20);
        fVar30 = -(float)uVar45;
        fVar31 = -fVar32;
        fVar25 = (float)((uint)-fVar7 ^ ((uint)-fVar7 ^ (uint)fVar7) & uVar24);
        fVar26 = (float)((uint)-fStack_7c ^ ((uint)-fStack_7c ^ (uint)fStack_7c) & uVar24);
        fVar30 = (float)((uint)fVar30 ^ ((uint)fVar30 ^ (uint)(float)uVar45) & uVar24);
        fVar31 = (float)((uint)fVar31 ^ ((uint)fVar31 ^ (uint)fVar32) & uVar24);
        fVar29 = 1.0 - (float)CONCAT13(uVar14,CONCAT12(uVar12,CONCAT11(uVar10,uVar8)));
        fVar32 = fVar29 * 0.0;
        fVar33 = (float)CONCAT13(uVar14,CONCAT12(uVar12,CONCAT11(uVar10,uVar8))) + fVar32 * 0.0;
        fVar34 = fVar5 + fVar32 * 0.0;
        fVar35 = (float)((uint)-fVar5 ^ (uint)ABS(-fVar5));
        fVar46 = fVar35 + fVar32;
        fVar7 = fVar32 * 0.0 - fVar5;
        fVar32 = (float)((uint)fVar5 ^ (uint)ABS(fVar5)) + fVar32;
        fVar6 = (float)((uint)fVar5 ^ (uint)ABS(fVar5)) + fVar29 * 0.0;
        fVar35 = fVar35 + fVar29 * 0.0;
        fVar29 = (float)CONCAT13(uVar14,CONCAT12(uVar12,CONCAT11(uVar10,uVar8))) + fVar29;
        fVar1 = fVar54 * fVar32 + fVar22 * fVar33 + fVar25 * fVar7;
        uVar47 = SUB41(fVar1,0);
        uVar48 = (undefined1)((uint)fVar1 >> 8);
        uVar49 = (undefined1)((uint)fVar1 >> 0x10);
        uVar50 = (undefined1)((uint)fVar1 >> 0x18);
        fVar5 = fVar55 * fVar32 + fVar23 * fVar33 + fVar26 * fVar7;
        uVar13 = SUB41(fVar5,0);
        uVar15 = (undefined1)((uint)fVar5 >> 8);
        uVar36 = (undefined1)((uint)fVar5 >> 0x10);
        uVar37 = (undefined1)((uint)fVar5 >> 0x18);
        fVar51 = fVar56 * fVar32 + fVar27 * fVar33 + fVar30 * fVar7;
        fVar53 = fVar57 * fVar32 + fVar28 * fVar33 + fVar31 * fVar7;
        uVar52 = CONCAT44(fVar53,fVar51);
        fVar7 = fVar54 * fVar46 + fVar22 * fVar34 + fVar25 * fVar33;
        uVar9 = SUB41(fVar7,0);
        uVar11 = (undefined1)((uint)fVar7 >> 8);
        uVar38 = (undefined1)((uint)fVar7 >> 0x10);
        uVar39 = (undefined1)((uint)fVar7 >> 0x18);
        fVar32 = fVar55 * fVar46 + fVar23 * fVar34 + fVar26 * fVar33;
        uVar40 = SUB41(fVar32,0);
        uVar41 = (undefined1)((uint)fVar32 >> 8);
        uVar42 = (undefined1)((uint)fVar32 >> 0x10);
        uVar43 = (undefined1)((uint)fVar32 >> 0x18);
        fVar44 = fVar56 * fVar46 + fVar27 * fVar34 + fVar30 * fVar33;
        fVar46 = fVar57 * fVar46 + fVar28 * fVar34 + fVar31 * fVar33;
        uVar45 = CONCAT44(fVar46,fVar44);
        fVar54 = fVar54 * fVar29;
        uVar8 = SUB41(fVar54,0);
        uVar10 = (undefined1)((uint)fVar54 >> 8);
        uVar12 = (undefined1)((uint)fVar54 >> 0x10);
        uVar14 = (undefined1)((uint)fVar54 >> 0x18);
        fVar54 = fVar54 + fVar22 * fVar35 + fVar25 * fVar6;
        fVar55 = fVar55 * fVar29 + fVar23 * fVar35 + fVar26 * fVar6;
        fVar56 = fVar56 * fVar29 + fVar27 * fVar35 + fVar30 * fVar6;
        fVar57 = fVar57 * fVar29 + fVar28 * fVar35 + fVar31 * fVar6;
        if (uVar4 == 0 || uVar4 - 1 == 0) {
          *(undefined8 *)(param_1 + 6) = uVar52;
          *(ulong *)(param_1 + 4) =
               CONCAT17(uVar37,CONCAT16(uVar36,CONCAT15(uVar15,CONCAT14(uVar13,fVar1))));
          *(ulong *)(param_1 + 10) = CONCAT44(fVar57,fVar56);
          *(ulong *)(param_1 + 8) = CONCAT44(fVar55,fVar54);
          *(undefined8 *)(param_1 + 2) = uVar45;
          *(ulong *)param_1 =
               CONCAT17(uVar43,CONCAT16(uVar42,CONCAT15(uVar41,CONCAT14(uVar40,fVar7))));
          fVar54 = fVar54 * 0.0;
          uVar8 = SUB41(fVar54,0);
          uVar10 = (undefined1)((uint)fVar54 >> 8);
          uVar12 = (undefined1)((uint)fVar54 >> 0x10);
          uVar14 = (undefined1)((uint)fVar54 >> 0x18);
          fVar55 = fVar55 * 0.0;
          uVar16 = SUB41(fVar55,0);
          uVar17 = (undefined1)((uint)fVar55 >> 8);
          uVar18 = (undefined1)((uint)fVar55 >> 0x10);
          uVar19 = (undefined1)((uint)fVar55 >> 0x18);
          fVar56 = fVar56 * 0.0;
          fVar57 = fVar57 * 0.0;
          goto LAB_10a19e930;
        }
        param_3 = 0;
        bVar3 = uVar4 < 10;
        uVar4 = uVar4 - 1;
      } while (bVar3);
      uVar9 = SUB41(fVar46,0);
      uVar11 = (undefined1)((uint)fVar46 >> 8);
      uVar13 = (undefined1)((uint)fVar46 >> 0x10);
      uVar15 = (undefined1)((uint)fVar46 >> 0x18);
      uVar36 = SUB41(fVar55,0);
      uVar37 = (undefined1)((uint)fVar55 >> 8);
      uVar8 = (undefined1)((uint)fVar55 >> 0x10);
      uVar10 = (undefined1)((uint)fVar55 >> 0x18);
    }
    else {
      fVar44 = param_1[2];
      fVar20 = param_1[3];
      uVar9 = SUB41(fVar20,0);
      uVar11 = (undefined1)((uint)fVar20 >> 8);
      uVar13 = (undefined1)((uint)fVar20 >> 0x10);
      uVar15 = (undefined1)((uint)fVar20 >> 0x18);
      fVar20 = param_1[4];
      uVar47 = SUB41(fVar20,0);
      uVar48 = (undefined1)((uint)fVar20 >> 8);
      uVar49 = (undefined1)((uint)fVar20 >> 0x10);
      uVar50 = (undefined1)((uint)fVar20 >> 0x18);
      fVar5 = param_1[5];
      fVar51 = param_1[6];
      fVar53 = param_1[7];
      fVar54 = param_1[8];
      fVar20 = param_1[9];
      uVar36 = SUB41(fVar20,0);
      uVar37 = (undefined1)((uint)fVar20 >> 8);
      uVar8 = (undefined1)((uint)fVar20 >> 0x10);
      uVar10 = (undefined1)((uint)fVar20 >> 0x18);
      fVar32 = 0.0;
      fVar56 = param_1[10];
      fVar57 = param_1[0xb];
    }
    param_1[2] = fVar44;
    param_1[3] = (float)CONCAT13(uVar15,CONCAT12(uVar13,CONCAT11(uVar11,uVar9)));
    param_1[4] = (float)CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47)));
    param_1[5] = fVar5;
    param_1[6] = fVar51;
    param_1[7] = fVar53;
    param_1[8] = fVar54;
    param_1[9] = (float)CONCAT13(uVar10,CONCAT12(uVar8,CONCAT11(uVar37,uVar36)));
    param_1[10] = fVar56;
    param_1[0xb] = fVar57;
    *param_1 = fVar7;
    param_1[1] = fVar32;
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a19e9b8);
    (*pcVar2)();
  }
LAB_10a19e930:
  if ((param_4 & 1) != 0) {
    fVar5 = (float)uVar52;
    fVar44 = (float)((ulong)uVar52 >> 0x20);
    fVar54 = (float)uVar45;
    fVar32 = (float)((ulong)uVar45 >> 0x20);
    param_1[0xe] = (-fVar5 - fVar54) + fVar56 + 0.0;
    param_1[0xf] = (-fVar44 - fVar32) + fVar57 + 1.0;
    param_1[0xc] = (-(float)CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47))) -
                   (float)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar11,uVar9)))) +
                   (float)CONCAT13(uVar14,CONCAT12(uVar12,CONCAT11(uVar10,uVar8))) + fVar20;
    param_1[0xd] = (-(float)CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar15,uVar13))) -
                   (float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40)))) +
                   (float)CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16))) + fVar20;
    fVar7 = (float)CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar15,uVar13))) +
            (float)CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar15,uVar13)));
    param_1[2] = fVar54 + fVar54;
    param_1[3] = fVar32 + fVar32;
    *param_1 = (float)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar11,uVar9))) +
               (float)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar11,uVar9)));
    param_1[1] = (float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40))) +
                 (float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40)));
    *(ulong *)(param_1 + 6) = CONCAT44(fVar44 + fVar44,fVar5 + fVar5);
    *(ulong *)(param_1 + 4) =
         CONCAT17((char)((uint)fVar7 >> 0x18),
                  CONCAT16((char)((uint)fVar7 >> 0x10),
                           CONCAT15((char)((uint)fVar7 >> 8),
                                    CONCAT14(SUB41(fVar7,0),
                                             (float)CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,
                                                  uVar47))) +
                                             (float)CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,
                                                  uVar47)))))));
  }
  return;
}



/* Entry: 10a19e9b8; end: 10a19ea9b;  */

long * FUN_10a19e9b8(long *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar7 = (long *)param_1[1];
  if (plVar7 < (long *)param_1[2]) {
    lVar8 = *param_2;
    plVar9 = plVar7 + 2;
    plVar7[1] = param_2[1];
    *plVar7 = lVar8;
    *param_2 = 0;
    param_2[1] = 0;
    plVar7 = param_1;
  }
  else {
    lVar8 = (long)plVar7 - *param_1;
    uVar1 = (lVar8 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a15723c();
      lVar10 = param_2[1];
      lVar8 = *param_2;
      if (param_2[1] != 0) {
        plVar7 = (long *)(param_2[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar7 = (long *)param_1[1];
      param_1[1] = lVar10;
      *param_1 = lVar8;
      if (plVar7 != (long *)0x0) {
        plVar4 = plVar7 + 1;
        do {
          lVar8 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      return param_1;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    plVar4 = param_1;
    plStack_38 = param_1;
    FUN_10a157250();
    plVar7 = (long *)((long)plVar4 + lVar8);
    lVar8 = *param_2;
    plVar9 = plVar7 + 2;
    plVar7[1] = param_2[1];
    *plVar7 = lVar8;
    *param_2 = 0;
    param_2[1] = 0;
    lVar8 = (long)plVar7 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lStack_58 = *param_1;
    *param_1 = lVar8;
    param_1[1] = (long)plVar9;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar4 + uVar6 * 2);
    plVar7 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010928cac0(plVar7);
  }
  param_1[1] = (long)plVar9;
  return plVar7;
}



/* Entry: 10a19ea9c; end: 10a19eb17;  */

undefined8 * FUN_10a19ea9c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a19eb18; end: 10a19ec07;  */

undefined8 * FUN_10a19eb18(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  puVar1 = param_1;
  FUN_10ad062ac();
  if ((int)puVar1 == 0) {
    uVar2 = 0x1500;
    __Znwm(0x1500);
    FUN_10a1a22d8();
    func_0x00010a1b0a7c(param_1 + 1,uVar2);
  }
  else {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 4) = 0x3f800000;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    *(undefined4 *)((long)puVar1 + 0x4c) = param_2;
    *(undefined4 *)(puVar1 + 10) = param_3;
    *(undefined4 *)((long)puVar1 + 0x54) = 4;
    FUN_10a1a38ac();
    FUN_10a1b0a54(param_1,puVar1);
  }
  return param_1;
}



/* Entry: 10a19ec08; end: 10a19ec3b;  */

void FUN_10a19ec08(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    lVar5 = param_1[1];
    if (*(uint *)(lVar5 + 0x14b8) == (param_2 ^ 4)) {
      return;
    }
    *(uint *)(lVar5 + 0x14b8) = param_2 ^ 4;
    *(undefined8 *)(lVar5 + 0x14c4) = 0;
    *(undefined8 *)(lVar5 + 0x14bc) = 0x3f80000000000000;
    *(undefined8 *)(lVar5 + 0x14d4) = 0x3f8000003f800000;
    *(undefined8 *)(lVar5 + 0x14cc) = 0x3f800000;
    *(undefined8 *)(lVar5 + 0x14e4) = 0x3f80000000000000;
    *(undefined8 *)(lVar5 + 0x14dc) = 0;
    *(undefined8 *)(lVar5 + 0x14f4) = 0x3f800000;
    *(undefined8 *)(lVar5 + 0x14ec) = 0x3f8000003f800000;
    FUN_10a19dc6c(lVar5 + 0x14b8,(undefined8 *)(lVar5 + 0x14bc),8);
    FUN_10a1a2df4(lVar5);
    iVar3 = *(int *)(lVar5 + 0x7a8);
    *(int *)(lVar5 + 0x7a0) = iVar3;
    iVar4 = *(int *)(lVar5 + 0x7ac);
    *(int *)(lVar5 + 0x7a4) = iVar4;
    if ((*(byte *)(lVar5 + 0x14b8) & 1) != 0) {
      *(int *)(lVar5 + 0x7a4) = iVar3;
      *(int *)(lVar5 + 0x7a0) = iVar4;
    }
    iVar1 = iVar3 + 6;
    if (-4 < iVar3) {
      iVar1 = iVar3 + 3;
    }
    if (*(int *)(lVar5 + 0x7b0) != 4) {
      iVar3 = iVar1 >> 2;
    }
    *(int *)(lVar5 + 0x7b4) = iVar3;
    *(int *)(lVar5 + 0x7b8) = iVar4;
    iVar3 = (iVar4 + 1) / 2;
    *(int *)(lVar5 + 0x7bc) = iVar3;
    *(int *)(lVar5 + 0x7c0) = iVar4 + iVar3;
    return;
  }
  if (*(uint *)(lVar5 + 0x54) == (param_2 ^ 4)) {
    return;
  }
  *(uint *)(lVar5 + 0x54) = param_2 ^ 4;
  uVar2 = *(uint *)(lVar5 + 0x30);
  iVar3 = *(int *)(lVar5 + 0x34);
  *(uint *)(lVar5 + 0x28) = uVar2;
  *(int *)(lVar5 + 0x2c) = iVar3;
  if ((*(byte *)(lVar5 + 0x54) & 1) != 0) {
    *(int *)(lVar5 + 0x28) = iVar3;
    *(uint *)(lVar5 + 0x2c) = uVar2;
  }
  if (*(int *)(lVar5 + 0x38) != 4) {
    uVar2 = uVar2 + 3 >> 2;
  }
  *(uint *)(lVar5 + 0x3c) = uVar2;
  *(int *)(lVar5 + 0x40) = iVar3;
  *(uint *)(lVar5 + 0x44) = iVar3 + 1U >> 1;
  *(uint *)(lVar5 + 0x48) = iVar3 + (iVar3 + 1U >> 1);
  return;
}



/* Entry: 10a19ec3c; end: 10a19ecbb;  */

void FUN_10a19ec3c(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(uint *)(param_1 + 0x14b8) == (param_2 ^ 4)) {
    return;
  }
  *(uint *)(param_1 + 0x14b8) = param_2 ^ 4;
  *(undefined8 *)(param_1 + 0x14c4) = 0;
  *(undefined8 *)(param_1 + 0x14bc) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x14d4) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x14cc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x14e4) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x14dc) = 0;
  *(undefined8 *)(param_1 + 0x14f4) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x14ec) = 0x3f8000003f800000;
  FUN_10a19dc6c(param_1 + 0x14b8,(undefined8 *)(param_1 + 0x14bc),8);
  FUN_10a1a2df4(param_1);
  iVar2 = *(int *)(param_1 + 0x7a8);
  *(int *)(param_1 + 0x7a0) = iVar2;
  iVar3 = *(int *)(param_1 + 0x7ac);
  *(int *)(param_1 + 0x7a4) = iVar3;
  if ((*(byte *)(param_1 + 0x14b8) & 1) != 0) {
    *(int *)(param_1 + 0x7a4) = iVar2;
    *(int *)(param_1 + 0x7a0) = iVar3;
  }
  iVar1 = iVar2 + 6;
  if (-4 < iVar2) {
    iVar1 = iVar2 + 3;
  }
  if (*(int *)(param_1 + 0x7b0) != 4) {
    iVar2 = iVar1 >> 2;
  }
  *(int *)(param_1 + 0x7b4) = iVar2;
  *(int *)(param_1 + 0x7b8) = iVar3;
  iVar2 = (iVar3 + 1) / 2;
  *(int *)(param_1 + 0x7bc) = iVar2;
  *(int *)(param_1 + 0x7c0) = iVar3 + iVar2;
  return;
}



/* Entry: 10a19ecbc; end: 10a19ed03;  */

void FUN_10a19ecbc(long *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    lVar5 = param_1[1];
    if (((*(int *)(lVar5 + 0x7a8) == param_2) && (*(int *)(lVar5 + 0x7ac) == param_3)) &&
       (*(int *)(lVar5 + 0x7b0) == param_4)) {
      return;
    }
    *(int *)(lVar5 + 0x7a8) = param_2;
    *(int *)(lVar5 + 0x7ac) = param_3;
    *(int *)(lVar5 + 0x7b0) = param_4;
    FUN_10a1a2df4(lVar5);
    iVar3 = *(int *)(lVar5 + 0x7a8);
    *(int *)(lVar5 + 0x7a0) = iVar3;
    iVar4 = *(int *)(lVar5 + 0x7ac);
    *(int *)(lVar5 + 0x7a4) = iVar4;
    if ((*(byte *)(lVar5 + 0x14b8) & 1) != 0) {
      *(int *)(lVar5 + 0x7a4) = iVar3;
      *(int *)(lVar5 + 0x7a0) = iVar4;
    }
    iVar1 = iVar3 + 6;
    if (-4 < iVar3) {
      iVar1 = iVar3 + 3;
    }
    if (*(int *)(lVar5 + 0x7b0) != 4) {
      iVar3 = iVar1 >> 2;
    }
    *(int *)(lVar5 + 0x7b4) = iVar3;
    *(int *)(lVar5 + 0x7b8) = iVar4;
    iVar3 = (iVar4 + 1) / 2;
    *(int *)(lVar5 + 0x7bc) = iVar3;
    *(int *)(lVar5 + 0x7c0) = iVar4 + iVar3;
    return;
  }
  if (((*(int *)(lVar5 + 0x30) == param_2) && (*(int *)(lVar5 + 0x34) == param_3)) &&
     (*(int *)(lVar5 + 0x38) == param_4)) {
    return;
  }
  *(int *)(lVar5 + 0x30) = param_2;
  *(int *)(lVar5 + 0x34) = param_3;
  *(int *)(lVar5 + 0x38) = param_4;
  uVar2 = *(uint *)(lVar5 + 0x30);
  iVar3 = *(int *)(lVar5 + 0x34);
  *(uint *)(lVar5 + 0x28) = uVar2;
  *(int *)(lVar5 + 0x2c) = iVar3;
  if ((*(byte *)(lVar5 + 0x54) & 1) != 0) {
    *(int *)(lVar5 + 0x28) = iVar3;
    *(uint *)(lVar5 + 0x2c) = uVar2;
  }
  if (*(int *)(lVar5 + 0x38) != 4) {
    uVar2 = uVar2 + 3 >> 2;
  }
  *(uint *)(lVar5 + 0x3c) = uVar2;
  *(int *)(lVar5 + 0x40) = iVar3;
  *(uint *)(lVar5 + 0x44) = iVar3 + 1U >> 1;
  *(uint *)(lVar5 + 0x48) = iVar3 + (iVar3 + 1U >> 1);
  return;
}



/* Entry: 10a19ed04; end: 10a19ed67;  */

void FUN_10a19ed04(long param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x7a8) == param_2) && (*(int *)(param_1 + 0x7ac) == param_3)) &&
     (*(int *)(param_1 + 0x7b0) == param_4)) {
    return;
  }
  *(int *)(param_1 + 0x7a8) = param_2;
  *(int *)(param_1 + 0x7ac) = param_3;
  *(int *)(param_1 + 0x7b0) = param_4;
  FUN_10a1a2df4(param_1);
  iVar2 = *(int *)(param_1 + 0x7a8);
  *(int *)(param_1 + 0x7a0) = iVar2;
  iVar3 = *(int *)(param_1 + 0x7ac);
  *(int *)(param_1 + 0x7a4) = iVar3;
  if ((*(byte *)(param_1 + 0x14b8) & 1) != 0) {
    *(int *)(param_1 + 0x7a4) = iVar2;
    *(int *)(param_1 + 0x7a0) = iVar3;
  }
  iVar1 = iVar2 + 6;
  if (-4 < iVar2) {
    iVar1 = iVar2 + 3;
  }
  if (*(int *)(param_1 + 0x7b0) != 4) {
    iVar2 = iVar1 >> 2;
  }
  *(int *)(param_1 + 0x7b4) = iVar2;
  *(int *)(param_1 + 0x7b8) = iVar3;
  iVar2 = (iVar3 + 1) / 2;
  *(int *)(param_1 + 0x7bc) = iVar2;
  *(int *)(param_1 + 0x7c0) = iVar3 + iVar2;
  return;
}



/* Entry: 10a19ed68; end: 10a19ed83;  */

void FUN_10a19ed68(undefined8 *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined **ppuVar9;
  long *plVar10;
  uint *puVar11;
  long *plVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  ulong unaff_x19;
  undefined8 *puVar16;
  long *unaff_x20;
  undefined8 uVar17;
  long *unaff_x21;
  long lVar18;
  long *unaff_x22;
  long unaff_x23;
  undefined *puVar19;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar20;
  undefined8 unaff_d8;
  float fVar21;
  undefined8 unaff_d9;
  undefined1 auStack_448 [164];
  uint uStack_3a4;
  long *plStack_3a0;
  long *plStack_398;
  undefined8 uStack_390;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  long *plStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  uint uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 uStack_328;
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
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_118;
  undefined1 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)param_1[1];
    iVar13 = 0;
    goto code_r0x00010a19f3ac;
  }
  unaff_x29 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)*param_3;
  (**(code **)(*plVar6 + 0x30))();
  puVar16 = (undefined8 *)plVar6[3];
  param_2 = (long *)*param_2;
  (**(code **)(*param_2 + 0x38))();
  puVar7 = puVar16;
  func_0x00010a08f140();
  plVar6 = (long *)*puVar7;
  plStack_370 = (long *)0x0;
  plStack_368 = (long *)0x0;
  pbVar8 = (byte *)0x113836510;
  FUN_10ad0621c();
  plStack_398 = param_2;
  if ((*pbVar8 >> 5 & 1) == 0) {
LAB_10a19eea4:
    unaff_x22 = (long *)0x0;
LAB_10a19eea8:
    unaff_x24 = (long *)0x0;
LAB_10a19eeac:
    lVar15 = plVar6[2];
    plStack_3a0 = (long *)plVar6[3];
    __ZNSt3__115recursive_mutex4lockEv();
    FUN_10a012fec(&plStack_360,*plVar6,lVar15);
    plVar12 = plStack_358;
    plStack_370 = plStack_360;
    plVar10 = plStack_368;
    plStack_360 = (long *)0x0;
    plStack_358 = (long *)0x0;
    plStack_368 = plVar12;
    if (plVar10 != (long *)0x0) {
      plVar12 = plVar10 + 1;
      do {
        lVar15 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = plStack_358;
    if (plStack_358 != (long *)0x0) {
      plVar12 = plStack_358 + 1;
      do {
        lVar15 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_358 + 0x10))(plStack_358);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    unaff_x25 = plStack_370;
    (**(code **)(*plStack_370 + 0x40))();
    unaff_x19 = 1;
  }
  else {
    ppuVar9 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puVar19 = *ppuVar9;
    if (puVar19 == (undefined *)0x0) goto LAB_10a19eea4;
    unaff_x22 = (long *)(puVar19 + 0x18);
    if ((puVar19[0x139] != '\x01') ||
       (plVar10 = unaff_x22, FUN_10a1a38ec(unaff_x22,puVar16,&UNK_10f64160e,0x1137ea810),
       (int)plVar10 == 0)) goto LAB_10a19eea8;
    FUN_10a08d3ec(unaff_x22,plVar6 + 2);
    unaff_x25 = unaff_x22;
    func_0x00010a08dfb4();
    if ((puVar19[0xc0] & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a19f31c);
      (*pcVar4)();
    }
    plVar10 = (long *)*param_3;
    (**(code **)(*plVar10 + 0x38))();
    FUN_10a0979c0(unaff_x22,plVar10);
    unaff_x24 = unaff_x22;
    if (unaff_x25 == (long *)0x0) goto LAB_10a19eeac;
    unaff_x19 = 0;
  }
  unaff_x26 = (long *)*param_3;
  (**(code **)(*unaff_x26 + 0x30))();
  unaff_x23 = *plVar6;
  if ((*(byte *)(unaff_x23 + 0x5c) & 1) == 0) {
    uStack_3a4 = (uint)unaff_x19;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_32c = 0;
    plStack_358 = (long *)0x0;
    plStack_360 = (long *)0x0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_220 = 0xffffffffffffffff;
    uStack_210 = 0;
    uStack_218 = 0;
    uStack_200 = 0;
    uStack_208 = 0;
    uStack_1f0 = 0;
    uStack_1f8 = 0;
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_188 = 0;
    plVar10 = (long *)*param_3;
    (**(code **)(*plVar10 + 0x30))();
    plVar12 = plVar5;
    FUN_10a1a3710(plVar5,plVar10);
    plVar10 = (long *)*plVar12;
    plStack_378 = (long *)plVar12[1];
    if (plStack_378 != (long *)0x0) {
      plVar12 = plStack_378 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar15 = *plVar6;
    plVar6 = (long *)*param_3;
    plStack_380 = plVar10;
    (**(code **)(*plVar6 + 0x30))();
    func_0x000109296cdc(&uStack_390,lVar15,plVar10,plVar6);
    uStack_230 = 1;
    uStack_348 = 0x3f80000000000000;
    uStack_350 = 0;
    plStack_358 = (long *)uStack_390;
    plStack_360 = plVar10;
    (**(code **)(*unaff_x25 + 0x48))(unaff_x25,&plStack_360);
    if (unaff_x24 != (long *)0x0) {
      FUN_10a097500(unaff_x24,&uStack_390);
      FUN_10a097468(unaff_x24,&plStack_380);
    }
    if (plStack_388 != (long *)0x0) {
      plVar6 = plStack_388 + 1;
      do {
        lVar15 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_388 + 0x10))(plStack_388);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_388);
      }
    }
    plVar6 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      plVar10 = plStack_378 + 1;
      do {
        lVar15 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    unaff_x19 = (ulong)uStack_3a4;
  }
  else {
    plStack_360 = (long *)CONCAT44(plStack_360._4_4_,1);
    uStack_cc = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    _bzero((ulong)&plStack_360 | 4,0x28d);
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_88 = 0;
    uStack_78 = 0xffffffffffffffff;
    puVar11 = (uint *)0x113836510;
    FUN_10ad0621c();
    uVar1 = *puVar11;
    uStack_320 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_32c = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_340 = 0;
    uStack_348 = 0;
    uStack_318 = 0;
    uStack_118 = 1;
    plVar10 = (long *)*param_3;
    (**(code **)(*plVar10 + 0x30))();
    plVar6 = plStack_370;
    uVar1 = (uVar1 >> 2 ^ 0xffffffff) & 2;
    uStack_350 = 0;
    uStack_334 = 1;
    uStack_330 = 2;
    uStack_320 = 0x3f80000000000000;
    uStack_328 = 0;
    plVar12 = (long *)*param_3;
    plStack_358 = plVar10;
    uStack_338 = uVar1;
    (**(code **)(*plVar12 + 0x30))();
    func_0x00010a1a3a00(plVar6,unaff_x22,plVar12,uVar1);
    (**(code **)(*unaff_x25 + 0x50))(unaff_x25,&plStack_360);
  }
  plStack_360 = (long *)0x0;
  plStack_358 = *(long **)((long)unaff_x26 + 0x24);
  uStack_350 = 0x3f80000000000000;
  (**(code **)(*unaff_x25 + 0x70))(unaff_x25,&plStack_360);
  plVar6 = (long *)*param_3;
  (**(code **)(*plVar6 + 0x38))();
  iVar13 = (int)plVar6;
  param_2 = unaff_x25;
  plVar10 = plStack_398;
  FUN_10a1a3b14(plVar5);
  (**(code **)(*unaff_x25 + 0x40))(unaff_x25);
  plVar6 = plStack_370;
  unaff_x21 = plVar5;
  if (*(char *)(unaff_x23 + 0x5c) == '\x01') {
    plVar10 = (long *)*param_3;
    (**(code **)(*plVar10 + 0x30))();
    param_2 = unaff_x22;
    FUN_10a1a42fc(plVar6);
    unaff_x21 = plVar6;
  }
  unaff_x20 = plStack_370;
  if (plStack_370 != (long *)0x0) {
    FUN_10a08e2f4();
  }
  plVar6 = plStack_368;
  param_3 = plVar10;
  plVar5 = plStack_3a0;
  if (plStack_368 != (long *)0x0) {
    plVar12 = plStack_368 + 1;
    do {
      lVar15 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_368 + 0x10))(plStack_368);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      unaff_x20 = plVar6;
      param_3 = plVar10;
      plVar5 = plStack_3a0;
    }
  }
  plStack_3a0 = plVar5;
  if ((int)unaff_x19 != 0) {
    __ZNSt3__115recursive_mutex6unlockEv();
    unaff_x20 = plVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a054cfc(&plStack_370);
  __ZNSt3__115recursive_mutex6unlockEv(plStack_3a0);
  unaff_x30 = FUN_10a19f3ac;
  plVar5 = unaff_x20;
  __Unwind_Resume();
  register0x00000008 = (BADSPACEBASE *)(auStack_448 + 0x98);
code_r0x00010a19f3ac:
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_d8;
  *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
  *(undefined1 *)((long)register0x00000008 + -0x98) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
  if (*(char *)((long)plVar5 + 0x7c4) == '\x01') {
    ppuVar9 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    lVar15 = *param_3;
    uVar17 = *(undefined8 *)(lVar15 + 0x18);
    lVar18 = *(long *)(*ppuVar9 + 0x10);
    *(undefined **)((long)register0x00000008 + -0x90) = &UNK_10f635282;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x2b;
    if (lVar18 == 0) {
      FUN_10a0edfc4((undefined1 *)((long)register0x00000008 + -0x90));
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a19f7d0);
      (*pcVar4)();
    }
    func_0x00010ab9ca70((undefined1 *)((long)register0x00000008 + -0x90),lVar15,0);
    uVar14 = 0x8ca9;
    if (*(uint *)((long)register0x00000008 + -0x68) < 2) {
      uVar14 = 0x8d40;
    }
    FUN_10ab9cbe8((undefined1 *)((long)register0x00000008 + -0xe0),lVar18 + 0x50,uVar14,
                  (undefined1 *)((long)register0x00000008 + -0x90),0,uVar17,0);
    FUN_10ab9b224((undefined1 *)((long)register0x00000008 + -0xb0),
                  (undefined1 *)((long)register0x00000008 + -0xe0));
    FUN_10ab9ce18((undefined1 *)((long)register0x00000008 + -0xe0));
    plVar6 = (long *)0x0;
    lVar15 = 0;
  }
  else {
    FUN_10a3018c8();
    uVar14 = *(undefined4 *)(*param_3 + 0x18);
    *(undefined4 *)((long)register0x00000008 + -0xe4) = *(undefined4 *)(*param_3 + 0x1c);
    *(undefined4 *)((long)register0x00000008 + -0xe0) = uVar14;
    FUN_10a09d3bc((undefined1 *)((long)register0x00000008 + -0x90));
    lVar15 = *(long *)((long)register0x00000008 + -0x90);
    plVar6 = *(long **)((long)register0x00000008 + -0x88);
    *(long *)((long)register0x00000008 + -0xc0) = lVar15;
    *(long **)((long)register0x00000008 + -0xb8) = plVar6;
    _glBindFramebuffer(0x8d40,*(undefined4 *)(lVar15 + 0x10));
    _glViewport(0,0,*(undefined4 *)(lVar15 + 8),*(undefined4 *)(lVar15 + 0xc));
    param_3 = (long *)*param_3;
    (**(code **)(*param_3 + 0x48))();
    *(int *)(lVar15 + 0x14) = (int)param_3;
    *(undefined4 *)(lVar15 + 0x1c) = 0xde1;
    *(undefined1 *)(lVar15 + 0x30) = 0;
    _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,param_3,0);
  }
  _glClearColor(0,0,0,0);
  _glClear(0x4000);
  FUN_10a3014a0(plVar5);
  (**(code **)(*(long *)*param_2 + 0x48))();
  FUN_10ad4b6d4();
  (**(code **)(*(long *)*param_2 + 0x48))();
  func_0x00010ad4b774();
  plVar10 = (long *)*param_2;
  (**(code **)(*plVar10 + 0x48))();
  FUN_10a31a3c8(plVar5[0x1e],plVar5 + 0x23,(int)plVar5[0x21],plVar10);
  if ((*(byte *)(plVar5 + 0x297) & 1) == 0) {
    fVar20 = *(float *)((long)plVar5 + 0x14d4) - *(float *)((long)plVar5 + 0x14bc);
    fVar21 = 0.0;
  }
  else {
    fVar21 = *(float *)((long)plVar5 + 0x14c4) - *(float *)((long)plVar5 + 0x14bc);
    fVar20 = 0.0;
  }
  if ((int)plVar5[0x27] != -1) {
    _glUniform2f(fVar20 / (float)(int)plVar5[0xf4],fVar21 / (float)*(int *)((long)plVar5 + 0x7a4));
  }
  if ((int)plVar5[0x2d] != -1) {
    _glUniform1f((float)(*(int *)((long)plVar5 + 0x7b4) << 2) / (float)(int)plVar5[0xf5]);
  }
  FUN_10a31a478(plVar5[0x34],(int)plVar5[0x37],(undefined *)((long)plVar5 + 0x14bc));
  FUN_10a31a478(plVar5[0x30],(int)plVar5[0x33],(undefined *)((long)plVar5 + 0x14dc));
  _glViewport(0,0,*(undefined4 *)((long)plVar5 + 0x7b4),(int)plVar5[0xf7]);
  _glDrawArrays(6,0,4);
  FUN_10a301590();
  if (iVar13 != 0) {
    FUN_10a3014a0(plVar5 + 0x38);
    param_2 = (long *)*param_2;
    (**(code **)(*param_2 + 0x48))();
    FUN_10a31a3c8(plVar5[0x56],plVar5 + 0x5b,(int)plVar5[0x59],param_2);
    if ((int)plVar5[0x5f] != -1) {
      _glUniform2f((fVar20 + fVar20) / (float)(int)plVar5[0xf4],
                   (fVar21 + fVar21) / (float)*(int *)((long)plVar5 + 0x7a4));
    }
    if ((int)plVar5[0x65] != -1) {
      _glUniform1f((float)(*(int *)((long)plVar5 + 0x7b4) << 2) / (float)(int)plVar5[0xf5]);
    }
    FUN_10a31a478(plVar5[0x6c],(int)plVar5[0x6f],(undefined *)((long)plVar5 + 0x14bc));
    FUN_10a31a478(plVar5[0x68],(int)plVar5[0x6b],(undefined *)((long)plVar5 + 0x14dc));
    _glViewport(0,(int)plVar5[0xf7],*(undefined4 *)((long)plVar5 + 0x7b4),
                *(undefined4 *)((long)plVar5 + 0x7bc));
    _glDrawArrays(6,0,4);
    FUN_10a301590();
  }
  if (*(char *)((long)plVar5 + 0x7c4) == '\x01') {
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    FUN_10ab9b224((undefined1 *)((long)register0x00000008 + -0xb0),
                  (undefined1 *)((long)register0x00000008 + -0x90));
    FUN_10ab9ce18((undefined1 *)((long)register0x00000008 + -0x90));
  }
  else {
    func_0x00010a301a5c(lVar15,0x8d40);
    func_0x00010a301a24(lVar15,0x8d40);
  }
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar6 + 1;
    do {
      lVar15 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10ab9ce18((undefined1 *)((long)register0x00000008 + -0xb0));
  return;
}



/* Entry: 10a19ed84; end: 10a19f3ab;  */

void FUN_10a19ed84(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined **ppuVar10;
  long *plVar11;
  long *plVar12;
  uint *puVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  undefined4 auStack_490 [8];
  undefined *puStack_470;
  long *plStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 uStack_448;
  undefined *puStack_440;
  long *plStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  uint uStack_418;
  long *plStack_3a0;
  undefined8 uStack_390;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  long *plStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  uint uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 uStack_328;
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
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_118;
  undefined1 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)*param_3;
  (**(code **)(*plVar7 + 0x30))();
  puVar18 = (undefined8 *)plVar7[3];
  param_2 = (long *)*param_2;
  (**(code **)(*param_2 + 0x38))();
  puVar8 = puVar18;
  func_0x00010a08f140();
  plVar7 = (long *)*puVar8;
  plStack_370 = (long *)0x0;
  plStack_368 = (long *)0x0;
  pbVar9 = (byte *)0x113836510;
  FUN_10ad0621c();
  if ((*pbVar9 >> 5 & 1) == 0) {
LAB_10a19eea4:
    plVar20 = (long *)0x0;
LAB_10a19eea8:
    plVar11 = (long *)0x0;
  }
  else {
    ppuVar10 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puVar21 = *ppuVar10;
    if (puVar21 == (undefined *)0x0) goto LAB_10a19eea4;
    plVar20 = (long *)(puVar21 + 0x18);
    if ((puVar21[0x139] != '\x01') ||
       (plVar11 = plVar20, FUN_10a1a38ec(plVar20,puVar18,&UNK_10f64160e,0x1137ea810),
       (int)plVar11 == 0)) goto LAB_10a19eea8;
    FUN_10a08d3ec(plVar20,plVar7 + 2);
    plVar15 = plVar20;
    func_0x00010a08dfb4();
    if ((puVar21[0xc0] & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a19f31c);
      (*pcVar6)();
    }
    plVar11 = (long *)*param_3;
    (**(code **)(*plVar11 + 0x38))();
    FUN_10a0979c0(plVar20,plVar11);
    plVar11 = plVar20;
    if (plVar15 != (long *)0x0) {
      bVar5 = false;
      goto LAB_10a19ef5c;
    }
  }
  lVar22 = plVar7[2];
  plStack_3a0 = (long *)plVar7[3];
  __ZNSt3__115recursive_mutex4lockEv();
  FUN_10a012fec(&plStack_360,*plVar7,lVar22);
  plVar12 = plStack_358;
  plStack_370 = plStack_360;
  plVar15 = plStack_368;
  plStack_360 = (long *)0x0;
  plStack_358 = (long *)0x0;
  plStack_368 = plVar12;
  if (plVar15 != (long *)0x0) {
    plVar12 = plVar15 + 1;
    do {
      lVar22 = *plVar12;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar22 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar15 = plStack_358;
  if (plStack_358 != (long *)0x0) {
    plVar12 = plStack_358 + 1;
    do {
      lVar22 = *plVar12;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar22 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_358 + 0x10))(plStack_358);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar15 = plStack_370;
  (**(code **)(*plStack_370 + 0x40))();
  bVar5 = true;
LAB_10a19ef5c:
  plVar12 = (long *)*param_3;
  (**(code **)(*plVar12 + 0x30))();
  lVar22 = *plVar7;
  if ((*(byte *)(lVar22 + 0x5c) & 1) == 0) {
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_32c = 0;
    plStack_358 = (long *)0x0;
    plStack_360 = (long *)0x0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_220 = 0xffffffffffffffff;
    uStack_210 = 0;
    uStack_218 = 0;
    uStack_200 = 0;
    uStack_208 = 0;
    uStack_1f0 = 0;
    uStack_1f8 = 0;
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_188 = 0;
    plVar14 = (long *)*param_3;
    (**(code **)(*plVar14 + 0x30))();
    puVar8 = param_1;
    FUN_10a1a3710(param_1,plVar14);
    plVar14 = (long *)*puVar8;
    plStack_378 = (long *)puVar8[1];
    if (plStack_378 != (long *)0x0) {
      plVar1 = plStack_378 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar23 = *plVar7;
    plVar7 = (long *)*param_3;
    plStack_380 = plVar14;
    (**(code **)(*plVar7 + 0x30))();
    func_0x000109296cdc(&uStack_390,lVar23,plVar14,plVar7);
    uStack_230 = 1;
    uStack_348 = 0x3f80000000000000;
    uStack_350 = 0;
    plStack_358 = (long *)uStack_390;
    plStack_360 = plVar14;
    (**(code **)(*plVar15 + 0x48))(plVar15,&plStack_360);
    if (plVar11 != (long *)0x0) {
      FUN_10a097500(plVar11,&uStack_390);
      FUN_10a097468(plVar11,&plStack_380);
    }
    if (plStack_388 != (long *)0x0) {
      plVar7 = plStack_388 + 1;
      do {
        lVar23 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar23 == 0) {
        (**(code **)(*plStack_388 + 0x10))(plStack_388);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_388);
      }
    }
    plVar7 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      plVar11 = plStack_378 + 1;
      do {
        lVar23 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar23 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  else {
    plStack_360 = (long *)CONCAT44(plStack_360._4_4_,1);
    uStack_cc = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    _bzero((ulong)&plStack_360 | 4,0x28d);
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_88 = 0;
    uStack_78 = 0xffffffffffffffff;
    puVar13 = (uint *)0x113836510;
    FUN_10ad0621c();
    uVar2 = *puVar13;
    uStack_320 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_32c = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_340 = 0;
    uStack_348 = 0;
    uStack_318 = 0;
    uStack_118 = 1;
    plVar11 = (long *)*param_3;
    (**(code **)(*plVar11 + 0x30))();
    plVar7 = plStack_370;
    uVar2 = (uVar2 >> 2 ^ 0xffffffff) & 2;
    uStack_350 = 0;
    uStack_334 = 1;
    uStack_330 = 2;
    uStack_320 = 0x3f80000000000000;
    uStack_328 = 0;
    plVar14 = (long *)*param_3;
    plStack_358 = plVar11;
    uStack_338 = uVar2;
    (**(code **)(*plVar14 + 0x30))();
    func_0x00010a1a3a00(plVar7,plVar20,plVar14,uVar2);
    (**(code **)(*plVar15 + 0x50))(plVar15,&plStack_360);
  }
  plStack_360 = (long *)0x0;
  plStack_358 = *(long **)((long)plVar12 + 0x24);
  uStack_350 = 0x3f80000000000000;
  (**(code **)(*plVar15 + 0x70))(plVar15,&plStack_360);
  plVar7 = (long *)*param_3;
  (**(code **)(*plVar7 + 0x38))();
  iVar16 = (int)plVar7;
  plVar7 = plVar15;
  FUN_10a1a3b14(param_1);
  (**(code **)(*plVar15 + 0x40))(plVar15);
  plVar11 = plStack_370;
  if (*(char *)(lVar22 + 0x5c) == '\x01') {
    param_2 = (long *)*param_3;
    (**(code **)(*param_2 + 0x30))();
    FUN_10a1a42fc(plVar11);
    plVar7 = plVar20;
  }
  plVar20 = plStack_370;
  if (plStack_370 != (long *)0x0) {
    FUN_10a08e2f4();
  }
  plVar11 = plStack_368;
  if (plStack_368 != (long *)0x0) {
    plVar15 = plStack_368 + 1;
    do {
      lVar22 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar22 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_368 + 0x10))(plStack_368);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar20 = plVar11;
    }
  }
  if (bVar5) {
    plVar20 = plStack_3a0;
    __ZNSt3__115recursive_mutex6unlockEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a054cfc(&plStack_370);
  __ZNSt3__115recursive_mutex6unlockEv(plStack_3a0);
  __Unwind_Resume();
  uStack_460 = 0;
  uStack_458 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  puStack_470 = (undefined *)0x0;
  plStack_468 = (long *)0x0;
  if (*(char *)((long)plVar20 + 0x7c4) == '\x01') {
    ppuVar10 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    uVar19 = *(undefined8 *)(*param_2 + 0x18);
    lVar22 = *(long *)(*ppuVar10 + 0x10);
    puStack_440 = &UNK_10f635282;
    plStack_438 = (long *)0x2b;
    if (lVar22 == 0) {
      FUN_10a0edfc4(&puStack_440);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a19f7d0);
      (*pcVar6)();
    }
    func_0x00010ab9ca70(&puStack_440,*param_2,0);
    uVar17 = 0x8ca9;
    if (uStack_418 < 2) {
      uVar17 = 0x8d40;
    }
    FUN_10ab9cbe8(auStack_490,lVar22 + 0x50,uVar17,&puStack_440,0,uVar19,0);
    FUN_10ab9b224(&uStack_460,auStack_490);
    FUN_10ab9ce18(auStack_490);
    plVar11 = (long *)0x0;
    puVar21 = (undefined *)0x0;
  }
  else {
    FUN_10a3018c8();
    auStack_490[0] = *(undefined4 *)(*param_2 + 0x18);
    FUN_10a09d3bc(&puStack_440);
    plVar11 = plStack_438;
    puVar21 = puStack_440;
    puStack_470 = puStack_440;
    plStack_468 = plStack_438;
    _glBindFramebuffer(0x8d40,*(undefined4 *)(puStack_440 + 0x10));
    _glViewport(0,0,*(undefined4 *)(puVar21 + 8),*(undefined4 *)(puVar21 + 0xc));
    param_2 = (long *)*param_2;
    (**(code **)(*param_2 + 0x48))();
    *(int *)(puVar21 + 0x14) = (int)param_2;
    *(undefined4 *)(puVar21 + 0x1c) = 0xde1;
    puVar21[0x30] = 0;
    _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,param_2,0);
  }
  _glClearColor(0,0,0,0);
  _glClear(0x4000);
  FUN_10a3014a0(plVar20);
  (**(code **)(*(long *)*plVar7 + 0x48))();
  FUN_10ad4b6d4();
  (**(code **)(*(long *)*plVar7 + 0x48))();
  func_0x00010ad4b774();
  plVar15 = (long *)*plVar7;
  (**(code **)(*plVar15 + 0x48))();
  FUN_10a31a3c8(plVar20[0x1e],plVar20 + 0x23,(int)plVar20[0x21],plVar15);
  if ((*(byte *)(plVar20 + 0x297) & 1) == 0) {
    fVar24 = *(float *)((long)plVar20 + 0x14d4) - *(float *)((long)plVar20 + 0x14bc);
    fVar25 = 0.0;
  }
  else {
    fVar25 = *(float *)((long)plVar20 + 0x14c4) - *(float *)((long)plVar20 + 0x14bc);
    fVar24 = 0.0;
  }
  if ((int)plVar20[0x27] != -1) {
    _glUniform2f(fVar24 / (float)(int)plVar20[0xf4],fVar25 / (float)*(int *)((long)plVar20 + 0x7a4))
    ;
  }
  if ((int)plVar20[0x2d] != -1) {
    _glUniform1f((float)(*(int *)((long)plVar20 + 0x7b4) << 2) / (float)(int)plVar20[0xf5]);
  }
  FUN_10a31a478(plVar20[0x34],(int)plVar20[0x37],(undefined *)((long)plVar20 + 0x14bc));
  FUN_10a31a478(plVar20[0x30],(int)plVar20[0x33],(undefined *)((long)plVar20 + 0x14dc));
  _glViewport(0,0,*(undefined4 *)((long)plVar20 + 0x7b4),(int)plVar20[0xf7]);
  _glDrawArrays(6,0,4);
  FUN_10a301590();
  if (iVar16 != 0) {
    FUN_10a3014a0(plVar20 + 0x38);
    plVar7 = (long *)*plVar7;
    (**(code **)(*plVar7 + 0x48))();
    FUN_10a31a3c8(plVar20[0x56],plVar20 + 0x5b,(int)plVar20[0x59],plVar7);
    if ((int)plVar20[0x5f] != -1) {
      _glUniform2f((fVar24 + fVar24) / (float)(int)plVar20[0xf4],
                   (fVar25 + fVar25) / (float)*(int *)((long)plVar20 + 0x7a4));
    }
    if ((int)plVar20[0x65] != -1) {
      _glUniform1f((float)(*(int *)((long)plVar20 + 0x7b4) << 2) / (float)(int)plVar20[0xf5]);
    }
    FUN_10a31a478(plVar20[0x6c],(int)plVar20[0x6f],(undefined *)((long)plVar20 + 0x14bc));
    FUN_10a31a478(plVar20[0x68],(int)plVar20[0x6b],(undefined *)((long)plVar20 + 0x14dc));
    _glViewport(0,(int)plVar20[0xf7],*(undefined4 *)((long)plVar20 + 0x7b4),
                *(undefined4 *)((long)plVar20 + 0x7bc));
    _glDrawArrays(6,0,4);
    FUN_10a301590();
  }
  if (*(char *)((long)plVar20 + 0x7c4) == '\x01') {
    plStack_438 = (long *)0x0;
    puStack_440 = (undefined *)0x0;
    uStack_428 = 0;
    uStack_430 = 0;
    FUN_10ab9b224(&uStack_460,&puStack_440);
    FUN_10ab9ce18(&puStack_440);
  }
  else {
    func_0x00010a301a5c(puVar21,0x8d40);
    func_0x00010a301a24(puVar21,0x8d40);
  }
  if (plVar11 != (long *)0x0) {
    plVar7 = plVar11 + 1;
    do {
      lVar22 = *plVar7;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar22 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  FUN_10ab9ce18(&uStack_460);
  return;
}



/* Entry: 10a19f3ac; end: 10a19f813;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010a19f514 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10a19f3ac(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined *puVar10;
  float fVar11;
  undefined4 auStack_e0 [8];
  undefined *puStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint uStack_68;
  
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  puStack_c0 = (undefined *)0x0;
  plStack_b8 = (long *)0x0;
  if (*(char *)(param_2 + 0x7c4) == '\x01') {
    ppuVar4 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    uVar7 = *(undefined8 *)(*param_4 + 0x18);
    lVar9 = *(long *)(*ppuVar4 + 0x10);
    puStack_90 = &UNK_10f635282;
    plStack_88 = (long *)0x2b;
    if (lVar9 == 0) {
      FUN_10a0edfc4(&puStack_90);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a19f7d0);
      (*pcVar3)();
    }
    func_0x00010ab9ca70(&puStack_90,*param_4,0);
    uVar6 = 0x8ca9;
    if (uStack_68 < 2) {
      uVar6 = 0x8d40;
    }
    FUN_10ab9cbe8(auStack_e0,lVar9 + 0x50,uVar6,&puStack_90,0,uVar7,0);
    FUN_10ab9b224(&uStack_b0,auStack_e0);
    FUN_10ab9ce18(auStack_e0);
    plVar8 = (long *)0x0;
    puVar10 = (undefined *)0x0;
  }
  else {
    FUN_10a3018c8();
    auStack_e0[0] = *(undefined4 *)(*param_4 + 0x18);
    FUN_10a09d3bc(&puStack_90);
    plVar8 = plStack_88;
    puVar10 = puStack_90;
    puStack_c0 = puStack_90;
    plStack_b8 = plStack_88;
    _glBindFramebuffer(0x8d40,*(undefined4 *)(puStack_90 + 0x10));
    _glViewport(0,0,*(undefined4 *)(puVar10 + 8),*(undefined4 *)(puVar10 + 0xc));
    param_4 = (long *)*param_4;
    (**(code **)(*param_4 + 0x48))();
    *(int *)(puVar10 + 0x14) = (int)param_4;
    *(undefined4 *)(puVar10 + 0x1c) = 0xde1;
    puVar10[0x30] = 0;
    _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,param_4,0);
  }
  _glClearColor(param_1,0,0,0);
  _glClear(0x4000);
  FUN_10a3014a0(param_2);
  (**(code **)(*(long *)*param_3 + 0x48))();
  FUN_10ad4b6d4();
  (**(code **)(*(long *)*param_3 + 0x48))();
  func_0x00010ad4b774();
  plVar5 = (long *)*param_3;
  (**(code **)(*plVar5 + 0x48))();
  FUN_10a31a3c8(*(undefined8 *)(param_2 + 0xf0),param_2 + 0x118,*(undefined4 *)(param_2 + 0x108),
                plVar5);
  if ((*(byte *)(param_2 + 0x14b8) & 1) == 0) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = *(float *)(param_2 + 0x14c4) - *(float *)(param_2 + 0x14bc);
  }
  if (*(int *)(param_2 + 0x138) != -1) {
    _glUniform2f(param_1,fVar11 / (float)*(int *)(param_2 + 0x7a4));
  }
  if (*(int *)(param_2 + 0x168) != -1) {
    _glUniform1f();
  }
  FUN_10a31a478(*(undefined8 *)(param_2 + 0x1a0),*(undefined4 *)(param_2 + 0x1b8),param_2 + 0x14bc);
  FUN_10a31a478(*(undefined8 *)(param_2 + 0x180),*(undefined4 *)(param_2 + 0x198),param_2 + 0x14dc);
  _glViewport(0,0,*(undefined4 *)(param_2 + 0x7b4),*(undefined4 *)(param_2 + 0x7b8));
  _glDrawArrays(6,0,4);
  FUN_10a301590();
  if (param_5 != 0) {
    FUN_10a3014a0(param_2 + 0x1c0);
    plVar5 = (long *)*param_3;
    (**(code **)(*plVar5 + 0x48))();
    FUN_10a31a3c8(*(undefined8 *)(param_2 + 0x2b0),param_2 + 0x2d8,*(undefined4 *)(param_2 + 0x2c8),
                  plVar5);
    if (*(int *)(param_2 + 0x2f8) != -1) {
      _glUniform2f(param_1,(fVar11 + fVar11) / (float)*(int *)(param_2 + 0x7a4));
    }
    if (*(int *)(param_2 + 0x328) != -1) {
      _glUniform1f();
    }
    FUN_10a31a478(*(undefined8 *)(param_2 + 0x360),*(undefined4 *)(param_2 + 0x378),param_2 + 0x14bc
                 );
    FUN_10a31a478(*(undefined8 *)(param_2 + 0x340),*(undefined4 *)(param_2 + 0x358),param_2 + 0x14dc
                 );
    _glViewport(0,*(undefined4 *)(param_2 + 0x7b8),*(undefined4 *)(param_2 + 0x7b4),
                *(undefined4 *)(param_2 + 0x7bc));
    _glDrawArrays(6,0,4);
    FUN_10a301590();
  }
  if (*(char *)(param_2 + 0x7c4) == '\x01') {
    plStack_88 = (long *)0x0;
    puStack_90 = (undefined *)0x0;
    uStack_78 = 0;
    uStack_80 = 0;
    FUN_10ab9b224(&uStack_b0,&puStack_90);
    FUN_10ab9ce18(&puStack_90);
  }
  else {
    func_0x00010a301a5c(puVar10,0x8d40);
    func_0x00010a301a24(puVar10,0x8d40);
  }
  if (plVar8 != (long *)0x0) {
    plVar5 = plVar8 + 1;
    do {
      lVar9 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  FUN_10ab9ce18(&uStack_b0);
  return;
}



/* Entry: 10a19f814; end: 10a19f82b;  */

void FUN_10a19f814(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined **ppuVar12;
  undefined4 uVar13;
  uint uVar14;
  long unaff_x19;
  long *plVar15;
  long *plVar16;
  long unaff_x20;
  long lVar17;
  undefined8 unaff_x21;
  long lVar18;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 uVar19;
  ulong unaff_x24;
  long lVar20;
  long *plVar21;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_4e8 [160];
  long *plStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  long *plStack_428;
  long *plStack_420;
  uint auStack_418 [10];
  undefined8 uStack_3f0;
  long *plStack_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 uStack_3c0;
  long *plStack_3b0;
  long *plStack_3a8;
  undefined8 uStack_3a0;
  long *plStack_398;
  undefined8 uStack_390;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  uint uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
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
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_128;
  undefined1 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  puVar7 = (undefined8 *)*param_1;
  if (puVar7 == (undefined8 *)0x0) {
    lVar18 = param_1[1];
  }
  else {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    param_2 = (long *)*param_2;
    (**(code **)(*param_2 + 0x30))();
    plVar15 = (long *)param_2[3];
    plVar16 = plVar15;
    func_0x00010a08f140();
    func_0x00010a08f1bc();
    plVar16 = (long *)*plVar16;
    lVar18 = plVar16[2];
    lVar20 = plVar16[3];
    __ZNSt3__115recursive_mutex4lockEv(lVar20);
    lStack_438 = lVar20;
    FUN_10a012fec(&plStack_380,*plVar16,lVar18);
    uStack_390 = 0;
    plStack_388 = (long *)0x0;
    uStack_3a0 = 0;
    plStack_398 = (long *)0x0;
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f64161d,&UNK_10f641659,0x2fb,&UNK_10f6416c9);
    }
    FUN_10a30f97c();
    uStack_370 = *(undefined4 *)((long)puVar7 + 0x3c);
    uStack_36c = *(undefined4 *)(puVar7 + 9);
    FUN_10a30fb38(&plStack_3b0);
    unaff_x23 = plStack_3b0;
    plStack_430 = param_2;
    (**(code **)(*plStack_3b0 + 0x30))();
    plVar8 = plStack_380;
    (**(code **)(*plStack_380 + 0x40))();
    lVar18 = *plVar16;
    if ((*(byte *)(lVar18 + 0x5c) & 1) == 0) {
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_348 = 0;
      uStack_344 = 0;
      uStack_350 = 0;
      uStack_34c = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_33c = 0;
      uStack_368 = 0;
      uStack_364 = 0;
      uStack_370 = 0;
      uStack_36c = 0;
      uStack_358 = 0;
      uStack_354 = 0;
      uStack_360 = 0;
      uStack_35c = 0;
      uStack_230 = 0xffffffffffffffff;
      uStack_220 = 0;
      uStack_228 = 0;
      uStack_210 = 0;
      uStack_218 = 0;
      uStack_200 = 0;
      uStack_208 = 0;
      uStack_1f0 = 0;
      uStack_1f8 = 0;
      uStack_1e0 = 0;
      uStack_1e8 = 0;
      uStack_1d0 = 0;
      uStack_1d8 = 0;
      uStack_1c0 = 0;
      uStack_1c8 = 0;
      uStack_1b0 = 0;
      uStack_1b8 = 0;
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_198 = 0;
      puVar10 = puVar7;
      FUN_10a1a3710(puVar7,unaff_x23);
      FUN_10a15e154(&uStack_390,puVar10);
      func_0x000109296cdc(&uStack_3f0,*plVar16,uStack_390,unaff_x23);
      plStack_398 = plStack_3e8;
      uStack_3a0 = uStack_3f0;
      uStack_240 = 1;
      uStack_358 = 0;
      uStack_354 = 0x3f800000;
      uStack_360 = 0;
      uStack_35c = 0;
      uStack_368 = (undefined4)uStack_3f0;
      uStack_364 = (undefined4)((ulong)uStack_3f0 >> 0x20);
      uStack_370 = (undefined4)uStack_390;
      uStack_36c = (undefined4)((ulong)uStack_390 >> 0x20);
      (**(code **)(*plVar8 + 0x48))(plVar8,&uStack_370);
    }
    else {
      uStack_370 = 1;
      uStack_dc = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      _bzero((ulong)&uStack_370 | 4,0x28d);
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_98 = 0;
      uStack_88 = 0xffffffffffffffff;
      puVar9 = (uint *)0x113836510;
      FUN_10ad0621c();
      uStack_348 = (*puVar9 >> 2 ^ 0xffffffff) & 2;
      if (lStack_128 == 0) {
        uStack_328 = 0;
        uStack_33c = 0;
        uStack_350 = 0;
        uStack_34c = 0;
        uStack_358 = 0;
        uStack_354 = 0;
      }
      lStack_128 = 1;
      uStack_368 = SUB84(unaff_x23,0);
      uStack_364 = (undefined4)((ulong)unaff_x23 >> 0x20);
      uStack_360 = 0;
      uStack_35c = 0;
      uStack_344 = 1;
      uStack_340 = 2;
      uStack_330 = 0x3f80000000000000;
      uStack_338 = 0;
      func_0x00010a1a3a00(plStack_380,0,unaff_x23);
      (**(code **)(*plVar8 + 0x50))(plVar8,&uStack_370);
    }
    uStack_338 = 0;
    uStack_340 = 0x3f800000;
    uStack_33c = 0;
    uStack_328 = 0;
    uStack_330 = 0x3f80000000000000;
    uStack_318 = 0x3f800000;
    uStack_320 = 0;
    uStack_310 = 0;
    uStack_354 = 0;
    uStack_350 = 0x3f000000;
    uStack_35c = 0xbf000000;
    uStack_358 = 0;
    uStack_364 = 0;
    uStack_360 = 0;
    uStack_36c = 0;
    uStack_368 = 0;
    uStack_34c = 0x3f000000;
    uStack_348 = 0x3f800000;
    uStack_370 = 0x3f000000;
    uStack_344 = 0;
    auStack_418[0] = *(uint *)((long)puVar7 + 0x54) & 0xc | -*(uint *)((long)puVar7 + 0x54) & 3;
    auStack_418[1] = 0;
    auStack_418[2] = 0;
    auStack_418[5] = 0;
    auStack_418[6] = 0;
    auStack_418[3] = 0;
    auStack_418[4] = 0;
    auStack_418[7] = 0;
    auStack_418[8] = 1;
    auStack_418[9] = 0;
    FUN_10a19e730(&uStack_3f0,auStack_418,0,0);
    uStack_340 = (undefined4)uStack_3f0;
    uStack_33c = (undefined4)((ulong)uStack_3f0 >> 0x20);
    uStack_338 = 0;
    uStack_328 = 0;
    uStack_320 = uStack_3c0;
    uStack_318 = 0x3f800000;
    FUN_10a1a44c0(&uStack_3f0,*plVar15,&uStack_370);
    puVar10 = puVar7;
    FUN_10a1a3208(puVar7,*plVar16);
    plStack_448 = param_3;
    uStack_440 = param_4;
    FUN_10a1adf98();
    func_0x000109293c4c();
    func_0x000109294420();
    plVar21 = (long *)*puVar10;
    plVar11 = plVar21;
    (**(code **)(*plVar21 + 0x30))();
    if (((*(byte *)(plVar11 + 6) & 1) == 0) || (lVar20 = *plVar11, plVar11[1] == lVar20)) {
LAB_10a19ff98:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a19ff9c);
      (*pcVar4)();
    }
    lVar17 = puVar10[2];
    if (puVar10[3] == lVar17) goto LAB_10a19ff98;
    puVar10 = puVar7;
    FUN_10a1a3208(puVar7,*plVar16);
    FUN_10a1a43f0(&plStack_428,puVar10,lVar17);
    if ((undefined4 *)plVar11[1] == (undefined4 *)*plVar11) goto LAB_10a19ff98;
    uVar13 = *(undefined4 *)*plVar11;
    (**(code **)(*plVar8 + 0x78))(plVar8,plVar21);
    auStack_418[0] = 0;
    auStack_418[1] = 0;
    auStack_418[2] = (uint)puVar7[6];
    auStack_418[3] = (uint)((ulong)puVar7[6] >> 0x20);
    auStack_418[4] = 0;
    auStack_418[5] = 0x3f800000;
    (**(code **)(*plVar8 + 0x70))(plVar8,auStack_418);
    if ((*(byte *)(*plVar15 + 0x440) & 1) == 0) goto LAB_10a19ff98;
    lVar17 = plVar21[0xa0];
    puVar10 = (undefined8 *)(*plVar15 + 0x98);
    FUN_10a1559cc();
    (**(code **)(*plVar8 + 0x98))(plVar8,0,lVar17,*puVar10,0);
    if (*(long *)(lVar20 + 0x10) == *(long *)(lVar20 + 8)) goto LAB_10a19ff98;
    (**(code **)(*plStack_428 + 0x38))
              (plStack_428,*(undefined4 *)(*(long *)(lVar20 + 8) + 0x18),uStack_3f0,uStack_3e0,
               uStack_3dc,0);
    if (*(long *)(lVar20 + 0x40) == *(long *)(lVar20 + 0x38)) goto LAB_10a19ff98;
    (**(code **)(*plStack_428 + 0x48))
              (plStack_428,*(undefined4 *)(*(long *)(lVar20 + 0x38) + 0x18),plStack_430,5,0);
    plVar16 = plStack_428;
    if ((*(long *)(lVar20 + 0x70) == *(long *)(lVar20 + 0x68)) ||
       ((*(byte *)(*plVar15 + 0x440) & 1) == 0)) goto LAB_10a19ff98;
    unaff_x24 = (ulong)*(uint *)(*(long *)(lVar20 + 0x68) + 0x18);
    puVar10 = (undefined8 *)(*plVar15 + 0xe0);
    func_0x00010a155a18();
    (**(code **)(*plVar16 + 0x60))(plVar16,unaff_x24,*puVar10,0);
    (**(code **)(*plVar8 + 0x80))(plVar8,uVar13,plVar21[0xa0],plStack_428,0,0);
    (**(code **)(*plVar8 + 0xa8))(plVar8,4,0,1,0);
    (**(code **)(*plVar8 + 0x40))(plVar8);
    if (*(char *)(lVar18 + 0x5c) == '\x01') {
      FUN_10a1a42fc(plStack_380,0,unaff_x23);
    }
    unaff_x21 = uStack_440;
    param_2 = plStack_448;
    if (plStack_420 != (long *)0x0) {
      plVar16 = plStack_420 + 1;
      do {
        lVar18 = *plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_420 + 0x10))(plStack_420);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_420);
      }
    }
    if (plStack_3e8 != (long *)0x0) {
      plVar16 = plStack_3e8 + 1;
      do {
        lVar18 = *plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_3e8 + 0x10))(plStack_3e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3e8);
      }
    }
    FUN_10a08e2f4(plStack_380);
    param_3 = (long *)(long)(int)unaff_x21;
    param_4 = 0;
    (**(code **)(*plStack_3b0 + 0x10))
              (plStack_3b0,param_2,param_3,0,*(undefined4 *)((long)puVar7 + 0x34));
    unaff_x19 = lStack_438;
    if (plStack_3a8 != (long *)0x0) {
      plVar16 = plStack_3a8 + 1;
      do {
        lVar18 = *plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3a8);
      }
    }
    plVar16 = plStack_398;
    if (plStack_398 != (long *)0x0) {
      plVar15 = plStack_398 + 1;
      do {
        lVar18 = *plVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *plVar15 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_398 + 0x10))(plStack_398);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_388;
    if (plStack_388 != (long *)0x0) {
      plVar15 = plStack_388 + 1;
      do {
        lVar18 = *plVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *plVar15 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_388 + 0x10))(plStack_388);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    if (plStack_378 != (long *)0x0) {
      plVar16 = plStack_378 + 1;
      do {
        lVar18 = *plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_378);
      }
    }
    unaff_x20 = unaff_x19;
    __ZNSt3__115recursive_mutex6unlockEv();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a09db0c(&plStack_3b0);
    FUN_10a0eb918(&uStack_3a0);
    func_0x00010a0eb82c(&uStack_390);
    func_0x00010a054cfc(&plStack_380);
    __ZNSt3__115recursive_mutex6unlockEv(lStack_438);
    unaff_x30 = FUN_10a1a0034;
    lVar18 = unaff_x20;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(auStack_4e8 + 0x98);
    unaff_x22 = puVar7;
  }
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x48) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1a30bc();
  FUN_10a30f97c();
  uVar13 = *(undefined4 *)(lVar18 + 0x7c0);
  *(undefined4 *)((long)register0x00000008 + -0x80) = *(undefined4 *)(lVar18 + 0x7b4);
  *(undefined4 *)((long)register0x00000008 + -0x7c) = uVar13;
  FUN_10a30fb38((undefined1 *)((long)register0x00000008 + -0x90));
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
  *(undefined1 *)((long)register0x00000008 + -0x98) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
  if (*(char *)(lVar18 + 0x7c4) == '\x01') {
    ppuVar12 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    uVar19 = *(undefined8 *)(*(long *)((long)register0x00000008 + -0x90) + 0x18);
    lVar20 = *(long *)(*ppuVar12 + 0x10);
    *(undefined **)((long)register0x00000008 + -0x80) = &UNK_10f635282;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0x2b;
    if (lVar20 == 0) goto LAB_10a1a0394;
    func_0x00010ab9ca70((undefined1 *)((long)register0x00000008 + -0x80),
                        *(long *)((long)register0x00000008 + -0x90),0);
    uVar13 = 0x8ca9;
    if (*(uint *)((long)register0x00000008 + -0x58) < 2) {
      uVar13 = 0x8d40;
    }
    FUN_10ab9cbe8((undefined1 *)((long)register0x00000008 + -0xd0),lVar20 + 0x50,uVar13,
                  (undefined1 *)((long)register0x00000008 + -0x80),0,uVar19,0);
    FUN_10ab9b224((undefined1 *)((long)register0x00000008 + -0xb0),
                  (undefined1 *)((long)register0x00000008 + -0xd0));
    FUN_10ab9ce18((undefined1 *)((long)register0x00000008 + -0xd0));
  }
  else {
    *(undefined4 *)(lVar18 + 0x7d4) = 0x8d40;
    func_0x00010a3022a4(lVar18 + 0x7c8);
    plVar16 = *(long **)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0x75) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x7d) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x6d) = 0;
    if (plVar16 == (long *)0x0) {
      uVar6 = 0;
      uVar5 = 0;
      uVar14 = 0;
      lVar20 = 0;
      uVar13 = 1;
    }
    else {
      plVar15 = plVar16;
      (**(code **)(*plVar16 + 0x50))();
      uVar5 = SUB84(plVar15,0);
      plVar15 = plVar16;
      (**(code **)(*plVar16 + 0x48))();
      uVar6 = SUB84(plVar15,0);
      lVar20 = plVar16[3];
      uVar13 = (undefined4)plVar16[4];
      uVar14 = -(*(byte *)((long)plVar16 + 0x54) >> 2 & 1) & 3;
    }
    uVar1 = *(uint *)(lVar18 + 0x7ec);
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    *(uint *)(lVar18 + 0x7ec) = uVar1;
    *(undefined4 *)(lVar18 + 0xbcc) = 0x8ce0;
    *(undefined4 *)(lVar18 + 0x820) = 0x8ce0;
    *(undefined4 *)(lVar18 + 0x7f0) = uVar5;
    *(undefined4 *)(lVar18 + 0x7f4) = uVar6;
    *(long *)(lVar18 + 0x7f8) = lVar20;
    *(bool *)(lVar18 + 0x800) = plVar16 != (long *)0x0;
    *(undefined8 *)(lVar18 + 0x810) = *(undefined8 *)((long)register0x00000008 + -0x71);
    uVar19 = *(undefined8 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)(lVar18 + 0x809) = *(undefined8 *)((long)register0x00000008 + -0x78);
    *(undefined8 *)(lVar18 + 0x801) = uVar19;
    *(undefined4 *)(lVar18 + 0x818) = uVar13;
    *(uint *)(lVar18 + 0x81c) = uVar14;
    FUN_10a3024c0(lVar18 + 0x7c8,lVar18 + 0x7f0);
    _glViewport(0,0,*(undefined4 *)(lVar18 + 0x7b4),*(undefined4 *)(lVar18 + 0x7c0));
  }
  _glClearColor(0,0,0,0);
  _glClear(0x4000);
  FUN_10a3014a0(lVar18 + 0x640);
  param_2 = (long *)*param_2;
  (**(code **)(*param_2 + 0x48))();
  FUN_10a31a3c8(*(undefined8 *)(lVar18 + 0x730),lVar18 + 0x758,*(undefined4 *)(lVar18 + 0x748),
                param_2);
  FUN_10a31a478(*(undefined8 *)(lVar18 + 0x780),*(undefined4 *)(lVar18 + 0x798),lVar18 + 0x14bc);
  FUN_10a31a478(*(undefined8 *)(lVar18 + 0x760),*(undefined4 *)(lVar18 + 0x778),lVar18 + 0x14dc);
  _glViewport(0,0,*(undefined4 *)(lVar18 + 0x7a8),*(undefined4 *)(lVar18 + 0x7ac));
  _glDrawArrays(6,0,4);
  FUN_10a301590();
  (**(code **)(**(long **)((long)register0x00000008 + -0x90) + 0x10))
            (*(long **)((long)register0x00000008 + -0x90),param_3,(long)(int)param_4,0,
             *(undefined4 *)(lVar18 + 0x7ac));
  if (*(char *)(lVar18 + 0x7c4) == '\x01') {
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    FUN_10ab9b224((undefined1 *)((long)register0x00000008 + -0xb0),
                  (undefined1 *)((long)register0x00000008 + -0x80));
    FUN_10ab9ce18((undefined1 *)((long)register0x00000008 + -0x80));
  }
  else {
    func_0x00010a3022f0(lVar18 + 0x7c8);
    func_0x00010a302418(lVar18 + 0x7c8);
    func_0x00010a3020b0(lVar18 + 0x7c8);
  }
  FUN_10ab9ce18((undefined1 *)((long)register0x00000008 + -0xb0));
  plVar16 = *(long **)((long)register0x00000008 + -0x88);
  if (plVar16 != (long *)0x0) {
    plVar15 = plVar16 + 1;
    do {
      lVar18 = *plVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
    return;
  }
  ___stack_chk_fail();
LAB_10a1a0394:
  FUN_10a0edfc4((undefined1 *)((long)register0x00000008 + -0x80));
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1a03a0);
  (*pcVar4)();
}



/* Entry: 10a19f82c; end: 10a1a0033;  */

void FUN_10a19f82c(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  long *plVar9;
  uint *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined **ppuVar14;
  long lVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  undefined1 auStack_520 [32];
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 uStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  uint uStack_4d0;
  undefined4 uStack_4cc;
  undefined3 uStack_4c8;
  undefined4 uStack_4c5;
  uint uStack_4c1;
  undefined4 uStack_4bd;
  undefined1 uStack_4b9;
  undefined8 uStack_4b8;
  uint uStack_4a8;
  long lStack_498;
  ulong uStack_490;
  undefined8 *puStack_480;
  undefined8 uStack_478;
  long lStack_470;
  long lStack_468;
  undefined1 *puStack_460;
  code *pcStack_458;
  undefined8 *puStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  long *plStack_428;
  long *plStack_420;
  uint auStack_418 [10];
  undefined8 uStack_3f0;
  long *plStack_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 uStack_3c0;
  long *plStack_3b0;
  long *plStack_3a8;
  undefined8 uStack_3a0;
  long *plStack_398;
  undefined8 uStack_390;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  uint uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
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
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_128;
  undefined1 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_2 = (long *)*param_2;
  (**(code **)(*param_2 + 0x30))();
  plVar19 = (long *)param_2[3];
  plVar20 = plVar19;
  func_0x00010a08f140();
  func_0x00010a08f1bc();
  plVar20 = (long *)*plVar20;
  lVar22 = plVar20[2];
  lVar15 = plVar20[3];
  __ZNSt3__115recursive_mutex4lockEv(lVar15);
  lStack_438 = lVar15;
  FUN_10a012fec(&plStack_380,*plVar20,lVar22);
  uStack_390 = 0;
  plStack_388 = (long *)0x0;
  uStack_3a0 = 0;
  plStack_398 = (long *)0x0;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f64161d,&UNK_10f641659,0x2fb,&UNK_10f6416c9);
  }
  FUN_10a30f97c();
  uStack_370 = *(undefined4 *)((long)param_1 + 0x3c);
  uStack_36c = *(undefined4 *)(param_1 + 9);
  FUN_10a30fb38(&plStack_3b0);
  plVar8 = plStack_3b0;
  plStack_430 = param_2;
  (**(code **)(*plStack_3b0 + 0x30))();
  plVar9 = plStack_380;
  (**(code **)(*plStack_380 + 0x40))();
  lVar22 = *plVar20;
  if ((*(byte *)(lVar22 + 0x5c) & 1) == 0) {
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_348 = 0;
    uStack_344 = 0;
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_33c = 0;
    uStack_368 = 0;
    uStack_364 = 0;
    uStack_370 = 0;
    uStack_36c = 0;
    uStack_358 = 0;
    uStack_354 = 0;
    uStack_360 = 0;
    uStack_35c = 0;
    uStack_230 = 0xffffffffffffffff;
    uStack_220 = 0;
    uStack_228 = 0;
    uStack_210 = 0;
    uStack_218 = 0;
    uStack_200 = 0;
    uStack_208 = 0;
    uStack_1f0 = 0;
    uStack_1f8 = 0;
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_198 = 0;
    puVar11 = param_1;
    FUN_10a1a3710(param_1,plVar8);
    FUN_10a15e154(&uStack_390,puVar11);
    func_0x000109296cdc(&uStack_3f0,*plVar20,uStack_390,plVar8);
    plStack_398 = plStack_3e8;
    uStack_3a0 = uStack_3f0;
    uStack_240 = 1;
    uStack_358 = 0;
    uStack_354 = 0x3f800000;
    uStack_360 = 0;
    uStack_35c = 0;
    uStack_368 = (undefined4)uStack_3f0;
    uStack_364 = (undefined4)((ulong)uStack_3f0 >> 0x20);
    uStack_370 = (undefined4)uStack_390;
    uStack_36c = (undefined4)((ulong)uStack_390 >> 0x20);
    (**(code **)(*plVar9 + 0x48))(plVar9,&uStack_370);
  }
  else {
    uStack_370 = 1;
    uStack_dc = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    _bzero((ulong)&uStack_370 | 4,0x28d);
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_98 = 0;
    uStack_88 = 0xffffffffffffffff;
    puVar10 = (uint *)0x113836510;
    FUN_10ad0621c();
    uStack_348 = (*puVar10 >> 2 ^ 0xffffffff) & 2;
    if (lStack_128 == 0) {
      uStack_328 = 0;
      uStack_33c = 0;
      uStack_350 = 0;
      uStack_34c = 0;
      uStack_358 = 0;
      uStack_354 = 0;
    }
    lStack_128 = 1;
    uStack_368 = SUB84(plVar8,0);
    uStack_364 = (undefined4)((ulong)plVar8 >> 0x20);
    uStack_360 = 0;
    uStack_35c = 0;
    uStack_344 = 1;
    uStack_340 = 2;
    uStack_330 = 0x3f80000000000000;
    uStack_338 = 0;
    func_0x00010a1a3a00(plStack_380,0,plVar8);
    (**(code **)(*plVar9 + 0x50))(plVar9,&uStack_370);
  }
  uStack_338 = 0;
  uStack_340 = 0x3f800000;
  uStack_33c = 0;
  uStack_328 = 0;
  uStack_330 = 0x3f80000000000000;
  uStack_318 = 0x3f800000;
  uStack_320 = 0;
  uStack_310 = 0;
  uStack_354 = 0;
  uStack_350 = 0x3f000000;
  uStack_35c = 0xbf000000;
  uStack_358 = 0;
  uStack_364 = 0;
  uStack_360 = 0;
  uStack_36c = 0;
  uStack_368 = 0;
  uStack_34c = 0x3f000000;
  uStack_348 = 0x3f800000;
  uStack_370 = 0x3f000000;
  uStack_344 = 0;
  auStack_418[0] = *(uint *)((long)param_1 + 0x54) & 0xc | -*(uint *)((long)param_1 + 0x54) & 3;
  auStack_418[1] = 0;
  auStack_418[2] = 0;
  auStack_418[5] = 0;
  auStack_418[6] = 0;
  auStack_418[3] = 0;
  auStack_418[4] = 0;
  auStack_418[7] = 0;
  auStack_418[8] = 1;
  auStack_418[9] = 0;
  FUN_10a19e730(&uStack_3f0,auStack_418,0,0);
  uStack_340 = (undefined4)uStack_3f0;
  uStack_33c = (undefined4)((ulong)uStack_3f0 >> 0x20);
  uStack_338 = 0;
  uStack_328 = 0;
  uStack_320 = uStack_3c0;
  uStack_318 = 0x3f800000;
  FUN_10a1a44c0(&uStack_3f0,*plVar19,&uStack_370);
  puVar11 = param_1;
  FUN_10a1a3208(param_1,*plVar20);
  puStack_448 = param_3;
  uStack_440 = param_4;
  FUN_10a1adf98();
  func_0x000109293c4c();
  func_0x000109294420();
  plVar24 = (long *)*puVar11;
  plVar12 = plVar24;
  (**(code **)(*plVar24 + 0x30))();
  if (((*(byte *)(plVar12 + 6) & 1) == 0) || (lVar15 = *plVar12, plVar12[1] == lVar15)) {
LAB_10a19ff98:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a19ff9c);
    (*pcVar5)();
  }
  lVar21 = puVar11[2];
  if (puVar11[3] == lVar21) goto LAB_10a19ff98;
  puVar11 = param_1;
  FUN_10a1a3208(param_1,*plVar20);
  FUN_10a1a43f0(&plStack_428,puVar11,lVar21);
  if ((undefined4 *)plVar12[1] == (undefined4 *)*plVar12) goto LAB_10a19ff98;
  uVar17 = *(undefined4 *)*plVar12;
  (**(code **)(*plVar9 + 0x78))(plVar9,plVar24);
  auStack_418[0] = 0;
  auStack_418[1] = 0;
  auStack_418[2] = (uint)param_1[6];
  auStack_418[3] = (uint)((ulong)param_1[6] >> 0x20);
  auStack_418[4] = 0;
  auStack_418[5] = 0x3f800000;
  (**(code **)(*plVar9 + 0x70))(plVar9,auStack_418);
  if ((*(byte *)(*plVar19 + 0x440) & 1) == 0) goto LAB_10a19ff98;
  lVar21 = plVar24[0xa0];
  puVar11 = (undefined8 *)(*plVar19 + 0x98);
  FUN_10a1559cc();
  (**(code **)(*plVar9 + 0x98))(plVar9,0,lVar21,*puVar11,0);
  if (*(long *)(lVar15 + 0x10) == *(long *)(lVar15 + 8)) goto LAB_10a19ff98;
  (**(code **)(*plStack_428 + 0x38))
            (plStack_428,*(undefined4 *)(*(long *)(lVar15 + 8) + 0x18),uStack_3f0,uStack_3e0,
             uStack_3dc,0);
  if (*(long *)(lVar15 + 0x40) == *(long *)(lVar15 + 0x38)) goto LAB_10a19ff98;
  (**(code **)(*plStack_428 + 0x48))
            (plStack_428,*(undefined4 *)(*(long *)(lVar15 + 0x38) + 0x18),plStack_430,5,0);
  plVar20 = plStack_428;
  if ((*(long *)(lVar15 + 0x70) == *(long *)(lVar15 + 0x68)) ||
     ((*(byte *)(*plVar19 + 0x440) & 1) == 0)) goto LAB_10a19ff98;
  uVar23 = (ulong)*(uint *)(*(long *)(lVar15 + 0x68) + 0x18);
  puVar11 = (undefined8 *)(*plVar19 + 0xe0);
  func_0x00010a155a18();
  (**(code **)(*plVar20 + 0x60))(plVar20,uVar23,*puVar11,0);
  (**(code **)(*plVar9 + 0x80))(plVar9,uVar17,plVar24[0xa0],plStack_428,0,0);
  (**(code **)(*plVar9 + 0xa8))(plVar9,4,0,1,0);
  (**(code **)(*plVar9 + 0x40))(plVar9);
  if (*(char *)(lVar22 + 0x5c) == '\x01') {
    FUN_10a1a42fc(plStack_380,0,plVar8);
  }
  uVar4 = uStack_440;
  puVar11 = puStack_448;
  if (plStack_420 != (long *)0x0) {
    plVar20 = plStack_420 + 1;
    do {
      lVar22 = *plVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_420 + 0x10))(plStack_420);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_420);
    }
  }
  if (plStack_3e8 != (long *)0x0) {
    plVar20 = plStack_3e8 + 1;
    do {
      lVar22 = *plVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_3e8 + 0x10))(plStack_3e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3e8);
    }
  }
  FUN_10a08e2f4(plStack_380);
  lVar15 = (long)(int)uVar4;
  iVar16 = 0;
  (**(code **)(*plStack_3b0 + 0x10))
            (plStack_3b0,puVar11,lVar15,0,*(undefined4 *)((long)param_1 + 0x34));
  lVar22 = lStack_438;
  if (plStack_3a8 != (long *)0x0) {
    plVar20 = plStack_3a8 + 1;
    do {
      lVar21 = *plVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = lVar21 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3a8);
    }
  }
  plVar20 = plStack_398;
  if (plStack_398 != (long *)0x0) {
    plVar19 = plStack_398 + 1;
    do {
      lVar21 = *plVar19;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar3) {
        *plVar19 = lVar21 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_398 + 0x10))(plStack_398);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  plVar20 = plStack_388;
  if (plStack_388 != (long *)0x0) {
    plVar19 = plStack_388 + 1;
    do {
      lVar21 = *plVar19;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar3) {
        *plVar19 = lVar21 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_388 + 0x10))(plStack_388);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  if (plStack_378 != (long *)0x0) {
    plVar20 = plStack_378 + 1;
    do {
      lVar21 = *plVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = lVar21 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_378 + 0x10))(plStack_378);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_378);
    }
  }
  lVar21 = lVar22;
  __ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a09db0c(&plStack_3b0);
  FUN_10a0eb918(&uStack_3a0);
  func_0x00010a0eb82c(&uStack_390);
  func_0x00010a054cfc(&plStack_380);
  __ZNSt3__115recursive_mutex6unlockEv(lStack_438);
  lVar13 = lVar21;
  __Unwind_Resume();
  uStack_478 = uVar4;
  lStack_468 = lVar22;
  pcStack_458 = FUN_10a1a0034;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_490 = uVar23;
  puStack_480 = param_1;
  lStack_470 = lVar21;
  puStack_460 = &stack0xfffffffffffffff0;
  FUN_10a1a30bc();
  FUN_10a30f97c();
  uStack_4d0 = *(uint *)(lVar13 + 0x7b4);
  uStack_4cc = *(undefined4 *)(lVar13 + 0x7c0);
  FUN_10a30fb38(&plStack_4e0);
  uStack_500 = 0;
  uStack_4f8 = 0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  if (*(char *)(lVar13 + 0x7c4) == '\x01') {
    ppuVar14 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    lVar22 = plStack_4e0[3];
    lVar21 = *(long *)(*ppuVar14 + 0x10);
    uStack_4d0 = 0xf635282;
    uStack_4cc = 1;
    uStack_4c8 = 0x2b;
    uStack_4c5 = 0;
    uStack_4c1 = uStack_4c1 & 0xffffff00;
    if (lVar21 == 0) goto LAB_10a1a0394;
    func_0x00010ab9ca70(&uStack_4d0,plStack_4e0,0);
    uVar17 = 0x8ca9;
    if (uStack_4a8 < 2) {
      uVar17 = 0x8d40;
    }
    FUN_10ab9cbe8(auStack_520,lVar21 + 0x50,uVar17,&uStack_4d0,0,lVar22,0);
    FUN_10ab9b224(&uStack_500,auStack_520);
    FUN_10ab9ce18(auStack_520);
  }
  else {
    *(undefined4 *)(lVar13 + 0x7d4) = 0x8d40;
    func_0x00010a3022a4(lVar13 + 0x7c8);
    plVar20 = plStack_4e0;
    uStack_4c5 = 0;
    uStack_4c1 = 0;
    uStack_4d0 = uStack_4d0 & 0xffffff;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4bd = 0;
    bVar3 = plStack_4e0 == (long *)0x0;
    if (bVar3) {
      uVar7 = 0;
      uVar6 = 0;
      uVar18 = 0;
      lVar22 = 0;
      uVar17 = 1;
    }
    else {
      plVar19 = plStack_4e0;
      (**(code **)(*plStack_4e0 + 0x50))();
      uVar6 = SUB84(plVar19,0);
      plVar19 = plVar20;
      (**(code **)(*plVar20 + 0x48))();
      uVar7 = SUB84(plVar19,0);
      lVar22 = plVar20[3];
      uVar17 = (undefined4)plVar20[4];
      uVar18 = -(*(byte *)((long)plVar20 + 0x54) >> 2 & 1) & 3;
    }
    uVar1 = *(uint *)(lVar13 + 0x7ec);
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    *(uint *)(lVar13 + 0x7ec) = uVar1;
    *(undefined4 *)(lVar13 + 0xbcc) = 0x8ce0;
    *(undefined4 *)(lVar13 + 0x820) = 0x8ce0;
    *(undefined4 *)(lVar13 + 0x7f0) = uVar6;
    *(undefined4 *)(lVar13 + 0x7f4) = uVar7;
    *(long *)(lVar13 + 0x7f8) = lVar22;
    *(bool *)(lVar13 + 0x800) = !bVar3;
    *(ulong *)(lVar13 + 0x810) = CONCAT44(uStack_4bd,uStack_4c1);
    *(ulong *)(lVar13 + 0x809) = CONCAT17((undefined1)uStack_4c1,CONCAT43(uStack_4c5,uStack_4c8));
    *(ulong *)(lVar13 + 0x801) = CONCAT44(uStack_4cc,uStack_4d0);
    *(undefined4 *)(lVar13 + 0x818) = uVar17;
    *(uint *)(lVar13 + 0x81c) = uVar18;
    FUN_10a3024c0(lVar13 + 0x7c8,lVar13 + 0x7f0);
    _glViewport(0,0,*(undefined4 *)(lVar13 + 0x7b4),*(undefined4 *)(lVar13 + 0x7c0));
  }
  _glClearColor(0,0,0,0);
  _glClear(0x4000);
  FUN_10a3014a0(lVar13 + 0x640);
  plVar20 = (long *)*puVar11;
  (**(code **)(*plVar20 + 0x48))();
  FUN_10a31a3c8(*(undefined8 *)(lVar13 + 0x730),lVar13 + 0x758,*(undefined4 *)(lVar13 + 0x748),
                plVar20);
  FUN_10a31a478(*(undefined8 *)(lVar13 + 0x780),*(undefined4 *)(lVar13 + 0x798),lVar13 + 0x14bc);
  FUN_10a31a478(*(undefined8 *)(lVar13 + 0x760),*(undefined4 *)(lVar13 + 0x778),lVar13 + 0x14dc);
  _glViewport(0,0,*(undefined4 *)(lVar13 + 0x7a8),*(undefined4 *)(lVar13 + 0x7ac));
  _glDrawArrays(6,0,4);
  FUN_10a301590();
  (**(code **)(*plStack_4e0 + 0x10))
            (plStack_4e0,lVar15,(long)iVar16,0,*(undefined4 *)(lVar13 + 0x7ac));
  if (*(char *)(lVar13 + 0x7c4) == '\x01') {
    uStack_4c8 = 0;
    uStack_4c5 = 0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4b8 = 0;
    uStack_4c1 = 0;
    uStack_4bd = 0;
    uStack_4b9 = 0;
    FUN_10ab9b224(&uStack_500,&uStack_4d0);
    FUN_10ab9ce18(&uStack_4d0);
  }
  else {
    func_0x00010a3022f0(lVar13 + 0x7c8);
    func_0x00010a302418(lVar13 + 0x7c8);
    func_0x00010a3020b0(lVar13 + 0x7c8);
  }
  FUN_10ab9ce18(&uStack_500);
  if (plStack_4d8 != (long *)0x0) {
    plVar20 = plStack_4d8 + 1;
    do {
      lVar22 = *plVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_4d8 + 0x10))(plStack_4d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_4d8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
    return;
  }
  ___stack_chk_fail();
LAB_10a1a0394:
  FUN_10a0edfc4(&uStack_4d0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1a03a0);
  (*pcVar5)();
}



/* Entry: 10a1a0034; end: 10a1a03cb;  */

void FUN_10a1a0034(long param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  long *plVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_d0 [32];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  long *plStack_90;
  long *plStack_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined3 uStack_78;
  undefined4 uStack_75;
  uint uStack_71;
  undefined4 uStack_6d;
  undefined1 uStack_69;
  undefined8 uStack_68;
  uint uStack_58;
  long lStack_48;
  long *plVar8;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1a30bc();
  FUN_10a30f97c();
  uStack_80 = *(uint *)(param_1 + 0x7b4);
  uStack_7c = *(undefined4 *)(param_1 + 0x7c0);
  FUN_10a30fb38(&plStack_90);
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(char *)(param_1 + 0x7c4) == '\x01') {
    ppuVar7 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    lVar12 = plStack_90[3];
    lVar13 = *(long *)(*ppuVar7 + 0x10);
    uStack_80 = 0xf635282;
    uStack_7c = 1;
    uStack_78 = 0x2b;
    uStack_75 = 0;
    uStack_71 = uStack_71 & 0xffffff00;
    if (lVar13 == 0) goto LAB_10a1a0394;
    func_0x00010ab9ca70(&uStack_80,plStack_90,0);
    uVar10 = 0x8ca9;
    if (uStack_58 < 2) {
      uVar10 = 0x8d40;
    }
    FUN_10ab9cbe8(auStack_d0,lVar13 + 0x50,uVar10,&uStack_80,0,lVar12,0);
    FUN_10ab9b224(&uStack_b0,auStack_d0);
    FUN_10ab9ce18(auStack_d0);
  }
  else {
    *(undefined4 *)(param_1 + 0x7d4) = 0x8d40;
    func_0x00010a3022a4(param_1 + 0x7c8);
    plVar9 = plStack_90;
    uStack_75 = 0;
    uStack_71 = 0;
    uStack_80 = uStack_80 & 0xffffff;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_6d = 0;
    bVar3 = plStack_90 == (long *)0x0;
    if (bVar3) {
      uVar6 = 0;
      uVar5 = 0;
      uVar11 = 0;
      lVar12 = 0;
      uVar10 = 1;
    }
    else {
      plVar8 = plStack_90;
      (**(code **)(*plStack_90 + 0x50))();
      uVar5 = SUB84(plVar8,0);
      plVar8 = plVar9;
      (**(code **)(*plVar9 + 0x48))();
      uVar6 = SUB84(plVar8,0);
      lVar12 = plVar9[3];
      uVar10 = (undefined4)plVar9[4];
      uVar11 = -(*(byte *)((long)plVar9 + 0x54) >> 2 & 1) & 3;
    }
    uVar1 = *(uint *)(param_1 + 0x7ec);
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    *(uint *)(param_1 + 0x7ec) = uVar1;
    *(undefined4 *)(param_1 + 0xbcc) = 0x8ce0;
    *(undefined4 *)(param_1 + 0x820) = 0x8ce0;
    *(undefined4 *)(param_1 + 0x7f0) = uVar5;
    *(undefined4 *)(param_1 + 0x7f4) = uVar6;
    *(long *)(param_1 + 0x7f8) = lVar12;
    *(bool *)(param_1 + 0x800) = !bVar3;
    *(ulong *)(param_1 + 0x810) = CONCAT44(uStack_6d,uStack_71);
    *(ulong *)(param_1 + 0x809) = CONCAT17((undefined1)uStack_71,CONCAT43(uStack_75,uStack_78));
    *(ulong *)(param_1 + 0x801) = CONCAT44(uStack_7c,uStack_80);
    *(undefined4 *)(param_1 + 0x818) = uVar10;
    *(uint *)(param_1 + 0x81c) = uVar11;
    FUN_10a3024c0(param_1 + 0x7c8,param_1 + 0x7f0);
    _glViewport(0,0,*(undefined4 *)(param_1 + 0x7b4),*(undefined4 *)(param_1 + 0x7c0));
  }
  _glClearColor(0,0,0,0);
  _glClear(0x4000);
  FUN_10a3014a0(param_1 + 0x640);
  plVar9 = (long *)*param_2;
  (**(code **)(*plVar9 + 0x48))();
  FUN_10a31a3c8(*(undefined8 *)(param_1 + 0x730),param_1 + 0x758,*(undefined4 *)(param_1 + 0x748),
                plVar9);
  FUN_10a31a478(*(undefined8 *)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x798),param_1 + 0x14bc);
  FUN_10a31a478(*(undefined8 *)(param_1 + 0x760),*(undefined4 *)(param_1 + 0x778),param_1 + 0x14dc);
  _glViewport(0,0,*(undefined4 *)(param_1 + 0x7a8),*(undefined4 *)(param_1 + 0x7ac));
  _glDrawArrays(6,0,4);
  FUN_10a301590();
  (**(code **)(*plStack_90 + 0x10))
            (plStack_90,param_3,(long)param_4,0,*(undefined4 *)(param_1 + 0x7ac));
  if (*(char *)(param_1 + 0x7c4) == '\x01') {
    uStack_78 = 0;
    uStack_75 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_68 = 0;
    uStack_71 = 0;
    uStack_6d = 0;
    uStack_69 = 0;
    FUN_10ab9b224(&uStack_b0,&uStack_80);
    FUN_10ab9ce18(&uStack_80);
  }
  else {
    func_0x00010a3022f0(param_1 + 0x7c8);
    func_0x00010a302418(param_1 + 0x7c8);
    func_0x00010a3020b0(param_1 + 0x7c8);
  }
  FUN_10ab9ce18(&uStack_b0);
  if (plStack_88 != (long *)0x0) {
    plVar9 = plStack_88 + 1;
    do {
      lVar12 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_10a1a0394:
  FUN_10a0edfc4(&uStack_80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1a03a0);
  (*pcVar4)();
}



/* Entry: 10a1a03cc; end: 10a1a03e3;  */

void FUN_10a1a03cc(long *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,int param_5,
                  uint param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  long *plVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x19;
  long unaff_x20;
  long lVar15;
  undefined8 *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long *plVar16;
  long *plVar17;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 *puStack_410;
  ulong uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  ulong uStack_3d0;
  uint uStack_3c8;
  int iStack_3c4;
  long lStack_3c0;
  undefined8 *puStack_3b8;
  ulong *puStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  long *plStack_398;
  undefined4 uStack_390;
  uint uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  ulong uStack_380;
  long *plStack_378;
  undefined8 uStack_370;
  long *plStack_368;
  undefined8 uStack_360;
  ulong uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  uint uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 uStack_328;
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
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_118;
  undefined1 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar7 = *param_1;
  if (lVar7 == 0) {
    lVar15 = param_1[1];
  }
  else {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar8 = (long *)*param_2;
    puStack_3b8 = param_4;
    (**(code **)(*plVar8 + 0x38))();
    puVar9 = *(undefined8 **)(*plVar8 + 0x18);
    func_0x00010a08f140();
    plVar17 = (long *)*puVar9;
    unaff_x21 = (undefined8 *)plVar17[2];
    lVar15 = plVar17[3];
    __ZNSt3__115recursive_mutex4lockEv(lVar15);
    lStack_3c0 = lVar15;
    FUN_10a012fec(&plStack_3a0,*plVar17,unaff_x21);
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f64161d,&UNK_10f641731,0x3d9,&UNK_10f6416fd);
    }
    FUN_10a30f97c();
    uStack_360._0_4_ = *(undefined4 *)(lVar7 + 0x3c);
    uStack_360._4_4_ = *(undefined4 *)(lVar7 + 0x48);
    iStack_3c4 = param_5;
    FUN_10a30fb38(&puStack_3b0);
    puVar10 = puStack_3b0;
    uStack_3d0 = param_3;
    uStack_3c8 = param_6;
    (**(code **)(*puStack_3b0 + 0x38))();
    iVar2 = *(int *)((long)puStack_3b0 + 0x4c);
    plVar11 = plStack_3a0;
    (**(code **)(*plStack_3a0 + 0x40))();
    uStack_370 = 0;
    plStack_368 = (long *)0x0;
    uStack_380 = 0;
    plStack_378 = (long *)0x0;
    lVar15 = *plVar17;
    if ((*(byte *)(lVar15 + 0x5c) & 1) == 0) {
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_338 = 0;
      uStack_334 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_32c = 0;
      uStack_220 = 0xffffffffffffffff;
      uStack_210 = 0;
      uStack_218 = 0;
      uStack_200 = 0;
      uStack_208 = 0;
      uStack_1f0 = 0;
      uStack_1f8 = 0;
      uStack_1e0 = 0;
      uStack_1e8 = 0;
      uStack_1d0 = 0;
      uStack_1d8 = 0;
      uStack_1c0 = 0;
      uStack_1c8 = 0;
      uStack_1b0 = 0;
      uStack_1b8 = 0;
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_190 = 0;
      uStack_198 = 0;
      uStack_188 = 0;
      lVar13 = lVar7;
      FUN_10a1a3710(lVar7,*puVar10);
      FUN_10a15e154(&uStack_370,lVar13);
      func_0x000109296cdc(&uStack_390,*plVar17,uStack_370,*puVar10);
      uStack_380 = CONCAT44(uStack_38c,uStack_390);
      plVar16 = (long *)CONCAT44(uStack_384,uStack_388);
      uStack_230 = 1;
      uStack_348 = 0x3f80000000000000;
      uStack_350 = 0;
      uStack_360 = uStack_370;
      plStack_378 = plVar16;
      uStack_358 = uStack_380;
      (**(code **)(*plVar11 + 0x48))(plVar11,&uStack_360);
    }
    else {
      uStack_360 = CONCAT44(uStack_360._4_4_,1);
      uStack_cc = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      _bzero((ulong)&uStack_360 | 4,0x28d);
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_88 = 0;
      uStack_78 = 0xffffffffffffffff;
      puVar12 = (uint *)0x113836510;
      FUN_10ad0621c();
      uStack_338 = (*puVar12 >> 2 ^ 0xffffffff) & 2;
      uStack_328 = 0;
      uStack_32c = 0;
      uStack_340 = 0;
      uStack_348 = 0;
      uStack_318 = 0;
      uStack_118 = 1;
      uStack_358 = *puVar10;
      uStack_350 = 0;
      uStack_334 = 1;
      uStack_330 = 2;
      uStack_320 = 0x3f80000000000000;
      func_0x00010a1a3a00(plStack_3a0,0);
      (**(code **)(*plVar11 + 0x50))(plVar11,&uStack_360);
      plVar16 = (long *)0x0;
    }
    FUN_10a1a3b14(lVar7,plVar11,plVar8,puVar10,iVar2 == 5,puStack_3b8 != (undefined8 *)0x0,0);
    (**(code **)(*plVar11 + 0x40))(plVar11);
    if (*(char *)(lVar15 + 0x5c) == '\x01') {
      FUN_10a1a42fc(plStack_3a0,0,*puVar10);
    }
    if (plVar16 != (long *)0x0) {
      plVar8 = plVar16 + 1;
      do {
        lVar15 = *plVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar8 = plStack_368;
    if (plStack_368 != (long *)0x0) {
      plVar11 = plStack_368 + 1;
      do {
        lVar15 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_368 + 0x10))(plStack_368);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    FUN_10a08e2f4(plStack_3a0);
    uVar1 = *(uint *)(lVar7 + 0x40);
    uStack_370 = *(undefined8 *)(lVar7 + 0x3c);
    uVar4 = *(int *)(lVar7 + 0x3c) << 2;
    unaff_x24 = (ulong)uVar4;
    if (uStack_3c8 != 0xffffffff) {
      uVar4 = uStack_3c8;
    }
    uStack_360 = 0;
    uStack_358 = uStack_358 & 0xffffffff00000000;
    plStack_368 = (long *)CONCAT44(plStack_368._4_4_,1);
    lVar15 = *plVar17;
    puVar10 = puStack_3b0;
    (**(code **)(*puStack_3b0 + 0x38))();
    param_3 = *puVar10;
    param_4 = &uStack_360;
    param_5 = (int)&uStack_370;
    param_2 = unaff_x21;
    uVar14 = uStack_3d0;
    FUN_10a156edc(lVar15,unaff_x21,param_3);
    param_6 = (uint)uVar14;
    if (puStack_3b8 != (undefined8 *)0x0) {
      uVar1 = *(uint *)(lVar7 + 0x44);
      uStack_390 = *(undefined4 *)(lVar7 + 0x3c);
      uStack_380 = (ulong)*(uint *)(lVar7 + 0x40) << 0x20;
      plStack_378 = (long *)((ulong)plStack_378 & 0xffffffff00000000);
      uStack_388 = 1;
      lVar15 = *plVar17;
      uStack_38c = uVar1;
      (**(code **)(*puStack_3b0 + 0x38))();
      uStack_408 = (ulong)(uVar1 * uVar4);
      param_4 = (undefined8 *)*puStack_3b0;
      uStack_3e0 = 0;
      uStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0x500000005;
      puStack_410 = puStack_3b8;
      param_6 = (uint)&uStack_380;
      param_3 = 0;
      param_5 = 0;
      param_2 = unaff_x21;
      func_0x0001092959a0(lVar15,unaff_x21,0);
    }
    unaff_x20 = lStack_3c0;
    unaff_x23 = (ulong)uVar1;
    if (plStack_3a8 != (long *)0x0) {
      plVar8 = plStack_3a8 + 1;
      do {
        lVar15 = *plVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3a8);
      }
    }
    if (plStack_398 != (long *)0x0) {
      plVar8 = plStack_398 + 1;
      do {
        lVar15 = *plVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_398 + 0x10))(plStack_398);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_398);
      }
    }
    unaff_x19 = unaff_x20;
    __ZNSt3__115recursive_mutex6unlockEv();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
    FUN_10a0eb918(&uStack_380);
    func_0x00010a0eb82c(&uStack_370);
    func_0x00010a09db0c(&puStack_3b0);
    func_0x00010a054cfc(&plStack_3a0);
    __ZNSt3__115recursive_mutex6unlockEv(lStack_3c0);
    unaff_x30 = FUN_10a1a0968;
    lVar15 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)&puStack_410;
    unaff_x22 = lVar7;
  }
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_10a1a30bc();
  FUN_10a30f97c();
  uVar3 = *(undefined4 *)(lVar15 + 0x7c0);
  *(undefined4 *)((long)register0x00000008 + -0x58) = *(undefined4 *)(lVar15 + 0x7b4);
  *(undefined4 *)((long)register0x00000008 + -0x54) = uVar3;
  FUN_10a30fb38((undefined1 *)((long)register0x00000008 + -0x50));
  FUN_10a19f3ac(lVar15,param_2,(undefined1 *)((long)register0x00000008 + -0x50),
                param_4 != (undefined8 *)0x0);
  if (param_5 == -1) {
    param_5 = *(int *)(lVar15 + 0x7b4) << 2;
  }
  if (param_6 == 0xffffffff) {
    param_6 = *(int *)(lVar15 + 0x7b4) << 2;
  }
  (**(code **)(**(long **)((long)register0x00000008 + -0x50) + 0x10))
            (*(long **)((long)register0x00000008 + -0x50),param_3,(long)param_5,0,
             *(undefined4 *)(lVar15 + 0x7b8));
  if (param_4 != (undefined8 *)0x0) {
    (**(code **)(**(long **)((long)register0x00000008 + -0x50) + 0x10))
              (*(long **)((long)register0x00000008 + -0x50),param_4,(long)(int)param_6,
               *(undefined4 *)(lVar15 + 0x7b8),*(undefined4 *)(lVar15 + 0x7bc));
  }
  plVar8 = *(long **)((long)register0x00000008 + -0x48);
  if (plVar8 != (long *)0x0) {
    plVar17 = plVar8 + 1;
    do {
      lVar7 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return;
}



/* Entry: 10a1a03e4; end: 10a1a0967;  */

void FUN_10a1a03e4(long param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                  undefined4 param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  long *plVar20;
  long *plVar21;
  long *plStack_460;
  long *plStack_458;
  ulong uStack_450;
  ulong uStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  undefined1 *puStack_420;
  code *pcStack_418;
  long lStack_410;
  ulong uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d0;
  uint uStack_3c8;
  undefined4 uStack_3c4;
  long lStack_3c0;
  long lStack_3b8;
  ulong *puStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  long *plStack_398;
  undefined4 uStack_390;
  uint uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  ulong uStack_380;
  long *plStack_378;
  undefined8 uStack_370;
  long *plStack_368;
  undefined8 uStack_360;
  ulong uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  uint uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 uStack_328;
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
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_118;
  undefined1 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)*param_2;
  lStack_3b8 = param_4;
  (**(code **)(*plVar6 + 0x38))();
  puVar7 = *(undefined8 **)(*plVar6 + 0x18);
  func_0x00010a08f140();
  plVar21 = (long *)*puVar7;
  lVar15 = plVar21[2];
  lVar18 = plVar21[3];
  __ZNSt3__115recursive_mutex4lockEv(lVar18);
  lStack_3c0 = lVar18;
  FUN_10a012fec(&plStack_3a0,*plVar21,lVar15);
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f64161d,&UNK_10f641731,0x3d9,&UNK_10f6416fd);
  }
  FUN_10a30f97c();
  uStack_360._0_4_ = *(undefined4 *)(param_1 + 0x3c);
  uStack_360._4_4_ = *(undefined4 *)(param_1 + 0x48);
  uStack_3c4 = param_5;
  FUN_10a30fb38(&puStack_3b0);
  puVar8 = puStack_3b0;
  uStack_3d0 = param_3;
  uStack_3c8 = param_6;
  (**(code **)(*puStack_3b0 + 0x38))();
  iVar19 = *(int *)((long)puStack_3b0 + 0x4c);
  plVar9 = plStack_3a0;
  (**(code **)(*plStack_3a0 + 0x40))();
  uStack_370 = 0;
  plStack_368 = (long *)0x0;
  uStack_380 = 0;
  plStack_378 = (long *)0x0;
  lVar18 = *plVar21;
  if ((*(byte *)(lVar18 + 0x5c) & 1) == 0) {
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_32c = 0;
    uStack_220 = 0xffffffffffffffff;
    uStack_210 = 0;
    uStack_218 = 0;
    uStack_200 = 0;
    uStack_208 = 0;
    uStack_1f0 = 0;
    uStack_1f8 = 0;
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_188 = 0;
    lVar16 = param_1;
    FUN_10a1a3710(param_1,*puVar8);
    FUN_10a15e154(&uStack_370,lVar16);
    func_0x000109296cdc(&uStack_390,*plVar21,uStack_370,*puVar8);
    uStack_380 = CONCAT44(uStack_38c,uStack_390);
    plVar20 = (long *)CONCAT44(uStack_384,uStack_388);
    uStack_230 = 1;
    uStack_348 = 0x3f80000000000000;
    uStack_350 = 0;
    uStack_360 = uStack_370;
    plStack_378 = plVar20;
    uStack_358 = uStack_380;
    (**(code **)(*plVar9 + 0x48))(plVar9,&uStack_360);
  }
  else {
    uStack_360 = CONCAT44(uStack_360._4_4_,1);
    uStack_cc = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    _bzero((ulong)&uStack_360 | 4,0x28d);
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_88 = 0;
    uStack_78 = 0xffffffffffffffff;
    puVar10 = (uint *)0x113836510;
    FUN_10ad0621c();
    uStack_338 = (*puVar10 >> 2 ^ 0xffffffff) & 2;
    uStack_328 = 0;
    uStack_32c = 0;
    uStack_340 = 0;
    uStack_348 = 0;
    uStack_318 = 0;
    uStack_118 = 1;
    uStack_358 = *puVar8;
    uStack_350 = 0;
    uStack_334 = 1;
    uStack_330 = 2;
    uStack_320 = 0x3f80000000000000;
    func_0x00010a1a3a00(plStack_3a0,0);
    (**(code **)(*plVar9 + 0x50))(plVar9,&uStack_360);
    plVar20 = (long *)0x0;
  }
  FUN_10a1a3b14(param_1,plVar9,plVar6,puVar8,iVar19 == 5,lStack_3b8 != 0,0);
  (**(code **)(*plVar9 + 0x40))(plVar9);
  if (*(char *)(lVar18 + 0x5c) == '\x01') {
    FUN_10a1a42fc(plStack_3a0,0,*puVar8);
  }
  if (plVar20 != (long *)0x0) {
    plVar6 = plVar20 + 1;
    do {
      lVar18 = *plVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  plVar6 = plStack_368;
  if (plStack_368 != (long *)0x0) {
    plVar9 = plStack_368 + 1;
    do {
      lVar18 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_368 + 0x10))(plStack_368);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a08e2f4(plStack_3a0);
  uVar2 = *(uint *)(param_1 + 0x40);
  uStack_370 = *(undefined8 *)(param_1 + 0x3c);
  uVar3 = *(int *)(param_1 + 0x3c) << 2;
  uVar1 = uVar3;
  if (uStack_3c8 != 0xffffffff) {
    uVar1 = uStack_3c8;
  }
  uStack_360 = 0;
  uStack_358 = uStack_358 & 0xffffffff00000000;
  plStack_368 = (long *)CONCAT44(plStack_368._4_4_,1);
  lVar16 = *plVar21;
  puVar8 = puStack_3b0;
  (**(code **)(*puStack_3b0 + 0x38))();
  uVar12 = *puVar8;
  puVar7 = &uStack_360;
  iVar19 = (int)&uStack_370;
  lVar18 = lVar15;
  uVar13 = uStack_3d0;
  FUN_10a156edc(lVar16,lVar15,uVar12);
  iVar17 = (int)uVar13;
  if (lStack_3b8 != 0) {
    uVar2 = *(uint *)(param_1 + 0x44);
    uStack_390 = *(undefined4 *)(param_1 + 0x3c);
    uStack_380 = (ulong)*(uint *)(param_1 + 0x40) << 0x20;
    plStack_378 = (long *)((ulong)plStack_378 & 0xffffffff00000000);
    uStack_388 = 1;
    lVar16 = *plVar21;
    uStack_38c = uVar2;
    (**(code **)(*puStack_3b0 + 0x38))();
    uStack_408 = (ulong)(uVar2 * uVar1);
    puVar7 = (undefined8 *)*puStack_3b0;
    uStack_3e0 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0x500000005;
    lStack_410 = lStack_3b8;
    iVar17 = (int)&uStack_380;
    uVar12 = 0;
    iVar19 = 0;
    lVar18 = lVar15;
    func_0x0001092959a0(lVar16,lVar15,0);
  }
  lVar16 = lStack_3c0;
  if (plStack_3a8 != (long *)0x0) {
    plVar6 = plStack_3a8 + 1;
    do {
      lVar14 = *plVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3a8);
    }
  }
  if (plStack_398 != (long *)0x0) {
    plVar6 = plStack_398 + 1;
    do {
      lVar14 = *plVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_398 + 0x10))(plStack_398);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_398);
    }
  }
  lVar14 = lVar16;
  __ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a0eb918(&uStack_380);
  func_0x00010a0eb82c(&uStack_370);
  func_0x00010a09db0c(&puStack_3b0);
  func_0x00010a054cfc(&plStack_3a0);
  __ZNSt3__115recursive_mutex6unlockEv(lStack_3c0);
  lVar11 = lVar14;
  __Unwind_Resume();
  lStack_430 = lVar16;
  pcStack_418 = FUN_10a1a0968;
  uStack_450 = (ulong)uVar3;
  uStack_448 = (ulong)uVar2;
  lStack_440 = param_1;
  lStack_438 = lVar15;
  lStack_428 = lVar14;
  puStack_420 = &stack0xfffffffffffffff0;
  FUN_10a1a30bc();
  FUN_10a30f97c();
  FUN_10a30fb38(&plStack_460);
  FUN_10a19f3ac(lVar11,lVar18,&plStack_460,puVar7 != (undefined8 *)0x0);
  if (iVar19 == -1) {
    iVar19 = *(int *)(lVar11 + 0x7b4) << 2;
  }
  if (iVar17 == -1) {
    iVar17 = *(int *)(lVar11 + 0x7b4) << 2;
  }
  (**(code **)(*plStack_460 + 0x10))
            (plStack_460,uVar12,(long)iVar19,0,*(undefined4 *)(lVar11 + 0x7b8));
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)(*plStack_460 + 0x10))
              (plStack_460,puVar7,(long)iVar17,*(undefined4 *)(lVar11 + 0x7b8),
               *(undefined4 *)(lVar11 + 0x7bc));
  }
  if (plStack_458 != (long *)0x0) {
    plVar6 = plStack_458 + 1;
    do {
      lVar15 = *plVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_458 + 0x10))(plStack_458);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_458);
    }
  }
  return;
}



/* Entry: 10a1a0968; end: 10a1a0aab;  */

void FUN_10a1a0968(long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5,
                  int param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_50;
  long *plStack_48;
  
  FUN_10a1a30bc();
  FUN_10a30f97c();
  FUN_10a30fb38(&plStack_50);
  FUN_10a19f3ac(param_1,param_2,&plStack_50,param_4 != 0);
  if (param_5 == -1) {
    param_5 = *(int *)(param_1 + 0x7b4) << 2;
  }
  if (param_6 == -1) {
    param_6 = *(int *)(param_1 + 0x7b4) << 2;
  }
  (**(code **)(*plStack_50 + 0x10))
            (plStack_50,param_3,(long)param_5,0,*(undefined4 *)(param_1 + 0x7b8));
  if (param_4 != 0) {
    (**(code **)(*plStack_50 + 0x10))
              (plStack_50,param_4,(long)param_6,*(undefined4 *)(param_1 + 0x7b8),
               *(undefined4 *)(param_1 + 0x7bc));
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  return;
}



/* Entry: 10a1a0aac; end: 10a1a0ac3;  */

void FUN_10a1a0aac(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_10a19e730(&uStack_70,param_5,0,1);
    uStack_98 = uStack_70;
    uStack_90 = uStack_68;
    uStack_8c = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_40;
    uStack_88 = uStack_5c;
    FUN_10a1a0bfc(lVar1,param_2,param_3,param_4,&uStack_98);
    return;
  }
  lVar1 = param_1[1];
  FUN_10a19e730(&uStack_70,param_5,0,1);
  uStack_98 = uStack_70;
  uStack_90 = uStack_68;
  uStack_8c = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_40;
  uStack_88 = uStack_5c;
  FUN_10a1a1b04(lVar1,param_2,param_3,param_4,&uStack_98);
  return;
}



/* Entry: 10a1a0ac4; end: 10a1a0be3;  */

void FUN_10a1a0ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  
  FUN_10a19e730(&uStack_70,param_5,0,1);
  uStack_98 = uStack_70;
  uStack_90 = uStack_68;
  uStack_8c = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_40;
  uStack_88 = uStack_5c;
  FUN_10a1a0bfc(param_1,param_2,param_3,param_4,&uStack_98);
  return;
}



/* Entry: 10a1a0be4; end: 10a1a0bfb;  */

void FUN_10a1a0be4(undefined8 *param_1,long *******param_2,long ******param_3,long *******param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *******ppppppplVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  int iVar10;
  long *******ppppppplVar11;
  long *****ppppplVar12;
  long ******pppppplVar13;
  long ******pppppplVar14;
  long ****pppplVar15;
  long ****pppplVar16;
  byte *pbVar17;
  undefined **ppuVar18;
  long ***ppplVar19;
  long *******ppppppplVar20;
  uint *puVar21;
  long *******ppppppplVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  long lVar26;
  long ******pppppplVar27;
  long *****ppppplVar28;
  undefined8 extraout_x9;
  int iVar29;
  long *******unaff_x19;
  long ******unaff_x20;
  long ****pppplVar30;
  ulong unaff_x21;
  undefined *puVar31;
  long *******unaff_x22;
  long *******unaff_x23;
  long *******unaff_x24;
  long *******unaff_x25;
  long *******unaff_x26;
  long *****unaff_x27;
  long **pplVar32;
  long ***unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar33;
  ulong uVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  ulong uVar38;
  float fVar39;
  float fVar41;
  ulong uVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auStack_d98 [2280];
  undefined1 auStack_4b0 [8];
  long ******pppppplStack_4a8;
  long *****ppppplStack_4a0;
  uint uStack_494;
  long ******pppppplStack_490;
  long ******pppppplStack_488;
  long ******pppppplStack_480;
  long **pplStack_478;
  long *****ppppplStack_470;
  long **pplStack_468;
  long ******pppppplStack_460;
  long *plStack_458;
  long ******pppppplStack_450;
  long *****ppppplStack_448;
  undefined8 uStack_440;
  uint uStack_438;
  undefined4 uStack_434;
  undefined8 uStack_430;
  uint uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  ulong uStack_414;
  undefined4 uStack_40c;
  undefined8 uStack_408;
  long ******pppppplStack_400;
  long ******pppppplStack_3f8;
  long ******pppppplStack_3f0;
  long ******pppppplStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  uint uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
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
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_1a8;
  undefined1 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined1 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  float fStack_d8;
  undefined4 uStack_d4;
  long ******pppppplStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_88;
  
  ppppppplVar11 = (long *******)*param_1;
  if (ppppppplVar11 == (long *******)0x0) {
    ppppppplVar20 = (long *******)param_1[1];
  }
  else {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppplVar12 = *param_3;
    (*(code *)(*ppppplVar12)[6])();
    pppplVar30 = ppppplVar12[3];
    pppppplVar13 = *param_2;
    (*(code *)(*pppppplVar13)[7])();
    pppppplVar14 = *param_4;
    pppppplStack_490 = (long ******)param_4;
    ppppplStack_470 = (long *****)pppppplVar13;
    if (pppppplVar14 == (long ******)0x0) {
      pppppplVar14 = (long ******)0x0;
    }
    else {
      (*(code *)(*pppppplVar14)[6])();
    }
    pppplVar15 = pppplVar30;
    func_0x00010a08f140();
    pppplVar16 = pppplVar30;
    func_0x00010a08f1bc();
    unaff_x28 = *pppplVar15;
    pppppplStack_400 = (long ******)0x0;
    pppppplStack_3f8 = (long ******)0x0;
    pbVar17 = (byte *)0x113836510;
    FUN_10ad0621c();
    if ((*pbVar17 >> 5 & 1) == 0) {
LAB_10a1a0d3c:
      pppppplStack_480 = (long ******)0x0;
LAB_10a1a0d40:
      unaff_x22 = (long *******)0x0;
LAB_10a1a0d44:
      pplVar32 = unaff_x28[2];
      pppppplStack_4a8 = (long ******)unaff_x28[3];
      __ZNSt3__115recursive_mutex4lockEv();
      FUN_10a012fec(&pppppplStack_3f0,*unaff_x28,pplVar32);
      pppppplVar27 = pppppplStack_3e8;
      pppppplStack_400 = pppppplStack_3f0;
      pppppplVar13 = pppppplStack_3f8;
      pppppplStack_3f0 = (long ******)0x0;
      pppppplStack_3e8 = (long ******)0x0;
      pppppplStack_3f8 = pppppplVar27;
      if ((long *******)pppppplVar13 != (long *******)0x0) {
        ppppppplVar20 = (long *******)(pppppplVar13 + 1);
        do {
          pppppplVar27 = *ppppppplVar20;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppplVar20,0x10);
          if (bVar6) {
            *ppppppplVar20 = (long ******)((long)pppppplVar27 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppppplVar27 == (long ******)0x0) {
          (*(code *)(*pppppplVar13)[2])(pppppplVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar13);
        }
      }
      pppppplVar13 = pppppplStack_3e8;
      if ((long *******)pppppplStack_3e8 != (long *******)0x0) {
        ppppppplVar20 = (long *******)(pppppplStack_3e8 + 1);
        do {
          pppppplVar27 = *ppppppplVar20;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppplVar20,0x10);
          if (bVar6) {
            *ppppppplVar20 = (long ******)((long)pppppplVar27 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppppplVar27 == (long ******)0x0) {
          (*(code *)(*pppppplStack_3e8)[2])(pppppplStack_3e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar13);
        }
      }
      unaff_x24 = (long *******)pppppplStack_400;
      (*(code *)(*pppppplStack_400)[8])();
      uStack_494 = 1;
    }
    else {
      ppuVar18 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      puVar31 = *ppuVar18;
      if (puVar31 == (undefined *)0x0) goto LAB_10a1a0d3c;
      unaff_x22 = (long *******)(puVar31 + 0x18);
      pppppplStack_480 = (long ******)unaff_x22;
      if ((puVar31[0x139] != '\x01') ||
         (ppppppplVar20 = unaff_x22, FUN_10a1a38ec(unaff_x22,pppplVar30,&UNK_10f6417ae,0x1137ea811),
         (int)ppppppplVar20 == 0)) goto LAB_10a1a0d40;
      FUN_10a08d3ec(unaff_x22,unaff_x28 + 2);
      unaff_x24 = unaff_x22;
      func_0x00010a08dfb4();
      if ((puVar31[0xc0] & 1) == 0) goto LAB_10a1a1a24;
      if (unaff_x24 == (long *******)0x0) goto LAB_10a1a0d44;
      uStack_494 = 0;
    }
    uStack_c8 = 0;
    pppppplStack_d0 = (long ******)0x3f800000;
    uStack_b8 = 0;
    uStack_c0 = 0x3f80000000000000;
    uStack_a8 = 0x3f800000;
    uStack_b0 = 0;
    uStack_a0 = 0;
    fVar33 = *(float *)(param_5 + 1);
    fVar36 = *(float *)((long)param_5 + 0x14);
    fStack_d8 = *(float *)(param_5 + 4);
    fVar42 = fVar33 + fVar36 * 0.0 + fStack_d8 * 0.0;
    fVar45 = (fVar33 * 0.0 - fVar36) + fStack_d8 * 0.0;
    fStack_d8 = fVar36 + fVar33 * 0.0 + fStack_d8;
    fStack_f8 = fVar45 * 0.0 + fVar42 * 0.5 + fStack_d8 * 0.0;
    fVar45 = fVar45 * 0.5;
    fStack_e8 = fVar45 + fVar42 * 0.0 + fStack_d8 * 0.0;
    fStack_d8 = fStack_d8 + fVar45 + fVar42 * 0.5;
    uStack_f4 = 0;
    uStack_e4 = 0;
    fVar39 = (float)*(undefined8 *)((long)param_5 + 0xc);
    fVar41 = (float)((ulong)*(undefined8 *)((long)param_5 + 0xc) >> 0x20);
    fVar33 = (float)*param_5;
    fVar42 = (float)((ulong)*param_5 >> 0x20);
    fVar36 = (float)param_5[3];
    fVar45 = (float)((ulong)param_5[3] >> 0x20);
    fVar43 = fVar33 + fVar39 * 0.0 + fVar36 * 0.0;
    fVar44 = fVar42 + fVar41 * 0.0 + fVar45 * 0.0;
    fVar46 = -fVar39 + fVar33 * 0.0 + fVar36 * 0.0;
    fVar47 = -fVar41 + fVar42 * 0.0 + fVar45 * 0.0;
    fVar36 = fVar39 + fVar33 * 0.0 + fVar36;
    fVar45 = fVar41 + fVar42 * 0.0 + fVar45;
    fVar33 = fVar46 * 0.5;
    fVar42 = fVar47 * 0.5;
    uStack_e0 = CONCAT44(fVar45 + fVar42 + fVar44 * 0.5,fVar36 + fVar33 + fVar43 * 0.5);
    uStack_100 = CONCAT44(fVar47 * 0.0 + fVar44 * 0.5 + fVar45 * 0.0,
                          fVar46 * 0.0 + fVar43 * 0.5 + fVar36 * 0.0);
    uStack_f0 = CONCAT44(fVar42 + fVar44 * 0.0 + fVar45 * 0.0,fVar33 + fVar43 * 0.0 + fVar36 * 0.0);
    uStack_d4 = 0;
    uStack_428 = *(uint *)((long)ppppppplVar11 + 0x54) & 0xc |
                 -*(uint *)((long)ppppppplVar11 + 0x54) & 3;
    uStack_424 = 0;
    uStack_420 = 0;
    uStack_414 = 0;
    uStack_41c = 0;
    uStack_418 = 0;
    uStack_40c = 0;
    uStack_408 = 1;
    FUN_10a19e730(&pppppplStack_3f0,&uStack_428,0,0);
    pppppplStack_d0 = pppppplStack_3f0;
    uStack_c8 = 0;
    uStack_c0 = uStack_3e0;
    uStack_b8 = 0;
    uStack_a8 = 0x3f800000;
    FUN_10a1a44c0(&uStack_428,*pppplVar16,&uStack_100);
    if (((ulong)(*pppplVar16)[0x88] & 1) == 0) {
LAB_10a1a1a24:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1a1a28);
      (*pcVar8)();
    }
    ppplVar19 = *pppplVar16 + 0x1c;
    func_0x00010a155a18();
    pplStack_478 = (long **)ppplVar19;
    if (((ulong)(*pppplVar16)[0x88] & 1) == 0) goto LAB_10a1a1a24;
    ppplVar19 = *pppplVar16 + 0x13;
    func_0x00010a1559cc();
    pplStack_468 = (long **)ppplVar19;
    if (unaff_x22 != (long *******)0x0) {
      FUN_10a097928(unaff_x22,&uStack_428);
      FUN_10a097890(unaff_x22,pplStack_478);
      FUN_10a097630(unaff_x22,pplStack_468);
      FUN_10a0977f8(unaff_x22,ppppplStack_470);
    }
    uStack_438 = *(uint *)(ppppppplVar11 + 6);
    uStack_434 = *(undefined4 *)(ppppppplVar11 + 8);
    uStack_440 = 0;
    uStack_430 = 0x3f80000000000000;
    ppppppplVar20 = (long *******)*param_3;
    (*(code *)(*ppppppplVar20)[7])();
    pplVar32 = *unaff_x28;
    if ((*(byte *)((long)pplVar32 + 0x5c) & 1) == 0) {
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_3c8 = 0;
      uStack_3c4 = 0;
      uStack_3d0 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3bc = 0;
      pppppplStack_3e8 = (long ******)0x0;
      pppppplStack_3f0 = (long ******)0x0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_2b0 = 0xffffffffffffffff;
      uStack_2a0 = 0;
      uStack_2a8 = 0;
      uStack_290 = 0;
      uStack_298 = 0;
      uStack_280 = 0;
      uStack_288 = 0;
      uStack_270 = 0;
      uStack_278 = 0;
      uStack_260 = 0;
      uStack_268 = 0;
      uStack_250 = 0;
      uStack_258 = 0;
      uStack_240 = 0;
      uStack_248 = 0;
      uStack_230 = 0;
      uStack_238 = 0;
      uStack_220 = 0;
      uStack_228 = 0;
      uStack_218 = 0;
      ppppppplVar22 = ppppppplVar11;
      FUN_10a1a3710(ppppppplVar11,*ppppppplVar20);
      ppppppplVar3 = (long *******)*ppppppplVar22;
      ppppplStack_448 = (long *****)ppppppplVar22[1];
      if ((long ******)ppppplStack_448 != (long ******)0x0) {
        pppppplVar13 = (long ******)(ppppplStack_448 + 1);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
          if (bVar6) {
            *pppppplVar13 = (long *****)((long)*pppppplVar13 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pppppplStack_450 = (long ******)ppppppplVar3;
      func_0x000109296cdc(&pppppplStack_460,*unaff_x28,ppppppplVar3,*ppppppplVar20);
      uStack_2c0 = 1;
      uStack_3d8 = 0x3f80000000000000;
      uStack_3e0 = 0;
      pppppplStack_3e8 = pppppplStack_460;
      pppppplStack_3f0 = (long ******)ppppppplVar3;
      (*(code *)(*unaff_x24)[9])(unaff_x24,&pppppplStack_3f0);
      if (unaff_x22 != (long *******)0x0) {
        FUN_10a097500(unaff_x22,&pppppplStack_460);
        FUN_10a097468(unaff_x22,&pppppplStack_450);
      }
      plVar2 = plStack_458;
      if (plStack_458 != (long *)0x0) {
        plVar1 = plStack_458 + 1;
        do {
          lVar26 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar26 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plStack_458 + 0x10))(plStack_458);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      ppppplVar12 = ppppplStack_448;
      if ((long ******)ppppplStack_448 != (long ******)0x0) {
        pppppplVar13 = (long ******)(ppppplStack_448 + 1);
        do {
          ppppplVar28 = *pppppplVar13;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
          if (bVar6) {
            *pppppplVar13 = (long *****)((long)ppppplVar28 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppplVar28 == (long *****)0x0) {
          (*(code *)(*ppppplStack_448)[2])(ppppplStack_448);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar12);
        }
      }
    }
    else {
      pppppplStack_3f0 = (long ******)CONCAT44(pppppplStack_3f0._4_4_,1);
      uStack_15c = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      _bzero((ulong)&pppppplStack_3f0 | 4,0x28d);
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_150 = 0;
      uStack_158 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_118 = 0;
      uStack_108 = 0xffffffffffffffff;
      puVar21 = (uint *)0x113836510;
      FUN_10ad0621c();
      uStack_3c8 = (*puVar21 >> 2 ^ 0xffffffff) & 2;
      if (lStack_1a8 == 0) {
        uStack_3a8 = 0;
        uStack_3bc = 0;
        uStack_3d0 = 0;
        uStack_3d8 = 0;
      }
      lStack_1a8 = 1;
      pppppplStack_3e8 = *ppppppplVar20;
      uStack_3e0 = 0;
      uStack_3c4 = 1;
      uStack_3c0 = 2;
      uStack_3b0 = 0x3f80000000000000;
      uStack_3b8 = 0;
      func_0x00010a1a3a00(pppppplStack_400,pppppplStack_480,*ppppppplVar20);
      (*(code *)(*unaff_x24)[10])(unaff_x24,&pppppplStack_3f0);
    }
    unaff_x26 = ppppppplVar11;
    FUN_10a1a3208(ppppppplVar11,*unaff_x28);
    FUN_10a1adf98();
    ppppplVar12 = *param_3;
    (*(code *)(*ppppplVar12)[6])();
    func_0x000109293c4c(unaff_x26,*(undefined4 *)(ppppplVar12 + 8),2,2,2);
    func_0x000109294420();
    unaff_x20 = *unaff_x26;
    pppppplVar13 = unaff_x20;
    (*(code *)(*unaff_x20)[6])();
    if (((ulong)pppppplVar13[6] & 1) == 0) goto LAB_10a1a1a24;
    unaff_x27 = *pppppplVar13;
    pppppplStack_488 = (long ******)ppppppplVar20;
    if (pppppplVar13[1] == unaff_x27) goto LAB_10a1a1a24;
    pppppplVar27 = unaff_x26[2];
    ppppplStack_4a0 = (long *****)pppppplVar14;
    if (unaff_x26[3] == pppppplVar27) goto LAB_10a1a1a24;
    ppppppplVar20 = ppppppplVar11;
    FUN_10a1a3208(ppppppplVar11,*unaff_x28);
    FUN_10a1a43f0(&pppppplStack_3f0,ppppppplVar20,pppppplVar27);
    if (pppppplVar13[1] == *pppppplVar13) goto LAB_10a1a1a24;
    unaff_x21 = (ulong)*(uint *)*pppppplVar13;
    (*(code *)(*unaff_x24)[0xf])(unaff_x24,unaff_x20);
    (*(code *)(*unaff_x24)[0xe])(unaff_x24,&uStack_440);
    (*(code *)(*unaff_x24)[0x13])(unaff_x24,0,unaff_x20[0xa0],*pplStack_468,0);
    if (unaff_x27[2] == unaff_x27[1]) goto LAB_10a1a1a24;
    (*(code *)(*pppppplStack_3f0)[7])
              (pppppplStack_3f0,*(undefined4 *)(unaff_x27[1] + 3),CONCAT44(uStack_424,uStack_428),
               uStack_418,uStack_414 & 0xffffffff,0);
    if (unaff_x27[8] == unaff_x27[7]) goto LAB_10a1a1a24;
    (*(code *)(*pppppplStack_3f0)[9])
              (pppppplStack_3f0,*(undefined4 *)(unaff_x27[7] + 3),*ppppplStack_470,5,0);
    if (unaff_x27[0xe] == unaff_x27[0xd]) goto LAB_10a1a1a24;
    (*(code *)(*pppppplStack_3f0)[0xc])
              (pppppplStack_3f0,*(undefined4 *)(unaff_x27[0xd] + 3),*pplStack_478,0);
    (*(code *)(*unaff_x24)[0x10])(unaff_x24,unaff_x21,unaff_x20[0xa0],pppppplStack_3f0,0,0);
    param_2 = (long *******)0x4;
    param_3 = (long ******)0x0;
    param_4 = (long *******)0x1;
    param_5 = (undefined8 *)0x0;
    (*(code *)(*unaff_x24)[0x15])(unaff_x24);
    (*(code *)(*unaff_x24)[8])(unaff_x24);
    if (*(char *)((long)pplVar32 + 0x5c) == '\x01') {
      param_3 = (long ******)*pppppplStack_488;
      param_2 = (long *******)pppppplStack_480;
      FUN_10a1a42fc(pppppplStack_400);
    }
    if (unaff_x22 != (long *******)0x0) {
      FUN_10a0979c0(unaff_x22,pppppplStack_488);
      FUN_10a097598(unaff_x22,unaff_x26);
      param_2 = &pppppplStack_3f0;
      FUN_10a0973d0(unaff_x22);
    }
    pppppplVar13 = pppppplStack_3e8;
    unaff_x25 = (long *******)pppppplStack_490;
    pppppplStack_488 = (long ******)unaff_x22;
    if ((long *******)pppppplStack_3e8 != (long *******)0x0) {
      ppppppplVar20 = (long *******)(pppppplStack_3e8 + 1);
      do {
        pppppplVar14 = *ppppppplVar20;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppplVar20,0x10);
        if (bVar6) {
          *ppppppplVar20 = (long ******)((long)pppppplVar14 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppppplVar14 == (long ******)0x0) {
        (*(code *)(*pppppplStack_3e8)[2])(pppppplStack_3e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar13);
      }
    }
    ppppppplVar20 = (long *******)*unaff_x25;
    if (ppppppplVar20 != (long *******)0x0) {
      uStack_438 = *(uint *)(ppppppplVar11 + 6) >> 1;
      uStack_434 = *(undefined4 *)((long)ppppppplVar11 + 0x44);
      uStack_440 = 0;
      uStack_430 = 0x3f80000000000000;
      (*(code *)(*ppppppplVar20)[7])();
      pplVar32 = *unaff_x28;
      if ((*(byte *)((long)pplVar32 + 0x5c) & 1) == 0) {
        uStack_2c8 = 0;
        uStack_2d0 = 0;
        uStack_2b8 = 0;
        uStack_2c0 = 0;
        uStack_2e8 = 0;
        uStack_2f0 = 0;
        uStack_2d8 = 0;
        uStack_2e0 = 0;
        uStack_308 = 0;
        uStack_310 = 0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        uStack_328 = 0;
        uStack_330 = 0;
        uStack_318 = 0;
        uStack_320 = 0;
        uStack_348 = 0;
        uStack_350 = 0;
        uStack_338 = 0;
        uStack_340 = 0;
        uStack_368 = 0;
        uStack_370 = 0;
        uStack_358 = 0;
        uStack_360 = 0;
        uStack_388 = 0;
        uStack_390 = 0;
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_3a8 = 0;
        uStack_3b0 = 0;
        uStack_398 = 0;
        uStack_3a0 = 0;
        uStack_3c8 = 0;
        uStack_3c4 = 0;
        uStack_3d0 = 0;
        uStack_3b8 = 0;
        uStack_3c0 = 0;
        uStack_3bc = 0;
        pppppplStack_3e8 = (long ******)0x0;
        pppppplStack_3f0 = (long ******)0x0;
        uStack_3d8 = 0;
        uStack_3e0 = 0;
        uStack_2b0 = 0xffffffffffffffff;
        uStack_2a0 = 0;
        uStack_2a8 = 0;
        uStack_290 = 0;
        uStack_298 = 0;
        uStack_280 = 0;
        uStack_288 = 0;
        uStack_270 = 0;
        uStack_278 = 0;
        uStack_260 = 0;
        uStack_268 = 0;
        uStack_250 = 0;
        uStack_258 = 0;
        uStack_240 = 0;
        uStack_248 = 0;
        uStack_230 = 0;
        uStack_238 = 0;
        uStack_220 = 0;
        uStack_228 = 0;
        uStack_218 = 0;
        ppppppplVar22 = ppppppplVar11;
        FUN_10a1a3710(ppppppplVar11,*ppppppplVar20);
        ppppppplVar3 = (long *******)*ppppppplVar22;
        ppppplStack_448 = (long *****)ppppppplVar22[1];
        if ((long ******)ppppplStack_448 != (long ******)0x0) {
          pppppplVar13 = (long ******)(ppppplStack_448 + 1);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
            if (bVar6) {
              *pppppplVar13 = (long *****)((long)*pppppplVar13 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        pppppplStack_450 = (long ******)ppppppplVar3;
        func_0x000109296cdc(&pppppplStack_460,*unaff_x28,ppppppplVar3,*ppppppplVar20);
        uStack_2c0 = 1;
        uStack_3d8 = 0x3f80000000000000;
        uStack_3e0 = 0;
        pppppplStack_3e8 = pppppplStack_460;
        pppppplStack_3f0 = (long ******)ppppppplVar3;
        (*(code *)(*unaff_x24)[9])(unaff_x24,&pppppplStack_3f0);
        pppppplVar13 = pppppplStack_488;
        if ((long *******)pppppplStack_488 != (long *******)0x0) {
          FUN_10a097500(pppppplStack_488,&pppppplStack_460);
          FUN_10a097468(pppppplVar13,&pppppplStack_450);
        }
        if (plStack_458 != (long *)0x0) {
          plVar2 = plStack_458 + 1;
          do {
            lVar26 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar26 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*plStack_458 + 0x10))(plStack_458);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_458);
          }
        }
        ppppplVar12 = ppppplStack_448;
        if ((long ******)ppppplStack_448 != (long ******)0x0) {
          pppppplVar13 = (long ******)(ppppplStack_448 + 1);
          do {
            ppppplVar28 = *pppppplVar13;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
            if (bVar6) {
              *pppppplVar13 = (long *****)((long)ppppplVar28 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppplVar28 == (long *****)0x0) {
            (*(code *)(*ppppplStack_448)[2])(ppppplStack_448);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar12);
          }
        }
      }
      else {
        pppppplStack_3f0 = (long ******)CONCAT44(pppppplStack_3f0._4_4_,1);
        uStack_15c = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        _bzero((ulong)&pppppplStack_3f0 | 4,0x28d);
        uStack_130 = 0;
        uStack_138 = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        uStack_150 = 0;
        uStack_158 = 0;
        uStack_140 = 0;
        uStack_148 = 0;
        uStack_118 = 0;
        uStack_108 = 0xffffffffffffffff;
        puVar21 = (uint *)0x113836510;
        FUN_10ad0621c();
        uStack_3c8 = (*puVar21 >> 2 ^ 0xffffffff) & 2;
        if (lStack_1a8 == 0) {
          uStack_3a8 = 0;
          uStack_3bc = 0;
          uStack_3d0 = 0;
          uStack_3d8 = 0;
        }
        lStack_1a8 = 1;
        pppppplStack_3e8 = *ppppppplVar20;
        uStack_3e0 = 0;
        uStack_3c4 = 1;
        uStack_3c0 = 2;
        uStack_3b0 = 0x3f80000000000000;
        uStack_3b8 = 0;
        func_0x00010a1a3a00(pppppplStack_400,pppppplStack_480,*ppppppplVar20);
        (*(code *)(*unaff_x24)[10])(unaff_x24,&pppppplStack_3f0);
      }
      unaff_x25 = ppppppplVar11;
      FUN_10a1a3208(ppppppplVar11,*unaff_x28);
      FUN_10a1adf98();
      func_0x000109293c4c();
      func_0x000109294420();
      unaff_x20 = *unaff_x25;
      pppppplVar13 = unaff_x20;
      (*(code *)(*unaff_x20)[6])();
      if ((((ulong)pppppplVar13[6] & 1) == 0) ||
         (unaff_x27 = *pppppplVar13, pppppplVar13[1] == unaff_x27)) goto LAB_10a1a1a24;
      unaff_x26 = (long *******)unaff_x25[2];
      if ((long *******)unaff_x25[3] == unaff_x26) goto LAB_10a1a1a24;
      FUN_10a1a3208(ppppppplVar11,*unaff_x28);
      FUN_10a1a43f0(&pppppplStack_3f0,ppppppplVar11,unaff_x26);
      ppppppplVar11 = (long *******)pppppplStack_488;
      if (pppppplVar13[1] == *pppppplVar13) goto LAB_10a1a1a24;
      unaff_x21 = (ulong)*(uint *)*pppppplVar13;
      (*(code *)(*unaff_x24)[0xf])(unaff_x24,unaff_x20);
      (*(code *)(*unaff_x24)[0xe])(unaff_x24,&uStack_440);
      (*(code *)(*unaff_x24)[0x13])(unaff_x24,0,unaff_x20[0xa0],*pplStack_468,0);
      if (unaff_x27[2] == unaff_x27[1]) goto LAB_10a1a1a24;
      (*(code *)(*pppppplStack_3f0)[7])
                (pppppplStack_3f0,*(undefined4 *)(unaff_x27[1] + 3),CONCAT44(uStack_424,uStack_428),
                 uStack_418,uStack_414 & 0xffffffff,0);
      if (unaff_x27[8] == unaff_x27[7]) goto LAB_10a1a1a24;
      (*(code *)(*pppppplStack_3f0)[9])
                (pppppplStack_3f0,*(undefined4 *)(unaff_x27[7] + 3),*ppppplStack_470,5,0);
      if (unaff_x27[0xe] == unaff_x27[0xd]) goto LAB_10a1a1a24;
      (*(code *)(*pppppplStack_3f0)[0xc])
                (pppppplStack_3f0,*(undefined4 *)(unaff_x27[0xd] + 3),*pplStack_478,0);
      (*(code *)(*unaff_x24)[0x10])(unaff_x24,unaff_x21,unaff_x20[0xa0],pppppplStack_3f0,0,0);
      param_2 = (long *******)0x4;
      param_3 = (long ******)0x0;
      param_4 = (long *******)0x1;
      param_5 = (undefined8 *)0x0;
      (*(code *)(*unaff_x24)[0x15])(unaff_x24);
      (*(code *)(*unaff_x24)[8])(unaff_x24);
      if (*(char *)((long)pplVar32 + 0x5c) == '\x01') {
        param_3 = *ppppppplVar20;
        param_2 = (long *******)pppppplStack_480;
        FUN_10a1a42fc(pppppplStack_400);
      }
      if (ppppppplVar11 != (long *******)0x0) {
        FUN_10a0979c0(ppppppplVar11,ppppppplVar20);
        FUN_10a097598(ppppppplVar11,unaff_x25);
        param_2 = &pppppplStack_3f0;
        FUN_10a0973d0(ppppppplVar11);
      }
      pppppplVar13 = pppppplStack_3e8;
      unaff_x22 = ppppppplVar20;
      if ((long *******)pppppplStack_3e8 != (long *******)0x0) {
        ppppppplVar20 = (long *******)(pppppplStack_3e8 + 1);
        do {
          pppppplVar14 = *ppppppplVar20;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppplVar20,0x10);
          if (bVar6) {
            *ppppppplVar20 = (long ******)((long)pppppplVar14 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppppplVar14 == (long ******)0x0) {
          (*(code *)(*pppppplStack_3e8)[2])(pppppplStack_3e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar13);
        }
      }
    }
    unaff_x19 = (long *******)pppppplStack_400;
    if ((long *******)pppppplStack_400 != (long *******)0x0) {
      FUN_10a08e2f4();
    }
    ppppppplVar20 = (long *******)CONCAT44(uStack_41c,uStack_420);
    if (ppppppplVar20 != (long *******)0x0) {
      ppppppplVar3 = ppppppplVar20 + 1;
      do {
        pppppplVar13 = *ppppppplVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppplVar3,0x10);
        if (bVar6) {
          *ppppppplVar3 = (long ******)((long)pppppplVar13 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppppplVar13 == (long ******)0x0) {
        (*(code *)(*ppppppplVar20)[2])(ppppppplVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        unaff_x19 = ppppppplVar20;
      }
    }
    ppppppplVar20 = (long *******)pppppplStack_3f8;
    if ((long *******)pppppplStack_3f8 != (long *******)0x0) {
      ppppppplVar3 = (long *******)(pppppplStack_3f8 + 1);
      do {
        pppppplVar13 = *ppppppplVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppplVar3,0x10);
        if (bVar6) {
          *ppppppplVar3 = (long ******)((long)pppppplVar13 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppppplVar13 == (long ******)0x0) {
        (*(code *)(*pppppplStack_3f8)[2])(pppppplStack_3f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        unaff_x19 = ppppppplVar20;
      }
    }
    if (uStack_494 != 0) {
      unaff_x19 = (long *******)pppppplStack_4a8;
      __ZNSt3__115recursive_mutex6unlockEv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a0eb82c(&pppppplStack_450);
    func_0x00010a045fb4(&uStack_428);
    func_0x00010a054cfc(&pppppplStack_400);
    if ((uStack_494 & 1) != 0) {
      __ZNSt3__115recursive_mutex6unlockEv(pppppplStack_4a8);
    }
    unaff_x30 = FUN_10a1a1b04;
    ppppppplVar20 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_4b0;
    unaff_x23 = ppppppplVar11;
  }
  *(long ****)((long)register0x00000008 + -0x60) = unaff_x28;
  *(long ******)((long)register0x00000008 + -0x58) = unaff_x27;
  *(long ********)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long ********)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long ********)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long ********)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long ********)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *******)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long ********)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x68) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  iVar10 = 0xbe2;
  _glIsEnabled();
  *(bool *)((long)register0x00000008 + -0x8a1) = iVar10 != 0;
  uVar9 = 0xbe2;
  _glDisable();
  *(undefined1 **)((long)register0x00000008 + -0x8b8) =
       (undefined1 *)((long)register0x00000008 + -0x8a1);
  __ZSt19uncaught_exceptionsv();
  *(undefined4 *)((long)register0x00000008 + -0x8b0) = uVar9;
  if ((*(byte *)((long)ppppppplVar20 + 0x7c4) & 1) == 0) {
    if (*(int *)(ppppppplVar20 + 0x184) == 0) {
      uVar23 = 1;
      FUN_10a303694(1);
      FUN_10a301f68((undefined1 *)((long)register0x00000008 + -0x4c0),uVar23);
      pppppplVar13 = ppppppplVar20[0x184];
      *(long *******)((long)register0x00000008 + -0x898) = ppppppplVar20[0x185];
      *(long *******)((long)register0x00000008 + -0x8a0) = pppppplVar13;
      uVar23 = *(undefined8 *)((long)ppppppplVar20 + 0xc2c);
      *(undefined8 *)((long)register0x00000008 + -0x88c) =
           *(undefined8 *)((long)ppppppplVar20 + 0xc34);
      *(undefined8 *)((long)register0x00000008 + -0x894) = uVar23;
      pppppplVar13 = *(long *******)((long)register0x00000008 + -0x4b8);
      ppppppplVar20[0x185] = *(long *******)((long)register0x00000008 + -0x4b0);
      ppppppplVar20[0x184] = pppppplVar13;
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0x4ac);
      *(undefined8 *)((long)ppppppplVar20 + 0xc34) =
           *(undefined8 *)((long)register0x00000008 + -0x4a4);
      *(undefined8 *)((long)ppppppplVar20 + 0xc2c) = uVar23;
      *(undefined8 *)((long)register0x00000008 + -0x4b0) =
           *(undefined8 *)((long)register0x00000008 + -0x898);
      *(undefined8 *)((long)register0x00000008 + -0x4b8) =
           *(undefined8 *)((long)register0x00000008 + -0x8a0);
      *(undefined8 *)((long)register0x00000008 + -0x4a4) =
           *(undefined8 *)((long)register0x00000008 + -0x88c);
      *(undefined8 *)((long)register0x00000008 + -0x4ac) =
           *(undefined8 *)((long)register0x00000008 + -0x894);
      _memcpy((undefined1 *)((long)register0x00000008 + -0x8a0),
              (undefined *)((long)ppppppplVar20 + 0xc3c),0x3e0);
      _memcpy((undefined *)((long)ppppppplVar20 + 0xc3c),
              (undefined1 *)((long)register0x00000008 + -0x49c),0x3e0);
      _memcpy((undefined1 *)((long)register0x00000008 + -0x49c),
              (undefined1 *)((long)register0x00000008 + -0x8a0),0x3e0);
      lVar26 = 0;
      do {
        puVar7 = (undefined8 *)((long)ppppppplVar20 + lVar26 + 0x101c);
        uVar35 = puVar7[1];
        uVar23 = *puVar7;
        uVar37 = *(undefined8 *)((long)register0x00000008 + lVar26 + -0xbc);
        puVar7 = (undefined8 *)((long)ppppppplVar20 + lVar26 + 0x101c);
        puVar7[1] = *(undefined8 *)((long)register0x00000008 + lVar26 + -0xb4);
        *puVar7 = uVar37;
        *(undefined8 *)((long)register0x00000008 + lVar26 + -0xb4) = uVar35;
        *(undefined8 *)((long)register0x00000008 + lVar26 + -0xbc) = uVar23;
        lVar26 = lVar26 + 0x10;
      } while (lVar26 != 0x40);
      ppppppplVar20[0x183] = *(long *******)((long)register0x00000008 + -0x4c0);
      *(undefined8 *)((long)register0x00000008 + -0x4c0) = 0;
      FUN_10a30206c((undefined1 *)((long)register0x00000008 + -0x4c0));
    }
    if (*(int *)(ppppppplVar20 + 0x20e) == 0) {
      uVar23 = 1;
      FUN_10a303694(1);
      FUN_10a301f68((undefined1 *)((long)register0x00000008 + -0x4c0),uVar23);
      pppppplVar13 = ppppppplVar20[0x20e];
      *(long *******)((long)register0x00000008 + -0x898) = ppppppplVar20[0x20f];
      *(long *******)((long)register0x00000008 + -0x8a0) = pppppplVar13;
      uVar23 = *(undefined8 *)((long)ppppppplVar20 + 0x107c);
      *(undefined8 *)((long)register0x00000008 + -0x88c) =
           *(undefined8 *)((long)ppppppplVar20 + 0x1084);
      *(undefined8 *)((long)register0x00000008 + -0x894) = uVar23;
      pppppplVar13 = *(long *******)((long)register0x00000008 + -0x4b8);
      ppppppplVar20[0x20f] = *(long *******)((long)register0x00000008 + -0x4b0);
      ppppppplVar20[0x20e] = pppppplVar13;
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0x4ac);
      *(undefined8 *)((long)ppppppplVar20 + 0x1084) =
           *(undefined8 *)((long)register0x00000008 + -0x4a4);
      *(undefined8 *)((long)ppppppplVar20 + 0x107c) = uVar23;
      *(undefined8 *)((long)register0x00000008 + -0x4b0) =
           *(undefined8 *)((long)register0x00000008 + -0x898);
      *(undefined8 *)((long)register0x00000008 + -0x4b8) =
           *(undefined8 *)((long)register0x00000008 + -0x8a0);
      *(undefined8 *)((long)register0x00000008 + -0x4a4) =
           *(undefined8 *)((long)register0x00000008 + -0x88c);
      *(undefined8 *)((long)register0x00000008 + -0x4ac) =
           *(undefined8 *)((long)register0x00000008 + -0x894);
      _memcpy((undefined1 *)((long)register0x00000008 + -0x8a0),
              (undefined *)((long)ppppppplVar20 + 0x108c),0x3e0);
      _memcpy((undefined *)((long)ppppppplVar20 + 0x108c),
              (undefined1 *)((long)register0x00000008 + -0x49c),0x3e0);
      _memcpy((undefined1 *)((long)register0x00000008 + -0x49c),
              (undefined1 *)((long)register0x00000008 + -0x8a0),0x3e0);
      lVar26 = 0;
      do {
        puVar7 = (undefined8 *)((long)ppppppplVar20 + lVar26 + 0x146c);
        uVar35 = puVar7[1];
        uVar23 = *puVar7;
        uVar37 = *(undefined8 *)((long)register0x00000008 + lVar26 + -0xbc);
        puVar7 = (undefined8 *)((long)ppppppplVar20 + lVar26 + 0x146c);
        puVar7[1] = *(undefined8 *)((long)register0x00000008 + lVar26 + -0xb4);
        *puVar7 = uVar37;
        *(undefined8 *)((long)register0x00000008 + lVar26 + -0xb4) = uVar35;
        *(undefined8 *)((long)register0x00000008 + lVar26 + -0xbc) = uVar23;
        lVar26 = lVar26 + 0x10;
      } while (lVar26 != 0x40);
      ppppppplVar20[0x20d] = *(long *******)((long)register0x00000008 + -0x4c0);
      *(undefined8 *)((long)register0x00000008 + -0x4c0) = 0;
      FUN_10a30206c((undefined1 *)((long)register0x00000008 + -0x4c0));
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x8a0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x898) = 0;
  *(undefined1 *)((long)register0x00000008 + -0x888) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x890) = 0;
  if (*(char *)((long)ppppppplVar20 + 0x7c4) == '\x01') {
    ppuVar18 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    ppppplVar12 = *param_3;
    uVar9 = *(undefined4 *)(ppppppplVar20 + 0xf5);
    uVar25 = *(undefined4 *)(ppppppplVar20 + 0xf7);
    lVar26 = *(long *)(*ppuVar18 + 0x10);
    *(undefined **)((long)register0x00000008 + -0x4c0) = &UNK_10f635282;
    *(undefined8 *)((long)register0x00000008 + -0x4b8) = 0x2b;
    if (lVar26 != 0) {
      func_0x00010ab9ca70((undefined1 *)((long)register0x00000008 + -0x4c0),ppppplVar12,0);
      uVar24 = 0x8ca9;
      if (*(uint *)((long)register0x00000008 + -0x498) < 2) {
        uVar24 = 0x8d40;
      }
      FUN_10ab9cbe8((undefined1 *)((long)register0x00000008 + -0x8e0),lVar26 + 0x50,uVar24,
                    (undefined1 *)((long)register0x00000008 + -0x4c0),0,CONCAT44(uVar25,uVar9),0);
      FUN_10ab9b224((undefined1 *)((long)register0x00000008 + -0x8a0),
                    (undefined1 *)((long)register0x00000008 + -0x8e0));
      FUN_10ab9ce18((undefined1 *)((long)register0x00000008 + -0x8e0));
      goto LAB_10a1a1e88;
    }
  }
  else {
    *(undefined4 *)((long)ppppppplVar20 + 0xc24) = 0x8d40;
    func_0x00010a3022a4(ppppppplVar20 + 0x183);
    ppppplVar12 = *param_3;
    (*(code *)(*ppppplVar12)[9])();
    iVar10 = (int)ppppplVar12;
    if (iVar10 == 0) {
      uVar9 = 0;
      uVar25 = 0;
      uVar24 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(ppppppplVar20 + 0xf7);
      uVar25 = *(undefined4 *)(ppppppplVar20 + 0xf5);
      uVar24 = 0xde1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x4b5) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4bd) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x4ad) = 0;
    uVar4 = *(uint *)((long)ppppppplVar20 + 0xc3c);
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    *(uint *)((long)ppppppplVar20 + 0xc3c) = uVar4;
    *(undefined4 *)((long)ppppppplVar20 + 0x101c) = 0x8ce0;
    *(undefined4 *)(ppppppplVar20 + 0x18e) = 0x8ce0;
    *(undefined4 *)(ppppppplVar20 + 0x188) = uVar24;
    *(int *)((long)ppppppplVar20 + 0xc44) = iVar10;
    *(undefined4 *)(ppppppplVar20 + 0x189) = uVar25;
    *(undefined4 *)((long)ppppppplVar20 + 0xc4c) = uVar9;
    *(bool *)(ppppppplVar20 + 0x18a) = iVar10 != 0;
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x4c0);
    *(undefined8 *)((long)ppppppplVar20 + 0xc59) =
         *(undefined8 *)((long)register0x00000008 + -0x4b8);
    *(undefined8 *)((long)ppppppplVar20 + 0xc51) = uVar23;
    ppppppplVar20[0x18c] = *(long *******)((long)register0x00000008 + -0x4b1);
    ppppppplVar20[0x18d] = (long ******)0x1;
    FUN_10a3024c0(ppppppplVar20 + 0x183,ppppppplVar20 + 0x188);
    _glViewport(0,0,*(undefined4 *)(ppppppplVar20 + 0xf5),*(undefined4 *)(ppppppplVar20 + 0xf7));
LAB_10a1a1e88:
    FUN_10a3014a0(ppppppplVar20 + 0x70);
    pppppplVar13 = *param_2;
    (*(code *)(*pppppplVar13)[9])();
    FUN_10a31a3c8(ppppppplVar20[0x8e],ppppppplVar20 + 0x93,*(undefined4 *)(ppppppplVar20 + 0x91),
                  pppppplVar13);
    FUN_10a31a478(ppppppplVar20[0x98],*(undefined4 *)(ppppppplVar20 + 0x9b),
                  (undefined *)((long)ppppppplVar20 + 0x14bc));
    uVar23 = *(undefined8 *)((long)ppppppplVar20 + 0x14dc);
    uVar37 = *(undefined8 *)((long)ppppppplVar20 + 0x14f4);
    uVar35 = *(undefined8 *)((long)ppppppplVar20 + 0x14ec);
    *(undefined8 *)((long)register0x00000008 + -0x8d8) =
         *(undefined8 *)((long)ppppppplVar20 + 0x14e4);
    *(undefined8 *)((long)register0x00000008 + -0x8e0) = uVar23;
    *(undefined8 *)((long)register0x00000008 + -0x8c8) = uVar37;
    *(undefined8 *)((long)register0x00000008 + -0x8d0) = uVar35;
    fVar33 = (float)*(undefined8 *)((long)param_5 + 0x1c);
    fVar45 = (float)param_5[3];
    fVar43 = *(float *)((long)register0x00000008 + -0x8e0);
    fVar44 = *(float *)((long)register0x00000008 + -0x8d8);
    fVar46 = *(float *)((long)register0x00000008 + -0x8d0);
    fVar47 = *(float *)((long)register0x00000008 + -0x8c8);
    fVar39 = (float)*(undefined8 *)((long)param_5 + 0xc);
    fVar41 = (float)*param_5;
    fVar42 = (float)param_5[2];
    fVar36 = (float)*(undefined8 *)((long)param_5 + 4);
    *(float *)((long)register0x00000008 + -0x8e0) =
         fVar45 + *(float *)((long)register0x00000008 + -0x8dc) * fVar39 + fVar43 * fVar41;
    *(float *)((long)register0x00000008 + -0x8dc) =
         fVar33 + *(float *)((long)register0x00000008 + -0x8dc) * fVar42 + fVar43 * fVar36;
    *(float *)((long)register0x00000008 + -0x8d8) =
         fVar45 + *(float *)((long)register0x00000008 + -0x8d4) * fVar39 + fVar44 * fVar41;
    *(float *)((long)register0x00000008 + -0x8d4) =
         fVar33 + *(float *)((long)register0x00000008 + -0x8d4) * fVar42 + fVar44 * fVar36;
    *(float *)((long)register0x00000008 + -0x8d0) =
         fVar45 + *(float *)((long)register0x00000008 + -0x8cc) * fVar39 + fVar46 * fVar41;
    *(float *)((long)register0x00000008 + -0x8cc) =
         fVar33 + *(float *)((long)register0x00000008 + -0x8cc) * fVar42 + fVar46 * fVar36;
    *(float *)((long)register0x00000008 + -0x8c8) =
         fVar45 + *(float *)((long)register0x00000008 + -0x8c4) * fVar39 + fVar47 * fVar41;
    *(float *)((long)register0x00000008 + -0x8c4) =
         fVar33 + *(float *)((long)register0x00000008 + -0x8c4) * fVar42 + fVar47 * fVar36;
    uVar34 = *(ulong *)((long)register0x00000008 + -0x8e0);
    uVar38 = *(ulong *)((long)register0x00000008 + -0x8d8);
    uVar40 = *(ulong *)((long)register0x00000008 + -0x8d0);
    uVar34 = uVar34 ^ (uVar34 ^ uVar38) &
                      ~CONCAT44(-(uint)((float)(uVar34 >> 0x20) < (float)(uVar38 >> 0x20)),
                                -(uint)((float)uVar34 < (float)uVar38));
    uVar34 = uVar34 ^ (uVar34 ^ uVar40) &
                      ~CONCAT44(-(uint)((float)(uVar34 >> 0x20) < (float)(uVar40 >> 0x20)),
                                -(uint)((float)uVar34 < (float)uVar40));
    uVar38 = *(ulong *)((long)register0x00000008 + -0x8c8);
    uVar34 = uVar34 ^ (uVar34 ^ uVar38) &
                      ~CONCAT44(-(uint)((float)(uVar34 >> 0x20) < (float)(uVar38 >> 0x20)),
                                -(uint)((float)uVar34 < (float)uVar38));
    fVar33 = (float)uVar34;
    fVar36 = (float)(uVar34 >> 0x20);
    *(ulong *)((long)register0x00000008 + -0x8d8) =
         CONCAT44((float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x8d8) >> 0x20) -
                  fVar36,(float)*(undefined8 *)((long)register0x00000008 + -0x8d8) - fVar33);
    *(ulong *)((long)register0x00000008 + -0x8e0) =
         CONCAT44((float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x8e0) >> 0x20) -
                  fVar36,(float)*(undefined8 *)((long)register0x00000008 + -0x8e0) - fVar33);
    *(ulong *)((long)register0x00000008 + -0x8c8) =
         CONCAT44((float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x8c8) >> 0x20) -
                  fVar36,(float)*(undefined8 *)((long)register0x00000008 + -0x8c8) - fVar33);
    *(ulong *)((long)register0x00000008 + -0x8d0) =
         CONCAT44((float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x8d0) >> 0x20) -
                  fVar36,(float)*(undefined8 *)((long)register0x00000008 + -0x8d0) - fVar33);
    FUN_10a31a478(ppppppplVar20[0x94],*(undefined4 *)(ppppppplVar20 + 0x97),
                  (undefined1 *)((long)register0x00000008 + -0x8e0));
    _glDrawArrays(6,0,4);
    FUN_10a301590();
    if (*(char *)((long)ppppppplVar20 + 0x7c4) == '\x01') {
      *(undefined8 *)((long)register0x00000008 + -0x4a8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x4b0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x4b8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x4c0) = 0;
      FUN_10ab9b224((undefined1 *)((long)register0x00000008 + -0x8a0),
                    (undefined1 *)((long)register0x00000008 + -0x4c0));
      FUN_10ab9ce18((undefined1 *)((long)register0x00000008 + -0x4c0));
    }
    else {
      func_0x00010a3022f0(ppppppplVar20 + 0x183);
      func_0x00010a302418(ppppppplVar20 + 0x183);
      func_0x00010a3020b0(ppppppplVar20 + 0x183);
    }
    if (*param_4 != (long ******)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0x900) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x8f8) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x8e8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x8f0) = 0;
      if (*(char *)((long)ppppppplVar20 + 0x7c4) == '\x01') {
        ppuVar18 = &PTR___tlv_bootstrap_11340de10;
        (*(code *)PTR___tlv_bootstrap_11340de10)();
        iVar10 = *(int *)(ppppppplVar20 + 0xf5);
        uVar9 = *(undefined4 *)((long)ppppppplVar20 + 0x7bc);
        lVar26 = *(long *)(*ppuVar18 + 0x10);
        *(undefined **)((long)register0x00000008 + -0x4c0) = &UNK_10f635282;
        *(undefined8 *)((long)register0x00000008 + -0x4b8) = 0x2b;
        if (lVar26 == 0) {
          FUN_10a0edfc4((undefined1 *)((long)register0x00000008 + -0x4c0));
          goto LAB_10a1a2268;
        }
        func_0x00010ab9ca70((undefined1 *)((long)register0x00000008 + -0x4c0),extraout_x9,0);
        uVar25 = 0x8ca9;
        if (*(uint *)((long)register0x00000008 + -0x498) < 2) {
          uVar25 = 0x8d40;
        }
        FUN_10ab9cbe8((undefined1 *)((long)register0x00000008 + -0x920),lVar26 + 0x50,uVar25,
                      (undefined1 *)((long)register0x00000008 + -0x4c0),0,CONCAT44(uVar9,iVar10 / 2)
                      ,0);
        FUN_10ab9b224((undefined1 *)((long)register0x00000008 + -0x900),
                      (undefined1 *)((long)register0x00000008 + -0x920));
        FUN_10ab9ce18((undefined1 *)((long)register0x00000008 + -0x920));
      }
      else {
        *(undefined4 *)((long)ppppppplVar20 + 0x1074) = 0x8d40;
        func_0x00010a3022a4(ppppppplVar20 + 0x20d);
        pppppplVar13 = *param_4;
        (*(code *)(*pppppplVar13)[9])();
        iVar10 = (int)pppppplVar13;
        if (iVar10 == 0) {
          uVar25 = 0;
          iVar29 = 0;
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined4 *)((long)ppppppplVar20 + 0x7bc);
          iVar29 = *(int *)(ppppppplVar20 + 0xf5) / 2;
          uVar25 = 0xde1;
        }
        *(undefined8 *)((long)register0x00000008 + -0x4b5) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x4bd) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x4ad) = 0;
        uVar4 = *(uint *)((long)ppppppplVar20 + 0x108c);
        if (uVar4 < 2) {
          uVar4 = 1;
        }
        *(uint *)((long)ppppppplVar20 + 0x108c) = uVar4;
        *(undefined4 *)((long)ppppppplVar20 + 0x146c) = 0x8ce0;
        *(undefined4 *)(ppppppplVar20 + 0x218) = 0x8ce0;
        *(undefined4 *)(ppppppplVar20 + 0x212) = uVar25;
        *(int *)((long)ppppppplVar20 + 0x1094) = iVar10;
        *(int *)(ppppppplVar20 + 0x213) = iVar29;
        *(bool *)(ppppppplVar20 + 0x214) = iVar10 != 0;
        uVar23 = *(undefined8 *)((long)register0x00000008 + -0x4c0);
        *(undefined8 *)((long)ppppppplVar20 + 0x10a9) =
             *(undefined8 *)((long)register0x00000008 + -0x4b8);
        *(undefined8 *)((long)ppppppplVar20 + 0x10a1) = uVar23;
        *(undefined4 *)((long)ppppppplVar20 + 0x109c) = uVar9;
        ppppppplVar20[0x216] = *(long *******)((long)register0x00000008 + -0x4b1);
        ppppppplVar20[0x217] = (long ******)0x1;
        FUN_10a3024c0(ppppppplVar20 + 0x20d,ppppppplVar20 + 0x212);
        _glViewport(0,0,*(int *)(ppppppplVar20 + 0xf5) / 2,
                    *(undefined4 *)((long)ppppppplVar20 + 0x7bc));
      }
      FUN_10a3014a0(ppppppplVar20 + 0x9c);
      pppppplVar13 = *param_2;
      (*(code *)(*pppppplVar13)[9])();
      FUN_10a31a3c8(ppppppplVar20[0xba],ppppppplVar20 + 0xbf,*(undefined4 *)(ppppppplVar20 + 0xbd),
                    pppppplVar13);
      FUN_10a31a478(ppppppplVar20[0xc4],*(undefined4 *)(ppppppplVar20 + 199),
                    (undefined *)((long)ppppppplVar20 + 0x14bc));
      FUN_10a31a478(ppppppplVar20[0xc0],*(undefined4 *)(ppppppplVar20 + 0xc3),
                    (undefined1 *)((long)register0x00000008 + -0x8e0));
      _glDrawArrays(6,0,4);
      FUN_10a301590();
      if (*(char *)((long)ppppppplVar20 + 0x7c4) == '\x01') {
        *(undefined8 *)((long)register0x00000008 + -0x4a8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x4b0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x4b8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x4c0) = 0;
        FUN_10ab9b224((undefined1 *)((long)register0x00000008 + -0x900),
                      (undefined1 *)((long)register0x00000008 + -0x4c0));
        FUN_10ab9ce18((undefined1 *)((long)register0x00000008 + -0x4c0));
      }
      else {
        func_0x00010a3022f0(ppppppplVar20 + 0x20d);
        func_0x00010a302418(ppppppplVar20 + 0x20d);
        func_0x00010a3020b0(ppppppplVar20 + 0x20d);
      }
      FUN_10ab9ce18((undefined1 *)((long)register0x00000008 + -0x900));
    }
    FUN_10ab9ce18((undefined1 *)((long)register0x00000008 + -0x8a0));
    FUN_10a1a31c0((undefined1 *)((long)register0x00000008 + -0x8b8));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a0edfc4((undefined1 *)((long)register0x00000008 + -0x4c0));
LAB_10a1a2268:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1a226c);
  (*pcVar8)();
}



/* Entry: 10a1a0bfc; end: 10a1a1b03;  */

void FUN_10a1a0bfc(long ******param_1,undefined8 *param_2,long *param_3,long ******param_4,
                  undefined8 *param_5)

{
  long ******pppppplVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  long *****ppppplVar10;
  long *plVar11;
  byte *pbVar12;
  undefined **ppuVar13;
  long ******pppppplVar14;
  long ******pppppplVar15;
  uint *puVar16;
  long ******pppppplVar17;
  long ******pppppplVar18;
  long ******pppppplVar19;
  long ******pppppplVar20;
  undefined8 uVar21;
  long ****pppplVar22;
  undefined8 *puVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  long *****ppppplVar26;
  long lVar27;
  long ****pppplVar28;
  long *****ppppplVar29;
  undefined8 extraout_x9;
  int iVar30;
  long *plVar31;
  long *****ppppplVar32;
  undefined *puVar33;
  ulong uVar34;
  long ******pppppplVar35;
  long lVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auStack_dd0 [32];
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined1 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined1 *puStack_d68;
  undefined4 uStack_d60;
  undefined1 uStack_d51;
  long ****pppplStack_d50;
  undefined4 uStack_d48;
  undefined4 uStack_d44;
  undefined4 uStack_d40;
  undefined4 uStack_d3c;
  uint uStack_d38;
  uint3 uStack_970;
  undefined5 uStack_96d;
  undefined3 uStack_968;
  undefined4 uStack_965;
  uint uStack_961;
  undefined4 uStack_95d;
  undefined1 uStack_959;
  undefined4 uStack_958;
  undefined4 uStack_954;
  uint uStack_950;
  undefined1 auStack_94c [4];
  uint uStack_948;
  undefined8 auStack_56c [10];
  long lStack_518;
  long *plStack_510;
  long ***ppplStack_508;
  long *****ppppplStack_500;
  long *****ppppplStack_4f8;
  long *****ppppplStack_4f0;
  long *****ppppplStack_4e8;
  long *****ppppplStack_4e0;
  ulong uStack_4d8;
  long ****pppplStack_4d0;
  long *****ppppplStack_4c8;
  undefined1 *puStack_4c0;
  code *pcStack_4b8;
  long *****ppppplStack_4a8;
  long ****pppplStack_4a0;
  uint uStack_494;
  long *****ppppplStack_490;
  long *****ppppplStack_488;
  long *****ppppplStack_480;
  undefined8 *puStack_478;
  long *plStack_470;
  undefined8 *puStack_468;
  long *****ppppplStack_460;
  long *plStack_458;
  long *****ppppplStack_450;
  long ****pppplStack_448;
  undefined8 uStack_440;
  uint uStack_438;
  undefined4 uStack_434;
  undefined8 uStack_430;
  uint uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  ulong uStack_414;
  undefined4 uStack_40c;
  undefined8 uStack_408;
  long *****ppppplStack_400;
  long *****ppppplStack_3f8;
  long *****ppppplStack_3f0;
  long *****ppppplStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  uint uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
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
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_1a8;
  undefined1 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined1 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  float fStack_d8;
  undefined4 uStack_d4;
  long *****ppppplStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)*param_3;
  (**(code **)(*plVar9 + 0x30))();
  plVar31 = (long *)plVar9[3];
  plVar9 = (long *)*param_2;
  (**(code **)(*plVar9 + 0x38))();
  ppppplVar10 = *param_4;
  ppppplStack_490 = (long *****)param_4;
  plStack_470 = plVar9;
  if (ppppplVar10 == (long *****)0x0) {
    ppppplVar10 = (long *****)0x0;
  }
  else {
    (*(code *)(*ppppplVar10)[6])();
  }
  plVar9 = plVar31;
  func_0x00010a08f140();
  plVar11 = plVar31;
  func_0x00010a08f1bc();
  plVar9 = (long *)*plVar9;
  ppppplStack_400 = (long *****)0x0;
  ppppplStack_3f8 = (long *****)0x0;
  pbVar12 = (byte *)0x113836510;
  FUN_10ad0621c();
  if ((*pbVar12 >> 5 & 1) == 0) {
LAB_10a1a0d3c:
    ppppplStack_480 = (long *****)0x0;
LAB_10a1a0d40:
    pppppplVar35 = (long ******)0x0;
LAB_10a1a0d44:
    lVar36 = plVar9[2];
    ppppplStack_4a8 = (long *****)plVar9[3];
    __ZNSt3__115recursive_mutex4lockEv();
    FUN_10a012fec(&ppppplStack_3f0,*plVar9,lVar36);
    ppppplVar32 = ppppplStack_3e8;
    ppppplStack_400 = ppppplStack_3f0;
    ppppplVar29 = ppppplStack_3f8;
    ppppplStack_3f0 = (long *****)0x0;
    ppppplStack_3e8 = (long *****)0x0;
    ppppplStack_3f8 = ppppplVar32;
    if ((long ******)ppppplVar29 != (long ******)0x0) {
      pppppplVar14 = (long ******)(ppppplVar29 + 1);
      do {
        ppppplVar32 = *pppppplVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
        if (bVar4) {
          *pppppplVar14 = (long *****)((long)ppppplVar32 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppplVar32 == (long *****)0x0) {
        (*(code *)(*ppppplVar29)[2])(ppppplVar29);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar29);
      }
    }
    ppppplVar29 = ppppplStack_3e8;
    if ((long ******)ppppplStack_3e8 != (long ******)0x0) {
      pppppplVar14 = (long ******)(ppppplStack_3e8 + 1);
      do {
        ppppplVar32 = *pppppplVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
        if (bVar4) {
          *pppppplVar14 = (long *****)((long)ppppplVar32 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppplVar32 == (long *****)0x0) {
        (*(code *)(*ppppplStack_3e8)[2])(ppppplStack_3e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar29);
      }
    }
    pppppplVar14 = (long ******)ppppplStack_400;
    (*(code *)(*ppppplStack_400)[8])();
    uStack_494 = 1;
  }
  else {
    ppuVar13 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puVar33 = *ppuVar13;
    if (puVar33 == (undefined *)0x0) goto LAB_10a1a0d3c;
    pppppplVar35 = (long ******)(puVar33 + 0x18);
    ppppplStack_480 = (long *****)pppppplVar35;
    if ((puVar33[0x139] != '\x01') ||
       (pppppplVar14 = pppppplVar35, FUN_10a1a38ec(pppppplVar35,plVar31,&UNK_10f6417ae,0x1137ea811),
       (int)pppppplVar14 == 0)) goto LAB_10a1a0d40;
    FUN_10a08d3ec(pppppplVar35,plVar9 + 2);
    pppppplVar14 = pppppplVar35;
    func_0x00010a08dfb4();
    if ((puVar33[0xc0] & 1) == 0) goto LAB_10a1a1a24;
    if (pppppplVar14 == (long ******)0x0) goto LAB_10a1a0d44;
    uStack_494 = 0;
  }
  uStack_c8 = 0;
  ppppplStack_d0 = (long *****)0x3f800000;
  uStack_b8 = 0;
  uStack_c0 = 0x3f80000000000000;
  uStack_a8 = 0x3f800000;
  uStack_b0 = 0;
  uStack_a0 = 0;
  fVar37 = *(float *)(param_5 + 1);
  fVar39 = *(float *)((long)param_5 + 0x14);
  fStack_d8 = *(float *)(param_5 + 4);
  fVar43 = fVar37 + fVar39 * 0.0 + fStack_d8 * 0.0;
  fVar46 = (fVar37 * 0.0 - fVar39) + fStack_d8 * 0.0;
  fStack_d8 = fVar39 + fVar37 * 0.0 + fStack_d8;
  fStack_f8 = fVar46 * 0.0 + fVar43 * 0.5 + fStack_d8 * 0.0;
  fVar46 = fVar46 * 0.5;
  fStack_e8 = fVar46 + fVar43 * 0.0 + fStack_d8 * 0.0;
  fStack_d8 = fStack_d8 + fVar46 + fVar43 * 0.5;
  uStack_f4 = 0;
  uStack_e4 = 0;
  fVar41 = (float)*(undefined8 *)((long)param_5 + 0xc);
  fVar42 = (float)((ulong)*(undefined8 *)((long)param_5 + 0xc) >> 0x20);
  fVar37 = (float)*param_5;
  fVar43 = (float)((ulong)*param_5 >> 0x20);
  fVar39 = (float)param_5[3];
  fVar46 = (float)((ulong)param_5[3] >> 0x20);
  fVar44 = fVar37 + fVar41 * 0.0 + fVar39 * 0.0;
  fVar45 = fVar43 + fVar42 * 0.0 + fVar46 * 0.0;
  fVar47 = -fVar41 + fVar37 * 0.0 + fVar39 * 0.0;
  fVar48 = -fVar42 + fVar43 * 0.0 + fVar46 * 0.0;
  fVar39 = fVar41 + fVar37 * 0.0 + fVar39;
  fVar46 = fVar42 + fVar43 * 0.0 + fVar46;
  fVar37 = fVar47 * 0.5;
  fVar43 = fVar48 * 0.5;
  uStack_e0 = CONCAT44(fVar46 + fVar43 + fVar45 * 0.5,fVar39 + fVar37 + fVar44 * 0.5);
  uStack_100 = CONCAT44(fVar48 * 0.0 + fVar45 * 0.5 + fVar46 * 0.0,
                        fVar47 * 0.0 + fVar44 * 0.5 + fVar39 * 0.0);
  uStack_f0 = CONCAT44(fVar43 + fVar45 * 0.0 + fVar46 * 0.0,fVar37 + fVar44 * 0.0 + fVar39 * 0.0);
  uStack_d4 = 0;
  uStack_428 = *(uint *)((long)param_1 + 0x54) & 0xc | -*(uint *)((long)param_1 + 0x54) & 3;
  uStack_424 = 0;
  uStack_420 = 0;
  uStack_414 = 0;
  uStack_41c = 0;
  uStack_418 = 0;
  uStack_40c = 0;
  uStack_408 = 1;
  FUN_10a19e730(&ppppplStack_3f0,&uStack_428,0,0);
  ppppplStack_d0 = ppppplStack_3f0;
  uStack_c8 = 0;
  uStack_c0 = uStack_3e0;
  uStack_b8 = 0;
  uStack_a8 = 0x3f800000;
  FUN_10a1a44c0(&uStack_428,*plVar11,&uStack_100);
  if ((*(byte *)(*plVar11 + 0x440) & 1) == 0) {
LAB_10a1a1a24:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1a1a28);
    (*pcVar6)();
  }
  puVar23 = (undefined8 *)(*plVar11 + 0xe0);
  func_0x00010a155a18();
  puStack_478 = puVar23;
  if ((*(byte *)(*plVar11 + 0x440) & 1) == 0) goto LAB_10a1a1a24;
  puVar23 = (undefined8 *)(*plVar11 + 0x98);
  func_0x00010a1559cc();
  puStack_468 = puVar23;
  if (pppppplVar35 != (long ******)0x0) {
    FUN_10a097928(pppppplVar35,&uStack_428);
    FUN_10a097890(pppppplVar35,puStack_478);
    FUN_10a097630(pppppplVar35,puStack_468);
    FUN_10a0977f8(pppppplVar35,plStack_470);
  }
  uStack_438 = *(uint *)(param_1 + 6);
  uStack_434 = *(undefined4 *)(param_1 + 8);
  uStack_440 = 0;
  uStack_430 = 0x3f80000000000000;
  pppppplVar15 = (long ******)*param_3;
  (*(code *)(*pppppplVar15)[7])();
  lVar36 = *plVar9;
  if ((*(byte *)(lVar36 + 0x5c) & 1) == 0) {
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3bc = 0;
    ppppplStack_3e8 = (long *****)0x0;
    ppppplStack_3f0 = (long *****)0x0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_2b0 = 0xffffffffffffffff;
    uStack_2a0 = 0;
    uStack_2a8 = 0;
    uStack_290 = 0;
    uStack_298 = 0;
    uStack_280 = 0;
    uStack_288 = 0;
    uStack_270 = 0;
    uStack_278 = 0;
    uStack_260 = 0;
    uStack_268 = 0;
    uStack_250 = 0;
    uStack_258 = 0;
    uStack_240 = 0;
    uStack_248 = 0;
    uStack_230 = 0;
    uStack_238 = 0;
    uStack_220 = 0;
    uStack_228 = 0;
    uStack_218 = 0;
    pppppplVar17 = param_1;
    FUN_10a1a3710(param_1,*pppppplVar15);
    pppppplVar18 = (long ******)*pppppplVar17;
    pppplStack_448 = (long ****)pppppplVar17[1];
    if ((long *****)pppplStack_448 != (long *****)0x0) {
      ppppplVar29 = (long *****)(pppplStack_448 + 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppplVar29,0x10);
        if (bVar4) {
          *ppppplVar29 = (long ****)((long)*ppppplVar29 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppppplStack_450 = (long *****)pppppplVar18;
    func_0x000109296cdc(&ppppplStack_460,*plVar9,pppppplVar18,*pppppplVar15);
    uStack_2c0 = 1;
    uStack_3d8 = 0x3f80000000000000;
    uStack_3e0 = 0;
    ppppplStack_3e8 = ppppplStack_460;
    ppppplStack_3f0 = (long *****)pppppplVar18;
    (*(code *)(*pppppplVar14)[9])(pppppplVar14,&ppppplStack_3f0);
    if (pppppplVar35 != (long ******)0x0) {
      FUN_10a097500(pppppplVar35,&ppppplStack_460);
      FUN_10a097468(pppppplVar35,&ppppplStack_450);
    }
    plVar31 = plStack_458;
    if (plStack_458 != (long *)0x0) {
      plVar11 = plStack_458 + 1;
      do {
        lVar27 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar27 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar27 == 0) {
        (**(code **)(*plStack_458 + 0x10))(plStack_458);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
      }
    }
    pppplVar22 = pppplStack_448;
    if ((long *****)pppplStack_448 != (long *****)0x0) {
      ppppplVar29 = (long *****)(pppplStack_448 + 1);
      do {
        pppplVar28 = *ppppplVar29;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppplVar29,0x10);
        if (bVar4) {
          *ppppplVar29 = (long ****)((long)pppplVar28 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppplVar28 == (long ****)0x0) {
        (*(code *)(*pppplStack_448)[2])(pppplStack_448);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar22);
      }
    }
  }
  else {
    ppppplStack_3f0 = (long *****)CONCAT44(ppppplStack_3f0._4_4_,1);
    uStack_15c = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    _bzero((ulong)&ppppplStack_3f0 | 4,0x28d);
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_118 = 0;
    uStack_108 = 0xffffffffffffffff;
    puVar16 = (uint *)0x113836510;
    FUN_10ad0621c();
    uStack_3c8 = (*puVar16 >> 2 ^ 0xffffffff) & 2;
    if (lStack_1a8 == 0) {
      uStack_3a8 = 0;
      uStack_3bc = 0;
      uStack_3d0 = 0;
      uStack_3d8 = 0;
    }
    lStack_1a8 = 1;
    ppppplStack_3e8 = *pppppplVar15;
    uStack_3e0 = 0;
    uStack_3c4 = 1;
    uStack_3c0 = 2;
    uStack_3b0 = 0x3f80000000000000;
    uStack_3b8 = 0;
    func_0x00010a1a3a00(ppppplStack_400,ppppplStack_480,*pppppplVar15);
    (*(code *)(*pppppplVar14)[10])(pppppplVar14,&ppppplStack_3f0);
  }
  pppppplVar18 = param_1;
  FUN_10a1a3208(param_1,*plVar9);
  FUN_10a1adf98();
  param_3 = (long *)*param_3;
  (**(code **)(*param_3 + 0x30))();
  func_0x000109293c4c(pppppplVar18,(int)param_3[8],2,2,2);
  func_0x000109294420();
  ppppplVar32 = *pppppplVar18;
  ppppplVar29 = ppppplVar32;
  (*(code *)(*ppppplVar32)[6])();
  if (((ulong)ppppplVar29[6] & 1) == 0) goto LAB_10a1a1a24;
  pppplVar22 = *ppppplVar29;
  ppppplStack_488 = (long *****)pppppplVar15;
  if (ppppplVar29[1] == pppplVar22) goto LAB_10a1a1a24;
  ppppplVar26 = pppppplVar18[2];
  pppplStack_4a0 = (long ****)ppppplVar10;
  if (pppppplVar18[3] == ppppplVar26) goto LAB_10a1a1a24;
  pppppplVar15 = param_1;
  FUN_10a1a3208(param_1,*plVar9);
  FUN_10a1a43f0(&ppppplStack_3f0,pppppplVar15,ppppplVar26);
  if (ppppplVar29[1] == *ppppplVar29) goto LAB_10a1a1a24;
  uVar34 = (ulong)*(uint *)*ppppplVar29;
  (*(code *)(*pppppplVar14)[0xf])(pppppplVar14,ppppplVar32);
  (*(code *)(*pppppplVar14)[0xe])(pppppplVar14,&uStack_440);
  (*(code *)(*pppppplVar14)[0x13])(pppppplVar14,0,ppppplVar32[0xa0],*puStack_468,0);
  if (pppplVar22[2] == pppplVar22[1]) goto LAB_10a1a1a24;
  (*(code *)(*ppppplStack_3f0)[7])
            (ppppplStack_3f0,*(undefined4 *)(pppplVar22[1] + 3),CONCAT44(uStack_424,uStack_428),
             uStack_418,uStack_414 & 0xffffffff,0);
  if (pppplVar22[8] == pppplVar22[7]) goto LAB_10a1a1a24;
  (*(code *)(*ppppplStack_3f0)[9])
            (ppppplStack_3f0,*(undefined4 *)(pppplVar22[7] + 3),*plStack_470,5,0);
  if (pppplVar22[0xe] == pppplVar22[0xd]) goto LAB_10a1a1a24;
  (*(code *)(*ppppplStack_3f0)[0xc])
            (ppppplStack_3f0,*(undefined4 *)(pppplVar22[0xd] + 3),*puStack_478,0);
  (*(code *)(*pppppplVar14)[0x10])(pppppplVar14,uVar34,ppppplVar32[0xa0],ppppplStack_3f0,0,0);
  pppppplVar15 = (long ******)0x4;
  ppppplVar10 = (long *****)0x0;
  plVar31 = (long *)0x1;
  puVar23 = (undefined8 *)0x0;
  (*(code *)(*pppppplVar14)[0x15])(pppppplVar14);
  (*(code *)(*pppppplVar14)[8])(pppppplVar14);
  if (*(char *)(lVar36 + 0x5c) == '\x01') {
    ppppplVar10 = (long *****)*ppppplStack_488;
    pppppplVar15 = (long ******)ppppplStack_480;
    FUN_10a1a42fc(ppppplStack_400);
  }
  if (pppppplVar35 != (long ******)0x0) {
    FUN_10a0979c0(pppppplVar35,ppppplStack_488);
    FUN_10a097598(pppppplVar35,pppppplVar18);
    pppppplVar15 = &ppppplStack_3f0;
    FUN_10a0973d0(pppppplVar35);
  }
  ppppplVar29 = ppppplStack_3e8;
  pppppplVar17 = (long ******)ppppplStack_490;
  ppppplStack_488 = (long *****)pppppplVar35;
  if ((long ******)ppppplStack_3e8 != (long ******)0x0) {
    pppppplVar19 = (long ******)(ppppplStack_3e8 + 1);
    do {
      ppppplVar26 = *pppppplVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppplVar19,0x10);
      if (bVar4) {
        *pppppplVar19 = (long *****)((long)ppppplVar26 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppppplVar26 == (long *****)0x0) {
      (*(code *)(*ppppplStack_3e8)[2])(ppppplStack_3e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar29);
    }
  }
  pppppplVar19 = (long ******)*pppppplVar17;
  if (pppppplVar19 != (long ******)0x0) {
    uStack_438 = *(uint *)(param_1 + 6) >> 1;
    uStack_434 = *(undefined4 *)((long)param_1 + 0x44);
    uStack_440 = 0;
    uStack_430 = 0x3f80000000000000;
    (*(code *)(*pppppplVar19)[7])();
    lVar36 = *plVar9;
    if ((*(byte *)(lVar36 + 0x5c) & 1) == 0) {
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_3c8 = 0;
      uStack_3c4 = 0;
      uStack_3d0 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3bc = 0;
      ppppplStack_3e8 = (long *****)0x0;
      ppppplStack_3f0 = (long *****)0x0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_2b0 = 0xffffffffffffffff;
      uStack_2a0 = 0;
      uStack_2a8 = 0;
      uStack_290 = 0;
      uStack_298 = 0;
      uStack_280 = 0;
      uStack_288 = 0;
      uStack_270 = 0;
      uStack_278 = 0;
      uStack_260 = 0;
      uStack_268 = 0;
      uStack_250 = 0;
      uStack_258 = 0;
      uStack_240 = 0;
      uStack_248 = 0;
      uStack_230 = 0;
      uStack_238 = 0;
      uStack_220 = 0;
      uStack_228 = 0;
      uStack_218 = 0;
      pppppplVar15 = param_1;
      FUN_10a1a3710(param_1,*pppppplVar19);
      pppppplVar35 = (long ******)*pppppplVar15;
      pppplStack_448 = (long ****)pppppplVar15[1];
      if ((long *****)pppplStack_448 != (long *****)0x0) {
        ppppplVar10 = (long *****)(pppplStack_448 + 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
          if (bVar4) {
            *ppppplVar10 = (long ****)((long)*ppppplVar10 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppppplStack_450 = (long *****)pppppplVar35;
      func_0x000109296cdc(&ppppplStack_460,*plVar9,pppppplVar35,*pppppplVar19);
      uStack_2c0 = 1;
      uStack_3d8 = 0x3f80000000000000;
      uStack_3e0 = 0;
      ppppplStack_3e8 = ppppplStack_460;
      ppppplStack_3f0 = (long *****)pppppplVar35;
      (*(code *)(*pppppplVar14)[9])(pppppplVar14,&ppppplStack_3f0);
      ppppplVar10 = ppppplStack_488;
      if ((long ******)ppppplStack_488 != (long ******)0x0) {
        FUN_10a097500(ppppplStack_488,&ppppplStack_460);
        FUN_10a097468(ppppplVar10,&ppppplStack_450);
      }
      if (plStack_458 != (long *)0x0) {
        plVar31 = plStack_458 + 1;
        do {
          lVar27 = *plVar31;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar31,0x10);
          if (bVar4) {
            *plVar31 = lVar27 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plStack_458 + 0x10))(plStack_458);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_458);
        }
      }
      pppplVar22 = pppplStack_448;
      if ((long *****)pppplStack_448 != (long *****)0x0) {
        ppppplVar10 = (long *****)(pppplStack_448 + 1);
        do {
          pppplVar28 = *ppppplVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
          if (bVar4) {
            *ppppplVar10 = (long ****)((long)pppplVar28 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pppplVar28 == (long ****)0x0) {
          (*(code *)(*pppplStack_448)[2])(pppplStack_448);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar22);
        }
      }
    }
    else {
      ppppplStack_3f0 = (long *****)CONCAT44(ppppplStack_3f0._4_4_,1);
      uStack_15c = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      _bzero((ulong)&ppppplStack_3f0 | 4,0x28d);
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_150 = 0;
      uStack_158 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_118 = 0;
      uStack_108 = 0xffffffffffffffff;
      puVar16 = (uint *)0x113836510;
      FUN_10ad0621c();
      uStack_3c8 = (*puVar16 >> 2 ^ 0xffffffff) & 2;
      if (lStack_1a8 == 0) {
        uStack_3a8 = 0;
        uStack_3bc = 0;
        uStack_3d0 = 0;
        uStack_3d8 = 0;
      }
      lStack_1a8 = 1;
      ppppplStack_3e8 = *pppppplVar19;
      uStack_3e0 = 0;
      uStack_3c4 = 1;
      uStack_3c0 = 2;
      uStack_3b0 = 0x3f80000000000000;
      uStack_3b8 = 0;
      func_0x00010a1a3a00(ppppplStack_400,ppppplStack_480,*pppppplVar19);
      (*(code *)(*pppppplVar14)[10])(pppppplVar14,&ppppplStack_3f0);
    }
    pppppplVar17 = param_1;
    FUN_10a1a3208(param_1,*plVar9);
    FUN_10a1adf98();
    func_0x000109293c4c();
    func_0x000109294420();
    ppppplVar32 = *pppppplVar17;
    ppppplVar10 = ppppplVar32;
    (*(code *)(*ppppplVar32)[6])();
    if ((((ulong)ppppplVar10[6] & 1) == 0) ||
       (pppplVar22 = *ppppplVar10, ppppplVar10[1] == pppplVar22)) goto LAB_10a1a1a24;
    pppppplVar18 = (long ******)pppppplVar17[2];
    if ((long ******)pppppplVar17[3] == pppppplVar18) goto LAB_10a1a1a24;
    FUN_10a1a3208(param_1,*plVar9);
    FUN_10a1a43f0(&ppppplStack_3f0,param_1,pppppplVar18);
    param_1 = (long ******)ppppplStack_488;
    if (ppppplVar10[1] == *ppppplVar10) goto LAB_10a1a1a24;
    uVar34 = (ulong)*(uint *)*ppppplVar10;
    (*(code *)(*pppppplVar14)[0xf])(pppppplVar14,ppppplVar32);
    (*(code *)(*pppppplVar14)[0xe])(pppppplVar14,&uStack_440);
    (*(code *)(*pppppplVar14)[0x13])(pppppplVar14,0,ppppplVar32[0xa0],*puStack_468,0);
    if (pppplVar22[2] == pppplVar22[1]) goto LAB_10a1a1a24;
    (*(code *)(*ppppplStack_3f0)[7])
              (ppppplStack_3f0,*(undefined4 *)(pppplVar22[1] + 3),CONCAT44(uStack_424,uStack_428),
               uStack_418,uStack_414 & 0xffffffff,0);
    if (pppplVar22[8] == pppplVar22[7]) goto LAB_10a1a1a24;
    (*(code *)(*ppppplStack_3f0)[9])
              (ppppplStack_3f0,*(undefined4 *)(pppplVar22[7] + 3),*plStack_470,5,0);
    if (pppplVar22[0xe] == pppplVar22[0xd]) goto LAB_10a1a1a24;
    (*(code *)(*ppppplStack_3f0)[0xc])
              (ppppplStack_3f0,*(undefined4 *)(pppplVar22[0xd] + 3),*puStack_478,0);
    (*(code *)(*pppppplVar14)[0x10])(pppppplVar14,uVar34,ppppplVar32[0xa0],ppppplStack_3f0,0,0);
    pppppplVar15 = (long ******)0x4;
    ppppplVar10 = (long *****)0x0;
    plVar31 = (long *)0x1;
    puVar23 = (undefined8 *)0x0;
    (*(code *)(*pppppplVar14)[0x15])(pppppplVar14);
    (*(code *)(*pppppplVar14)[8])(pppppplVar14);
    if (*(char *)(lVar36 + 0x5c) == '\x01') {
      ppppplVar10 = *pppppplVar19;
      pppppplVar15 = (long ******)ppppplStack_480;
      FUN_10a1a42fc(ppppplStack_400);
    }
    if (param_1 != (long ******)0x0) {
      FUN_10a0979c0(param_1,pppppplVar19);
      FUN_10a097598(param_1,pppppplVar17);
      pppppplVar15 = &ppppplStack_3f0;
      FUN_10a0973d0(param_1);
    }
    ppppplVar29 = ppppplStack_3e8;
    pppppplVar35 = pppppplVar19;
    if ((long ******)ppppplStack_3e8 != (long ******)0x0) {
      pppppplVar19 = (long ******)(ppppplStack_3e8 + 1);
      do {
        ppppplVar26 = *pppppplVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppplVar19,0x10);
        if (bVar4) {
          *pppppplVar19 = (long *****)((long)ppppplVar26 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppplVar26 == (long *****)0x0) {
        (*(code *)(*ppppplStack_3e8)[2])(ppppplStack_3e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar29);
      }
    }
  }
  pppppplVar19 = (long ******)ppppplStack_400;
  if ((long ******)ppppplStack_400 != (long ******)0x0) {
    FUN_10a08e2f4();
  }
  pppppplVar20 = (long ******)CONCAT44(uStack_41c,uStack_420);
  if (pppppplVar20 != (long ******)0x0) {
    pppppplVar1 = pppppplVar20 + 1;
    do {
      ppppplVar29 = *pppppplVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
      if (bVar4) {
        *pppppplVar1 = (long *****)((long)ppppplVar29 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppppplVar29 == (long *****)0x0) {
      (*(code *)(*pppppplVar20)[2])(pppppplVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppplVar19 = pppppplVar20;
    }
  }
  pppppplVar20 = (long ******)ppppplStack_3f8;
  if ((long ******)ppppplStack_3f8 != (long ******)0x0) {
    pppppplVar1 = (long ******)(ppppplStack_3f8 + 1);
    do {
      ppppplVar29 = *pppppplVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
      if (bVar4) {
        *pppppplVar1 = (long *****)((long)ppppplVar29 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppppplVar29 == (long *****)0x0) {
      (*(code *)(*ppppplStack_3f8)[2])(ppppplStack_3f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppplVar19 = pppppplVar20;
    }
  }
  if (uStack_494 != 0) {
    pppppplVar19 = (long ******)ppppplStack_4a8;
    __ZNSt3__115recursive_mutex6unlockEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a0eb82c(&ppppplStack_450);
  func_0x00010a045fb4(&uStack_428);
  func_0x00010a054cfc(&ppppplStack_400);
  if ((uStack_494 & 1) != 0) {
    __ZNSt3__115recursive_mutex6unlockEv(ppppplStack_4a8);
  }
  pppppplVar20 = pppppplVar19;
  __Unwind_Resume();
  pcStack_4b8 = FUN_10a1a1b04;
  lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar8 = 0xbe2;
  plStack_510 = plVar9;
  ppplStack_508 = (long ***)pppplVar22;
  ppppplStack_500 = (long *****)pppppplVar18;
  ppppplStack_4f8 = (long *****)pppppplVar17;
  ppppplStack_4f0 = (long *****)pppppplVar14;
  ppppplStack_4e8 = (long *****)param_1;
  ppppplStack_4e0 = (long *****)pppppplVar35;
  uStack_4d8 = uVar34;
  pppplStack_4d0 = (long ****)ppppplVar32;
  ppppplStack_4c8 = (long *****)pppppplVar19;
  puStack_4c0 = &stack0xfffffffffffffff0;
  _glIsEnabled();
  uStack_d51 = iVar8 != 0;
  uVar7 = 0xbe2;
  _glDisable();
  puStack_d68 = &uStack_d51;
  __ZSt19uncaught_exceptionsv();
  uStack_d60 = uVar7;
  if ((*(byte *)((long)pppppplVar20 + 0x7c4) & 1) == 0) {
    if (*(int *)(pppppplVar20 + 0x184) == 0) {
      uVar21 = 1;
      FUN_10a303694(1);
      FUN_10a301f68(&uStack_970,uVar21);
      ppppplVar29 = pppppplVar20[0x185];
      pppplStack_d50 = (long ****)pppppplVar20[0x184];
      uStack_d48 = SUB84(ppppplVar29,0);
      uVar21 = *(undefined8 *)((long)pppppplVar20 + 0xc2c);
      uStack_d3c = (undefined4)*(undefined8 *)((long)pppppplVar20 + 0xc34);
      uStack_d38 = (uint)((ulong)*(undefined8 *)((long)pppppplVar20 + 0xc34) >> 0x20);
      uStack_d44 = (undefined4)uVar21;
      uStack_d40 = (undefined4)((ulong)uVar21 >> 0x20);
      pppppplVar20[0x185] = (long *****)CONCAT17(uStack_959,CONCAT43(uStack_95d,uStack_961._1_3_));
      pppppplVar20[0x184] =
           (long *****)CONCAT17((undefined1)uStack_961,CONCAT43(uStack_965,uStack_968));
      *(ulong *)((long)pppppplVar20 + 0xc34) = CONCAT44(uStack_950,uStack_954);
      *(ulong *)((long)pppppplVar20 + 0xc2c) =
           CONCAT44(uStack_958,CONCAT13(uStack_959,uStack_95d._1_3_));
      uStack_961._1_3_ = SUB83(ppppplVar29,0);
      uStack_968 = SUB83(pppplStack_d50,0);
      uStack_965 = (undefined4)((ulong)pppplStack_d50 >> 0x18);
      uStack_961._0_1_ = (undefined1)((ulong)pppplStack_d50 >> 0x38);
      uStack_95d._0_1_ = (undefined1)((ulong)ppppplVar29 >> 0x18);
      uStack_95d._1_3_ = (undefined3)uVar21;
      uStack_959 = (undefined1)((ulong)uVar21 >> 0x18);
      uStack_958 = uStack_d40;
      uStack_954 = uStack_d3c;
      uStack_950 = uStack_d38;
      _memcpy(&pppplStack_d50,(undefined *)((long)pppppplVar20 + 0xc3c),0x3e0);
      _memcpy((undefined *)((long)pppppplVar20 + 0xc3c),auStack_94c,0x3e0);
      _memcpy(auStack_94c,&pppplStack_d50,0x3e0);
      lVar36 = 0;
      do {
        puVar5 = (undefined8 *)((long)pppppplVar20 + lVar36 + 0x101c);
        uVar38 = puVar5[1];
        uVar21 = *puVar5;
        uVar40 = *(undefined8 *)((long)auStack_56c + lVar36);
        puVar5 = (undefined8 *)((long)pppppplVar20 + lVar36 + 0x101c);
        puVar5[1] = *(undefined8 *)((long)auStack_56c + lVar36 + 8);
        *puVar5 = uVar40;
        *(undefined8 *)((long)auStack_56c + lVar36 + 8) = uVar38;
        *(undefined8 *)((long)auStack_56c + lVar36) = uVar21;
        lVar36 = lVar36 + 0x10;
      } while (lVar36 != 0x40);
      pppppplVar20[0x183] = (long *****)CONCAT53(uStack_96d,uStack_970);
      uStack_970 = 0;
      uStack_96d = 0;
      FUN_10a30206c(&uStack_970);
    }
    if (*(int *)(pppppplVar20 + 0x20e) == 0) {
      uVar21 = 1;
      FUN_10a303694(1);
      FUN_10a301f68(&uStack_970,uVar21);
      ppppplVar29 = pppppplVar20[0x20f];
      pppplStack_d50 = (long ****)pppppplVar20[0x20e];
      uStack_d48 = SUB84(ppppplVar29,0);
      uVar21 = *(undefined8 *)((long)pppppplVar20 + 0x107c);
      uStack_d3c = (undefined4)*(undefined8 *)((long)pppppplVar20 + 0x1084);
      uStack_d38 = (uint)((ulong)*(undefined8 *)((long)pppppplVar20 + 0x1084) >> 0x20);
      uStack_d44 = (undefined4)uVar21;
      uStack_d40 = (undefined4)((ulong)uVar21 >> 0x20);
      pppppplVar20[0x20f] = (long *****)CONCAT17(uStack_959,CONCAT43(uStack_95d,uStack_961._1_3_));
      pppppplVar20[0x20e] =
           (long *****)CONCAT17((undefined1)uStack_961,CONCAT43(uStack_965,uStack_968));
      *(ulong *)((long)pppppplVar20 + 0x1084) = CONCAT44(uStack_950,uStack_954);
      *(ulong *)((long)pppppplVar20 + 0x107c) =
           CONCAT44(uStack_958,CONCAT13(uStack_959,uStack_95d._1_3_));
      uStack_961._1_3_ = SUB83(ppppplVar29,0);
      uStack_968 = SUB83(pppplStack_d50,0);
      uStack_965 = (undefined4)((ulong)pppplStack_d50 >> 0x18);
      uStack_961._0_1_ = (undefined1)((ulong)pppplStack_d50 >> 0x38);
      uStack_95d._0_1_ = (undefined1)((ulong)ppppplVar29 >> 0x18);
      uStack_95d._1_3_ = (undefined3)uVar21;
      uStack_959 = (undefined1)((ulong)uVar21 >> 0x18);
      uStack_958 = uStack_d40;
      uStack_954 = uStack_d3c;
      uStack_950 = uStack_d38;
      _memcpy(&pppplStack_d50,(undefined *)((long)pppppplVar20 + 0x108c),0x3e0);
      _memcpy((undefined *)((long)pppppplVar20 + 0x108c),auStack_94c,0x3e0);
      _memcpy(auStack_94c,&pppplStack_d50,0x3e0);
      lVar36 = 0;
      do {
        puVar5 = (undefined8 *)((long)pppppplVar20 + lVar36 + 0x146c);
        uVar38 = puVar5[1];
        uVar21 = *puVar5;
        uVar40 = *(undefined8 *)((long)auStack_56c + lVar36);
        puVar5 = (undefined8 *)((long)pppppplVar20 + lVar36 + 0x146c);
        puVar5[1] = *(undefined8 *)((long)auStack_56c + lVar36 + 8);
        *puVar5 = uVar40;
        *(undefined8 *)((long)auStack_56c + lVar36 + 8) = uVar38;
        *(undefined8 *)((long)auStack_56c + lVar36) = uVar21;
        lVar36 = lVar36 + 0x10;
      } while (lVar36 != 0x40);
      pppppplVar20[0x20d] = (long *****)CONCAT53(uStack_96d,uStack_970);
      uStack_970 = 0;
      uStack_96d = 0;
      FUN_10a30206c(&uStack_970);
    }
  }
  pppplStack_d50 = (long ****)0x0;
  uStack_d48 = 0;
  uStack_d44 = 0;
  uStack_d38 = uStack_d38 & 0xffffff00;
  uStack_d40 = 0;
  uStack_d3c = 0;
  if (*(char *)((long)pppppplVar20 + 0x7c4) == '\x01') {
    ppuVar13 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    uVar7 = *(undefined4 *)(pppppplVar20 + 0xf5);
    uVar25 = *(undefined4 *)(pppppplVar20 + 0xf7);
    lVar36 = *(long *)(*ppuVar13 + 0x10);
    uStack_970 = 0x635282;
    uStack_96d = 0x10f;
    uStack_968 = 0x2b;
    uStack_965 = 0;
    uStack_961 = uStack_961 & 0xffffff00;
    if (lVar36 != 0) {
      func_0x00010ab9ca70(&uStack_970,*ppppplVar10,0);
      uVar24 = 0x8ca9;
      if (uStack_948 < 2) {
        uVar24 = 0x8d40;
      }
      FUN_10ab9cbe8(&uStack_d90,lVar36 + 0x50,uVar24,&uStack_970,0,CONCAT44(uVar25,uVar7),0);
      FUN_10ab9b224(&pppplStack_d50,&uStack_d90);
      FUN_10ab9ce18(&uStack_d90);
      goto LAB_10a1a1e88;
    }
  }
  else {
    *(undefined4 *)((long)pppppplVar20 + 0xc24) = 0x8d40;
    func_0x00010a3022a4(pppppplVar20 + 0x183);
    pppplVar22 = *ppppplVar10;
    (*(code *)(*pppplVar22)[9])();
    iVar8 = (int)pppplVar22;
    if (iVar8 == 0) {
      uVar7 = 0;
      uVar25 = 0;
      uVar24 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(pppppplVar20 + 0xf7);
      uVar25 = *(undefined4 *)(pppppplVar20 + 0xf5);
      uVar24 = 0xde1;
    }
    uStack_965 = 0;
    uStack_961 = 0;
    uStack_96d = 0;
    uStack_968 = 0;
    uStack_95d = 0;
    uVar2 = *(uint *)((long)pppppplVar20 + 0xc3c);
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    *(uint *)((long)pppppplVar20 + 0xc3c) = uVar2;
    *(undefined4 *)((long)pppppplVar20 + 0x101c) = 0x8ce0;
    *(undefined4 *)(pppppplVar20 + 0x18e) = 0x8ce0;
    *(undefined4 *)(pppppplVar20 + 0x188) = uVar24;
    *(int *)((long)pppppplVar20 + 0xc44) = iVar8;
    *(undefined4 *)(pppppplVar20 + 0x189) = uVar25;
    *(undefined4 *)((long)pppppplVar20 + 0xc4c) = uVar7;
    *(bool *)(pppppplVar20 + 0x18a) = iVar8 != 0;
    *(undefined8 *)((long)pppppplVar20 + 0xc59) = 0;
    *(ulong *)((long)pppppplVar20 + 0xc51) = (ulong)uStack_970;
    pppppplVar20[0x18c] = (long *****)0x0;
    pppppplVar20[0x18d] = (long *****)0x1;
    FUN_10a3024c0(pppppplVar20 + 0x183,pppppplVar20 + 0x188);
    _glViewport(0,0,*(undefined4 *)(pppppplVar20 + 0xf5),*(undefined4 *)(pppppplVar20 + 0xf7));
LAB_10a1a1e88:
    FUN_10a3014a0(pppppplVar20 + 0x70);
    ppppplVar10 = *pppppplVar15;
    (*(code *)(*ppppplVar10)[9])();
    FUN_10a31a3c8(pppppplVar20[0x8e],pppppplVar20 + 0x93,*(undefined4 *)(pppppplVar20 + 0x91),
                  ppppplVar10);
    FUN_10a31a478(pppppplVar20[0x98],*(undefined4 *)(pppppplVar20 + 0x9b),
                  (undefined *)((long)pppppplVar20 + 0x14bc));
    fVar37 = (float)*(undefined8 *)((long)puVar23 + 0x1c);
    fVar46 = (float)puVar23[3];
    uStack_d90._0_4_ = (float)*(undefined8 *)((long)pppppplVar20 + 0x14dc);
    uStack_d90._4_4_ = (float)((ulong)*(undefined8 *)((long)pppppplVar20 + 0x14dc) >> 0x20);
    uStack_d88._0_4_ = (float)*(undefined8 *)((long)pppppplVar20 + 0x14e4);
    uStack_d88._4_4_ = (float)((ulong)*(undefined8 *)((long)pppppplVar20 + 0x14e4) >> 0x20);
    uStack_d80._0_4_ = (float)*(undefined8 *)((long)pppppplVar20 + 0x14ec);
    uStack_d80._4_4_ = (float)((ulong)*(undefined8 *)((long)pppppplVar20 + 0x14ec) >> 0x20);
    uStack_d78._0_4_ = (float)*(undefined8 *)((long)pppppplVar20 + 0x14f4);
    uStack_d78._4_4_ = (float)((ulong)*(undefined8 *)((long)pppppplVar20 + 0x14f4) >> 0x20);
    fVar39 = (float)*(undefined8 *)((long)puVar23 + 0xc);
    fVar43 = (float)*puVar23;
    fVar41 = fVar46 + uStack_d90._4_4_ * fVar39 + (float)uStack_d90 * fVar43;
    fVar42 = fVar46 + uStack_d88._4_4_ * fVar39 + (float)uStack_d88 * fVar43;
    fVar44 = fVar46 + uStack_d80._4_4_ * fVar39 + (float)uStack_d80 * fVar43;
    fVar46 = fVar46 + uStack_d78._4_4_ * fVar39 + (float)uStack_d78 * fVar43;
    fVar43 = (float)puVar23[2];
    fVar39 = (float)*(undefined8 *)((long)puVar23 + 4);
    fVar45 = fVar37 + uStack_d90._4_4_ * fVar43 + (float)uStack_d90 * fVar39;
    fVar47 = fVar37 + uStack_d88._4_4_ * fVar43 + (float)uStack_d88 * fVar39;
    fVar48 = fVar37 + uStack_d80._4_4_ * fVar43 + (float)uStack_d80 * fVar39;
    fVar37 = fVar37 + uStack_d78._4_4_ * fVar43 + (float)uStack_d78 * fVar39;
    uStack_d90 = CONCAT44(fVar45,fVar41);
    uStack_d88 = CONCAT44(fVar47,fVar42);
    uStack_d80 = CONCAT44(fVar48,fVar44);
    uStack_d78 = CONCAT44(fVar37,fVar46);
    uStack_d90 = uStack_d90 ^
                 (uStack_d90 ^ uStack_d88) &
                 ~CONCAT44(-(uint)(fVar45 < fVar47),-(uint)(fVar41 < fVar42));
    uStack_d90 = uStack_d90 ^
                 (uStack_d90 ^ uStack_d80) &
                 ~CONCAT44(-(uint)((float)(uStack_d90 >> 0x20) < fVar48),
                           -(uint)((float)uStack_d90 < fVar44));
    uStack_d90 = uStack_d90 ^
                 (uStack_d90 ^ uStack_d78) &
                 ~CONCAT44(-(uint)((float)(uStack_d90 >> 0x20) < fVar37),
                           -(uint)((float)uStack_d90 < fVar46));
    fVar39 = (float)uStack_d90;
    fVar43 = (float)(uStack_d90 >> 0x20);
    uStack_d80 = CONCAT44(fVar48 - fVar43,fVar44 - fVar39);
    uStack_d78 = CONCAT44(fVar37 - fVar43,fVar46 - fVar39);
    uStack_d90 = CONCAT44(fVar45 - fVar43,fVar41 - fVar39);
    uStack_d88 = CONCAT44(fVar47 - fVar43,fVar42 - fVar39);
    FUN_10a31a478(pppppplVar20[0x94],*(undefined4 *)(pppppplVar20 + 0x97),&uStack_d90);
    _glDrawArrays(6,0,4);
    FUN_10a301590();
    if (*(char *)((long)pppppplVar20 + 0x7c4) == '\x01') {
      uStack_958 = 0;
      uStack_954 = 0;
      uStack_95d = 0;
      uStack_959 = 0;
      uStack_968 = 0;
      uStack_965 = 0;
      uStack_961 = 0;
      uStack_970 = 0;
      uStack_96d = 0;
      FUN_10ab9b224(&pppplStack_d50,&uStack_970);
      FUN_10ab9ce18(&uStack_970);
    }
    else {
      func_0x00010a3022f0(pppppplVar20 + 0x183);
      func_0x00010a302418(pppppplVar20 + 0x183);
      func_0x00010a3020b0(pppppplVar20 + 0x183);
    }
    if (*plVar31 != 0) {
      uStack_db0 = 0;
      uStack_da8 = 0;
      uStack_d98 = 0;
      uStack_da0 = 0;
      if (*(char *)((long)pppppplVar20 + 0x7c4) == '\x01') {
        ppuVar13 = &PTR___tlv_bootstrap_11340de10;
        (*(code *)PTR___tlv_bootstrap_11340de10)();
        iVar8 = *(int *)(pppppplVar20 + 0xf5);
        uVar7 = *(undefined4 *)((long)pppppplVar20 + 0x7bc);
        lVar36 = *(long *)(*ppuVar13 + 0x10);
        uStack_970 = 0x635282;
        uStack_96d = 0x10f;
        uStack_968 = 0x2b;
        uStack_965 = 0;
        uStack_961 = uStack_961 & 0xffffff00;
        if (lVar36 == 0) {
          FUN_10a0edfc4(&uStack_970);
          goto LAB_10a1a2268;
        }
        func_0x00010ab9ca70(&uStack_970,extraout_x9,0);
        uVar25 = 0x8ca9;
        if (uStack_948 < 2) {
          uVar25 = 0x8d40;
        }
        FUN_10ab9cbe8(auStack_dd0,lVar36 + 0x50,uVar25,&uStack_970,0,CONCAT44(uVar7,iVar8 / 2),0);
        FUN_10ab9b224(&uStack_db0,auStack_dd0);
        FUN_10ab9ce18(auStack_dd0);
      }
      else {
        *(undefined4 *)((long)pppppplVar20 + 0x1074) = 0x8d40;
        func_0x00010a3022a4(pppppplVar20 + 0x20d);
        plVar31 = (long *)*plVar31;
        (**(code **)(*plVar31 + 0x48))();
        iVar8 = (int)plVar31;
        if (iVar8 == 0) {
          uVar25 = 0;
          iVar30 = 0;
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)((long)pppppplVar20 + 0x7bc);
          iVar30 = *(int *)(pppppplVar20 + 0xf5) / 2;
          uVar25 = 0xde1;
        }
        uStack_965 = 0;
        uStack_961 = 0;
        uStack_96d = 0;
        uStack_968 = 0;
        uStack_95d = 0;
        uVar2 = *(uint *)((long)pppppplVar20 + 0x108c);
        if (uVar2 < 2) {
          uVar2 = 1;
        }
        *(uint *)((long)pppppplVar20 + 0x108c) = uVar2;
        *(undefined4 *)((long)pppppplVar20 + 0x146c) = 0x8ce0;
        *(undefined4 *)(pppppplVar20 + 0x218) = 0x8ce0;
        *(undefined4 *)(pppppplVar20 + 0x212) = uVar25;
        *(int *)((long)pppppplVar20 + 0x1094) = iVar8;
        *(int *)(pppppplVar20 + 0x213) = iVar30;
        *(bool *)(pppppplVar20 + 0x214) = iVar8 != 0;
        *(undefined8 *)((long)pppppplVar20 + 0x10a9) = 0;
        *(ulong *)((long)pppppplVar20 + 0x10a1) = (ulong)uStack_970;
        *(undefined4 *)((long)pppppplVar20 + 0x109c) = uVar7;
        pppppplVar20[0x216] = (long *****)0x0;
        pppppplVar20[0x217] = (long *****)0x1;
        FUN_10a3024c0(pppppplVar20 + 0x20d,pppppplVar20 + 0x212);
        _glViewport(0,0,*(int *)(pppppplVar20 + 0xf5) / 2,
                    *(undefined4 *)((long)pppppplVar20 + 0x7bc));
      }
      FUN_10a3014a0(pppppplVar20 + 0x9c);
      ppppplVar10 = *pppppplVar15;
      (*(code *)(*ppppplVar10)[9])();
      FUN_10a31a3c8(pppppplVar20[0xba],pppppplVar20 + 0xbf,*(undefined4 *)(pppppplVar20 + 0xbd),
                    ppppplVar10);
      FUN_10a31a478(pppppplVar20[0xc4],*(undefined4 *)(pppppplVar20 + 199),
                    (undefined *)((long)pppppplVar20 + 0x14bc));
      FUN_10a31a478(pppppplVar20[0xc0],*(undefined4 *)(pppppplVar20 + 0xc3),&uStack_d90);
      _glDrawArrays(6,0,4);
      FUN_10a301590();
      if (*(char *)((long)pppppplVar20 + 0x7c4) == '\x01') {
        uStack_958 = 0;
        uStack_954 = 0;
        uStack_95d = 0;
        uStack_959 = 0;
        uStack_968 = 0;
        uStack_965 = 0;
        uStack_961 = 0;
        uStack_970 = 0;
        uStack_96d = 0;
        FUN_10ab9b224(&uStack_db0,&uStack_970);
        FUN_10ab9ce18(&uStack_970);
      }
      else {
        func_0x00010a3022f0(pppppplVar20 + 0x20d);
        func_0x00010a302418(pppppplVar20 + 0x20d);
        func_0x00010a3020b0(pppppplVar20 + 0x20d);
      }
      FUN_10ab9ce18(&uStack_db0);
    }
    FUN_10ab9ce18(&pppplStack_d50);
    FUN_10a1a31c0(&puStack_d68);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_518) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a0edfc4(&uStack_970);
LAB_10a1a2268:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1a226c);
  (*pcVar6)();
}



/* Entry: 10a1a1b04; end: 10a1a22d7;  */

void FUN_10a1a1b04(long param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 extraout_x9;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_920 [32];
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined1 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined1 *puStack_8b8;
  undefined4 uStack_8b0;
  undefined1 uStack_8a1;
  undefined8 uStack_8a0;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  uint uStack_888;
  uint3 uStack_4c0;
  undefined5 uStack_4bd;
  undefined3 uStack_4b8;
  undefined4 uStack_4b5;
  uint uStack_4b1;
  undefined4 uStack_4ad;
  undefined1 uStack_4a9;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  uint uStack_4a0;
  undefined1 auStack_49c [4];
  uint uStack_498;
  undefined8 auStack_bc [10];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar5 = 0xbe2;
  _glIsEnabled();
  uStack_8a1 = iVar5 != 0;
  uVar4 = 0xbe2;
  _glDisable();
  puStack_8b8 = &uStack_8a1;
  __ZSt19uncaught_exceptionsv();
  uStack_8b0 = uVar4;
  if ((*(byte *)(param_1 + 0x7c4) & 1) == 0) {
    if (*(int *)(param_1 + 0xc20) == 0) {
      uVar6 = 1;
      FUN_10a303694(1);
      FUN_10a301f68(&uStack_4c0,uVar6);
      uVar15 = *(undefined8 *)(param_1 + 0xc28);
      uStack_8a0 = *(undefined8 *)(param_1 + 0xc20);
      uStack_898 = (undefined4)uVar15;
      uVar6 = *(undefined8 *)(param_1 + 0xc2c);
      uStack_88c = (undefined4)*(undefined8 *)(param_1 + 0xc34);
      uStack_888 = (uint)((ulong)*(undefined8 *)(param_1 + 0xc34) >> 0x20);
      uStack_894 = (undefined4)uVar6;
      uStack_890 = (undefined4)((ulong)uVar6 >> 0x20);
      *(ulong *)(param_1 + 0xc28) = CONCAT17(uStack_4a9,CONCAT43(uStack_4ad,uStack_4b1._1_3_));
      *(undefined8 *)(param_1 + 0xc20) =
           CONCAT17((undefined1)uStack_4b1,CONCAT43(uStack_4b5,uStack_4b8));
      *(ulong *)(param_1 + 0xc34) = CONCAT44(uStack_4a0,uStack_4a4);
      *(ulong *)(param_1 + 0xc2c) = CONCAT44(uStack_4a8,CONCAT13(uStack_4a9,uStack_4ad._1_3_));
      uStack_4b1._1_3_ = (undefined3)uVar15;
      uStack_4b8 = (undefined3)uStack_8a0;
      uStack_4b5 = (undefined4)((ulong)uStack_8a0 >> 0x18);
      uStack_4b1._0_1_ = (undefined1)((ulong)uStack_8a0 >> 0x38);
      uStack_4ad._0_1_ = (undefined1)((ulong)uVar15 >> 0x18);
      uStack_4ad._1_3_ = (undefined3)uVar6;
      uStack_4a9 = (undefined1)((ulong)uVar6 >> 0x18);
      uStack_4a8 = uStack_890;
      uStack_4a4 = uStack_88c;
      uStack_4a0 = uStack_888;
      _memcpy(&uStack_8a0,param_1 + 0xc3c,0x3e0);
      _memcpy(param_1 + 0xc3c,auStack_49c,0x3e0);
      _memcpy(auStack_49c,&uStack_8a0,0x3e0);
      lVar11 = 0;
      do {
        puVar2 = (undefined8 *)(param_1 + 0x101c + lVar11);
        uVar15 = puVar2[1];
        uVar6 = *puVar2;
        uVar16 = *(undefined8 *)((long)auStack_bc + lVar11);
        puVar2 = (undefined8 *)(param_1 + 0x101c + lVar11);
        puVar2[1] = *(undefined8 *)((long)auStack_bc + lVar11 + 8);
        *puVar2 = uVar16;
        *(undefined8 *)((long)auStack_bc + lVar11 + 8) = uVar15;
        *(undefined8 *)((long)auStack_bc + lVar11) = uVar6;
        lVar11 = lVar11 + 0x10;
      } while (lVar11 != 0x40);
      *(ulong *)(param_1 + 0xc18) = CONCAT53(uStack_4bd,uStack_4c0);
      uStack_4c0 = 0;
      uStack_4bd = 0;
      FUN_10a30206c(&uStack_4c0);
    }
    if (*(int *)(param_1 + 0x1070) == 0) {
      uVar6 = 1;
      FUN_10a303694(1);
      FUN_10a301f68(&uStack_4c0,uVar6);
      uVar15 = *(undefined8 *)(param_1 + 0x1078);
      uStack_8a0 = *(undefined8 *)(param_1 + 0x1070);
      uStack_898 = (undefined4)uVar15;
      uVar6 = *(undefined8 *)(param_1 + 0x107c);
      uStack_88c = (undefined4)*(undefined8 *)(param_1 + 0x1084);
      uStack_888 = (uint)((ulong)*(undefined8 *)(param_1 + 0x1084) >> 0x20);
      uStack_894 = (undefined4)uVar6;
      uStack_890 = (undefined4)((ulong)uVar6 >> 0x20);
      *(ulong *)(param_1 + 0x1078) = CONCAT17(uStack_4a9,CONCAT43(uStack_4ad,uStack_4b1._1_3_));
      *(undefined8 *)(param_1 + 0x1070) =
           CONCAT17((undefined1)uStack_4b1,CONCAT43(uStack_4b5,uStack_4b8));
      *(ulong *)(param_1 + 0x1084) = CONCAT44(uStack_4a0,uStack_4a4);
      *(ulong *)(param_1 + 0x107c) = CONCAT44(uStack_4a8,CONCAT13(uStack_4a9,uStack_4ad._1_3_));
      uStack_4b1._1_3_ = (undefined3)uVar15;
      uStack_4b8 = (undefined3)uStack_8a0;
      uStack_4b5 = (undefined4)((ulong)uStack_8a0 >> 0x18);
      uStack_4b1._0_1_ = (undefined1)((ulong)uStack_8a0 >> 0x38);
      uStack_4ad._0_1_ = (undefined1)((ulong)uVar15 >> 0x18);
      uStack_4ad._1_3_ = (undefined3)uVar6;
      uStack_4a9 = (undefined1)((ulong)uVar6 >> 0x18);
      uStack_4a8 = uStack_890;
      uStack_4a4 = uStack_88c;
      uStack_4a0 = uStack_888;
      _memcpy(&uStack_8a0,param_1 + 0x108c,0x3e0);
      _memcpy(param_1 + 0x108c,auStack_49c,0x3e0);
      _memcpy(auStack_49c,&uStack_8a0,0x3e0);
      lVar11 = 0;
      do {
        puVar2 = (undefined8 *)(param_1 + 0x146c + lVar11);
        uVar15 = puVar2[1];
        uVar6 = *puVar2;
        uVar16 = *(undefined8 *)((long)auStack_bc + lVar11);
        puVar2 = (undefined8 *)(param_1 + 0x146c + lVar11);
        puVar2[1] = *(undefined8 *)((long)auStack_bc + lVar11 + 8);
        *puVar2 = uVar16;
        *(undefined8 *)((long)auStack_bc + lVar11 + 8) = uVar15;
        *(undefined8 *)((long)auStack_bc + lVar11) = uVar6;
        lVar11 = lVar11 + 0x10;
      } while (lVar11 != 0x40);
      *(ulong *)(param_1 + 0x1068) = CONCAT53(uStack_4bd,uStack_4c0);
      uStack_4c0 = 0;
      uStack_4bd = 0;
      FUN_10a30206c(&uStack_4c0);
    }
  }
  uStack_8a0 = 0;
  uStack_898 = 0;
  uStack_894 = 0;
  uStack_888 = uStack_888 & 0xffffff00;
  uStack_890 = 0;
  uStack_88c = 0;
  if (*(char *)(param_1 + 0x7c4) == '\x01') {
    ppuVar7 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    uVar4 = *(undefined4 *)(param_1 + 0x7a8);
    uVar10 = *(undefined4 *)(param_1 + 0x7b8);
    lVar11 = *(long *)(*ppuVar7 + 0x10);
    uStack_4c0 = 0x635282;
    uStack_4bd = 0x10f;
    uStack_4b8 = 0x2b;
    uStack_4b5 = 0;
    uStack_4b1 = uStack_4b1 & 0xffffff00;
    if (lVar11 != 0) {
      func_0x00010ab9ca70(&uStack_4c0,*param_3,0);
      uVar9 = 0x8ca9;
      if (uStack_498 < 2) {
        uVar9 = 0x8d40;
      }
      FUN_10ab9cbe8(&uStack_8e0,lVar11 + 0x50,uVar9,&uStack_4c0,0,CONCAT44(uVar10,uVar4),0);
      FUN_10ab9b224(&uStack_8a0,&uStack_8e0);
      FUN_10ab9ce18(&uStack_8e0);
      goto LAB_10a1a1e88;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc24) = 0x8d40;
    func_0x00010a3022a4(param_1 + 0xc18);
    plVar8 = (long *)*param_3;
    (**(code **)(*plVar8 + 0x48))();
    iVar5 = (int)plVar8;
    if (iVar5 == 0) {
      uVar4 = 0;
      uVar10 = 0;
      uVar9 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x7b8);
      uVar10 = *(undefined4 *)(param_1 + 0x7a8);
      uVar9 = 0xde1;
    }
    uStack_4b5 = 0;
    uStack_4b1 = 0;
    uStack_4bd = 0;
    uStack_4b8 = 0;
    uStack_4ad = 0;
    uVar1 = *(uint *)(param_1 + 0xc3c);
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    *(uint *)(param_1 + 0xc3c) = uVar1;
    *(undefined4 *)(param_1 + 0x101c) = 0x8ce0;
    *(undefined4 *)(param_1 + 0xc70) = 0x8ce0;
    *(undefined4 *)(param_1 + 0xc40) = uVar9;
    *(int *)(param_1 + 0xc44) = iVar5;
    *(undefined4 *)(param_1 + 0xc48) = uVar10;
    *(undefined4 *)(param_1 + 0xc4c) = uVar4;
    *(bool *)(param_1 + 0xc50) = iVar5 != 0;
    *(undefined8 *)(param_1 + 0xc59) = 0;
    *(ulong *)(param_1 + 0xc51) = (ulong)uStack_4c0;
    *(undefined8 *)(param_1 + 0xc60) = 0;
    *(undefined8 *)(param_1 + 0xc68) = 1;
    FUN_10a3024c0(param_1 + 0xc18,param_1 + 0xc40);
    _glViewport(0,0,*(undefined4 *)(param_1 + 0x7a8),*(undefined4 *)(param_1 + 0x7b8));
LAB_10a1a1e88:
    FUN_10a3014a0(param_1 + 0x380);
    plVar8 = (long *)*param_2;
    (**(code **)(*plVar8 + 0x48))();
    FUN_10a31a3c8(*(undefined8 *)(param_1 + 0x470),param_1 + 0x498,*(undefined4 *)(param_1 + 0x488),
                  plVar8);
    FUN_10a31a478(*(undefined8 *)(param_1 + 0x4c0),*(undefined4 *)(param_1 + 0x4d8),param_1 + 0x14bc
                 );
    fVar24 = (float)*(undefined8 *)((long)param_5 + 0x1c);
    fVar20 = (float)param_5[3];
    uStack_8e0._0_4_ = (float)*(undefined8 *)(param_1 + 0x14dc);
    uStack_8e0._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x14dc) >> 0x20);
    uStack_8d8._0_4_ = (float)*(undefined8 *)(param_1 + 0x14e4);
    uStack_8d8._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x14e4) >> 0x20);
    uStack_8d0._0_4_ = (float)*(undefined8 *)(param_1 + 0x14ec);
    uStack_8d0._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x14ec) >> 0x20);
    uStack_8c8._0_4_ = (float)*(undefined8 *)(param_1 + 0x14f4);
    uStack_8c8._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x14f4) >> 0x20);
    fVar13 = (float)*(undefined8 *)((long)param_5 + 0xc);
    fVar14 = (float)*param_5;
    fVar17 = fVar20 + uStack_8e0._4_4_ * fVar13 + (float)uStack_8e0 * fVar14;
    fVar18 = fVar20 + uStack_8d8._4_4_ * fVar13 + (float)uStack_8d8 * fVar14;
    fVar19 = fVar20 + uStack_8d0._4_4_ * fVar13 + (float)uStack_8d0 * fVar14;
    fVar20 = fVar20 + uStack_8c8._4_4_ * fVar13 + (float)uStack_8c8 * fVar14;
    fVar14 = (float)param_5[2];
    fVar13 = (float)*(undefined8 *)((long)param_5 + 4);
    fVar21 = fVar24 + uStack_8e0._4_4_ * fVar14 + (float)uStack_8e0 * fVar13;
    fVar22 = fVar24 + uStack_8d8._4_4_ * fVar14 + (float)uStack_8d8 * fVar13;
    fVar23 = fVar24 + uStack_8d0._4_4_ * fVar14 + (float)uStack_8d0 * fVar13;
    fVar24 = fVar24 + uStack_8c8._4_4_ * fVar14 + (float)uStack_8c8 * fVar13;
    uStack_8e0 = CONCAT44(fVar21,fVar17);
    uStack_8d8 = CONCAT44(fVar22,fVar18);
    uStack_8d0 = CONCAT44(fVar23,fVar19);
    uStack_8c8 = CONCAT44(fVar24,fVar20);
    uStack_8e0 = uStack_8e0 ^
                 (uStack_8e0 ^ uStack_8d8) &
                 ~CONCAT44(-(uint)(fVar21 < fVar22),-(uint)(fVar17 < fVar18));
    uStack_8e0 = uStack_8e0 ^
                 (uStack_8e0 ^ uStack_8d0) &
                 ~CONCAT44(-(uint)((float)(uStack_8e0 >> 0x20) < fVar23),
                           -(uint)((float)uStack_8e0 < fVar19));
    uStack_8e0 = uStack_8e0 ^
                 (uStack_8e0 ^ uStack_8c8) &
                 ~CONCAT44(-(uint)((float)(uStack_8e0 >> 0x20) < fVar24),
                           -(uint)((float)uStack_8e0 < fVar20));
    fVar13 = (float)uStack_8e0;
    fVar14 = (float)(uStack_8e0 >> 0x20);
    uStack_8d0 = CONCAT44(fVar23 - fVar14,fVar19 - fVar13);
    uStack_8c8 = CONCAT44(fVar24 - fVar14,fVar20 - fVar13);
    uStack_8e0 = CONCAT44(fVar21 - fVar14,fVar17 - fVar13);
    uStack_8d8 = CONCAT44(fVar22 - fVar14,fVar18 - fVar13);
    FUN_10a31a478(*(undefined8 *)(param_1 + 0x4a0),*(undefined4 *)(param_1 + 0x4b8),&uStack_8e0);
    _glDrawArrays(6,0,4);
    FUN_10a301590();
    if (*(char *)(param_1 + 0x7c4) == '\x01') {
      uStack_4a8 = 0;
      uStack_4a4 = 0;
      uStack_4ad = 0;
      uStack_4a9 = 0;
      uStack_4b8 = 0;
      uStack_4b5 = 0;
      uStack_4b1 = 0;
      uStack_4c0 = 0;
      uStack_4bd = 0;
      FUN_10ab9b224(&uStack_8a0,&uStack_4c0);
      FUN_10ab9ce18(&uStack_4c0);
    }
    else {
      func_0x00010a3022f0(param_1 + 0xc18);
      func_0x00010a302418(param_1 + 0xc18);
      func_0x00010a3020b0(param_1 + 0xc18);
    }
    if (*param_4 != 0) {
      uStack_900 = 0;
      uStack_8f8 = 0;
      uStack_8e8 = 0;
      uStack_8f0 = 0;
      if (*(char *)(param_1 + 0x7c4) == '\x01') {
        ppuVar7 = &PTR___tlv_bootstrap_11340de10;
        (*(code *)PTR___tlv_bootstrap_11340de10)();
        iVar5 = *(int *)(param_1 + 0x7a8);
        uVar4 = *(undefined4 *)(param_1 + 0x7bc);
        lVar11 = *(long *)(*ppuVar7 + 0x10);
        uStack_4c0 = 0x635282;
        uStack_4bd = 0x10f;
        uStack_4b8 = 0x2b;
        uStack_4b5 = 0;
        uStack_4b1 = uStack_4b1 & 0xffffff00;
        if (lVar11 == 0) {
          FUN_10a0edfc4(&uStack_4c0);
          goto LAB_10a1a2268;
        }
        func_0x00010ab9ca70(&uStack_4c0,extraout_x9,0);
        uVar10 = 0x8ca9;
        if (uStack_498 < 2) {
          uVar10 = 0x8d40;
        }
        FUN_10ab9cbe8(auStack_920,lVar11 + 0x50,uVar10,&uStack_4c0,0,CONCAT44(uVar4,iVar5 / 2),0);
        FUN_10ab9b224(&uStack_900,auStack_920);
        FUN_10ab9ce18(auStack_920);
      }
      else {
        *(undefined4 *)(param_1 + 0x1074) = 0x8d40;
        func_0x00010a3022a4(param_1 + 0x1068);
        param_4 = (long *)*param_4;
        (**(code **)(*param_4 + 0x48))();
        iVar5 = (int)param_4;
        if (iVar5 == 0) {
          uVar10 = 0;
          iVar12 = 0;
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(param_1 + 0x7bc);
          iVar12 = *(int *)(param_1 + 0x7a8) / 2;
          uVar10 = 0xde1;
        }
        uStack_4b5 = 0;
        uStack_4b1 = 0;
        uStack_4bd = 0;
        uStack_4b8 = 0;
        uStack_4ad = 0;
        uVar1 = *(uint *)(param_1 + 0x108c);
        if (uVar1 < 2) {
          uVar1 = 1;
        }
        *(uint *)(param_1 + 0x108c) = uVar1;
        *(undefined4 *)(param_1 + 0x146c) = 0x8ce0;
        *(undefined4 *)(param_1 + 0x10c0) = 0x8ce0;
        *(undefined4 *)(param_1 + 0x1090) = uVar10;
        *(int *)(param_1 + 0x1094) = iVar5;
        *(int *)(param_1 + 0x1098) = iVar12;
        *(bool *)(param_1 + 0x10a0) = iVar5 != 0;
        *(undefined8 *)(param_1 + 0x10a9) = 0;
        *(ulong *)(param_1 + 0x10a1) = (ulong)uStack_4c0;
        *(undefined4 *)(param_1 + 0x109c) = uVar4;
        *(undefined8 *)(param_1 + 0x10b0) = 0;
        *(undefined8 *)(param_1 + 0x10b8) = 1;
        FUN_10a3024c0(param_1 + 0x1068,param_1 + 0x1090);
        _glViewport(0,0,*(int *)(param_1 + 0x7a8) / 2,*(undefined4 *)(param_1 + 0x7bc));
      }
      FUN_10a3014a0(param_1 + 0x4e0);
      plVar8 = (long *)*param_2;
      (**(code **)(*plVar8 + 0x48))();
      FUN_10a31a3c8(*(undefined8 *)(param_1 + 0x5d0),param_1 + 0x5f8,
                    *(undefined4 *)(param_1 + 0x5e8),plVar8);
      FUN_10a31a478(*(undefined8 *)(param_1 + 0x620),*(undefined4 *)(param_1 + 0x638),
                    param_1 + 0x14bc);
      FUN_10a31a478(*(undefined8 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x618),&uStack_8e0);
      _glDrawArrays(6,0,4);
      FUN_10a301590();
      if (*(char *)(param_1 + 0x7c4) == '\x01') {
        uStack_4a8 = 0;
        uStack_4a4 = 0;
        uStack_4ad = 0;
        uStack_4a9 = 0;
        uStack_4b8 = 0;
        uStack_4b5 = 0;
        uStack_4b1 = 0;
        uStack_4c0 = 0;
        uStack_4bd = 0;
        FUN_10ab9b224(&uStack_900,&uStack_4c0);
        FUN_10ab9ce18(&uStack_4c0);
      }
      else {
        func_0x00010a3022f0(param_1 + 0x1068);
        func_0x00010a302418(param_1 + 0x1068);
        func_0x00010a3020b0(param_1 + 0x1068);
      }
      FUN_10ab9ce18(&uStack_900);
    }
    FUN_10ab9ce18(&uStack_8a0);
    FUN_10a1a31c0(&puStack_8b8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a0edfc4(&uStack_4c0);
LAB_10a1a2268:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1a226c);
  (*pcVar3)();
}



/* Entry: 10a1a22d8; end: 10a1a2d87;  */

undefined8 * FUN_10a1a22d8(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 auStack_10b0 [249];
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined4 uStack_8d8;
  int iStack_8d4;
  undefined4 uStack_8d0;
  undefined8 uStack_8cc;
  undefined1 auStack_8c4 [992];
  undefined8 auStack_4e4 [9];
  undefined8 auStack_498 [2];
  char cStack_481;
  undefined8 auStack_480 [2];
  char cStack_469;
  undefined8 auStack_468 [2];
  char cStack_451;
  undefined8 uStack_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined8 uStack_43c;
  
  param_1[0xf] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((long)param_1 + 0x66) = 0;
  param_1[0xe] = param_1 + 0xf;
  puVar7 = param_1 + 0x14;
  *puVar7 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_1 + 0x12;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *param_1 = &PTR_DAT_110bab5f8;
  FUN_10a1ad4f4(param_1 + 0x1e,param_1);
  FUN_10a1ad5e8(param_1 + 0x24,param_1);
  FUN_10a1ad708(param_1 + 0x2a,param_1);
  FUN_10a1ad8a0(param_1 + 0x30,param_1,&UNK_10f641f0b);
  FUN_10a1ad8a0(param_1 + 0x34,param_1,&UNK_10f641f1a);
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  *(undefined8 *)((long)param_1 + 0x226) = 0;
  param_1[0x46] = param_1 + 0x47;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x49] = param_1 + 0x4a;
  puVar1 = param_1 + 0x4c;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4f] = param_1 + 0x50;
  param_1[0x54] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x55) = 1;
  param_1[0x38] = &PTR_DAT_110bab5f8;
  FUN_10a1ad4f4(param_1 + 0x56,param_1 + 0x38);
  FUN_10a1ad5e8(param_1 + 0x5c,param_1 + 0x38);
  FUN_10a1ad708(param_1 + 0x62,param_1 + 0x38);
  FUN_10a1ad8a0(param_1 + 0x68,param_1 + 0x38,&UNK_10f641f0b);
  FUN_10a1ad8a0(param_1 + 0x6c,param_1 + 0x38,&UNK_10f641f1a);
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  *(undefined8 *)((long)param_1 + 0x3e6) = 0;
  param_1[0x7e] = param_1 + 0x7f;
  param_1[0x82] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x81] = param_1 + 0x82;
  puVar2 = param_1 + 0x84;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = param_1 + 0x88;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  *(undefined1 *)(param_1 + 0x8d) = 1;
  param_1[0x70] = &PTR_DAT_110bab630;
  FUN_10a1ad94c(param_1 + 0x8e,param_1 + 0x70);
  FUN_10a1ada40(param_1 + 0x94,param_1 + 0x70,&UNK_10f641f0b);
  FUN_10a1ada40(param_1 + 0x98,param_1 + 0x70,&UNK_10f641f1a);
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  *(undefined8 *)((long)param_1 + 0x546) = 0;
  param_1[0xaa] = param_1 + 0xab;
  param_1[0xae] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xad] = param_1 + 0xae;
  puVar3 = param_1 + 0xb0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = param_1 + 0xb4;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  *(undefined1 *)(param_1 + 0xb9) = 1;
  param_1[0x9c] = &PTR_DAT_110bab630;
  FUN_10a1ad94c(param_1 + 0xba,param_1 + 0x9c);
  FUN_10a1ada40(param_1 + 0xc0,param_1 + 0x9c,&UNK_10f641f0b);
  FUN_10a1ada40(param_1 + 0xc4,param_1 + 0x9c,&UNK_10f641f1a);
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  puVar4 = param_1 + 200;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  *(undefined8 *)((long)param_1 + 0x6a6) = 0;
  param_1[0xd6] = param_1 + 0xd7;
  param_1[0xda] = 0;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  param_1[0xd9] = param_1 + 0xda;
  param_1[0xde] = 0;
  param_1[0xdd] = 0;
  param_1[0xe1] = 0;
  param_1[0xe0] = 0;
  param_1[0xdf] = param_1 + 0xe0;
  param_1[0xe4] = 0;
  param_1[0xe3] = 0;
  param_1[0xe2] = 0;
  *(undefined1 *)(param_1 + 0xe5) = 1;
  param_1[200] = &PTR_FUN_110bab668;
  param_1[0xe6] = puVar4;
  param_1[0xe8] = &UNK_10f641f26;
  param_1[0xe9] = 0xffffffff;
  param_1[0xea] = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0xffffffff;
  uVar8 = param_1[0xe7];
  func_0x000107c2b054(&uStack_8e8);
  __ZNSt3__19to_stringEi(&uStack_450,*(undefined4 *)((long)param_1 + 0x74c));
  FUN_10a1aca34(puVar4,uVar8,&uStack_8e8,param_1 + 0xe9,param_1 + 0xeb,&uStack_450,0);
  if (uStack_43c._3_1_ < '\0') {
    __ZdlPv(uStack_450);
  }
  if (iStack_8d4 < 0) {
    __ZdlPv(uStack_8e8);
  }
  FUN_10a1adaec(param_1 + 0xec,puVar4,&UNK_10f641f0b);
  FUN_10a1adaec(param_1 + 0xf0,puVar4,&UNK_10f641f1a);
  *(undefined1 *)((long)param_1 + 0x7c4) = 0;
  func_0x00010a1ad3f0(param_1 + 0xf9,0);
  func_0x00010a1ad3f0(param_1 + 0x183,0);
  func_0x00010a1ad3f0(param_1 + 0x20d,0);
  *(undefined4 *)(param_1 + 0x297) = 0;
  *(undefined8 *)((long)param_1 + 0x14c4) = 0;
  *(undefined8 *)((long)param_1 + 0x14bc) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x14d4) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x14cc) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x14e4) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x14dc) = 0;
  *(undefined8 *)((long)param_1 + 0x14f4) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x14ec) = 0x3f8000003f800000;
  func_0x000107c2b054(&uStack_8e8,&UNK_10f64153e);
  FUN_10a0b4ec0(puVar7,&uStack_8e8);
  *(undefined1 *)(param_1 + 0x1d) = 1;
  if (iStack_8d4 < 0) {
    __ZdlPv(uStack_8e8);
  }
  func_0x000107c2b054(&uStack_8e8,&UNK_10f64153e);
  FUN_10a0b4ec0(puVar2,&uStack_8e8);
  *(undefined1 *)(param_1 + 0x8d) = 1;
  if (iStack_8d4 < 0) {
    __ZdlPv(uStack_8e8);
  }
  func_0x000107c2b054(&uStack_8e8,&UNK_10f64154c);
  FUN_10a0b4ec0(puVar1,&uStack_8e8);
  *(undefined1 *)(param_1 + 0x55) = 1;
  if (iStack_8d4 < 0) {
    __ZdlPv(uStack_8e8);
  }
  func_0x000107c2b054(&uStack_8e8,&UNK_10f64154c);
  FUN_10a0b4ec0(puVar3,&uStack_8e8);
  *(undefined1 *)(param_1 + 0xb9) = 1;
  if (iStack_8d4 < 0) {
    __ZdlPv(uStack_8e8);
  }
  if (param_2 == 0) {
    func_0x000107c2b054(&uStack_8e8,&UNK_10f641505);
    FUN_10a0b4ec0(puVar7,&uStack_8e8);
    *(undefined1 *)(param_1 + 0x1d) = 1;
    if (iStack_8d4 < 0) {
      __ZdlPv(uStack_8e8);
    }
    func_0x000107c2b054(&uStack_8e8,&UNK_10f641505);
    FUN_10a0b4ec0(puVar1,&uStack_8e8);
    *(undefined1 *)(param_1 + 0x55) = 1;
    if (iStack_8d4 < 0) {
      __ZdlPv(uStack_8e8);
    }
    func_0x000107c2b054(&uStack_8e8,&UNK_10f641505);
    FUN_10a0b4ec0(puVar2,&uStack_8e8);
    *(undefined1 *)(param_1 + 0x8d) = 1;
    if (iStack_8d4 < 0) {
      __ZdlPv(uStack_8e8);
    }
    func_0x000107c2b054(&uStack_8e8,&UNK_10f641505);
    FUN_10a0b4ec0(puVar3,&uStack_8e8);
  }
  else {
    func_0x000107c2b054(&uStack_8e8,&UNK_10f641519);
    FUN_10a0b4ec0(puVar7,&uStack_8e8);
    *(undefined1 *)(param_1 + 0x1d) = 1;
    if (iStack_8d4 < 0) {
      __ZdlPv(uStack_8e8);
    }
    func_0x000107c2b054(&uStack_8e8,&UNK_10f641519);
    FUN_10a0b4ec0(puVar1,&uStack_8e8);
    *(undefined1 *)(param_1 + 0x55) = 1;
    if (iStack_8d4 < 0) {
      __ZdlPv(uStack_8e8);
    }
    func_0x000107c2b054(&uStack_8e8,&UNK_10f641519);
    FUN_10a0b4ec0(puVar2,&uStack_8e8);
    *(undefined1 *)(param_1 + 0x8d) = 1;
    if (iStack_8d4 < 0) {
      __ZdlPv(uStack_8e8);
    }
    func_0x000107c2b054(&uStack_8e8,&UNK_10f641519);
    FUN_10a0b4ec0(puVar3,&uStack_8e8);
  }
  *(undefined1 *)(param_1 + 0xb9) = 1;
  if (iStack_8d4 < 0) {
    __ZdlPv(uStack_8e8);
  }
  if (param_3 == 0) {
    func_0x000107c2b054(&uStack_8e8,&UNK_10f64155b);
    FUN_10a0b4ec0(puVar3,&uStack_8e8);
  }
  else {
    func_0x000107c2b054(&uStack_8e8,&UNK_10f641570);
    FUN_10a0b4ec0(puVar3,&uStack_8e8);
  }
  *(undefined1 *)(param_1 + 0xb9) = 1;
  if (iStack_8d4 < 0) {
    __ZdlPv(uStack_8e8);
  }
  func_0x000107c2b054(&uStack_8e8,&UNK_10f641585);
  FUN_10a0b4ec0(param_1 + 0xdc,&uStack_8e8);
  *(undefined1 *)(param_1 + 0xe5) = 1;
  if (iStack_8d4 < 0) {
    __ZdlPv(uStack_8e8);
  }
  func_0x000107c2b054(&uStack_8e8,&UNK_10f641585);
  FUN_10a0b4ec0(puVar7,&uStack_8e8);
  *(undefined1 *)(param_1 + 0x1d) = 1;
  if (iStack_8d4 < 0) {
    __ZdlPv(uStack_8e8);
  }
  func_0x000107c2b054(&uStack_8e8,&UNK_10f641585);
  FUN_10a0b4ec0(puVar1,&uStack_8e8);
  *(undefined1 *)(param_1 + 0x55) = 1;
  if (iStack_8d4 < 0) {
    __ZdlPv(uStack_8e8);
  }
  func_0x000107c2b054(auStack_468,&UNK_10f6415a4);
  FUN_10a30103c(param_1,auStack_468,1);
  FUN_10a30103c(param_1 + 0x38,auStack_468,1);
  func_0x000107c2b054(auStack_480,&UNK_10f6415c3);
  FUN_10a30103c(param_1 + 0x70,auStack_480,1);
  FUN_10a30103c(param_1 + 0x9c,auStack_480,1);
  func_0x000107c2b054(auStack_498,&UNK_10f6415e9);
  FUN_10a30103c(puVar4,auStack_498,1);
  func_0x00010a1ad3f0(&uStack_8e8,0);
  uStack_450 = param_1[0xfa];
  uStack_448 = (undefined4)param_1[0xfb];
  uStack_43c = *(undefined8 *)((long)param_1 + 0x7e4);
  uStack_444 = (undefined4)*(undefined8 *)((long)param_1 + 0x7dc);
  uStack_440 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x7dc) >> 0x20);
  param_1[0xfb] = CONCAT44(iStack_8d4,uStack_8d8);
  param_1[0xfa] = uStack_8e0;
  *(undefined8 *)((long)param_1 + 0x7e4) = uStack_8cc;
  *(ulong *)((long)param_1 + 0x7dc) = CONCAT44(uStack_8d0,iStack_8d4);
  uStack_8d8 = uStack_448;
  uStack_8e0 = uStack_450;
  iStack_8d4 = uStack_444;
  uStack_8d0 = uStack_440;
  uStack_8cc = uStack_43c;
  _memcpy(&uStack_450,(long)param_1 + 0x7ec,0x3e0);
  _memcpy((long)param_1 + 0x7ec,auStack_8c4,0x3e0);
  _memcpy(auStack_8c4,&uStack_450,0x3e0);
  lVar6 = 0xbcc;
  do {
    uVar9 = ((undefined8 *)((long)param_1 + lVar6))[1];
    uVar8 = *(undefined8 *)((long)param_1 + lVar6);
    uVar10 = *(undefined8 *)((long)auStack_10b0 + lVar6);
    ((undefined8 *)((long)param_1 + lVar6))[1] = *(undefined8 *)((long)auStack_10b0 + lVar6 + 8);
    *(undefined8 *)((long)param_1 + lVar6) = uVar10;
    *(undefined8 *)((long)auStack_10b0 + lVar6 + 8) = uVar9;
    *(undefined8 *)((long)auStack_10b0 + lVar6) = uVar8;
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0xc0c);
  param_1[0xf9] = uStack_8e8;
  uStack_8e8 = 0;
  FUN_10a30206c(&uStack_8e8);
  FUN_10a19ec3c(param_1,0);
  pbVar5 = (byte *)0x113834ef0;
  FUN_10a1c5e98();
  *(byte *)((long)param_1 + 0x7c4) = *pbVar5 >> 6 & 1;
  if (cStack_481 < '\0') {
    __ZdlPv(auStack_498[0]);
  }
  if (cStack_469 < '\0') {
    __ZdlPv(auStack_480[0]);
  }
  if (cStack_451 < '\0') {
    __ZdlPv(auStack_468[0]);
  }
  return param_1;
}



/* Entry: 10a1a2d88; end: 10a1a2d93;  */

undefined8 * FUN_10a1a2d88(undefined8 *param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_110bc3a40;
  ppuVar2 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puStack_30 = (undefined8 *)&UNK_10f635282;
  uStack_28 = 0x2b;
  if (*(long *)(*ppuVar2 + 0x10) != 0) {
    if (*(undefined8 **)(*(long *)(*ppuVar2 + 0x10) + 0xb8) == param_1) {
      func_0x00010a31a2dc();
    }
    FUN_10a3012a8(param_1);
    if (param_1[0x1a] != 0) {
      param_1[0x1b] = param_1[0x1a];
      __ZdlPv();
    }
    func_0x000107c27bf0(param_1 + 0x17,param_1[0x18]);
    puStack_30 = param_1 + 0x14;
    FUN_10a0426d8(&puStack_30);
    func_0x00010a321d0c(param_1 + 0x11,param_1[0x12]);
    func_0x00010a321cc4(param_1 + 0xe,param_1[0xf]);
    if (*(char *)((long)param_1 + 0x67) < '\0') {
      __ZdlPv(param_1[10]);
    }
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      __ZdlPv(param_1[7]);
    }
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(param_1[1]);
    }
    return param_1;
  }
  FUN_10a0edfc4(&puStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a301270);
  (*pcVar1)();
}



/* Entry: 10a1a2d94; end: 10a1a2df3;  */

undefined8 * FUN_10a1a2d94(undefined8 *param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  FUN_10a1a2df4();
  FUN_10a30206c(param_1 + 0x20d);
  FUN_10a30206c(param_1 + 0x183);
  FUN_10a30206c(param_1 + 0xf9);
  FUN_10a301168(param_1 + 200);
  FUN_10a301168(param_1 + 0x9c);
  FUN_10a301168(param_1 + 0x70);
  FUN_10a301168(param_1 + 0x38);
  *param_1 = &PTR_FUN_110bc3a40;
  ppuVar2 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puStack_30 = (undefined8 *)&UNK_10f635282;
  uStack_28 = 0x2b;
  if (*(long *)(*ppuVar2 + 0x10) != 0) {
    if (*(undefined8 **)(*(long *)(*ppuVar2 + 0x10) + 0xb8) == param_1) {
      func_0x00010a31a2dc();
    }
    FUN_10a3012a8(param_1);
    if (param_1[0x1a] != 0) {
      param_1[0x1b] = param_1[0x1a];
      __ZdlPv();
    }
    func_0x000107c27bf0(param_1 + 0x17,param_1[0x18]);
    puStack_30 = param_1 + 0x14;
    FUN_10a0426d8(&puStack_30);
    func_0x00010a321d0c(param_1 + 0x11,param_1[0x12]);
    func_0x00010a321cc4(param_1 + 0xe,param_1[0xf]);
    if (*(char *)((long)param_1 + 0x67) < '\0') {
      __ZdlPv(param_1[10]);
    }
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      __ZdlPv(param_1[7]);
    }
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(param_1[1]);
    }
    return param_1;
  }
  FUN_10a0edfc4(&puStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a301270);
  (*pcVar1)();
}



/* Entry: 10a1a2df4; end: 10a1a3057;  */

void FUN_10a1a2df4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  undefined8 uStack_844;
  undefined1 auStack_83c [992];
  undefined8 auStack_45c [9];
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined8 uStack_3fc;
  
  if ((*(byte *)(param_1 + 0x7c4) & 1) == 0) {
    func_0x00010a1ad3f0(&uStack_860,0);
    uStack_410 = *(undefined8 *)(param_1 + 2000);
    uStack_408 = (undefined4)*(undefined8 *)(param_1 + 0x7d8);
    uStack_3fc = *(undefined8 *)(param_1 + 0x7e4);
    uStack_404 = (undefined4)*(undefined8 *)(param_1 + 0x7dc);
    uStack_400 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x7dc) >> 0x20);
    *(ulong *)(param_1 + 0x7d8) = CONCAT44(uStack_84c,uStack_850);
    *(undefined8 *)(param_1 + 2000) = uStack_858;
    *(undefined8 *)(param_1 + 0x7e4) = uStack_844;
    *(ulong *)(param_1 + 0x7dc) = CONCAT44(uStack_848,uStack_84c);
    uStack_850 = uStack_408;
    uStack_858 = uStack_410;
    uStack_84c = uStack_404;
    uStack_848 = uStack_400;
    uStack_844 = uStack_3fc;
    _memcpy(&uStack_410,param_1 + 0x7ec,0x3e0);
    _memcpy(param_1 + 0x7ec,auStack_83c,0x3e0);
    _memcpy(auStack_83c,&uStack_410,0x3e0);
    lVar2 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + 0xbcc + lVar2);
      uVar4 = puVar1[1];
      uVar3 = *puVar1;
      uVar5 = *(undefined8 *)((long)auStack_45c + lVar2);
      puVar1 = (undefined8 *)(param_1 + 0xbcc + lVar2);
      puVar1[1] = *(undefined8 *)((long)auStack_45c + lVar2 + 8);
      *puVar1 = uVar5;
      *(undefined8 *)((long)auStack_45c + lVar2 + 8) = uVar4;
      *(undefined8 *)((long)auStack_45c + lVar2) = uVar3;
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != 0x40);
    *(undefined8 *)(param_1 + 0x7c8) = uStack_860;
    uStack_860 = 0;
    FUN_10a30206c(&uStack_860);
    func_0x00010a1ad3f0(&uStack_860,0);
    uStack_410 = *(undefined8 *)(param_1 + 0xc20);
    uStack_408 = (undefined4)*(undefined8 *)(param_1 + 0xc28);
    uStack_3fc = *(undefined8 *)(param_1 + 0xc34);
    uStack_404 = (undefined4)*(undefined8 *)(param_1 + 0xc2c);
    uStack_400 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xc2c) >> 0x20);
    *(ulong *)(param_1 + 0xc28) = CONCAT44(uStack_84c,uStack_850);
    *(undefined8 *)(param_1 + 0xc20) = uStack_858;
    *(undefined8 *)(param_1 + 0xc34) = uStack_844;
    *(ulong *)(param_1 + 0xc2c) = CONCAT44(uStack_848,uStack_84c);
    uStack_850 = uStack_408;
    uStack_858 = uStack_410;
    uStack_84c = uStack_404;
    uStack_848 = uStack_400;
    uStack_844 = uStack_3fc;
    _memcpy(&uStack_410,param_1 + 0xc3c,0x3e0);
    _memcpy(param_1 + 0xc3c,auStack_83c,0x3e0);
    _memcpy(auStack_83c,&uStack_410,0x3e0);
    lVar2 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + 0x101c + lVar2);
      uVar4 = puVar1[1];
      uVar3 = *puVar1;
      uVar5 = *(undefined8 *)((long)auStack_45c + lVar2);
      puVar1 = (undefined8 *)(param_1 + 0x101c + lVar2);
      puVar1[1] = *(undefined8 *)((long)auStack_45c + lVar2 + 8);
      *puVar1 = uVar5;
      *(undefined8 *)((long)auStack_45c + lVar2 + 8) = uVar4;
      *(undefined8 *)((long)auStack_45c + lVar2) = uVar3;
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != 0x40);
    *(undefined8 *)(param_1 + 0xc18) = uStack_860;
    uStack_860 = 0;
    FUN_10a30206c(&uStack_860);
    func_0x00010a1ad3f0(&uStack_860,0);
    uStack_410 = *(undefined8 *)(param_1 + 0x1070);
    uStack_408 = (undefined4)*(undefined8 *)(param_1 + 0x1078);
    uStack_3fc = *(undefined8 *)(param_1 + 0x1084);
    uStack_404 = (undefined4)*(undefined8 *)(param_1 + 0x107c);
    uStack_400 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x107c) >> 0x20);
    *(ulong *)(param_1 + 0x1078) = CONCAT44(uStack_84c,uStack_850);
    *(undefined8 *)(param_1 + 0x1070) = uStack_858;
    *(undefined8 *)(param_1 + 0x1084) = uStack_844;
    *(ulong *)(param_1 + 0x107c) = CONCAT44(uStack_848,uStack_84c);
    uStack_850 = uStack_408;
    uStack_858 = uStack_410;
    uStack_84c = uStack_404;
    uStack_848 = uStack_400;
    uStack_844 = uStack_3fc;
    _memcpy(&uStack_410,param_1 + 0x108c,0x3e0);
    _memcpy(param_1 + 0x108c,auStack_83c,0x3e0);
    _memcpy(auStack_83c,&uStack_410,0x3e0);
    lVar2 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + 0x146c + lVar2);
      uVar4 = puVar1[1];
      uVar3 = *puVar1;
      uVar5 = *(undefined8 *)((long)auStack_45c + lVar2);
      puVar1 = (undefined8 *)(param_1 + 0x146c + lVar2);
      puVar1[1] = *(undefined8 *)((long)auStack_45c + lVar2 + 8);
      *puVar1 = uVar5;
      *(undefined8 *)((long)auStack_45c + lVar2 + 8) = uVar4;
      *(undefined8 *)((long)auStack_45c + lVar2) = uVar3;
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != 0x40);
    *(undefined8 *)(param_1 + 0x1068) = uStack_860;
    uStack_860 = 0;
    FUN_10a30206c(&uStack_860);
  }
  return;
}



/* Entry: 10a1a3058; end: 10a1a30bb;  */

void FUN_10a1a3058(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x7a8);
  *(int *)(param_1 + 0x7a0) = iVar2;
  iVar3 = *(int *)(param_1 + 0x7ac);
  *(int *)(param_1 + 0x7a4) = iVar3;
  if ((*(byte *)(param_1 + 0x14b8) & 1) != 0) {
    *(int *)(param_1 + 0x7a4) = iVar2;
    *(int *)(param_1 + 0x7a0) = iVar3;
  }
  iVar1 = iVar2 + 6;
  if (-4 < iVar2) {
    iVar1 = iVar2 + 3;
  }
  if (*(int *)(param_1 + 0x7b0) != 4) {
    iVar2 = iVar1 >> 2;
  }
  *(int *)(param_1 + 0x7b4) = iVar2;
  *(int *)(param_1 + 0x7b8) = iVar3;
  iVar2 = (iVar3 + 1) / 2;
  *(int *)(param_1 + 0x7bc) = iVar2;
  *(int *)(param_1 + 0x7c0) = iVar3 + iVar2;
  return;
}



/* Entry: 10a1a30bc; end: 10a1a31bf;  */

void FUN_10a1a30bc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  undefined8 uStack_854;
  undefined1 auStack_84c [992];
  undefined8 auStack_46c [9];
  undefined8 uStack_420;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined8 uStack_40c;
  
  if ((*(byte *)(param_1 + 0x7c4) & 1) == 0) {
    if (*(int *)(param_1 + 2000) == 0) {
      uVar2 = 1;
      FUN_10a303694(1);
      FUN_10a301f68(&uStack_870,uVar2);
      uStack_420 = *(undefined8 *)(param_1 + 2000);
      uStack_418 = (undefined4)*(undefined8 *)(param_1 + 0x7d8);
      uStack_40c = *(undefined8 *)(param_1 + 0x7e4);
      uStack_414 = (undefined4)*(undefined8 *)(param_1 + 0x7dc);
      uStack_410 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x7dc) >> 0x20);
      *(ulong *)(param_1 + 0x7d8) = CONCAT44(uStack_85c,uStack_860);
      *(undefined8 *)(param_1 + 2000) = uStack_868;
      *(undefined8 *)(param_1 + 0x7e4) = uStack_854;
      *(ulong *)(param_1 + 0x7dc) = CONCAT44(uStack_858,uStack_85c);
      uStack_860 = uStack_418;
      uStack_868 = uStack_420;
      uStack_85c = uStack_414;
      uStack_858 = uStack_410;
      uStack_854 = uStack_40c;
      _memcpy(&uStack_420,param_1 + 0x7ec,0x3e0);
      _memcpy(param_1 + 0x7ec,auStack_84c,0x3e0);
      _memcpy(auStack_84c,&uStack_420,0x3e0);
      lVar3 = 0;
      do {
        puVar1 = (undefined8 *)(param_1 + 0xbcc + lVar3);
        uVar4 = puVar1[1];
        uVar2 = *puVar1;
        uVar5 = *(undefined8 *)((long)auStack_46c + lVar3);
        puVar1 = (undefined8 *)(param_1 + 0xbcc + lVar3);
        puVar1[1] = *(undefined8 *)((long)auStack_46c + lVar3 + 8);
        *puVar1 = uVar5;
        *(undefined8 *)((long)auStack_46c + lVar3 + 8) = uVar4;
        *(undefined8 *)((long)auStack_46c + lVar3) = uVar2;
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != 0x40);
      *(undefined8 *)(param_1 + 0x7c8) = uStack_870;
      uStack_870 = 0;
      FUN_10a30206c(&uStack_870);
    }
  }
  return;
}



/* Entry: 10a1a31c0; end: 10a1a3207;  */

undefined8 * FUN_10a1a31c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  __ZSt19uncaught_exceptionsv();
  if (((int)puVar1 <= *(int *)(param_1 + 1)) && (*(char *)*param_1 == '\x01')) {
    _glEnable(0xbe2);
  }
  return param_1;
}



/* Entry: 10a1a3208; end: 10a1a370f;  */

long FUN_10a1a3208(long *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x25;
  ulong *puStack_58;
  
  uVar7 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (param_2 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar16 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar6 = uVar7 - 1;
    if ((uVar7 & uVar6) == 0) {
      uVar8 = uVar6 & uVar16;
    }
    else {
      uVar8 = uVar16;
      if (uVar7 <= uVar16) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar16 / uVar7;
        }
        uVar8 = uVar16 - uVar8 * uVar7;
      }
    }
    puVar10 = *(undefined8 **)(*param_1 + uVar8 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar10; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar11 = plVar15[1];
        if (uVar11 == uVar16) {
          if (plVar15[2] == param_2) goto LAB_10a1a3668;
        }
        else {
          if ((uVar7 & uVar6) == 0) {
            uVar11 = uVar11 & uVar6;
          }
          else if (uVar7 <= uVar11) {
            uVar14 = 0;
            if (uVar7 != 0) {
              uVar14 = uVar11 / uVar7;
            }
            uVar11 = uVar11 - uVar14 * uVar7;
          }
          if (uVar11 != uVar8) break;
        }
      }
    }
  }
  puVar3 = (ulong *)0xb0;
  __Znwm();
  *puVar3 = param_2;
  puVar3[1] = *(ulong *)((long)param_1 + 0x4c);
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0x3f800000;
  puVar3[0x12] = 0;
  puVar3[0x11] = 0;
  puVar3[0x14] = 0;
  puVar3[0x13] = 0;
  *(undefined4 *)(puVar3 + 0x15) = 0x3f800000;
  if (uVar7 != 0) {
    uVar6 = uVar7 - 1;
    if ((uVar7 & uVar6) == 0) {
      unaff_x25 = uVar6 & uVar16;
    }
    else {
      unaff_x25 = uVar16;
      if (uVar7 <= uVar16) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar16 / uVar7;
        }
        unaff_x25 = uVar16 - uVar8 * uVar7;
      }
    }
    puVar10 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar10; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar8 = plVar15[1];
        if (uVar8 == uVar16) {
          if (plVar15[2] == param_2) goto LAB_10a1a365c;
        }
        else {
          if ((uVar7 & uVar6) == 0) {
            uVar8 = uVar8 & uVar6;
          }
          else if (uVar7 <= uVar8) {
            uVar11 = 0;
            if (uVar7 != 0) {
              uVar11 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar11 * uVar7;
          }
          if (uVar8 != unaff_x25) break;
        }
      }
    }
  }
  plVar15 = (long *)0x20;
  puStack_58 = puVar3;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar16;
  puStack_58 = (ulong *)0x0;
  plVar15[2] = param_2;
  plVar15[3] = (long)puVar3;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar7) {
      uVar6 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar6 = uVar6 | uVar7 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar7 = param_1[1];
    }
    if (uVar7 < uVar6) {
LAB_10a1a3464:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a1a36d4);
        (*pcVar2)();
      }
      lVar4 = uVar6 << 3;
      __Znwm();
      lVar5 = *param_1;
      *param_1 = lVar4;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
      plVar9 = (long *)param_1[2];
      uVar7 = uVar6;
      if (plVar9 != (long *)0x0) {
        uVar8 = plVar9[1];
        uVar11 = uVar6 - 1;
        if ((uVar6 & uVar11) == 0) {
          uVar8 = uVar8 & uVar11;
        }
        else if (uVar6 <= uVar8) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar8 / uVar6;
          }
          uVar8 = uVar8 - uVar14 * uVar6;
        }
        *(long **)(*param_1 + uVar8 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar9;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar11) == 0) {
            uVar14 = uVar14 & uVar11;
          }
          else if (uVar6 <= uVar14) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar1 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar8) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + uVar14 * 8) == 0) {
              *(long **)(lVar4 + uVar14 * 8) = plVar9;
              uVar8 = uVar14;
            }
            else {
              *plVar9 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar4 + uVar14 * 8);
              **(long **)(lVar4 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar9;
            }
          }
          plVar9 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar7) {
      uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar8) {
        uVar6 = uVar8;
      }
      if (uVar6 < uVar7) {
        if (uVar6 != 0) goto LAB_10a1a3464;
        lVar4 = *param_1;
        *param_1 = 0;
        if (lVar4 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar7 = 0;
      }
      else {
        uVar7 = param_1[1];
      }
    }
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x25 = uVar7 - 1 & uVar16;
    }
    else {
      unaff_x25 = uVar16;
      if (uVar7 <= uVar16) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = uVar16 / uVar7;
        }
        unaff_x25 = uVar16 - uVar6 * uVar7;
      }
    }
  }
  lVar4 = *param_1;
  plVar9 = *(long **)(lVar4 + unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar15 = *plVar9;
    *plVar9 = (long)plVar15;
    *(long **)(lVar4 + unaff_x25 * 8) = plVar9;
    if (*plVar15 == 0) goto LAB_10a1a3644;
    uVar16 = *(ulong *)(*plVar15 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar16 = uVar16 & uVar7 - 1;
    }
    else if (uVar7 <= uVar16) {
      uVar6 = 0;
      if (uVar7 != 0) {
        uVar6 = uVar16 / uVar7;
      }
      uVar16 = uVar16 - uVar6 * uVar7;
    }
    plVar9 = (long *)(*param_1 + uVar16 * 8);
  }
  else {
    *plVar15 = *plVar9;
  }
  *plVar9 = (long)plVar15;
LAB_10a1a3644:
  param_1[3] = param_1[3] + 1;
  puVar3 = puStack_58;
  if (puStack_58 != (ulong *)0x0) {
LAB_10a1a365c:
    puStack_58 = (ulong *)0x0;
    FUN_10a1b0b24(&puStack_58,puVar3);
  }
LAB_10a1a3668:
  return plVar15[3];
}



/* Entry: 10a1a3710; end: 10a1a38ab;  */

undefined8 * FUN_10a1a3710(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 auStack_48 [8];
  long *plStack_40;
  uint uStack_34;
  
  FUN_10a1a3208(param_1,*(undefined8 *)(param_2 + 0x18));
  uStack_34 = *(uint *)(param_2 + 0x40);
  uVar14 = (ulong)uStack_34;
  uVar8 = param_1[0xd];
  if (uVar8 != 0) {
    uVar9 = uVar8 - 1;
    uVar7 = (uint)uVar8;
    if ((uVar8 & uVar9) == 0) {
      uVar11 = (ulong)(uVar7 - 1 & uStack_34);
    }
    else {
      uVar11 = uVar14;
      if (uVar8 <= uVar14) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uStack_34 / uVar7;
        }
        uVar11 = (ulong)(uStack_34 - uVar3 * uVar7);
      }
    }
    plVar12 = *(long **)(param_1[0xc] + uVar11 * 8);
    if (plVar12 != (long *)0x0) {
      for (plVar12 = (long *)*plVar12; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        uVar13 = plVar12[1];
        if (uVar13 == uVar14) {
          if (*(uint *)(plVar12 + 2) == uStack_34) goto LAB_10a1a3880;
        }
        else {
          if ((uVar8 & uVar9) == 0) {
            uVar13 = uVar13 & uVar9;
          }
          else if (uVar8 <= uVar13) {
            uVar4 = 0;
            if (uVar8 != 0) {
              uVar4 = uVar13 / uVar8;
            }
            uVar13 = uVar13 - uVar4 * uVar8;
          }
          if (uVar13 != uVar11) break;
        }
      }
    }
  }
  uVar15 = *param_1;
  puVar5 = (uint *)0x113836510;
  FUN_10ad0621c();
  func_0x000109296b10(auStack_48,uVar15,uVar14,1,(*puVar5 >> 2 ^ 0xffffffff) & 2,1,0,0,0,0x500000002
                     );
  puVar6 = param_1 + 0xc;
  FUN_10a1adb84(puVar6,uVar14,&uStack_34);
  FUN_10a0e4ff4(puVar6 + 3,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar12 = plStack_40 + 1;
    do {
      lVar10 = *plVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  plVar12 = param_1 + 0xc;
  FUN_10a1adb84(plVar12,uVar14,&uStack_34);
LAB_10a1a3880:
  return plVar12 + 3;
}



/* Entry: 10a1a38ac; end: 10a1a38eb;  */

void FUN_10a1a38ac(long param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x34);
  *(uint *)(param_1 + 0x28) = uVar1;
  *(int *)(param_1 + 0x2c) = iVar2;
  if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
    *(int *)(param_1 + 0x28) = iVar2;
    *(uint *)(param_1 + 0x2c) = uVar1;
  }
  if (*(int *)(param_1 + 0x38) != 4) {
    uVar1 = uVar1 + 3 >> 2;
  }
  *(uint *)(param_1 + 0x3c) = uVar1;
  *(int *)(param_1 + 0x40) = iVar2;
  *(uint *)(param_1 + 0x44) = iVar2 + 1U >> 1;
  *(uint *)(param_1 + 0x48) = iVar2 + (iVar2 + 1U >> 1);
  return;
}



/* Entry: 10a1a38ec; end: 10a1a3b13;  */

bool FUN_10a1a38ec(long param_1,long param_2,undefined8 param_3,byte *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  if (((*(char *)(param_1 + 0xa8) != '\x01') || (*(long *)(param_1 + 0x68) == 0)) ||
     (lVar7 = *(long *)(*(long *)(param_1 + 0x68) + 0x18), lVar7 == 0)) {
    ppuVar4 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    lVar7 = 0;
    if ((char)*(long *)((long)*ppuVar4 + 0x160) == '\0') {
      lVar7 = 8;
    }
    lVar7 = **(long **)(*(long *)*ppuVar4 + lVar7);
  }
  if (lVar7 == param_2) goto LAB_10a1a39e4;
  do {
    bVar1 = *param_4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_4,0x10);
    if (bVar3) {
      *param_4 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((bVar1 & 1) != 0) || ((bRam000000011330a9e8 >> 1 & 1) == 0)) goto LAB_10a1a39e4;
  if (lVar7 == 0) {
    puVar5 = &UNK_10f63ef9f;
    if (param_2 != 0) goto LAB_10a1a3990;
LAB_10a1a39a8:
    puVar6 = &UNK_10f63ef9f;
  }
  else {
    puVar5 = (undefined *)(ulong)*(uint *)(lVar7 + 0x734);
    FUN_10a156270();
    if (param_2 == 0) goto LAB_10a1a39a8;
LAB_10a1a3990:
    puVar6 = (undefined *)(ulong)*(uint *)(param_2 + 0x734);
    FUN_10a156270();
  }
  func_0x00010ae06f08(1,2,&UNK_10f64161d,&UNK_10f641f53,0x5e,&UNK_10f641fe8,param_7,param_8,param_3,
                      puVar5,lVar7,puVar6,param_2);
LAB_10a1a39e4:
  return lVar7 == param_2;
}



/* Entry: 10a1a3b14; end: 10a1a42fb;  */

void FUN_10a1a3b14(undefined8 *param_1,long **param_2,undefined8 *param_3,long *param_4,
                  undefined8 param_5,int param_6,long **param_7)

{
  long **pplVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long **pplVar13;
  long **pplVar14;
  long **pplVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  int iStack_1cc;
  long **pplStack_1c0;
  long **pplStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  long *plStack_198;
  int iStack_190;
  undefined4 uStack_18c;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  long lStack_170;
  long *plStack_168;
  long **pplStack_160;
  uint uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long **pplStack_128;
  float fStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_100;
  float fStack_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  float fStack_e0;
  float fStack_dc;
  undefined8 uStack_d8;
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = *(long **)(*param_4 + 0x18);
  puStack_180 = param_3;
  func_0x00010a08f1bc();
  lStack_170 = *plVar9;
  uStack_90 = 0;
  fVar19 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x3c));
  fVar21 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 6));
  fVar21 = (fVar19 * 4.0) / fVar21;
  fStack_cc = fVar21 + 0.0;
  fVar19 = fVar21 * 0.0 + 0.0;
  fStack_d0 = fVar21 * 0.0 + 0.0 + 0.0;
  fStack_f0 = fVar19 * 0.0 + fStack_cc * 0.5 + fStack_d0 * 0.0;
  fStack_ec = (0.0 - fVar21) * 0.0 + fVar19 * 0.5 + fStack_cc * 0.0;
  fStack_e0 = fVar19 * 0.5 + fStack_cc * 0.0 + fStack_d0 * 0.0;
  fVar21 = (0.0 - fVar21) * 0.5;
  fStack_dc = fVar21 + fVar19 * 0.0 + fStack_cc * 0.0;
  fStack_d0 = fStack_d0 + fVar19 * 0.5 + fStack_cc * 0.5;
  fStack_cc = fStack_cc + fVar21 + fVar19 * 0.5;
  uStack_e8 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0x3f800000;
  uVar4 = *(uint *)((long)param_1 + 0x54);
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_158 = uVar4 & 0xc | -uVar4 & 3;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_13c = 0;
  uStack_138 = 1;
  FUN_10a19e730(&uStack_130,&uStack_158,0,0);
  uStack_c0 = uStack_130;
  uStack_b8 = 0;
  uStack_a8 = 0;
  uStack_a0 = uStack_100;
  uStack_98 = 0x3f800000;
  if ((*(byte *)((long)param_1 + 0x54) & 1) == 0) {
    fVar19 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 5));
    uStack_90 = (ulong)(uint)((float)uStack_130 / fVar19);
  }
  else {
    fVar19 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x2c));
    uStack_90 = (ulong)(uint)(-fStack_120 / fVar19) << 0x20;
  }
  if ((*(byte *)(*plVar9 + 0x440) & 1) != 0) {
    puVar10 = (undefined8 *)(*plVar9 + 0xe0);
    func_0x00010a155a18();
    puStack_188 = puVar10;
    if ((*(byte *)(*plVar9 + 0x440) & 1) != 0) {
      puVar10 = (undefined8 *)(*plVar9 + 0x98);
      func_0x00010a1559cc();
      puStack_178 = puVar10;
      if (param_7 != (long **)0x0) {
        FUN_10a0977f8(param_7,puStack_180);
        FUN_10a097890(param_7,puStack_188);
        FUN_10a097630(param_7,puStack_178);
      }
      puVar10 = param_1;
      FUN_10a1a3208(param_1,*(undefined8 *)(lStack_170 + 8));
      FUN_10a1a44c0(&uStack_130,*plVar9,&fStack_f0);
      uStack_18c = (undefined4)param_5;
      puVar11 = puVar10;
      iStack_190 = param_6;
      FUN_10a1adf98(puVar10,puVar10 + 2,1,param_5,&UNK_10f6420ad);
      func_0x000109293c4c();
      func_0x000109294420();
      plVar18 = (long *)*puVar11;
      plVar17 = plVar18;
      (**(code **)(*plVar18 + 0x30))();
      if ((((*(byte *)(plVar17 + 6) & 1) != 0) &&
          (lVar16 = *plVar17, plStack_198 = param_4, plVar17[1] != lVar16)) &&
         (lVar2 = puVar11[2], puVar11[3] != lVar2)) {
        puVar12 = param_1;
        FUN_10a1a3208(param_1,*(undefined8 *)(lStack_170 + 8));
        FUN_10a1a43f0(&plStack_168,puVar12,lVar2);
        if ((undefined4 *)plVar17[1] != (undefined4 *)*plVar17) {
          uVar3 = *(undefined4 *)*plVar17;
          (*(code *)(*param_2)[0xf])(param_2,plVar18);
          uStack_158 = 0;
          uStack_154 = 0;
          uStack_150 = (undefined4)*(undefined8 *)((long)param_1 + 0x3c);
          uStack_14c = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x3c) >> 0x20);
          uStack_148 = 0;
          uStack_144 = 0x3f800000;
          (*(code *)(*param_2)[0xe])(param_2,&uStack_158);
          (*(code *)(*param_2)[0x13])(param_2,0,plVar18[0xa0],*puStack_178,0);
          if (*(long *)(lVar16 + 0x10) != *(long *)(lVar16 + 8)) {
            (**(code **)(*plStack_168 + 0x38))
                      (plStack_168,*(undefined4 *)(*(long *)(lVar16 + 8) + 0x18),uStack_130,
                       fStack_120,uStack_11c,0);
            if (*(long *)(lVar16 + 0x40) != *(long *)(lVar16 + 0x38)) {
              (**(code **)(*plStack_168 + 0x48))
                        (plStack_168,*(undefined4 *)(*(long *)(lVar16 + 0x38) + 0x18),*puStack_180,5
                         ,0);
              if (*(long *)(lVar16 + 0x70) != *(long *)(lVar16 + 0x68)) {
                (**(code **)(*plStack_168 + 0x60))
                          (plStack_168,*(undefined4 *)(*(long *)(lVar16 + 0x68) + 0x18),*puStack_188
                           ,0);
                (*(code *)(*param_2)[0x10])(param_2,uVar3,plVar18[0xa0],plStack_168,0,0);
                pplVar15 = (long **)0x4;
                lVar16 = 0;
                pplVar13 = param_2;
                (*(code *)(*param_2)[0x15])();
                if (param_7 != (long **)0x0) {
                  FUN_10a097928(param_7,&uStack_130);
                  FUN_10a097598(param_7,puVar11);
                  pplVar15 = &plStack_168;
                  pplVar13 = param_7;
                  FUN_10a0973d0();
                }
                pplVar14 = pplStack_160;
                uVar3 = uStack_18c;
                iVar7 = iStack_190;
                if (pplStack_160 != (long **)0x0) {
                  pplVar1 = pplStack_160 + 1;
                  do {
                    plVar17 = *pplVar1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
                    if (bVar6) {
                      *pplVar1 = (long *)((long)plVar17 + -1);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (plVar17 == (long *)0x0) {
                    (*(code *)(*pplStack_160)[2])(pplStack_160);
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                    pplVar13 = pplVar14;
                  }
                }
                pplVar14 = pplStack_128;
                if (pplStack_128 != (long **)0x0) {
                  pplVar1 = pplStack_128 + 1;
                  do {
                    plVar17 = *pplVar1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
                    if (bVar6) {
                      *pplVar1 = (long *)((long)plVar17 + -1);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (plVar17 == (long *)0x0) {
                    (*(code *)(*pplStack_128)[2])(pplStack_128);
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                    pplVar13 = pplVar14;
                  }
                }
                pplStack_1b8 = pplVar13;
                if (iVar7 == 0) {
LAB_10a1a426c:
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x00010a0ec3c8(&plStack_168);
                  func_0x00010a045fb4(&uStack_130);
                  pplVar13 = pplStack_1b8;
                  __Unwind_Resume();
                  pcStack_1a8 = FUN_10a1a42fc;
                  pplStack_1c0 = param_2;
                  puStack_1b0 = &stack0xfffffffffffffff0;
                  if (pplVar13 == (long **)0x0) {
                    if (pplVar15 == (long **)0x0) {
                      return;
                    }
                    FUN_10a08e0bc();
                  }
                  else {
                    (*(code *)(*pplVar13)[9])();
                    pplVar15 = pplVar13;
                  }
                  if (pplVar15 != (long **)0x0) {
                    (*(code *)(*pplVar15)[9])(pplVar15);
                    if (lVar16 != 0) {
                      if (*(int *)(lVar16 + 0x34) == 3) {
                        iStack_1cc = *(int *)(lVar16 + 0x2c) * 6;
                      }
                      else if (*(int *)(lVar16 + 0x34) == 2) {
                        iStack_1cc = *(int *)(lVar16 + 0x2c);
                      }
                      else {
                        iStack_1cc = 1;
                      }
                      uStack_1e8 = 0x500000002;
                      uStack_1f0 = 0x800000040;
                      uStack_1d4 = *(undefined4 *)(lVar16 + 0x30);
                      uStack_1d8 = 0;
                      uStack_1d0 = 0;
                      lStack_1e0 = lVar16;
                      (*(code *)(*pplVar15)[7])(pplVar15,0x40,8,0,0,0,0,0,&uStack_1f0,1);
                    }
                    (*(code *)(*pplVar15)[8])(pplVar15);
                  }
                  return;
                }
                uStack_90._4_4_ = (float)(uStack_90 >> 0x20);
                uStack_90 = CONCAT44(uStack_90._4_4_ + uStack_90._4_4_,
                                     (float)uStack_90 + (float)uStack_90);
                FUN_10a1a44c0(&uStack_130,*plVar9,&fStack_f0);
                FUN_10a1adf98(puVar10,puVar10 + 4,2,uVar3,&UNK_10f6420ad);
                func_0x000109293c4c();
                func_0x000109294420();
                plVar17 = (long *)*puVar10;
                plVar9 = plVar17;
                (**(code **)(*plVar17 + 0x30))();
                if ((((*(byte *)(plVar9 + 6) & 1) != 0) && (lVar16 = *plVar9, plVar9[1] != lVar16))
                   && (lVar2 = puVar10[2], puVar10[3] != lVar2)) {
                  puVar11 = param_1;
                  FUN_10a1a3208(param_1,*(undefined8 *)(lStack_170 + 8));
                  FUN_10a1a43f0(&plStack_168,puVar11,lVar2);
                  if ((undefined4 *)plVar9[1] != (undefined4 *)*plVar9) {
                    uVar3 = *(undefined4 *)*plVar9;
                    (*(code *)(*param_2)[0xf])(param_2,plVar17);
                    uStack_14c = *(undefined4 *)((long)param_1 + 0x44);
                    uStack_158 = 0;
                    uVar20 = NEON_rev64(*(undefined8 *)((long)param_1 + 0x3c),4);
                    uStack_154 = (undefined4)uVar20;
                    uStack_150 = (undefined4)((ulong)uVar20 >> 0x20);
                    uStack_148 = 0;
                    uStack_144 = 0x3f800000;
                    (*(code *)(*param_2)[0xe])(param_2,&uStack_158);
                    (*(code *)(*param_2)[0x13])(param_2,0,plVar17[0xa0],*puStack_178,0);
                    if (*(long *)(lVar16 + 0x10) != *(long *)(lVar16 + 8)) {
                      (**(code **)(*plStack_168 + 0x38))
                                (plStack_168,*(undefined4 *)(*(long *)(lVar16 + 8) + 0x18),
                                 uStack_130,fStack_120,uStack_11c,0);
                      if (*(long *)(lVar16 + 0x40) != *(long *)(lVar16 + 0x38)) {
                        (**(code **)(*plStack_168 + 0x48))
                                  (plStack_168,*(undefined4 *)(*(long *)(lVar16 + 0x38) + 0x18),
                                   *puStack_180,5,0);
                        if (*(long *)(lVar16 + 0x70) != *(long *)(lVar16 + 0x68)) {
                          (**(code **)(*plStack_168 + 0x60))
                                    (plStack_168,*(undefined4 *)(*(long *)(lVar16 + 0x68) + 0x18),
                                     *puStack_188,0);
                          (*(code *)(*param_2)[0x10])(param_2,uVar3,plVar17[0xa0],plStack_168,0,0);
                          pplVar15 = (long **)0x4;
                          lVar16 = 0;
                          pplVar13 = param_2;
                          (*(code *)(*param_2)[0x15])();
                          if (param_7 != (long **)0x0) {
                            FUN_10a097928(param_7,&uStack_130);
                            FUN_10a097598(param_7,puVar10);
                            pplVar15 = &plStack_168;
                            FUN_10a0973d0();
                            pplVar13 = param_7;
                          }
                          if (pplStack_160 != (long **)0x0) {
                            pplVar14 = pplStack_160 + 1;
                            do {
                              plVar9 = *pplVar14;
                              cVar5 = '\x01';
                              bVar6 = (bool)ExclusiveMonitorPass(pplVar14,0x10);
                              if (bVar6) {
                                *pplVar14 = (long *)((long)plVar9 + -1);
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                            if (plVar9 == (long *)0x0) {
                              (*(code *)(*pplStack_160)[2])(pplStack_160);
                              __ZNSt3__119__shared_weak_count14__release_weakEv();
                              pplVar13 = pplStack_160;
                            }
                          }
                          pplStack_1b8 = pplVar13;
                          if (pplStack_128 != (long **)0x0) {
                            pplVar13 = pplStack_128 + 1;
                            do {
                              plVar9 = *pplVar13;
                              cVar5 = '\x01';
                              bVar6 = (bool)ExclusiveMonitorPass(pplVar13,0x10);
                              if (bVar6) {
                                *pplVar13 = (long *)((long)plVar9 + -1);
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                            if (plVar9 == (long *)0x0) {
                              (*(code *)(*pplStack_128)[2])(pplStack_128);
                              __ZNSt3__119__shared_weak_count14__release_weakEv();
                              pplStack_1b8 = pplStack_128;
                            }
                          }
                          goto LAB_10a1a426c;
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
    }
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1a42ac);
  (*pcVar8)();
}



/* Entry: 10a1a42fc; end: 10a1a43ef;  */

void FUN_10a1a42fc(long *param_1,long *param_2,long param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  if (param_1 == (long *)0x0) {
    if (param_2 == (long *)0x0) {
      return;
    }
    FUN_10a08e0bc();
  }
  else {
    (**(code **)(*param_1 + 0x48))();
    param_2 = param_1;
  }
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x48))(param_2);
    if (param_3 != 0) {
      if (*(int *)(param_3 + 0x34) == 3) {
        iStack_2c = *(int *)(param_3 + 0x2c) * 6;
      }
      else if (*(int *)(param_3 + 0x34) == 2) {
        iStack_2c = *(int *)(param_3 + 0x2c);
      }
      else {
        iStack_2c = 1;
      }
      uStack_48 = 0x500000002;
      uStack_50 = 0x800000040;
      uStack_34 = *(undefined4 *)(param_3 + 0x30);
      uStack_38 = 0;
      uStack_30 = 0;
      lStack_40 = param_3;
      (**(code **)(*param_2 + 0x38))(param_2,0x40,8,0,0,0,0,0,&uStack_50,1);
    }
    (**(code **)(*param_2 + 0x40))(param_2);
  }
  return;
}



/* Entry: 10a1a43f0; end: 10a1a44bf;  */

void FUN_10a1a43f0(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  uStack_40 = *param_3;
  puStack_50 = &uStack_40;
  lVar4 = param_2 + 0x88;
  FUN_10a0eb970(lVar4,&uStack_40,&UNK_10dd5b8f9,&puStack_50,&uStack_31);
  plVar5 = (long *)(lVar4 + 0x18);
  lVar4 = *plVar5;
  if (lVar4 == 0) {
    FUN_10a0ebe20(&puStack_50,&uStack_40,param_2,param_3);
    func_0x00010a0e6614(plVar5,&puStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    lVar4 = *plVar5;
  }
  func_0x00010928ea98(param_1,lVar4);
  return;
}



/* Entry: 10a1a44c0; end: 10a1a458f;  */

void FUN_10a1a44c0(long *param_1,long param_2,long *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((*(byte *)(param_2 + 0x440) & 1) != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x3b0);
    FUN_10a15566c();
    func_0x00010928e530(param_1,*puVar2,0x70);
    plVar3 = (long *)*param_1;
    (**(code **)(*plVar3 + 0x30))(plVar3,2,(int)param_1[2],0);
    if (plVar3 != (long *)0x0) {
      lVar5 = param_3[1];
      lVar4 = *param_3;
      lVar6 = param_3[2];
      lVar8 = param_3[5];
      lVar7 = param_3[4];
      plVar3[3] = param_3[3];
      plVar3[2] = lVar6;
      plVar3[5] = lVar8;
      plVar3[4] = lVar7;
      plVar3[1] = lVar5;
      *plVar3 = lVar4;
      lVar5 = param_3[7];
      lVar4 = param_3[6];
      lVar7 = param_3[9];
      lVar6 = param_3[8];
      lVar8 = param_3[10];
      lVar10 = param_3[0xd];
      lVar9 = param_3[0xc];
      plVar3[0xb] = param_3[0xb];
      plVar3[10] = lVar8;
      plVar3[0xd] = lVar10;
      plVar3[0xc] = lVar9;
      plVar3[7] = lVar5;
      plVar3[6] = lVar4;
      plVar3[9] = lVar7;
      plVar3[8] = lVar6;
      (**(code **)(*(long *)*param_1 + 0x38))();
      return;
    }
    func_0x000105688514(&UNK_10f6423b3);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1a4560);
  (*pcVar1)();
}



/* Entry: 10a1a4590; end: 10a1a4a13;  */

undefined8
FUN_10a1a4590(long param_1,ulong param_2,undefined4 *param_3,undefined4 *param_4,uint param_5,
             long param_6,long param_7)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  long lVar18;
  undefined4 *unaff_x20;
  long unaff_x21;
  long lVar19;
  long unaff_x22;
  undefined4 *puVar20;
  long lVar21;
  long unaff_x23;
  long lVar22;
  undefined4 *unaff_x24;
  ulong unaff_x25;
  ulong uVar23;
  ulong unaff_x26;
  ulong uVar24;
  undefined4 *unaff_x27;
  ulong uVar25;
  undefined4 *unaff_x28;
  undefined4 auStack_248 [16];
  long lStack_208;
  undefined4 *puStack_200;
  undefined4 *puStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  undefined4 *puStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined4 *puStack_1c0;
  long lStack_1b8;
  undefined1 **ppuStack_1b0;
  undefined8 uStack_1a8;
  uint uStack_19c;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined4 *puStack_180;
  undefined4 auStack_178 [16];
  long lStack_138;
  undefined4 *puStack_130;
  undefined4 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined4 *puStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined4 *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  uint uStack_cc;
  long lStack_c8;
  undefined4 *puStack_c0;
  undefined4 *puStack_b8;
  undefined4 *puStack_b0;
  undefined4 uStack_a8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = param_1;
  puVar8 = param_4;
  uStack_cc = param_5;
  if (0 < (int)param_5) {
    unaff_x19 = 0;
    iVar6 = (int)param_4;
    unaff_x23 = (long)iVar6;
    puStack_c0 = (undefined4 *)(ulong)param_5;
    unaff_x25 = (-((ulong)param_4 >> 0x1f & 1) & 0xfffffffe00000000 |
                ((ulong)param_4 & 0xffffffff) << 1) + (long)iVar6;
    lStack_c8 = unaff_x25 * 4;
    unaff_x24 = &uStack_a8;
    puVar20 = (undefined4 *)0x0;
    unaff_x28 = param_3;
    do {
      unaff_x27 = puVar20 + 1;
      puVar9 = unaff_x28;
      if (0 < iVar6) {
        uVar10 = (uint)unaff_x27;
        if ((int)uStack_cc <= (int)(uint)unaff_x27) {
          uVar10 = uStack_cc;
        }
        unaff_x26 = (ulong)(int)uVar10;
        unaff_x19 = (long)(int)unaff_x19;
        lVar21 = 0;
        puStack_b8 = unaff_x27;
        puStack_b0 = unaff_x28;
        do {
          uVar23 = param_1 + unaff_x19;
          func_0x0001098792d0();
          param_2 = (ulong)*(uint *)(&UNK_10e49b404 + (uVar23 & 0xffffffff) * 4);
          lVar18 = param_1 + unaff_x19;
          puVar8 = &uStack_a8;
          param_3 = (undefined4 *)0x0;
          func_0x000109878dd0();
          iVar15 = 0;
          unaff_x21 = lVar21 + 4;
          iVar7 = (int)unaff_x21;
          if (iVar6 <= (int)unaff_x21) {
            iVar7 = iVar6;
          }
          puVar14 = unaff_x28;
          lVar22 = lVar21;
          puVar9 = puVar20;
          puVar13 = unaff_x28;
          iVar11 = iVar15;
          do {
            do {
              *(undefined2 *)puVar14 = *(undefined2 *)((long)unaff_x24 + (long)iVar15);
              *(undefined1 *)((long)puVar14 + 2) =
                   *(undefined1 *)((long)&uStack_a8 + (long)iVar15 + 2);
              lVar22 = lVar22 + 1;
              iVar15 = iVar15 + 4;
              puVar14 = (undefined4 *)((long)puVar14 + 3);
            } while (lVar22 < iVar7);
            puVar9 = (undefined4 *)((long)puVar9 + 1);
            iVar15 = iVar11 + 0x10;
            puVar14 = (undefined4 *)((long)puVar13 + unaff_x25);
            lVar22 = lVar21;
            puVar13 = puVar14;
            iVar11 = iVar15;
          } while ((long)puVar9 < (long)unaff_x26);
          unaff_x19 = unaff_x19 + 8;
          unaff_x28 = unaff_x28 + 3;
          unaff_x27 = puStack_b8;
          lVar21 = unaff_x21;
          puVar9 = puStack_b0;
        } while (unaff_x21 < unaff_x23);
      }
      unaff_x28 = (undefined4 *)((long)puVar9 + lStack_c8);
      unaff_x20 = param_4;
      unaff_x22 = param_1;
      puVar20 = unaff_x27;
    } while (unaff_x27 < puStack_c0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return 1;
  }
  ___stack_chk_fail();
  uStack_d8 = 0x10a1a471c;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = lVar18;
  puVar9 = puVar8;
  lVar22 = unaff_x23;
  uVar23 = unaff_x25;
  puVar20 = unaff_x27;
  uStack_19c = param_5;
  puStack_130 = unaff_x28;
  puStack_128 = unaff_x27;
  uStack_120 = unaff_x26;
  uStack_118 = unaff_x25;
  puStack_110 = unaff_x24;
  lStack_108 = unaff_x23;
  lStack_100 = unaff_x22;
  lStack_f8 = unaff_x21;
  puStack_f0 = unaff_x20;
  lStack_e8 = unaff_x19;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (0 < (int)param_5) {
    iVar6 = (int)puVar8;
    lVar22 = (long)iVar6;
    uStack_190 = -((ulong)puVar8 >> 0x1f & 1) & 0xfffffff000000000 |
                 ((ulong)puVar8 & 0xffffffff) << 4;
    uVar23 = -((ulong)puVar8 >> 0x1f & 1) & 0xfffffffc00000000 | ((ulong)puVar8 & 0xffffffff) << 2;
    puVar20 = auStack_178;
    uStack_198 = (ulong)param_5;
    lVar19 = 0;
    puVar14 = param_3;
    uVar24 = 0;
    do {
      unaff_x19 = lVar19;
      unaff_x26 = uVar24 + 4;
      puVar13 = puVar14;
      if (0 < iVar6) {
        uVar10 = (uint)unaff_x26;
        if ((int)uStack_19c <= (int)(uint)unaff_x26) {
          uVar10 = uStack_19c;
        }
        unaff_x28 = (undefined4 *)(long)(int)uVar10;
        unaff_x19 = (long)(int)unaff_x19;
        lVar19 = 0;
        uStack_188 = unaff_x26;
        puStack_180 = puVar14;
        do {
          uVar4 = lVar18 + unaff_x19;
          func_0x000109879f6c();
          param_2 = (ulong)*(uint *)(&UNK_10e49b404 + (uVar4 & 0xffffffff) * 4);
          lVar21 = lVar18 + unaff_x19;
          puVar9 = auStack_178;
          param_3 = (undefined4 *)0x0;
          func_0x000109879bc4();
          iVar15 = 0;
          unaff_x21 = lVar19 + 4;
          iVar7 = (int)unaff_x21;
          if (iVar6 <= (int)unaff_x21) {
            iVar7 = iVar6;
          }
          puVar13 = puVar14;
          lVar16 = lVar19;
          uVar4 = uVar24;
          puVar12 = puVar14;
          iVar11 = iVar15;
          do {
            do {
              *puVar13 = *(undefined4 *)((long)puVar20 + (long)iVar15);
              lVar16 = lVar16 + 1;
              iVar15 = iVar15 + 4;
              puVar13 = puVar13 + 1;
            } while (lVar16 < iVar7);
            uVar4 = uVar4 + 1;
            iVar15 = iVar11 + 0x10;
            puVar13 = (undefined4 *)((long)puVar12 + uVar23);
            lVar16 = lVar19;
            puVar12 = puVar13;
            iVar11 = iVar15;
          } while ((long)uVar4 < (long)unaff_x28);
          unaff_x19 = unaff_x19 + 8;
          puVar14 = puVar14 + 4;
          unaff_x26 = uStack_188;
          lVar19 = unaff_x21;
          puVar13 = puStack_180;
        } while (unaff_x21 < lVar22);
      }
      unaff_x24 = (undefined4 *)((long)puVar13 + uStack_190);
      lVar19 = unaff_x19;
      unaff_x20 = puVar8;
      unaff_x22 = lVar18;
      puVar14 = unaff_x24;
      uVar24 = unaff_x26;
    } while (unaff_x26 < uStack_198);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    iVar7 = (int)puVar9;
    iVar15 = (int)lVar21;
    uStack_1a8 = 0x10a1a4894;
    lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar10 = param_5;
    puStack_200 = unaff_x28;
    puStack_1f8 = puVar20;
    uStack_1f0 = unaff_x26;
    uStack_1e8 = uVar23;
    puStack_1e0 = unaff_x24;
    lStack_1d8 = lVar22;
    lStack_1d0 = unaff_x22;
    lStack_1c8 = unaff_x21;
    puStack_1c0 = unaff_x20;
    lStack_1b8 = unaff_x19;
    ppuStack_1b0 = &puStack_e0;
    iVar6 = iVar7;
    if (0 < (int)param_5) {
      lVar18 = 0;
      uVar4 = (ulong)puVar9 & 0xffffffff;
      uVar23 = (ulong)puVar9 >> 0x1f;
      uVar3 = (ulong)puVar9 & 0xffffffff;
      uVar24 = (ulong)puVar9 >> 0x1f;
      lVar22 = lVar21;
      puVar8 = param_3;
      uVar25 = 0;
      do {
        uVar1 = uVar25 + 4;
        if (0 < iVar7) {
          uVar2 = (uint)uVar1;
          if ((int)param_5 <= (int)(uint)uVar1) {
            uVar2 = param_5;
          }
          lVar18 = (long)(int)lVar18;
          puVar20 = puVar8;
          lVar19 = 0;
          do {
            lVar22 = lVar21 + lVar18;
            uVar5 = lVar22 + 8;
            func_0x0001098792d0();
            param_2 = (ulong)*(uint *)(&UNK_10e49b404 + (uVar5 & 0xffffffff) * 4);
            puVar9 = auStack_248;
            param_3 = (undefined4 *)0x0;
            func_0x00010987840c();
            iVar6 = 0;
            lVar16 = lVar19 + 4;
            iVar15 = (int)lVar16;
            if (iVar7 <= (int)lVar16) {
              iVar15 = iVar7;
            }
            puVar14 = puVar20;
            lVar17 = lVar19;
            uVar5 = uVar25;
            puVar13 = puVar20;
            iVar11 = iVar6;
            do {
              do {
                *puVar14 = *(undefined4 *)((long)auStack_248 + (long)iVar6);
                lVar17 = lVar17 + 1;
                iVar6 = iVar6 + 4;
                puVar14 = puVar14 + 1;
              } while (lVar17 < iVar15);
              uVar5 = uVar5 + 1;
              iVar6 = iVar11 + 0x10;
              puVar14 = (undefined4 *)
                        ((long)puVar13 + (-(uVar24 & 1) & 0xfffffffc00000000 | uVar3 << 2));
              lVar17 = lVar19;
              puVar13 = puVar14;
              iVar11 = iVar6;
            } while ((long)uVar5 < (long)(int)uVar2);
            lVar18 = lVar18 + 0x10;
            puVar20 = puVar20 + 4;
            lVar19 = lVar16;
          } while (lVar16 < iVar7);
        }
        iVar6 = (int)puVar9;
        iVar15 = (int)lVar22;
        puVar8 = (undefined4 *)((long)puVar8 + (-(uVar23 & 1) & 0xfffffff000000000 | uVar4 << 4));
        uVar25 = uVar1;
      } while (uVar1 < param_5);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
      ___stack_chk_fail();
      if (param_6 == 0) {
        return 0;
      }
      if (((iVar15 - 1U < 6) && ((uVar10 - 1 | iVar6 - 1U) < 0x4000)) && (param_2 != 0)) {
        lVar18 = *(long *)(&UNK_10e49b8e8 + (ulong)(iVar15 - 1U) * 8);
        uVar23 = (ulong)(uVar10 + 3 >> 2);
        lVar21 = lVar18 * (ulong)(iVar6 + 3U >> 2);
        if (lVar21 * uVar23 - (long)param_3 == 0 && (lVar21 + lVar18) * uVar23 - param_7 == 0) {
          if (uVar10 != 0) {
            if (uVar23 < 2) {
              uVar23 = 1;
            }
            do {
              _memcpy(param_6,param_2,lVar21);
              _bzero(param_6 + lVar21,lVar18);
              param_2 = param_2 + lVar21;
              param_6 = param_6 + lVar21 + lVar18;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
          return 1;
        }
      }
      if (param_7 != 0) {
        _bzero(param_6,param_7);
      }
      return 0;
    }
    return 1;
  }
  return 1;
}



/* Entry: 10a1a4a14; end: 10a1a4aff;  */

undefined8
FUN_10a1a4a14(int param_1,long param_2,long param_3,int param_4,int param_5,long param_6,
             long param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (param_6 == 0) {
    return 0;
  }
  if (((param_1 - 1U < 6) && ((param_5 - 1U | param_4 - 1U) < 0x4000)) && (param_2 != 0)) {
    lVar2 = *(long *)(&UNK_10e49b8e8 + (ulong)(param_1 - 1U) * 8);
    uVar1 = (ulong)(param_5 + 3U >> 2);
    lVar3 = lVar2 * (ulong)(param_4 + 3U >> 2);
    if (lVar3 * uVar1 - param_3 == 0 && (lVar3 + lVar2) * uVar1 - param_7 == 0) {
      if (param_5 != 0) {
        if (uVar1 < 2) {
          uVar1 = 1;
        }
        do {
          _memcpy(param_6,param_2,lVar3);
          _bzero(param_6 + lVar3,lVar2);
          param_2 = param_2 + lVar3;
          param_6 = param_6 + lVar3 + lVar2;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      return 1;
    }
  }
  if (param_7 != 0) {
    _bzero(param_6,param_7);
  }
  return 0;
}



/* Entry: 10a1a4b00; end: 10a1a4c33;  */

long * FUN_10a1a4b00(long *param_1,int *param_2,ulong param_3,int param_4)

{
  char *pcVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  short *psVar8;
  int iVar9;
  short sStack_22;
  
  *param_1 = (long)param_2;
  param_1[1] = param_3;
  uVar2 = 6;
  if (param_4 != 0) {
    uVar2 = 0;
  }
  param_1[3] = uVar2;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x26) = 0;
  param_1[2] = 0;
  if (((uVar2 | 8) <= param_3) &&
     ((param_4 != 0 || (*param_2 == 0x66697845 && (short)param_2[1] == 0)))) {
    pcVar1 = (char *)((long)param_2 + uVar2);
    if (*pcVar1 == 'M') {
      if (pcVar1[1] != 'M') {
        return param_1;
      }
      iVar9 = 0;
    }
    else {
      if (*pcVar1 != 'I') {
        return param_1;
      }
      if (pcVar1[1] != 'I') {
        return param_1;
      }
      iVar9 = 1;
    }
    plVar4 = param_1;
    FUN_10a1a4c34();
    *(bool *)((long)param_1 + 0x2c) = iVar9 == (int)plVar4;
    lVar5 = param_1[3];
    uVar2 = lVar5 + 2;
    param_1[2] = uVar2;
    if ((ulong)param_1[1] < uVar2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1a4c34);
      (*pcVar3)();
    }
    sStack_22 = 0;
    if (iVar9 == (int)plVar4) {
      psVar8 = (short *)(*param_1 + uVar2);
    }
    else {
      lVar6 = 0;
      puVar7 = (undefined1 *)(lVar5 + *param_1 + 3);
      do {
        psVar8 = &sStack_22;
        *(undefined1 *)((long)psVar8 + lVar6) = *puVar7;
        lVar6 = lVar6 + 1;
        puVar7 = puVar7 + -1;
      } while (lVar6 != 2);
    }
    if (*psVar8 == 0x2a) {
      param_1[2] = lVar5 + 4;
      *(undefined1 *)((long)param_1 + 0x2d) = 1;
    }
  }
  return param_1;
}



/* Entry: 10a1a4c34; end: 10a1a4c8f;  */

undefined1 FUN_10a1a4c34(void)

{
  undefined1 uStack_21;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  if (lRam0000000113300790 != -1) {
    puStack_18 = &uStack_21;
    ppuStack_20 = &puStack_18;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x113300790,&ppuStack_20,FUN_10a1ae8c4);
  }
  return uRam0000000113300788;
}



/* Entry: 10a1a4c90; end: 10a1a4f07;  */

undefined4 FUN_10a1a4c90(long *param_1)

{
  ulong uVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  uint *puVar10;
  long lVar11;
  undefined1 *puVar12;
  uint uVar13;
  ulong uVar14;
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [264];
  uint uStack_4c;
  ushort uStack_46;
  ushort uStack_44;
  ushort uStack_42;
  
  if (*(char *)((long)param_1 + 0x2d) != '\x01') {
    puVar5 = &UNK_10f6417ca;
    uVar6 = 0x13;
    FUN_10a1a4f08(&UNK_10f6417ca,0x13);
    FUN_109febc44(auStack_198);
    FUN_10a002568(auStack_188,puVar5,uVar6);
    FUN_10a1ae8d4(auStack_188);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1a4f4c);
    (*pcVar4)();
  }
  uVar7 = param_1[1];
  uVar14 = param_1[2];
  if (uVar14 + 4 <= uVar7) {
    while( true ) {
      if (uVar7 < uVar14) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1a4ef8);
        (*pcVar4)();
      }
      lVar8 = *param_1;
      puVar10 = (uint *)(lVar8 + uVar14);
      uStack_4c = 0;
      bVar2 = *(byte *)((long)param_1 + 0x2c);
      if ((bVar2 & 1) == 0) {
        lVar11 = 0;
        puVar12 = (undefined1 *)((long)puVar10 + 3);
        do {
          puVar10 = &uStack_4c;
          *(undefined1 *)((long)puVar10 + lVar11) = *puVar12;
          lVar11 = lVar11 + 1;
          puVar12 = puVar12 + -1;
        } while (lVar11 != 4);
      }
      if (*puVar10 == 0) goto LAB_10a1a4ed8;
      uVar1 = param_1[3] + (ulong)*puVar10;
      if (uVar1 < uVar14) break;
      param_1[4] = 0;
      if ((uVar7 < 2) || (uVar7 - 2 < uVar1)) break;
      puVar9 = (ushort *)(lVar8 + uVar1);
      uStack_46 = 0;
      if ((bVar2 & 1) == 0) {
        lVar8 = 0;
        puVar12 = (undefined1 *)((long)puVar9 + 1);
        do {
          puVar9 = &uStack_46;
          *(undefined1 *)((long)puVar9 + lVar8) = *puVar12;
          lVar8 = lVar8 + 1;
          puVar12 = puVar12 + -1;
        } while (lVar8 != 2);
      }
      uVar3 = *puVar9;
      if (uVar7 < uVar1 + (ulong)uVar3 * 0xc + 6) break;
      uVar14 = uVar1 + 2;
      param_1[2] = uVar14;
      if (uVar3 != 0) {
        uVar13 = 0;
        do {
          FUN_10a1a4fd0(param_1);
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar3);
        uVar7 = param_1[1];
        uVar14 = param_1[2];
        if (*(uint *)(param_1 + 4) != 0) {
          uVar1 = param_1[3] + (ulong)*(uint *)(param_1 + 4);
          if (uVar7 < 2 || uVar7 - 2 < uVar1) break;
          puVar9 = (ushort *)(*param_1 + uVar1);
          uStack_44 = 0;
          if ((*(byte *)((long)param_1 + 0x2c) & 1) == 0) {
            lVar8 = 0;
            puVar12 = (undefined1 *)((long)puVar9 + 1);
            do {
              puVar9 = &uStack_44;
              *(undefined1 *)((long)puVar9 + lVar8) = *puVar12;
              lVar8 = lVar8 + 1;
              puVar12 = puVar12 + -1;
            } while (lVar8 != 2);
          }
          uVar3 = *puVar9;
          if (uVar7 < uVar1 + (ulong)uVar3 * 0xc + 6) break;
          param_1[2] = uVar1 + 2;
          if (uVar3 != 0) {
            uVar13 = 0;
            do {
              FUN_10a1a4fd0(param_1);
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar3);
            uVar7 = param_1[1];
          }
        }
      }
      if (*(uint *)((long)param_1 + 0x24) != 0) {
        if ((uVar7 < 2) ||
           (uVar1 = param_1[3] + (ulong)*(uint *)((long)param_1 + 0x24), uVar7 - 2 < uVar1)) break;
        puVar9 = (ushort *)(*param_1 + uVar1);
        uStack_42 = 0;
        if ((*(byte *)((long)param_1 + 0x2c) & 1) == 0) {
          lVar8 = 0;
          puVar12 = (undefined1 *)((long)puVar9 + 1);
          do {
            puVar9 = &uStack_42;
            *(undefined1 *)((long)puVar9 + lVar8) = *puVar12;
            lVar8 = lVar8 + 1;
            puVar12 = puVar12 + -1;
          } while (lVar8 != 2);
        }
        uVar3 = *puVar9;
        if (uVar7 < uVar1 + (ulong)uVar3 * 0xc + 6) break;
        param_1[2] = uVar1 + 2;
        if (uVar3 != 0) {
          uVar13 = 0;
          do {
            FUN_10a1a4fd0(param_1);
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar3);
          uVar7 = param_1[1];
        }
      }
      param_1[2] = uVar14;
      if (uVar7 < uVar14 + 4) break;
    }
  }
  FUN_10a1a4f08("",0);
LAB_10a1a4ed8:
  return (int)param_1[5];
}



/* Entry: 10a1a4f08; end: 10a1a4fcf;  */

void FUN_10a1a4f08(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [264];
  
  FUN_109febc44(auStack_148);
  FUN_10a002568(auStack_138,param_1,param_2);
  FUN_10a1ae8d4(auStack_138);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1a4f4c);
  (*pcVar1)();
}



/* Entry: 10a1a4fd0; end: 10a1a5393;  */

long * FUN_10a1a4fd0(long *param_1,undefined8 param_2,int param_3)

{
  short *psVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulong uVar6;
  short sVar7;
  code *pcVar8;
  char *pcVar9;
  long *plVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  uint *puVar17;
  ushort uVar18;
  uint uVar19;
  undefined8 uStack_4a8;
  undefined4 uStack_4a0;
  undefined8 uStack_448;
  ulong uStack_440;
  undefined4 uStack_438;
  long lStack_430;
  undefined1 auStack_428 [72];
  long *aplStack_3e0 [2];
  long lStack_3d0;
  undefined8 uStack_380;
  ulong uStack_378;
  undefined4 uStack_370;
  long lStack_318;
  undefined1 auStack_310 [96];
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined4 uStack_2a0;
  long lStack_298;
  undefined1 auStack_290 [72];
  long lStack_248;
  undefined1 auStack_1f8 [120];
  uint uStack_180;
  long lStack_128;
  undefined1 **ppuStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [116];
  uint uStack_94;
  long lStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  uint uStack_14;
  
  puStack_30 = &stack0xfffffffffffffff0;
  uVar13 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = uVar13 - uVar2;
  if (uVar13 < uVar2) {
LAB_10a1a51d8:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1a51dc);
    (*pcVar8)();
  }
  lVar14 = *param_1;
  psVar1 = (short *)(lVar14 + uVar2);
  bVar4 = *(byte *)((long)param_1 + 0x2c);
  uStack_14 = uStack_14 & 0xffff0000;
  if ((bVar4 & 1) == 0) {
    lVar16 = 0;
    puVar15 = (undefined1 *)(uVar2 + lVar14 + 1);
    do {
      *(undefined1 *)((long)&uStack_14 + lVar16) = *puVar15;
      lVar16 = lVar16 + 1;
      puVar15 = puVar15 + -1;
    } while (lVar16 != 2);
    if ((uVar6 < 2) || (uVar6 < 4)) goto LAB_10a1a51d8;
    uVar18 = (ushort)psVar1[1] >> 8 | psVar1[1] << 8;
    uVar19 = (*(uint *)(psVar1 + 2) & 0xff00ff00) >> 8 | (*(uint *)(psVar1 + 2) & 0xff00ff) << 8;
    uVar19 = uVar19 >> 0x10 | uVar19 << 0x10;
    puVar17 = &uStack_14;
    sVar7 = (short)uStack_14;
  }
  else {
    if ((uVar6 < 2) || (uVar6 < 4)) goto LAB_10a1a51d8;
    uVar19 = 0;
    uVar18 = psVar1[1];
    puVar17 = (uint *)(psVar1 + 2);
    sVar7 = *psVar1;
  }
  uStack_14 = uVar19;
  uVar3 = *puVar17;
  if (sVar7 == -0x77db) {
    if ((uVar18 == 4) && (uVar3 == 1)) {
      if (uVar2 + 8 <= uVar13) {
        uStack_14 = 0;
        if ((bVar4 & 1) == 0) {
          lVar16 = 0;
          puVar15 = (undefined1 *)(uVar2 + lVar14 + 0xb);
          do {
            puVar17 = &uStack_14;
            *(undefined1 *)((long)puVar17 + lVar16) = *puVar15;
            lVar16 = lVar16 + 1;
            puVar15 = puVar15 + -1;
          } while (lVar16 != 4);
        }
        else {
          puVar17 = (uint *)(lVar14 + uVar2 + 8);
        }
        *(uint *)((long)param_1 + 0x24) = *puVar17;
        goto LAB_10a1a51c4;
      }
      goto LAB_10a1a51d8;
    }
  }
  else if (sVar7 == -0x7897) {
    if ((uVar18 == 4) && (uVar3 == 1)) {
      if (uVar13 < uVar2 + 8) goto LAB_10a1a51d8;
      uStack_14 = 0;
      if ((bVar4 & 1) == 0) {
        lVar16 = 0;
        puVar15 = (undefined1 *)(uVar2 + lVar14 + 0xb);
        do {
          puVar17 = &uStack_14;
          *(undefined1 *)((long)puVar17 + lVar16) = *puVar15;
          lVar16 = lVar16 + 1;
          puVar15 = puVar15 + -1;
        } while (lVar16 != 4);
      }
      else {
        puVar17 = (uint *)(lVar14 + uVar2 + 8);
      }
      *(uint *)(param_1 + 4) = *puVar17;
      goto LAB_10a1a51c4;
    }
  }
  else {
    if (sVar7 != 0x112) {
LAB_10a1a51c4:
      param_1[2] = uVar2 + 0xc;
      return param_1;
    }
    if (uVar3 == 1) {
      if (uVar18 != 3) goto LAB_10a1a51c4;
      if (uVar13 < uVar2 + 8) goto LAB_10a1a51d8;
      uStack_14 = uVar19 & 0xffff0000;
      if ((bVar4 & 1) == 0) {
        lVar16 = 0;
        puVar15 = (undefined1 *)(uVar2 + lVar14 + 9);
        do {
          puVar17 = &uStack_14;
          *(undefined1 *)((long)puVar17 + lVar16) = *puVar15;
          lVar16 = lVar16 + 1;
          puVar15 = puVar15 + -1;
        } while (lVar16 != 2);
      }
      else {
        puVar17 = (uint *)(lVar14 + uVar2 + 8);
      }
      if ((ushort)*puVar17 - 1 < 8) {
        *(undefined4 *)(param_1 + 5) =
             *(undefined4 *)(&UNK_10e49b108 + (ulong)((ushort)*puVar17 - 1) * 4);
        goto LAB_10a1a51c4;
      }
    }
  }
  pcVar9 = "";
  iVar12 = 0;
  FUN_10a1a4f08();
  uStack_28 = 0x10a1a51ec;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar5 = (char)*(long *)((long)pcVar9 + 0x10);
  if (cVar5 == '\x02') {
    plVar10 = (long *)(ulong)*(uint *)(*(long *)pcVar9 + 8);
LAB_10a1a5248:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return plVar10;
    }
    ___stack_chk_fail(plVar10);
  }
  else {
    if (cVar5 == '\x01') {
      func_0x0001096f2204(auStack_108,*(long *)pcVar9);
      plVar10 = (long *)(ulong)uStack_94;
      goto LAB_10a1a5248;
    }
    if (cVar5 == '\0') {
      plVar10 = (long *)(ulong)*(uint *)(*(long *)pcVar9 + 0x10);
      goto LAB_10a1a5248;
    }
  }
  plVar10 = (long *)&UNK_10f6423f1;
  FUN_10a05bab8();
  uStack_118 = 0x10a1a527c;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar5 = (char)plVar10[2];
  ppuStack_120 = &puStack_30;
  if (cVar5 == '\x02') {
    plVar10 = (long *)(ulong)*(uint *)(*plVar10 + 0xc);
LAB_10a1a52d8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
      return plVar10;
    }
    ___stack_chk_fail(plVar10);
  }
  else {
    if (cVar5 == '\x01') {
      func_0x0001096f2204(auStack_1f8,*plVar10);
      plVar10 = (long *)(ulong)uStack_180;
      goto LAB_10a1a52d8;
    }
    if (cVar5 == '\0') {
      plVar10 = (long *)(ulong)*(uint *)(*plVar10 + 0x14);
      goto LAB_10a1a52d8;
    }
  }
  puVar11 = (undefined8 *)&UNK_10f6423f1;
  FUN_10a05bab8();
  cVar5 = *(char *)(puVar11 + 2);
  if (cVar5 == '\x02') {
    plVar10 = (long *)*puVar11;
                    /* WARNING: Could not recover jumptable at 0x00010a1a537c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*plVar10)();
    return plVar10;
  }
  if ((cVar5 == '\x01') || (cVar5 == '\0')) {
    if (iVar12 <= param_3) {
      iVar12 = param_3;
    }
    uVar13 = (long)iVar12 | (ulong)(long)iVar12 >> 1;
    uVar13 = uVar13 | uVar13 >> 2;
    uVar13 = uVar13 | uVar13 >> 4;
    uVar13 = uVar13 | uVar13 >> 8;
    uVar13 = uVar13 | uVar13 >> 0x10;
    return (long *)(ulong)(byte)(&UNK_10e49b580)
                                [(uVar13 | uVar13 >> 0x20) * 0x3f6eaf2cd271461 >> 0x3a];
  }
  plVar10 = (long *)&UNK_10f6423f1;
  FUN_10a05bab8();
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar5 = (char)plVar10[2];
  if (cVar5 == '\x02') {
    aplStack_3e0[0] = *(long **)(*plVar10 + 0x58);
LAB_10a1a54b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
      return aplStack_3e0[0];
    }
    ___stack_chk_fail(aplStack_3e0[0]);
  }
  else {
    if (cVar5 != '\x01') {
      if (cVar5 != '\0') {
        FUN_10a05bab8(&UNK_10f6423f1);
        goto LAB_10a1a54fc;
      }
      aplStack_3e0[0] = *(long **)(*plVar10 + 0x28);
      goto LAB_10a1a54b0;
    }
    func_0x0001096f2204(&lStack_318,*plVar10);
    if (lStack_318 != 0) {
      _memcpy(&uStack_4a8,auStack_310,lStack_318 << 5);
    }
    uStack_440 = uStack_2a8;
    uStack_448 = uStack_2b0;
    uStack_438 = uStack_2a0;
    lStack_430 = lStack_298;
    if (lStack_298 != 0) {
      _memcpy(auStack_428,auStack_290,lStack_298 * 0x18);
    }
    if (lStack_318 != 0) {
      _memcpy(aplStack_3e0,&uStack_4a8,lStack_318 << 5);
    }
    uStack_378 = uStack_2a8;
    uVar13 = uStack_378;
    uStack_380 = uStack_2b0;
    uStack_370 = uStack_2a0;
    if (lStack_318 != 1) {
LAB_10a1a54fc:
      FUN_10a00946c(&UNK_10f642405);
      goto LAB_10a1a5508;
    }
    if (-1 < lStack_3d0) {
      uStack_378._0_4_ = (undefined4)uStack_2a8;
      uStack_4a8 = uStack_2b0;
      uStack_4a0 = (undefined4)uStack_378;
      puVar11 = &uStack_4a8;
      uStack_378 = uVar13;
      func_0x0001096f1ebc();
      if (((int)puVar11 == 0) ||
         ((uStack_378 >> 0x20) * ((ulong)puVar11 & 0xffffffff) - lStack_3d0 == 0))
      goto LAB_10a1a54b0;
    }
  }
  FUN_10a00946c(&UNK_10f64243f);
LAB_10a1a5508:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1a550c);
  (*pcVar8)();
}



/* Entry: 10a1a5394; end: 10a1a550f;  */

void FUN_10a1a5394(long *param_1)

{
  char cVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined8 uStack_238;
  ulong uStack_230;
  undefined4 uStack_228;
  long lStack_220;
  undefined1 auStack_218 [72];
  undefined8 auStack_1d0 [2];
  long lStack_1c0;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined4 uStack_160;
  long lStack_108;
  undefined1 auStack_100 [96];
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined4 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar1 = (char)param_1[2];
  if (cVar1 == '\x02') {
    auStack_1d0[0] = *(undefined8 *)(*param_1 + 0x58);
LAB_10a1a54b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail(auStack_1d0[0]);
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\0') {
        FUN_10a05bab8(&UNK_10f6423f1);
        goto LAB_10a1a54fc;
      }
      auStack_1d0[0] = *(undefined8 *)(*param_1 + 0x28);
      goto LAB_10a1a54b0;
    }
    func_0x0001096f2204(&lStack_108,*param_1);
    if (lStack_108 != 0) {
      _memcpy(&uStack_298,auStack_100,lStack_108 << 5);
    }
    uStack_230 = uStack_98;
    uStack_238 = uStack_a0;
    uStack_228 = uStack_90;
    lStack_220 = lStack_88;
    if (lStack_88 != 0) {
      _memcpy(auStack_218,auStack_80,lStack_88 * 0x18);
    }
    if (lStack_108 != 0) {
      _memcpy(auStack_1d0,&uStack_298,lStack_108 << 5);
    }
    uStack_168 = uStack_98;
    uVar2 = uStack_168;
    uStack_170 = uStack_a0;
    uStack_160 = uStack_90;
    if (lStack_108 != 1) {
LAB_10a1a54fc:
      FUN_10a00946c(&UNK_10f642405);
      goto LAB_10a1a5508;
    }
    if (-1 < lStack_1c0) {
      uStack_168._0_4_ = (undefined4)uStack_98;
      uStack_298 = uStack_a0;
      uStack_290 = (undefined4)uStack_168;
      puVar4 = &uStack_298;
      uStack_168 = uVar2;
      func_0x0001096f1ebc();
      if (((int)puVar4 == 0) ||
         ((uStack_168 >> 0x20) * ((ulong)puVar4 & 0xffffffff) - lStack_1c0 == 0))
      goto LAB_10a1a54b0;
    }
  }
  FUN_10a00946c(&UNK_10f64243f);
LAB_10a1a5508:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1a550c);
  (*pcVar3)();
}



/* Entry: 10a1a5510; end: 10a1a55c7;  */

void FUN_10a1a5510(undefined8 *param_1,undefined1 *param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int *piVar6;
  int *piVar7;
  ulong uVar8;
  long lStack_448;
  long lStack_440;
  undefined1 *puStack_428;
  undefined1 ****ppppuStack_420;
  code *pcStack_418;
  long lStack_408;
  undefined1 auStack_400 [96];
  long lStack_3a0;
  long lStack_398;
  undefined4 uStack_390;
  long lStack_388;
  undefined1 auStack_380 [72];
  long lStack_338;
  undefined1 ***pppuStack_310;
  code *pcStack_308;
  long lStack_2f8;
  undefined1 auStack_2f0 [96];
  long lStack_290;
  long lStack_288;
  undefined4 uStack_280;
  long lStack_278;
  undefined1 auStack_270 [72];
  long lStack_228;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  long lStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined1 auStack_1c8 [208];
  undefined1 auStack_f8 [208];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      func_0x0001096f2204(auStack_1c8,*param_1);
      param_2 = auStack_1c8;
      func_0x0001096f3848(auStack_f8);
      func_0x0001096f3770(auStack_f8);
    }
    else if (cVar1 != '\0') goto LAB_10a1a55bc;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
LAB_10a1a55bc:
  iVar2 = 0xf6423f1;
  FUN_10a05bab8();
  puVar4 = &uStack_1f0;
  pcStack_1d8 = FUN_10a1a55c8;
  uVar8 = 0;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1f0 = 1;
  piVar6 = (int *)&UNK_10e49b474;
  while( true ) {
    for (; piVar7 = (int *)(&UNK_10e49b44c + uVar8 * 8), iVar2 <= *piVar7; uVar8 = uVar8 << 1 | 1) {
      if (1 < uVar8) goto LAB_10a1a5640;
      piVar6 = piVar7;
    }
    piVar7 = piVar6;
    if (1 < uVar8) break;
    uVar8 = uVar8 * 2 + 2;
  }
LAB_10a1a5640:
  puStack_1e0 = &stack0xfffffffffffffff0;
  if ((piVar7 == (int *)&UNK_10e49b474) || (iVar2 < *piVar7 || piVar7 == (int *)&UNK_10e49b474)) {
    plVar3 = (long *)&UNK_10f6420e9;
    FUN_10a00946c();
  }
  else {
    iStack_1ec = piVar7[1];
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    *extraout_x8 = 0;
    param_3 = &lStack_1e8;
    plVar3 = extraout_x8;
    FUN_10a14d944();
    param_2 = (undefined1 *)puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
      return;
    }
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_10a1a56b4;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2f8 = *plVar3;
  ppuStack_200 = &puStack_1e0;
  if (lStack_2f8 != 0) {
    _memcpy(auStack_2f0,plVar3 + 1,lStack_2f8 << 5);
  }
  lStack_288 = plVar3[0xe];
  lStack_290 = plVar3[0xd];
  uStack_280 = (undefined4)plVar3[0xf];
  lStack_278 = plVar3[0x10];
  if (lStack_278 != 0) {
    _memcpy(auStack_270,plVar3 + 0x11,lStack_278 * 0x18);
  }
  plVar3 = &lStack_2f8;
  FUN_10ad06308(plVar3,param_2,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcStack_308 = FUN_10a1a577c;
    lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_408 = *plVar3;
    pppuStack_310 = &ppuStack_200;
    if (lStack_408 != 0) {
      _memcpy(auStack_400,plVar3 + 1,lStack_408 << 5);
    }
    lStack_398 = plVar3[0xe];
    lStack_3a0 = plVar3[0xd];
    uStack_390 = (undefined4)plVar3[0xf];
    lStack_388 = plVar3[0x10];
    if (lStack_388 != 0) {
      _memcpy(auStack_380,plVar3 + 0x11,lStack_388 * 0x18);
    }
    plVar3 = &lStack_408;
    puVar5 = param_2;
    FUN_10ad06720(extraout_x8_00,plVar3,param_2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
      ___stack_chk_fail();
      __Unwind_Resume();
      pcStack_418 = FUN_10a1a5844;
      puStack_428 = param_2;
      ppppuStack_420 = &pppuStack_310;
      FUN_10a1a55c8(&lStack_448,puVar5);
      FUN_10a1a58bc(extraout_x8_01,plVar3,&UNK_10f642482,&lStack_448);
      if (lStack_448 != 0) {
        lStack_440 = lStack_448;
        __ZdlPv();
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10a1a55c8; end: 10a1a56b3;  */

void FUN_10a1a55c8(long *param_1,int param_2,undefined1 *param_3,long *param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  long lStack_278;
  long lStack_270;
  undefined1 *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  long lStack_238;
  undefined1 auStack_230 [96];
  long lStack_1d0;
  long lStack_1c8;
  undefined4 uStack_1c0;
  long lStack_1b8;
  undefined1 auStack_1b0 [72];
  long lStack_168;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  long lStack_128;
  undefined1 auStack_120 [96];
  long lStack_c0;
  long lStack_b8;
  undefined4 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [72];
  long lStack_58;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined4 uStack_20;
  int iStack_1c;
  long lStack_18;
  
  puVar2 = &uStack_20;
  uVar6 = 0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = 1;
  piVar4 = (int *)&UNK_10e49b474;
  while( true ) {
    for (; piVar5 = (int *)(&UNK_10e49b44c + uVar6 * 8), *piVar5 < param_2; uVar6 = uVar6 * 2 + 2) {
      piVar5 = piVar4;
      if (1 < uVar6) goto LAB_10a1a5640;
    }
    if (1 < uVar6) break;
    uVar6 = uVar6 << 1 | 1;
    piVar4 = piVar5;
  }
LAB_10a1a5640:
  if ((piVar5 == (int *)&UNK_10e49b474) || (param_2 < *piVar5 || piVar5 == (int *)&UNK_10e49b474)) {
    param_1 = (long *)&UNK_10f6420e9;
    FUN_10a00946c();
  }
  else {
    iStack_1c = piVar5[1];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    param_4 = &lStack_18;
    FUN_10a14d944();
    param_3 = (undefined1 *)puVar2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
      return;
    }
  }
  ___stack_chk_fail();
  pcStack_28 = FUN_10a1a56b4;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = *param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  if (lStack_128 != 0) {
    _memcpy(auStack_120,param_1 + 1,lStack_128 << 5);
  }
  lStack_b8 = param_1[0xe];
  lStack_c0 = param_1[0xd];
  uStack_b0 = (undefined4)param_1[0xf];
  lStack_a8 = param_1[0x10];
  if (lStack_a8 != 0) {
    _memcpy(auStack_a0,param_1 + 0x11,lStack_a8 * 0x18);
  }
  plVar1 = &lStack_128;
  FUN_10ad06308(plVar1,param_3,param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_138 = FUN_10a1a577c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = *plVar1;
  ppuStack_140 = &puStack_30;
  if (lStack_238 != 0) {
    _memcpy(auStack_230,plVar1 + 1,lStack_238 << 5);
  }
  lStack_1c8 = plVar1[0xe];
  lStack_1d0 = plVar1[0xd];
  uStack_1c0 = (undefined4)plVar1[0xf];
  lStack_1b8 = plVar1[0x10];
  if (lStack_1b8 != 0) {
    _memcpy(auStack_1b0,plVar1 + 0x11,lStack_1b8 * 0x18);
  }
  plVar1 = &lStack_238;
  puVar3 = param_3;
  FUN_10ad06720(extraout_x8,plVar1,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_248 = FUN_10a1a5844;
  puStack_258 = param_3;
  pppuStack_250 = &ppuStack_140;
  FUN_10a1a55c8(&lStack_278,puVar3);
  FUN_10a1a58bc(extraout_x8_00,plVar1,&UNK_10f642482,&lStack_278);
  if (lStack_278 != 0) {
    lStack_270 = lStack_278;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a1a56b4; end: 10a1a577b;  */

void FUN_10a1a56b4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lStack_258;
  long lStack_250;
  undefined8 uStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  long lStack_218;
  undefined1 auStack_210 [96];
  long lStack_1b0;
  long lStack_1a8;
  undefined4 uStack_1a0;
  long lStack_198;
  undefined1 auStack_190 [72];
  long lStack_148;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_108;
  undefined1 auStack_100 [96];
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = *param_1;
  if (lStack_108 != 0) {
    _memcpy(auStack_100,param_1 + 1,lStack_108 << 5);
  }
  lStack_98 = param_1[0xe];
  lStack_a0 = param_1[0xd];
  uStack_90 = (undefined4)param_1[0xf];
  lStack_88 = param_1[0x10];
  if (lStack_88 != 0) {
    _memcpy(auStack_80,param_1 + 0x11,lStack_88 * 0x18);
  }
  plVar1 = &lStack_108;
  FUN_10ad06308(plVar1,param_2,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_118 = FUN_10a1a577c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_218 = *plVar1;
  puStack_120 = &stack0xfffffffffffffff0;
  if (lStack_218 != 0) {
    _memcpy(auStack_210,plVar1 + 1,lStack_218 << 5);
  }
  lStack_1a8 = plVar1[0xe];
  lStack_1b0 = plVar1[0xd];
  uStack_1a0 = (undefined4)plVar1[0xf];
  lStack_198 = plVar1[0x10];
  if (lStack_198 != 0) {
    _memcpy(auStack_190,plVar1 + 0x11,lStack_198 * 0x18);
  }
  plVar1 = &lStack_218;
  uVar2 = param_2;
  FUN_10ad06720(extraout_x8,plVar1,param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_228 = FUN_10a1a5844;
  uStack_238 = param_2;
  ppuStack_230 = &puStack_120;
  FUN_10a1a55c8(&lStack_258,uVar2);
  FUN_10a1a58bc(extraout_x8_00,plVar1,&UNK_10f642482,&lStack_258);
  if (lStack_258 != 0) {
    lStack_250 = lStack_258;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a1a577c; end: 10a1a5843;  */

void FUN_10a1a577c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_108;
  undefined1 auStack_100 [96];
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = *param_2;
  if (lStack_108 != 0) {
    _memcpy(auStack_100,param_2 + 1,lStack_108 << 5);
  }
  lStack_98 = param_2[0xe];
  lStack_a0 = param_2[0xd];
  uStack_90 = (undefined4)param_2[0xf];
  lStack_88 = param_2[0x10];
  if (lStack_88 != 0) {
    _memcpy(auStack_80,param_2 + 0x11,lStack_88 * 0x18);
  }
  plVar1 = &lStack_108;
  uVar2 = param_3;
  FUN_10ad06720(param_1,plVar1,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_118 = FUN_10a1a5844;
  uStack_130 = param_1;
  uStack_128 = param_3;
  puStack_120 = &stack0xfffffffffffffff0;
  FUN_10a1a55c8(&lStack_148,uVar2);
  FUN_10a1a58bc(extraout_x8,plVar1,&UNK_10f642482,&lStack_148);
  if (lStack_148 != 0) {
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a1a5844; end: 10a1a58bb;  */

void FUN_10a1a5844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_38;
  long lStack_30;
  
  FUN_10a1a55c8(&lStack_38,param_3);
  FUN_10a1a58bc(param_1,param_2,&UNK_10f642482,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a1a58bc; end: 10a1a5a07;  */

void FUN_10a1a58bc(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  int *piVar7;
  undefined4 auStack_88 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 *puStack_70;
  ulong uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  lStack_60 = 0;
  lStack_58 = 0;
  lStack_50 = 0;
  puStack_70 = (undefined4 *)0x0;
  uStack_68 = 0;
  if (param_3 != 0) {
    uVar4 = param_3;
    _strlen();
    puVar5 = (undefined4 *)((uVar4 & 0xfffffffffffffffc) + 8);
    func_0x000107c2ae8c();
    puStack_70 = puVar5 + 1;
    *puVar5 = 1;
    *(undefined1 *)((long)puStack_70 + uVar4) = 0;
    uStack_68 = uVar4;
    _memcpy(puStack_70,param_3,uVar4);
  }
  uStack_78 = 0;
  auStack_88[0] = 0x1010000;
  ppuVar6 = &puStack_70;
  uStack_80 = param_2;
  func_0x000109b7fb60(ppuVar6,auStack_88,&lStack_60,param_4);
  puVar5 = puStack_70;
  puStack_70 = (undefined4 *)0x0;
  uStack_68 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    piVar7 = puVar5 + -1;
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(puVar5 + -3));
    }
  }
  if (((ulong)ppuVar6 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (lStack_60 != 0) {
      lStack_58 = lStack_60;
      __ZdlPv();
    }
  }
  else {
    param_1[1] = lStack_58;
    *param_1 = lStack_60;
    param_1[2] = lStack_50;
  }
  return;
}



/* Entry: 10a1a5a08; end: 10a1a5af7;  */

void FUN_10a1a5a08(long *param_1,int param_2,undefined1 *param_3,long *param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  long lStack_278;
  long lStack_270;
  undefined1 *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  long lStack_238;
  undefined1 auStack_230 [96];
  long lStack_1d0;
  long lStack_1c8;
  undefined4 uStack_1c0;
  long lStack_1b8;
  undefined1 auStack_1b0 [72];
  long lStack_168;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  long lStack_128;
  undefined1 auStack_120 [96];
  long lStack_c0;
  long lStack_b8;
  undefined4 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [72];
  long lStack_58;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined4 uStack_20;
  int iStack_1c;
  long lStack_18;
  
  puVar2 = &uStack_20;
  uVar6 = 0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = 0x10;
  piVar4 = (int *)&UNK_10e49b4a0;
  while( true ) {
    for (; piVar5 = (int *)(&UNK_10e49b478 + uVar6 * 8), *piVar5 < param_2; uVar6 = uVar6 * 2 + 2) {
      piVar5 = piVar4;
      if (1 < uVar6) goto LAB_10a1a5a84;
    }
    if (1 < uVar6) break;
    uVar6 = uVar6 << 1 | 1;
    piVar4 = piVar5;
  }
LAB_10a1a5a84:
  if ((piVar5 == (int *)&UNK_10e49b4a0) || (param_2 < *piVar5 || piVar5 == (int *)&UNK_10e49b4a0)) {
    param_1 = (long *)&UNK_10f6420e9;
    FUN_10a00946c();
  }
  else {
    iStack_1c = piVar5[1];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    param_4 = &lStack_18;
    FUN_10a14d944();
    param_3 = (undefined1 *)puVar2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
      return;
    }
  }
  ___stack_chk_fail();
  pcStack_28 = FUN_10a1a5af8;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = *param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  if (lStack_128 != 0) {
    _memcpy(auStack_120,param_1 + 1,lStack_128 << 5);
  }
  lStack_b8 = param_1[0xe];
  lStack_c0 = param_1[0xd];
  uStack_b0 = (undefined4)param_1[0xf];
  lStack_a8 = param_1[0x10];
  if (lStack_a8 != 0) {
    _memcpy(auStack_a0,param_1 + 0x11,lStack_a8 * 0x18);
  }
  plVar1 = &lStack_128;
  FUN_10ad069e8(plVar1,param_3,param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_138 = FUN_10a1a5bc0;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = *plVar1;
  ppuStack_140 = &puStack_30;
  if (lStack_238 != 0) {
    _memcpy(auStack_230,plVar1 + 1,lStack_238 << 5);
  }
  lStack_1c8 = plVar1[0xe];
  lStack_1d0 = plVar1[0xd];
  uStack_1c0 = (undefined4)plVar1[0xf];
  lStack_1b8 = plVar1[0x10];
  if (lStack_1b8 != 0) {
    _memcpy(auStack_1b0,plVar1 + 0x11,lStack_1b8 * 0x18);
  }
  plVar1 = &lStack_238;
  puVar3 = param_3;
  FUN_10ad06b30(extraout_x8,plVar1,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_248 = FUN_10a1a5c88;
  puStack_258 = param_3;
  pppuStack_250 = &ppuStack_140;
  FUN_10a1a5a08(&lStack_278,puVar3);
  FUN_10a1a58bc(extraout_x8_00,plVar1,&UNK_10f642487,&lStack_278);
  if (lStack_278 != 0) {
    lStack_270 = lStack_278;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a1a5af8; end: 10a1a5bbf;  */

void FUN_10a1a5af8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lStack_258;
  long lStack_250;
  undefined8 uStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  long lStack_218;
  undefined1 auStack_210 [96];
  long lStack_1b0;
  long lStack_1a8;
  undefined4 uStack_1a0;
  long lStack_198;
  undefined1 auStack_190 [72];
  long lStack_148;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_108;
  undefined1 auStack_100 [96];
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = *param_1;
  if (lStack_108 != 0) {
    _memcpy(auStack_100,param_1 + 1,lStack_108 << 5);
  }
  lStack_98 = param_1[0xe];
  lStack_a0 = param_1[0xd];
  uStack_90 = (undefined4)param_1[0xf];
  lStack_88 = param_1[0x10];
  if (lStack_88 != 0) {
    _memcpy(auStack_80,param_1 + 0x11,lStack_88 * 0x18);
  }
  plVar1 = &lStack_108;
  FUN_10ad069e8(plVar1,param_2,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_118 = FUN_10a1a5bc0;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_218 = *plVar1;
  puStack_120 = &stack0xfffffffffffffff0;
  if (lStack_218 != 0) {
    _memcpy(auStack_210,plVar1 + 1,lStack_218 << 5);
  }
  lStack_1a8 = plVar1[0xe];
  lStack_1b0 = plVar1[0xd];
  uStack_1a0 = (undefined4)plVar1[0xf];
  lStack_198 = plVar1[0x10];
  if (lStack_198 != 0) {
    _memcpy(auStack_190,plVar1 + 0x11,lStack_198 * 0x18);
  }
  plVar1 = &lStack_218;
  uVar2 = param_2;
  FUN_10ad06b30(extraout_x8,plVar1,param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_228 = FUN_10a1a5c88;
  uStack_238 = param_2;
  ppuStack_230 = &puStack_120;
  FUN_10a1a5a08(&lStack_258,uVar2);
  FUN_10a1a58bc(extraout_x8_00,plVar1,&UNK_10f642487,&lStack_258);
  if (lStack_258 != 0) {
    lStack_250 = lStack_258;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a1a5bc0; end: 10a1a5c87;  */

void FUN_10a1a5bc0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_108;
  undefined1 auStack_100 [96];
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = *param_2;
  if (lStack_108 != 0) {
    _memcpy(auStack_100,param_2 + 1,lStack_108 << 5);
  }
  lStack_98 = param_2[0xe];
  lStack_a0 = param_2[0xd];
  uStack_90 = (undefined4)param_2[0xf];
  lStack_88 = param_2[0x10];
  if (lStack_88 != 0) {
    _memcpy(auStack_80,param_2 + 0x11,lStack_88 * 0x18);
  }
  plVar1 = &lStack_108;
  uVar2 = param_3;
  FUN_10ad06b30(param_1,plVar1,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_118 = FUN_10a1a5c88;
  uStack_130 = param_1;
  uStack_128 = param_3;
  puStack_120 = &stack0xfffffffffffffff0;
  FUN_10a1a5a08(&lStack_148,uVar2);
  FUN_10a1a58bc(extraout_x8,plVar1,&UNK_10f642487,&lStack_148);
  if (lStack_148 != 0) {
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a1a5c88; end: 10a1a5cff;  */

void FUN_10a1a5c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_38;
  long lStack_30;
  
  FUN_10a1a5a08(&lStack_38,param_3);
  FUN_10a1a58bc(param_1,param_2,&UNK_10f642487,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a1a5d00; end: 10a1a5e63;  */

/* WARNING: Type propagation algorithm not settling */

undefined ******** FUN_10a1a5d00(long *param_1,undefined *******param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  code *pcVar8;
  undefined ********ppppppppuVar9;
  undefined ********ppppppppuVar10;
  undefined ********ppppppppuVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  undefined ********extraout_x8;
  undefined *******pppppppuVar16;
  undefined ********ppppppppuVar17;
  int *piVar18;
  int *piVar19;
  uint uVar20;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  uint *puVar25;
  undefined *******pppppppuVar26;
  undefined ******ppppppuVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  long lStack_790;
  long lStack_788;
  undefined8 uStack_780;
  uint uStack_778;
  int iStack_774;
  uint uStack_770;
  int iStack_76c;
  undefined4 uStack_768;
  int iStack_764;
  undefined4 uStack_760;
  int iStack_75c;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined4 uStack_748;
  undefined4 uStack_744;
  long lStack_740;
  uint *puStack_738;
  ulong *puStack_730;
  ulong auStack_728 [2];
  uint uStack_718;
  int iStack_714;
  uint uStack_710;
  int iStack_70c;
  undefined4 uStack_708;
  int iStack_704;
  undefined4 uStack_700;
  int iStack_6fc;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  long lStack_6e0;
  uint *puStack_6d8;
  ulong *puStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  undefined1 auStack_6b8 [96];
  undefined *******pppppppuStack_658;
  undefined *******pppppppuStack_650;
  undefined4 uStack_648;
  undefined *******pppppppuStack_640;
  undefined1 auStack_638 [72];
  undefined1 auStack_5f0 [96];
  undefined *******pppppppuStack_590;
  undefined *******pppppppuStack_588;
  uint uStack_580;
  undefined *******pppppppuStack_578;
  undefined1 auStack_570 [72];
  undefined1 auStack_528 [96];
  undefined *******pppppppuStack_4c8;
  undefined *******pppppppuStack_4c0;
  uint uStack_4b8;
  undefined *******pppppppuStack_4b0;
  undefined1 auStack_4a8 [72];
  undefined *******pppppppuStack_460;
  uint *puStack_458;
  undefined *******pppppppuStack_400;
  undefined8 uStack_3f8;
  uint uStack_3f0;
  undefined *******pppppppuStack_3e8;
  undefined1 auStack_3e0 [72];
  undefined4 *puStack_398;
  uint *puStack_390;
  undefined8 uStack_388;
  undefined *******pppppppuStack_338;
  undefined *******pppppppuStack_330;
  uint uStack_328;
  undefined *******pppppppuStack_320;
  undefined1 auStack_318 [72];
  undefined4 uStack_2d0;
  int iStack_2cc;
  uint *puStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b0;
  ulong uStack_2a0;
  long lStack_208;
  undefined ********ppppppppuStack_198;
  undefined *******pppppppuStack_190;
  undefined8 uStack_188;
  undefined ********appppppppuStack_130 [2];
  char cStack_119;
  undefined *******pppppppuStack_118;
  undefined1 auStack_110 [96];
  long lStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  undefined *******pppppppuVar21;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar27 = param_2[1];
  pppppppuVar26 = (undefined *******)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    ppppppuVar27 = (undefined ******)(ulong)*(byte *)((long)param_2 + 0x17);
    pppppppuVar26 = param_2;
  }
  FUN_10a1a5e64(appppppppuStack_130,pppppppuVar26,ppppppuVar27);
  pppppppuStack_118 = (undefined *******)&PTR_DAT_110bab380;
  pppppppuVar26 = (undefined *******)&pppppppuStack_118;
  FUN_10a1aea84(pppppppuVar26,appppppppuStack_130);
  if (pppppppuVar26 == (undefined *******)&UNK_110bab3e0) {
    FUN_10a00946c(&UNK_10f6417f0);
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1a5e3c);
    (*pcVar8)();
  }
  ppppppuVar27 = pppppppuVar26[2];
  pppppppuStack_118 = (undefined *******)*param_1;
  if (pppppppuStack_118 != (undefined *******)0x0) {
    _memcpy(auStack_110,param_1 + 1,(long)pppppppuStack_118 << 5);
  }
  lStack_a8 = param_1[0xe];
  lStack_b0 = param_1[0xd];
  uStack_a0 = (undefined4)param_1[0xf];
  lStack_98 = param_1[0x10];
  if (lStack_98 != 0) {
    _memcpy(auStack_90,param_1 + 0x11,lStack_98 * 0x18);
  }
  ppppppppuVar9 = &pppppppuStack_118;
  pppppppuVar26 = param_2;
  (*(code *)ppppppuVar27)(ppppppppuVar9,param_2,param_3);
  ppppppppuVar10 = ppppppppuVar9;
  if (cStack_119 < '\0') {
    __ZdlPv();
    ppppppppuVar10 = appppppppuStack_130[0];
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppppppuVar9;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pppppppuVar16 = (undefined *******)((ulong)pppppppuVar26 & 0xffffffff);
  pppppppuVar21 = pppppppuVar26;
  do {
    pppppppuVar16 = (undefined *******)((long)pppppppuVar16 + -1);
    uVar20 = (uint)pppppppuVar21;
    pppppppuVar21 = (undefined *******)(ulong)(uVar20 - 1);
    uVar24 = (uint)pppppppuVar26 & (int)(uint)pppppppuVar26 >> 0x1f;
    if ((int)uVar20 < 1) break;
    if (pppppppuVar26 <= pppppppuVar16) goto LAB_10a1a6080;
    uVar24 = uVar20;
  } while (*(char *)((long)ppppppppuVar10 + (long)pppppppuVar16) == '/');
  pppppppuStack_190 = pppppppuVar26;
  if ((undefined *******)(long)(int)uVar24 <= pppppppuVar26) {
    pppppppuStack_190 = (undefined *******)(long)(int)uVar24;
  }
  puVar13 = (undefined8 *)&UNK_10f64210b;
  ppppppppuVar9 = (undefined ********)&ppppppppuStack_198;
  iVar14 = -1;
  ppppppppuStack_198 = ppppppppuVar10;
  FUN_10a1aea04();
  pppppppuVar26 = (undefined *******)((long)ppppppppuVar9 + 1);
  if (pppppppuStack_190 < pppppppuVar26) {
LAB_10a1a6084:
    ppppppppuVar9 = (undefined ********)&UNK_10f2fca6e;
    FUN_109ffdddc();
  }
  else {
    if (pppppppuStack_190 == pppppppuVar26) {
LAB_10a1a5ef0:
      ppppppppuVar9 = extraout_x8;
      func_0x000107c2b054(extraout_x8,"");
      return ppppppppuVar9;
    }
    puVar1 = (undefined *)((long)ppppppppuStack_198 + (long)pppppppuStack_190);
    lVar28 = -1;
    uVar30 = 0;
    do {
      uVar29 = uVar30;
      if ((undefined *)((long)pppppppuStack_190 + (uVar29 - (long)ppppppppuVar9)) ==
          (undefined *)0x1) goto LAB_10a1a5ef0;
      uVar30 = uVar29 - 1;
      lVar28 = lVar28 + 1;
    } while (puVar1[uVar29 - 1] != '.');
    puVar2 = (undefined *)((long)pppppppuStack_190 + (uVar30 - (long)ppppppppuVar9));
    if (puVar2 == (undefined *)0x0) goto LAB_10a1a5ef0;
    if ((undefined *)((long)pppppppuStack_190 - (long)pppppppuVar26) <= puVar2 + -1)
    goto LAB_10a1a6084;
    if (0x8000000000000007 < uVar30) {
      pppppppuVar26 = (undefined *******)~uVar30;
      if (pppppppuVar26 < (undefined *******)0x17) {
        uStack_188 = CONCAT17((char)pppppppuVar26,(undefined7)uStack_188);
        ppppppppuVar10 = (undefined ********)&ppppppppuStack_198;
        if (uVar30 == 0xffffffffffffffff) goto LAB_10a1a5fd0;
      }
      else {
        ppppppppuVar9 = (undefined ********)0x19;
        if (((ulong)pppppppuVar26 | 7) != 0x17) {
          ppppppppuVar9 = (undefined ********)(((ulong)pppppppuVar26 | 7) + 1);
        }
        ppppppppuVar10 = ppppppppuVar9;
        __Znwm();
        uStack_188 = (ulong)ppppppppuVar9 | 0x8000000000000000;
        ppppppppuStack_198 = ppppppppuVar10;
        pppppppuStack_190 = pppppppuVar26;
      }
      _memmove(ppppppppuVar10,puVar1 + uVar29,pppppppuVar26);
LAB_10a1a5fd0:
      *(undefined1 *)((long)ppppppppuVar10 + lVar28) = 0;
      uVar30 = uStack_188;
      ppppppppuVar10 = ppppppppuStack_198;
      pppppppuVar26 = pppppppuStack_190;
      ppppppppuVar9 = ppppppppuStack_198;
      if (-1 < (long)uStack_188) {
        pppppppuVar26 = (undefined *******)(uStack_188 >> 0x38);
        ppppppppuVar9 = (undefined ********)&ppppppppuStack_198;
      }
      extraout_x8[1] = (undefined *******)0x0;
      extraout_x8[2] = (undefined *******)0x0;
      *extraout_x8 = (undefined *******)0x0;
      ppppppppuVar11 = extraout_x8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (extraout_x8,pppppppuVar26,0);
      puVar1 = PTR___DefaultRuneLocale_11034bcf8;
      if (pppppppuVar26 != (undefined *******)0x0) {
        pppppppuVar21 = (undefined *******)0x0;
        do {
          ppppppppuVar11 =
               (undefined ********)(long)(char)*(byte *)((long)ppppppppuVar9 + (long)pppppppuVar21);
          if (((long)ppppppppuVar11 < 0) ||
             ((*(uint *)(puVar1 + (long)ppppppppuVar11 * 4 + 0x3c) >> 0xf & 1) == 0)) {
            ppppppppuVar11 =
                 (undefined ********)(ulong)*(byte *)((long)ppppppppuVar9 + (long)pppppppuVar21);
          }
          else {
            ___tolower();
          }
          bVar4 = *(byte *)((long)extraout_x8 + 0x17);
          pppppppuVar16 = extraout_x8[1];
          if (-1 < (char)bVar4) {
            pppppppuVar16 = (undefined *******)(ulong)bVar4;
          }
          if (pppppppuVar16 < pppppppuVar21) {
LAB_10a1a6080:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1a6084);
            (*pcVar8)();
          }
          ppppppppuVar17 = (undefined ********)*extraout_x8;
          if (-1 < (char)bVar4) {
            ppppppppuVar17 = extraout_x8;
          }
          *(char *)((long)ppppppppuVar17 + (long)pppppppuVar21) = (char)ppppppppuVar11;
          pppppppuVar21 = (undefined *******)((long)pppppppuVar21 + 1);
        } while (pppppppuVar26 != pppppppuVar21);
      }
      if (-1 < (long)uVar30) {
        return ppppppppuVar11;
      }
      __ZdlPv(ppppppppuVar10);
      return ppppppppuVar10;
    }
  }
  func_0x000109ffde50();
  if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
    __ZdlPv(*extraout_x8);
  }
  if ((int)ppppppuVar27 < 0) {
    __ZdlPv(param_2);
  }
  __Unwind_Resume();
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar26 = *ppppppppuVar9;
  lVar28 = (long)pppppppuVar26 << 5;
  if (pppppppuVar26 != (undefined *******)0x0) {
    _memcpy(auStack_6b8,ppppppppuVar9 + 1,lVar28);
  }
  pppppppuStack_650 = ppppppppuVar9[0xe];
  pppppppuStack_658 = ppppppppuVar9[0xd];
  uStack_648 = *(undefined4 *)(ppppppppuVar9 + 0xf);
  pppppppuVar21 = ppppppppuVar9[0x10];
  pppppppuStack_640 = pppppppuVar21;
  if (pppppppuVar21 != (undefined *******)0x0) {
    _memcpy(auStack_638,ppppppppuVar9 + 0x11,(long)pppppppuVar21 * 0x18);
  }
  if (pppppppuVar26 != (undefined *******)0x0) {
    _memcpy(auStack_5f0,auStack_6b8,lVar28);
  }
  pppppppuStack_588 = ppppppppuVar9[0xe];
  pppppppuStack_590 = ppppppppuVar9[0xd];
  uStack_580 = *(uint *)(ppppppppuVar9 + 0xf);
  pppppppuStack_578 = pppppppuVar21;
  if (pppppppuVar21 != (undefined *******)0x0) {
    _memcpy(auStack_570,auStack_638,(long)pppppppuVar21 * 0x18);
  }
  uVar30 = 0;
  uStack_2d0 = 0x40;
  piVar18 = (int *)&UNK_10e49b4cc;
  while( true ) {
    for (; piVar19 = (int *)(&UNK_10e49b4a4 + uVar30 * 8), *piVar19 < iVar14;
        uVar30 = uVar30 * 2 + 2) {
      piVar19 = piVar18;
      if (1 < uVar30) goto LAB_10a1a61f4;
    }
    if (1 < uVar30) break;
    uVar30 = uVar30 << 1 | 1;
    piVar18 = piVar19;
  }
LAB_10a1a61f4:
  if ((piVar19 == (int *)&UNK_10e49b4cc) || (iVar14 < *piVar19 || piVar19 == (int *)&UNK_10e49b4cc))
  {
    FUN_10a00946c(&UNK_10f6420e9);
  }
  else {
    iStack_2cc = piVar19[1];
    lStack_788 = 0;
    uStack_780 = 0;
    lStack_790 = 0;
    FUN_10a14d944(&lStack_790,&uStack_2d0,&puStack_2c8,2);
    if (pppppppuVar26 != (undefined *******)0x0) {
      _memcpy(auStack_528,auStack_5f0,lVar28);
    }
    pppppppuStack_4c0 = pppppppuStack_588;
    pppppppuStack_4c8 = pppppppuStack_590;
    uStack_4b8 = uStack_580;
    pppppppuStack_4b0 = pppppppuVar21;
    if (pppppppuVar21 != (undefined *******)0x0) {
      _memcpy(auStack_4a8,auStack_570,(long)pppppppuVar21 * 0x18);
    }
    if (pppppppuVar26 != (undefined *******)0x0) {
      _memcpy(&pppppppuStack_460,auStack_528,lVar28);
    }
    uStack_3f8 = pppppppuStack_588;
    pppppppuStack_400 = pppppppuStack_590;
    uStack_3f0 = uStack_580;
    pppppppuStack_3e8 = pppppppuVar21;
    if (pppppppuVar21 != (undefined *******)0x0) {
      _memcpy(auStack_3e0,auStack_4a8,(long)pppppppuVar21 * 0x18);
    }
    if (pppppppuVar26 != (undefined *******)0x0) {
      _memcpy(&puStack_398,&pppppppuStack_460,lVar28);
    }
    pppppppuStack_330 = pppppppuStack_588;
    pppppppuStack_338 = pppppppuStack_590;
    uStack_328 = uStack_580;
    pppppppuStack_320 = pppppppuVar21;
    if (pppppppuVar21 != (undefined *******)0x0) {
      _memcpy(auStack_318,auStack_3e0,(long)pppppppuVar21 * 0x18);
    }
    if (pppppppuVar26 == (undefined *******)0x0) {
LAB_10a1a638c:
      uStack_718 = 0x42ff0000;
      iStack_70c = 0;
      iStack_714 = 0;
      uStack_710 = 0;
      iStack_6fc = 0;
      uStack_700 = 0;
      uStack_6f8 = 0;
      uStack_6f0 = 0;
      uStack_6c8 = 0;
      uStack_6c0 = 0;
    }
    else {
      _memcpy(&uStack_2d0,&puStack_398,lVar28);
      uVar30 = uStack_2c0;
      iStack_704 = iStack_2cc;
      uStack_708 = uStack_2d0;
      uStack_710 = uStack_3f0;
      lVar28 = CONCAT44(iStack_2cc,uStack_2d0);
      if (lVar28 == 0) goto LAB_10a1a638c;
      iVar14 = uStack_3f8._4_4_;
      uVar29 = -uStack_2c0;
      if (-1 < (long)uStack_2c0) {
        uVar29 = uStack_2c0;
      }
      uVar24 = (uint)pppppppuStack_400;
      if (((uVar24 & 0xff) == 0x26) || ((uVar24 & 0xff) == 0x23)) {
        if ((pppppppuVar26 != (undefined *******)0x1) &&
           (((lStack_2b0 == 0 || (lStack_2b0 != lVar28 + uVar29 * uStack_3f0)) ||
            (uStack_2c0 != uStack_2a0)))) goto LAB_10a1a638c;
        uVar24 = 0;
        uStack_710 = (int)(uStack_3f0 * 3) / 2;
      }
      else {
        if ((uint)uStack_3f8 < 0x10000) {
          uVar20 = uVar24 >> 8 & 0xff;
          func_0x0001096f1f84();
        }
        else {
          uVar20 = (uint)uStack_3f8 >> 0x10;
        }
        if ((uVar24 - 1 & 0xff) < 7) {
          iVar15 = *(int *)(&UNK_10e49b824 + ((ulong)(uVar24 - 1) & 0xff) * 4);
        }
        else {
          iVar15 = 0;
        }
        uVar24 = (iVar15 + uVar20 * 8) - 8;
      }
      uStack_718 = uVar24 & 0xfff | 0x42ff0000;
      iStack_714 = 2;
      puStack_6d8 = &uStack_710;
      iStack_70c = iVar14;
      uStack_700 = uStack_708;
      iStack_6fc = iStack_704;
      uStack_6f0._0_4_ = 0;
      uStack_6f0._4_4_ = 0;
      uStack_6f8._0_4_ = 0;
      uStack_6f8._4_4_ = 0;
      lStack_6e0 = 0;
      uStack_6e8 = 0;
      uStack_6e4 = 0;
      puStack_6d0 = &uStack_6c8;
      uStack_6c8 = 0;
      uStack_6c0 = 0;
      uVar20 = (uVar24 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar24 & 7) << 1) & 3);
      uVar22 = (long)(int)uVar20 * (long)iVar14;
      uVar23 = uVar22;
      if (uVar30 == 0) {
        uVar24 = 0x4000;
      }
      else {
        uVar24 = 0x88442211 >> ((uVar24 & 7) << 2);
        uVar30 = (ulong)uVar24 & 0xf;
        if (uStack_710 != 1) {
          uVar23 = uVar29;
        }
        uVar29 = 0;
        if ((uVar24 & 0xf) != 0) {
          uVar29 = uVar23 / uVar30;
        }
        if (uVar23 != uVar29 * uVar30) goto LAB_10a1a68c0;
        uVar24 = 0x4000;
        if (uVar23 != uVar22) {
          uVar24 = 0;
        }
      }
      uStack_718 = uVar24 | uStack_718;
      uStack_6f0 = lVar28 + uVar23 * (long)(int)uStack_710;
      uStack_6f8 = (uStack_6f0 - uVar23) + uVar22;
      uStack_6c8 = uVar23;
      uStack_6c0 = (ulong)uVar20;
    }
    puStack_6d0 = &uStack_6c8;
    puStack_6d8 = &uStack_710;
    lStack_6e0 = 0;
    uStack_6e4 = 0;
    uStack_6e8 = 0;
    uStack_778 = 0x42ff0000;
    iStack_76c = 0;
    uStack_768 = 0;
    iStack_774 = 0;
    uStack_770 = 0;
    puStack_738 = &uStack_770;
    iStack_75c = 0;
    uStack_758._0_4_ = 0;
    iStack_764 = 0;
    uStack_760 = 0;
    uStack_750._4_4_ = 0;
    uStack_758._4_4_ = 0;
    uStack_750._0_4_ = 0;
    lStack_740 = 0;
    uStack_748 = 0;
    uStack_744 = 0;
    auStack_728[0] = 0;
    auStack_728[1] = 0;
    pppppppuStack_460 = pppppppuStack_4c8;
    puStack_458 = (uint *)CONCAT44(puStack_458._4_4_,pppppppuStack_4c0._0_4_);
    pppppppuVar26 = (undefined *******)&pppppppuStack_460;
    puStack_730 = auStack_728;
    uStack_708 = uStack_700;
    iStack_704 = iStack_6fc;
    func_0x0001096f1fac(pppppppuVar26,&UNK_10e49b128);
    if ((int)pppppppuVar26 == 0) {
      pppppppuVar26 = (undefined *******)&pppppppuStack_460;
      func_0x0001096f1fac(pppppppuVar26,&UNK_10e49b134);
      if ((int)pppppppuVar26 == 0) {
        if (lStack_6e0 != 0) {
          piVar18 = (int *)(lStack_6e0 + 0x14);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar6) {
              *piVar18 = *piVar18 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (lStack_740 != 0) {
          piVar18 = (int *)(lStack_740 + 0x14);
          do {
            iVar14 = *piVar18;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar6) {
              *piVar18 = iVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar14 + -1 == 0) {
            func_0x000109a848d4(&uStack_778);
          }
        }
        puVar7 = puStack_6d0;
        lStack_740 = 0;
        uStack_760 = 0;
        iStack_75c = 0;
        uStack_768 = 0;
        iStack_764 = 0;
        uStack_750._0_4_ = 0;
        uStack_750._4_4_ = 0;
        uStack_758._0_4_ = 0;
        uStack_758._4_4_ = 0;
        if (iStack_774 < 1) {
LAB_10a1a6640:
          uStack_778 = uStack_718;
          if (2 < iStack_714) goto LAB_10a1a6674;
          iStack_774 = iStack_714;
          uStack_770 = uStack_710;
          iStack_76c = iStack_70c;
          *puStack_730 = *puStack_6d0;
          puStack_730[1] = puVar7[1];
        }
        else {
          lVar28 = 0;
          do {
            puStack_738[lVar28] = 0;
            lVar28 = lVar28 + 1;
          } while (lVar28 < iStack_774);
          if (iStack_774 < 3) goto LAB_10a1a6640;
LAB_10a1a6674:
          uStack_778 = uStack_718;
          func_0x000109a84868(&uStack_778,&uStack_718);
        }
        uStack_760 = uStack_700;
        iStack_75c = iStack_6fc;
        uStack_768 = uStack_708;
        iStack_764 = iStack_704;
        lStack_740 = lStack_6e0;
        uStack_748 = uStack_6e8;
        uStack_744 = uStack_6e4;
        uStack_758 = uStack_6f8;
        uStack_750 = uStack_6f0;
      }
      else {
        uStack_2c0 = 0;
        uStack_2d0 = 0x1010000;
        puStack_2c8 = &uStack_718;
        puStack_398 = (undefined4 *)CONCAT44(puStack_398._4_4_,0x2010000);
        puStack_390 = &uStack_778;
        uStack_388 = 0;
        func_0x000109ac9fc8(&uStack_2d0,&puStack_398,4,0);
        uStack_758 = CONCAT44(uStack_758._4_4_,(undefined4)uStack_758);
        uStack_750 = CONCAT44(uStack_750._4_4_,(undefined4)uStack_750);
      }
    }
    else {
      uStack_2c0 = 0;
      uStack_2d0 = 0x1010000;
      puStack_2c8 = &uStack_718;
      puStack_398 = (undefined4 *)CONCAT44(puStack_398._4_4_,0x2010000);
      uStack_388 = 0;
      puStack_390 = &uStack_778;
      func_0x000109ac9fc8(&uStack_2d0,&puStack_398,5,0);
      uStack_758 = CONCAT44(uStack_758._4_4_,(undefined4)uStack_758);
      uStack_750 = CONCAT44(uStack_750._4_4_,(undefined4)uStack_750);
    }
    if (lStack_6e0 != 0) {
      piVar18 = (int *)(lStack_6e0 + 0x14);
      do {
        iVar14 = *piVar18;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar6) {
          *piVar18 = iVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar14 + -1 == 0) {
        func_0x000109a848d4(&uStack_718);
      }
    }
    lStack_6e0 = 0;
    uStack_700 = 0;
    iStack_6fc = 0;
    uStack_708 = 0;
    iStack_704 = 0;
    uStack_6f0._0_4_ = 0;
    uStack_6f0._4_4_ = 0;
    uStack_6f8._0_4_ = 0;
    uStack_6f8._4_4_ = 0;
    if (0 < iStack_714) {
      lVar28 = 0;
      do {
        puStack_6d8[lVar28] = 0;
        lVar28 = lVar28 + 1;
      } while (lVar28 < iStack_714);
    }
    if (puStack_6d0 != &uStack_6c8 && puStack_6d0 != (ulong *)0x0) {
      _free(puStack_6d0[-1]);
    }
    puVar3 = (undefined8 *)*puVar13;
    if (-1 < *(char *)((long)puVar13 + 0x17)) {
      puVar3 = puVar13;
    }
    func_0x000107c2b054(&uStack_2d0,puVar3);
    puStack_458 = (uint *)0x0;
    pppppppuStack_460 = (undefined *******)0x0;
    if ((long)uStack_2c0._7_1_ < 0) {
      puVar25 = puStack_2c8;
      if (puStack_2c8 != (uint *)0x0) goto LAB_10a1a6748;
    }
    else {
      puVar25 = (uint *)(long)uStack_2c0._7_1_;
      if (uStack_2c0._7_1_ != '\0') {
LAB_10a1a6748:
        puVar12 = (undefined4 *)(((ulong)puVar25 & 0xfffffffffffffffc) + 8);
        func_0x000107c2ae8c();
        pppppppuVar26 = (undefined *******)(puVar12 + 1);
        *puVar12 = 1;
        *(undefined1 *)((long)pppppppuVar26 + (long)puVar25) = 0;
        puVar12 = (undefined4 *)CONCAT44(iStack_2cc,uStack_2d0);
        if (-1 < (long)uStack_2c0) {
          puVar12 = &uStack_2d0;
        }
        pppppppuStack_460 = pppppppuVar26;
        puStack_458 = puVar25;
        _memcpy(pppppppuVar26,puVar12,puVar25);
      }
    }
    uStack_388 = 0;
    puStack_398 = (undefined4 *)CONCAT44(puStack_398._4_4_,0x1010000);
    puStack_390 = &uStack_778;
    ppppppppuVar9 = &pppppppuStack_460;
    func_0x000109b7eabc(ppppppppuVar9,&puStack_398,&lStack_790);
    pppppppuVar26 = pppppppuStack_460;
    puStack_458 = (uint *)0x0;
    pppppppuStack_460 = (undefined *******)0x0;
    if (pppppppuVar26 != (undefined *******)0x0) {
      piVar18 = (int *)((long)pppppppuVar26 + -4);
      do {
        iVar14 = *piVar18;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar6) {
          *piVar18 = iVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar14 + -1 == 0) {
        _free(*(undefined8 *)((long)pppppppuVar26 + -0xc));
      }
    }
    if ((long)uStack_2c0 < 0) {
      __ZdlPv(CONCAT44(iStack_2cc,uStack_2d0));
    }
    if (lStack_740 != 0) {
      piVar18 = (int *)(lStack_740 + 0x14);
      do {
        iVar14 = *piVar18;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar6) {
          *piVar18 = iVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar14 + -1 == 0) {
        func_0x000109a848d4(&uStack_778);
      }
    }
    lStack_740 = 0;
    uStack_760 = 0;
    iStack_75c = 0;
    uStack_768 = 0;
    iStack_764 = 0;
    uStack_750._0_4_ = 0;
    uStack_750._4_4_ = 0;
    uStack_758._0_4_ = 0;
    uStack_758._4_4_ = 0;
    if (0 < iStack_774) {
      lVar28 = 0;
      do {
        puStack_738[lVar28] = 0;
        lVar28 = lVar28 + 1;
      } while (lVar28 < iStack_774);
    }
    if (puStack_730 != auStack_728 && puStack_730 != (ulong *)0x0) {
      _free(puStack_730[-1]);
    }
    if (lStack_790 != 0) {
      lStack_788 = lStack_790;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
      return ppppppppuVar9;
    }
  }
  ___stack_chk_fail();
LAB_10a1a68c0:
  puVar12 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar12 = 1;
  puStack_398 = puVar12 + 1;
  puStack_390 = (uint *)0x1f;
  *(undefined1 *)((long)puVar12 + 0x23) = 0;
  *(undefined8 *)(puVar12 + 3) = 0x6d20612065622074;
  *(undefined8 *)(puVar12 + 1) = 0x73756d2070657453;
  *(undefined8 *)((long)puVar12 + 0x1b) = 0x317a736520666f20;
  *(undefined8 *)((long)puVar12 + 0x13) = 0x656c7069746c756d;
  func_0x000109ac3188(0xfffffff3,&puStack_398,&UNK_10f2e8162,&UNK_10f566d1b,0x1aa);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1a6924);
  (*pcVar8)();
}



/* Entry: 10a1a5e64; end: 10a1a60bf;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_10a1a5e64(undefined8 *******param_1,undefined8 *******param_2,undefined8 ******param_3)

{
  undefined *puVar1;
  undefined8 ******ppppppuVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ulong *puVar8;
  code *pcVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  undefined8 ******ppppppuVar17;
  int *piVar18;
  int *piVar19;
  uint uVar20;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  uint *puVar25;
  int unaff_w22;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long lStack_660;
  long lStack_658;
  undefined8 uStack_650;
  uint uStack_648;
  int iStack_644;
  uint uStack_640;
  int iStack_63c;
  undefined4 uStack_638;
  int iStack_634;
  undefined4 uStack_630;
  int iStack_62c;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined4 uStack_618;
  undefined4 uStack_614;
  long lStack_610;
  uint *puStack_608;
  ulong *puStack_600;
  ulong auStack_5f8 [2];
  uint uStack_5e8;
  int iStack_5e4;
  uint uStack_5e0;
  int iStack_5dc;
  undefined4 uStack_5d8;
  int iStack_5d4;
  undefined4 uStack_5d0;
  int iStack_5cc;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  long lStack_5b0;
  uint *puStack_5a8;
  ulong *puStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  undefined1 auStack_588 [96];
  undefined8 ******ppppppuStack_528;
  undefined8 ******ppppppuStack_520;
  undefined4 uStack_518;
  undefined8 ******ppppppuStack_510;
  undefined1 auStack_508 [72];
  undefined1 auStack_4c0 [96];
  undefined8 ******ppppppuStack_460;
  undefined8 ******ppppppuStack_458;
  uint uStack_450;
  undefined8 ******ppppppuStack_448;
  undefined1 auStack_440 [72];
  undefined1 auStack_3f8 [96];
  undefined8 ******ppppppuStack_398;
  undefined8 ******ppppppuStack_390;
  uint uStack_388;
  undefined8 ******ppppppuStack_380;
  undefined1 auStack_378 [72];
  undefined8 ******ppppppuStack_330;
  uint *puStack_328;
  undefined8 ******ppppppuStack_2d0;
  undefined8 uStack_2c8;
  uint uStack_2c0;
  undefined8 ******ppppppuStack_2b8;
  undefined1 auStack_2b0 [72];
  undefined4 *puStack_268;
  uint *puStack_260;
  undefined8 uStack_258;
  undefined8 ******ppppppuStack_208;
  undefined8 ******ppppppuStack_200;
  uint uStack_1f8;
  undefined8 ******ppppppuStack_1f0;
  undefined1 auStack_1e8 [72];
  undefined4 uStack_1a0;
  int iStack_19c;
  uint *puStack_198;
  undefined8 uStack_190;
  long lStack_180;
  ulong uStack_170;
  long lStack_d8;
  undefined8 *******pppppppuStack_68;
  undefined8 ******ppppppuStack_60;
  undefined8 uStack_58;
  undefined8 ******ppppppuVar21;
  
  ppppppuVar17 = (undefined8 ******)((ulong)param_3 & 0xffffffff);
  ppppppuVar21 = param_3;
  do {
    ppppppuVar17 = (undefined8 ******)((long)ppppppuVar17 + -1);
    uVar20 = (uint)ppppppuVar21;
    ppppppuVar21 = (undefined8 ******)(ulong)(uVar20 - 1);
    uVar24 = (uint)param_3 & (int)(uint)param_3 >> 0x1f;
    if ((int)uVar20 < 1) break;
    if (param_3 <= ppppppuVar17) goto LAB_10a1a6080;
    uVar24 = uVar20;
  } while (*(char *)((long)param_2 + (long)ppppppuVar17) == '/');
  ppppppuStack_60 = param_3;
  if ((undefined8 ******)(long)(int)uVar24 <= param_3) {
    ppppppuStack_60 = (undefined8 ******)(long)(int)uVar24;
  }
  puVar14 = (undefined8 *)&UNK_10f64210b;
  pppppppuVar10 = &pppppppuStack_68;
  iVar15 = -1;
  pppppppuStack_68 = param_2;
  FUN_10a1aea04();
  ppppppuVar17 = ppppppuStack_60;
  pppppppuVar12 = pppppppuStack_68;
  ppppppuVar21 = (undefined8 ******)((long)pppppppuVar10 + 1);
  if (ppppppuStack_60 < ppppppuVar21) {
LAB_10a1a6084:
    pppppppuVar10 = (undefined8 *******)&UNK_10f2fca6e;
    FUN_109ffdddc();
  }
  else {
    if (ppppppuStack_60 == ppppppuVar21) {
LAB_10a1a5ef0:
      func_0x000107c2b054(param_1,"");
      return param_1;
    }
    lVar26 = -1;
    uVar28 = 0;
    do {
      uVar27 = uVar28;
      if ((undefined *)((long)ppppppuStack_60 + (uVar27 - (long)pppppppuVar10)) == (undefined *)0x1)
      goto LAB_10a1a5ef0;
      uVar28 = uVar27 - 1;
      lVar26 = lVar26 + 1;
    } while (*(char *)((long)pppppppuStack_68 + (long)((long)ppppppuStack_60 + (uVar27 - 1))) != '.'
            );
    puVar1 = (undefined *)((long)ppppppuStack_60 + (uVar28 - (long)pppppppuVar10));
    if (puVar1 == (undefined *)0x0) goto LAB_10a1a5ef0;
    if ((undefined *)((long)ppppppuStack_60 - (long)ppppppuVar21) <= puVar1 + -1)
    goto LAB_10a1a6084;
    if (0x8000000000000007 < uVar28) {
      ppppppuVar21 = (undefined8 ******)~uVar28;
      if (ppppppuVar21 < (undefined8 ******)0x17) {
        uStack_58 = CONCAT17((char)ppppppuVar21,(undefined7)uStack_58);
        pppppppuVar11 = &pppppppuStack_68;
        if (uVar28 == 0xffffffffffffffff) goto LAB_10a1a5fd0;
      }
      else {
        pppppppuVar10 = (undefined8 *******)0x19;
        if (((ulong)ppppppuVar21 | 7) != 0x17) {
          pppppppuVar10 = (undefined8 *******)(((ulong)ppppppuVar21 | 7) + 1);
        }
        pppppppuVar11 = pppppppuVar10;
        __Znwm();
        uStack_58 = (ulong)pppppppuVar10 | 0x8000000000000000;
        pppppppuStack_68 = pppppppuVar11;
        ppppppuStack_60 = ppppppuVar21;
      }
      _memmove(pppppppuVar11,
               (undefined *)((long)pppppppuVar12 + (long)((long)ppppppuVar17 + uVar27)),ppppppuVar21
              );
LAB_10a1a5fd0:
      *(undefined1 *)((long)pppppppuVar11 + lVar26) = 0;
      uVar28 = uStack_58;
      pppppppuVar12 = pppppppuStack_68;
      ppppppuVar21 = ppppppuStack_60;
      pppppppuVar10 = pppppppuStack_68;
      if (-1 < (long)uStack_58) {
        ppppppuVar21 = (undefined8 ******)(uStack_58 >> 0x38);
        pppppppuVar10 = &pppppppuStack_68;
      }
      param_1[1] = (undefined8 ******)0x0;
      param_1[2] = (undefined8 ******)0x0;
      *param_1 = (undefined8 ******)0x0;
      pppppppuVar11 = param_1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (param_1,ppppppuVar21,0);
      puVar1 = PTR___DefaultRuneLocale_11034bcf8;
      if (ppppppuVar21 != (undefined8 ******)0x0) {
        ppppppuVar17 = (undefined8 ******)0x0;
        do {
          pppppppuVar11 =
               (undefined8 *******)(long)(char)*(byte *)((long)pppppppuVar10 + (long)ppppppuVar17);
          if (((long)pppppppuVar11 < 0) ||
             ((*(uint *)(puVar1 + (long)pppppppuVar11 * 4 + 0x3c) >> 0xf & 1) == 0)) {
            pppppppuVar11 =
                 (undefined8 *******)(ulong)*(byte *)((long)pppppppuVar10 + (long)ppppppuVar17);
          }
          else {
            ___tolower();
          }
          bVar5 = *(byte *)((long)param_1 + 0x17);
          ppppppuVar2 = param_1[1];
          if (-1 < (char)bVar5) {
            ppppppuVar2 = (undefined8 ******)(ulong)bVar5;
          }
          if (ppppppuVar2 < ppppppuVar17) {
LAB_10a1a6080:
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10a1a6084);
            (*pcVar9)();
          }
          pppppppuVar3 = (undefined8 *******)*param_1;
          if (-1 < (char)bVar5) {
            pppppppuVar3 = param_1;
          }
          *(char *)((long)pppppppuVar3 + (long)ppppppuVar17) = (char)pppppppuVar11;
          ppppppuVar17 = (undefined8 ******)((long)ppppppuVar17 + 1);
        } while (ppppppuVar21 != ppppppuVar17);
      }
      if (-1 < (long)uVar28) {
        return pppppppuVar11;
      }
      __ZdlPv(pppppppuVar12);
      return pppppppuVar12;
    }
  }
  func_0x000109ffde50();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  if (unaff_w22 < 0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar21 = *pppppppuVar10;
  lVar26 = (long)ppppppuVar21 << 5;
  if (ppppppuVar21 != (undefined8 ******)0x0) {
    _memcpy(auStack_588,pppppppuVar10 + 1,lVar26);
  }
  ppppppuStack_520 = pppppppuVar10[0xe];
  ppppppuStack_528 = pppppppuVar10[0xd];
  uStack_518 = *(undefined4 *)(pppppppuVar10 + 0xf);
  ppppppuVar17 = pppppppuVar10[0x10];
  ppppppuStack_510 = ppppppuVar17;
  if (ppppppuVar17 != (undefined8 ******)0x0) {
    _memcpy(auStack_508,pppppppuVar10 + 0x11,(long)ppppppuVar17 * 0x18);
  }
  if (ppppppuVar21 != (undefined8 ******)0x0) {
    _memcpy(auStack_4c0,auStack_588,lVar26);
  }
  ppppppuStack_458 = pppppppuVar10[0xe];
  ppppppuStack_460 = pppppppuVar10[0xd];
  uStack_450 = *(uint *)(pppppppuVar10 + 0xf);
  ppppppuStack_448 = ppppppuVar17;
  if (ppppppuVar17 != (undefined8 ******)0x0) {
    _memcpy(auStack_440,auStack_508,(long)ppppppuVar17 * 0x18);
  }
  uVar28 = 0;
  uStack_1a0 = 0x40;
  piVar18 = (int *)&UNK_10e49b4cc;
  while( true ) {
    for (; piVar19 = (int *)(&UNK_10e49b4a4 + uVar28 * 8), *piVar19 < iVar15;
        uVar28 = uVar28 * 2 + 2) {
      piVar19 = piVar18;
      if (1 < uVar28) goto LAB_10a1a61f4;
    }
    if (1 < uVar28) break;
    uVar28 = uVar28 << 1 | 1;
    piVar18 = piVar19;
  }
LAB_10a1a61f4:
  if ((piVar19 == (int *)&UNK_10e49b4cc) || (iVar15 < *piVar19 || piVar19 == (int *)&UNK_10e49b4cc))
  {
    FUN_10a00946c(&UNK_10f6420e9);
  }
  else {
    iStack_19c = piVar19[1];
    lStack_658 = 0;
    uStack_650 = 0;
    lStack_660 = 0;
    FUN_10a14d944(&lStack_660,&uStack_1a0,&puStack_198,2);
    if (ppppppuVar21 != (undefined8 ******)0x0) {
      _memcpy(auStack_3f8,auStack_4c0,lVar26);
    }
    ppppppuStack_390 = ppppppuStack_458;
    ppppppuStack_398 = ppppppuStack_460;
    uStack_388 = uStack_450;
    ppppppuStack_380 = ppppppuVar17;
    if (ppppppuVar17 != (undefined8 ******)0x0) {
      _memcpy(auStack_378,auStack_440,(long)ppppppuVar17 * 0x18);
    }
    if (ppppppuVar21 != (undefined8 ******)0x0) {
      _memcpy(&ppppppuStack_330,auStack_3f8,lVar26);
    }
    uStack_2c8 = ppppppuStack_458;
    ppppppuStack_2d0 = ppppppuStack_460;
    uStack_2c0 = uStack_450;
    ppppppuStack_2b8 = ppppppuVar17;
    if (ppppppuVar17 != (undefined8 ******)0x0) {
      _memcpy(auStack_2b0,auStack_378,(long)ppppppuVar17 * 0x18);
    }
    if (ppppppuVar21 != (undefined8 ******)0x0) {
      _memcpy(&puStack_268,&ppppppuStack_330,lVar26);
    }
    ppppppuStack_200 = ppppppuStack_458;
    ppppppuStack_208 = ppppppuStack_460;
    uStack_1f8 = uStack_450;
    ppppppuStack_1f0 = ppppppuVar17;
    if (ppppppuVar17 != (undefined8 ******)0x0) {
      _memcpy(auStack_1e8,auStack_2b0,(long)ppppppuVar17 * 0x18);
    }
    if (ppppppuVar21 == (undefined8 ******)0x0) {
LAB_10a1a638c:
      uStack_5e8 = 0x42ff0000;
      iStack_5dc = 0;
      iStack_5e4 = 0;
      uStack_5e0 = 0;
      iStack_5cc = 0;
      uStack_5d0 = 0;
      uStack_5c8 = 0;
      uStack_5c0 = 0;
      uStack_598 = 0;
      uStack_590 = 0;
    }
    else {
      _memcpy(&uStack_1a0,&puStack_268,lVar26);
      uVar28 = uStack_190;
      iStack_5d4 = iStack_19c;
      uStack_5d8 = uStack_1a0;
      uStack_5e0 = uStack_2c0;
      lVar26 = CONCAT44(iStack_19c,uStack_1a0);
      if (lVar26 == 0) goto LAB_10a1a638c;
      iVar15 = uStack_2c8._4_4_;
      uVar27 = -uStack_190;
      if (-1 < (long)uStack_190) {
        uVar27 = uStack_190;
      }
      uVar24 = (uint)ppppppuStack_2d0;
      if (((uVar24 & 0xff) == 0x26) || ((uVar24 & 0xff) == 0x23)) {
        if ((ppppppuVar21 != (undefined8 ******)0x1) &&
           (((lStack_180 == 0 || (lStack_180 != lVar26 + uVar27 * uStack_2c0)) ||
            (uStack_190 != uStack_170)))) goto LAB_10a1a638c;
        uVar24 = 0;
        uStack_5e0 = (int)(uStack_2c0 * 3) / 2;
      }
      else {
        if ((uint)uStack_2c8 < 0x10000) {
          uVar20 = uVar24 >> 8 & 0xff;
          func_0x0001096f1f84();
        }
        else {
          uVar20 = (uint)uStack_2c8 >> 0x10;
        }
        if ((uVar24 - 1 & 0xff) < 7) {
          iVar16 = *(int *)(&UNK_10e49b824 + ((ulong)(uVar24 - 1) & 0xff) * 4);
        }
        else {
          iVar16 = 0;
        }
        uVar24 = (iVar16 + uVar20 * 8) - 8;
      }
      uStack_5e8 = uVar24 & 0xfff | 0x42ff0000;
      iStack_5e4 = 2;
      puStack_5a8 = &uStack_5e0;
      iStack_5dc = iVar15;
      uStack_5d0 = uStack_5d8;
      iStack_5cc = iStack_5d4;
      uStack_5c0._0_4_ = 0;
      uStack_5c0._4_4_ = 0;
      uStack_5c8._0_4_ = 0;
      uStack_5c8._4_4_ = 0;
      lStack_5b0 = 0;
      uStack_5b8 = 0;
      uStack_5b4 = 0;
      puStack_5a0 = &uStack_598;
      uStack_598 = 0;
      uStack_590 = 0;
      uVar20 = (uVar24 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar24 & 7) << 1) & 3);
      uVar22 = (long)(int)uVar20 * (long)iVar15;
      uVar23 = uVar22;
      if (uVar28 == 0) {
        uVar24 = 0x4000;
      }
      else {
        uVar24 = 0x88442211 >> ((uVar24 & 7) << 2);
        uVar28 = (ulong)uVar24 & 0xf;
        if (uStack_5e0 != 1) {
          uVar23 = uVar27;
        }
        uVar27 = 0;
        if ((uVar24 & 0xf) != 0) {
          uVar27 = uVar23 / uVar28;
        }
        if (uVar23 != uVar27 * uVar28) goto LAB_10a1a68c0;
        uVar24 = 0x4000;
        if (uVar23 != uVar22) {
          uVar24 = 0;
        }
      }
      uStack_5e8 = uVar24 | uStack_5e8;
      uStack_5c0 = lVar26 + uVar23 * (long)(int)uStack_5e0;
      uStack_5c8 = (uStack_5c0 - uVar23) + uVar22;
      uStack_598 = uVar23;
      uStack_590 = (ulong)uVar20;
    }
    puStack_5a0 = &uStack_598;
    puStack_5a8 = &uStack_5e0;
    lStack_5b0 = 0;
    uStack_5b4 = 0;
    uStack_5b8 = 0;
    uStack_648 = 0x42ff0000;
    iStack_63c = 0;
    uStack_638 = 0;
    iStack_644 = 0;
    uStack_640 = 0;
    puStack_608 = &uStack_640;
    iStack_62c = 0;
    uStack_628._0_4_ = 0;
    iStack_634 = 0;
    uStack_630 = 0;
    uStack_620._4_4_ = 0;
    uStack_628._4_4_ = 0;
    uStack_620._0_4_ = 0;
    lStack_610 = 0;
    uStack_618 = 0;
    uStack_614 = 0;
    auStack_5f8[0] = 0;
    auStack_5f8[1] = 0;
    ppppppuStack_330 = ppppppuStack_398;
    puStack_328 = (uint *)CONCAT44(puStack_328._4_4_,ppppppuStack_390._0_4_);
    ppppppuVar21 = &ppppppuStack_330;
    puStack_600 = auStack_5f8;
    uStack_5d8 = uStack_5d0;
    iStack_5d4 = iStack_5cc;
    func_0x0001096f1fac(ppppppuVar21,&UNK_10e49b128);
    if ((int)ppppppuVar21 == 0) {
      ppppppuVar21 = &ppppppuStack_330;
      func_0x0001096f1fac(ppppppuVar21,&UNK_10e49b134);
      if ((int)ppppppuVar21 == 0) {
        if (lStack_5b0 != 0) {
          piVar18 = (int *)(lStack_5b0 + 0x14);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar7) {
              *piVar18 = *piVar18 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (lStack_610 != 0) {
          piVar18 = (int *)(lStack_610 + 0x14);
          do {
            iVar15 = *piVar18;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar7) {
              *piVar18 = iVar15 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar15 + -1 == 0) {
            func_0x000109a848d4(&uStack_648);
          }
        }
        puVar8 = puStack_5a0;
        lStack_610 = 0;
        uStack_630 = 0;
        iStack_62c = 0;
        uStack_638 = 0;
        iStack_634 = 0;
        uStack_620._0_4_ = 0;
        uStack_620._4_4_ = 0;
        uStack_628._0_4_ = 0;
        uStack_628._4_4_ = 0;
        if (iStack_644 < 1) {
LAB_10a1a6640:
          uStack_648 = uStack_5e8;
          if (2 < iStack_5e4) goto LAB_10a1a6674;
          iStack_644 = iStack_5e4;
          uStack_640 = uStack_5e0;
          iStack_63c = iStack_5dc;
          *puStack_600 = *puStack_5a0;
          puStack_600[1] = puVar8[1];
        }
        else {
          lVar26 = 0;
          do {
            puStack_608[lVar26] = 0;
            lVar26 = lVar26 + 1;
          } while (lVar26 < iStack_644);
          if (iStack_644 < 3) goto LAB_10a1a6640;
LAB_10a1a6674:
          uStack_648 = uStack_5e8;
          func_0x000109a84868(&uStack_648,&uStack_5e8);
        }
        uStack_630 = uStack_5d0;
        iStack_62c = iStack_5cc;
        uStack_638 = uStack_5d8;
        iStack_634 = iStack_5d4;
        lStack_610 = lStack_5b0;
        uStack_618 = uStack_5b8;
        uStack_614 = uStack_5b4;
        uStack_628 = uStack_5c8;
        uStack_620 = uStack_5c0;
      }
      else {
        uStack_190 = 0;
        uStack_1a0 = 0x1010000;
        puStack_198 = &uStack_5e8;
        puStack_268 = (undefined4 *)CONCAT44(puStack_268._4_4_,0x2010000);
        puStack_260 = &uStack_648;
        uStack_258 = 0;
        func_0x000109ac9fc8(&uStack_1a0,&puStack_268,4,0);
        uStack_628 = CONCAT44(uStack_628._4_4_,(undefined4)uStack_628);
        uStack_620 = CONCAT44(uStack_620._4_4_,(undefined4)uStack_620);
      }
    }
    else {
      uStack_190 = 0;
      uStack_1a0 = 0x1010000;
      puStack_198 = &uStack_5e8;
      puStack_268 = (undefined4 *)CONCAT44(puStack_268._4_4_,0x2010000);
      uStack_258 = 0;
      puStack_260 = &uStack_648;
      func_0x000109ac9fc8(&uStack_1a0,&puStack_268,5,0);
      uStack_628 = CONCAT44(uStack_628._4_4_,(undefined4)uStack_628);
      uStack_620 = CONCAT44(uStack_620._4_4_,(undefined4)uStack_620);
    }
    if (lStack_5b0 != 0) {
      piVar18 = (int *)(lStack_5b0 + 0x14);
      do {
        iVar15 = *piVar18;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar7) {
          *piVar18 = iVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar15 + -1 == 0) {
        func_0x000109a848d4(&uStack_5e8);
      }
    }
    lStack_5b0 = 0;
    uStack_5d0 = 0;
    iStack_5cc = 0;
    uStack_5d8 = 0;
    iStack_5d4 = 0;
    uStack_5c0._0_4_ = 0;
    uStack_5c0._4_4_ = 0;
    uStack_5c8._0_4_ = 0;
    uStack_5c8._4_4_ = 0;
    if (0 < iStack_5e4) {
      lVar26 = 0;
      do {
        puStack_5a8[lVar26] = 0;
        lVar26 = lVar26 + 1;
      } while (lVar26 < iStack_5e4);
    }
    if (puStack_5a0 != &uStack_598 && puStack_5a0 != (ulong *)0x0) {
      _free(puStack_5a0[-1]);
    }
    puVar4 = (undefined8 *)*puVar14;
    if (-1 < *(char *)((long)puVar14 + 0x17)) {
      puVar4 = puVar14;
    }
    func_0x000107c2b054(&uStack_1a0,puVar4);
    puStack_328 = (uint *)0x0;
    ppppppuStack_330 = (undefined8 ******)0x0;
    if ((long)uStack_190._7_1_ < 0) {
      puVar25 = puStack_198;
      if (puStack_198 != (uint *)0x0) goto LAB_10a1a6748;
    }
    else {
      puVar25 = (uint *)(long)uStack_190._7_1_;
      if (uStack_190._7_1_ != '\0') {
LAB_10a1a6748:
        puVar13 = (undefined4 *)(((ulong)puVar25 & 0xfffffffffffffffc) + 8);
        func_0x000107c2ae8c();
        ppppppuVar21 = (undefined8 ******)(puVar13 + 1);
        *puVar13 = 1;
        *(undefined1 *)((long)ppppppuVar21 + (long)puVar25) = 0;
        puVar13 = (undefined4 *)CONCAT44(iStack_19c,uStack_1a0);
        if (-1 < (long)uStack_190) {
          puVar13 = &uStack_1a0;
        }
        ppppppuStack_330 = ppppppuVar21;
        puStack_328 = puVar25;
        _memcpy(ppppppuVar21,puVar13,puVar25);
      }
    }
    uStack_258 = 0;
    puStack_268 = (undefined4 *)CONCAT44(puStack_268._4_4_,0x1010000);
    puStack_260 = &uStack_648;
    pppppppuVar10 = &ppppppuStack_330;
    func_0x000109b7eabc(pppppppuVar10,&puStack_268,&lStack_660);
    ppppppuVar21 = ppppppuStack_330;
    puStack_328 = (uint *)0x0;
    ppppppuStack_330 = (undefined8 ******)0x0;
    if (ppppppuVar21 != (undefined8 ******)0x0) {
      piVar18 = (int *)((long)ppppppuVar21 + -4);
      do {
        iVar15 = *piVar18;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar7) {
          *piVar18 = iVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar15 + -1 == 0) {
        _free(*(undefined8 *)((long)ppppppuVar21 + -0xc));
      }
    }
    if ((long)uStack_190 < 0) {
      __ZdlPv(CONCAT44(iStack_19c,uStack_1a0));
    }
    if (lStack_610 != 0) {
      piVar18 = (int *)(lStack_610 + 0x14);
      do {
        iVar15 = *piVar18;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar7) {
          *piVar18 = iVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar15 + -1 == 0) {
        func_0x000109a848d4(&uStack_648);
      }
    }
    lStack_610 = 0;
    uStack_630 = 0;
    iStack_62c = 0;
    uStack_638 = 0;
    iStack_634 = 0;
    uStack_620._0_4_ = 0;
    uStack_620._4_4_ = 0;
    uStack_628._0_4_ = 0;
    uStack_628._4_4_ = 0;
    if (0 < iStack_644) {
      lVar26 = 0;
      do {
        puStack_608[lVar26] = 0;
        lVar26 = lVar26 + 1;
      } while (lVar26 < iStack_644);
    }
    if (puStack_600 != auStack_5f8 && puStack_600 != (ulong *)0x0) {
      _free(puStack_600[-1]);
    }
    if (lStack_660 != 0) {
      lStack_658 = lStack_660;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return pppppppuVar10;
    }
  }
  ___stack_chk_fail();
LAB_10a1a68c0:
  puVar13 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar13 = 1;
  puStack_268 = puVar13 + 1;
  puStack_260 = (uint *)0x1f;
  *(undefined1 *)((long)puVar13 + 0x23) = 0;
  *(undefined8 *)(puVar13 + 3) = 0x6d20612065622074;
  *(undefined8 *)(puVar13 + 1) = 0x73756d2070657453;
  *(undefined8 *)((long)puVar13 + 0x1b) = 0x317a736520666f20;
  *(undefined8 *)((long)puVar13 + 0x13) = 0x656c7069746c756d;
  func_0x000109ac3188(0xfffffff3,&puStack_268,&UNK_10f2e8162,&UNK_10f566d1b,0x1aa);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a1a6924);
  (*pcVar9)();
}



/* Entry: 10a1a60c0; end: 10a1a6a03;  */

undefined4 ** FUN_10a1a60c0(long *param_1,long *param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong *puVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 **ppuVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  uint *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lStack_5f0;
  long lStack_5e8;
  undefined8 uStack_5e0;
  uint uStack_5d8;
  int iStack_5d4;
  uint uStack_5d0;
  int iStack_5cc;
  undefined4 uStack_5c8;
  int iStack_5c4;
  undefined4 uStack_5c0;
  int iStack_5bc;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  long lStack_5a0;
  uint *puStack_598;
  ulong *puStack_590;
  ulong auStack_588 [2];
  uint uStack_578;
  int iStack_574;
  uint uStack_570;
  int iStack_56c;
  undefined4 uStack_568;
  int iStack_564;
  undefined4 uStack_560;
  int iStack_55c;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined4 uStack_548;
  undefined4 uStack_544;
  long lStack_540;
  uint *puStack_538;
  ulong *puStack_530;
  ulong uStack_528;
  ulong uStack_520;
  undefined1 auStack_518 [96];
  long lStack_4b8;
  long lStack_4b0;
  undefined4 uStack_4a8;
  long lStack_4a0;
  undefined1 auStack_498 [72];
  undefined1 auStack_450 [96];
  undefined4 *puStack_3f0;
  long lStack_3e8;
  uint uStack_3e0;
  long lStack_3d8;
  undefined1 auStack_3d0 [72];
  undefined1 auStack_388 [96];
  undefined4 *puStack_328;
  long lStack_320;
  uint uStack_318;
  long lStack_310;
  undefined1 auStack_308 [72];
  undefined4 *puStack_2c0;
  uint *puStack_2b8;
  undefined4 *puStack_260;
  undefined8 uStack_258;
  uint uStack_250;
  long lStack_248;
  undefined1 auStack_240 [72];
  undefined4 *puStack_1f8;
  uint *puStack_1f0;
  undefined8 uStack_1e8;
  undefined4 *puStack_198;
  long lStack_190;
  uint uStack_188;
  long lStack_180;
  undefined1 auStack_178 [72];
  undefined4 uStack_130;
  int iStack_12c;
  uint *puStack_128;
  undefined8 uStack_120;
  long lStack_110;
  ulong uStack_100;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = *param_1;
  lVar20 = lVar21 << 5;
  if (lVar21 != 0) {
    _memcpy(auStack_518,param_1 + 1,lVar20);
  }
  lStack_4b0 = param_1[0xe];
  lStack_4b8 = param_1[0xd];
  uStack_4a8 = (undefined4)param_1[0xf];
  lVar22 = param_1[0x10];
  lStack_4a0 = lVar22;
  if (lVar22 != 0) {
    _memcpy(auStack_498,param_1 + 0x11,lVar22 * 0x18);
  }
  if (lVar21 != 0) {
    _memcpy(auStack_450,auStack_518,lVar20);
  }
  lStack_3e8 = param_1[0xe];
  puStack_3f0 = (undefined4 *)param_1[0xd];
  uStack_3e0 = *(uint *)(param_1 + 0xf);
  lStack_3d8 = lVar22;
  if (lVar22 != 0) {
    _memcpy(auStack_3d0,auStack_498,lVar22 * 0x18);
  }
  uVar15 = 0;
  uStack_130 = 0x40;
  piVar13 = (int *)&UNK_10e49b4cc;
  while( true ) {
    for (; piVar14 = (int *)(&UNK_10e49b4a4 + uVar15 * 8), *piVar14 < param_3;
        uVar15 = uVar15 * 2 + 2) {
      piVar14 = piVar13;
      if (1 < uVar15) goto LAB_10a1a61f4;
    }
    if (1 < uVar15) break;
    uVar15 = uVar15 << 1 | 1;
    piVar13 = piVar14;
  }
LAB_10a1a61f4:
  if ((piVar14 == (int *)&UNK_10e49b4cc) || (param_3 < *piVar14 || piVar14 == (int *)&UNK_10e49b4cc)
     ) {
    FUN_10a00946c(&UNK_10f6420e9);
  }
  else {
    iStack_12c = piVar14[1];
    lStack_5e8 = 0;
    uStack_5e0 = 0;
    lStack_5f0 = 0;
    FUN_10a14d944(&lStack_5f0,&uStack_130,&puStack_128,2);
    if (lVar21 != 0) {
      _memcpy(auStack_388,auStack_450,lVar20);
    }
    lStack_320 = lStack_3e8;
    puStack_328 = puStack_3f0;
    uStack_318 = uStack_3e0;
    lStack_310 = lVar22;
    if (lVar22 != 0) {
      _memcpy(auStack_308,auStack_3d0,lVar22 * 0x18);
    }
    if (lVar21 != 0) {
      _memcpy(&puStack_2c0,auStack_388,lVar20);
    }
    uStack_258 = lStack_3e8;
    puStack_260 = puStack_3f0;
    uStack_250 = uStack_3e0;
    lStack_248 = lVar22;
    if (lVar22 != 0) {
      _memcpy(auStack_240,auStack_308,lVar22 * 0x18);
    }
    if (lVar21 != 0) {
      _memcpy(&puStack_1f8,&puStack_2c0,lVar20);
    }
    lStack_190 = lStack_3e8;
    puStack_198 = puStack_3f0;
    uStack_188 = uStack_3e0;
    lStack_180 = lVar22;
    if (lVar22 != 0) {
      _memcpy(auStack_178,auStack_240,lVar22 * 0x18);
    }
    if (lVar21 == 0) {
LAB_10a1a638c:
      uStack_578 = 0x42ff0000;
      iStack_56c = 0;
      iStack_574 = 0;
      uStack_570 = 0;
      iStack_55c = 0;
      uStack_560 = 0;
      uStack_558 = 0;
      uStack_550 = 0;
      uStack_528 = 0;
      uStack_520 = 0;
    }
    else {
      _memcpy(&uStack_130,&puStack_1f8,lVar20);
      uVar15 = uStack_120;
      iStack_564 = iStack_12c;
      uStack_568 = uStack_130;
      uStack_570 = uStack_250;
      lVar20 = CONCAT44(iStack_12c,uStack_130);
      if (lVar20 == 0) goto LAB_10a1a638c;
      iVar2 = uStack_258._4_4_;
      uVar5 = -uStack_120;
      if (-1 < (long)uStack_120) {
        uVar5 = uStack_120;
      }
      uVar18 = (uint)puStack_260;
      if (((uVar18 & 0xff) == 0x26) || ((uVar18 & 0xff) == 0x23)) {
        if ((lVar21 != 1) &&
           (((lStack_110 == 0 || (lStack_110 != lVar20 + uVar5 * uStack_250)) ||
            (uStack_120 != uStack_100)))) goto LAB_10a1a638c;
        uVar18 = 0;
        uStack_570 = (int)(uStack_250 * 3) / 2;
      }
      else {
        if ((uint)uStack_258 < 0x10000) {
          uVar8 = uVar18 >> 8 & 0xff;
          func_0x0001096f1f84();
        }
        else {
          uVar8 = (uint)uStack_258 >> 0x10;
        }
        if ((uVar18 - 1 & 0xff) < 7) {
          iVar12 = *(int *)(&UNK_10e49b824 + ((ulong)(uVar18 - 1) & 0xff) * 4);
        }
        else {
          iVar12 = 0;
        }
        uVar18 = (iVar12 + uVar8 * 8) - 8;
      }
      uStack_578 = uVar18 & 0xfff | 0x42ff0000;
      iStack_574 = 2;
      puStack_538 = &uStack_570;
      iStack_56c = iVar2;
      uStack_560 = uStack_568;
      iStack_55c = iStack_564;
      uStack_550._0_4_ = 0;
      uStack_550._4_4_ = 0;
      uStack_558._0_4_ = 0;
      uStack_558._4_4_ = 0;
      lStack_540 = 0;
      uStack_548 = 0;
      uStack_544 = 0;
      puStack_530 = &uStack_528;
      uStack_528 = 0;
      uStack_520 = 0;
      uVar8 = (uVar18 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar18 & 7) << 1) & 3);
      uVar16 = (long)(int)uVar8 * (long)iVar2;
      uVar17 = uVar16;
      if (uVar15 == 0) {
        uVar18 = 0x4000;
      }
      else {
        uVar18 = 0x88442211 >> ((uVar18 & 7) << 2);
        uVar15 = (ulong)uVar18 & 0xf;
        if (uStack_570 != 1) {
          uVar17 = uVar5;
        }
        uVar5 = 0;
        if ((uVar18 & 0xf) != 0) {
          uVar5 = uVar17 / uVar15;
        }
        if (uVar17 != uVar5 * uVar15) goto LAB_10a1a68c0;
        uVar18 = 0x4000;
        if (uVar17 != uVar16) {
          uVar18 = 0;
        }
      }
      uStack_578 = uVar18 | uStack_578;
      uStack_550 = lVar20 + uVar17 * (long)(int)uStack_570;
      uStack_558 = (uStack_550 - uVar17) + uVar16;
      uStack_528 = uVar17;
      uStack_520 = (ulong)uVar8;
    }
    puStack_530 = &uStack_528;
    puStack_538 = &uStack_570;
    lStack_540 = 0;
    uStack_544 = 0;
    uStack_548 = 0;
    uStack_5d8 = 0x42ff0000;
    iStack_5cc = 0;
    uStack_5c8 = 0;
    iStack_5d4 = 0;
    uStack_5d0 = 0;
    puStack_598 = &uStack_5d0;
    iStack_5bc = 0;
    uStack_5b8._0_4_ = 0;
    iStack_5c4 = 0;
    uStack_5c0 = 0;
    uStack_5b0._4_4_ = 0;
    uStack_5b8._4_4_ = 0;
    uStack_5b0._0_4_ = 0;
    lStack_5a0 = 0;
    uStack_5a8 = 0;
    uStack_5a4 = 0;
    auStack_588[0] = 0;
    auStack_588[1] = 0;
    puStack_2c0 = puStack_328;
    puStack_2b8 = (uint *)CONCAT44(puStack_2b8._4_4_,(undefined4)lStack_320);
    ppuVar9 = &puStack_2c0;
    puStack_590 = auStack_588;
    uStack_568 = uStack_560;
    iStack_564 = iStack_55c;
    func_0x0001096f1fac(ppuVar9,&UNK_10e49b128);
    if ((int)ppuVar9 == 0) {
      ppuVar9 = &puStack_2c0;
      func_0x0001096f1fac(ppuVar9,&UNK_10e49b134);
      if ((int)ppuVar9 == 0) {
        if (lStack_540 != 0) {
          piVar13 = (int *)(lStack_540 + 0x14);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar4) {
              *piVar13 = *piVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (lStack_5a0 != 0) {
          piVar13 = (int *)(lStack_5a0 + 0x14);
          do {
            iVar2 = *piVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar4) {
              *piVar13 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&uStack_5d8);
          }
        }
        puVar6 = puStack_530;
        lStack_5a0 = 0;
        uStack_5c0 = 0;
        iStack_5bc = 0;
        uStack_5c8 = 0;
        iStack_5c4 = 0;
        uStack_5b0._0_4_ = 0;
        uStack_5b0._4_4_ = 0;
        uStack_5b8._0_4_ = 0;
        uStack_5b8._4_4_ = 0;
        if (iStack_5d4 < 1) {
LAB_10a1a6640:
          uStack_5d8 = uStack_578;
          if (2 < iStack_574) goto LAB_10a1a6674;
          iStack_5d4 = iStack_574;
          uStack_5d0 = uStack_570;
          iStack_5cc = iStack_56c;
          *puStack_590 = *puStack_530;
          puStack_590[1] = puVar6[1];
        }
        else {
          lVar20 = 0;
          do {
            puStack_598[lVar20] = 0;
            lVar20 = lVar20 + 1;
          } while (lVar20 < iStack_5d4);
          if (iStack_5d4 < 3) goto LAB_10a1a6640;
LAB_10a1a6674:
          uStack_5d8 = uStack_578;
          func_0x000109a84868(&uStack_5d8,&uStack_578);
        }
        uStack_5c0 = uStack_560;
        iStack_5bc = iStack_55c;
        uStack_5c8 = uStack_568;
        iStack_5c4 = iStack_564;
        lStack_5a0 = lStack_540;
        uStack_5a8 = uStack_548;
        uStack_5a4 = uStack_544;
        uStack_5b8 = uStack_558;
        uStack_5b0 = uStack_550;
      }
      else {
        uStack_120 = 0;
        uStack_130 = 0x1010000;
        puStack_128 = &uStack_578;
        puStack_1f8 = (undefined4 *)CONCAT44(puStack_1f8._4_4_,0x2010000);
        puStack_1f0 = &uStack_5d8;
        uStack_1e8 = 0;
        func_0x000109ac9fc8(&uStack_130,&puStack_1f8,4,0);
        uStack_5b8 = CONCAT44(uStack_5b8._4_4_,(undefined4)uStack_5b8);
        uStack_5b0 = CONCAT44(uStack_5b0._4_4_,(undefined4)uStack_5b0);
      }
    }
    else {
      uStack_120 = 0;
      uStack_130 = 0x1010000;
      puStack_128 = &uStack_578;
      puStack_1f8 = (undefined4 *)CONCAT44(puStack_1f8._4_4_,0x2010000);
      uStack_1e8 = 0;
      puStack_1f0 = &uStack_5d8;
      func_0x000109ac9fc8(&uStack_130,&puStack_1f8,5,0);
      uStack_5b8 = CONCAT44(uStack_5b8._4_4_,(undefined4)uStack_5b8);
      uStack_5b0 = CONCAT44(uStack_5b0._4_4_,(undefined4)uStack_5b0);
    }
    if (lStack_540 != 0) {
      piVar13 = (int *)(lStack_540 + 0x14);
      do {
        iVar2 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_578);
      }
    }
    lStack_540 = 0;
    uStack_560 = 0;
    iStack_55c = 0;
    uStack_568 = 0;
    iStack_564 = 0;
    uStack_550._0_4_ = 0;
    uStack_550._4_4_ = 0;
    uStack_558._0_4_ = 0;
    uStack_558._4_4_ = 0;
    if (0 < iStack_574) {
      lVar20 = 0;
      do {
        puStack_538[lVar20] = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < iStack_574);
    }
    if (puStack_530 != &uStack_528 && puStack_530 != (ulong *)0x0) {
      _free(puStack_530[-1]);
    }
    plVar1 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar1 = param_2;
    }
    func_0x000107c2b054(&uStack_130,plVar1);
    puStack_2b8 = (uint *)0x0;
    puStack_2c0 = (undefined4 *)0x0;
    if ((long)uStack_120._7_1_ < 0) {
      puVar19 = puStack_128;
      if (puStack_128 != (uint *)0x0) goto LAB_10a1a6748;
    }
    else {
      puVar19 = (uint *)(long)uStack_120._7_1_;
      if (uStack_120._7_1_ != '\0') {
LAB_10a1a6748:
        puVar11 = (undefined4 *)(((ulong)puVar19 & 0xfffffffffffffffc) + 8);
        func_0x000107c2ae8c();
        puVar10 = puVar11 + 1;
        *puVar11 = 1;
        *(undefined1 *)((long)puVar10 + (long)puVar19) = 0;
        puVar11 = (undefined4 *)CONCAT44(iStack_12c,uStack_130);
        if (-1 < (long)uStack_120) {
          puVar11 = &uStack_130;
        }
        puStack_2c0 = puVar10;
        puStack_2b8 = puVar19;
        _memcpy(puVar10,puVar11,puVar19);
      }
    }
    uStack_1e8 = 0;
    puStack_1f8 = (undefined4 *)CONCAT44(puStack_1f8._4_4_,0x1010000);
    puStack_1f0 = &uStack_5d8;
    ppuVar9 = &puStack_2c0;
    func_0x000109b7eabc(ppuVar9,&puStack_1f8,&lStack_5f0);
    puVar11 = puStack_2c0;
    puStack_2b8 = (uint *)0x0;
    puStack_2c0 = (undefined4 *)0x0;
    if (puVar11 != (undefined4 *)0x0) {
      piVar13 = puVar11 + -1;
      do {
        iVar2 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        _free(*(undefined8 *)(puVar11 + -3));
      }
    }
    if ((long)uStack_120 < 0) {
      __ZdlPv(CONCAT44(iStack_12c,uStack_130));
    }
    if (lStack_5a0 != 0) {
      piVar13 = (int *)(lStack_5a0 + 0x14);
      do {
        iVar2 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_5d8);
      }
    }
    lStack_5a0 = 0;
    uStack_5c0 = 0;
    iStack_5bc = 0;
    uStack_5c8 = 0;
    iStack_5c4 = 0;
    uStack_5b0._0_4_ = 0;
    uStack_5b0._4_4_ = 0;
    uStack_5b8._0_4_ = 0;
    uStack_5b8._4_4_ = 0;
    if (0 < iStack_5d4) {
      lVar20 = 0;
      do {
        puStack_598[lVar20] = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < iStack_5d4);
    }
    if (puStack_590 != auStack_588 && puStack_590 != (ulong *)0x0) {
      _free(puStack_590[-1]);
    }
    if (lStack_5f0 != 0) {
      lStack_5e8 = lStack_5f0;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return ppuVar9;
    }
  }
  ___stack_chk_fail();
LAB_10a1a68c0:
  puVar11 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar11 = 1;
  puStack_1f8 = puVar11 + 1;
  puStack_1f0 = (uint *)0x1f;
  *(undefined1 *)((long)puVar11 + 0x23) = 0;
  *(undefined8 *)(puVar11 + 3) = 0x6d20612065622074;
  *(undefined8 *)(puVar11 + 1) = 0x73756d2070657453;
  *(undefined8 *)((long)puVar11 + 0x1b) = 0x317a736520666f20;
  *(undefined8 *)((long)puVar11 + 0x13) = 0x656c7069746c756d;
  func_0x000109ac3188(0xfffffff3,&puStack_1f8,&UNK_10f2e8162,&UNK_10f566d1b,0x1aa);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a1a6924);
  (*pcVar7)();
}



/* Entry: 10a1a6a04; end: 10a1a6a93;  */

undefined8 FUN_10a1a6a04(long param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x38;
    __Znwm();
    FUN_10a0f296c();
  }
  plVar2 = *(long **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return 1;
}



/* Entry: 10a1a6a94; end: 10a1a6c87;  */

long FUN_10a1a6a94(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_48;
  
  if (*(char *)(param_2 + 4) == '\0') {
    plVar5 = (long *)0xa8;
    __Znwm();
    plVar8 = plVar5 + 1;
    *plVar8 = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110baa4d8;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[3] = (long)&PTR_FUN_110bab9a0;
    *(undefined1 *)(plVar5 + 4) = 0;
    *(undefined1 *)(plVar5 + 0x14) = 0;
    plVar5[9] = 0;
    plVar5[10] = 0;
    plVar5[7] = -0x100000000;
    plVar5[8] = 0;
    plVar5[0xb] = 0;
    plVar5[0xc] = 0x109d138c8;
    plVar5[0xd] = (long)&PTR_DAT_110b3e838;
    plVar5[0xe] = (long)FUN_10a1b2664;
    *param_1 = (long)(plVar5 + 3);
    param_1[1] = (long)plVar5;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined1 *)(param_1 + 2) = 0;
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    lVar6 = *param_1;
    FUN_10a1b2e9c(lVar6,*param_2,*(undefined4 *)((long)param_2 + 0x1c),param_2[2]);
  }
  else {
    if (*(char *)(param_2 + 4) != '\x01') {
      puVar7 = &UNK_10f6423f1;
      FUN_10a05bab8(&UNK_10f6423f1);
      func_0x00010a0d9378(param_1);
      __Unwind_Resume(puVar7);
      return 0;
    }
    FUN_10a1b70c8(&lStack_48,*(undefined4 *)((long)param_2 + 0x1c),*(undefined4 *)(param_2 + 1));
    if (lStack_48 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)0x20;
      __Znwm();
      *puVar4 = &PTR_FUN_110bab7a0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = lStack_48;
    }
    *param_1 = lStack_48;
    param_1[1] = (long)puVar4;
    *(undefined1 *)(param_1 + 2) = 2;
    uVar10 = *param_2;
    uVar1 = *(undefined4 *)((long)param_2 + 0x1c);
    uVar9 = param_2[2];
    lVar6 = *(long *)(lStack_48 + 0x58);
    if ((lVar6 != 0) && (*(char *)(*(long *)(lStack_48 + 0x20) + 8) == '\x01')) {
      (**(code **)(lStack_48 + 0x18))();
    }
    *(undefined8 *)(lStack_48 + 8) = uVar10;
    *(undefined4 *)(lStack_48 + 0x10) = uVar1;
    *(undefined8 *)(lStack_48 + 0x58) = 0;
    *(undefined8 *)(lStack_48 + 0x60) = uVar9;
  }
  return lVar6;
}



/* Entry: 10a1a6c88; end: 10a1a6ca7;  */

undefined8 FUN_10a1a6c88(void)

{
  return 0;
}



/* Entry: 10a1a6ca8; end: 10a1a6d03;  */

undefined8 * FUN_10a1a6ca8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110bab6e0;
  plVar1 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  func_0x0001092bffbc(param_1 + 1);
  return param_1;
}



/* Entry: 10a1a6d04; end: 10a1a6d07;  */

undefined8 * FUN_10a1a6d04(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110bab6e0;
  plVar1 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  func_0x0001092bffbc(param_1 + 1);
  return param_1;
}



/* Entry: 10a1a6d08; end: 10a1a6d1b;  */

void FUN_10a1a6d08(void)

{
  FUN_10a1a6ca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1a6d1c; end: 10a1a6f7b;  */

undefined8 FUN_10a1a6d1c(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  
  lStack_58 = 0;
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 == 0) {
    lVar2 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
    lVar4 = (long)*(char *)(param_1 + 0x8f);
    if (lVar4 < 0) {
      lVar3 = *(long *)(param_1 + 0x78);
      lVar4 = *(long *)(param_1 + 0x80);
    }
    else {
      lVar3 = param_1 + 0x78;
    }
    _CFURLCreateFromFileSystemRepresentation(lVar2,lVar3,lVar4,0);
    lStack_50 = lVar2;
    _CGImageSourceCreateWithURL();
    uStack_60 = 0;
    lStack_58 = lVar2;
    FUN_10a1b0d24(&uStack_60);
    FUN_10a1b0d54(&lStack_50);
  }
  else {
    puStack_48 = (undefined *)0x10a1aebd8;
    lStack_50 = 0;
    puStack_38 = (undefined *)0x10a1aebe4;
    uStack_40 = 0;
    uStack_30 = 0;
    _CGDataProviderCreateSequential(lVar2,&lStack_50);
    _CGImageSourceCreateWithDataProvider();
    lStack_50 = 0;
    lStack_58 = lVar2;
    FUN_10a1b0d24(&lStack_50);
  }
  if (lVar2 == 0) {
    uVar6 = 0;
    goto LAB_10a1a6e98;
  }
  _CGImageSourceCopyPropertiesAtIndex(lVar2,0,0);
  lStack_50 = lVar2;
  if ((lVar2 == 0) || (_CFDictionaryGetValue(), lVar2 == 0)) {
LAB_10a1a6e34:
    uVar6 = 0;
  }
  else {
    _CFNumberGetValue();
    lVar2 = lStack_50;
    _CFDictionaryGetValue(lStack_50,*(undefined8 *)PTR__kCGImagePropertyPixelHeight_110349d50);
    if (lVar2 == 0) goto LAB_10a1a6e34;
    _CFNumberGetValue();
    *(undefined4 *)(param_2 + 0x18) = 7;
    lVar2 = lStack_50;
    _CFDictionaryGetValue(lStack_50,*(undefined8 *)PTR__kCGImagePropertyColorModel_110349ca0);
    if (lVar2 == 0) goto LAB_10a1a6e34;
    lVar4 = lVar2;
    _CFStringCompare(lVar2,*(undefined8 *)PTR__kCGImagePropertyColorModelRGB_110349cb0,1);
    if (lVar4 == 0) {
      lVar2 = lStack_50;
      _CFDictionaryGetValue(lStack_50,*(undefined8 *)PTR__kCGImagePropertyHasAlpha_110349d40);
      if ((lVar2 == 0) || (_CFBooleanGetValue(), (int)lVar2 == 0)) {
        uVar5 = (ulong)*(byte *)(param_2 + 0x20);
        if (2 < *(byte *)(param_2 + 0x20)) goto LAB_10a1a6f30;
        uVar7 = 3;
      }
      else {
        uVar5 = (ulong)*(byte *)(param_2 + 0x20);
        if (2 < *(byte *)(param_2 + 0x20)) {
LAB_10a1a6f30:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1a6f34);
          (*pcVar1)();
        }
        uVar7 = 1;
      }
    }
    else {
      _CFStringCompare(lVar2,*(undefined8 *)PTR__kCGImagePropertyColorModelGray_110349ca8,1);
      if (lVar2 != 0) goto LAB_10a1a6e34;
      uVar5 = (ulong)*(byte *)(param_2 + 0x20);
      if (2 < *(byte *)(param_2 + 0x20)) goto LAB_10a1a6f30;
      uVar7 = 7;
    }
    (*(code *)(&PTR_FUN_110ba20e8)[uVar5])(param_2 + 0x1c);
    *(undefined4 *)(param_2 + 0x1c) = uVar7;
    *(undefined1 *)(param_2 + 0x20) = 0;
    uVar6 = 1;
  }
  FUN_10a1b0d84(&lStack_50);
LAB_10a1a6e98:
  FUN_10a1b0d24(&lStack_58);
  return uVar6;
}



/* Entry: 10a1a6f7c; end: 10a1a72b7;  */

undefined8 FUN_10a1a6f7c(long param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar15 = *param_2;
  uStack_a8 = 0;
  uVar5 = *(ulong *)(param_1 + 0x90);
  if (uVar5 == 0) {
    uVar5 = *(ulong *)PTR__kCFAllocatorDefault_11034ab78;
    lVar14 = (long)*(char *)(param_1 + 0x8f);
    if (lVar14 < 0) {
      lVar12 = *(long *)(param_1 + 0x78);
      lVar14 = *(long *)(param_1 + 0x80);
    }
    else {
      lVar12 = param_1 + 0x78;
    }
    _CFURLCreateFromFileSystemRepresentation(uVar5,lVar12,lVar14,0);
    uStack_a0 = uVar5;
    _CGImageSourceCreateWithURL();
    uStack_b0 = 0;
    uStack_a8 = uVar5;
    FUN_10a1b0d24(&uStack_b0);
    FUN_10a1b0d54(&uStack_a0);
  }
  else {
    puStack_98 = (undefined *)0x10a1aebd8;
    uStack_a0 = 0;
    puStack_88 = (undefined *)0x10a1aebe4;
    uStack_90 = 0;
    uStack_80 = 0;
    _CGDataProviderCreateSequential(uVar5,&uStack_a0);
    _CGImageSourceCreateWithDataProvider();
    uStack_a0 = 0;
    uStack_a8 = uVar5;
    FUN_10a1b0d24(&uStack_a0);
  }
  _CGImageSourceCreateImageAtIndex(uVar5,0,0);
  uVar9 = (ulong)*(int *)(lVar15 + 0x10);
  uVar1 = (ulong)*(int *)(lVar15 + 0x14);
  uVar17 = *(ulong *)(lVar15 + 0x18);
  uStack_b0 = uVar5;
  _CGImageGetBytesPerRow();
  uVar6 = uStack_b0;
  _CGImageGetColorSpace(uStack_b0);
  uVar7 = uStack_b0;
  _CGImageGetAlphaInfo(uStack_b0);
  uStack_a0 = 0;
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0;
  if (uVar17 == uVar5) {
    uVar11 = *(ulong *)(lVar15 + 0x28);
    uVar10 = uVar17;
  }
  else if ((uVar5 * uVar1 == 0) ||
          (func_0x000107c27d58(&uStack_a0), uVar11 = uStack_a0, uVar10 = uVar5,
          puStack_98 == (undefined *)uStack_a0)) {
LAB_10a1a7254:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1a7258);
    (*pcVar4)();
  }
  _CGBitmapContextCreate(uVar11,uVar9,uVar1,8,uVar10,uVar6,uVar7);
  if (*(char *)(param_1 + 0x99) == '\x01') {
    _CGContextTranslateCTM(0,(double)uVar1,uVar11);
    _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,uVar11);
  }
  _CGContextDrawImage(0,0,(double)uVar9,(double)uVar1,uVar11,uStack_b0);
  uVar1 = uStack_a0;
  if (uVar17 != uVar5) {
    uVar6 = 0;
    if (uVar9 != 0) {
      uVar6 = uVar17 / uVar9;
    }
    iVar2 = *(int *)(lVar15 + 0x14);
    uVar7 = 0;
    if (uVar9 != 0) {
      uVar7 = uVar5 / uVar9;
    }
    uVar5 = uVar6;
    if (uVar7 <= uVar6) {
      uVar5 = uVar7;
    }
    if (iVar2 != 0) {
      lVar14 = 0;
      uVar9 = (long)puStack_98 - uStack_a0;
      iVar3 = *(int *)(lVar15 + 0x10);
      uVar17 = uVar7 * (long)iVar3;
      do {
        uVar10 = lVar14 * uVar17;
        uVar11 = uVar9 - uVar10;
        if (uVar9 < uVar10) goto LAB_10a1a7254;
        lVar12 = *(long *)(lVar15 + 0x28);
        uVar13 = *(ulong *)(lVar15 + 0x18);
        uVar19 = uVar11;
        if ((uVar17 != 0xffffffffffffffff) && (uVar19 = uVar17, uVar11 < uVar17))
        goto LAB_10a1a7254;
        if (iVar3 != 0) {
          lVar18 = 0;
          lVar16 = (long)iVar3;
          do {
            uVar11 = lVar18 * uVar7;
            if ((uVar19 < uVar11) ||
               (((uVar8 = uVar19 - uVar11, uVar5 != 0xffffffffffffffff &&
                 (uVar8 = uVar5, uVar19 - uVar11 < uVar5)) || (uVar13 <= lVar18 * uVar6))))
            goto LAB_10a1a7254;
            if (uVar8 != 0) {
              _memmove(lVar12 + uVar13 * (long)(int)lVar14 + lVar18 * uVar6,uVar1 + uVar10 + uVar11)
              ;
            }
            lVar18 = lVar18 + 1;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != iVar2);
    }
  }
  if (uStack_a0 != 0) {
    puStack_98 = (undefined *)uStack_a0;
    __ZdlPv();
  }
  FUN_10a1b0db4(&uStack_b0);
  FUN_10a1b0d24(&uStack_a8);
  return 1;
}



/* Entry: 10a1a72b8; end: 10a1a7333;  */

undefined8 * FUN_10a1a72b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[2] = &UNK_1092bf430;
  param_1[3] = &PTR_DAT_110ae93a8;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0x95) = 0;
  *(undefined8 *)((long)param_1 + 0x8d) = 0;
  *param_1 = &PTR_FUN_110bab3f8;
  param_1[1] = 0;
  param_1[0x14] = 0;
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  *puVar1 = 0;
  param_1[0x14] = puVar1;
  return param_1;
}



/* Entry: 10a1a7334; end: 10a1a738f;  */

undefined8 * FUN_10a1a7334(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110bab3f8;
  FUN_10a1a7390(param_1,1);
  plVar2 = (long *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    __ZdlPv(plVar2);
  }
  *param_1 = &PTR_FUN_110bab6e0;
  plVar2 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  func_0x0001092bffbc(param_1 + 1);
  return param_1;
}



/* Entry: 10a1a7390; end: 10a1a740b;  */

void FUN_10a1a7390(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((param_2 != 0) && (plVar1 = *(long **)(param_1 + 0x90), plVar1 != (long *)0x0)) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    (**(code **)(*plVar1 + 8))();
  }
  lVar2 = **(long **)(param_1 + 0xa0);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 8) != 0) {
      (**(code **)(*(long *)(lVar2 + 8) + 0x50))(lVar2);
    }
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined4 *)(lVar2 + 0x24) = 0;
    lVar2 = **(long **)(param_1 + 0xa0);
    **(long **)(param_1 + 0xa0) = 0;
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a1a740c; end: 10a1a740f;  */

undefined8 * FUN_10a1a740c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110bab3f8;
  FUN_10a1a7390(param_1,1);
  plVar2 = (long *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    __ZdlPv(plVar2);
  }
  *param_1 = &PTR_FUN_110bab6e0;
  plVar2 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  func_0x0001092bffbc(param_1 + 1);
  return param_1;
}



/* Entry: 10a1a7410; end: 10a1a7423;  */

void FUN_10a1a7410(void)

{
  FUN_10a1a7334();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1a7424; end: 10a1a7c4b;  */

/* WARNING: Removing unreachable block (ram,0x00010a1a7958) */

byte FUN_10a1a7424(long param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  undefined4 uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 ***pppuStack_140;
  ulong uStack_138;
  byte bStack_129;
  char cStack_113;
  long **pplStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  long **pplStack_e0;
  long lStack_d8;
  undefined7 uStack_d0;
  char cStack_c9;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  undefined8 ***pppuStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long *aplStack_90 [3];
  byte bStack_72;
  undefined1 uStack_71;
  long **applStack_70 [2];
  
  bStack_72 = 0;
  FUN_10a1a7390(param_1,0);
  plVar14 = *(long **)(param_1 + 0xa0);
  plVar8 = (long *)0x10428;
  __Znwm();
  plVar8[0x84] = 0;
  lVar9 = *plVar14;
  *plVar14 = (long)plVar8;
  if (lVar9 != 0) {
    __ZdlPv(lVar9);
    plVar8 = (long *)**(undefined8 **)(param_1 + 0xa0);
  }
  plVar8[0x50] = (long)&UNK_1081d50e4;
  plVar8[0x51] = (long)&UNK_1081d5148;
  plVar8[0x52] = (long)&UNK_1081d51c4;
  plVar8[0x53] = (long)&UNK_1081d5294;
  *(undefined4 *)((long)plVar8 + 0x2f4) = 0;
  plVar8[0x5f] = 0;
  *(undefined4 *)(plVar8 + 0x54) = 0;
  plVar8[0x60] = (long)&PTR_DAT_110a2f080;
  *(undefined4 *)(plVar8 + 0x61) = 0x80;
  plVar8[99] = 0;
  plVar8[0x62] = 0;
  *plVar8 = (long)(plVar8 + 0x4f);
  plVar8[0x4f] = (long)FUN_10a1a7c4c;
  iVar12 = (int)plVar8 + 800;
  _setjmp();
  if (iVar12 != 0) goto LAB_10a1a750c;
  func_0x0001081c63a4(plVar8,0x3e,0x278);
  lVar10 = plVar8[0x49];
  lVar9 = *(long *)(plVar8[1] + 0x60) + -0x20;
  if (0xfffe < lVar9) {
    lVar9 = 0xffff;
  }
  iVar12 = (int)lVar9;
  puVar1 = &DAT_1081cfdac;
  if (iVar12 != 0) {
    puVar1 = &UNK_1081d0100;
  }
  *(undefined **)(lVar10 + 0x28) = puVar1;
  *(int *)(lVar10 + 0xb0) = iVar12;
  *(undefined **)(lVar10 + 0x38) = puVar1;
  *(int *)(lVar10 + 0xb8) = iVar12;
  lVar9 = *(long *)(param_1 + 0x58);
  if ((lVar9 == 0) && (*(long *)(param_1 + 0x68) == *(long *)(param_1 + 0x60))) {
    if (*(long **)(param_1 + 0x90) == (long *)0x0) {
      plVar14 = (long *)(param_1 + 0x78);
      if (*(char *)(param_1 + 0x8f) < '\0') {
        if (*(long *)(param_1 + 0x80) != 0) {
          plVar11 = (long *)*plVar14;
          goto LAB_10a1a7a80;
        }
      }
      else {
        plVar11 = plVar14;
        if (*(char *)(param_1 + 0x8f) != '\0') {
LAB_10a1a7a80:
          FUN_10ad040c0(aplStack_90,plVar11,&UNK_10f432965);
          if (aplStack_90[0] == (long *)0x0) {
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (&pppuStack_140,&UNK_10f64180d,plVar14);
            FUN_10a0029c0(&pppuStack_140);
            goto LAB_10a1a7b18;
          }
          uVar7 = 0x38;
          __Znwm();
          FUN_10a0f296c();
          plVar14 = *(long **)(param_1 + 0x90);
          *(undefined8 *)(param_1 + 0x90) = uVar7;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          plVar14 = aplStack_90[0];
          aplStack_90[0] = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            plVar11 = (long *)*plVar14;
            *plVar14 = 0;
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x40))();
            }
            __ZdlPv(plVar14);
          }
        }
      }
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x90) + 0x28))();
    }
    lVar9 = *(long *)(param_1 + 0x90);
    if (lVar9 == 0) {
      if (plVar8[5] == 0) goto LAB_10a1a750c;
    }
    else {
      plVar8[5] = (long)(plVar8 + 0x7c);
      plVar8[0x7e] = 0x10a1aecac;
      plVar8[0x7f] = (long)FUN_10a1aec2c;
      plVar8[0x80] = (long)FUN_10a1aec70;
      plVar8[0x7d] = 0;
      plVar8[0x7c] = 0;
      plVar8[0x81] = (long)&UNK_1081ceb8c;
      plVar8[0x82] = 0x10a1aecb0;
      plVar8[0x84] = lVar9;
    }
  }
  else {
    plVar8[0x7e] = 0x10a1aec1c;
    plVar8[0x7f] = 0x10a1aec20;
    plVar8[0x80] = 0x10a1aebf0;
    plVar8[0x81] = (long)&UNK_1081ceb8c;
    plVar8[0x82] = 0x10a1aec28;
    plVar8[5] = (long)(plVar8 + 0x7c);
    plVar8[0x7d] = 0;
    *(undefined4 *)(plVar8 + 0x83) = 0;
    lVar10 = *(long *)(param_1 + 0x50);
    if (lVar10 == 0) {
      lVar10 = *(long *)(param_1 + 0x60);
    }
    plVar8[0x7c] = lVar10;
    if (lVar9 == 0) {
      lVar9 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60);
    }
    plVar8[0x7d] = lVar9;
  }
  func_0x0001081c654c(plVar8,1);
  *param_2 = plVar8[6];
  *(undefined4 *)(param_2 + 3) = 2;
  if (2 < (ulong)*(byte *)(param_2 + 4)) {
LAB_10a1a7b18:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1a7b1c);
    (*pcVar4)();
  }
  uVar13 = 3;
  if ((int)plVar8[7] < 2) {
    uVar13 = 7;
  }
  (*(code *)(&PTR_FUN_110ba20e8)[*(byte *)(param_2 + 4)])((long)param_2 + 0x1c);
  *(undefined4 *)((long)param_2 + 0x1c) = uVar13;
  *(undefined1 *)(param_2 + 4) = 0;
  if (*(char *)(param_1 + 0x98) == '\x01') {
    *(undefined4 *)((long)param_2 + 0x1c) = 3;
    *(undefined1 *)(param_2 + 4) = 0;
  }
  bStack_72 = 1;
  plVar8 = (long *)plVar8[0x32];
  if (plVar8 != (long *)0x0) {
    do {
      if ((plVar8[3] != 0) && ((int)plVar8[2] != 0)) {
        if ((char)plVar8[1] == -0x1f) {
          FUN_10a1a4b00(&pppuStack_140,plVar8[3],(int)plVar8[2],0);
          if (cStack_113 == '\x01') {
            ppppuVar6 = &pppuStack_140;
            FUN_10a1a4c90();
            *(int *)((long)param_2 + 0x24) = (int)ppppuVar6;
          }
          else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
            func_0x00010ae06f08(1,8,&UNK_10f641832,&UNK_10f64185e,0xcc,&UNK_10f64189e);
          }
        }
        else if ((char)plVar8[1] == -2) {
          FUN_109ffe064(&pppuStack_140);
          bVar3 = bStack_129;
          uVar2 = uStack_138;
          uVar15 = uStack_138;
          if (-1 < (char)bStack_129) {
            uVar15 = (ulong)bStack_129;
          }
          if (uVar15 == 0) {
LAB_10a1a7728:
            if ((char)bVar3 < '\0') {
              func_0x000107c3192c(&pppuStack_b0,pppuStack_140,uVar2);
            }
            else {
              uStack_a8 = uStack_138;
              pppuStack_b0 = pppuStack_140;
              lStack_a0 = (ulong)bStack_129 << 0x38;
            }
            FUN_10a1a7cf8(aplStack_90,&pppuStack_b0);
            if (lStack_a0 < 0) {
              __ZdlPv(pppuStack_b0);
            }
            plVar14 = param_2 + 5;
            pplStack_e0 = aplStack_90;
            FUN_109cf993c(plVar14,aplStack_90,&UNK_10dd5b8f9,&pplStack_e0,&pplStack_110);
            if (*(char *)((long)plVar14 + 0x3f) < '\0') {
              plVar14[6] = 4;
              plVar11 = (long *)plVar14[5];
            }
            else {
              plVar11 = plVar14 + 5;
              *(undefined1 *)((long)plVar14 + 0x3f) = 4;
            }
            *(undefined4 *)plVar11 = 0x65757274;
            *(undefined1 *)((long)plVar11 + 4) = 0;
          }
          else {
            ppppuVar6 = (undefined8 ****)pppuStack_140;
            if (-1 < (char)bStack_129) {
              ppppuVar6 = &pppuStack_140;
            }
            ppppuVar5 = ppppuVar6;
            _memchr(ppppuVar6,0x3a);
            uVar15 = (long)ppppuVar5 - (long)ppppuVar6;
            if (ppppuVar5 == (undefined8 ****)0x0 || uVar15 == 0xffffffffffffffff)
            goto LAB_10a1a7728;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                      (auStack_c8,&pppuStack_140,0,uVar15,&pplStack_e0);
            FUN_10a1a7cf8(aplStack_90);
            if (cStack_b1 < '\0') {
              __ZdlPv(auStack_c8[0]);
            }
            uVar2 = uStack_138;
            if (-1 < (char)bStack_129) {
              uVar2 = (ulong)bStack_129;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                      (auStack_f8,&pppuStack_140,uVar15 + 1,uVar2 + ~uVar15,&pplStack_110);
            FUN_10a1a7cf8(&pplStack_e0,auStack_f8);
            if (cStack_e1 < '\0') {
              __ZdlPv(auStack_f8[0]);
            }
            if (cStack_c9 < '\0') {
              if (lStack_d8 == 0) goto LAB_10a1a78ec;
              func_0x000107c3192c(&pplStack_110,pplStack_e0);
            }
            else if (cStack_c9 == '\0') {
LAB_10a1a78ec:
              func_0x000107c2b054(&pplStack_110,"true");
            }
            else {
              lStack_108 = lStack_d8;
              pplStack_110 = pplStack_e0;
              lStack_100 = CONCAT17(cStack_c9,uStack_d0);
            }
            plVar14 = param_2 + 5;
            applStack_70[0] = aplStack_90;
            FUN_109cf993c(plVar14,aplStack_90,&UNK_10dd5b8f9,applStack_70,&uStack_71);
            if (*(char *)((long)plVar14 + 0x3f) < '\0') {
              __ZdlPv(plVar14[5]);
            }
            plVar14[6] = lStack_108;
            plVar14[5] = (long)pplStack_110;
            plVar14[7] = lStack_100;
            if (cStack_c9 < '\0') {
              __ZdlPv(pplStack_e0);
            }
          }
          if ((char)bStack_129 < '\0') {
            __ZdlPv(pppuStack_140);
          }
        }
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
LAB_10a1a750c:
  if ((bStack_72 & 1) == 0) {
    FUN_10a1a7390(param_1,1);
  }
  return bStack_72;
}



/* Entry: 10a1a7c4c; end: 10a1a7c9b;  */

void FUN_10a1a7c4c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f641832,&UNK_10f64210e,99,&UNK_10f642150);
  }
  puVar1 = (undefined8 *)(lVar3 + 0xa8);
  _longjmp(puVar1,1);
  uVar2 = 0x38;
  __Znwm();
  FUN_10a0f296c();
  *puVar1 = uVar2;
  return;
}



/* Entry: 10a1a7c9c; end: 10a1a7cf7;  */

void FUN_10a1a7c9c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x38;
  __Znwm();
  FUN_10a0f296c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10a1a7cf8; end: 10a1a7e7b;  */

ulong * FUN_10a1a7cf8(ulong *param_1,ulong *param_2)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  char *pcVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  cVar1 = *(char *)((long)param_2 + 0x17);
  uVar12 = (ulong)cVar1;
  puVar8 = param_2;
  uVar10 = uVar12;
  if ((long)uVar12 < 0) {
    puVar8 = (ulong *)*param_2;
    uVar10 = param_2[1];
  }
  if (uVar10 != 0) {
    uVar11 = 0;
    do {
      puVar7 = &UNK_10f63cb7f;
      _memchr(&UNK_10f63cb7f,(long)*(char *)((long)puVar8 + uVar11),4);
      if (puVar7 == (undefined *)0x0) goto LAB_10a1a7d68;
      uVar11 = uVar11 + 1;
    } while (uVar10 != uVar11);
  }
  uVar11 = 0xffffffffffffffff;
LAB_10a1a7d68:
  uVar10 = uVar12;
  puVar8 = param_2;
  if (cVar1 < '\0') {
    uVar10 = param_2[1];
    puVar8 = (ulong *)*param_2;
  }
  lVar9 = uVar10 + 1;
  do {
    lVar2 = lVar9 + -1;
    if (lVar2 == 0) goto code_r0x00010005375c;
    puVar7 = &UNK_10f63cb7f;
    _memchr(&UNK_10f63cb7f,*(undefined1 *)((long)puVar8 + lVar9 + -2),4);
    lVar9 = lVar2;
  } while (puVar7 != (undefined *)0x0);
  if (lVar2 == 0) {
code_r0x00010005375c:
    pcVar4 = "";
    func_0x000107c613d0();
    if ((ulong *)0x7ffffffffffffff7 < pcVar4) {
      func_0x000107c2b040();
      if ((bRam00000001132ffc88 & 1) == 0) {
        pcVar4 = (char *)0x1132ffc88;
        func_0x000107c60e48();
        if ((int)pcVar4 != 0) {
          puVar6 = (undefined8 *)0x30;
          func_0x000107c60e20();
          uRam00000001132ffc38 = 0x8000000000000030;
          uRam00000001132ffc30 = 0x2c;
          puRam00000001132ffc28 = puVar6;
          puVar6[1] = 0x434948504152475f;
          *puVar6 = 0x45524f43534e454c;
          puVar6[3] = 0x525f595a414c5f54;
          puVar6[2] = 0x5845544e4f435f53;
          *(undefined8 *)((long)puVar6 + 0x24) = 0x54494e495f454352;
          *(undefined8 *)((long)puVar6 + 0x1c) = 0x554f5345525f595a;
          *(undefined1 *)((long)puVar6 + 0x2c) = 0;
          uRam00000001132ffc40 = 0;
          pcRam00000001132ffc48 = FUN_10a09e854;
          ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
          func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
          puVar8 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
          return puVar8;
        }
      }
      return (ulong *)pcVar4;
    }
    if (pcVar4 < (ulong *)0x17) {
      *(char *)((long)param_1 + 0x17) = (char)pcVar4;
      puVar5 = param_1;
      if ((ulong *)pcVar4 == (ulong *)0x0) goto code_r0x0001000537e0;
    }
    else {
      puVar8 = (ulong *)0x19;
      if (((ulong)pcVar4 | 7) != 0x17) {
        puVar8 = (ulong *)(((ulong)pcVar4 | 7) + 1);
      }
      puVar5 = puVar8;
      func_0x000107c60e20();
      param_1[1] = (ulong)pcVar4;
      param_1[2] = (ulong)puVar8 | 0x8000000000000000;
      *param_1 = (ulong)puVar5;
    }
    func_0x000107c610b8(puVar5,"",pcVar4);
code_r0x0001000537e0:
    *(char *)((long)puVar5 + (long)pcVar4) = '\0';
    return param_1;
  }
  if (cVar1 < '\0') {
    puVar8 = (ulong *)*param_2;
    uVar10 = (long)puVar8 + lVar2;
    uVar12 = (long)puVar8 + param_2[1];
    if (uVar12 < uVar10) goto LAB_10a1a7e78;
  }
  else {
    uVar10 = (long)param_2 + lVar2;
    uVar12 = (long)param_2 + uVar12;
    puVar8 = param_2;
    if (uVar12 < uVar10) goto LAB_10a1a7e78;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (param_2,uVar10 - (long)puVar8,uVar12 - uVar10);
  puVar8 = param_2;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    puVar8 = (ulong *)*param_2;
  }
  if (!CARRY8(uVar11,(ulong)puVar8)) {
    puVar8 = param_2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm(param_2,0,uVar11);
    uVar12 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar12;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return puVar8;
  }
LAB_10a1a7e78:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1a7e7c);
  (*pcVar3)();
}



/* Entry: 10a1a7e7c; end: 10a1a804f;  */

bool FUN_10a1a7e7c(long param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  bool bStack_61;
  
  bStack_61 = false;
  lVar12 = *param_2;
  uVar11 = *(uint *)(lVar12 + 0x24);
  lVar13 = **(long **)(param_1 + 0xa0);
  if (lVar13 != 0) {
    uVar1 = *(uint *)(lVar12 + 0x14);
    lVar5 = (long)(int)uVar1 << 3;
    cVar2 = *(char *)(param_1 + 0x99);
    if ((int)uVar1 < 0) {
      lVar5 = -1;
    }
    __Znam();
    iVar8 = (int)lVar13 + 800;
    _setjmp();
    if (iVar8 == 0) {
      bVar3 = ((uint)(uVar11 < 0x17) & 0x583fU >> (ulong)(uVar11 & 0x1f)) != 0;
      uVar4 = 1;
      if (bVar3) {
        uVar4 = 2;
      }
      uVar7 = 3;
      if (!bVar3) {
        uVar7 = 1;
      }
      *(undefined4 *)(lVar13 + 0x40) = uVar4;
      *(undefined4 *)(lVar13 + 0x90) = uVar7;
      func_0x0001081c69c0(lVar13);
      if ((int)uVar1 < 1) {
        uVar11 = 0;
      }
      else {
        lVar6 = *(long *)(lVar12 + 0x18);
        lVar12 = *(long *)(lVar12 + 0x28);
        uVar10 = 0;
        iVar8 = -1;
        do {
          iVar9 = uVar1 + iVar8;
          if (cVar2 == '\0') {
            iVar9 = (int)uVar10;
          }
          *(long *)(lVar5 + uVar10 * 8) = lVar12 + lVar6 * iVar9;
          uVar10 = uVar10 + 1;
          iVar8 = iVar8 + -1;
        } while (uVar1 != uVar10);
        uVar11 = 0;
        do {
          lVar12 = lVar13;
          func_0x0001081c6dd0(lVar13,lVar5 + (long)(int)uVar11 * 8,uVar1 - uVar11);
          if ((int)lVar12 == 0) {
            if ((bRam000000011330a9e8 & 1) != 0) {
              func_0x00010ae06f08(0,1,&UNK_10f641832,&UNK_10f6418ed,0x101,&UNK_10f641933);
            }
            break;
          }
          uVar11 = (int)lVar12 + uVar11;
        } while ((int)uVar11 < (int)uVar1);
      }
      bStack_61 = uVar11 == uVar1;
      func_0x0001081c68b0(lVar13);
    }
    __ZdaPv(lVar5);
  }
  FUN_10a1a7390(param_1,1);
  return bStack_61;
}



/* Entry: 10a1a8050; end: 10a1a80f3;  */

undefined8 * FUN_10a1a8050(undefined8 *param_1)

{
  param_1[2] = &UNK_1092bf430;
  param_1[3] = &PTR_DAT_110ae93a8;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0x95) = 0;
  *(undefined8 *)((long)param_1 + 0x8d) = 0;
  *param_1 = &PTR_FUN_110bab430;
  param_1[1] = 0;
  param_1[0x14] = 0xd00000000;
  *(undefined4 *)(param_1 + 0x15) = 4;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  param_1[0x16] = 0;
  func_0x0001098aa624(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x139] = 0;
  param_1[0x138] = 0;
  param_1[0x13b] = 0;
  param_1[0x13a] = 0;
  param_1[0x13d] = 0;
  param_1[0x13c] = 0;
  param_1[0x13f] = 0;
  param_1[0x13e] = 0;
  param_1[0x141] = 0;
  param_1[0x140] = 0;
  return param_1;
}



/* Entry: 10a1a80f4; end: 10a1a8377;  */

void FUN_10a1a80f4(ulong param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  uVar2 = *param_2;
  *(ushort *)(param_1 + 0x9b) = uVar2;
  uVar4 = *(ulong *)(param_1 + 0x9c0);
  *(ulong *)(param_1 + 0x9c8) = uVar4;
  uVar3 = param_1;
  if (*(long *)(param_1 + 0x9d0) - uVar4 < 0x290) {
    uVar3 = 0x290;
    __Znwm();
    *(ulong *)(param_1 + 0x9c0) = uVar3;
    *(ulong *)(param_1 + 0x9c8) = uVar3;
    *(ulong *)(param_1 + 0x9d0) = uVar3 + 0x290;
    if (uVar4 == 0) goto LAB_10a1a8168;
    __ZdlPv();
    if ((*(byte *)(param_1 + 0x9c) & 1) != 0) goto LAB_10a1a8170;
  }
  else {
LAB_10a1a8168:
    uVar4 = uVar3;
    if ((uVar2 >> 8 & 1) != 0) {
LAB_10a1a8170:
      FUN_10ad4ae18();
      bVar1 = *(byte *)(uVar4 + 0x29);
      goto joined_r0x00010a1a8178;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x9b) >> 2;
joined_r0x00010a1a8178:
  if ((bVar1 & 1) != 0) {
    uStack_40 = 0xa00000000;
    uStack_38 = 0x3b;
    uStack_34 = 1;
    FUN_10a1a8384(param_1 + 0x9c0,&uStack_40);
    uStack_40 = 0xa00000001;
    uStack_38 = 0x3c;
    uStack_34 = 1;
    uVar4 = param_1 + 0x9c0;
    FUN_10a1a8384(uVar4,&uStack_40);
  }
  pcVar5 = (char *)(param_1 + 0x9c);
  if (*pcVar5 == '\x01') {
    FUN_10ad4ae18();
    bVar1 = *(byte *)(uVar4 + 0x2b);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x9b) >> 4;
  }
  if ((bVar1 & 1) != 0) {
    uStack_40 = 0x600000000;
    uStack_38 = 0x3a;
    uStack_34 = 1;
    FUN_10a1a8384(param_1 + 0x9c0,&uStack_40);
    uStack_40 = 0x600000001;
    uStack_38 = 0x39;
    uStack_34 = 1;
    uVar4 = param_1 + 0x9c0;
    FUN_10a1a8384(uVar4,&uStack_40);
  }
  if (*pcVar5 == '\x01') {
    FUN_10ad4ae18();
    bVar1 = *(byte *)(uVar4 + 0x2a);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x9b) >> 3;
  }
  if ((bVar1 & 1) != 0) {
    uStack_40 = 0x300000000;
    uStack_38 = 0x38;
    uStack_34 = 1;
    FUN_10a1a8384(param_1 + 0x9c0,&uStack_40);
    uStack_40 = 0x300000001;
    uStack_38 = 0x37;
    uStack_34 = 1;
    uVar4 = param_1 + 0x9c0;
    FUN_10a1a8384(uVar4,&uStack_40);
  }
  if (*pcVar5 == '\x01') {
    FUN_10ad4ae18();
    bVar1 = *(byte *)(uVar4 + 0x28);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x9b) >> 1;
  }
  if (((bVar1 & 1) != 0) && (FUN_10ad05fa8(), (uVar4 & 1) == 0)) {
    uStack_40 = 0x100000000;
    uStack_38 = 0x33;
    uStack_34 = 1;
    FUN_10a1a8384(param_1 + 0x9c0,&uStack_40);
    uStack_40 = 0x100000001;
    uStack_38 = 0x36;
    uStack_34 = 1;
    FUN_10a1a8384(param_1 + 0x9c0,&uStack_40);
  }
  uStack_40 = 0xd00000000;
  uStack_38 = 4;
  uStack_34 = 0;
  FUN_10a1a8384(param_1 + 0x9c0,&uStack_40);
  uStack_40 = 0xd00000001;
  uStack_38 = 0x28;
  uStack_34 = 0;
  FUN_10a1a8384(param_1 + 0x9c0,&uStack_40);
  return;
}



/* Entry: 10a1a8378; end: 10a1a8383;  */

void FUN_10a1a8378(long param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x9b) = *param_2;
  return;
}



/* Entry: 10a1a8384; end: 10a1a8467;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a1a8384(long *param_1,undefined8 *param_2,int param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 < (undefined8 *)param_1[2]) {
    uVar13 = *param_2;
    puVar6[1] = param_2[1];
    *puVar6 = uVar13;
    puVar6 = puVar6 + 2;
LAB_10a1a8444:
    param_1[1] = (long)puVar6;
    return;
  }
  lVar11 = *param_1;
  lVar12 = (long)puVar6 - lVar11;
  uVar1 = (lVar12 >> 4) + 1;
  plVar4 = param_1;
  puVar6 = param_2;
  if (uVar1 >> 0x3c == 0) {
    uVar8 = param_1[2] - lVar11;
    uVar10 = (long)uVar8 >> 3;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar10 = 0xfffffffffffffff;
    }
    if (uVar10 >> 0x3c == 0) {
      lVar3 = uVar10 << 4;
      __Znwm();
      puVar2 = (undefined8 *)(lVar3 + lVar12);
      uVar13 = *param_2;
      puVar2[1] = param_2[1];
      *puVar2 = uVar13;
      puVar6 = puVar2 + 2;
      _memcpy(puVar2 + (lVar12 >> 4) * -2,lVar11,lVar12);
      *param_1 = (long)(puVar2 + (lVar12 >> 4) * -2);
      param_1[1] = (long)puVar6;
      param_1[2] = lVar3 + uVar10 * 0x10;
      if (lVar11 != 0) {
        __ZdlPv(lVar11);
      }
      goto LAB_10a1a8444;
    }
  }
  else {
    FUN_10a1aecb4();
  }
  iVar5 = (int)puVar6;
  func_0x000109ffded8();
  pcStack_58 = FUN_10a1a8468;
  *(int *)plVar4 = 0;
  *(undefined1 *)((long)plVar4 + 4) = 0;
  if (param_3 < 6) {
    if (param_3 == 1) {
      iVar7 = 5;
      goto LAB_10a1a84fc;
    }
    if (param_3 != 3) goto LAB_10a1a8520;
    iVar7 = 7;
  }
  else {
    if (param_3 != 6) {
      if (param_3 != 10) {
        if (param_3 == 0xd) {
          *(int *)plVar4 = 1;
          return;
        }
LAB_10a1a8520:
        lStack_80 = lVar12;
        puStack_78 = param_2;
        lStack_70 = lVar11;
        plStack_68 = param_1;
        puStack_60 = &stack0xfffffffffffffff0;
        iVar7 = param_3;
        func_0x0001098a09bc();
        func_0x0001098a09e0();
        puVar9 = &UNK_10e49b4d0;
        lVar11 = 0xa8;
        do {
          if (*(int *)(puVar9 + 4) == iVar7 && *(int *)(puVar9 + 8) == param_3) {
            if (lVar11 != 0) {
              lVar11 = 0x10;
              if (iVar5 != 2) {
                lVar11 = 0xc;
              }
              uStack_88._0_4_ = *(int *)(puVar9 + lVar11);
              lVar11 = 1;
              uStack_88._4_1_ = 1;
              goto LAB_10a1a8598;
            }
            break;
          }
          puVar9 = puVar9 + 0x1c;
          lVar11 = lVar11 + -0x1c;
        } while (lVar11 != 0);
        lVar11 = 0;
        uStack_88._0_4_ = -1;
        uStack_88._4_1_ = 0;
LAB_10a1a8598:
        if (&uStack_88 != plVar4) {
          *(int *)plVar4 = (int)uStack_88;
          *(char *)((long)plVar4 + 4) = (char)lVar11;
        }
        (*(code *)(&PTR_FUN_110ba20e8)[lVar11])(&uStack_88);
        return;
      }
      iVar7 = 0xb;
LAB_10a1a84fc:
      if (iVar5 == 2) {
        iVar7 = iVar7 + 1;
      }
      goto LAB_10a1a8500;
    }
    iVar7 = 9;
  }
  if (iVar5 != 2) {
    iVar7 = iVar7 + 1;
  }
LAB_10a1a8500:
  *(int *)plVar4 = iVar7;
  *(undefined1 *)((long)plVar4 + 4) = 1;
  return;
}



/* Entry: 10a1a8468; end: 10a1a85c3;  */

void FUN_10a1a8468(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int iStack_38;
  undefined1 uStack_34;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_3 < 6) {
    if (param_3 == 1) {
      iVar1 = 5;
      goto LAB_10a1a84fc;
    }
    if (param_3 != 3) goto LAB_10a1a8520;
    iVar1 = 7;
  }
  else {
    if (param_3 != 6) {
      if (param_3 != 10) {
        if (param_3 == 0xd) {
          *param_1 = 1;
          return;
        }
LAB_10a1a8520:
        iVar1 = param_3;
        func_0x0001098a09bc();
        func_0x0001098a09e0();
        puVar2 = &UNK_10e49b4d0;
        lVar3 = 0xa8;
        do {
          if (*(int *)(puVar2 + 4) == iVar1 && *(int *)(puVar2 + 8) == param_3) {
            if (lVar3 != 0) {
              lVar3 = 0x10;
              if (param_2 != 2) {
                lVar3 = 0xc;
              }
              iStack_38 = *(int *)(puVar2 + lVar3);
              lVar3 = 1;
              uStack_34 = 1;
              goto LAB_10a1a8598;
            }
            break;
          }
          puVar2 = puVar2 + 0x1c;
          lVar3 = lVar3 + -0x1c;
        } while (lVar3 != 0);
        lVar3 = 0;
        iStack_38 = -1;
        uStack_34 = 0;
LAB_10a1a8598:
        if (&iStack_38 != param_1) {
          *param_1 = iStack_38;
          *(char *)(param_1 + 1) = (char)lVar3;
        }
        (*(code *)(&PTR_FUN_110ba20e8)[lVar3])(&iStack_38);
        return;
      }
      iVar1 = 0xb;
LAB_10a1a84fc:
      if (param_2 == 2) {
        iVar1 = iVar1 + 1;
      }
      goto LAB_10a1a8500;
    }
    iVar1 = 9;
  }
  if (param_2 != 2) {
    iVar1 = iVar1 + 1;
  }
LAB_10a1a8500:
  *param_1 = iVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 10a1a85c4; end: 10a1a87cb;  */

undefined8 FUN_10a1a85c4(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  undefined *puVar18;
  undefined1 auStack_94 [52];
  
  uVar6 = *(uint *)(param_1 + 0xec);
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  piVar15 = *(int **)(param_1 + 0x9c0);
  piVar17 = *(int **)(param_1 + 0x9c8);
  if (piVar15 != piVar17) {
    uVar11 = *(uint *)(param_1 + 0x1b0);
    iVar12 = *(int *)(param_1 + 0x1bc);
    iVar2 = *(int *)(param_1 + 0xf0);
    iVar4 = *(int *)(param_1 + 0xf4);
    lVar1 = 0x18;
    if (iVar12 != 2) {
      lVar1 = 0x14;
    }
    do {
      iVar3 = *piVar15;
      uVar13 = (ulong)(uint)piVar15[1];
      iVar16 = piVar15[2];
      iVar5 = piVar15[3];
      if (piVar15[1] == 10) {
        uVar13 = (ulong)*(uint *)(param_1 + 0x1b0);
        if (0x1b < *(uint *)(param_1 + 0x1b0) - 5) {
          uVar13 = 10;
          goto LAB_10a1a8704;
        }
        uVar9 = uVar13;
        func_0x0001098a63f8();
        func_0x0001098a641c();
        uVar8 = (uint)uVar13;
        if ((uint)uVar9 < 5 && uVar8 < 5) {
          if (*(byte *)(param_1 + 0x9c) == 0) {
            bVar7 = *(byte *)(param_1 + 0x9b) >> 2;
            goto joined_r0x00010a1a86b0;
          }
          FUN_10ad4ae18();
          if ((*(byte *)(uVar13 + 0x29) & 1) == 0) goto LAB_10a1a8728;
LAB_10a1a86b4:
          puVar18 = &UNK_10e49b4d0;
          lVar10 = 0xa8;
          do {
            if (*(uint *)(puVar18 + 4) == (uint)uVar9 && *(uint *)(puVar18 + 8) == uVar8) {
              if (lVar10 != 0) {
                uVar13 = (ulong)uVar11;
                func_0x0001098a6460();
                iVar16 = *(int *)(puVar18 + lVar1);
                goto LAB_10a1a8704;
              }
              break;
            }
            puVar18 = puVar18 + 0x1c;
            lVar10 = lVar10 + -0x1c;
          } while (lVar10 != 0);
          uVar13 = 10;
          goto LAB_10a1a8704;
        }
        if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
          bVar7 = *(byte *)(param_1 + 0x9b) >> 5;
joined_r0x00010a1a86b0:
          if ((bVar7 & 1) != 0) goto LAB_10a1a86b4;
        }
      }
      else {
LAB_10a1a8704:
        uVar9 = uVar13;
        func_0x0001098a6484(uVar13,(ulong)uVar11);
        if ((int)uVar9 != 0 && (iVar3 != 1 || iVar12 == 2)) {
          uVar11 = 0;
          do {
            if (iVar2 != 0) {
              iVar12 = 0;
              do {
                if (iVar4 != 0) {
                  iVar14 = 0;
                  do {
                    uVar9 = param_1 + 0xc0;
                    func_0x0001098ab8cc(uVar9,auStack_94,iVar14,uVar11,iVar12);
                    if ((uVar9 & 1) == 0) {
                      return 0;
                    }
                    iVar14 = iVar14 + 1;
                  } while (iVar4 != iVar14);
                }
                iVar12 = iVar12 + 1;
              } while (iVar12 != iVar2);
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar6);
          *param_2 = iVar3;
          param_2[1] = (int)uVar13;
          param_2[2] = iVar16;
          *(char *)(param_2 + 3) = (char)iVar5;
          return 1;
        }
      }
LAB_10a1a8728:
      piVar15 = piVar15 + 4;
    } while (piVar15 != piVar17);
  }
  return 0;
}



/* Entry: 10a1a87cc; end: 10a1a8857;  */

void FUN_10a1a87cc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_1;
  if ((ulong)((param_1[2] - lVar2 >> 3) * -0x5555555555555555) < param_2) {
    lVar3 = param_1[1];
    uVar1 = param_2;
    FUN_10a1aecdc();
    lVar2 = param_2 + (lVar3 - lVar2);
    lVar4 = lVar2 - (param_1[1] - *param_1);
    _memcpy(lVar4);
    lVar3 = *param_1;
    *param_1 = lVar4;
    param_1[1] = lVar2;
    param_1[2] = param_2 + uVar1 * 0x18;
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a1a8858; end: 10a1a88f7;  */

ulong FUN_10a1a8858(long param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  
  if (((((param_3 < param_2) && (param_3 + 1 < param_2)) && (param_3 + 2 < param_2)) &&
      ((param_3 + 3 < param_2 && (param_3 + 4 < param_2)))) &&
     ((param_3 + 5 < param_2 && ((param_3 + 6 < param_2 && (param_3 + 7 < param_2)))))) {
    return (ulong)CONCAT13(*(undefined1 *)(param_1 + param_3 + 3),
                           CONCAT12(*(undefined1 *)(param_1 + param_3 + 2),
                                    CONCAT11(*(undefined1 *)(param_1 + param_3 + 1),
                                             *(undefined1 *)(param_1 + param_3)))) |
           (ulong)*(byte *)(param_1 + param_3 + 5) << 0x28 |
           (ulong)*(byte *)(param_1 + param_3 + 4) << 0x20 |
           (ulong)*(byte *)(param_1 + param_3 + 6) << 0x30 |
           (ulong)*(byte *)(param_1 + param_3 + 7) << 0x38;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1a88f8);
  (*pcVar1)();
}



/* Entry: 10a1a88f8; end: 10a1a89eb;  */

long * FUN_10a1a88f8(long *param_1,undefined8 *param_2,ulong param_3,uint param_4,undefined8 param_5
                    )

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    uVar11 = param_2[1];
    uVar10 = *param_2;
    puVar3[2] = param_2[2];
    puVar3[1] = uVar11;
    *puVar3 = uVar10;
    puVar3 = puVar3 + 3;
    plVar2 = param_1;
  }
  else {
    lVar9 = (long)puVar3 - *param_1;
    uVar7 = (lVar9 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar7) {
      func_0x00010a1aecc8();
      if ((int)param_1 == 0) {
        plVar2 = (long *)0x0;
      }
      else {
        plVar2 = (long *)0x0;
        do {
          puVar3 = param_2;
          FUN_109fc8e58(param_2,param_3,param_5);
          plVar2 = (long *)((long)plVar2 + (long)puVar3 * (ulong)param_4);
          uVar5 = (uint)((ulong)param_2 >> 1) & 0x7fffffff;
          if (uVar5 < 2) {
            uVar5 = 1;
          }
          param_2 = (undefined8 *)(ulong)uVar5;
          uVar5 = (uint)(param_3 >> 1) & 0x7fffffff;
          if (uVar5 < 2) {
            uVar5 = 1;
          }
          param_3 = (ulong)uVar5;
          uVar5 = (int)param_1 - 1;
          param_1 = (long *)(ulong)uVar5;
        } while (uVar5 != 0);
      }
      FUN_109fc8e58(param_2,param_3,param_5);
      return plVar2;
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar6 * 0x5555555555555556;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar8 = 0xaaaaaaaaaaaaaaa;
    }
    puVar4 = param_2;
    FUN_10a1aecdc();
    puVar1 = (undefined8 *)(uVar8 + lVar9);
    uVar11 = param_2[1];
    uVar10 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar11;
    *puVar1 = uVar10;
    puVar3 = puVar1 + 3;
    lVar9 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    plVar2 = (long *)*param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar3;
    param_1[2] = uVar8 + (long)puVar4 * 0x18;
    if (plVar2 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar3;
  return plVar2;
}



/* Entry: 10a1a89ec; end: 10a1a8a7f;  */

long FUN_10a1a89ec(int param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      uVar1 = param_2;
      FUN_109fc8e58(param_2,param_3,param_5);
      lVar3 = lVar3 + uVar1 * param_4;
      uVar2 = (uint)(param_2 >> 1) & 0x7fffffff;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      param_2 = (ulong)uVar2;
      uVar2 = (uint)(param_3 >> 1) & 0x7fffffff;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      param_3 = (ulong)uVar2;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  FUN_109fc8e58(param_2,param_3,param_5);
  return lVar3;
}



/* Entry: 10a1a8a80; end: 10a1a9c1b;  */

void FUN_10a1a8a80(undefined8 *param_1,undefined8 ***param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 ***param_5,undefined *param_6,ulong param_7)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  undefined1 uVar9;
  uint uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  undefined8 ***pppuVar15;
  undefined8 ***pppuVar16;
  undefined8 ***pppuVar17;
  ulong uVar18;
  undefined8 ***pppuVar19;
  undefined8 ***pppuVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  uint uVar30;
  int *piVar31;
  undefined8 ***pppuVar32;
  undefined8 ***pppuVar33;
  ulong uVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 ***pppuStack_128;
  undefined8 *apuStack_108 [2];
  char cStack_f1;
  undefined1 uStack_e9;
  undefined8 **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  long lStack_70;
  
  uVar29 = (undefined4)param_4;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar19 = param_2;
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    puVar12 = param_1;
    if (param_1[10] == 0) {
      if (param_1[0xd] == param_1[0xc]) goto LAB_10a1a8ae0;
    }
    else if (param_1[0xb] == 0) {
LAB_10a1a8ae0:
      plVar11 = (long *)param_1[0x12];
      if (plVar11 == (long *)0x0) {
        puVar21 = param_1 + 0xf;
        puVar12 = (undefined8 *)0x0;
        if (*(char *)((long)param_1 + 0x8f) < '\0') {
          if (param_1[0x10] != 0) {
            puVar13 = (undefined8 *)*puVar21;
            goto LAB_10a1a8d3c;
          }
        }
        else {
          puVar13 = puVar21;
          if (*(char *)((long)param_1 + 0x8f) != '\0') {
LAB_10a1a8d3c:
            pppuVar19 = (undefined8 ***)&UNK_10f432965;
            FUN_10ad040c0(&uStack_e0,puVar13);
            if (uStack_e0 != (undefined8 ***)0x0) {
              uVar36 = 0x38;
              __Znwm();
              pppuVar19 = (undefined8 ***)&uStack_e0;
              FUN_10a0f296c();
              plVar11 = (long *)param_1[0x12];
              param_1[0x12] = uVar36;
              param_3 = puVar21;
              if (plVar11 != (long *)0x0) {
                (**(code **)(*plVar11 + 8))();
                param_3 = puVar21;
              }
              pppuVar32 = uStack_e0;
              uStack_e0 = (undefined8 ***)0x0;
              if (pppuVar32 != (undefined8 ***)0x0) {
                ppuVar14 = *pppuVar32;
                *pppuVar32 = (undefined8 **)0x0;
                if (ppuVar14 != (undefined8 **)0x0) {
                  (*(code *)(*ppuVar14)[8])();
                }
                __ZdlPv(pppuVar32);
              }
            }
            plVar11 = (long *)param_1[0x12];
            if (plVar11 != (long *)0x0) goto LAB_10a1a8ae8;
            puVar12 = (undefined8 *)0x0;
          }
        }
      }
      else {
LAB_10a1a8ae8:
        (**(code **)(*plVar11 + 0x38))(&uStack_e0);
        pppuVar19 = (undefined8 ***)&uStack_e0;
        func_0x0001092bff80(param_1 + 1);
        puVar12 = &uStack_e0;
        func_0x0001092bffbc();
      }
    }
    uVar29 = (undefined4)param_4;
    pppuVar32 = (undefined8 ***)param_1[10];
    if (pppuVar32 == (undefined8 ***)0x0) {
      pppuVar32 = (undefined8 ***)param_1[0xc];
      pppuVar33 = (undefined8 ***)(param_1[0xd] - (long)pppuVar32);
    }
    else {
      pppuVar33 = (undefined8 ***)param_1[0xb];
    }
    if (pppuVar33 != (undefined8 ***)0x0) {
      puVar13 = param_1 + 0x16;
      *(undefined4 *)puVar13 = 0;
      puVar21 = param_1 + 0x13b;
      param_1[0x13c] = param_1[0x13b];
      param_1[0x141] = 0;
      if (((undefined8 ***)0x4f < pppuVar33) &&
         (*pppuVar32 == (undefined8 **)0xbb30322058544bab && *(int *)(pppuVar32 + 1) == 0xa1a0a0d))
      {
        iVar23 = *(int *)((long)pppuVar32 + 0xc);
        piVar31 = (int *)&UNK_10e49b4d0;
        lVar26 = 0xa8;
        do {
          iVar27 = *piVar31 + 1;
          if (*piVar31 == iVar23 || iVar27 == iVar23) {
            if (*(char *)((long)param_1 + 0x9c) == '\x01') {
              FUN_10ad4ae18();
              uVar29 = (undefined4)param_4;
              bVar4 = *(byte *)((long)puVar12 + 0x29);
            }
            else {
              bVar4 = *(byte *)((long)param_1 + 0x9b) >> 2;
            }
            if ((bVar4 & 1) == 0) {
              if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
                param_3 = (undefined8 *)&UNK_10f641957;
                uVar29 = 0xf641983;
                param_6 = &UNK_10f6419de;
                pppuVar19 = (undefined8 ***)0x8;
                param_5 = (undefined8 ***)0x192;
                func_0x00010ae06f08(1,8,&UNK_10f641957,&UNK_10f641983,0x192);
              }
              goto LAB_10a1a90d4;
            }
            uVar29 = (undefined4)param_4;
            if ((((*(int *)(pppuVar32 + 2) != 1) || (*(int *)((long)pppuVar32 + 0x1c) != 0)) ||
                (*(int *)(pppuVar32 + 4) != 0)) ||
               ((*(uint *)((long)pppuVar32 + 0x2c) & 0xfffffffd) != 0)) {
              if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
                param_3 = (undefined8 *)&UNK_10f641957;
                uVar29 = 0xf641983;
                param_6 = &UNK_10f641a25;
                pppuVar19 = (undefined8 ***)0x8;
                param_5 = (undefined8 ***)0x1aa;
                func_0x00010ae06f08(1,8,&UNK_10f641957,&UNK_10f641983,0x1aa);
              }
              goto LAB_10a1a90d4;
            }
            iVar25 = *(int *)((long)pppuVar32 + 0x14);
            iVar3 = *(int *)(pppuVar32 + 3);
            iVar2 = *(int *)((long)pppuVar32 + 0x24);
            uVar10 = *(uint *)(pppuVar32 + 5);
            pppuVar19 = (undefined8 ***)(ulong)uVar10;
            *(uint *)((long)param_1 + 0xb4) = *(uint *)((long)pppuVar32 + 0x2c);
            if ((iVar25 - 0x4001U < 0xffffc000) || (iVar3 - 0x4001U < 0xffffc000)) {
              if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
                param_3 = (undefined8 *)&UNK_10f641957;
                uVar29 = 0xf641983;
                param_6 = &UNK_10f641a9a;
                pppuVar19 = (undefined8 ***)0x8;
                param_5 = (undefined8 ***)0x1b3;
                func_0x00010ae06f08(1,8,&UNK_10f641957,&UNK_10f641983,0x1b3);
              }
              goto LAB_10a1a90d4;
            }
            if (((iVar2 != 6) && (iVar2 != 1)) || ((iVar2 == 6 && (iVar25 != iVar3)))) {
              if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
                param_3 = (undefined8 *)&UNK_10f641957;
                uVar29 = 0xf641983;
                param_6 = &UNK_10f641af5;
                pppuVar19 = (undefined8 ***)0x8;
                param_5 = (undefined8 ***)0x1bc;
                func_0x00010ae06f08(1,8,&UNK_10f641957,&UNK_10f641983,0x1bc);
              }
              goto LAB_10a1a90d4;
            }
            if (uVar10 - 0x11 < 0xfffffff0) {
              if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
                param_3 = (undefined8 *)&UNK_10f641957;
                uVar29 = 0xf641983;
                param_6 = &UNK_10f641b53;
                pppuVar19 = (undefined8 ***)0x8;
                param_5 = (undefined8 ***)0x1c3;
                func_0x00010ae06f08(1,8,&UNK_10f641957,&UNK_10f641983,0x1c3);
              }
              goto LAB_10a1a90d4;
            }
            if (pppuVar33 < (undefined8 ***)((ulong)uVar10 * 0x18 + 0x50)) goto LAB_10a1a90d4;
            param_1[0x13c] = *puVar21;
            FUN_10a1a87cc(puVar21);
            puVar12 = (undefined8 *)0x60;
            pppuStack_128 = pppuVar19;
            goto LAB_10a1a9530;
          }
          piVar31 = piVar31 + 7;
          lVar26 = lVar26 + -0x1c;
        } while (lVar26 != 0);
      }
      if (lRam00000001137ea818 != -1) {
        uStack_e0 = &ppuStack_e8;
        apuStack_108[0] = &uStack_e0;
        __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137ea818,apuStack_108,FUN_10a1aed20);
      }
      pppuVar19 = (undefined8 ***)param_1[10];
      if (pppuVar19 == (undefined8 ***)0x0) {
        pppuVar19 = (undefined8 ***)param_1[0xc];
      }
      param_3 = (undefined8 *)param_1[0xb];
      if (param_3 == (undefined8 *)0x0) {
        param_3 = (undefined8 *)(param_1[0xd] - param_1[0xc]);
      }
      puVar12 = param_1 + 0x18;
      func_0x0001098aa944();
      if (((ulong)puVar12 & 1) == 0) {
        func_0x0001098aa728(param_1 + 0x18);
      }
      else if (*(int *)((long)param_1 + 0xec) == 0) {
        if (*(uint *)(param_1 + 0x1e) < 2) {
          uVar22 = 0;
        }
        else {
          if (*(uint *)(param_1 + 0x1e) != 6) {
            func_0x0001098aa728(param_1 + 0x18);
            goto LAB_10a1a8c30;
          }
          uVar22 = 3;
        }
        *(undefined4 *)(param_1 + 0x17) = uVar22;
        pppuVar19 = (undefined8 ***)(param_1 + 0x14);
        puVar12 = param_1;
        FUN_10a1a85c4();
        if (((ulong)puVar12 & 1) != 0) {
          if (*(char *)((long)param_1 + 0xac) == '\x01') {
            uVar10 = *(uint *)(param_1 + 0x36);
            uVar30 = uVar10;
            func_0x0001098a63f8();
            func_0x0001098a641c();
          }
          else {
            uVar30 = 1;
            uVar10 = 1;
          }
          uVar6 = 0;
          if (uVar30 != 0) {
            uVar6 = ((*(int *)(param_1 + 0x1c) + uVar30) - 1) / uVar30;
          }
          *(uint *)(param_1 + 0x13f) = uVar6 * uVar30;
          uVar30 = 0;
          if (uVar10 != 0) {
            uVar30 = ((*(int *)((long)param_1 + 0xe4) + uVar10) - 1) / uVar10;
          }
          *(uint *)((long)param_1 + 0x9fc) = uVar30 * uVar10;
          uVar10 = *(uint *)((long)param_1 + 0xf4);
          FUN_10a1a8468(&uStack_e0,*(undefined4 *)((long)param_1 + 0x1bc),
                        *(undefined4 *)((long)param_1 + 0xa4));
          pcVar1 = (char *)((long)param_2 + 0x1c);
          if (pcVar1 == (char *)&uStack_e0) {
          }
          else {
            if (2 < (ulong)*(byte *)(param_2 + 4)) goto LAB_10a1a9b48;
            (*(code *)(&PTR_FUN_110ba20e8)[*(byte *)(param_2 + 4)])(pcVar1);
            *(char *)(param_2 + 4) = '\x02';
            if (uStack_e0._4_1_ < 2) {
              *(undefined4 *)pcVar1 = (undefined4)uStack_e0;
            }
            *(byte *)(param_2 + 4) = uStack_e0._4_1_;
          }
          if (2 < uStack_e0._4_1_) {
LAB_10a1a9b48:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1a9b4c);
            (*pcVar8)();
          }
          (*(code *)(&PTR_FUN_110ba20e8)[(uint)uStack_e0._4_1_])(&uStack_e0);
          *(undefined4 *)(param_2 + 3) = 8;
          iVar23 = *(int *)(param_1 + 0x17);
          if (iVar23 == 0) {
            func_0x000107c2b054(&uStack_e0,&UNK_10f641bb3);
            pppuVar19 = param_2 + 5;
            apuStack_108[0] = &uStack_e0;
            func_0x000104c5bc74(pppuVar19,&uStack_e0,&UNK_10dd5b8f9,apuStack_108,&ppuStack_e8);
            if (*(char *)((long)pppuVar19 + 0x3f) < '\0') {
              pppuVar19[6] = (undefined8 **)0xa;
              pppuVar32 = (undefined8 ***)pppuVar19[5];
            }
            else {
              pppuVar32 = pppuVar19 + 5;
              *(char *)((long)pppuVar19 + 0x3f) = '\n';
            }
            *(undefined2 *)(pppuVar32 + 1) = 0x4432;
            *pppuVar32 = (undefined8 **)0x647261646e617453;
            *(char *)((long)pppuVar32 + 10) = '\0';
            if ((long)pppuStack_d0 < 0) {
              __ZdlPv(uStack_e0);
            }
            iVar23 = 1;
            *(undefined4 *)((long)param_1 + 0xa04) = 1;
            iVar27 = 1;
LAB_10a1a91cc:
            *(int *)(param_1 + 0x140) = iVar27;
          }
          else {
            if (iVar23 == 1) {
              func_0x000107c2b054(&uStack_e0,&UNK_10f641bb3);
              pppuVar19 = param_2 + 5;
              apuStack_108[0] = &uStack_e0;
              func_0x000104c5bc74(pppuVar19,&uStack_e0,&UNK_10dd5b8f9,apuStack_108,&ppuStack_e8);
              if (*(char *)((long)pppuVar19 + 0x3f) < '\0') {
                pppuVar19[6] = (undefined8 **)0xd;
                pppuVar32 = (undefined8 ***)pppuVar19[5];
              }
              else {
                pppuVar32 = pppuVar19 + 5;
                *(char *)((long)pppuVar19 + 0x3f) = '\r';
              }
              *pppuVar32 = (undefined8 **)0x44326d6f74737543;
              builtin_strncpy((char *)((long)pppuVar32 + 5),"m2DArray",8);
              *(char *)((long)pppuVar32 + 0xd) = '\0';
              if ((long)pppuStack_d0 < 0) {
                __ZdlPv(uStack_e0);
              }
              fVar35 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0xec));
              iVar23 = (int)SQRT(fVar35);
              *(int *)((long)param_1 + 0xa04) = iVar23;
              iVar27 = (int)(fVar35 / (float)(int)SQRT(fVar35));
              goto LAB_10a1a91cc;
            }
            if (iVar23 == 3) {
              func_0x000107c2b054(&uStack_e0,&UNK_10f641bb3);
              pppuVar19 = param_2 + 5;
              apuStack_108[0] = &uStack_e0;
              func_0x000104c5bc74(pppuVar19,&uStack_e0,&UNK_10dd5b8f9,apuStack_108,&ppuStack_e8);
              if (*(char *)((long)pppuVar19 + 0x3f) < '\0') {
                pppuVar19[6] = (undefined8 **)0xd;
                pppuVar32 = (undefined8 ***)pppuVar19[5];
              }
              else {
                pppuVar32 = pppuVar19 + 5;
                *(char *)((long)pppuVar19 + 0x3f) = '\r';
              }
              *pppuVar32 = (undefined8 **)0x75436d6f74737543;
              builtin_strncpy((char *)((long)pppuVar32 + 5),"mCubemap",8);
              *(char *)((long)pppuVar32 + 0xd) = '\0';
              if ((long)pppuStack_d0 < 0) {
                __ZdlPv(uStack_e0);
              }
              iVar23 = 3;
              *(undefined4 *)((long)param_1 + 0xa04) = 3;
              iVar27 = 2;
              goto LAB_10a1a91cc;
            }
            iVar23 = *(int *)((long)param_1 + 0xa04);
            iVar27 = *(int *)(param_1 + 0x140);
          }
          iVar25 = uVar10 - 1;
          uVar30 = *(uint *)((long)param_1 + 0x9fc) * 3 >> 1;
          if (uVar10 == 0 || iVar25 == 0) {
            uVar30 = *(uint *)((long)param_1 + 0x9fc);
          }
          ppuVar14 = (undefined8 **)(ulong)(uint)(iVar23 * *(int *)(param_1 + 0x13f));
          *(int *)(param_1 + 0x13e) = iVar23 * *(int *)(param_1 + 0x13f);
          *(uint *)((long)param_1 + 0x9f4) = iVar27 * uVar30;
          FUN_109fc8e58(ppuVar14,iVar27 * uVar30,*(undefined4 *)(param_1 + 0x15));
          param_2[2] = ppuVar14;
          *param_2 = (undefined8 **)param_1[0x13e];
          __ZNSt3__19to_stringEj(&uStack_e0,*(undefined4 *)(param_1 + 0x1c));
          func_0x000107c2b054(apuStack_108,"width");
          pppuVar19 = param_2 + 5;
          ppuStack_e8 = apuStack_108;
          func_0x000104c5bc74(pppuVar19,apuStack_108,&UNK_10dd5b8f9,&ppuStack_e8,&uStack_e9);
          if (*(char *)((long)pppuVar19 + 0x3f) < '\0') {
            __ZdlPv(pppuVar19[5]);
          }
          pppuVar19[6] = pppuStack_d8;
          pppuVar19[5] = uStack_e0;
          pppuVar19[7] = pppuStack_d0;
          pppuStack_d0 = (undefined8 ***)((ulong)pppuStack_d0 & 0xffffffffffffff);
          uStack_e0 = (undefined8 ***)((ulong)uStack_e0 & 0xffffffffffffff00);
          if ((cStack_f1 < '\0') && (__ZdlPv(apuStack_108[0]), (long)pppuStack_d0 < 0)) {
            __ZdlPv(uStack_e0);
          }
          __ZNSt3__19to_stringEj(&uStack_e0,*(undefined4 *)((long)param_1 + 0xe4));
          func_0x000107c2b054(apuStack_108,"height");
          pppuVar19 = param_2 + 5;
          ppuStack_e8 = apuStack_108;
          func_0x000104c5bc74(pppuVar19,apuStack_108,&UNK_10dd5b8f9,&ppuStack_e8,&uStack_e9);
          if (*(char *)((long)pppuVar19 + 0x3f) < '\0') {
            __ZdlPv(pppuVar19[5]);
          }
          pppuVar19[6] = pppuStack_d8;
          pppuVar19[5] = uStack_e0;
          pppuVar19[7] = pppuStack_d0;
          pppuStack_d0 = (undefined8 ***)((ulong)pppuStack_d0 & 0xffffffffffffff);
          uStack_e0 = (undefined8 ***)((ulong)uStack_e0 & 0xffffffffffffff00);
          if ((cStack_f1 < '\0') && (__ZdlPv(apuStack_108[0]), (long)pppuStack_d0 < 0)) {
            __ZdlPv(uStack_e0);
          }
          if (1 < uVar10) {
            *(int *)(param_2 + 1) = iVar25;
            func_0x000107c2b054(&uStack_e0,&DAT_10f641bc9);
            pppuVar19 = param_2 + 5;
            apuStack_108[0] = &uStack_e0;
            func_0x000104c5bc74(pppuVar19,&uStack_e0,&UNK_10dd5b8f9,apuStack_108,&ppuStack_e8);
            if (*(char *)((long)pppuVar19 + 0x3f) < '\0') {
              pppuVar19[6] = (undefined8 **)0x4;
              pppuVar32 = (undefined8 ***)pppuVar19[5];
            }
            else {
              pppuVar32 = pppuVar19 + 5;
              *(char *)((long)pppuVar19 + 0x3f) = '\x04';
            }
            *(undefined4 *)pppuVar32 = 0x65757274;
            *(char *)((long)pppuVar32 + 4) = '\0';
            if ((long)pppuStack_d0 < 0) {
              __ZdlPv(uStack_e0);
            }
            __ZNSt3__19to_stringEj(&uStack_e0,iVar25);
            func_0x000107c2b054(apuStack_108,&UNK_10f641bd1);
            pppuVar19 = param_2 + 5;
            ppuStack_e8 = apuStack_108;
            func_0x000104c5bc74(pppuVar19,apuStack_108,&UNK_10dd5b8f9,&ppuStack_e8,&uStack_e9);
            if (*(char *)((long)pppuVar19 + 0x3f) < '\0') {
              __ZdlPv(pppuVar19[5]);
            }
            pppuVar19[6] = pppuStack_d8;
            pppuVar19[5] = uStack_e0;
            pppuVar19[7] = pppuStack_d0;
            pppuStack_d0 = (undefined8 ***)((ulong)pppuStack_d0 & 0xffffffffffffff);
            uStack_e0 = (undefined8 ***)((ulong)uStack_e0 & 0xffffffffffffff00);
            if ((cStack_f1 < '\0') && (__ZdlPv(apuStack_108[0]), (long)pppuStack_d0 < 0)) {
              __ZdlPv(uStack_e0);
            }
          }
          iVar23 = *(int *)(param_1 + 0x36);
          func_0x000107c2b054(&uStack_e0,&DAT_10f4a6e88);
          param_3 = (undefined8 *)&UNK_10dd5b8f9;
          param_2 = param_2 + 5;
          ppuVar14 = apuStack_108;
          param_5 = &ppuStack_e8;
          apuStack_108[0] = &uStack_e0;
          func_0x000104c5bc74(param_2,&uStack_e0,&UNK_10dd5b8f9,ppuVar14,param_5);
          uVar29 = SUB84(ppuVar14,0);
          pppuVar19 = (undefined8 ***)"true";
          if (2 < iVar23 - 2U) {
            pppuVar19 = (undefined8 ***)&DAT_10f6842c6;
          }
          func_0x000107c2c4dc(param_2 + 5);
          if ((long)pppuStack_d0 < 0) {
            __ZdlPv(uStack_e0);
          }
          puVar12 = (undefined8 *)0x1;
          goto LAB_10a1a8c34;
        }
        func_0x0001098aa728(param_1 + 0x18);
      }
      else {
        func_0x0001098aa728(param_1 + 0x18);
      }
    }
  }
LAB_10a1a8c30:
  puVar12 = (undefined8 *)0x0;
LAB_10a1a8c34:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (cStack_f1 < '\0') {
      __ZdlPv(apuStack_108[0]);
    }
    if ((long)pppuStack_d0 < 0) {
      __ZdlPv(uStack_e0);
    }
    __Unwind_Resume();
    iVar23 = *(int *)(pppuVar19 + 0x17);
    uVar22 = uVar29;
    if (iVar23 != 1) {
      uVar22 = 0;
    }
    puVar12[1] = 0;
    *puVar12 = 0;
    puVar12[3] = 0;
    puVar12[2] = 0;
    if (iVar23 != 3) {
      uVar29 = 0;
    }
    puVar12[5] = 0;
    puVar12[4] = 0;
    *(undefined2 *)(puVar12 + 6) = 0;
    func_0x0001098ab8cc(pppuVar19 + 0x18,puVar12,param_5,uVar22,uVar29);
    iVar27 = *(int *)((long)puVar12 + 0x2c);
    iVar25 = *(int *)(puVar12 + 2) * *(int *)((long)puVar12 + 0xc);
    iVar23 = iVar27;
    if (*(char *)((long)pppuVar19 + 0xac) == '\0') {
      iVar23 = iVar25;
    }
    uVar10 = *(uint *)((long)pppuVar19 + 0xa4);
    uVar34 = (ulong)uVar10;
    if (*(char *)((long)pppuVar19 + 0xac) == '\0') {
      func_0x0001098a0a04();
      uVar10 = iVar25 * uVar10;
    }
    else {
      uVar18 = uVar34;
      func_0x0001098a6440();
      if ((uint)uVar18 < 0x23) {
        iVar25 = *(int *)(&UNK_10e49b840 + (uVar18 & 0xffffffff) * 4);
      }
      else {
        iVar25 = 2;
      }
      uVar10 = iVar27 * iVar25 * 8;
    }
    if (param_7 < uVar10) {
      uVar9 = 0;
    }
    else {
      pppuVar19 = pppuVar19 + 0x18;
      func_0x0001098aba1c(pppuVar19,param_5,uVar22,uVar29,param_6,iVar23,uVar34,0,0,0,param_3);
      uVar9 = SUB81(pppuVar19,0);
    }
    *(undefined1 *)((long)puVar12 + 0x34) = uVar9;
    return;
  }
  return;
  while( true ) {
    uStack_e0 = pppuVar15;
    pppuStack_d8 = pppuVar16;
    pppuStack_d0 = pppuVar17;
    FUN_10a1a88f8(puVar21,&uStack_e0);
    puVar12 = puVar12 + 3;
    pppuStack_128 = (undefined8 ***)((long)pppuStack_128 + -1);
    if (pppuStack_128 == (undefined8 ***)0x0) break;
LAB_10a1a9530:
    pppuVar15 = pppuVar32;
    FUN_10a1a8858(pppuVar32,pppuVar33,puVar12 + -2);
    pppuVar16 = pppuVar32;
    FUN_10a1a8858(pppuVar32,pppuVar33,puVar12 + -1);
    pppuVar17 = pppuVar32;
    pppuVar20 = pppuVar33;
    param_3 = puVar12;
    FUN_10a1a8858();
    uVar29 = (undefined4)param_4;
    if (((pppuVar33 < pppuVar15) ||
        ((undefined8 ***)((long)pppuVar33 - (long)pppuVar15) < pppuVar16)) ||
       ((*(int *)((long)param_1 + 0xb4) == 0 && (pppuVar17 != pppuVar16)))) {
      param_1[0x13c] = *puVar21;
      pppuVar19 = pppuVar20;
LAB_10a1a90d4:
      puVar12 = (undefined8 *)0x0;
      *(undefined4 *)puVar13 = 1;
      goto LAB_10a1a8c34;
    }
  }
  *(int *)(param_1 + 0x141) = iVar25;
  *(int *)((long)param_1 + 0xa0c) = iVar3;
  lVar26 = 0x18;
  if (iVar27 != iVar23) {
    lVar26 = 0x14;
  }
  uVar30 = piVar31[1];
  uVar6 = piVar31[2];
  uVar29 = 0;
  if (iVar2 == 6) {
    uVar29 = 3;
  }
  *(undefined4 *)(param_1 + 0x17) = uVar29;
  uVar29 = *(undefined4 *)((long)piVar31 + lVar26);
  *(uint *)(param_1 + 0x14) = (uint)(iVar27 == iVar23);
  *(undefined4 *)((long)param_1 + 0xa4) = 0x29;
  *(undefined4 *)(param_1 + 0x15) = uVar29;
  *(undefined1 *)((long)param_1 + 0xac) = 1;
  uVar7 = 0;
  if (uVar30 != 0) {
    uVar7 = ((iVar25 + uVar30) - 1) / uVar30;
  }
  *(uint *)(param_1 + 0x13f) = uVar7 * uVar30;
  uVar30 = 0;
  if (uVar6 != 0) {
    uVar30 = ((iVar3 + uVar6) - 1) / uVar6;
  }
  *(uint *)((long)param_1 + 0x9fc) = uVar30 * uVar6;
  if (iVar2 == 6) {
    func_0x000107c2b054(&uStack_e0,&UNK_10f641bb3);
    pppuVar32 = param_2 + 5;
    apuStack_108[0] = &uStack_e0;
    func_0x000104c5bc74(pppuVar32,&uStack_e0,&UNK_10dd5b8f9,apuStack_108,&ppuStack_e8);
    if (*(char *)((long)pppuVar32 + 0x3f) < '\0') {
      pppuVar32[6] = (undefined8 **)0xd;
      pppuVar33 = (undefined8 ***)pppuVar32[5];
    }
    else {
      pppuVar33 = pppuVar32 + 5;
      *(char *)((long)pppuVar32 + 0x3f) = '\r';
    }
    *pppuVar33 = (undefined8 **)0x75436d6f74737543;
    builtin_strncpy((char *)((long)pppuVar33 + 5),"mCubemap",8);
    *(char *)((long)pppuVar33 + 0xd) = '\0';
    if ((long)pppuStack_d0 < 0) {
      __ZdlPv(uStack_e0);
    }
    uVar36 = 0x300000002;
    iVar24 = 2;
    iVar28 = 3;
  }
  else {
    func_0x000107c2b054(&uStack_e0,&UNK_10f641bb3);
    pppuVar32 = param_2 + 5;
    apuStack_108[0] = &uStack_e0;
    func_0x000104c5bc74(pppuVar32,&uStack_e0,&UNK_10dd5b8f9,apuStack_108,&ppuStack_e8);
    if (*(char *)((long)pppuVar32 + 0x3f) < '\0') {
      pppuVar32[6] = (undefined8 **)0xa;
      pppuVar33 = (undefined8 ***)pppuVar32[5];
    }
    else {
      pppuVar33 = pppuVar32 + 5;
      *(char *)((long)pppuVar32 + 0x3f) = '\n';
    }
    *(undefined2 *)(pppuVar33 + 1) = 0x4432;
    *pppuVar33 = (undefined8 **)0x647261646e617453;
    *(char *)((long)pppuVar33 + 10) = '\0';
    if ((long)pppuStack_d0 < 0) {
      __ZdlPv(uStack_e0);
    }
    uVar36 = 0x100000001;
    iVar28 = 1;
    iVar24 = 1;
  }
  param_1[0x140] = uVar36;
  iVar5 = uVar10 - 1;
  uVar30 = *(uint *)((long)param_1 + 0x9fc) * 3 >> 1;
  if (uVar10 == 0 || iVar5 == 0) {
    uVar30 = *(uint *)((long)param_1 + 0x9fc);
  }
  *(int *)(param_1 + 0x13e) = *(int *)(param_1 + 0x13f) * iVar28;
  *(uint *)((long)param_1 + 0x9f4) = uVar30 * iVar24;
  lVar26 = 0x10;
  if (iVar27 != iVar23) {
    lVar26 = 0xc;
  }
  uVar34 = 1;
  uStack_e0._0_5_ = CONCAT14(1,*(undefined4 *)((long)piVar31 + lVar26));
  if ((char *)((long)param_2 + 0x1c) != (char *)&uStack_e0) {
    if (2 < (ulong)*(byte *)(param_2 + 4)) goto LAB_10a1a9b48;
    (*(code *)(&PTR_FUN_110ba20e8)[*(byte *)(param_2 + 4)])();
    *(char *)(param_2 + 4) = '\x02';
    uVar34 = (ulong)uStack_e0._4_1_;
    if (uStack_e0._4_1_ < 2) {
      *(undefined4 *)((long)param_2 + 0x1c) = (undefined4)uStack_e0;
      *(byte *)(param_2 + 4) = uStack_e0._4_1_;
    }
    else {
      *(byte *)(param_2 + 4) = uStack_e0._4_1_;
      if (uStack_e0._4_1_ != 2) goto LAB_10a1a9b48;
      uVar34 = 2;
    }
  }
  (*(code *)(&PTR_FUN_110ba20e8)[uVar34])(&uStack_e0);
  *(undefined4 *)(param_2 + 3) = 8;
  FUN_10a1a89ec(pppuVar19,iVar25,iVar3,iVar2,*(undefined4 *)(param_1 + 0x15));
  param_2[2] = pppuVar19;
  *param_2 = (undefined8 **)param_1[0x13e];
  __ZNSt3__19to_stringEj(&uStack_e0,iVar25);
  func_0x000107c2b054(apuStack_108,"width");
  pppuVar19 = param_2 + 5;
  ppuStack_e8 = apuStack_108;
  func_0x000104c5bc74(pppuVar19,apuStack_108,&UNK_10dd5b8f9,&ppuStack_e8,&uStack_e9);
  if (*(char *)((long)pppuVar19 + 0x3f) < '\0') {
    __ZdlPv(pppuVar19[5]);
  }
  pppuVar19[6] = pppuStack_d8;
  pppuVar19[5] = uStack_e0;
  pppuVar19[7] = pppuStack_d0;
  pppuStack_d0 = (undefined8 ***)((ulong)pppuStack_d0 & 0xffffffffffffff);
  uStack_e0 = (undefined8 ***)((ulong)uStack_e0 & 0xffffffffffffff00);
  if ((cStack_f1 < '\0') && (__ZdlPv(apuStack_108[0]), (long)pppuStack_d0 < 0)) {
    __ZdlPv(uStack_e0);
  }
  __ZNSt3__19to_stringEj(&uStack_e0,iVar3);
  func_0x000107c2b054(apuStack_108,"height");
  pppuVar19 = param_2 + 5;
  ppuStack_e8 = apuStack_108;
  func_0x000104c5bc74(pppuVar19,apuStack_108,&UNK_10dd5b8f9,&ppuStack_e8,&uStack_e9);
  if (*(char *)((long)pppuVar19 + 0x3f) < '\0') {
    __ZdlPv(pppuVar19[5]);
  }
  pppuVar19[6] = pppuStack_d8;
  pppuVar19[5] = uStack_e0;
  pppuVar19[7] = pppuStack_d0;
  pppuStack_d0 = (undefined8 ***)((ulong)pppuStack_d0 & 0xffffffffffffff);
  uStack_e0 = (undefined8 ***)((ulong)uStack_e0 & 0xffffffffffffff00);
  if ((cStack_f1 < '\0') && (__ZdlPv(apuStack_108[0]), (long)pppuStack_d0 < 0)) {
    __ZdlPv(uStack_e0);
  }
  if (1 < uVar10) {
    *(int *)(param_2 + 1) = iVar5;
    func_0x000107c2b054(&uStack_e0,&DAT_10f641bc9);
    pppuVar19 = param_2 + 5;
    apuStack_108[0] = &uStack_e0;
    func_0x000104c5bc74(pppuVar19,&uStack_e0,&UNK_10dd5b8f9,apuStack_108,&ppuStack_e8);
    if (*(char *)((long)pppuVar19 + 0x3f) < '\0') {
      pppuVar19[6] = (undefined8 **)0x4;
      pppuVar32 = (undefined8 ***)pppuVar19[5];
    }
    else {
      pppuVar32 = pppuVar19 + 5;
      *(char *)((long)pppuVar19 + 0x3f) = '\x04';
    }
    *(undefined4 *)pppuVar32 = 0x65757274;
    *(char *)((long)pppuVar32 + 4) = '\0';
    if ((long)pppuStack_d0 < 0) {
      __ZdlPv(uStack_e0);
    }
    __ZNSt3__19to_stringEj(&uStack_e0,iVar5);
    func_0x000107c2b054(apuStack_108,&UNK_10f641bd1);
    pppuVar19 = param_2 + 5;
    ppuStack_e8 = apuStack_108;
    func_0x000104c5bc74(pppuVar19,apuStack_108,&UNK_10dd5b8f9,&ppuStack_e8,&uStack_e9);
    if (*(char *)((long)pppuVar19 + 0x3f) < '\0') {
      __ZdlPv(pppuVar19[5]);
    }
    pppuVar19[6] = pppuStack_d8;
    pppuVar19[5] = uStack_e0;
    pppuVar19[7] = pppuStack_d0;
    pppuStack_d0 = (undefined8 ***)((ulong)pppuStack_d0 & 0xffffffffffffff);
    uStack_e0 = (undefined8 ***)((ulong)uStack_e0 & 0xffffffffffffff00);
    if ((cStack_f1 < '\0') && (__ZdlPv(apuStack_108[0]), (long)pppuStack_d0 < 0)) {
      __ZdlPv(uStack_e0);
    }
  }
  func_0x000107c2b054(&uStack_e0,&DAT_10f4a6e88);
  param_3 = (undefined8 *)&UNK_10dd5b8f9;
  param_2 = param_2 + 5;
  pppuVar19 = (undefined8 ***)&uStack_e0;
  uVar29 = SUB84(apuStack_108,0);
  param_5 = &ppuStack_e8;
  apuStack_108[0] = &uStack_e0;
  func_0x000104c5bc74();
  if (*(char *)((long)param_2 + 0x3f) < '\0') {
    param_2[6] = (undefined8 **)0x5;
    pppuVar32 = (undefined8 ***)param_2[5];
  }
  else {
    pppuVar32 = param_2 + 5;
    *(char *)((long)param_2 + 0x3f) = '\x05';
  }
  *(undefined4 *)pppuVar32 = 0x736c6166;
  ((char *)((long)pppuVar32 + 4))[0] = 'e';
  ((char *)((long)pppuVar32 + 4))[1] = '\0';
  if ((long)pppuStack_d0 < 0) {
    __ZdlPv(uStack_e0);
  }
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    param_3 = (undefined8 *)&UNK_10f641957;
    uVar29 = 0xf641983;
    param_6 = &UNK_10f641bde;
    pppuVar19 = (undefined8 ***)0x8;
    param_5 = (undefined8 ***)0x21a;
    func_0x00010ae06f08(1,8,&UNK_10f641957,&UNK_10f641983,0x21a);
  }
  puVar12 = (undefined8 *)0x1;
  *(undefined4 *)puVar13 = 1;
  goto LAB_10a1a8c34;
}



/* Entry: 10a1a9c1c; end: 10a1a9d43;  */

void FUN_10a1a9c1c(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  
  iVar2 = *(int *)(param_2 + 0xb8);
  uVar1 = param_4;
  if (iVar2 != 1) {
    uVar1 = 0;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (iVar2 != 3) {
    param_4 = 0;
  }
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  func_0x0001098ab8cc(param_2 + 0xc0,param_1,param_5,uVar1,param_4);
  iVar3 = *(int *)((long)param_1 + 0x2c);
  iVar6 = *(int *)(param_1 + 2) * *(int *)((long)param_1 + 0xc);
  iVar2 = iVar3;
  if (*(char *)(param_2 + 0xac) == '\0') {
    iVar2 = iVar6;
  }
  uVar7 = *(uint *)(param_2 + 0xa4);
  uVar8 = (ulong)uVar7;
  if (*(char *)(param_2 + 0xac) == '\0') {
    func_0x0001098a0a04();
    uVar7 = iVar6 * uVar7;
  }
  else {
    uVar5 = uVar8;
    func_0x0001098a6440();
    if ((uint)uVar5 < 0x23) {
      iVar6 = *(int *)(&UNK_10e49b840 + (uVar5 & 0xffffffff) * 4);
    }
    else {
      iVar6 = 2;
    }
    uVar7 = iVar3 * iVar6 * 8;
  }
  if (param_7 < uVar7) {
    uVar4 = 0;
  }
  else {
    param_2 = param_2 + 0xc0;
    func_0x0001098aba1c(param_2,param_5,uVar1,param_4,param_6,iVar2,uVar8,0,0,0,param_3);
    uVar4 = (undefined1)param_2;
  }
  *(undefined1 *)((long)param_1 + 0x34) = uVar4;
  return;
}



/* Entry: 10a1a9d44; end: 10a1aa5bb;  */

bool FUN_10a1a9d44(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  code *pcVar17;
  bool bVar18;
  bool bVar19;
  ulong uVar20;
  long *plVar21;
  int iVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  long lVar30;
  uint uVar31;
  ulong uVar32;
  int iVar33;
  int iVar34;
  long *plVar35;
  long lVar36;
  ulong uVar37;
  uint uVar38;
  undefined8 uStack_490;
  uint uStack_458;
  long lStack_428;
  long lStack_418;
  long lStack_410;
  undefined8 uStack_408;
  long alStack_400 [102];
  long lStack_d0;
  uint auStack_b0 [13];
  byte bStack_7c;
  
  if (*(int *)(param_1 + 0xb0) == 1) {
    lStack_428 = *(long *)(param_1 + 0x50);
    if (lStack_428 == 0) {
      lStack_428 = *(long *)(param_1 + 0x60);
    }
    lVar30 = 6;
    if (*(int *)(param_1 + 0xb8) != 3) {
      lVar30 = 1;
    }
    lVar23 = *param_2;
    if (lVar23 == 0) {
LAB_10a1aa518:
      bVar19 = false;
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 0xa8);
      uVar29 = (int)((ulong)(*(long *)(param_1 + 0x9e0) - *(long *)(param_1 + 0x9d8)) >> 3) *
               -0x55555555;
      bVar19 = true;
      *(undefined4 *)(lVar23 + 0x14) = 1;
      if (uVar29 != 0) {
        uVar32 = 0;
        lVar6 = *(long *)(lVar23 + 0x58);
        uVar26 = *(ulong *)(lVar23 + 0x60);
        uVar37 = *(ulong *)(param_1 + 0xa08);
        do {
          uVar28 = uVar37 & 0xffffffff;
          FUN_109fc8e58(uVar28,uVar37 >> 0x20,uVar7);
          uVar25 = (*(long *)(param_1 + 0x9e0) - *(long *)(param_1 + 0x9d8) >> 3) *
                   -0x5555555555555555;
          if (uVar25 < uVar32 || uVar25 - uVar32 == 0) {
LAB_10a1aa550:
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x10a1aa554);
            (*pcVar17)();
          }
          plVar35 = (long *)(*(long *)(param_1 + 0x9d8) + uVar32 * 0x18);
          uVar28 = uVar28 & 0xffffffff;
          uVar25 = uVar28 * lVar30;
          if (*(int *)(param_1 + 0xb4) == 2) {
            if (plVar35[2] != uVar25) goto LAB_10a1aa518;
            uVar24 = *(uint *)(param_1 + 0xa08);
            uVar8 = *(uint *)(param_1 + 0xa0c);
            lVar23 = 0;
            uVar28 = uVar32;
            while( true ) {
              uVar20 = (ulong)uVar24;
              if (uVar28 == 0) break;
              FUN_109fc8e58(uVar20,uVar8,uVar7);
              lVar23 = lVar23 + uVar20 * lVar30;
              uVar24 = uVar24 >> 1;
              if (uVar24 < 2) {
                uVar24 = 1;
              }
              uVar8 = uVar8 >> 1;
              if (uVar8 < 2) {
                uVar8 = 1;
              }
              uVar28 = uVar28 - 1;
            }
            FUN_109fc8e58(uVar20,uVar8,uVar7);
            if (uVar26 < lVar23 + uVar25) goto LAB_10a1aa518;
            uVar28 = lVar6 + lVar23;
            func_0x000107c2ae6c(uVar28,uVar25,lStack_428 + *plVar35,plVar35[1]);
            if (0xffffffffffffff88 < uVar28 || uVar28 != uVar25) {
              if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
                func_0x00010ae06f08(1,8,&UNK_10f641957,&UNK_10f641c31,0x317,&UNK_10f641c79);
              }
              goto LAB_10a1aa518;
            }
          }
          else {
            if ((ulong)plVar35[1] < uVar25) goto LAB_10a1aa518;
            lVar23 = 0;
            do {
              uVar24 = *(uint *)(param_1 + 0xa08);
              uVar8 = *(uint *)(param_1 + 0xa0c);
              lVar36 = 0;
              uVar25 = uVar32;
              while( true ) {
                uVar20 = (ulong)uVar24;
                if (uVar25 == 0) break;
                FUN_109fc8e58(uVar20,uVar8,uVar7);
                lVar36 = lVar36 + uVar20 * lVar30;
                uVar24 = uVar24 >> 1;
                if (uVar24 < 2) {
                  uVar24 = 1;
                }
                uVar8 = uVar8 >> 1;
                if (uVar8 < 2) {
                  uVar8 = 1;
                }
                uVar25 = uVar25 - 1;
              }
              FUN_109fc8e58(uVar20,uVar8,uVar7);
              lVar36 = lVar36 + uVar20 * lVar23;
              if (uVar26 < lVar36 + uVar28) goto LAB_10a1aa518;
              _memcpy(lVar6 + lVar36,lStack_428 + *plVar35 + lVar23 * uVar28,uVar28);
              lVar23 = lVar23 + 1;
            } while (lVar23 != lVar30);
          }
          uVar37 = NEON_umax(CONCAT44((uint)(uVar37 >> 0x21),(uint)uVar37 >> 1),0x100000001,4);
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar29);
        bVar19 = true;
      }
    }
  }
  else {
    func_0x0001098ab6f0(param_1 + 0xc0);
    _bzero(alStack_400,0x348);
    func_0x0001098aa904(alStack_400);
    iVar33 = *(int *)(param_1 + 0xb8);
    if (iVar33 == 0) {
      uVar32 = 1;
    }
    else if (iVar33 == 1) {
      uVar29 = *(uint *)(param_1 + 0xec);
      if (uVar29 < 2) {
        uVar29 = 1;
      }
      uVar32 = (ulong)uVar29;
    }
    else if (iVar33 == 3) {
      uVar32 = (ulong)*(uint *)(param_1 + 0xf0);
    }
    else {
      uVar32 = 0;
    }
    uVar29 = *(uint *)(param_1 + 0xe0);
    uVar24 = *(uint *)(param_1 + 0xe4);
    uVar7 = *(undefined4 *)(param_1 + 0xa8);
    plVar35 = (long *)0x0;
    uVar8 = *(uint *)(param_1 + 0xf4);
    for (uVar27 = uVar8; uVar26 = (ulong)uVar29, uVar27 != 0; uVar27 = uVar27 - 1) {
      FUN_109fc8e58(uVar26,uVar24,uVar7);
      plVar35 = (long *)(uVar26 + (long)plVar35);
      uVar29 = uVar29 >> 1;
      if (uVar29 < 2) {
        uVar29 = 1;
      }
      uVar24 = uVar24 >> 1;
      if (uVar24 < 2) {
        uVar24 = 1;
      }
    }
    FUN_109fc8e58(uVar26,uVar24,uVar7);
    iVar33 = (int)uVar32;
    if ((((*(int *)(param_1 + 0xb8) == 0) && (*(char *)(param_1 + 0xac) == '\x01')) &&
        (*(int *)(param_1 + 0x9f8) == *(int *)(param_1 + 0xe0))) &&
       ((*(int *)(param_1 + 0x9fc) == *(int *)(param_1 + 0xe4) &&
        (plVar21 = param_2, FUN_10a1a5510(), plVar35 <= plVar21)))) {
      lVar30 = *param_2;
      if (lVar30 == 0) {
LAB_10a1aa4d8:
        bVar19 = false;
      }
      else {
        bVar19 = true;
        *(undefined4 *)(lVar30 + 0x14) = 1;
        if (uVar8 != 0) {
          uVar29 = 0;
          do {
            if (iVar33 != 0) {
              uVar26 = 0;
              do {
                uVar24 = *(uint *)(param_1 + 0xe0);
                uVar27 = *(uint *)(param_1 + 0xe4);
                uVar7 = *(undefined4 *)(param_1 + 0xa8);
                lVar23 = 0;
                uVar9 = uVar29;
                while( true ) {
                  uVar37 = (ulong)uVar24;
                  if (uVar9 == 0) break;
                  FUN_109fc8e58(uVar37,uVar27,uVar7);
                  lVar23 = lVar23 + uVar37 * uVar32;
                  uVar24 = uVar24 >> 1;
                  if (uVar24 < 2) {
                    uVar24 = 1;
                  }
                  uVar27 = uVar27 >> 1;
                  if (uVar27 < 2) {
                    uVar27 = 1;
                  }
                  uVar9 = uVar9 - 1;
                }
                FUN_109fc8e58(uVar37,uVar27,uVar7);
                uVar24 = *(uint *)(param_1 + 0xe0) >> (ulong)(uVar29 & 0x1f);
                if (uVar24 < 2) {
                  uVar24 = 1;
                }
                uVar28 = (ulong)uVar24;
                uVar24 = *(uint *)(param_1 + 0xe4) >> (ulong)(uVar29 & 0x1f);
                if (uVar24 < 2) {
                  uVar24 = 1;
                }
                FUN_109fc8e58(uVar28,uVar24,*(undefined4 *)(param_1 + 0xa8));
                lVar23 = lVar23 + uVar37 * uVar26;
                if ((*(ulong *)(lVar30 + 0x60) < uVar28 + lVar23) ||
                   (FUN_10a1a9c1c(auStack_b0,param_1,alStack_400,uVar26,uVar29,
                                  *(long *)(lVar30 + 0x58) + lVar23,uVar28), (bStack_7c & 1) == 0))
                goto LAB_10a1aa4d8;
                uVar26 = uVar26 + 1;
              } while (uVar26 != uVar32);
            }
            uVar29 = uVar29 + 1;
          } while (uVar29 != uVar8);
          bVar19 = true;
        }
      }
    }
    else {
      lStack_418 = 0;
      lStack_410 = 0;
      uStack_408 = 0;
      uVar32 = (ulong)*(uint *)(param_1 + 0xe0);
      FUN_109fc8e58(uVar32,*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xa8));
      uVar26 = lStack_410 - lStack_418;
      if (uVar32 < uVar26 || uVar32 - uVar26 == 0) {
        if (uVar32 < uVar26) {
          lStack_410 = lStack_418 + uVar32;
        }
      }
      else {
        func_0x000107c27d58(&lStack_418,uVar32 - uVar26);
      }
      if (uVar8 == 0) {
        bVar19 = true;
      }
      else {
        bVar19 = false;
        uVar29 = 0;
        iVar22 = 0;
        uVar9 = *(uint *)(param_1 + 0x9f0);
        uVar10 = *(uint *)(param_1 + 0xa8);
        uStack_490 = *(undefined8 *)(param_1 + 0xe0);
        uVar27 = *(int *)(param_1 + 0xa00) * *(int *)(param_1 + 0x9fc);
        uVar24 = 0;
        if (uVar8 != 1) {
          uVar24 = uVar27 >> 1;
        }
        uStack_458 = *(int *)(param_1 + 0xa04) * *(int *)(param_1 + 0x9f8);
        ppuVar4 = &PTR_DAT_110ae4700 + (ulong)uVar10 * 4;
        if (0x56 < uVar10) {
          ppuVar4 = &PTR_DAT_110ae4700;
        }
        do {
          iVar1 = 0;
          if (uVar29 != 1) {
            iVar1 = iVar22;
          }
          uVar2 = 0;
          if (uVar29 != 1) {
            uVar2 = uVar24;
          }
          uVar38 = (uint)((ulong)uStack_490 >> 0x20);
          if (iVar33 != 0) {
            iVar22 = 0;
            iVar34 = 0;
            uVar24 = 0;
            do {
              uVar32 = (ulong)uVar9;
              FUN_109fc8e58(uVar32,iVar34 + uVar2,(ulong)uVar10);
              bVar12 = *(byte *)((long)ppuVar4 + 0x1a);
              if (bVar12 == 0) {
LAB_10a1aa544:
                func_0x000109243bf8(&UNK_10f62e152);
                goto LAB_10a1aa550;
              }
              bVar13 = *(byte *)(ppuVar4 + 3);
              FUN_10a1a9c1c(auStack_b0,param_1,alStack_400,iVar22,uVar29,lStack_418,
                            lStack_410 - lStack_418);
              uVar3 = auStack_b0[3];
              if ((bStack_7c & 1) == 0) goto LAB_10a1aa360;
              ppuVar5 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_1 + 0xa8) * 4;
              if (0x56 < *(uint *)(param_1 + 0xa8)) {
                ppuVar5 = &PTR_DAT_110ae4700;
              }
              bVar14 = *(byte *)((long)ppuVar5 + 0x1a);
              if (bVar14 == 0) goto LAB_10a1aa544;
              bVar15 = *(byte *)(ppuVar5 + 3);
              lVar30 = 0x20;
              if (*(char *)(param_1 + 0xac) == '\0') {
                lVar30 = 0x10;
              }
              uVar11 = *(uint *)((long)auStack_b0 + lVar30);
              uVar26 = (ulong)uVar11;
              plVar35 = param_2;
              FUN_10a1a5394(param_2);
              if (uVar11 != 0) {
                lVar30 = 0;
                uVar11 = 0;
                uVar31 = (uint)bVar13;
                if (bVar13 != 0) {
                  uVar11 = (iVar1 + -1 + uVar24 + (uint)bVar13) / uVar31;
                }
                uVar16 = 0;
                if (uVar31 != 0) {
                  uVar16 = ((uVar9 - 1) + uVar31) / uVar31;
                }
                uVar31 = 0;
                if (bVar15 != 0) {
                  uVar31 = ((uVar3 + bVar15) - 1) / (uint)bVar15;
                }
                uVar37 = (ulong)(uVar31 * bVar14);
                do {
                  _memcpy((long)plVar35 +
                          lVar30 * (ulong)(uVar16 * bVar12) + uVar11 * bVar12 + uVar32,
                          lStack_418 + lVar30 * uVar37,uVar37);
                  lVar30 = lVar30 + 1;
                  uVar26 = uVar26 - 1;
                } while (uVar26 != 0);
              }
              uVar24 = uVar24 + (uint)uStack_490;
              bVar18 = uStack_458 <= uVar24;
              if (bVar18) {
                uVar24 = 0;
              }
              uVar3 = 0;
              if (bVar18) {
                uVar3 = uVar38;
              }
              iVar34 = uVar3 + iVar34;
              iVar22 = iVar22 + 1;
            } while (iVar22 != iVar33);
          }
          iVar22 = iVar1 + uStack_458;
          uStack_458 = uStack_458 >> 1;
          if (uStack_458 < 2) {
            uStack_458 = 1;
          }
          uVar27 = uVar27 >> 1;
          if (uVar27 < 2) {
            uVar27 = 1;
          }
          uVar24 = uVar2 + uVar27;
          uStack_490 = NEON_umax(CONCAT44(uVar38 >> 1,(uint)uStack_490 >> 1),0x100000001,4);
          uVar29 = uVar29 + 1;
          bVar19 = uVar8 <= uVar29;
        } while (uVar29 != uVar8);
        bVar19 = true;
      }
LAB_10a1aa360:
      if (lStack_418 != 0) {
        lStack_410 = lStack_418;
        __ZdlPv();
      }
    }
    func_0x0001098aa728(param_1 + 0xc0);
    if (lStack_d0 != 0) {
      _free();
    }
    lVar30 = 0x318;
    do {
      if (*(long *)((long)alStack_400 + lVar30) != 0) {
        _free();
      }
      lVar30 = lVar30 + -0x18;
    } while (lVar30 != 0x18);
    lVar30 = 0x18;
    do {
      if (*(long *)((long)alStack_400 + lVar30) != 0) {
        _free();
      }
      lVar30 = lVar30 + -0x18;
    } while (lVar30 != -0x18);
  }
  return bVar19;
}



/* Entry: 10a1aa5bc; end: 10a1aa62b;  */

undefined8 * FUN_10a1aa5bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[2] = &UNK_1092bf430;
  param_1[3] = &PTR_DAT_110ae93a8;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0x95) = 0;
  *(undefined8 *)((long)param_1 + 0x8d) = 0;
  *param_1 = &PTR_FUN_110bab468;
  param_1[1] = 0;
  uVar1 = 1;
  __Znwm();
  param_1[0x14] = uVar1;
  return param_1;
}



/* Entry: 10a1aa62c; end: 10a1aa667;  */

undefined8 * FUN_10a1aa62c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110bab468;
  lVar2 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110bab6e0;
  plVar1 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  func_0x0001092bffbc(param_1 + 1);
  return param_1;
}



/* Entry: 10a1aa668; end: 10a1aa6e7;  */

undefined8 * FUN_10a1aa668(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[2] = &UNK_1092bf430;
  param_1[3] = &PTR_DAT_110ae93a8;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0x95) = 0;
  *(undefined8 *)((long)param_1 + 0x8d) = 0;
  *param_1 = &PTR_FUN_110bab4a0;
  param_1[1] = 0;
  param_1[0x14] = 0;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[0x14] = puVar1;
  return param_1;
}



/* Entry: 10a1aa6e8; end: 10a1aa72b;  */

undefined8 * FUN_10a1aa6e8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110bab4a0;
  FUN_10a1aa72c();
  lVar2 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110bab6e0;
  plVar1 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  func_0x0001092bffbc(param_1 + 1);
  return param_1;
}



/* Entry: 10a1aa72c; end: 10a1aa783;  */

void FUN_10a1aa72c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(long **)(param_1 + 0x90);
  if (plVar1 != (long *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xa0);
  if (*plVar1 != 0) {
    func_0x000109b65758(plVar1,plVar1 + 1,plVar1 + 2);
    puVar2 = *(undefined8 **)(param_1 + 0xa0);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  return;
}


