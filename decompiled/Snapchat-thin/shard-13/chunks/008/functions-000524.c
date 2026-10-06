/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10acdcda0; end: 10acdd07b;  */

void FUN_10acdcda0(long *param_1,int *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong **ppuVar8;
  int iVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  ulong *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_100;
  long *plStack_f8;
  ulong *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_80;
  long *plStack_78;
  ulong **ppuStack_68;
  undefined4 uStack_5c;
  ulong uStack_58;
  
  lVar11 = *param_3;
  bVar6 = *(int *)(lVar11 + 0x10) < 1;
  if ((!bVar6 && *(int *)(lVar11 + 0x14) != 0) && (bVar6 || -1 < *(int *)(lVar11 + 0x14))) {
    iVar4 = *(int *)(lVar11 + 0x24);
    if (param_2[5] != iVar4) {
      param_2[5] = iVar4;
      iVar9 = *param_2;
      if (*param_2 == -1) {
        *param_2 = iVar4;
        iVar9 = iVar4;
      }
      FUN_10a1b498c(&uStack_180,iVar4,iVar9);
      func_0x00010a343394(param_2 + 6,&uStack_180);
      plVar2 = plStack_178;
      if (plStack_178 != (long *)0x0) {
        plVar1 = plStack_178 + 1;
        do {
          lVar11 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      lVar11 = *param_3;
    }
    puVar13 = (undefined8 *)param_3[1];
    puVar12 = *(undefined8 **)(param_2 + 6);
    if ((char)param_2[4] == '\x01') {
      puVar7 = puVar13;
      FUN_10a0ec6f0();
    }
    else {
      puVar7 = (undefined8 *)0x0;
    }
    uStack_5c = SUB84(puVar7,0);
    uVar10 = *(ulong *)(lVar11 + 0x10);
    bVar6 = ((ulong)puVar7 & 1) != 0;
    uVar3 = uVar10 >> 0x20;
    if (bVar6) {
      uVar3 = uVar10;
    }
    uStack_58 = uVar10 & 0xffffffff;
    if (bVar6) {
      uStack_58 = uVar10 >> 0x20;
    }
    uStack_58 = uStack_58 | uVar3 << 0x20;
    if (param_2[3] == 0xffffffff) {
      FUN_10a0d459c();
      func_0x00010a042d30(param_2 + 0x20);
      func_0x00010a136de4(&uStack_180);
      __Unwind_Resume();
      pcStack_188 = FUN_10acdd07c;
      dStack_1a0 = (double)((float)*(undefined8 *)((long)puVar7 + 0x1c) + 0.5);
      dStack_198 = (double)((float)((ulong)*(undefined8 *)((long)puVar7 + 0x1c) >> 0x20) + 0.5);
      dStack_1b0 = (double)(float)*(undefined8 *)((long)puVar7 + 0x14);
      dStack_1a8 = (double)(float)((ulong)*(undefined8 *)((long)puVar7 + 0x14) >> 0x20);
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      puStack_190 = &stack0xfffffffffffffff0;
      func_0x00010937d46c(extraout_x8,*(undefined4 *)((long)puVar7 + 4),*(undefined4 *)(puVar7 + 1),
                          &dStack_1a0,&dStack_1b0,&uStack_1c0);
      return;
    }
    puStack_f0 = &uStack_58;
    ppuVar8 = &puStack_f0;
    (*(code *)(&PTR_FUN_110c6cf90)[(uint)param_2[3]])(ppuVar8,param_2 + 1);
    ppuStack_68 = ppuVar8;
    if ((char)param_2[4] == '\x01') {
      FUN_10a4cb5a0(&puStack_f0,puVar13);
    }
    else {
      uStack_e8 = puVar13[1];
      puStack_f0 = (ulong *)*puVar13;
      uStack_d8 = puVar13[3];
      uStack_e0 = puVar13[2];
      uStack_c8 = puVar13[5];
      uStack_d0 = puVar13[4];
      uStack_b8 = puVar13[7];
      uStack_c0 = puVar13[6];
      uStack_a8 = puVar13[9];
      uStack_b0 = puVar13[8];
      uStack_a0 = puVar13[10];
      uStack_8c = *(undefined8 *)((long)puVar13 + 100);
      uStack_90 = (undefined4)((ulong)*(undefined8 *)((long)puVar13 + 0x5c) >> 0x20);
      plStack_78 = (long *)puVar13[0xf];
      uStack_80 = puVar13[0xe];
      uStack_98 = (undefined4)puVar13[0xb];
      uStack_94 = (undefined4)((ulong)puVar13[0xb] >> 0x20);
      if (puVar13[0xf] != 0) {
        plVar2 = (long *)(puVar13[0xf] + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    FUN_10a2288e0(&puStack_f0,ppuVar8);
    (**(code **)*puVar12)(&uStack_180,puVar12,lVar11,&uStack_5c,&ppuStack_68);
    plVar2 = plStack_78;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_10c = uStack_8c;
    uStack_114 = uStack_94;
    uStack_110 = uStack_90;
    uStack_168 = uStack_e8;
    puStack_170 = puStack_f0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    uStack_148 = uStack_c8;
    uStack_150 = uStack_d0;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    plStack_f8 = plStack_78;
    uStack_100 = uStack_80;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar11 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
    }
    puVar12 = (undefined8 *)0x90;
    __Znwm();
    puVar12[9] = uStack_138;
    puVar12[8] = uStack_140;
    puVar12[0xb] = uStack_128;
    puVar12[10] = uStack_130;
    puVar12[0xd] = CONCAT44(uStack_114,uStack_118);
    puVar12[0xc] = uStack_120;
    *(undefined8 *)((long)puVar12 + 0x74) = uStack_10c;
    *(ulong *)((long)puVar12 + 0x6c) = CONCAT44(uStack_110,uStack_114);
    puVar12[1] = plStack_178;
    *puVar12 = uStack_180;
    puVar12[3] = uStack_168;
    puVar12[2] = puStack_170;
    puVar12[5] = uStack_158;
    puVar12[4] = uStack_160;
    puVar12[7] = uStack_148;
    puVar12[6] = uStack_150;
    puVar12[0x11] = plStack_f8;
    puVar12[0x10] = uStack_100;
    *param_1 = (long)puVar12;
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 10acdd07c; end: 10acdd0cf;  */

void FUN_10acdd07c(undefined8 param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  dStack_20 = (double)((float)*(undefined8 *)(param_2 + 0x1c) + 0.5);
  dStack_18 = (double)((float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20) + 0.5);
  dStack_30 = (double)(float)*(undefined8 *)(param_2 + 0x14);
  dStack_28 = (double)(float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010937d46c(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),&dStack_20,
                      &dStack_30,&uStack_40);
  return;
}



/* Entry: 10acdd0d0; end: 10acdd19f;  */

void FUN_10acdd0d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_58 = param_3[9];
  uStack_60 = param_3[8];
  uStack_50 = param_3[10];
  uStack_48 = (undefined4)param_3[0xb];
  uStack_3c = *(undefined8 *)((long)param_3 + 100);
  uStack_44 = (undefined4)*(undefined8 *)((long)param_3 + 0x5c);
  uStack_40 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0x5c) >> 0x20);
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  uStack_78 = param_3[5];
  uStack_80 = param_3[4];
  uStack_68 = param_3[7];
  uStack_70 = param_3[6];
  plStack_28 = (long *)param_3[0xf];
  uStack_30 = param_3[0xe];
  if (param_3[0xf] != 0) {
    plVar1 = (long *)(param_3[0xf] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a2288e0(&uStack_a0,*param_2);
  FUN_10acdd07c(param_1,&uStack_a0);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10acdd1a0; end: 10acdd29b;  */

void FUN_10acdd1a0(undefined8 *param_1,long param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_58;
  
  lVar4 = *(long *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x20);
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110af4b00;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  func_0x00010938d9d4(param_1,&uStack_58);
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    iVar3 = 0;
    if ((long)iVar2 != 0) {
      iVar3 = (int)(uVar1 / (ulong)(long)iVar2);
    }
    do {
      _memcpy(param_1[1] + lVar5 * *(int *)(param_1 + 3) * 3,lVar4 + lVar5 * iVar3 * 3,
              (long)*(int *)(param_1 + 2) * 3);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  if (param_3 != 0) {
    func_0x00010938dee0(param_1);
  }
  return;
}



/* Entry: 10acdd29c; end: 10acdd713;  */

undefined8 * FUN_10acdd29c(undefined8 param_1,long param_2,undefined4 *param_3,char *param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puStack_238;
  long lStack_230;
  undefined8 *puStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined8 uStack_208;
  char cStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  char cStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined1 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 uStack_198;
  undefined1 uStack_18c;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  uint5 uStack_128;
  undefined8 uStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  char cStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 *puStack_a8;
  long lStack_78;
  long *plVar7;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_140 = (long *)0x77fffffff;
  uStack_138 = CONCAT44(uStack_138._4_4_,0x168);
  uStack_130 = CONCAT35(uStack_130._5_3_,1);
  uVar2 = (ulong)_uStack_128 >> 0x28;
  uVar1 = (uint)_uStack_128;
  uStack_128 = (uint5)(uVar1 & 0xffffff00);
  _uStack_128 = CONCAT35((int3)uVar2,uStack_128);
  plVar4 = &lStack_188;
  lStack_188 = param_2;
  func_0x0001098ac018(plVar4,&UNK_10e4a7ac1,0x23,&uStack_140,0,1);
  uStack_1a0 = 0;
  lStack_1b8 = 0;
  uStack_1b0 = 0;
  lStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_19c = 0x1000000;
  uStack_198 = 0;
  uStack_18c = 0;
  plVar5 = &lStack_188;
  func_0x0001098ac018(plVar5,&UNK_10e4c90da,0x22,&lStack_1c0,0,1);
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  uStack_140 = (long *)((ulong)uStack_140 & 0xffffffffffffff00);
  plVar6 = &lStack_188;
  func_0x0001098ac018(plVar6,&UNK_10e4c8f08,0x24,&uStack_140,0,1);
  if (*param_4 == '\x01') {
    uStack_140 = (long *)0x4014000000000000;
    uStack_138 = 1000;
    uStack_130 = CONCAT71(uStack_130._1_7_,3);
    plVar7 = &lStack_188;
    func_0x0001098ac018(plVar7,&UNK_10e4c8f2d,0x26,&uStack_140,0,1);
    uVar3 = SUB84(plVar7,0);
    cStack_200 = *param_4;
  }
  else {
    cStack_200 = '\0';
    uVar3 = 0x40000000;
  }
  lStack_1f0 = 0;
  uStack_1e8 = 0;
  lStack_1f8 = 0;
  uStack_208 = param_1;
  FUN_10a2300f4(&lStack_1f8,*(long *)(param_4 + 8),*(long *)(param_4 + 0x10),
                (*(long *)(param_4 + 0x10) - *(long *)(param_4 + 8) >> 3) * 0x6db6db6db6db6db7);
  FUN_10a1ccb30(auStack_1e0,param_4 + 0x20);
  lStack_180 = 0;
  lStack_178 = 0;
  uStack_170 = 0;
  uStack_140 = (long *)CONCAT44((int)plVar4,0x20000000);
  uStack_138 = CONCAT44((int)plVar5,(int)plVar6);
  uStack_130 = CONCAT44(uStack_130._4_4_,uVar3);
  FUN_10a26ebc0(&lStack_180,0,&uStack_140,(long)&uStack_130 + 4,5);
  uStack_140 = (long *)uStack_208;
  uStack_138 = CONCAT71(uStack_138._1_7_,cStack_200);
  _uStack_128 = 0;
  uStack_120 = 0;
  uStack_130 = 0;
  FUN_10a2300f4(&uStack_130,lStack_1f8,lStack_1f0,
                (lStack_1f0 - lStack_1f8 >> 3) * 0x6db6db6db6db6db7);
  FUN_10a1ccb30(auStack_118,auStack_1e0);
  pcStack_f8 = FUN_10aceabd4;
  ppuStack_f0 = &PTR_FUN_110c6cfa8;
  puVar8 = (undefined8 *)0x48;
  __Znwm();
  *puVar8 = uStack_140;
  *(undefined1 *)(puVar8 + 1) = (undefined1)uStack_138;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  FUN_10a2300f4(puVar8 + 2,uStack_130,_uStack_128,
                (_uStack_128 - uStack_130 >> 3) * 0x6db6db6db6db6db7);
  FUN_10a1ccb30(puVar8 + 5,auStack_118);
  pcStack_b8 = FUN_10aceabd4;
  ppuStack_b0 = &PTR_FUN_110c6cfa8;
  uStack_e8 = 0;
  lStack_158 = lStack_178;
  lStack_160 = lStack_180;
  uStack_150 = uStack_170;
  lStack_180 = 0;
  lStack_178 = 0;
  uStack_170 = 0;
  param_2 = param_2 + 0x18;
  puStack_a8 = puVar8;
  func_0x0001098aeecc(param_2,&pcStack_b8,&UNK_110bef5f8,&lStack_160);
  if (lStack_160 != 0) {
    lStack_158 = lStack_160;
    __ZdlPv();
  }
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  if ((cStack_100 == '\x01') && (cStack_101 < '\0')) {
    __ZdlPv(auStack_118[0]);
  }
  pcStack_b8 = (code *)&uStack_130;
  FUN_10a2303d4(&pcStack_b8);
  if (lStack_180 != 0) {
    lStack_178 = lStack_180;
    __ZdlPv();
  }
  *param_3 = (int)param_2;
  if ((cStack_1c8 == '\x01') && (cStack_1c9 < '\0')) {
    __ZdlPv(auStack_1e0[0]);
  }
  puVar8 = &uStack_140;
  uStack_140 = &lStack_1f8;
  FUN_10a2303d4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar8;
  }
  ___stack_chk_fail();
  if (lStack_160 != 0) {
    lStack_158 = lStack_160;
    __ZdlPv();
  }
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  FUN_10aceab80(&uStack_140);
  if (lStack_180 != 0) {
    lStack_178 = lStack_180;
    __ZdlPv();
  }
  FUN_10acdd714(&uStack_208);
  puVar9 = puVar8;
  __Unwind_Resume();
  pcStack_218 = FUN_10acdd714;
  lStack_230 = param_2;
  puStack_228 = puVar8;
  puStack_220 = &stack0xfffffffffffffff0;
  if ((*(char *)(puVar9 + 8) == '\x01') && (*(char *)((long)puVar9 + 0x3f) < '\0')) {
    __ZdlPv(puVar9[5]);
  }
  puStack_238 = puVar9 + 2;
  FUN_10a2303d4(&puStack_238);
  return puVar9;
}



/* Entry: 10acdd714; end: 10acdd767;  */

long FUN_10acdd714(long param_1)

{
  long lStack_28;
  
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(char *)(param_1 + 0x3f) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  lStack_28 = param_1 + 0x10;
  FUN_10a2303d4(&lStack_28);
  return param_1;
}



/* Entry: 10acdd768; end: 10acdd82f;  */

undefined8 * FUN_10acdd768(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_38;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c6c7d0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  uStack_38 = 0;
  FUN_10aceef5c(param_1 + 3);
  FUN_10aceef5c(&uStack_38,0);
  return param_1;
}



/* Entry: 10acdd830; end: 10acdd877;  */

undefined8 * FUN_10acdd830(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c6c7d0;
  FUN_10a505720(param_1 + 4);
  FUN_10aceef5c(param_1 + 3,0);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10acdd878; end: 10acdd87b;  */

undefined8 * FUN_10acdd878(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c6c7d0;
  FUN_10a505720(param_1 + 4);
  FUN_10aceef5c(param_1 + 3,0);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10acdd87c; end: 10acdd88f;  */

void FUN_10acdd87c(void)

{
  FUN_10acdd830();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acdd890; end: 10acde653;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10acdd890(undefined4 *param_1,undefined8 *param_2,long param_3,long param_4,long param_5,
                  int param_6)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined ***pppuVar7;
  long *plVar8;
  double *pdVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double adStack_740 [16];
  long *plStack_6c0;
  long *plStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  long lStack_690;
  undefined8 uStack_688;
  undefined **ppuStack_680;
  undefined8 uStack_678;
  long lStack_670;
  long *plStack_668;
  long *plStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  long lStack_638;
  undefined8 uStack_630;
  uint uStack_628;
  undefined1 uStack_620;
  undefined7 uStack_61f;
  char cStack_609;
  char cStack_608;
  undefined **ppuStack_600;
  undefined8 uStack_5f8;
  long lStack_5f0;
  long *plStack_5e8;
  long *plStack_5e0;
  double dStack_5d8;
  double dStack_5d0;
  double dStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long *plStack_590;
  double dStack_588;
  double adStack_580 [12];
  long lStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  double dStack_500;
  long *plStack_4f8;
  double adStack_4f0 [12];
  double dStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long *plStack_470;
  long *plStack_468;
  long lStack_460;
  undefined8 uStack_458;
  double dStack_450;
  double dStack_448;
  double dStack_440;
  double dStack_430;
  double dStack_428;
  double dStack_420;
  undefined8 uStack_418;
  double dStack_410;
  double dStack_408;
  double dStack_400;
  undefined8 uStack_3f8;
  double dStack_3f0;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined1 uStack_3d0;
  undefined7 uStack_3cf;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  undefined8 auStack_390 [8];
  undefined **ppuStack_350;
  undefined8 uStack_348;
  long lStack_340;
  long *plStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  uint uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  char cStack_2d9;
  char cStack_2d8;
  undefined1 auStack_2d0 [64];
  undefined1 auStack_290 [88];
  long *plStack_238;
  char cStack_1ff;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1c8;
  long lStack_178;
  long lStack_170;
  long lStack_160;
  long lStack_158;
  long lStack_148;
  long lStack_140;
  long *plStack_d8;
  char cStack_d0;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  plVar15 = (long *)(param_1 + 2);
  *(undefined8 *)(param_1 + 4) = 0;
  *plVar15 = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((long)param_1 + 0x51) = 0;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  lVar14 = *(long *)(param_5 + 8);
  if (lVar14 == *(long *)(param_5 + 0x10)) {
    plStack_5e8 = (long *)0x0;
    plStack_5e0 = (long *)0x0;
  }
  else {
    plVar8 = *(long **)(lVar14 + 0x18);
    if (plVar8 == (long *)0x0) {
      plVar8 = *(long **)(lVar14 + 0x28);
      if (plVar8 == (long *)0x0) goto LAB_10acde4b4;
      lVar14 = (long)*(char *)((long)plVar8 + 0x17);
      if (lVar14 < 0) {
        lVar14 = plVar8[1];
        plVar8 = (long *)*plVar8;
      }
      uStack_2f8 = uStack_2f8 & 0xffffff00;
      uStack_300 = 0;
      lStack_308 = 0;
      uStack_310 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_328 = 0;
      plStack_330 = (long *)0x0;
      plStack_338 = (long *)0x0;
      lStack_340 = 0;
      uStack_348 = 0;
      ppuStack_350 = &PTR_DAT_110af0078;
      plStack_3d8 = (long *)(long)(int)lVar14;
      plStack_3e0 = plVar8;
      func_0x000107c30348(&ppuStack_350,&plStack_3e0);
      plVar5 = (long *)0x120;
      __Znwm();
      plVar5[1] = 0;
      plVar5[2] = 0;
      plVar12 = plVar5 + 4;
      plVar5[5] = 0;
      *plVar12 = 0;
      *plVar5 = (long)&PTR_DAT_110af6bf0;
      plVar5[7] = 0;
      plVar5[6] = 0;
      plVar5[9] = 0;
      plVar5[8] = 0;
      plVar5[0xb] = 0;
      plVar5[10] = 0;
      plVar5[0xd] = 0;
      plVar5[0xc] = 0;
      plVar5[0xf] = 0;
      plVar5[0xe] = 0;
      plVar5[0x11] = 0;
      plVar5[0x10] = 0;
      plVar5[0x13] = 0;
      plVar5[0x12] = 0;
      plVar5[0x15] = 0;
      plVar5[0x14] = 0;
      plVar5[0x17] = 0;
      plVar5[0x16] = 0;
      plVar5[0x19] = 0;
      plVar5[0x18] = 0;
      plVar5[0x1b] = 0;
      plVar5[0x1a] = 0;
      plVar5[0x1d] = 0;
      plVar5[0x1c] = 0;
      plVar5[0x1f] = 0;
      plVar5[0x1e] = 0;
      plVar5[0x21] = 0;
      plVar5[0x20] = 0;
      plVar5[0x23] = 0;
      plVar5[0x22] = 0;
      plVar5[9] = 0x3ff0000000000000;
      plVar5[10] = 0;
      plVar5[0xb] = 0;
      plVar5[0xc] = 0;
      plVar5[0xe] = 0x3ff0000000000000;
      plVar5[0xf] = 0;
      plVar5[0x10] = 0;
      plVar5[0x11] = 0;
      plVar5[0x12] = 0x3ff0000000000000;
      plVar5[0x13] = 0;
      plVar5[0x14] = 0;
      plVar5[0x15] = 0;
      plVar5[0x16] = 0x3ff0000000000000;
      plVar5[0x18] = 0x3ff0000000000000;
      *plVar12 = (long)&PTR_DAT_110af6b38;
      plStack_3e0 = plVar12;
      plStack_3d8 = plVar5;
      func_0x000109456e5c(&plStack_470,&ppuStack_350);
      plVar8 = plStack_470;
      plStack_470 = (long *)0x0;
      lVar14 = plVar5[0x22];
      plVar5[0x22] = (long)plVar8;
      if (lVar14 != 0) {
        FUN_10a7d2a4c(plVar5 + 0x22);
        plVar8 = plStack_470;
        plStack_470 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          FUN_10a7d2a4c(&plStack_470);
        }
      }
      func_0x000109454824(plVar5[0x22]);
      func_0x000109494cfc(plVar5[0x22]);
      *(undefined4 *)(plVar5 + 5) = *(undefined4 *)plVar5[0x22];
      plStack_5e8 = plVar12;
      plStack_5e0 = plVar5;
      func_0x000109343234(&ppuStack_350);
    }
    else {
      plStack_5e0 = *(long **)(lVar14 + 0x20);
      plStack_5e8 = plVar8;
      if (plStack_5e0 != (long *)0x0) {
        plVar8 = plStack_5e0 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
  }
  puVar10 = *(undefined8 **)(param_5 + 8);
  if (puVar10 == *(undefined8 **)(param_5 + 0x10)) {
    ppuStack_600 = (undefined **)0x0;
    uStack_5f8 = 0;
    lStack_5f0 = 0;
  }
  else if (*(char *)((long)puVar10 + 0x17) < '\0') {
    func_0x000107c3192c(&ppuStack_600,*puVar10,puVar10[1]);
  }
  else {
    uStack_5f8 = puVar10[1];
    ppuStack_600 = (undefined **)*puVar10;
    lStack_5f0 = puVar10[2];
  }
  FUN_10a52a0d0(param_1 + 0x12,&plStack_5e8);
  if (lStack_5f0 < 0) {
    func_0x000107c3192c(&ppuStack_680,ppuStack_600,uStack_5f8);
  }
  else {
    uStack_678 = uStack_5f8;
    ppuStack_680 = ppuStack_600;
    lStack_670 = lStack_5f0;
  }
  plStack_668 = (long *)((ulong)plStack_668 & 0xffffffffffffff00);
  uStack_628 = uStack_628 & 0xffffff00;
  uStack_620 = 0;
  cStack_608 = '\0';
  plVar8 = (long *)*param_2;
  if (plVar8 != plStack_5e8) {
    FUN_10a52a0d0(param_2,&plStack_5e8);
    FUN_10a5046d8(param_2 + 2,0);
    if (*(char *)(param_2 + 0x16) == '\x01') {
      *(undefined1 *)(param_2 + 0x16) = 0;
    }
    plVar8 = (long *)*param_2;
  }
  if (plVar8 != (long *)0x0) {
    plVar8 = param_2 + 2;
    lVar14 = *plVar8;
    if (lVar14 == 0) {
      plStack_3e0 = (long *)CONCAT26(plStack_3e0._6_2_,0x101000100);
      plStack_3d8 = (long *)0x6400000002;
      uStack_3d0 = 1;
      uStack_3c8 = 0xffffffffffffffff;
      uStack_3c0 = 0;
      lStack_3b0 = 0;
      uStack_3b8 = 0;
      if (param_6 == 0) {
        plStack_3e0 = (long *)((ulong)plStack_3e0 & 0xffffffffffff0000);
      }
      FUN_10a4cb670(&ppuStack_350,param_4,&plStack_3e0);
      ppuVar3 = ppuStack_350;
      ppuStack_350 = (undefined **)0x0;
      FUN_10a5046d8(plVar8,ppuVar3);
      ppuVar3 = ppuStack_350;
      ppuStack_350 = (undefined **)0x0;
      if (ppuVar3 != (undefined **)0x0) {
        func_0x0001094742c8();
        __ZdlPv();
      }
      lVar14 = *plVar8;
      func_0x000107c2b054(&ppuStack_350,&UNK_10f677e59);
      func_0x000109474d14(lVar14,&ppuStack_350);
      if (lStack_340 < 0) {
        __ZdlPv(ppuStack_350);
      }
      lVar14 = *plVar8;
      func_0x000107c2b054(&ppuStack_350,&UNK_10f677e59);
      plStack_4f8 = (long *)param_2[1];
      dStack_500 = (double)*param_2;
      if (param_2[1] != 0) {
        plVar5 = (long *)(param_2[1] + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x0001095bc4e4(&plStack_470,&plStack_590,&dStack_500);
      func_0x000109475d84(lVar14,&ppuStack_350,&plStack_470);
      plVar5 = plStack_468;
      if (plStack_468 != (long *)0x0) {
        plVar12 = plStack_468 + 1;
        do {
          lVar14 = *plVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = lVar14 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_468 + 0x10))(plStack_468);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar5 = plStack_4f8;
      if (plStack_4f8 != (long *)0x0) {
        plVar12 = plStack_4f8 + 1;
        do {
          lVar14 = *plVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = lVar14 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_4f8 + 0x10))(plStack_4f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      if (lStack_340 < 0) {
        __ZdlPv(ppuStack_350);
      }
      lVar14 = *plVar8;
      func_0x000107c2b054(&ppuStack_350,&UNK_10f677e59);
      func_0x000109474578(lVar14,&ppuStack_350,1);
      if (lStack_340 < 0) {
        __ZdlPv(ppuStack_350);
      }
      lVar14 = *plVar8;
      func_0x000107c2b054(&plStack_470,&UNK_10f677e59);
      uStack_348 = 0x3e359066ee8a6ff2;
      ppuStack_350 = (undefined **)0x3e0cc0893e0dea98;
      plStack_338 = (long *)0x3e51f855c6c8b29f;
      lStack_340 = 0x3e4af480aa15fcf9;
      uStack_328 = 0x3e359066ee8a6ff2;
      plStack_330 = (long *)0x3e4af480aa15fcf9;
      uStack_320 = 0x3e0cc0893e0dea98;
      adStack_4f0[0] = 0.0;
      dStack_500 = 0.0;
      plStack_4f8 = (long *)0x0;
      FUN_10a0cf024(&dStack_500,&ppuStack_350,&uStack_318,7);
      uStack_348 = 0xc016e0becfdefaf8;
      ppuStack_350 = (undefined **)0x3ff0000000000000;
      plStack_338 = (long *)0xc031573a92781235;
      lStack_340 = 0x402b44ec4a4095f2;
      uStack_328 = 0xc012f373255568d7;
      plStack_330 = (long *)0x4028d1a2b5a20ddc;
      uStack_320 = 0x3fe81ff2198320ec;
      dStack_588 = 0.0;
      adStack_580[0] = 0.0;
      plStack_590 = (long *)0x0;
      FUN_10a0cf024(&plStack_590,&ppuStack_350,&uStack_318,7);
      func_0x0001094743a4(lVar14,&plStack_470,&dStack_500,&plStack_590);
      if (plStack_590 != (long *)0x0) {
        dStack_588 = (double)plStack_590;
        __ZdlPv();
      }
      if (dStack_500 != 0.0) {
        plStack_4f8 = (long *)dStack_500;
        __ZdlPv();
      }
      if (lStack_460 < 0) {
        __ZdlPv(plStack_470);
      }
      if (lStack_3b0 < 0) {
        __ZdlPv(uStack_3c0);
      }
      lVar14 = *plVar8;
    }
    FUN_10a4cc3b8(&ppuStack_350,param_3);
    func_0x000109475ec8(lVar14,&ppuStack_350);
    if ((cStack_d0 == '\x01') && (plStack_d8 != (long *)0x0)) {
      plVar5 = plStack_d8 + 1;
      do {
        lVar14 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
      }
    }
    if (lStack_148 != 0) {
      lStack_140 = lStack_148;
      __ZdlPv();
    }
    if (lStack_160 != 0) {
      lStack_158 = lStack_160;
      __ZdlPv();
    }
    if (lStack_178 != 0) {
      lStack_170 = lStack_178;
      __ZdlPv();
    }
    if (plStack_238 != (long *)0x0) {
      plVar5 = plStack_238 + 1;
      do {
        lVar14 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_238 + 0x10))(plStack_238);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_238);
      }
    }
    _free(uStack_2e8);
    func_0x000109476718(&ppuStack_350,*plVar8);
    *(undefined8 *)(param_1 + 8) = uStack_1f8;
    param_1[10] = uStack_1f0;
    *(undefined8 *)(param_1 + 0xc) = uStack_1e0;
    *(undefined8 *)(param_1 + 0xe) = uStack_1d8;
    param_1[0x10] = uStack_1d0;
    param_1[0x11] = uStack_1c8;
    if (*(int *)(*plVar8 + 0x38) == 1) {
      func_0x00010937f874(&plStack_3e0,&uStack_320);
      uStack_6b0 = CONCAT71(uStack_3cf,uStack_3d0);
      plStack_6b8 = plStack_3d8;
      plStack_6c0 = plStack_3e0;
      uStack_6a8 = uStack_3c8;
      uStack_698 = uStack_3b8;
      uStack_6a0 = uStack_3c0;
      uStack_688 = uStack_3a8;
      lStack_690 = lStack_3b0;
      func_0x000109519fd0(&plStack_3e0,param_4 + 0x24,&plStack_6c0);
      uStack_658 = CONCAT71(uStack_3cf,uStack_3d0);
      plStack_660 = plStack_3d8;
      plStack_668 = plStack_3e0;
      uStack_650 = uStack_3c8;
      uStack_640 = uStack_3b8;
      uStack_648 = uStack_3c0;
      uStack_630 = uStack_3a8;
      lStack_638 = lStack_3b0;
      if ((uStack_628 & 1) == 0) {
        uStack_628 = CONCAT31(uStack_628._1_3_,1);
      }
      *(char *)(param_1 + 0x16) = cStack_1ff;
      if (cStack_1ff == '\x01') {
        plStack_468 = *(long **)(param_3 + 0x88);
        plStack_470 = *(long **)(param_3 + 0x80);
        uStack_458 = *(undefined8 *)(param_3 + 0x98);
        lStack_460 = *(undefined8 *)(param_3 + 0x90);
        dStack_448 = *(double *)(param_3 + 0xa8);
        dStack_450 = *(double *)(param_3 + 0xa0);
        dStack_440 = *(double *)(param_3 + 0xb0);
        dStack_408 = *(double *)(param_3 + 0xe8);
        dStack_410 = *(double *)(param_3 + 0xe0);
        uStack_3f8 = *(undefined8 *)(param_3 + 0xf8);
        dStack_400 = *(double *)(param_3 + 0xf0);
        dStack_3f0 = *(double *)(param_3 + 0x100);
        dStack_428 = *(double *)(param_3 + 200);
        dStack_430 = *(double *)(param_3 + 0xc0);
        uStack_418 = *(undefined8 *)(param_3 + 0xd8);
        dStack_420 = *(double *)(param_3 + 0xd0);
        func_0x000109388a48(&plStack_3e0,param_3 + 0x140,&plStack_470);
        func_0x00010937f718(&plStack_590,auStack_290);
        plStack_468 = (long *)dStack_588;
        plStack_470 = plStack_590;
        uStack_458 = adStack_580[1];
        lStack_460 = (long)adStack_580[0];
        dStack_448 = adStack_580[3];
        dStack_450 = adStack_580[2];
        dStack_440 = adStack_580[4];
        func_0x00010937fbc4(&dStack_500,&plStack_470);
        lVar14 = 0;
        dStack_408 = adStack_4f0[3];
        dStack_410 = adStack_4f0[2];
        uStack_3f8 = adStack_4f0[5];
        dStack_400 = adStack_4f0[4];
        dStack_3f0 = adStack_4f0[6];
        dStack_428 = (double)plStack_4f8;
        dStack_430 = dStack_500;
        uStack_418 = adStack_4f0[1];
        dStack_420 = adStack_4f0[0];
        pdVar9 = &dStack_420;
        do {
          dVar17 = pdVar9[-2];
          *(double *)((long)adStack_4f0 + lVar14 + -8) = pdVar9[-1];
          *(double *)((long)&dStack_500 + lVar14) = dVar17;
          *(double *)((long)adStack_4f0 + lVar14) = *pdVar9;
          lVar14 = lVar14 + 0x20;
          pdVar9 = pdVar9 + 3;
        } while (lVar14 != 0x60);
        lVar14 = 0;
        adStack_4f0[0xb] = dStack_448;
        adStack_4f0[10] = dStack_450;
        dStack_490 = dStack_440;
        adStack_4f0[1] = 0.0;
        adStack_4f0[5] = 0.0;
        adStack_4f0[9] = 0.0;
        uStack_488 = 0x3ff0000000000000;
        puVar10 = auStack_390;
        do {
          uVar16 = puVar10[-2];
          *(undefined8 *)((long)&dStack_588 + lVar14) = puVar10[-1];
          *(undefined8 *)((long)&plStack_590 + lVar14) = uVar16;
          *(undefined8 *)((long)adStack_580 + lVar14) = *puVar10;
          lVar14 = lVar14 + 0x20;
          puVar10 = puVar10 + 3;
        } while (lVar14 != 0x60);
        lVar14 = 0;
        adStack_580[0xb] = (double)uStack_3b8;
        adStack_580[10] = (double)uStack_3c0;
        lStack_520 = lStack_3b0;
        adStack_580[1] = 0.0;
        adStack_580[5] = 0.0;
        adStack_580[9] = 0.0;
        uStack_518 = 0x3ff0000000000000;
        do {
          dVar17 = *(double *)((long)&plStack_590 + lVar14);
          dVar18 = *(double *)((long)&dStack_588 + lVar14);
          dVar19 = *(double *)((long)adStack_580 + lVar14);
          dVar20 = *(double *)((long)adStack_580 + lVar14 + 8U);
          *(double *)((long)adStack_740 + lVar14 + 8) =
               (double)plStack_4f8 * dVar17 + adStack_4f0[3] * dVar18 + adStack_4f0[7] * dVar19 +
               dStack_448 * dVar20;
          *(double *)((long)adStack_740 + lVar14) =
               dStack_500 * dVar17 + adStack_4f0[2] * dVar18 + adStack_4f0[6] * dVar19 +
               dStack_450 * dVar20;
          *(double *)((long)adStack_740 + lVar14 + 0x18) =
               dVar17 * 0.0 + dVar18 * 0.0 + dVar19 * 0.0 + dVar20 * 1.0;
          *(double *)((long)adStack_740 + lVar14 + 0x10) =
               adStack_4f0[0] * dVar17 + adStack_4f0[4] * dVar18 + adStack_4f0[8] * dVar19 +
               dStack_440 * dVar20;
          lVar14 = lVar14 + 0x20;
        } while (lVar14 != 0x80);
        adStack_740[0xc] = adStack_740[0xc] * 0.01;
        adStack_740[0xd] = adStack_740[0xd] * 0.01;
        adStack_740[0xe] = adStack_740[0xe] * 0.01;
        func_0x00010937fc48(&plStack_590,adStack_740);
        func_0x00010937fbc4(&dStack_5d8,&plStack_590);
        adStack_580[0xb] = (double)uStack_5b0;
        adStack_580[10] = (double)uStack_5b8;
        uStack_518 = uStack_5a0;
        lStack_520 = uStack_5a8;
        uStack_510 = uStack_598;
        adStack_580[7] = dStack_5d0;
        adStack_580[6] = dStack_5d8;
        adStack_580[9] = (double)uStack_5c0;
        adStack_580[8] = dStack_5c8;
        func_0x00010937f718(&dStack_c0,&plStack_590);
        plStack_4f8 = (long *)dStack_b8;
        dStack_500 = dStack_c0;
        adStack_4f0[1] = (double)uStack_a8;
        adStack_4f0[0] = dStack_b0;
        adStack_4f0[3] = dStack_98;
        adStack_4f0[2] = dStack_a0;
        adStack_4f0[4] = dStack_90;
        func_0x00010937fbc4(&dStack_5d8,&dStack_500);
        adStack_4f0[0xb] = (double)uStack_5b0;
        adStack_4f0[10] = (double)uStack_5b8;
        uStack_488 = uStack_5a0;
        dStack_490 = (double)uStack_5a8;
        uStack_480 = uStack_598;
        adStack_4f0[7] = dStack_5d0;
        adStack_4f0[6] = dStack_5d8;
        adStack_4f0[9] = (double)uStack_5c0;
        adStack_4f0[8] = dStack_5c8;
        param_2[5] = plStack_4f8;
        param_2[4] = dStack_500;
        param_2[7] = adStack_4f0[1];
        param_2[6] = adStack_4f0[0];
        param_2[9] = adStack_4f0[3];
        param_2[8] = adStack_4f0[2];
        param_2[10] = adStack_4f0[4];
        param_2[0x11] = uStack_5b0;
        param_2[0x10] = uStack_5b8;
        param_2[0x13] = uStack_5a0;
        param_2[0x12] = uStack_5a8;
        param_2[0x14] = uStack_598;
        param_2[0xd] = dStack_5d0;
        param_2[0xc] = dStack_5d8;
        param_2[0xf] = uStack_5c0;
        param_2[0xe] = dStack_5c8;
        if ((*(byte *)(param_2 + 0x16) & 1) == 0) {
          *(undefined1 *)(param_2 + 0x16) = 1;
        }
      }
      FUN_10a7d299c(param_1 + 0x18,param_2 + 4);
    }
    plVar8 = plStack_330;
    *param_1 = 1;
    if (plStack_330 != (long *)0x0) {
      plVar5 = plStack_330 + 1;
      do {
        lVar14 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_330 + 0x10))(plStack_330);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (lStack_340 < 0) {
      __ZdlPv(ppuStack_350);
    }
  }
  if (lStack_670 < 0) {
    func_0x000107c3192c(&ppuStack_350,ppuStack_680,uStack_678);
  }
  else {
    uStack_348 = uStack_678;
    ppuStack_350 = ppuStack_680;
    lStack_340 = lStack_670;
  }
  uStack_320 = uStack_650;
  uStack_328 = uStack_658;
  uStack_310 = uStack_640;
  uStack_318 = uStack_648;
  uStack_300 = uStack_630;
  lStack_308 = lStack_638;
  uStack_2f8 = uStack_628;
  plStack_330 = plStack_660;
  plStack_338 = plStack_668;
  FUN_10a1ccb30(&uStack_2f0,&uStack_620);
  lVar13 = *(long *)(param_1 + 6);
  lVar14 = *(long *)(param_1 + 2);
  if (lVar13 == lVar14) {
    if (lVar13 != 0) {
      lVar11 = *(long *)(param_1 + 4);
      lVar6 = lVar14;
      if (lVar11 != lVar13) {
        do {
          lVar11 = lVar11 + -0x80;
          FUN_10a502620(lVar11);
        } while (lVar11 != lVar13);
        lVar6 = *plVar15;
      }
      *(long *)(param_1 + 4) = lVar14;
      __ZdlPv(lVar6);
      *plVar15 = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 6) = 0;
    }
    lVar14 = 0x80;
    __Znwm();
    *(long *)(param_1 + 2) = lVar14;
    *(long *)(param_1 + 4) = lVar14;
    *(long *)(param_1 + 6) = lVar14 + 0x80;
    pppuVar7 = &ppuStack_350;
    FUN_10aceaee4(pppuVar7,auStack_2d0,lVar14);
    *(undefined ****)(param_1 + 4) = pppuVar7;
  }
  else {
    lVar13 = *(long *)(param_1 + 4);
    if (lVar13 == lVar14) {
      pppuVar7 = &ppuStack_350;
      FUN_10aceaee4(pppuVar7,auStack_2d0,lVar13);
      *(long *)(param_1 + 4) = (long)pppuVar7 + (lVar13 - lVar14);
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar14,&ppuStack_350)
      ;
      *(long **)(lVar14 + 0x20) = plStack_330;
      *(long **)(lVar14 + 0x18) = plStack_338;
      *(undefined1 *)(lVar14 + 0x58) = (undefined1)uStack_2f8;
      *(undefined8 *)(lVar14 + 0x50) = uStack_300;
      *(long *)(lVar14 + 0x48) = lStack_308;
      *(undefined8 *)(lVar14 + 0x40) = uStack_310;
      *(undefined8 *)(lVar14 + 0x38) = uStack_318;
      *(undefined8 *)(lVar14 + 0x30) = uStack_320;
      *(undefined8 *)(lVar14 + 0x28) = uStack_328;
      func_0x00010a1cca60(lVar14 + 0x60,&uStack_2f0);
      lVar13 = *(long *)(param_1 + 4);
      while (lVar13 != lVar14 + 0x80) {
        lVar13 = lVar13 + -0x80;
        FUN_10a502620(lVar13);
      }
      *(long *)(param_1 + 4) = lVar14 + 0x80;
    }
  }
  if ((cStack_2d8 == '\x01') && (cStack_2d9 < '\0')) {
    __ZdlPv(uStack_2f0);
  }
  if (lStack_340 < 0) {
    __ZdlPv(ppuStack_350);
  }
  if ((cStack_608 == '\x01') && (cStack_609 < '\0')) {
    __ZdlPv(CONCAT71(uStack_61f,uStack_620));
  }
  if (lStack_670 < 0) {
    __ZdlPv(ppuStack_680);
  }
  if (lStack_5f0 < 0) {
    __ZdlPv(ppuStack_600);
  }
  plVar15 = plStack_5e0;
  if (plStack_5e0 != (long *)0x0) {
    plVar8 = plStack_5e0 + 1;
    do {
      lVar14 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar14 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_5e0 + 0x10))(plStack_5e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10acde4b4:
  FUN_10a00946c(&UNK_10f6a2258);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10acde4c4);
  (*pcVar4)();
}



/* Entry: 10acde654; end: 10acdebaf;  */

void FUN_10acde654(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 **ppuStack_4d0;
  long *plStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined8 uStack_45c;
  undefined8 uStack_450;
  long *plStack_448;
  undefined8 uStack_438;
  undefined8 **ppuStack_430;
  long *plStack_428;
  undefined4 uStack_41c;
  undefined8 *puStack_418;
  long *plStack_410;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 auStack_400 [2];
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  undefined1 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  char cStack_310;
  undefined8 **ppuStack_300;
  long *plStack_2f8;
  char cStack_2e9;
  undefined8 uStack_298;
  long *plStack_1e8;
  long lStack_128;
  long lStack_120;
  long lStack_110;
  long lStack_108;
  long lStack_f8;
  long lStack_f0;
  long *plStack_88;
  char cStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_41c = 0;
  uStack_438 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uStack_404 = 7;
  ppuStack_300 = (undefined8 **)&uStack_408;
  lVar11 = param_1 + 0x20;
  uStack_408 = uVar3;
  FUN_10a505794(lVar11,&uStack_408,&UNK_10dd5b8f9,&ppuStack_300,&ppuStack_4d0);
  plVar13 = (long *)(lVar11 + 0x18);
  puVar8 = (undefined8 *)*plVar13;
  if (puVar8 == (undefined8 *)0x0) {
    FUN_10a1b498c(&ppuStack_300,uVar3,7);
    func_0x00010a343394(plVar13,&ppuStack_300);
    plVar2 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      plVar1 = plStack_2f8 + 1;
      do {
        lVar10 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    lVar10 = *plVar13;
    FUN_10a0ee900(&ppuStack_300,&UNK_10f65ce9b,0x27);
    plStack_4c8 = (long *)(long)cStack_2e9;
    if ((long)plStack_4c8 < 0) {
      ppuStack_4d0 = ppuStack_300;
      plStack_4c8 = plStack_2f8;
      if (lVar10 != 0) {
        __ZdlPv();
        goto LAB_10acde77c;
      }
    }
    else {
      ppuStack_4d0 = &ppuStack_300;
      if (lVar10 != 0) {
LAB_10acde77c:
        puVar8 = (undefined8 *)*plVar13;
        goto LAB_10acde780;
      }
    }
  }
  else {
LAB_10acde780:
    plVar13 = *(long **)(lVar11 + 0x20);
    if (plVar13 != (long *)0x0) {
      plVar2 = plVar13 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puStack_418 = puVar8;
    plStack_410 = plVar13;
    (**(code **)*puVar8)(&ppuStack_430,puVar8,param_2,&uStack_41c,&uStack_438);
    if (plVar13 != (long *)0x0) {
      plVar2 = plVar13 + 1;
      do {
        lVar11 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined1 *)(*(long *)(param_4 + 0x218) + 0x14);
    uStack_478 = *(undefined8 *)(param_4 + 0x1e0);
    uStack_480 = *(undefined8 *)(param_4 + 0x1d8);
    uStack_470 = *(undefined8 *)(param_4 + 0x1e8);
    uStack_498 = *(undefined8 *)(param_4 + 0x1c0);
    uStack_4a0 = *(undefined8 *)(param_4 + 0x1b8);
    uStack_488 = *(undefined8 *)(param_4 + 0x1d0);
    uStack_490 = *(undefined8 *)(param_4 + 0x1c8);
    uStack_468 = (undefined4)*(undefined8 *)(param_4 + 0x1f0);
    uStack_45c = *(undefined8 *)(param_4 + 0x1fc);
    uStack_464 = (undefined4)*(undefined8 *)(param_4 + 500);
    uStack_460 = (undefined4)((ulong)*(undefined8 *)(param_4 + 500) >> 0x20);
    uStack_4b8 = *(undefined8 *)(param_4 + 0x1a0);
    uStack_4c0 = *(undefined8 *)(param_4 + 0x198);
    uStack_4a8 = *(undefined8 *)(param_4 + 0x1b0);
    uStack_4b0 = *(undefined8 *)(param_4 + 0x1a8);
    plStack_4c8 = plStack_428;
    ppuStack_4d0 = ppuStack_430;
    uVar14 = *(undefined8 *)(param_4 + 0x20);
    ppuStack_430 = (undefined8 ***)0x0;
    plStack_428 = (long *)0x0;
    uStack_450 = *(undefined8 *)(param_4 + 0x208);
    plStack_448 = *(long **)(param_4 + 0x210);
    if (plStack_448 != (long *)0x0) {
      plVar13 = plStack_448 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = *plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_10a4caea0(&ppuStack_300,uVar14,uVar4,&ppuStack_4d0,*(undefined8 *)(param_4 + 0xa8),
                  *(undefined8 *)(param_4 + 0xd0),*(undefined8 *)(param_4 + 0xe8),0);
    if ((*(byte *)(param_5 + 0x450) & 1) == 0) goto LAB_10acdeb34;
    FUN_10acdd890(auStack_400,uVar12,&ppuStack_300,(undefined8 *)(param_4 + 0x198),param_5 + 0x410,
                  *(undefined1 *)(param_5 + 1));
    if ((cStack_80 == '\x01') && (plStack_88 != (long *)0x0)) {
      plVar13 = plStack_88 + 1;
      do {
        lVar11 = *plVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
    if (lStack_f8 != 0) {
      lStack_f0 = lStack_f8;
      __ZdlPv();
    }
    if (lStack_110 != 0) {
      lStack_108 = lStack_110;
      __ZdlPv();
    }
    if (lStack_128 != 0) {
      lStack_120 = lStack_128;
      __ZdlPv();
    }
    if (plStack_1e8 != (long *)0x0) {
      plVar13 = plStack_1e8 + 1;
      do {
        lVar11 = *plVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1e8);
      }
    }
    _free(uStack_298);
    plVar13 = plStack_448;
    if (plStack_448 != (long *)0x0) {
      plVar2 = plStack_448 + 1;
      do {
        lVar11 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_448 + 0x10))(plStack_448);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar13 = plStack_4c8;
    if (plStack_4c8 != (long *)0x0) {
      plVar2 = plStack_4c8 + 1;
      do {
        lVar11 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_4c8 + 0x10))(plStack_4c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar13 = plStack_428;
    if (plStack_428 != (long *)0x0) {
      plVar2 = plStack_428 + 1;
      do {
        lVar11 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_428 + 0x10))(plStack_428);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    puVar9 = (undefined4 *)0x100;
    __Znwm();
    *puVar9 = auStack_400[0];
    *(undefined8 *)(puVar9 + 4) = uStack_3f0;
    *(undefined8 *)(puVar9 + 2) = uStack_3f8;
    *(undefined8 *)(puVar9 + 6) = uStack_3e8;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    *(undefined8 *)(puVar9 + 10) = uStack_3d8;
    *(undefined8 *)(puVar9 + 8) = uStack_3e0;
    *(undefined8 *)(puVar9 + 0xe) = uStack_3c8;
    *(undefined8 *)(puVar9 + 0xc) = uStack_3d0;
    *(undefined8 *)(puVar9 + 0x10) = uStack_3c0;
    *(long **)(puVar9 + 0x14) = plStack_3b0;
    *(undefined8 *)(puVar9 + 0x12) = uStack_3b8;
    uStack_3b8 = 0;
    plStack_3b0 = (long *)0x0;
    uStack_3e8 = 0;
    *(undefined1 *)(puVar9 + 0x18) = 0;
    *(undefined1 *)(puVar9 + 0x16) = uStack_3a8;
    *(undefined1 *)(puVar9 + 0x3c) = 0;
    if (cStack_310 == '\x01') {
      *(undefined8 *)(puVar9 + 0x1a) = uStack_398;
      *(undefined8 *)(puVar9 + 0x18) = uStack_3a0;
      *(undefined8 *)(puVar9 + 0x1e) = uStack_388;
      *(undefined8 *)(puVar9 + 0x1c) = uStack_390;
      *(undefined8 *)(puVar9 + 0x22) = uStack_378;
      *(undefined8 *)(puVar9 + 0x20) = uStack_380;
      *(undefined8 *)(puVar9 + 0x24) = uStack_370;
      *(undefined8 *)(puVar9 + 0x32) = uStack_338;
      *(undefined8 *)(puVar9 + 0x30) = uStack_340;
      *(undefined8 *)(puVar9 + 0x36) = uStack_328;
      *(undefined8 *)(puVar9 + 0x34) = uStack_330;
      *(undefined8 *)(puVar9 + 0x38) = uStack_320;
      *(undefined8 *)(puVar9 + 0x2a) = uStack_358;
      *(undefined8 *)(puVar9 + 0x28) = uStack_360;
      *(undefined8 *)(puVar9 + 0x2e) = uStack_348;
      *(undefined8 *)(puVar9 + 0x2c) = uStack_350;
      *(undefined1 *)(puVar9 + 0x3c) = 1;
    }
    plVar13 = (long *)(param_4 + 0x90);
    lVar11 = *plVar13;
    *plVar13 = (long)puVar9;
    if ((lVar11 != 0) &&
       (func_0x00010a502568(plVar13), plVar13 = plStack_3b0, plStack_3b0 != (long *)0x0)) {
      plVar2 = plStack_3b0 + 1;
      do {
        lVar11 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    ppuStack_300 = (undefined8 ***)((ulong)auStack_400 | 8);
    FUN_10a5025b0(&ppuStack_300);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a0edfc4(&ppuStack_4d0);
LAB_10acdeb34:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10acdeb38);
  (*pcVar7)();
}



/* Entry: 10acdebb0; end: 10acdebef;  */

long FUN_10acdebb0(long param_1)

{
  long lStack_28;
  
  FUN_10a22ffb4(param_1 + 0x48);
  lStack_28 = param_1 + 8;
  FUN_10a5025b0(&lStack_28);
  return param_1;
}



/* Entry: 10acdebf0; end: 10acdec13;  */

undefined8 FUN_10acdebf0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if ((*(byte *)(param_2 + 0x450) & 1) != 0) {
    uVar1 = 0xb20;
    if (*(char *)(param_2 + 0x410) == '\0') {
      uVar1 = 800;
    }
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10acdec14);
  (*pcVar2)();
}



/* Entry: 10acdec14; end: 10acdece7;  */

void FUN_10acdec14(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_24;
  
  uStack_38 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  lStack_58 = 0;
  uStack_40 = 0;
  uStack_34 = 0x1000000;
  uStack_30 = 0;
  uStack_24 = 0;
  FUN_10a051998(param_2 + 0x138,&lStack_58);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  if ((*(byte *)(param_2 + 0x199) & 1) == 0) {
    uVar2 = 0;
    *(undefined1 *)(param_2 + 0x199) = 1;
  }
  else {
    uVar2 = *(undefined1 *)(param_2 + 0x198);
  }
  *(undefined1 *)(param_2 + 0x198) = uVar2;
  if ((*(byte *)(param_2 + 0x450) & 1) != 0) {
    if (*(char *)(param_2 + 0x410) == '\x01') {
      lStack_58 = 0x4014000000000000;
      lStack_50 = 1000;
      uStack_48 = CONCAT71(uStack_48._1_7_,3);
      FUN_10a0378a8(param_2 + 0x278,&lStack_58);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10acdeccc);
  (*pcVar1)();
}



/* Entry: 10acdece8; end: 10acded6b;  */

void FUN_10acdece8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  func_0x00010a23175c(param_1,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  FUN_10a5046d8(param_1 + 0x10,0);
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  return;
}



/* Entry: 10acded6c; end: 10acded7f;  */

void FUN_10acded6c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  func_0x00010a23175c(lVar5,&uStack_30);
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
  FUN_10a5046d8(lVar5 + 0x10,0);
  if (*(char *)(lVar5 + 0xb0) == '\x01') {
    *(undefined1 *)(lVar5 + 0xb0) = 0;
  }
  return;
}



/* Entry: 10acded80; end: 10acdedcb;  */

undefined8 * FUN_10acded80(undefined8 *param_1)

{
  if ((*(char *)(param_1 + 0xf) == '\x01') && (*(char *)((long)param_1 + 0x77) < '\0')) {
    __ZdlPv(param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10acdedcc; end: 10acdeecb;  */

void FUN_10acdedcc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_38;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c6cfc0);
  if ((int)plVar1 != 0) {
    param_1[1] = 0;
    *param_1 = 0x3f800000;
    param_1[3] = 0;
    param_1[2] = 0x3f80000000000000;
    param_1[5] = 0x3f800000;
    param_1[4] = 0;
    param_1[7] = 0x3f80000000000000;
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    (**(code **)(*param_2 + 0x1a8))(&uStack_80,param_2,&PTR_DAT_110c6cfc0);
    param_1[1] = uStack_78;
    *param_1 = uStack_80;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
    param_1[5] = uStack_58;
    param_1[4] = uStack_60;
    param_1[7] = uStack_48;
    param_1[6] = uStack_50;
  }
  (**(code **)(*param_2 + 0x60))(&uStack_80,param_2,&PTR_DAT_110c6cfe0);
  func_0x000107c3193c(param_1 + 9);
  param_1[10] = uStack_78;
  param_1[9] = uStack_80;
  param_1[0xb] = uStack_70;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  puStack_38 = (undefined1 *)&uStack_80;
  FUN_10a0426d8(&puStack_38);
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c6d000);
  *(int *)(param_1 + 0xc) = (int)param_2;
  return;
}



/* Entry: 10acdeecc; end: 10acdefb7;  */

void FUN_10acdeecc(long param_1,long *param_2)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    (**(code **)(*param_2 + 0xf0))(param_2,&PTR_DAT_110c6cfc0,param_1);
  }
  (**(code **)(*param_2 + 0x138))(param_2,&PTR_DAT_110c6cfe0,param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010acdef44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c6d000,*(undefined4 *)(param_1 + 0x60));
  return;
}



/* Entry: 10acdefb8; end: 10acdefbb;  */

undefined8 * FUN_10acdefb8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c6d4e8;
  FUN_10a505720(param_1 + 0x12);
  FUN_10acef020(param_1 + 0xe);
  FUN_10a235538(param_1 + 0xb);
  FUN_10aceeff8(param_1 + 10,0);
  FUN_10a22ffb4(param_1 + 8);
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10acdefbc; end: 10acdefcf;  */

void FUN_10acdefbc(void)

{
  func_0x00010acdef48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acdefd0; end: 10acdf063;  */

long * FUN_10acdefd0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    *puVar4 = &PTR_FUN_110c6d340;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = lVar6;
  }
  *param_2 = 0;
  plVar5 = (long *)param_1[1];
  *param_1 = lVar6;
  param_1[1] = (long)puVar4;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10acdf064; end: 10acdf0eb;  */

void FUN_10acdf064(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_10aceeff8(param_1 + 0x50,0);
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  func_0x00010a23175c(param_1 + 0x40,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  return;
}



/* Entry: 10acdf0ec; end: 10ace05eb;  */

void FUN_10acdf0ec(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  char cVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  code *pcVar13;
  bool bVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *****ppppplVar17;
  long *****ppppplVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  long ****pppplVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  undefined4 uVar31;
  long ****pppplVar32;
  long *****ppppplVar33;
  undefined8 *puVar34;
  long lVar35;
  long *plVar36;
  long *plVar37;
  undefined8 uVar38;
  double dVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  long ****pppplStack_6a0;
  long ****pppplStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 *puStack_660;
  long *plStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined4 uStack_614;
  long ****pppplStack_610;
  long ****pppplStack_608;
  long ****pppplStack_600;
  long lStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  long *plStack_5c8;
  long ****pppplStack_5c0;
  long ****pppplStack_5b8;
  undefined8 uStack_5b0;
  long lStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined8 uStack_540;
  long *plStack_538;
  long *plStack_4a8;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3b8;
  long lStack_3b0;
  long *plStack_348;
  char cStack_340;
  undefined8 uStack_330;
  undefined8 *puStack_328;
  long *plStack_320;
  ulong uStack_318;
  ulong uStack_310;
  undefined4 uStack_308;
  undefined8 uStack_2c8;
  long *plStack_218;
  long lStack_158;
  long lStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_128;
  long lStack_120;
  long *plStack_b8;
  char cStack_b0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = (undefined8 *)0xd8;
  __Znwm();
  puVar15[1] = 0;
  *puVar15 = 0;
  puVar15[3] = 0;
  puVar15[2] = 0;
  puVar15[5] = 0;
  puVar15[4] = 0;
  puVar15[7] = 0;
  puVar15[6] = 0;
  puVar15[9] = 0;
  puVar15[8] = 0;
  puVar15[0xb] = 0;
  puVar15[10] = 0;
  puVar15[0xf] = 0;
  puVar15[0xe] = 0;
  puVar15[0x11] = 0;
  puVar15[0x10] = 0;
  puVar15[0x13] = 0;
  puVar15[0x12] = 0;
  puVar15[0x15] = 0;
  puVar15[0x14] = 0;
  puVar15[0x17] = 0;
  puVar15[0x16] = 0;
  puVar15[0x19] = 0;
  puVar15[0x18] = 0;
  puVar15[0xd] = 0;
  puVar15[0xc] = 0;
  puVar15[0x1a] = 0;
  *puVar15 = &PTR_DAT_110c6d560;
  *(undefined8 *)((long)puVar15 + 0xb1) = 0;
  *(undefined8 *)((long)puVar15 + 0xa9) = 0;
  plVar36 = *(long **)(param_3 + 8);
  if (plVar36 != (long *)0x0) {
    plVar22 = plVar36 + 1;
    do {
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar14) {
        *plVar22 = *plVar22 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  if ((*(byte *)(param_5 + 0x400) & 1) == 0) goto LAB_10ace0378;
  plVar22 = (long *)(param_1 + 0x50);
  lVar20 = *plVar22;
  if ((lVar20 == 0) && (*(int *)(param_5 + 0x300) == 0)) {
    puVar34 = (undefined8 *)0x0;
LAB_10acdfe6c:
    *puVar15 = &PTR_DAT_110c6d560;
    FUN_10a22ffb4(puVar15 + 0xe);
    FUN_10a22ffb4(puVar15 + 0xc);
    __ZdlPv(puVar15);
    if (plVar36 != (long *)0x0) {
      plVar22 = plVar36 + 1;
      do {
        lVar20 = *plVar22;
        cVar9 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar14) {
          *plVar22 = lVar20 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar36 + 0x10))(plVar36);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar36);
      }
    }
    plVar36 = *(long **)(param_4 + 0x88);
    *(undefined8 **)(param_4 + 0x88) = puVar34;
    if (plVar36 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
        return;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
                    /* WARNING: Could not recover jumptable at 0x00010acdff0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar36 + 8))();
      return;
    }
    ___stack_chk_fail();
  }
  else {
    plVar26 = (long *)(param_1 + 0x40);
    if ((*plVar26 != *(long *)(param_5 + 0x308)) ||
       (((*(char *)(param_1 + 0x88) != '\x01' ||
         (*(int *)(param_1 + 0x80) != *(int *)(param_2 + 0x10))) ||
        (*(int *)(param_1 + 0x84) != *(int *)(param_2 + 0x14))))) {
      FUN_10acdf064(param_1);
      FUN_10a52a0d0(plVar26,param_5 + 0x308);
      uVar21 = *(undefined8 *)(param_2 + 0x10);
      if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
        *(undefined1 *)(param_1 + 0x88) = 1;
      }
      *(undefined8 *)(param_1 + 0x80) = uVar21;
      lVar20 = *(long *)(param_1 + 0x50);
    }
    if (lVar20 == 0) {
      iVar40 = *(int *)(param_5 + 0x3c0);
      if (*(long *)(param_1 + 0x70) != 0) {
        plVar37 = *(long **)(param_1 + 0x78);
        if (plVar37 != (long *)0x0) {
          plVar19 = plVar37 + 1;
          do {
            cVar9 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar14) {
              *plVar19 = *plVar19 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          do {
            lVar20 = *plVar19;
            cVar9 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar14) {
              *plVar19 = lVar20 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar20 == 0) {
            bVar14 = false;
            goto LAB_10ace0328;
          }
        }
LAB_10ace0260:
        uStack_330 = CONCAT44(uStack_330._4_4_,0x1e);
        puStack_328 = *(undefined8 **)(param_1 + 0x70);
        plStack_320 = *(long **)(param_1 + 0x78);
        if (plStack_320 != (long *)0x0) {
          plVar37 = plStack_320 + 1;
          do {
            cVar9 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar14) {
              *plVar37 = *plVar37 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        bVar14 = iVar40 == 1;
        uStack_308 = 1;
        if (bVar14) {
          uStack_308 = 2;
        }
        uStack_310 = -(ulong)((long)((ulong)bVar14 << 0x3f) < 0) & 0x3f91df46a2529d39;
        uStack_318 = -(ulong)((long)((ulong)CONCAT14(bVar14,(uint)bVar14) << 0x3f) < 0) &
                     0x34000000000000 ^ 0x4014000000000000;
        uVar21 = 0x150;
        __Znwm(0x150);
        func_0x0001094317a4();
        FUN_10aceeff8(plVar22,uVar21);
        plVar37 = plStack_320;
        if (plStack_320 != (long *)0x0) {
          plVar19 = plStack_320 + 1;
          do {
            lVar20 = *plVar19;
            cVar9 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar14) {
              *plVar19 = lVar20 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plStack_320 + 0x10))(plStack_320);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar37);
          }
        }
        goto LAB_10acdf25c;
      }
      if (((*(byte *)(param_1 + 0x68) & 1) == 0) && (*(long *)(param_1 + 0x58) != 0)) {
        lVar20 = param_1 + 0x18;
        func_0x00010a505604();
        if ((int)lVar20 != 0) {
          __ZNSt3__16chrono12steady_clock3nowEv();
          *(long *)(param_1 + 0x18) = lVar20;
          uVar24 = (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3) *
                   -0x5555555555555555;
          if (uVar24 < (ulong)(long)*(int *)(param_1 + 0x38) ||
              uVar24 - (long)*(int *)(param_1 + 0x38) == 0) goto LAB_10ace0378;
          *(undefined1 *)(param_1 + 0x68) = 1;
          puVar34 = *(undefined8 **)(param_1 + 0x58);
          ppppplVar17 = (long *****)0x38;
          __Znwm();
          pppplStack_600 = (long ****)0x8000000000000038;
          pppplStack_608 = (long ****)0x32;
          *(undefined2 *)(ppppplVar17 + 6) = 0x4c45;
          ppppplVar17[1] = (long ****)0x5441434f4c4f435f;
          *ppppplVar17 = (long ****)0x45524f43534e454c;
          ppppplVar17[3] = (long ****)0x5f474e49444c4955;
          ppppplVar17[2] = (long ****)0x425f50414d5f4445;
          ppppplVar17[5] = (long ****)0x444f4d5f4e4f4954;
          ppppplVar17[4] = (long ****)0x41544e454d474553;
          *(undefined1 *)((long)ppppplVar17 + 0x32) = 0;
          pppplStack_610 = (long ****)ppppplVar17;
          FUN_10a4d898c(&pppplStack_5c0,*puVar34,&pppplStack_610);
          puVar34 = (undefined8 *)((ulong)&pppplStack_5c0 | 8);
          pppplStack_5b8 = (long ****)0x0;
          uStack_5b0 = (long *****)0x0;
          ppppplVar18 = *(long ******)(param_1 + 0x10);
          if (ppppplVar18 != (long *****)0x0) {
            __ZNSt3__119__shared_weak_count4lockEv();
            if (ppppplVar18 == (long *****)0x0) {
              *puVar34 = 0;
              puVar34[1] = 0;
            }
            else {
              pppplStack_5b8 = *(long *****)(param_1 + 8);
              ppppplVar33 = ppppplVar18 + 2;
              do {
                cVar9 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(ppppplVar33,0x10);
                if (bVar14) {
                  *ppppplVar33 = (long ****)((long)*ppppplVar33 + 1);
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              ppppplVar33 = ppppplVar18 + 1;
              do {
                pppplVar32 = *ppppplVar33;
                cVar9 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(ppppplVar33,0x10);
                if (bVar14) {
                  *ppppplVar33 = (long ****)((long)pppplVar32 + -1);
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              uStack_5b0 = ppppplVar18;
              if (pppplVar32 == (long ****)0x0) {
                (*(code *)(*ppppplVar18)[2])(ppppplVar18);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar18);
              }
            }
          }
          puVar16 = (undefined8 *)0x80;
          __Znwm();
          *puVar16 = FUN_10acf0c18;
          puVar16[1] = FUN_10acf0ec0;
          func_0x0001092ba17c(puVar16 + 2);
          pppplVar32 = pppplStack_5c0;
          plVar37 = (long *)puVar16[7];
          if (plVar37 != (long *)0x0) {
            plVar19 = plVar37 + 1;
            do {
              cVar9 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar14) {
                *plVar19 = *plVar19 + 4;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          pppplStack_5c0 = (long ****)0x0;
          puVar16[10] = pppplStack_5b8;
          puVar16[9] = pppplVar32;
          *puVar34 = 0;
          puVar34[1] = 0;
          puVar16[0xb] = uStack_5b0;
          puVar16[0xc] = &PTR_PTR_1132fed50;
          *(undefined1 *)(puVar16 + 0xd) = 0;
          *(undefined1 *)(puVar16 + 0xf) = 0;
          puVar34 = puVar16 + 0xc;
          func_0x0001092ba064(puVar34,puVar16);
          if (((ulong)puVar34 & 1) == 0) {
            FUN_10aceafec(puVar16 + 0xe,puVar16 + 9);
            puVar16[0xc] = puVar16[0xe];
            plVar19 = (long *)(puVar16[0xe] + 8);
            do {
              cVar9 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar14) {
                *plVar19 = *plVar19 + 4;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (((uint)*(undefined8 *)(puVar16[0xc] + 0x10) >> 1 & 1) == 0) {
              *(undefined1 *)(puVar16 + 0xf) = 1;
              lVar20 = puVar16[0xc];
              plVar19 = (long *)(lVar20 + 0x10);
              plVar25 = (long *)puVar16[3];
              do {
                lVar28 = *plVar19;
                if (lVar28 == 0) {
                  cVar9 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar14) {
                    *plVar19 = 1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                  bVar14 = cVar9 == '\0';
                }
                else {
                  bVar14 = false;
                  ClearExclusiveLocal();
                }
                if (bVar14) {
                  uStack_330 = 0;
                  puStack_328 = puVar16;
                  plStack_320 = plVar25;
                  func_0x000109d1b588(lVar20 + 0x18,&uStack_330);
                  *(undefined8 *)(lVar20 + 0x10) = 0;
                  goto LAB_10ace0170;
                }
              } while (((uint)lVar28 >> 1 & 1) == 0);
            }
            plVar19 = (long *)puVar16[0xc];
            if (((uint)*(undefined8 *)(puVar16[0xc] + 0x10) >> 5 & 1) != 0) {
              func_0x0001092af97c(plVar19 + 0x12);
              goto LAB_10ace0378;
            }
            if (plVar19 != (long *)0x0) {
              puVar1 = (ulong *)(plVar19 + 1);
              do {
                uVar24 = *puVar1;
                cVar9 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar14) {
                  *puVar1 = uVar24 - 4;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if ((uVar24 & 0x1fffffffc) == 4) {
                do {
                  uVar24 = *puVar1;
                  cVar9 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar14) {
                    *puVar1 = uVar24 - 1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (uVar24 - 1 == 0) {
                  (**(code **)(*plVar19 + 8))();
                }
              }
            }
            plVar19 = (long *)puVar16[0xe];
            if (plVar19 != (long *)0x0) {
              puVar1 = (ulong *)(plVar19 + 1);
              do {
                uVar24 = *puVar1;
                cVar9 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar14) {
                  *puVar1 = uVar24 - 4;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if ((uVar24 & 0x1fffffffc) == 4) {
                do {
                  uVar24 = *puVar1;
                  cVar9 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar14) {
                    *puVar1 = uVar24 - 1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (uVar24 - 1 == 0) {
                  (**(code **)(*plVar19 + 8))();
                }
              }
            }
            func_0x0001092ba100(puVar16 + 2);
            if (puVar16[0xb] != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            plVar19 = (long *)puVar16[9];
            if (plVar19 != (long *)0x0) {
              puVar1 = (ulong *)(plVar19 + 1);
              do {
                uVar24 = *puVar1;
                cVar9 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar14) {
                  *puVar1 = uVar24 - 4;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if ((uVar24 & 0x1fffffffc) == 4) {
                do {
                  uVar24 = *puVar1;
                  cVar9 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar14) {
                    *puVar1 = uVar24 - 1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (uVar24 - 1 == 0) {
                  (**(code **)(*plVar19 + 8))();
                }
              }
            }
            func_0x000109d1a1d0(puVar16 + 2);
            __ZdlPv(puVar16);
          }
LAB_10ace0170:
          if (plVar37 != (long *)0x0) {
            puVar1 = (ulong *)(plVar37 + 1);
            do {
              uVar24 = *puVar1;
              cVar9 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar14) {
                *puVar1 = uVar24 - 4;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if ((uVar24 & 0x1fffffffc) == 4) {
              do {
                uVar24 = *puVar1;
                cVar9 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar14) {
                  *puVar1 = uVar24 - 1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (uVar24 - 1 == 0) {
                (**(code **)(*plVar37 + 8))(plVar37);
              }
            }
          }
          if (uStack_5b0 != (long *****)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if ((long *****)pppplStack_5c0 != (long *****)0x0) {
            ppppplVar18 = (long *****)(pppplStack_5c0 + 1);
            do {
              pppplVar32 = *ppppplVar18;
              cVar9 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(ppppplVar18,0x10);
              if (bVar14) {
                *ppppplVar18 = (long ****)((long)pppplVar32 + -4);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (((ulong)pppplVar32 & 0x1fffffffc) == 4) {
              do {
                pppplVar32 = *ppppplVar18;
                cVar9 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(ppppplVar18,0x10);
                if (bVar14) {
                  *ppppplVar18 = (long ****)((long)pppplVar32 + -1);
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if ((long ****)((long)pppplVar32 + -1) == (long ****)0x0) {
                (*(code *)(*pppplStack_5c0)[1])();
              }
            }
          }
          if ((long)pppplStack_600 < 0) {
            __ZdlPv(ppppplVar17);
          }
          FUN_10a505688(param_1 + 0x18);
        }
      }
      lVar20 = *(long *)(param_1 + 0x70);
      plVar37 = *(long **)(param_1 + 0x78);
      bVar14 = lVar20 == 0;
      if (plVar37 == (long *)0x0) {
LAB_10ace025c:
        if (lVar20 != 0) goto LAB_10ace0260;
      }
      else {
        plVar19 = plVar37 + 1;
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar10) {
            *plVar19 = *plVar19 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        do {
          lVar28 = *plVar19;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar10) {
            *plVar19 = lVar28 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar28 != 0) goto LAB_10ace025c;
LAB_10ace0328:
        (**(code **)(*plVar37 + 0x10))(plVar37);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar37);
        if (!bVar14) goto LAB_10ace0260;
      }
      bVar14 = false;
      uVar31 = 2;
    }
    else {
LAB_10acdf25c:
      bVar14 = true;
      uVar31 = 1;
    }
    puVar34 = (undefined8 *)0xd8;
    __Znwm();
    puVar34[0x1a] = 0;
    puVar34[0x17] = 0;
    puVar34[0x16] = 0;
    puVar34[0x19] = 0;
    puVar34[0x18] = 0;
    puVar34[0x13] = 0;
    puVar34[0x12] = 0;
    puVar34[0x15] = 0;
    puVar34[0x14] = 0;
    puVar34[0xf] = 0;
    puVar34[0xe] = 0;
    puVar34[0x11] = 0;
    puVar34[0x10] = 0;
    puVar34[9] = 0;
    puVar34[8] = 0;
    puVar34[0xb] = 0;
    puVar34[10] = 0;
    puVar34[5] = 0;
    puVar34[4] = 0;
    puVar34[7] = 0;
    puVar34[6] = 0;
    puVar34[1] = 0;
    *puVar34 = 0;
    puVar34[3] = 0;
    puVar34[2] = 0;
    puVar34[0xd] = 0;
    puVar34[0xc] = 0;
    *puVar34 = &PTR_DAT_110c6d560;
    *(undefined8 *)((long)puVar34 + 0xb1) = 0;
    *(undefined8 *)((long)puVar34 + 0xa9) = 0;
    FUN_10a52a0d0(puVar34 + 0xc,param_5 + 0x308);
    *(undefined4 *)((long)puVar34 + 0xc) = uVar31;
    if (!bVar14) goto LAB_10acdfe6c;
    uStack_614 = 0;
    plStack_5c8 = *(long **)(param_2 + 0x10);
    uVar31 = *(undefined4 *)(param_2 + 0x24);
    uStack_6e0 = (long ****)CONCAT44(7,uVar31);
    pppplStack_5c0 = (long ****)&uStack_6e0;
    lVar20 = param_1 + 0x90;
    FUN_10a505794(lVar20,&uStack_6e0,&UNK_10dd5b8f9,&pppplStack_5c0,&pppplStack_610);
    plVar37 = (long *)(lVar20 + 0x18);
    puVar16 = (undefined8 *)*plVar37;
    if (puVar16 != (undefined8 *)0x0) {
LAB_10acdf530:
      plVar37 = *(long **)(lVar20 + 0x20);
      if (plVar37 != (long *)0x0) {
        plVar19 = plVar37 + 1;
        do {
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar14) {
            *plVar19 = *plVar19 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      puStack_660 = puVar16;
      plStack_658 = plVar37;
      (**(code **)*puVar16)(&pppplStack_6a0,puVar16,param_2,&uStack_614,&plStack_5c8);
      if (plVar37 != (long *)0x0) {
        plVar19 = plVar37 + 1;
        do {
          lVar20 = *plVar19;
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar14) {
            *plVar19 = lVar20 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar37 + 0x10))(plVar37);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar37);
        }
      }
      if (*(int *)(param_5 + 0x3c0) == 1) {
        uVar21 = *(undefined8 *)(param_4 + 0xe8);
      }
      else {
        uVar21 = 0;
      }
      uVar8 = *(undefined1 *)(*(long *)(param_4 + 0x218) + 0x14);
      uStack_578 = (undefined4)*(undefined8 *)(param_4 + 0x1d0);
      uStack_574 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x1d0) >> 0x20);
      uStack_580 = (undefined4)*(undefined8 *)(param_4 + 0x1c8);
      uStack_57c = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x1c8) >> 0x20);
      uStack_568 = (undefined4)*(undefined8 *)(param_4 + 0x1e0);
      uStack_564 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x1e0) >> 0x20);
      uStack_570 = (undefined4)*(undefined8 *)(param_4 + 0x1d8);
      uStack_56c = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x1d8) >> 0x20);
      uStack_558 = (undefined4)*(undefined8 *)(param_4 + 0x1f0);
      uStack_560 = (undefined4)*(undefined8 *)(param_4 + 0x1e8);
      uStack_55c = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x1e8) >> 0x20);
      uStack_54c = (undefined4)*(undefined8 *)(param_4 + 0x1fc);
      uStack_548 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x1fc) >> 0x20);
      uStack_554 = (undefined4)*(undefined8 *)(param_4 + 500);
      uStack_550 = (undefined4)((ulong)*(undefined8 *)(param_4 + 500) >> 0x20);
      lStack_5a8 = *(long *)(param_4 + 0x1a0);
      uStack_5b0 = *(long ******)(param_4 + 0x198);
      pppplStack_5b8 = pppplStack_698;
      pppplStack_5c0 = pppplStack_6a0;
      uVar38 = *(undefined8 *)(param_4 + 0x20);
      pppplStack_6a0 = (long ****)0x0;
      pppplStack_698 = (long ****)0x0;
      uStack_598._0_4_ = (undefined4)*(undefined8 *)(param_4 + 0x1b0);
      uStack_598._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x1b0) >> 0x20);
      uStack_5a0._0_4_ = (undefined4)*(undefined8 *)(param_4 + 0x1a8);
      uStack_5a0._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x1a8) >> 0x20);
      uStack_588 = (undefined4)*(undefined8 *)(param_4 + 0x1c0);
      uStack_584 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x1c0) >> 0x20);
      uStack_590 = (undefined4)*(undefined8 *)(param_4 + 0x1b8);
      uStack_58c = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x1b8) >> 0x20);
      uStack_540 = *(undefined8 *)(param_4 + 0x208);
      plStack_538 = *(long **)(param_4 + 0x210);
      if (plStack_538 != (long *)0x0) {
        plVar37 = plStack_538 + 1;
        do {
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar14) {
            *plVar37 = *plVar37 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      lVar20 = param_5 + 800;
      if (*(char *)(param_5 + 0x3b0) == '\0') {
        lVar20 = 0;
      }
      FUN_10a4caea0(&uStack_330,uVar38,uVar8,&pppplStack_5c0,*(undefined8 *)(param_4 + 0xa8),
                    *(undefined8 *)(param_4 + 0xd0),uVar21,lVar20);
      plVar37 = plStack_538;
      if (plStack_538 != (long *)0x0) {
        plVar19 = plStack_538 + 1;
        do {
          lVar20 = *plVar19;
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar14) {
            *plVar19 = lVar20 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_538 + 0x10))(plStack_538);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar37);
        }
      }
      pppplVar32 = pppplStack_5b8;
      if ((long *****)pppplStack_5b8 != (long *****)0x0) {
        ppppplVar17 = (long *****)(pppplStack_5b8 + 1);
        do {
          pppplVar23 = *ppppplVar17;
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(ppppplVar17,0x10);
          if (bVar14) {
            *ppppplVar17 = (long ****)((long)pppplVar23 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (pppplVar23 == (long ****)0x0) {
          (*(code *)(*pppplStack_5b8)[2])(pppplStack_5b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar32);
        }
      }
      pppplVar32 = pppplStack_698;
      if ((long *****)pppplStack_698 != (long *****)0x0) {
        ppppplVar17 = (long *****)(pppplStack_698 + 1);
        do {
          pppplVar23 = *ppppplVar17;
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(ppppplVar17,0x10);
          if (bVar14) {
            *ppppplVar17 = (long ****)((long)pppplVar23 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (pppplVar23 == (long ****)0x0) {
          (*(code *)(*pppplStack_698)[2])(pppplStack_698);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar32);
        }
      }
      lVar20 = *plVar22;
      FUN_10a4cc3b8(&pppplStack_5c0,&uStack_330);
      func_0x000109431d4c(lVar20,&pppplStack_5c0);
      if ((cStack_340 == '\x01') && (plStack_348 != (long *)0x0)) {
        plVar37 = plStack_348 + 1;
        do {
          lVar20 = *plVar37;
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar14) {
            *plVar37 = lVar20 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_348 + 0x10))(plStack_348);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_348);
        }
      }
      if (lStack_3b8 != 0) {
        lStack_3b0 = lStack_3b8;
        __ZdlPv();
      }
      if (lStack_3d0 != 0) {
        lStack_3c8 = lStack_3d0;
        __ZdlPv();
      }
      if (lStack_3e8 != 0) {
        lStack_3e0 = lStack_3e8;
        __ZdlPv();
      }
      if (plStack_4a8 != (long *)0x0) {
        plVar37 = plStack_4a8 + 1;
        do {
          lVar20 = *plVar37;
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar14) {
            *plVar37 = lVar20 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_4a8);
        }
      }
      _free(CONCAT44(uStack_554,uStack_558));
      if ((*(byte *)(param_1 + 0x88) & 1) == 0) goto LAB_10ace0378;
      iVar40 = *(int *)(param_4 + 0x1a0);
      iVar41 = *(int *)(param_4 + 0x19c);
      iVar42 = *(int *)(param_1 + 0x80);
      iVar43 = *(int *)(param_1 + 0x84);
      FUN_10a4cb5a0(&pppplStack_5c0,(undefined8 *)(param_4 + 0x198));
      plStack_658 = (long *)CONCAT44(uStack_590,uStack_598._4_4_);
      puStack_660 = (undefined8 *)CONCAT44((undefined4)uStack_598,uStack_5a0._4_4_);
      uStack_648 = CONCAT44(uStack_580,uStack_584);
      uStack_650 = CONCAT44(uStack_588,uStack_58c);
      uStack_638 = CONCAT44(uStack_570,uStack_574);
      uStack_640 = CONCAT44(uStack_578,uStack_57c);
      uStack_628 = CONCAT44(uStack_560,uStack_564);
      uStack_630 = CONCAT44(uStack_568,uStack_56c);
      plVar37 = (long *)CONCAT44(uStack_544,uStack_548);
      if (plVar37 != (long *)0x0) {
        plVar19 = plVar37 + 1;
        do {
          lVar20 = *plVar19;
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar14) {
            *plVar19 = lVar20 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar37 + 0x10))(plVar37);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar37);
        }
      }
      lVar20 = *plVar22;
      pppplStack_5b8 = (long ****)0x0;
      pppplStack_5c0 = (long ****)0x0;
      lStack_5a8 = 0;
      uStack_5b0 = (long *****)0x0;
      uStack_598._0_4_ = 0;
      uStack_598._4_4_ = 0;
      uStack_598 = (long *)0x0;
      uStack_5a0._0_4_ = 0;
      uStack_5a0._4_4_ = 0;
      plVar37 = *(long **)(lVar20 + 0x68);
      plVar19 = *(long **)(lVar20 + 0x70);
      if (plVar37 != plVar19) {
        plVar25 = (long *)0x0;
        uStack_598 = (long *)0x0;
        do {
          lVar28 = *plVar37;
          lVar35 = CONCAT44(((float)iVar40 / (float)iVar43) * (float)(double)plVar37[3],
                            ((float)iVar41 / (float)iVar42) * (float)(double)plVar37[2]);
          if (plVar25 < uStack_598) {
            plVar30 = plVar25 + 2;
            *plVar25 = lVar28;
            plVar25[1] = lVar35;
          }
          else {
            lVar29 = (long)plVar25 - lStack_5a8;
            uVar24 = (lVar29 >> 4) + 1;
            if (uVar24 >> 0x3c != 0) {
              FUN_10a5036f8();
              goto LAB_10ace0378;
            }
            uVar27 = (long)uStack_598 - lStack_5a8 >> 3;
            if (uVar27 <= uVar24) {
              uVar27 = uVar24;
            }
            if (0x7fffffffffffffef < (ulong)((long)uStack_598 - lStack_5a8)) {
              uVar27 = 0xfffffffffffffff;
            }
            plVar25 = &lStack_5a8;
            FUN_10a50370c();
            plVar2 = (long *)((long)plVar25 + lVar29);
            plVar25 = plVar25 + uVar27 * 2;
            *plVar2 = lVar28;
            plVar2[1] = lVar35;
            plVar30 = plVar2 + 2;
            lVar35 = (long)plVar2 - (CONCAT44(uStack_5a0._4_4_,(undefined4)uStack_5a0) - lStack_5a8)
            ;
            _memcpy(lVar35);
            lVar28 = lStack_5a8;
            lStack_5a8 = lVar35;
            uStack_598._0_4_ = SUB84(plVar25,0);
            uStack_598._4_4_ = (undefined4)((ulong)plVar25 >> 0x20);
            uStack_598 = plVar25;
            if (lVar28 != 0) {
              uStack_5a0 = plVar30;
              __ZdlPv();
            }
          }
          uStack_5a0._0_4_ = SUB84(plVar30,0);
          uStack_5a0._4_4_ = (undefined4)((ulong)plVar30 >> 0x20);
          plVar37 = plVar37 + 4;
          plVar25 = plVar30;
        } while (plVar37 != plVar19);
      }
      puVar16 = *(undefined8 **)(lVar20 + 0x50);
      puVar7 = *(undefined8 **)(lVar20 + 0x58);
      if (puVar16 != puVar7) {
        do {
          dVar11 = (double)puVar16[1];
          dVar12 = (double)puVar16[2];
          dVar39 = (double)puVar16[3];
          pppplVar32 = (long ****)*puVar16;
          if (pppplStack_5b8 < uStack_5b0) {
            *pppplStack_5b8 = (long ***)pppplVar32;
            pppplStack_5b8[1] = (long ***)CONCAT44((float)dVar12,(float)dVar11);
            *(float *)(pppplStack_5b8 + 2) = (float)dVar39;
            ppppplVar17 = (long *****)(pppplStack_5b8 + 3);
          }
          else {
            lVar20 = (long)pppplStack_5b8 - (long)pppplStack_5c0;
            uVar24 = (lVar20 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar24) {
              FUN_10a5036a0();
              goto LAB_10ace0378;
            }
            lVar28 = (long)uStack_5b0 - (long)pppplStack_5c0 >> 3;
            uVar27 = lVar28 * 0x5555555555555556;
            if (uVar27 < uVar24 || uVar27 - uVar24 == 0) {
              uVar27 = uVar24;
            }
            if (0x555555555555554 < (ulong)(lVar28 * -0x5555555555555555)) {
              uVar27 = 0xaaaaaaaaaaaaaaa;
            }
            ppppplVar18 = &pppplStack_5c0;
            FUN_10a5036b4();
            puVar3 = (undefined8 *)((long)ppppplVar18 + lVar20);
            *puVar3 = pppplVar32;
            puVar3[1] = (long ****)CONCAT44((float)dVar12,(float)dVar11);
            *(float *)(puVar3 + 2) = (float)dVar39;
            ppppplVar17 = (long *****)(puVar3 + 3);
            ppppplVar33 = (long *****)((long)puVar3 - ((long)pppplStack_5b8 - (long)pppplStack_5c0))
            ;
            _memcpy(ppppplVar33);
            pppplVar32 = pppplStack_5c0;
            pppplStack_5c0 = (long ****)ppppplVar33;
            uStack_5b0 = ppppplVar18 + uVar27 * 3;
            if ((long *****)pppplVar32 != (long *****)0x0) {
              pppplStack_5b8 = (long ****)ppppplVar17;
              __ZdlPv();
            }
          }
          pppplStack_5b8 = (long ****)ppppplVar17;
          puVar16 = puVar16 + 4;
        } while (puVar16 != puVar7);
      }
      bVar14 = false;
      uVar24 = 0;
      do {
        uVar27 = 0;
        ppuVar4 = &puStack_660 + uVar24 * 2;
        do {
          iVar40 = (int)uVar27;
          ppuVar6 = ppuVar4;
          if (iVar40 == 1) {
            ppuVar6 = (undefined8 **)((ulong)ppuVar4 | 4);
          }
          ppuVar5 = (undefined8 **)((ulong)ppuVar4 | 8);
          if (iVar40 != 2) {
            ppuVar5 = ppuVar6;
          }
          ppuVar6 = (undefined8 **)((ulong)ppuVar4 | 0xc);
          if (iVar40 != 3) {
            ppuVar6 = ppuVar5;
          }
          fVar44 = 1.0;
          if (uVar24 != uVar27) {
            fVar44 = 0.0;
          }
          if (1e-06 < ABS(*(float *)ppuVar6 - fVar44)) {
            if (!bVar14 && pppplStack_5b8 != pppplStack_5c0) {
              ppppplVar17 = (long *****)pppplStack_5c0;
              do {
                fVar44 = *(float *)(ppppplVar17 + 1);
                fVar45 = *(float *)((long)ppppplVar17 + 0xc);
                fVar46 = *(float *)(ppppplVar17 + 2);
                ppppplVar17[1] =
                     (long ****)
                     CONCAT44((float)((ulong)puStack_660 >> 0x20) * fVar44 +
                              (float)((ulong)uStack_650 >> 0x20) * fVar45 +
                              (float)((ulong)uStack_630 >> 0x20) +
                              (float)((ulong)uStack_640 >> 0x20) * fVar46,
                              SUB84(puStack_660,0) * fVar44 + (float)uStack_650 * fVar45 +
                              (float)uStack_630 + (float)uStack_640 * fVar46);
                *(float *)(ppppplVar17 + 2) =
                     plStack_658._0_4_ * fVar44 + (float)uStack_648 * fVar45 +
                     (float)uStack_628 + (float)uStack_638 * fVar46;
                ppppplVar17 = ppppplVar17 + 3;
              } while (ppppplVar17 != (long *****)pppplStack_5b8);
            }
            goto LAB_10acdfb50;
          }
          uVar27 = uVar27 + 1;
        } while (uVar27 != 4);
        uVar27 = uVar24 + 1;
        bVar14 = 2 < uVar24;
        uVar24 = uVar27;
      } while (uVar27 != 4);
LAB_10acdfb50:
      lVar20 = puVar34[0x10];
      if (lVar20 != 0) {
        puVar34[0x11] = lVar20;
        __ZdlPv();
        puVar34[0x10] = 0;
        puVar34[0x11] = 0;
        puVar34[0x12] = 0;
      }
      lVar20 = puVar34[0x13];
      puVar34[0x10] = pppplStack_5c0;
      puVar34[0x12] = uStack_5b0;
      puVar34[0x11] = pppplStack_5b8;
      pppplStack_5b8 = (long ****)0x0;
      uStack_5b0 = (long *****)0x0;
      pppplStack_5c0 = (long ****)0x0;
      if (lVar20 != 0) {
        puVar34[0x14] = lVar20;
        __ZdlPv();
        puVar34[0x13] = 0;
        puVar34[0x14] = 0;
        puVar34[0x15] = 0;
      }
      puVar34[0x14] = CONCAT44(uStack_5a0._4_4_,(undefined4)uStack_5a0);
      puVar34[0x13] = lStack_5a8;
      puVar34[0x15] = uStack_598;
      uStack_5a0._0_4_ = 0;
      uStack_5a0._4_4_ = 0;
      uStack_598._0_4_ = 0;
      uStack_598._4_4_ = 0;
      lStack_5a8 = 0;
      if (pppplStack_5c0 != (long ****)0x0) {
        pppplStack_5b8 = pppplStack_5c0;
        __ZdlPv();
      }
      lVar35 = *plVar22;
      lVar28 = *(long *)(lVar35 + 0x30);
      lVar20 = 0;
      if (lVar28 != 0) {
        lVar20 = *(long *)(lVar28 + 0x10) - *(long *)(lVar28 + 8) >> 3;
      }
      puVar34[2] = lVar20;
      pppplStack_6a0 = *(long *****)(param_4 + 0x1bc);
      pppplStack_698 = *(long *****)(param_4 + 0x1c4);
      uStack_688 = *(undefined8 *)(param_4 + 0x1d4);
      uStack_690 = *(undefined8 *)(param_4 + 0x1cc);
      uStack_680 = *(undefined8 *)(param_4 + 0x1dc);
      uStack_678 = *(undefined8 *)(param_4 + 0x1e4);
      uStack_668 = *(undefined8 *)(param_4 + 500);
      uStack_670 = *(undefined8 *)(param_4 + 0x1ec);
      func_0x00010937f874(&pppplStack_610,lVar35 + 0x80);
      pppplStack_5b8 = pppplStack_608;
      pppplStack_5c0 = pppplStack_610;
      lStack_5a8 = lStack_5f8;
      uStack_5b0 = (long *****)pppplStack_600;
      uStack_598._0_4_ = (undefined4)uStack_5e8;
      uStack_598._4_4_ = (undefined4)((ulong)uStack_5e8 >> 0x20);
      uStack_5a0._0_4_ = (undefined4)uStack_5f0;
      uStack_5a0._4_4_ = (undefined4)((ulong)uStack_5f0 >> 0x20);
      uStack_588 = (undefined4)uStack_5d8;
      uStack_584 = (undefined4)((ulong)uStack_5d8 >> 0x20);
      uStack_590 = (undefined4)uStack_5e0;
      uStack_58c = (undefined4)((ulong)uStack_5e0 >> 0x20);
      func_0x000109519fd0(&uStack_6e0,&pppplStack_6a0,&pppplStack_5c0);
      puVar34[4] = uStack_6d8;
      puVar34[3] = uStack_6e0;
      puVar34[6] = uStack_6c8;
      puVar34[5] = uStack_6d0;
      puVar34[8] = uStack_6b8;
      puVar34[7] = uStack_6c0;
      puVar34[10] = uStack_6a8;
      puVar34[9] = uStack_6b0;
      if ((*(byte *)(puVar34 + 0xb) & 1) == 0) {
        *(undefined1 *)(puVar34 + 0xb) = 1;
      }
      if (*(int *)(param_5 + 0x300) != 1) {
        pppplStack_610 = *(long *****)(param_5 + 0x3c8);
        func_0x000109431b6c(&uStack_6e0,*plVar22,1);
        pppplStack_5c0 = (long ****)0x0;
        pppplStack_5b8 = (long ****)0x0;
        if ((*plVar26 == 0) || (uStack_6e0 == (long ****)0x0)) {
          FUN_10acdefd0(&pppplStack_5c0,&uStack_6e0);
        }
        else {
          func_0x000109494bb0(&plStack_5c8);
          FUN_10acdefd0(&pppplStack_5c0,&plStack_5c8);
          if (plStack_5c8 != (long *)0x0) {
            (**(code **)(*plStack_5c8 + 0x18))();
          }
          func_0x000109494d5c(&plStack_5c8,pppplStack_5c0,&pppplStack_610,1);
          FUN_10acdefd0(&pppplStack_5c0,&plStack_5c8);
          if (plStack_5c8 != (long *)0x0) {
            (**(code **)(*plStack_5c8 + 0x18))();
          }
        }
        pppplVar32 = uStack_6e0;
        uStack_6e0 = (long ****)0x0;
        if (pppplVar32 != (long ****)0x0) {
          (*(code *)(*pppplVar32)[3])();
        }
        func_0x00010a23175c(puVar34 + 0xe,&pppplStack_5c0);
        pppplVar32 = pppplStack_5b8;
        if ((long *****)pppplStack_5b8 != (long *****)0x0) {
          ppppplVar17 = (long *****)(pppplStack_5b8 + 1);
          do {
            pppplVar23 = *ppppplVar17;
            cVar9 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(ppppplVar17,0x10);
            if (bVar14) {
              *ppppplVar17 = (long ****)((long)pppplVar23 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (pppplVar23 == (long ****)0x0) {
            (*(code *)(*pppplStack_5b8)[2])(pppplStack_5b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar32);
          }
        }
        if ((undefined8 *)puVar34[0xe] == (undefined8 *)0x0) {
          puVar34[2] = 0;
        }
        else {
          (*(code *)**(undefined8 **)puVar34[0xe])(&pppplStack_5c0);
          puVar34[2] = (long)pppplStack_5b8 - (long)pppplStack_5c0 >> 3;
          if ((long *****)pppplStack_5c0 != (long *****)0x0) {
            pppplStack_5b8 = pppplStack_5c0;
            __ZdlPv();
          }
        }
        FUN_10aceeff8(plVar22,0);
      }
      if ((cStack_b0 == '\x01') && (plStack_b8 != (long *)0x0)) {
        plVar22 = plStack_b8 + 1;
        do {
          lVar20 = *plVar22;
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar14) {
            *plVar22 = lVar20 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
        }
      }
      if (lStack_128 != 0) {
        lStack_120 = lStack_128;
        __ZdlPv();
      }
      if (lStack_140 != 0) {
        lStack_138 = lStack_140;
        __ZdlPv();
      }
      if (lStack_158 != 0) {
        lStack_150 = lStack_158;
        __ZdlPv();
      }
      if (plStack_218 != (long *)0x0) {
        plVar22 = plStack_218 + 1;
        do {
          lVar20 = *plVar22;
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar14) {
            *plVar22 = lVar20 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_218 + 0x10))(plStack_218);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_218);
        }
      }
      _free(uStack_2c8);
      goto LAB_10acdfe6c;
    }
    FUN_10a1b498c(&pppplStack_5c0,uVar31,7);
    func_0x00010a343394(plVar37,&pppplStack_5c0);
    pppplVar32 = pppplStack_5b8;
    if ((long *****)pppplStack_5b8 != (long *****)0x0) {
      ppppplVar17 = (long *****)(pppplStack_5b8 + 1);
      do {
        pppplVar23 = *ppppplVar17;
        cVar9 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(ppppplVar17,0x10);
        if (bVar14) {
          *ppppplVar17 = (long ****)((long)pppplVar23 + -1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (pppplVar23 == (long ****)0x0) {
        (*(code *)(*pppplStack_5b8)[2])(pppplStack_5b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar32);
      }
    }
    lVar28 = *plVar37;
    FUN_10a0ee900(&pppplStack_5c0,&UNK_10f65ce9b,0x27);
    pppplStack_608 = (long ****)(long)uStack_5b0._7_1_;
    if ((long)pppplStack_608 < 0) {
      pppplStack_610 = pppplStack_5c0;
      pppplStack_608 = pppplStack_5b8;
      if (lVar28 != 0) {
        __ZdlPv();
        goto LAB_10acdf524;
      }
    }
    else {
      pppplStack_610 = (long ****)&pppplStack_5c0;
      if (lVar28 != 0) {
LAB_10acdf524:
        puVar16 = (undefined8 *)*plVar37;
        goto LAB_10acdf530;
      }
    }
  }
  FUN_10a0edfc4(&pppplStack_610);
LAB_10ace0378:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10ace037c);
  (*pcVar13)();
}



/* Entry: 10ace05ec; end: 10ace060f;  */

undefined8 FUN_10ace05ec(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if ((*(byte *)(param_2 + 0x400) & 1) != 0) {
    uVar1 = 0xb20;
    if (*(char *)(param_2 + 0x3d1) == '\0') {
      uVar1 = 800;
    }
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ace0610);
  (*pcVar2)();
}



/* Entry: 10ace0610; end: 10ace06e7;  */

void FUN_10ace0610(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_24;
  
  uStack_38 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  lStack_58 = 0;
  uStack_40 = 0;
  uStack_34 = 0x1000000;
  uStack_30 = 0;
  uStack_24 = 0;
  FUN_10a051998(param_2 + 0x138,&lStack_58);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  *(undefined1 *)(param_2 + 0x4e3) = 1;
  if ((*(byte *)(param_2 + 0x199) & 1) == 0) {
    uVar2 = 0;
    *(undefined1 *)(param_2 + 0x199) = 1;
  }
  else {
    uVar2 = *(undefined1 *)(param_2 + 0x198);
  }
  *(undefined1 *)(param_2 + 0x198) = uVar2;
  if ((*(byte *)(param_2 + 0x400) & 1) != 0) {
    if (*(char *)(param_2 + 0x3d1) == '\x01') {
      lStack_58 = 0x4014000000000000;
      lStack_50 = 1000;
      uStack_48 = CONCAT71(uStack_48._1_7_,3);
      FUN_10a0378a8(param_2 + 0x278,&lStack_58);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ace06cc);
  (*pcVar1)();
}



/* Entry: 10ace06e8; end: 10ace06ef;  */

undefined8 * FUN_10ace06e8(long param_1,undefined8 *param_2)

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
  plVar5 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar7;
  *(undefined8 *)(param_1 + 0x58) = uVar6;
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
  return (undefined8 *)(param_1 + 0x58);
}



/* Entry: 10ace06f0; end: 10ace0763;  */

long * FUN_10ace06f0(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10ace0764; end: 10ace0773;  */

void FUN_10ace0764(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_10aceeff8(param_1 + 0x50,0);
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  func_0x00010a23175c(param_1 + 0x40,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  return;
}



/* Entry: 10ace0774; end: 10ace08bf;  */

void FUN_10ace0774(undefined8 param_1)

{
  undefined4 uStack_8c;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6a1ead;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x200000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010ace0868(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6a1ec3;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 0;
  FUN_10ace08c0(param_1,&puStack_88,&uStack_8c);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6a1ecd;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 1;
  FUN_10ace08c0(param_1,&puStack_88,&uStack_8c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10ace08c0; end: 10ace0917;  */

ulong FUN_10ace08c0(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10acef0e4(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10ace0918; end: 10ace0a67;  */

void FUN_10ace0918(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  long lStack_30;
  long lStack_28;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    ppuStack_90 = &PTR_DAT_110af0078;
    uStack_88 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_3f = 0;
    uStack_47 = 0;
    uStack_40 = 0;
    lStack_28 = (long)(int)param_3;
    lStack_30 = param_2;
    func_0x000107c30348(&ppuStack_90,&lStack_30);
    puVar2 = (undefined8 *)0x120;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_DAT_110af6bf0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0x13] = 0;
    puVar2[0x12] = 0;
    puVar2[0x15] = 0;
    puVar2[0x14] = 0;
    puVar2[0x17] = 0;
    puVar2[0x16] = 0;
    puVar2[0x19] = 0;
    puVar2[0x18] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1d] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1f] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x21] = 0;
    puVar2[0x20] = 0;
    puVar2[0x23] = 0;
    puVar2[0x22] = 0;
    puVar4 = puVar2 + 4;
    puVar2[5] = 0;
    *puVar4 = 0;
    puVar2[9] = 0x3ff0000000000000;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xe] = 0x3ff0000000000000;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0x3ff0000000000000;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0x3ff0000000000000;
    puVar2[0x18] = 0x3ff0000000000000;
    *puVar4 = &PTR_DAT_110af6b38;
    *param_1 = puVar4;
    param_1[1] = puVar2;
    func_0x000109456e5c(&lStack_30,&ppuStack_90);
    lVar1 = lStack_30;
    lStack_30 = 0;
    lVar3 = puVar2[0x22];
    puVar2[0x22] = lVar1;
    if (lVar3 != 0) {
      FUN_10a7d2a4c(puVar2 + 0x22);
      lVar1 = lStack_30;
      lStack_30 = 0;
      if (lVar1 != 0) {
        FUN_10a7d2a4c(&lStack_30);
      }
    }
    *(undefined4 *)(puVar2 + 5) = *(undefined4 *)puVar2[0x22];
    func_0x000109343234(&ppuStack_90);
  }
  return;
}



/* Entry: 10ace0a68; end: 10ace0acb;  */

undefined8 * FUN_10ace0a68(undefined8 *param_1,undefined8 *param_2)

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
  *param_2 = 0;
  param_2[1] = 0;
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



/* Entry: 10ace0acc; end: 10ace1243;  */

void FUN_10ace0acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long *param_5)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  long *plStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  char cStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  plVar7 = param_5;
  (**(code **)(*param_5 + 0x38))(param_5,&PTR_DAT_110c6d020,0);
  *(int *)(param_4 + 0xc) = (int)plVar7;
  plVar7 = param_5;
  (**(code **)(*param_5 + 0xd0))(param_5,&PTR_DAT_110c6c838,0);
  *(ulong *)(param_4 + 0x10) = (ulong)plVar7 & 0xffffffff;
  plVar7 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c6c858);
  if ((int)plVar7 == 0) {
    if (*(char *)(param_4 + 0x58) == '\x01') {
      *(undefined1 *)(param_4 + 0x58) = 0;
    }
  }
  else {
    (**(code **)(*param_5 + 0x1a8))(&uStack_c0,param_5,&PTR_DAT_110c6c858);
    *(long **)(param_4 + 0x20) = plStack_b8;
    *(undefined8 *)(param_4 + 0x18) = uStack_c0;
    *(undefined8 *)(param_4 + 0x30) = uStack_a8;
    *(ulong *)(param_4 + 0x28) = CONCAT71(uStack_af,cStack_b0);
    *(undefined8 *)(param_4 + 0x40) = uStack_98;
    *(undefined8 *)(param_4 + 0x38) = uStack_a0;
    *(undefined8 *)(param_4 + 0x50) = uStack_88;
    *(undefined8 *)(param_4 + 0x48) = uStack_90;
    param_1 = uStack_a0;
    param_2 = uStack_90;
    if ((*(byte *)(param_4 + 0x58) & 1) == 0) {
      *(undefined1 *)(param_4 + 0x58) = 1;
    }
  }
  plVar7 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c6c878);
  if ((int)plVar7 == 0) {
    uStack_c0 = 0;
    plStack_b8 = (long *)0x0;
    func_0x00010a23175c(param_4 + 0x60,&uStack_c0);
    if (plStack_b8 != (long *)0x0) {
      plVar7 = plStack_b8 + 1;
      do {
        lVar11 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_10ace0c60;
    }
  }
  else {
    (**(code **)(*param_5 + 0x1d8))(&uStack_c0,param_5,&PTR_DAT_110c6c878);
    uVar1 = uStack_c0;
    plVar7 = plStack_b8;
    if (cStack_b0 == '\0') {
      plVar7 = (long *)0x0;
      uVar1 = 0;
    }
    FUN_10ace0918(&uStack_c0,uVar1,plVar7);
    FUN_10ace0a68(param_4 + 0x60,&uStack_c0);
    if (plStack_b8 != (long *)0x0) {
      plVar7 = plStack_b8 + 1;
      do {
        lVar11 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_10ace0c60:
      plVar7 = plStack_b8;
      if (lVar11 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  plVar7 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c6c898);
  if ((int)plVar7 == 0) {
    uStack_c0 = 0;
    plStack_b8 = (long *)0x0;
    func_0x00010a23175c(param_4 + 0x70,&uStack_c0);
    if (plStack_b8 == (long *)0x0) goto LAB_10ace0d44;
    plVar7 = plStack_b8 + 1;
    do {
      lVar11 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    (**(code **)(*param_5 + 0x1d8))(&uStack_c0,param_5,&PTR_DAT_110c6c898);
    uVar1 = uStack_c0;
    plVar7 = plStack_b8;
    if (cStack_b0 == '\0') {
      plVar7 = (long *)0x0;
      uVar1 = 0;
    }
    FUN_10ace0918(&uStack_c0,uVar1,plVar7);
    FUN_10ace0a68(param_4 + 0x70,&uStack_c0);
    if (plStack_b8 == (long *)0x0) goto LAB_10ace0d44;
    plVar7 = plStack_b8 + 1;
    do {
      lVar11 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = plStack_b8;
  if (lVar11 == 0) {
    (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
LAB_10ace0d44:
  plVar16 = (long *)(param_4 + 0x80);
  *(long *)(param_4 + 0x88) = *plVar16;
  plVar7 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c6c8b8);
  if ((int)plVar7 != 0) {
    (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c6c8b8);
    plVar7 = param_5;
    (**(code **)(*param_5 + 0x208))();
    lVar11 = *(long *)(param_4 + 0x80);
    if ((ulong)((*(long *)(param_4 + 0x90) - lVar11 >> 3) * -0x5555555555555555) <
        ((ulong)plVar7 & 0xffffffff)) {
      lVar12 = *(long *)(param_4 + 0x88);
      plVar8 = plVar16;
      uVar18 = (ulong)plVar7 & 0xffffffff;
      FUN_10a5036b4();
      lVar11 = (long)plVar8 + (lVar12 - lVar11);
      lVar17 = lVar11 - (*(long *)(param_4 + 0x88) - *(long *)(param_4 + 0x80));
      _memcpy(lVar17);
      lVar12 = *(long *)(param_4 + 0x80);
      *(long *)(param_4 + 0x80) = lVar17;
      *(long *)(param_4 + 0x88) = lVar11;
      *(long **)(param_4 + 0x90) = plVar8 + uVar18 * 3;
      if (lVar12 != 0) {
        __ZdlPv();
      }
    }
    if ((int)plVar7 != 0) {
      uVar18 = 0;
      do {
        (**(code **)(*param_5 + 0x218))(param_5,uVar18);
        plVar8 = param_5;
        (**(code **)(*param_5 + 0x20))(param_5,&PTR_DAT_110c6d040);
        plVar9 = param_5;
        ppuVar10 = &PTR_DAT_110c6c8d8;
        (**(code **)(*param_5 + 0xe8))();
        puVar2 = *(ulong **)(param_4 + 0x88);
        uVar23 = (undefined4)param_2;
        uVar24 = (undefined4)param_1;
        uVar22 = (undefined4)param_3;
        if (puVar2 < *(ulong **)(param_4 + 0x90)) {
          *puVar2 = (ulong)plVar8;
          *(undefined4 *)(puVar2 + 1) = uVar24;
          *(undefined4 *)((long)puVar2 + 0xc) = uVar23;
          puVar21 = puVar2 + 3;
          *(undefined4 *)(puVar2 + 2) = uVar22;
        }
        else {
          lVar11 = (long)puVar2 - *plVar16;
          uVar19 = (lVar11 >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar19) {
            FUN_10a5036a0();
            goto LAB_10ace1240;
          }
          lVar12 = (long)*(ulong **)(param_4 + 0x90) - *plVar16 >> 3;
          uVar14 = lVar12 * 0x5555555555555556;
          if (uVar14 < uVar19 || uVar14 - uVar19 == 0) {
            uVar14 = uVar19;
          }
          if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
            uVar14 = 0xaaaaaaaaaaaaaaa;
          }
          plVar9 = plVar16;
          FUN_10a5036b4();
          puVar2 = (ulong *)((long)plVar9 + lVar11);
          *puVar2 = (ulong)plVar8;
          *(undefined4 *)(puVar2 + 1) = uVar24;
          *(undefined4 *)((long)puVar2 + 0xc) = uVar23;
          *(undefined4 *)(puVar2 + 2) = uVar22;
          puVar21 = puVar2 + 3;
          lVar12 = (long)puVar2 - (*(long *)(param_4 + 0x88) - *(long *)(param_4 + 0x80));
          _memcpy(lVar12);
          lVar11 = *(long *)(param_4 + 0x80);
          *(long *)(param_4 + 0x80) = lVar12;
          *(ulong **)(param_4 + 0x88) = puVar21;
          *(long **)(param_4 + 0x90) = plVar9 + uVar14 * 3;
          if (lVar11 != 0) {
            __ZdlPv();
          }
        }
        *(ulong **)(param_4 + 0x88) = puVar21;
        (**(code **)(*param_5 + 0x220))(param_5);
        uVar18 = uVar18 + 1;
      } while (((ulong)plVar7 & 0xffffffff) != uVar18);
    }
    (**(code **)(*param_5 + 0x220))(param_5);
  }
  plVar16 = (long *)(param_4 + 0x98);
  *(long *)(param_4 + 0xa0) = *plVar16;
  plVar7 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c6c8f8);
  if ((int)plVar7 != 0) {
    (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c6c8f8);
    plVar7 = param_5;
    (**(code **)(*param_5 + 0x208))();
    uVar18 = (ulong)plVar7 & 0xffffffff;
    lVar11 = *(long *)(param_4 + 0x98);
    if ((ulong)(*(long *)(param_4 + 0xa8) - lVar11 >> 4) < uVar18) {
      lVar12 = *(long *)(param_4 + 0xa0);
      plVar8 = plVar16;
      uVar19 = uVar18;
      FUN_10a50370c();
      lVar11 = (long)plVar8 + (lVar12 - lVar11);
      lVar17 = lVar11 - (*(long *)(param_4 + 0xa0) - *(long *)(param_4 + 0x98));
      _memcpy(lVar17);
      lVar12 = *(long *)(param_4 + 0x98);
      *(long *)(param_4 + 0x98) = lVar17;
      *(long *)(param_4 + 0xa0) = lVar11;
      *(long **)(param_4 + 0xa8) = plVar8 + uVar19 * 2;
      if (lVar12 != 0) {
        __ZdlPv();
      }
    }
    if ((int)plVar7 != 0) {
      uVar19 = 0;
      do {
        (**(code **)(*param_5 + 0x218))(param_5,uVar19);
        plVar7 = param_5;
        (**(code **)(*param_5 + 0x20))(param_5,&PTR_DAT_110c6d040);
        plVar9 = param_5;
        ppuVar10 = &PTR_DAT_110c6c8d8;
        (**(code **)(*param_5 + 0xd8))();
        puVar2 = *(ulong **)(param_4 + 0xa0);
        uVar22 = (undefined4)param_2;
        uVar23 = (undefined4)param_1;
        if (puVar2 < *(ulong **)(param_4 + 0xa8)) {
          *puVar2 = (ulong)plVar7;
          puVar21 = puVar2 + 2;
          *(undefined4 *)(puVar2 + 1) = uVar23;
          *(undefined4 *)((long)puVar2 + 0xc) = uVar22;
        }
        else {
          lVar11 = (long)puVar2 - *plVar16;
          uVar14 = (lVar11 >> 4) + 1;
          if (uVar14 >> 0x3c != 0) {
LAB_10ace1240:
            FUN_10a5036f8();
            pcStack_c8 = FUN_10ace1244;
            plStack_e0 = param_5;
            lStack_d8 = param_4;
            puStack_d0 = &stack0xfffffffffffffff0;
            (**(code **)(*ppuVar10 + 0x40))
                      (ppuVar10,&PTR_DAT_110c6d020,*(undefined4 *)((long)plVar9 + 0xc));
            (**(code **)(*ppuVar10 + 0x50))(ppuVar10,&PTR_DAT_110c6c838,(int)plVar9[2]);
            if ((char)plVar9[0xb] == '\x01') {
              (**(code **)(*ppuVar10 + 0xf0))(ppuVar10,&PTR_DAT_110c6c858,plVar9 + 3);
            }
            if (plVar9[0xc] != 0) {
              FUN_10ace14d8(ppuVar10,&PTR_DAT_110c6c878);
            }
            if (plVar9[0xe] != 0) {
              FUN_10ace14d8(ppuVar10,&PTR_DAT_110c6c898);
            }
            if (plVar9[0x10] != plVar9[0x11]) {
              (**(code **)(*ppuVar10 + 0x18))(ppuVar10,&PTR_DAT_110c6c8b8);
              puVar3 = (undefined8 *)plVar9[0x11];
              for (puVar20 = (undefined8 *)plVar9[0x10]; puVar20 != puVar3; puVar20 = puVar20 + 3) {
                (**(code **)(*ppuVar10 + 0x10))(ppuVar10);
                (**(code **)(*ppuVar10 + 0x58))(ppuVar10,&PTR_DAT_110c6d040,*puVar20);
                (**(code **)(*ppuVar10 + 0x80))(ppuVar10,&PTR_DAT_110c6c8d8,puVar20 + 1);
                (**(code **)(*ppuVar10 + 0x20))(ppuVar10);
              }
              (**(code **)(*ppuVar10 + 0x20))(ppuVar10);
            }
            if (plVar9[0x13] != plVar9[0x14]) {
              (**(code **)(*ppuVar10 + 0x18))(ppuVar10,&PTR_DAT_110c6c8f8);
              puVar3 = (undefined8 *)plVar9[0x14];
              for (puVar20 = (undefined8 *)plVar9[0x13]; puVar20 != puVar3; puVar20 = puVar20 + 2) {
                (**(code **)(*ppuVar10 + 0x10))(ppuVar10);
                (**(code **)(*ppuVar10 + 0x58))(ppuVar10,&PTR_DAT_110c6d040,*puVar20);
                (**(code **)(*ppuVar10 + 0x78))(ppuVar10,&PTR_DAT_110c6c8d8,puVar20 + 1);
                (**(code **)(*ppuVar10 + 0x20))(ppuVar10);
              }
              (**(code **)(*ppuVar10 + 0x20))(ppuVar10);
            }
            (**(code **)(*ppuVar10 + 0x40))(ppuVar10,&PTR_DAT_110c6c918,(int)plVar9[0x16]);
            (**(code **)(*ppuVar10 + 0x40))
                      (ppuVar10,&PTR_DAT_110c6d060,*(undefined4 *)((long)plVar9 + 0xb4));
            if ((char)plVar9[0x1a] != '\x01') {
              return;
            }
            plStack_e0 = plVar9 + 0x17;
            lStack_d8 = (long)*(char *)((long)plVar9 + 0xcf);
            if (lStack_d8 < 0) {
              plStack_e0 = (long *)*plStack_e0;
              lStack_d8 = plVar9[0x18];
              if (lStack_d8 < 0) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10a00d7a8);
                (*pcVar6)();
              }
            }
            (**(code **)(*ppuVar10 + 0x30))(ppuVar10,&PTR_DAT_110c6c938,&plStack_e0);
            return;
          }
          uVar13 = (long)*(ulong **)(param_4 + 0xa8) - *plVar16;
          uVar15 = (long)uVar13 >> 3;
          if (uVar15 <= uVar14) {
            uVar15 = uVar14;
          }
          if (0x7fffffffffffffef < uVar13) {
            uVar15 = 0xfffffffffffffff;
          }
          plVar8 = plVar16;
          FUN_10a50370c();
          puVar2 = (ulong *)((long)plVar8 + lVar11);
          *puVar2 = (ulong)plVar7;
          *(undefined4 *)(puVar2 + 1) = uVar23;
          *(undefined4 *)((long)puVar2 + 0xc) = uVar22;
          puVar21 = puVar2 + 2;
          lVar12 = (long)puVar2 - (*(long *)(param_4 + 0xa0) - *(long *)(param_4 + 0x98));
          _memcpy(lVar12);
          lVar11 = *(long *)(param_4 + 0x98);
          *(long *)(param_4 + 0x98) = lVar12;
          *(ulong **)(param_4 + 0xa0) = puVar21;
          *(long **)(param_4 + 0xa8) = plVar8 + uVar15 * 2;
          if (lVar11 != 0) {
            __ZdlPv();
          }
        }
        *(ulong **)(param_4 + 0xa0) = puVar21;
        (**(code **)(*param_5 + 0x220))(param_5);
        uVar19 = uVar19 + 1;
      } while (uVar18 != uVar19);
    }
    (**(code **)(*param_5 + 0x220))(param_5);
  }
  plVar7 = param_5;
  (**(code **)(*param_5 + 0x38))(param_5,&PTR_DAT_110c6c918,0);
  *(int *)(param_4 + 0xb0) = (int)plVar7;
  plVar7 = param_5;
  (**(code **)(*param_5 + 0x38))(param_5,&PTR_DAT_110c6d060,0);
  *(int *)(param_4 + 0xb4) = (int)plVar7;
  plVar7 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c6c938);
  if ((int)plVar7 == 0) {
    if (*(char *)(param_4 + 0xd0) == '\x01') {
      if (*(char *)(param_4 + 0xcf) < '\0') {
        __ZdlPv(*(undefined8 *)(param_4 + 0xb8));
      }
      *(undefined1 *)(param_4 + 0xd0) = 0;
    }
  }
  else {
    (**(code **)(*param_5 + 0xa0))(&uStack_c0,param_5,&PTR_DAT_110c6c938);
    if (*(char *)(param_4 + 0xd0) == '\x01') {
      if (*(char *)(param_4 + 0xcf) < '\0') {
        __ZdlPv(*(undefined8 *)(param_4 + 0xb8));
      }
      *(long **)(param_4 + 0xc0) = plStack_b8;
      *(undefined8 *)(param_4 + 0xb8) = uStack_c0;
      *(ulong *)(param_4 + 200) = CONCAT71(uStack_af,cStack_b0);
    }
    else {
      *(long **)(param_4 + 0xc0) = plStack_b8;
      *(undefined8 *)(param_4 + 0xb8) = uStack_c0;
      *(ulong *)(param_4 + 200) = CONCAT71(uStack_af,cStack_b0);
      *(undefined1 *)(param_4 + 0xd0) = 1;
    }
  }
  return;
}



/* Entry: 10ace1244; end: 10ace14d7;  */

void FUN_10ace1244(long param_1,long *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c6d020,*(undefined4 *)(param_1 + 0xc));
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c6c838,*(undefined4 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x58) == '\x01') {
    (**(code **)(*param_2 + 0xf0))(param_2,&PTR_DAT_110c6c858,param_1 + 0x18);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10ace14d8(param_2,&PTR_DAT_110c6c878);
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10ace14d8(param_2,&PTR_DAT_110c6c898);
  }
  if (*(long *)(param_1 + 0x80) != *(long *)(param_1 + 0x88)) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c6c8b8);
    puVar1 = *(undefined8 **)(param_1 + 0x88);
    for (puVar3 = *(undefined8 **)(param_1 + 0x80); puVar3 != puVar1; puVar3 = puVar3 + 3) {
      (**(code **)(*param_2 + 0x10))(param_2);
      (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c6d040,*puVar3);
      (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110c6c8d8,puVar3 + 1);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (*(long *)(param_1 + 0x98) != *(long *)(param_1 + 0xa0)) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c6c8f8);
    puVar1 = *(undefined8 **)(param_1 + 0xa0);
    for (puVar3 = *(undefined8 **)(param_1 + 0x98); puVar3 != puVar1; puVar3 = puVar3 + 2) {
      (**(code **)(*param_2 + 0x10))(param_2);
      (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c6d040,*puVar3);
      (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110c6c8d8,puVar3 + 1);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c6c918,*(undefined4 *)(param_1 + 0xb0));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c6d060,*(undefined4 *)(param_1 + 0xb4));
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    if ((*(char *)(param_1 + 0xcf) < '\0') && (*(long *)(param_1 + 0xc0) < 0)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a00d7a8);
      (*pcVar2)();
    }
    (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c6c938,&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 10ace14d8; end: 10ace1617;  */

void FUN_10ace14d8(long *param_1,undefined8 param_2,long param_3)

{
  undefined ****ppppuVar1;
  long lVar2;
  undefined ***pppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined8 uStack_47;
  undefined1 uStack_31;
  
  if ((param_3 == 0) || (*(long *)(param_3 + 0xf0) == 0)) {
    pppuStack_b0 = (undefined ***)0x0;
    lStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_98 = (undefined **)((ulong)ppuStack_98 & 0xffffffffffffff00);
    ppppuVar1 = (undefined ****)&ppuStack_98;
    lVar2 = 0;
  }
  else {
    ppuStack_98 = &PTR_DAT_110af0078;
    uStack_90 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_47 = 0;
    uStack_4f = 0;
    uStack_48 = 0;
    uStack_31 = 0;
    func_0x000109458d54(*(long *)(param_3 + 0xf0),&uStack_31,&ppuStack_98);
    lStack_a8 = 0;
    uStack_a0 = 0;
    pppuStack_b0 = (undefined ***)0x0;
    func_0x000107c30360(&ppuStack_98,&pppuStack_b0);
    func_0x000109343234(&ppuStack_98);
    ppuStack_98 = (undefined **)((ulong)ppuStack_98 & 0xffffffffffffff00);
    ppppuVar1 = (undefined ****)&ppuStack_98;
    if (uStack_a0 < 0) {
      lVar2 = lStack_a8;
      if (lStack_a8 != 0) {
        ppppuVar1 = (undefined ****)pppuStack_b0;
      }
    }
    else {
      if (uStack_a0._7_1_ != 0) {
        ppppuVar1 = &pppuStack_b0;
      }
      lVar2 = (long)(int)uStack_a0._7_1_;
    }
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_2,ppppuVar1,lVar2);
  if (uStack_a0 < 0) {
    __ZdlPv(pppuStack_b0);
  }
  return;
}



/* Entry: 10ace1618; end: 10ace1647;  */

undefined8 * FUN_10ace1618(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10ace1648; end: 10ace17b3;  */

void FUN_10ace1648(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_78 = 0x4ffffffff;
  uStack_80 = 0x4000000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f3ede63;
  puStack_70 = &UNK_10f6a1ede;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000141;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f3637f7;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a1ede;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000141;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ace17b4(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a1edf;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a1ede;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000141;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ace17b4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a1eeb;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a1ede;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000141;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ace17b4();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ace17b4; end: 10ace1857;  */

undefined8 * FUN_10ace17b4(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ace1858);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10ace1858; end: 10ace196f;  */

void FUN_10ace1858(undefined8 param_1)

{
  undefined4 uStack_9c;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a1ef4;
  uStack_78 = 0x4ffffffff;
  uStack_80 = 0x4000000064;
  puStack_70 = &UNK_10f6a1ede;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000141;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ace1970(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a1efd;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a1ede;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000141;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 0;
  FUN_10ace19c8(param_1,&puStack_98,&uStack_9c);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a1f04;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a1ede;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000141;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 1;
  FUN_10ace19c8(param_1,&puStack_98,&uStack_9c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10ace1970; end: 10ace19c7;  */

ulong FUN_10ace1970(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10ace19c8; end: 10ace1adb;  */

ulong FUN_10ace19c8(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10acef284(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10ace1adc; end: 10ace21ff;  */

void FUN_10ace1adc(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  ulong uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 auStack_138 [2];
  undefined4 *puStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  int iStack_11c;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  ulong uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  int *piStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_c0 = 0x42ff0000;
  iStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  iStack_b8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  piStack_80 = &iStack_b8;
  uStack_94 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  puStack_78 = &uStack_70;
  FUN_10a0edda0(param_2,&PTR_DAT_110c6c958,&uStack_c0);
  uStack_118 = CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
  if (CONCAT44(uStack_ac,uStack_b0) != 0) {
    uVar8 = (ulong)uStack_bc;
    if ((int)uStack_bc < 3) {
      lVar9 = (long)iStack_b4 * (long)iStack_b8;
    }
    else {
      lVar9 = 1;
      piVar11 = piStack_80;
      do {
        lVar9 = lVar9 * *piVar11;
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 1;
      } while (uVar8 != 0);
    }
    uStack_118 = CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
    if (lVar9 != 0) {
      uStack_120 = 0x2010000;
      uStack_118 = param_1 + 0x60;
      uStack_110 = 0;
      uStack_10c = 0;
      func_0x000109a41858(0x3f70101020000000,0,&uStack_c0,&uStack_120,5);
    }
  }
  if (lStack_88 != 0) {
    piVar11 = (int *)(lStack_88 + 0x14);
    do {
      iVar2 = *piVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar4) {
        *piVar11 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_c0);
    }
  }
  lStack_88 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  if (0 < (int)uStack_bc) {
    lVar9 = 0;
    do {
      piStack_80[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_bc);
  }
  if (puStack_78 != &uStack_70 && puStack_78 != (undefined8 *)0x0) {
    _free(puStack_78[-1]);
  }
  uStack_c0 = 0x42ff0000;
  iStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  iStack_b8 = 0;
  piStack_80 = &iStack_b8;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_94 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  puStack_78 = &uStack_70;
  FUN_10a0edda0(param_2,&PTR_DAT_110c6c978,&uStack_c0);
  if (CONCAT44(uStack_ac,uStack_b0) != 0) {
    uVar8 = (ulong)uStack_bc;
    if ((int)uStack_bc < 3) {
      lVar9 = (long)iStack_b4 * (long)iStack_b8;
    }
    else {
      lVar9 = 1;
      piVar11 = piStack_80;
      do {
        lVar9 = lVar9 * *piVar11;
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 1;
      } while (uVar8 != 0);
    }
    if (lVar9 != 0) {
      uStack_120 = 0x2010000;
      uStack_118._0_4_ = (undefined4)param_1;
      uStack_118._4_4_ = (undefined4)((ulong)param_1 >> 0x20);
      uStack_110 = 0;
      uStack_10c = 0;
      func_0x000109a41858(0x3fb99999a0000000,0,&uStack_c0,&uStack_120,5);
    }
  }
  if (lStack_88 != 0) {
    piVar11 = (int *)(lStack_88 + 0x14);
    do {
      iVar2 = *piVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar4) {
        *piVar11 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_c0);
    }
  }
  lStack_88 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  if (0 < (int)uStack_bc) {
    lVar9 = 0;
    do {
      piStack_80[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_bc);
  }
  if (puStack_78 != &uStack_70 && puStack_78 != (undefined8 *)0x0) {
    _free(puStack_78[-1]);
  }
  uStack_c0 = 0x42ff0000;
  iStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  iStack_b8 = 0;
  piStack_80 = &iStack_b8;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_94 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  puStack_78 = &uStack_70;
  FUN_10a0edda0(param_2,&PTR_DAT_110c6c998,&uStack_c0);
  if (CONCAT44(uStack_ac,uStack_b0) != 0) {
    uVar8 = (ulong)uStack_bc;
    if ((int)uStack_bc < 3) {
      lVar9 = (long)iStack_b4 * (long)iStack_b8;
    }
    else {
      lVar9 = 1;
      piVar11 = piStack_80;
      do {
        lVar9 = lVar9 * *piVar11;
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 1;
      } while (uVar8 != 0);
    }
    if (lVar9 != 0) {
      uStack_120 = 0x42ff0000;
      uStack_118._4_4_ = 0;
      uStack_110 = 0;
      iStack_11c = 0;
      uStack_118._0_4_ = 0;
      uVar8 = (ulong)&uStack_120 | 8;
      uStack_104 = 0;
      uStack_100 = 0;
      uStack_10c = 0;
      uStack_108 = 0;
      uStack_f4 = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      lStack_e8 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      auStack_138[0] = 0x2010000;
      uStack_128 = 0;
      puStack_130 = &uStack_120;
      uStack_e0 = uVar8;
      puStack_d8 = &uStack_d0;
      func_0x000109a41858(0x3ff0000000000000,0,&uStack_c0,auStack_138,0);
      plVar6 = param_2;
      (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c6c9b8);
      if ((int)plVar6 == 0) {
        uVar7 = 0;
      }
      else {
        plVar6 = param_2;
        (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c6c9b8);
        uVar5 = (uint)plVar6;
        uVar1 = uVar5;
        if (3 < uVar5) {
          uVar1 = 0;
        }
        uVar7 = 0;
        if (uVar5 < 0x100) {
          uVar7 = uVar1;
        }
      }
      puVar10 = (undefined8 *)((ulong)&uStack_120 | 4);
      uStack_198 = CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
      uStack_1a0 = CONCAT44(iStack_11c,uStack_120);
      uStack_188 = CONCAT44(uStack_104,uStack_108);
      uStack_190 = CONCAT44(uStack_10c,uStack_110);
      uStack_160 = (ulong)&uStack_1a0 | 8;
      uStack_178 = CONCAT44(uStack_f4,uStack_f8);
      uStack_180 = CONCAT44(uStack_fc,uStack_100);
      uStack_170 = CONCAT44(uStack_ec,uStack_f0);
      lStack_168 = lStack_e8;
      uStack_150 = 0;
      uStack_148 = 0;
      if (iStack_11c < 3) {
        uStack_150 = *puStack_d8;
        uStack_148 = puStack_d8[1];
        puStack_158 = &uStack_150;
      }
      else {
        uStack_160 = uStack_e0;
        puStack_158 = puStack_d8;
        uStack_e0 = uVar8;
        puStack_d8 = &uStack_d0;
      }
      uStack_120 = 0x42ff0000;
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      *(undefined8 *)((long)puVar10 + 0x34) = 0;
      *(undefined8 *)((long)puVar10 + 0x2c) = 0;
      FUN_10ace2200(param_1 + 0xc0,&uStack_1a0,uVar7 & 0xff);
      if (lStack_168 != 0) {
        piVar11 = (int *)(lStack_168 + 0x14);
        do {
          iVar2 = *piVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_1a0);
        }
      }
      lStack_168 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      if (0 < uStack_1a0._4_4_) {
        lVar9 = 0;
        do {
          *(undefined4 *)(uStack_160 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < uStack_1a0._4_4_);
      }
      if (puStack_158 != &uStack_150 && puStack_158 != (undefined8 *)0x0) {
        _free(puStack_158[-1]);
      }
      if (lStack_e8 != 0) {
        piVar11 = (int *)(lStack_e8 + 0x14);
        do {
          iVar2 = *piVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_120);
        }
      }
      lStack_e8 = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      if (0 < iStack_11c) {
        lVar9 = 0;
        do {
          *(undefined4 *)(uStack_e0 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iStack_11c);
      }
      if (puStack_d8 != &uStack_d0 && puStack_d8 != (undefined8 *)0x0) {
        _free(puStack_d8[-1]);
      }
    }
  }
  if (lStack_88 != 0) {
    piVar11 = (int *)(lStack_88 + 0x14);
    do {
      iVar2 = *piVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar4) {
        *piVar11 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_c0);
    }
  }
  lStack_88 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  if (0 < (int)uStack_bc) {
    lVar9 = 0;
    do {
      piStack_80[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_bc);
  }
  if (puStack_78 != &uStack_70 && puStack_78 != (undefined8 *)0x0) {
    _free(puStack_78[-1]);
  }
  FUN_10a0edda0(param_2,&PTR_s_rgb_110c6d080,param_1 + 0x220);
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c6c9d8);
  FUN_10a0ecdc0(param_1 + 0x128,param_2);
  (**(code **)(*param_2 + 0x220))(param_2);
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c6c9f8);
  if ((int)plVar6 != 0) {
    (**(code **)(*param_2 + 0x1a8))(&uStack_c0,param_2,&PTR_DAT_110c6c9f8);
    *(ulong *)(param_1 + 0x1b0) = CONCAT44(iStack_b4,iStack_b8);
    *(ulong *)(param_1 + 0x1a8) = CONCAT44(uStack_bc,uStack_c0);
    *(ulong *)(param_1 + 0x1c0) = CONCAT44(uStack_a4,uStack_a8);
    *(ulong *)(param_1 + 0x1b8) = CONCAT44(uStack_ac,uStack_b0);
    *(ulong *)(param_1 + 0x1d0) = CONCAT44(uStack_94,uStack_98);
    *(ulong *)(param_1 + 0x1c8) = CONCAT44(uStack_9c,uStack_a0);
    *(long *)(param_1 + 0x1e0) = lStack_88;
    *(ulong *)(param_1 + 0x1d8) = CONCAT44(uStack_8c,uStack_90);
    if ((*(byte *)(param_1 + 0x1e8) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x1e8) = 1;
    }
  }
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c6ca18);
  if ((int)plVar6 != 0) {
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c6ca18);
    *(int *)(param_1 + 0x1ec) = (int)plVar6;
    *(undefined1 *)(param_1 + 0x1f0) = 1;
  }
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c6ca38);
  (**(code **)(*(long *)(param_1 + 0x200) + 0x10))(param_1 + 0x200,param_2);
  (**(code **)(*param_2 + 0x220))(param_2);
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_s_source_110c6cad8,0);
  *(char *)(param_1 + 500) = (char)param_2;
  return;
}



/* Entry: 10ace2200; end: 10ace232f;  */

void FUN_10ace2200(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1[7] != 0) {
    piVar8 = (int *)(param_1[7] + 0x14);
    do {
      iVar3 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  if (0 < *(int *)((long)param_1 + 4)) {
    lVar4 = 0;
    lVar5 = param_1[8];
    do {
      *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 4));
  }
  piVar8 = (int *)((long)param_2 + 4);
  iVar3 = *piVar8;
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar9 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar9;
  puVar6 = (undefined8 *)param_1[9];
  puVar7 = param_1 + 10;
  if (puVar6 != puVar7) {
    if (puVar6 != (undefined8 *)0x0) {
      _free(puVar6[-1]);
      iVar3 = *piVar8;
    }
    param_1[8] = param_1 + 1;
    param_1[9] = puVar7;
    puVar6 = puVar7;
  }
  puVar7 = (undefined8 *)param_2[9];
  if (iVar3 < 3) {
    *puVar6 = *puVar7;
    puVar6[1] = puVar7[1];
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = puVar7;
    param_2[8] = param_2 + 1;
    param_2[9] = param_2 + 10;
  }
  *(undefined4 *)param_2 = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10ace2330; end: 10ace2803;  */

void FUN_10ace2330(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  undefined4 auStack_128 [2];
  undefined4 *puStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined4 *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined4 **ppuStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_b0 = 0x42ff0000;
  lStack_70 = (long)&uStack_ac + 4;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_84 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puStack_68 = &uStack_60;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar6 = (ulong)*(uint *)(param_1 + 100);
    if ((int)*(uint *)(param_1 + 100) < 3) {
      lVar7 = (long)*(int *)(param_1 + 0x6c) * (long)*(int *)(param_1 + 0x68);
    }
    else {
      lVar7 = 1;
      piVar8 = *(int **)(param_1 + 0xa0);
      do {
        lVar7 = lVar7 * *piVar8;
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 1;
      } while (uVar6 != 0);
    }
    if (lVar7 != 0) {
      uStack_110 = 0x2010000;
      puStack_108 = &uStack_b0;
      lStack_100 = 0;
      func_0x000109a41858(0x406fe00000000000,0,param_1 + 0x60,&uStack_110,0);
      FUN_10a0edce4(param_2,&PTR_DAT_110c6c958,&uStack_b0,0);
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar6 = (ulong)*(uint *)(param_1 + 4);
    if ((int)*(uint *)(param_1 + 4) < 3) {
      lVar7 = (long)*(int *)(param_1 + 0xc) * (long)*(int *)(param_1 + 8);
    }
    else {
      lVar7 = 1;
      piVar8 = *(int **)(param_1 + 0x40);
      do {
        lVar7 = lVar7 * *piVar8;
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 1;
      } while (uVar6 != 0);
    }
    if (lVar7 != 0) {
      uStack_110 = 0x2010000;
      puStack_108 = &uStack_b0;
      lStack_100 = 0;
      func_0x000109a41858((double)(*(float *)(param_1 + 0x1f8) * 10.0),0,param_1,&uStack_110,2);
      FUN_10a0edce4(param_2,&PTR_DAT_110c6c978,&uStack_b0,0);
    }
  }
  lVar7 = *(long *)(param_1 + 0xd0);
  if (lVar7 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc4);
    uVar6 = (ulong)uVar2;
    if ((int)uVar2 < 3) {
      lVar9 = (long)*(int *)(param_1 + 0xcc) * (long)*(int *)(param_1 + 200);
    }
    else {
      lVar9 = 1;
      piVar8 = *(int **)(param_1 + 0x100);
      do {
        lVar9 = lVar9 * *piVar8;
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 1;
      } while (uVar6 != 0);
    }
    if (lVar9 != 0) {
      uStack_110 = *(undefined4 *)(param_1 + 0xc0);
      ppuStack_d0 = &puStack_108;
      puStack_108 = *(undefined4 **)(param_1 + 200);
      uStack_f0 = *(undefined8 *)(param_1 + 0xe0);
      uStack_f8 = *(undefined8 *)(param_1 + 0xd8);
      uStack_e0 = *(undefined8 *)(param_1 + 0xf0);
      uStack_e8 = *(undefined8 *)(param_1 + 0xe8);
      lStack_d8 = *(long *)(param_1 + 0xf8);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uVar5 = uVar2;
      if (lStack_d8 != 0) {
        piVar8 = (int *)(lStack_d8 + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = *piVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar5 = *(uint *)(param_1 + 0xc4);
      }
      lStack_100 = lVar7;
      puStack_c8 = &uStack_c0;
      if ((int)uVar5 < 3) {
        uStack_c0 = **(undefined8 **)(param_1 + 0x108);
        uStack_b8 = (*(undefined8 **)(param_1 + 0x108))[1];
        uStack_10c = uVar2;
      }
      else {
        uStack_10c = 0;
        func_0x000109a84868(&uStack_110,param_1 + 0xc0);
      }
      auStack_128[0] = 0x2010000;
      puStack_120 = &uStack_b0;
      uStack_118 = 0;
      func_0x000109a41858(0x3ff0000000000000,0,&uStack_110,auStack_128,0);
      if (lStack_d8 != 0) {
        piVar8 = (int *)(lStack_d8 + 0x14);
        do {
          iVar1 = *piVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_110);
        }
      }
      lStack_d8 = 0;
      uStack_f8 = 0;
      lStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      if (0 < (int)uStack_10c) {
        lVar7 = 0;
        do {
          *(undefined4 *)((long)ppuStack_d0 + lVar7 * 4) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)uStack_10c);
      }
      if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
        _free(puStack_c8[-1]);
      }
      FUN_10a0edce4(param_2,&PTR_DAT_110c6c998,&uStack_b0,0);
      (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c6c9b8,*(undefined1 *)(param_1 + 0x120));
    }
  }
  FUN_10a0edce4(param_2,&PTR_s_rgb_110c6d080,param_1 + 0x220,1);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c6c9d8);
  FUN_10a0ed360(param_1 + 0x128,param_2);
  (**(code **)(*param_2 + 0x20))(param_2);
  if (*(char *)(param_1 + 0x1e8) == '\x01') {
    (**(code **)(*param_2 + 0xf0))(param_2,&PTR_DAT_110c6c9f8,param_1 + 0x1a8);
  }
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c6ca18,*(undefined4 *)(param_1 + 0x1ec));
  }
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c6ca38);
  (**(code **)(*(long *)(param_1 + 0x200) + 0x18))(param_1 + 0x200,param_2);
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x1f8),param_2,&PTR_s_scale_110c6d0a0);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_s_source_110c6cad8,*(undefined1 *)(param_1 + 500));
  if (lStack_78 != 0) {
    piVar8 = (int *)(lStack_78 + 0x14);
    do {
      iVar1 = *piVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_b0);
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  if (0 < (int)uStack_ac) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_70 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_ac);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  return;
}



/* Entry: 10ace2804; end: 10ace2b07;  */

void FUN_10ace2804(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined1 uVar4;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c6ca58);
  if ((int)plVar3 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c6ca58);
    FUN_10ace1adc(param_1,param_2);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c6ca78);
  if ((int)plVar3 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c6ca78);
    FUN_10ace1adc(param_1 + 0x298,param_2);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c6ca98);
  if ((int)plVar3 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c6ca98);
    FUN_10ace1adc(param_1,param_2);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c6cab8);
  if ((int)plVar3 == 0) {
    uVar4 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c6cab8);
    uVar2 = (uint)param_2;
    uVar1 = uVar2;
    if (2 < uVar2) {
      uVar1 = 0;
    }
    uVar4 = 0;
    if (uVar2 < 0x100) {
      uVar4 = (char)uVar1;
    }
  }
  *(undefined1 *)(param_1 + 0x530) = uVar4;
  return;
}



/* Entry: 10ace2b08; end: 10ace2bb7;  */

uint FUN_10ace2b08(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  
  plVar3 = *(long **)(param_1 + 0x498);
  if ((plVar3 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 == (long *)0x0))
  {
    return 0;
  }
  plVar4 = *(long **)(param_1 + 0x490);
  if (plVar4 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x68))();
    uVar6 = (uint)plVar4 >> 8 & 1;
  }
  plVar4 = plVar3 + 1;
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 != 0) {
    return uVar6;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
  return uVar6;
}



/* Entry: 10ace2bb8; end: 10ace2c63;  */

void FUN_10ace2bb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar6 = (code *)*param_1;
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_3;
  plStack_28 = param_4;
  (*pcVar6)(param_2,&uStack_30,param_5,param_6,param_1);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10ace2c64; end: 10ace341b;  */

byte FUN_10ace2c64(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  ulong *puVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined4 uStack_1b4;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 auStack_180 [2];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  long *aplStack_128 [3];
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 auStack_98 [3];
  undefined4 uStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar4 = *(byte *)(param_1 + 0x13);
  plVar10 = param_1;
  if ((bVar4 & 1) == 0) {
    FUN_10acdd07c(auStack_180,param_3);
    FUN_10a0ec6f0();
    uVar3 = *(undefined4 *)(&UNK_10df04730 + (ulong)((uint)param_3 & 3) * 4);
    uStack_1b4 = uVar3;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      if (param_2[1] == 0) goto LAB_10ace2d68;
      func_0x000107c3192c(&uStack_1d0,*param_2);
LAB_10ace2d04:
      FUN_10ad0279c(&plStack_110,&uStack_1d0);
      if (lStack_1c0 < 0) {
        __ZdlPv(uStack_1d0);
      }
      FUN_10ace51d0(param_1,auStack_180,&uStack_1b4,param_2);
      plVar15 = plStack_108;
      if (plStack_108 != (long *)0x0) {
        plVar10 = plStack_108 + 1;
        do {
          lVar11 = *plVar10;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = lVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_108 + 0x10))(plStack_108);
LAB_10ace31a0:
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
LAB_10ace31a8:
      _free(aplStack_128[0]);
      plVar10 = aplStack_128[0];
      goto LAB_10ace31b0;
    }
    if (*(char *)((long)param_2 + 0x17) != '\0') {
      uStack_1c8 = param_2[1];
      uStack_1d0 = *param_2;
      lStack_1c0 = param_2[2];
      goto LAB_10ace2d04;
    }
LAB_10ace2d68:
    if (((*(byte *)(param_1 + 9) & 1) != 0) || (param_1[7] == 0)) goto LAB_10ace31a8;
    plVar15 = (long *)param_1[1];
    if (plVar15 != (long *)0x0) {
      plVar10 = plVar15 + 2;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *plVar10 = *plVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar10 = param_1 + 2;
    func_0x00010a505604();
    if ((int)plVar10 == 0) {
LAB_10ace319c:
      if (plVar15 == (long *)0x0) goto LAB_10ace31a8;
      goto LAB_10ace31a0;
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    param_1[2] = (long)plVar10;
    uVar12 = (param_1[4] - param_1[3] >> 3) * -0x5555555555555555;
    if (uVar12 < (ulong)(long)(int)param_1[6] || uVar12 - (long)(int)param_1[6] == 0)
    goto LAB_10ace31f8;
    *(undefined1 *)(param_1 + 9) = 1;
    puVar17 = (undefined8 *)param_1[7];
    if (puVar17 == (undefined8 *)0x0) {
LAB_10ace3194:
      FUN_10a505688(param_1 + 2);
      goto LAB_10ace319c;
    }
    puVar8 = (undefined8 *)0x28;
    __Znwm();
    lStack_1a0 = -0x7fffffffffffffd8;
    uStack_1a8 = 0x26;
    puVar8[1] = 0x415f444c524f575f;
    *puVar8 = 0x45524f43534e454c;
    puVar8[3] = 0x4d524f4654414c50;
    puVar8[2] = 0x5f53534f52435f52;
    *(undefined8 *)((long)puVar8 + 0x1e) = 0x48545045445f4d52;
    *(undefined1 *)((long)puVar8 + 0x26) = 0;
    puStack_1b0 = puVar8;
    FUN_10a4d898c(&plStack_110,*puVar17,&puStack_1b0);
    lStack_100 = param_1[1];
    plStack_108 = (long *)*param_1;
    if (param_1[1] != 0) {
      plVar10 = (long *)(param_1[1] + 0x10);
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *plVar10 = *plVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_f0 = auStack_180[0];
    uStack_d8 = uStack_168;
    uStack_e0 = uStack_170;
    uStack_c8 = uStack_158;
    uStack_d0 = uStack_160;
    uStack_b8 = uStack_148;
    uStack_c0 = uStack_150;
    uStack_a8 = uStack_138;
    uStack_b0 = uStack_140;
    uStack_a0 = uStack_130;
    func_0x00010937da58(auStack_98,aplStack_128);
    puVar17 = (undefined8 *)0x108;
    uStack_80 = uVar3;
    __Znwm();
    *puVar17 = FUN_10acf12d4;
    puVar17[1] = FUN_10acf1584;
    func_0x0001092ba17c(puVar17 + 2);
    plVar10 = plStack_110;
    plVar16 = (long *)puVar17[7];
    if (plVar16 != (long *)0x0) {
      plVar1 = plVar16 + 1;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puVar17[0xe] = lStack_100;
    plStack_110 = (long *)0x0;
    puVar17[0xd] = plStack_108;
    puVar17[0xc] = plVar10;
    *(undefined8 *)((ulong)&plStack_110 | 8) = 0;
    ((undefined8 *)((ulong)&plStack_110 | 8))[1] = 0;
    puVar17[0x10] = uStack_f0;
    puVar17[0x13] = uStack_d8;
    puVar17[0x12] = uStack_e0;
    puVar17[0x15] = uStack_c8;
    puVar17[0x14] = uStack_d0;
    puVar17[0x17] = uStack_b8;
    puVar17[0x16] = uStack_c0;
    puVar17[0x19] = uStack_a8;
    puVar17[0x18] = uStack_b0;
    *(undefined4 *)(puVar17 + 0x1a) = uStack_a0;
    func_0x00010937da58(puVar17 + 0x1b,auStack_98);
    *(undefined4 *)(puVar17 + 0x1e) = uStack_80;
    puVar17[9] = &PTR_PTR_1132fed50;
    *(undefined1 *)(puVar17 + 10) = 0;
    *(undefined1 *)(puVar17 + 0x20) = 0;
    puVar9 = puVar17 + 9;
    func_0x0001092ba064(puVar9,puVar17);
    if (((ulong)puVar9 & 1) != 0) {
LAB_10ace30e0:
      if (plVar16 != (long *)0x0) {
        puVar2 = (ulong *)(plVar16 + 1);
        do {
          uVar12 = *puVar2;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar12 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar12 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar16 + 8))(plVar16);
          }
        }
      }
      _free(auStack_98[0]);
      if (lStack_100 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (plStack_110 != (long *)0x0) {
        puVar2 = (ulong *)(plStack_110 + 1);
        do {
          uVar12 = *puVar2;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar12 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar12 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plStack_110 + 8))();
          }
        }
      }
      if (lStack_1a0 < 0) {
        __ZdlPv(puVar8);
      }
      goto LAB_10ace3194;
    }
    FUN_10aced718(puVar17 + 0xb,puVar17 + 0xc);
    puVar17[9] = puVar17[0xb];
    plVar10 = (long *)(puVar17[0xb] + 8);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = *plVar10 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((uint)*(undefined8 *)(puVar17[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar17 + 0x20) = 1;
      lVar11 = puVar17[9];
      plVar10 = (long *)(lVar11 + 0x10);
      uVar13 = puVar17[3];
      do {
        lVar14 = *plVar10;
        if (lVar14 == 0) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar7 = cVar5 == '\0';
        }
        else {
          bVar7 = false;
          ClearExclusiveLocal();
        }
        if (bVar7) {
          uStack_198 = 0;
          puStack_190 = puVar17;
          uStack_188 = uVar13;
          func_0x000109d1b588(lVar11 + 0x18,&uStack_198);
          *(undefined8 *)(lVar11 + 0x10) = 0;
          goto LAB_10ace30e0;
        }
      } while (((uint)lVar14 >> 1 & 1) == 0);
    }
    plVar10 = (long *)puVar17[9];
    if (((uint)*(undefined8 *)(puVar17[9] + 0x10) >> 5 & 1) == 0) {
      if (plVar10 != (long *)0x0) {
        puVar2 = (ulong *)(plVar10 + 1);
        do {
          uVar12 = *puVar2;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar12 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar12 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      plVar10 = (long *)puVar17[0xb];
      if (plVar10 != (long *)0x0) {
        puVar2 = (ulong *)(plVar10 + 1);
        do {
          uVar12 = *puVar2;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar12 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar12 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar17 + 2);
      _free(puVar17[0x1b]);
      if (puVar17[0xe] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar10 = (long *)puVar17[0xc];
      if (plVar10 != (long *)0x0) {
        puVar2 = (ulong *)(plVar10 + 1);
        do {
          uVar12 = *puVar2;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar12 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar12 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar17 + 2);
      __ZdlPv(puVar17);
      goto LAB_10ace30e0;
    }
  }
  else {
LAB_10ace31b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return bVar4;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(plVar10 + 0x12);
LAB_10ace31f8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ace31fc);
  (*pcVar6)();
}



/* Entry: 10ace341c; end: 10ace4883;  */

void FUN_10ace341c(undefined8 ******param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  int param_5)

{
  undefined8 ******ppppppuVar1;
  undefined8 *****pppppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  undefined4 uVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  undefined8 ***pppuVar16;
  undefined8 ***pppuVar17;
  undefined4 uVar18;
  undefined8 ***pppuVar19;
  undefined8 ***pppuVar20;
  undefined8 ***pppuVar21;
  undefined8 ***pppuVar22;
  undefined8 ***pppuVar23;
  undefined8 ***pppuVar24;
  undefined8 ***pppuVar25;
  undefined8 ***pppuVar26;
  undefined8 ***pppuVar27;
  undefined8 ***pppuVar28;
  code *pcVar29;
  undefined8 ******ppppppuVar30;
  undefined8 *****pppppuVar31;
  long lVar32;
  ulong uVar33;
  undefined8 *****pppppuVar34;
  undefined8 ****ppppuVar35;
  undefined8 ****ppppuVar36;
  long *plVar37;
  long lVar38;
  long lStack_968;
  undefined8 ****ppppuStack_960;
  undefined8 ****ppppuStack_958;
  undefined8 ****ppppuStack_950;
  undefined8 *****pppppuStack_948;
  undefined8 ****ppppuStack_940;
  undefined8 ****ppppuStack_938;
  undefined1 auStack_930 [32];
  undefined8 ***pppuStack_910;
  undefined8 ***pppuStack_900;
  undefined8 ***pppuStack_8f0;
  undefined8 ***pppuStack_8e8;
  undefined8 ***pppuStack_8e0;
  undefined8 ***pppuStack_8d8;
  undefined8 ***pppuStack_8d0;
  undefined8 ***pppuStack_8c8;
  undefined8 ***pppuStack_8c0;
  undefined8 ***pppuStack_8b8;
  undefined4 uStack_8b0;
  undefined1 auStack_8a8 [24];
  undefined8 ***pppuStack_890;
  undefined8 ***pppuStack_888;
  undefined8 ***pppuStack_880;
  undefined8 ***pppuStack_878;
  undefined8 ***pppuStack_870;
  undefined8 ***pppuStack_868;
  undefined8 ***pppuStack_860;
  undefined8 ***pppuStack_850;
  undefined8 ***pppuStack_848;
  undefined8 ***pppuStack_840;
  undefined8 ***pppuStack_838;
  undefined8 ***pppuStack_830;
  undefined8 ***pppuStack_828;
  undefined8 ***pppuStack_820;
  undefined8 ***pppuStack_818;
  undefined8 ***pppuStack_810;
  undefined8 ***pppuStack_800;
  undefined8 ***pppuStack_7f8;
  undefined8 ***pppuStack_7f0;
  undefined8 ***pppuStack_7e8;
  undefined8 ***pppuStack_7e0;
  undefined8 ***pppuStack_7d8;
  undefined8 ***pppuStack_7d0;
  undefined8 ***pppuStack_7c8;
  undefined8 ***pppuStack_7c0;
  undefined8 ***pppuStack_7b8;
  undefined8 ***pppuStack_7b0;
  undefined8 ***pppuStack_7a8;
  undefined8 ***pppuStack_7a0;
  undefined8 ***pppuStack_790;
  undefined8 ***pppuStack_788;
  undefined8 ***pppuStack_780;
  undefined8 ***pppuStack_778;
  undefined8 ***pppuStack_770;
  undefined8 ***pppuStack_768;
  undefined8 ***pppuStack_760;
  undefined8 ***pppuStack_758;
  undefined8 ***pppuStack_750;
  undefined4 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 ***pppuStack_6f0;
  undefined8 ***pppuStack_6e0;
  undefined8 ***pppuStack_6d8;
  undefined8 ***pppuStack_6d0;
  undefined8 ***pppuStack_6c8;
  undefined8 ***pppuStack_6c0;
  undefined2 uStack_6b8;
  undefined6 uStack_6b6;
  undefined2 uStack_6b0;
  undefined8 uStack_6ae;
  undefined8 ***pppuStack_6a0;
  undefined8 ***pppuStack_698;
  undefined1 uStack_690;
  undefined8 *****pppppuStack_680;
  undefined8 *****pppppuStack_678;
  undefined8 *****pppppuStack_670;
  undefined8 ****ppppuStack_660;
  undefined8 ****ppppuStack_658;
  undefined **ppuStack_650;
  undefined8 ***pppuStack_648;
  undefined8 uStack_640;
  undefined4 uStack_638;
  undefined8 ***pppuStack_630;
  undefined8 ***pppuStack_620;
  undefined8 ***pppuStack_610;
  undefined8 ***pppuStack_608;
  undefined8 ***pppuStack_600;
  undefined8 ***pppuStack_5f8;
  undefined8 ***pppuStack_5f0;
  undefined8 ***pppuStack_5e8;
  undefined8 ***pppuStack_5e0;
  undefined8 ***pppuStack_5d8;
  undefined4 uStack_5d0;
  undefined8 ***pppuStack_5c8;
  undefined8 ***pppuStack_5c0;
  undefined8 ***pppuStack_5b0;
  undefined8 ***pppuStack_5a8;
  undefined8 ***pppuStack_5a0;
  undefined8 ***pppuStack_598;
  undefined8 ***pppuStack_590;
  undefined8 ***pppuStack_588;
  undefined8 ***pppuStack_580;
  undefined8 ***pppuStack_570;
  undefined8 ***pppuStack_568;
  undefined8 ***pppuStack_560;
  undefined8 ***pppuStack_558;
  undefined8 ***pppuStack_550;
  undefined8 ***pppuStack_548;
  undefined8 ***pppuStack_540;
  undefined8 ***pppuStack_538;
  undefined8 ***pppuStack_530;
  undefined8 ***pppuStack_520;
  undefined8 ***pppuStack_518;
  undefined8 ***pppuStack_510;
  undefined8 ***pppuStack_508;
  undefined8 ***pppuStack_500;
  undefined8 ***pppuStack_4f8;
  undefined8 ***pppuStack_4f0;
  undefined8 ***pppuStack_4e8;
  undefined8 ***pppuStack_4e0;
  undefined8 ***pppuStack_4d8;
  undefined8 ***pppuStack_4d0;
  undefined8 ***pppuStack_4c8;
  undefined8 ***pppuStack_4c0;
  undefined8 ***pppuStack_4b0;
  undefined8 ***pppuStack_4a8;
  undefined8 ***pppuStack_4a0;
  undefined8 ***pppuStack_498;
  undefined8 ***pppuStack_490;
  undefined8 ***pppuStack_488;
  undefined8 ***pppuStack_480;
  undefined8 ***pppuStack_478;
  undefined8 ***pppuStack_470;
  undefined4 uStack_460;
  undefined8 ***pppuStack_458;
  undefined8 ***pppuStack_450;
  undefined8 ***pppuStack_448;
  undefined8 ***pppuStack_440;
  undefined8 ***pppuStack_438;
  undefined8 ***pppuStack_430;
  undefined8 ***pppuStack_428;
  undefined8 ***pppuStack_420;
  undefined8 ***pppuStack_418;
  undefined8 ***pppuStack_410;
  undefined8 ***pppuStack_400;
  undefined8 ***pppuStack_3f8;
  undefined8 ***pppuStack_3f0;
  undefined8 ***pppuStack_3e8;
  undefined8 ***pppuStack_3e0;
  undefined2 uStack_3d8;
  undefined6 uStack_3d6;
  undefined2 uStack_3d0;
  undefined8 uStack_3ce;
  undefined8 ***pppuStack_3c0;
  undefined8 ***pppuStack_3b8;
  char cStack_3b0;
  undefined8 ***pppuStack_3a0;
  undefined8 ***pppuStack_398;
  undefined8 ***pppuStack_390;
  undefined8 *****pppppuStack_380;
  undefined8 ****ppppuStack_378;
  undefined8 ****ppppuStack_370;
  undefined8 ***pppuStack_368;
  undefined8 uStack_360;
  undefined4 uStack_358;
  undefined8 ***pppuStack_350;
  undefined8 ***pppuStack_340;
  undefined8 ***pppuStack_330;
  undefined8 ***pppuStack_328;
  undefined8 ***pppuStack_320;
  undefined8 ***pppuStack_318;
  undefined8 ***pppuStack_310;
  undefined8 ***pppuStack_308;
  undefined8 ***pppuStack_300;
  undefined8 ***pppuStack_2f8;
  undefined4 uStack_2f0;
  undefined8 ***pppuStack_2e8;
  undefined8 ***pppuStack_2e0;
  undefined8 ***pppuStack_2d0;
  undefined8 ***pppuStack_2c8;
  undefined8 ***pppuStack_2c0;
  undefined8 ***pppuStack_2b8;
  undefined8 ***pppuStack_2b0;
  undefined8 ***pppuStack_2a8;
  undefined8 ***pppuStack_2a0;
  undefined8 ***pppuStack_290;
  undefined8 ***pppuStack_288;
  undefined8 ***pppuStack_280;
  undefined8 ***pppuStack_278;
  undefined8 ***pppuStack_270;
  undefined8 ***pppuStack_268;
  undefined8 ***pppuStack_260;
  undefined8 ***pppuStack_258;
  undefined8 ***pppuStack_250;
  undefined8 ***pppuStack_240;
  undefined8 ***pppuStack_238;
  undefined8 ***pppuStack_230;
  undefined8 ***pppuStack_228;
  undefined8 ***pppuStack_220;
  undefined8 ***pppuStack_218;
  undefined8 ***pppuStack_210;
  undefined8 ***pppuStack_208;
  undefined8 ***pppuStack_200;
  undefined8 ***pppuStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined8 ***pppuStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 ***pppuStack_1d0;
  undefined8 ***pppuStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 ***pppuStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 ***pppuStack_198;
  undefined8 ***pppuStack_190;
  undefined4 uStack_180;
  undefined8 ***pppuStack_178;
  undefined8 ***pppuStack_170;
  undefined8 ***pppuStack_168;
  undefined8 ***pppuStack_160;
  undefined8 ***pppuStack_158;
  undefined8 ***pppuStack_150;
  undefined8 ***pppuStack_148;
  undefined8 ***pppuStack_140;
  undefined8 ***pppuStack_138;
  undefined8 ***pppuStack_130;
  undefined8 ***pppuStack_120;
  undefined8 ***pppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 ***pppuStack_100;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  undefined8 uStack_ee;
  undefined8 ***pppuStack_e0;
  undefined8 ***pppuStack_d8;
  char cStack_d0;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar1 = param_1 + 0x88;
  ppppppuVar30 = param_1;
  if (param_1[0x88] == (undefined8 *****)0x0) {
LAB_10ace34a4:
    ppppuStack_660 = *param_1;
    ppppuStack_658 = param_1[1];
    if ((undefined8 *****)ppppuStack_658 != (undefined8 *****)0x0) {
      pppppuVar34 = (undefined8 *****)(ppppuStack_658 + 2);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppuVar34,0x10);
        if (bVar6) {
          *pppppuVar34 = (undefined8 ****)((long)*pppppuVar34 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    pppuStack_648 = *(undefined8 ****)(param_2 + 8);
    ppuStack_650 = &PTR_DAT_110af4b00;
    uStack_640 = *(undefined8 *)(param_2 + 0x10);
    uStack_638 = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    pppuStack_630 = (undefined8 ***)*param_3;
    pppuStack_620 = (undefined8 ***)param_3[2];
    pppuStack_608 = (undefined8 ***)param_3[5];
    pppuStack_610 = (undefined8 ***)param_3[4];
    pppuStack_5f8 = (undefined8 ***)param_3[7];
    pppuStack_600 = (undefined8 ***)param_3[6];
    pppuStack_5e8 = (undefined8 ***)param_3[9];
    pppuStack_5f0 = (undefined8 ***)param_3[8];
    pppuStack_5d8 = (undefined8 ***)param_3[0xb];
    pppuStack_5e0 = (undefined8 ***)param_3[10];
    uStack_5d0 = *(undefined4 *)(param_3 + 0xc);
    pppuStack_5c8 = (undefined8 ***)param_3[0xd];
    pppuStack_5c0 = (undefined8 ***)param_3[0xe];
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    pppuStack_5a8 = (undefined8 ***)param_3[0x11];
    pppuStack_5b0 = (undefined8 ***)param_3[0x10];
    pppuStack_598 = (undefined8 ***)param_3[0x13];
    pppuStack_5a0 = (undefined8 ***)param_3[0x12];
    pppuStack_588 = (undefined8 ***)param_3[0x15];
    pppuStack_590 = (undefined8 ***)param_3[0x14];
    pppuStack_580 = (undefined8 ***)param_3[0x16];
    pppuStack_568 = (undefined8 ***)param_3[0x19];
    pppuStack_570 = (undefined8 ***)param_3[0x18];
    pppuStack_558 = (undefined8 ***)param_3[0x1b];
    pppuStack_560 = (undefined8 ***)param_3[0x1a];
    pppuStack_548 = (undefined8 ***)param_3[0x1d];
    pppuStack_550 = (undefined8 ***)param_3[0x1c];
    pppuStack_538 = (undefined8 ***)param_3[0x1f];
    pppuStack_540 = (undefined8 ***)param_3[0x1e];
    pppuStack_530 = (undefined8 ***)param_3[0x20];
    pppuStack_518 = (undefined8 ***)param_3[0x23];
    pppuStack_520 = (undefined8 ***)param_3[0x22];
    pppuStack_508 = (undefined8 ***)param_3[0x25];
    pppuStack_510 = (undefined8 ***)param_3[0x24];
    param_3[0x22] = 0;
    param_3[0x23] = 0;
    pppuStack_4f8 = (undefined8 ***)param_3[0x27];
    pppuStack_500 = (undefined8 ***)param_3[0x26];
    pppuStack_4e8 = (undefined8 ***)param_3[0x29];
    pppuStack_4f0 = (undefined8 ***)param_3[0x28];
    pppuStack_4d8 = (undefined8 ***)param_3[0x2b];
    pppuStack_4e0 = (undefined8 ***)param_3[0x2a];
    pppuStack_4c8 = (undefined8 ***)param_3[0x2d];
    pppuStack_4d0 = (undefined8 ***)param_3[0x2c];
    pppuStack_4c0 = (undefined8 ***)param_3[0x2e];
    pppuStack_4a8 = (undefined8 ***)param_3[0x31];
    pppuStack_4b0 = (undefined8 ***)param_3[0x30];
    pppuStack_498 = (undefined8 ***)param_3[0x33];
    pppuStack_4a0 = (undefined8 ***)param_3[0x32];
    pppuStack_488 = (undefined8 ***)param_3[0x35];
    pppuStack_490 = (undefined8 ***)param_3[0x34];
    pppuStack_478 = (undefined8 ***)param_3[0x37];
    pppuStack_480 = (undefined8 ***)param_3[0x36];
    pppuStack_470 = (undefined8 ***)param_3[0x38];
    uStack_460 = *(undefined4 *)(param_3 + 0x3a);
    pppuStack_450 = (undefined8 ***)param_3[0x3c];
    pppuStack_458 = (undefined8 ***)param_3[0x3b];
    pppuStack_448 = (undefined8 ***)param_3[0x3d];
    param_3[0x3b] = 0;
    param_3[0x3c] = 0;
    param_3[0x3d] = 0;
    pppuStack_438 = (undefined8 ***)param_3[0x3f];
    pppuStack_440 = (undefined8 ***)param_3[0x3e];
    pppuStack_430 = (undefined8 ***)param_3[0x40];
    param_3[0x3e] = 0;
    param_3[0x3f] = 0;
    param_3[0x40] = 0;
    pppuStack_420 = (undefined8 ***)param_3[0x42];
    pppuStack_428 = (undefined8 ***)param_3[0x41];
    pppuStack_418 = (undefined8 ***)param_3[0x43];
    param_3[0x41] = 0;
    param_3[0x42] = 0;
    param_3[0x43] = 0;
    pppuStack_410 = (undefined8 ***)param_3[0x44];
    pppuStack_3f8 = (undefined8 ***)param_3[0x47];
    pppuStack_400 = (undefined8 ***)param_3[0x46];
    pppuStack_3e8 = (undefined8 ***)param_3[0x49];
    pppuStack_3f0 = (undefined8 ***)param_3[0x48];
    pppuStack_3e0 = (undefined8 ***)param_3[0x4a];
    uStack_3ce = *(undefined8 *)((long)param_3 + 0x262);
    uStack_3d0 = (undefined2)((ulong)*(undefined8 *)((long)param_3 + 0x25a) >> 0x30);
    uStack_3d8 = (undefined2)param_3[0x4b];
    uStack_3d6 = (undefined6)((ulong)param_3[0x4b] >> 0x10);
    pppuStack_3c0 = (undefined8 ***)((ulong)pppuStack_3c0 & 0xffffffffffffff00);
    cStack_3b0 = *(char *)(param_3 + 0x50) == '\x01';
    if ((bool)cStack_3b0) {
      pppuStack_3b8 = (undefined8 ***)param_3[0x4f];
      pppuStack_3c0 = (undefined8 ***)param_3[0x4e];
      param_3[0x4f] = 0;
      param_3[0x4e] = 0;
    }
    pppuStack_398 = (undefined8 ***)param_4[1];
    pppuStack_3a0 = (undefined8 ***)*param_4;
    pppuStack_390 = (undefined8 ***)param_4[2];
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    if (param_5 == 0) {
      if ((undefined8 *****)ppppuStack_658 != (undefined8 *****)0x0) {
        pppppuVar34 = (undefined8 *****)(ppppuStack_658 + 2);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppuVar34,0x10);
          if (bVar6) {
            *pppppuVar34 = (undefined8 ****)((long)*pppppuVar34 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppppuStack_940 = ppppuStack_660;
      ppppuStack_938 = ppppuStack_658;
      FUN_10aceb7a0(auStack_930,&ppuStack_650);
      pppuStack_910 = pppuStack_630;
      pppuStack_900 = pppuStack_620;
      pppuStack_8e8 = pppuStack_608;
      pppuStack_8f0 = pppuStack_610;
      pppuStack_8d8 = pppuStack_5f8;
      pppuStack_8e0 = pppuStack_600;
      pppuStack_8c8 = pppuStack_5e8;
      pppuStack_8d0 = pppuStack_5f0;
      pppuStack_8b8 = pppuStack_5d8;
      pppuStack_8c0 = pppuStack_5e0;
      uStack_8b0 = uStack_5d0;
      func_0x00010937da58(auStack_8a8,&pppuStack_5c8);
      pppuStack_888 = pppuStack_5a8;
      pppuStack_890 = pppuStack_5b0;
      pppuStack_878 = pppuStack_598;
      pppuStack_880 = pppuStack_5a0;
      pppuStack_868 = pppuStack_588;
      pppuStack_870 = pppuStack_590;
      pppuStack_828 = pppuStack_548;
      pppuStack_830 = pppuStack_550;
      pppuStack_818 = pppuStack_538;
      pppuStack_820 = pppuStack_540;
      pppuStack_860 = pppuStack_580;
      pppuStack_810 = pppuStack_530;
      pppuStack_848 = pppuStack_568;
      pppuStack_850 = pppuStack_570;
      pppuStack_838 = pppuStack_558;
      pppuStack_840 = pppuStack_560;
      pppuStack_7f8 = pppuStack_518;
      pppuStack_800 = pppuStack_520;
      if ((undefined8 ****)pppuStack_518 != (undefined8 ****)0x0) {
        ppppuVar36 = (undefined8 ****)(pppuStack_518 + 1);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppuVar36,0x10);
          if (bVar6) {
            *ppppuVar36 = (undefined8 ***)((long)*ppppuVar36 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pppuStack_7e8 = pppuStack_508;
      pppuStack_7f0 = pppuStack_510;
      pppuStack_7d8 = pppuStack_4f8;
      pppuStack_7e0 = pppuStack_500;
      pppuStack_7c8 = pppuStack_4e8;
      pppuStack_7d0 = pppuStack_4f0;
      pppuStack_7b8 = pppuStack_4d8;
      pppuStack_7c0 = pppuStack_4e0;
      pppuStack_7a8 = pppuStack_4c8;
      pppuStack_7b0 = pppuStack_4d0;
      pppuStack_7a0 = pppuStack_4c0;
      pppuStack_750 = pppuStack_470;
      pppuStack_768 = pppuStack_488;
      pppuStack_770 = pppuStack_490;
      pppuStack_758 = pppuStack_478;
      pppuStack_760 = pppuStack_480;
      pppuStack_788 = pppuStack_4a8;
      pppuStack_790 = pppuStack_4b0;
      pppuStack_778 = pppuStack_498;
      pppuStack_780 = pppuStack_4a0;
      uStack_740 = uStack_460;
      uStack_730 = 0;
      uStack_738 = 0;
      uStack_728 = 0;
      FUN_10a4f0090();
      uStack_710 = 0;
      uStack_718 = 0;
      uStack_720 = 0;
      FUN_10a0e9a40(&uStack_720,pppuStack_440,pppuStack_438,
                    (long)pppuStack_438 - (long)pppuStack_440 >> 2);
      uStack_700 = 0;
      uStack_708 = 0;
      uStack_6f8 = 0;
      FUN_10a0ca588();
      pppuVar12 = pppuStack_398;
      pppuVar11 = pppuStack_3a0;
      pppuStack_6f0 = pppuStack_410;
      uStack_6ae = uStack_3ce;
      uStack_6b0 = uStack_3d0;
      pppuStack_6d8 = pppuStack_3f8;
      pppuStack_6e0 = pppuStack_400;
      pppuStack_6c8 = pppuStack_3e8;
      pppuStack_6d0 = pppuStack_3f0;
      uStack_6b8 = uStack_3d8;
      uStack_6b6 = uStack_3d6;
      pppuStack_6c0 = pppuStack_3e0;
      pppuStack_6a0 = (undefined8 ***)((ulong)pppuStack_6a0 & 0xffffffffffffff00);
      uStack_690 = 0;
      if (cStack_3b0 == '\x01') {
        pppuStack_698 = pppuStack_3b8;
        pppuStack_6a0 = pppuStack_3c0;
        if ((undefined8 ****)pppuStack_3b8 != (undefined8 ****)0x0) {
          ppppuVar36 = (undefined8 ****)(pppuStack_3b8 + 1);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppuVar36,0x10);
            if (bVar6) {
              *ppppuVar36 = (undefined8 ***)((long)*ppppuVar36 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uStack_690 = 1;
      }
      ppppppuVar30 = &pppppuStack_680;
      pppppuStack_670 = (undefined8 ******)0x0;
      pppppuStack_678 = (undefined8 ******)0x0;
      pppppuStack_680 = (undefined8 ******)0x0;
      ppppuStack_378 = (undefined8 ****)((ulong)ppppuStack_378 & 0xffffffffffffff00);
      pppppuStack_380 = ppppppuVar30;
      if ((long)pppuStack_398 - (long)pppuStack_3a0 != 0) {
        uVar33 = ((long)pppuStack_398 - (long)pppuStack_3a0 >> 3) * -0x1111111111111111;
        if (0x222222222222222 < uVar33) {
          FUN_10aceb894();
          goto LAB_10ace467c;
        }
        FUN_10aceb8a8();
        lVar38 = 0;
        pppppuStack_670 = ppppppuVar30 + uVar33 * 0xf;
        pppppuStack_680 = ppppppuVar30;
        pppppuStack_678 = ppppppuVar30;
        do {
          plVar3 = (long *)((long)pppuVar11 + lVar38);
          puVar4 = (undefined8 *)((long)ppppppuVar30 + lVar38);
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          FUN_10aceb8ec(puVar4,*plVar3,plVar3[1],(plVar3[1] - *plVar3 >> 2) * -0x5555555555555555);
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          FUN_10a0723d0(puVar4 + 3,plVar3[3],plVar3[4],plVar3[4] - plVar3[3] >> 2);
          *(undefined8 *)((long)ppppppuVar30 + lVar38 + 0x30) = 0;
          *(undefined8 *)((long)ppppppuVar30 + lVar38 + 0x38) = 0;
          *(undefined8 *)((long)ppppppuVar30 + lVar38 + 0x40) = 0;
          FUN_10aceb8ec();
          plVar37 = (long *)((long)ppppppuVar30 + lVar38 + 0x48);
          *plVar37 = 0;
          *(undefined8 *)((long)ppppppuVar30 + lVar38 + 0x50) = 0;
          *(undefined8 *)((long)ppppppuVar30 + lVar38 + 0x58) = 0;
          lVar7 = plVar3[10] - plVar3[9];
          if (lVar7 != 0) {
            if (0x5555555555555555 < (ulong)(lVar7 * -0x5555555555555555)) {
              FUN_10aceba08();
              goto LAB_10ace467c;
            }
            lVar32 = lVar7;
            __Znwm();
            *plVar37 = lVar32;
            *(long *)((long)ppppppuVar30 + lVar38 + 0x50) = lVar32;
            *(long *)((long)ppppppuVar30 + lVar38 + 0x58) = lVar32 + lVar7;
            _memcpy();
            *(long *)((long)ppppppuVar30 + lVar38 + 0x50) = lVar32 + lVar7;
          }
          *(undefined8 *)((long)ppppppuVar30 + lVar38 + 0x60) = 0;
          *(undefined8 *)((long)ppppppuVar30 + lVar38 + 0x68) = 0;
          *(undefined8 *)((long)ppppppuVar30 + lVar38 + 0x70) = 0;
          FUN_10a05151c();
          lVar38 = lVar38 + 0x78;
        } while ((undefined8 ***)(plVar3 + 0xf) != pppuVar12);
        pppppuStack_678 = (undefined8 *****)((long)ppppppuVar30 + lVar38);
      }
      pppppuVar34 = (undefined8 *****)0x338;
      __Znwm();
      pppppuVar34[2] = (undefined8 ****)0x0;
      pppppuVar34[1] = (undefined8 ****)0x200000006;
      *(undefined2 *)(pppppuVar34 + 3) = 4;
      pppppuVar34[5] = (undefined8 ****)0x0;
      pppppuVar34[4] = (undefined8 ****)0x0;
      pppppuVar34[7] = (undefined8 ****)0x0;
      pppppuVar34[6] = (undefined8 ****)0x0;
      pppppuVar34[9] = (undefined8 ****)0x0;
      pppppuVar34[8] = (undefined8 ****)0x0;
      pppppuVar34[0xb] = (undefined8 ****)0x0;
      pppppuVar34[10] = (undefined8 ****)0x0;
      pppppuVar34[0xd] = (undefined8 ****)0x0;
      pppppuVar34[0xc] = (undefined8 ****)0x0;
      pppppuVar34[0xf] = (undefined8 ****)0x0;
      pppppuVar34[0xe] = (undefined8 ****)0x0;
      pppppuVar34[0x10] = (undefined8 ****)0x0;
      pppppuVar34[0x11] = pppppuVar34 + 3;
      pppppuVar34[0x12] = (undefined8 ****)0x0;
      *pppppuVar34 = (undefined8 ****)&PTR_DAT_110c6d120;
      *(undefined1 *)(pppppuVar34 + 0x13) = 0;
      *(undefined1 *)(pppppuVar34 + 0x66) = 0;
      ppppuStack_958 = pppppuVar34;
      FUN_10acebea4(&pppppuStack_380,&ppppuStack_940);
      func_0x00010acebe08(pppppuVar34,&pppppuStack_380);
      FUN_10a4feea0(&pppppuStack_380);
      ppppuStack_960 = (undefined8 *****)0x0;
      func_0x0001092b4274(&ppppuStack_958,pppppuVar34);
      if ((undefined8 *****)ppppuStack_960 != (undefined8 *****)0x0) {
        pppppuVar31 = (undefined8 *****)(ppppuStack_960 + 1);
        do {
          ppppuVar36 = *pppppuVar31;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppuVar31,0x10);
          if (bVar6) {
            *pppppuVar31 = (undefined8 ****)((long)ppppuVar36 + -4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (((ulong)ppppuVar36 & 0x1fffffffc) == 4) {
          do {
            ppppuVar36 = *pppppuVar31;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppuVar31,0x10);
            if (bVar6) {
              *pppppuVar31 = (undefined8 ****)((long)ppppuVar36 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((undefined8 ****)((long)ppppuVar36 + -1) == (undefined8 ****)0x0) {
            (*(code *)(*ppppuStack_960)[1])();
          }
        }
      }
      pppppuVar31 = *ppppppuVar1;
      if (pppppuVar31 != (undefined8 *****)0x0) {
        pppppuVar2 = pppppuVar31 + 1;
        do {
          ppppuVar36 = *pppppuVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppuVar2,0x10);
          if (bVar6) {
            *pppppuVar2 = (undefined8 ****)((long)ppppuVar36 + -4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (((ulong)ppppuVar36 & 0x1fffffffc) == 4) {
          do {
            ppppuVar36 = *pppppuVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppuVar2,0x10);
            if (bVar6) {
              *pppppuVar2 = (undefined8 ****)((long)ppppuVar36 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((undefined8 ****)((long)ppppuVar36 + -1) == (undefined8 ****)0x0) {
            (*(code *)(*pppppuVar31)[1])();
          }
        }
      }
      *ppppppuVar1 = pppppuVar34;
      FUN_10ace5114(&ppppuStack_940);
LAB_10ace45ec:
      FUN_10ace5114(&ppppuStack_660);
      pppppuVar34 = *ppppppuVar1;
      goto LAB_10ace45f8;
    }
    FUN_109d1a80c();
    cVar5 = cStack_3b0;
    pppuVar28 = pppuStack_410;
    pppuVar27 = pppuStack_418;
    pppuVar26 = pppuStack_420;
    pppuVar25 = pppuStack_428;
    pppuVar24 = pppuStack_430;
    pppuVar23 = pppuStack_438;
    pppuVar22 = pppuStack_440;
    pppuVar21 = pppuStack_448;
    pppuVar20 = pppuStack_450;
    pppuVar19 = pppuStack_458;
    uVar18 = uStack_460;
    pppuVar17 = pppuStack_518;
    pppuVar16 = pppuStack_520;
    pppuVar15 = pppuStack_5c0;
    pppuVar14 = pppuStack_5c8;
    uVar13 = uStack_5d0;
    pppuVar12 = pppuStack_620;
    pppuVar11 = pppuStack_630;
    uVar10 = uStack_638;
    pppppuVar34 = *ppppppuVar30;
    ppppuVar36 = pppppuVar34[2];
    ppppuStack_958 = (undefined8 *****)0x0;
    ppppuStack_950 = (undefined8 ****)0x0;
    if (ppppuVar36 == (undefined8 ****)0x0) {
      ppppuStack_378 = ppppuStack_658;
      pppppuStack_380 = (undefined8 *****)ppppuStack_660;
      ppppuStack_660 = (undefined8 *****)0x0;
      ppppuStack_658 = (undefined8 *****)0x0;
      ppppuStack_370 = (undefined8 ****)&PTR_DAT_110af4b00;
      pppuStack_368 = pppuStack_648;
      uVar8 = (undefined4)uStack_640;
      uVar9 = uStack_640._4_4_;
      uStack_360 = uStack_640;
      uStack_358 = uStack_638;
      uStack_638 = 0;
      pppuStack_648 = (undefined8 ****)0x0;
      uStack_640 = 0;
      pppuStack_350 = pppuStack_630;
      pppuStack_340 = pppuStack_620;
      pppuStack_328 = pppuStack_608;
      pppuStack_330 = pppuStack_610;
      pppuStack_318 = pppuStack_5f8;
      pppuStack_320 = pppuStack_600;
      pppuStack_308 = pppuStack_5e8;
      pppuStack_310 = pppuStack_5f0;
      pppuStack_2f8 = pppuStack_5d8;
      pppuStack_300 = pppuStack_5e0;
      uStack_2f0 = uStack_5d0;
      pppuStack_2e8 = pppuStack_5c8;
      pppuStack_2e0 = pppuStack_5c0;
      pppuStack_5c8 = (undefined8 ****)0x0;
      pppuStack_5c0 = (undefined8 ****)0x0;
      pppuStack_2b8 = pppuStack_598;
      pppuStack_2c0 = pppuStack_5a0;
      pppuStack_2c8 = pppuStack_5a8;
      pppuStack_2d0 = pppuStack_5b0;
      pppuStack_2a8 = pppuStack_588;
      pppuStack_2b0 = pppuStack_590;
      pppuStack_288 = pppuStack_568;
      pppuStack_290 = pppuStack_570;
      pppuStack_2a0 = pppuStack_580;
      pppuStack_250 = pppuStack_530;
      pppuStack_258 = pppuStack_538;
      pppuStack_260 = pppuStack_540;
      pppuStack_268 = pppuStack_548;
      pppuStack_270 = pppuStack_550;
      pppuStack_278 = pppuStack_558;
      pppuStack_280 = pppuStack_560;
      pppuStack_240 = pppuStack_520;
      pppuStack_238 = pppuStack_518;
      pppuStack_520 = (undefined8 ****)0x0;
      pppuStack_518 = (undefined8 ****)0x0;
      pppuStack_218 = pppuStack_4f8;
      pppuStack_220 = pppuStack_500;
      pppuStack_228 = pppuStack_508;
      pppuStack_230 = pppuStack_510;
      pppuStack_1f8 = pppuStack_4d8;
      pppuStack_200 = pppuStack_4e0;
      pppuStack_208 = pppuStack_4e8;
      pppuStack_210 = pppuStack_4f0;
      pppuStack_1e8 = pppuStack_4c8;
      pppuStack_1f0 = pppuStack_4d0;
      pppuStack_1c8 = pppuStack_4a8;
      pppuStack_1d0 = pppuStack_4b0;
      pppuStack_1e0 = pppuStack_4c0;
      pppuStack_190 = pppuStack_470;
      pppuStack_198 = pppuStack_478;
      pppuStack_1a0 = pppuStack_480;
      pppuStack_1a8 = pppuStack_488;
      pppuStack_1b0 = pppuStack_490;
      pppuStack_1b8 = pppuStack_498;
      pppuStack_1c0 = pppuStack_4a0;
      uStack_180 = uStack_460;
      pppuStack_178 = pppuStack_458;
      pppuStack_170 = pppuStack_450;
      pppuStack_168 = pppuStack_448;
      pppuStack_458 = (undefined8 ****)0x0;
      pppuStack_450 = (undefined8 ****)0x0;
      pppuStack_448 = (undefined8 ****)0x0;
      pppuStack_160 = pppuStack_440;
      pppuStack_158 = pppuStack_438;
      pppuStack_150 = pppuStack_430;
      pppuStack_440 = (undefined8 ****)0x0;
      pppuStack_438 = (undefined8 ****)0x0;
      pppuStack_430 = (undefined8 ****)0x0;
      pppuStack_148 = pppuStack_428;
      pppuStack_140 = pppuStack_420;
      pppuStack_138 = pppuStack_418;
      pppuStack_428 = (undefined8 ****)0x0;
      pppuStack_420 = (undefined8 ****)0x0;
      pppuStack_418 = (undefined8 ****)0x0;
      pppuStack_130 = pppuStack_410;
      uStack_ee = uStack_3ce;
      uStack_f0 = uStack_3d0;
      uStack_f8 = uStack_3d8;
      uStack_f6 = uStack_3d6;
      pppuStack_100 = pppuStack_3e0;
      pppuStack_108 = pppuStack_3e8;
      pppuStack_110 = pppuStack_3f0;
      pppuStack_118 = pppuStack_3f8;
      pppuStack_120 = pppuStack_400;
      pppuStack_e0 = (undefined8 ***)((ulong)pppuStack_e0 & 0xffffffffffffff00);
      cStack_d0 = cStack_3b0 == '\x01';
      if ((bool)cStack_d0) {
        pppuStack_d8 = pppuStack_3b8;
        pppuStack_e0 = pppuStack_3c0;
        pppuStack_3c0 = (undefined8 ****)0x0;
        pppuStack_3b8 = (undefined8 ****)0x0;
      }
      pppuStack_b8 = pppuStack_398;
      pppuStack_c0 = pppuStack_3a0;
      pppuStack_b0 = pppuStack_390;
      pppuStack_398 = (undefined8 ****)0x0;
      pppuStack_390 = (undefined8 ****)0x0;
      pppuStack_3a0 = (undefined8 ****)0x0;
      pppppuVar31 = (undefined8 *****)0x650;
      __Znwm();
      pppppuVar31[2] = (undefined8 ****)0x0;
      pppppuVar31[1] = (undefined8 ****)0x200000006;
      *(undefined2 *)(pppppuVar31 + 3) = 4;
      pppppuVar31[5] = (undefined8 ****)0x0;
      pppppuVar31[4] = (undefined8 ****)0x0;
      pppppuVar31[7] = (undefined8 ****)0x0;
      pppppuVar31[6] = (undefined8 ****)0x0;
      pppppuVar31[9] = (undefined8 ****)0x0;
      pppppuVar31[8] = (undefined8 ****)0x0;
      pppppuVar31[0xb] = (undefined8 ****)0x0;
      pppppuVar31[10] = (undefined8 ****)0x0;
      pppppuVar31[0xd] = (undefined8 ****)0x0;
      pppppuVar31[0xc] = (undefined8 ****)0x0;
      pppppuVar31[0xf] = (undefined8 ****)0x0;
      pppppuVar31[0xe] = (undefined8 ****)0x0;
      pppppuVar31[0x10] = (undefined8 ****)0x0;
      pppppuVar31[0x11] = pppppuVar31 + 3;
      pppppuVar31[0x12] = (undefined8 ****)0x0;
      *(undefined1 *)(pppppuVar31 + 0x13) = 0;
      *(undefined1 *)(pppppuVar31 + 0x66) = 0;
      *pppppuVar31 = (undefined8 ****)&PTR_DAT_110c6d140;
      pppppuVar31[0x69] = ppppuStack_378;
      pppppuVar31[0x68] = pppppuStack_380;
      pppppuStack_380 = (undefined8 *****)0x0;
      ppppuStack_378 = (undefined8 ****)0x0;
      pppppuVar31[0x6a] = (undefined8 ****)&PTR_DAT_110af4b00;
      pppppuVar31[0x6b] = (undefined8 ****)pppuStack_368;
      *(undefined4 *)(pppppuVar31 + 0x6c) = uVar8;
      *(undefined4 *)((long)pppppuVar31 + 0x364) = uVar9;
      *(undefined4 *)(pppppuVar31 + 0x6d) = uVar10;
      uStack_358 = 0;
      pppuStack_368 = (undefined8 ***)0x0;
      uStack_360 = 0;
      pppppuVar31[0x6e] = (undefined8 ****)pppuVar11;
      pppppuVar31[0x70] = (undefined8 ****)pppuVar12;
      pppppuVar31[0x73] = (undefined8 ****)pppuStack_328;
      pppppuVar31[0x72] = (undefined8 ****)pppuStack_330;
      pppppuVar31[0x75] = (undefined8 ****)pppuStack_318;
      pppppuVar31[0x74] = (undefined8 ****)pppuStack_320;
      pppppuVar31[0x77] = (undefined8 ****)pppuStack_308;
      pppppuVar31[0x76] = (undefined8 ****)pppuStack_310;
      pppppuVar31[0x79] = (undefined8 ****)pppuStack_2f8;
      pppppuVar31[0x78] = (undefined8 ****)pppuStack_300;
      *(undefined4 *)(pppppuVar31 + 0x7a) = uVar13;
      pppppuVar31[0x7b] = (undefined8 ****)pppuVar14;
      pppppuVar31[0x7c] = (undefined8 ****)pppuVar15;
      pppuStack_2e8 = (undefined8 ***)0x0;
      pppuStack_2e0 = (undefined8 ***)0x0;
      pppppuVar31[0x7f] = (undefined8 ****)pppuStack_2c8;
      pppppuVar31[0x7e] = (undefined8 ****)pppuStack_2d0;
      pppppuVar31[0x81] = (undefined8 ****)pppuStack_2b8;
      pppppuVar31[0x80] = (undefined8 ****)pppuStack_2c0;
      pppppuVar31[0x84] = (undefined8 ****)pppuStack_2a0;
      pppppuVar31[0x83] = (undefined8 ****)pppuStack_2a8;
      pppppuVar31[0x82] = (undefined8 ****)pppuStack_2b0;
      pppppuVar31[0x87] = (undefined8 ****)pppuStack_288;
      pppppuVar31[0x86] = (undefined8 ****)pppuStack_290;
      pppppuVar31[0x8e] = (undefined8 ****)pppuStack_250;
      pppppuVar31[0x8d] = (undefined8 ****)pppuStack_258;
      pppppuVar31[0x8c] = (undefined8 ****)pppuStack_260;
      pppppuVar31[0x8b] = (undefined8 ****)pppuStack_268;
      pppppuVar31[0x8a] = (undefined8 ****)pppuStack_270;
      pppppuVar31[0x89] = (undefined8 ****)pppuStack_278;
      pppppuVar31[0x88] = (undefined8 ****)pppuStack_280;
      pppppuVar31[0x90] = (undefined8 ****)pppuVar16;
      pppppuVar31[0x91] = (undefined8 ****)pppuVar17;
      pppuStack_240 = (undefined8 ***)0x0;
      pppuStack_238 = (undefined8 ***)0x0;
      pppppuVar31[0x95] = (undefined8 ****)pppuStack_218;
      pppppuVar31[0x94] = (undefined8 ****)pppuStack_220;
      pppppuVar31[0x93] = (undefined8 ****)pppuStack_228;
      pppppuVar31[0x92] = (undefined8 ****)pppuStack_230;
      pppppuVar31[0x99] = (undefined8 ****)pppuStack_1f8;
      pppppuVar31[0x98] = (undefined8 ****)pppuStack_200;
      pppppuVar31[0x97] = (undefined8 ****)pppuStack_208;
      pppppuVar31[0x96] = (undefined8 ****)pppuStack_210;
      pppppuVar31[0x9c] = (undefined8 ****)pppuStack_1e0;
      pppppuVar31[0x9b] = (undefined8 ****)pppuStack_1e8;
      pppppuVar31[0x9a] = (undefined8 ****)pppuStack_1f0;
      pppppuVar31[0x9f] = (undefined8 ****)pppuStack_1c8;
      pppppuVar31[0x9e] = (undefined8 ****)pppuStack_1d0;
      pppppuVar31[0xa6] = (undefined8 ****)pppuStack_190;
      pppppuVar31[0xa5] = (undefined8 ****)pppuStack_198;
      pppppuVar31[0xa4] = (undefined8 ****)pppuStack_1a0;
      pppppuVar31[0xa3] = (undefined8 ****)pppuStack_1a8;
      pppppuVar31[0xa2] = (undefined8 ****)pppuStack_1b0;
      pppppuVar31[0xa1] = (undefined8 ****)pppuStack_1b8;
      pppppuVar31[0xa0] = (undefined8 ****)pppuStack_1c0;
      *(undefined4 *)(pppppuVar31 + 0xa8) = uVar18;
      pppppuVar31[0xa9] = (undefined8 ****)pppuVar19;
      pppppuVar31[0xaa] = (undefined8 ****)pppuVar20;
      pppppuVar31[0xab] = (undefined8 ****)pppuVar21;
      pppuStack_178 = (undefined8 ***)0x0;
      pppuStack_170 = (undefined8 ***)0x0;
      pppuStack_168 = (undefined8 ***)0x0;
      pppppuVar31[0xac] = (undefined8 ****)pppuVar22;
      pppppuVar31[0xad] = (undefined8 ****)pppuVar23;
      pppppuVar31[0xae] = (undefined8 ****)pppuVar24;
      pppuStack_160 = (undefined8 ***)0x0;
      pppuStack_158 = (undefined8 ***)0x0;
      pppuStack_150 = (undefined8 ***)0x0;
      pppppuVar31[0xaf] = (undefined8 ****)pppuVar25;
      pppppuVar31[0xb0] = (undefined8 ****)pppuVar26;
      pppppuVar31[0xb1] = (undefined8 ****)pppuVar27;
      pppuStack_148 = (undefined8 ***)0x0;
      pppuStack_140 = (undefined8 ***)0x0;
      pppuStack_138 = (undefined8 ***)0x0;
      pppppuVar31[0xb2] = (undefined8 ****)pppuVar28;
      *(undefined8 *)((long)pppppuVar31 + 0x5d2) = uStack_ee;
      *(ulong *)((long)pppppuVar31 + 0x5ca) = CONCAT26(uStack_f0,uStack_f6);
      pppppuVar31[0xb9] = (undefined8 ****)CONCAT62(uStack_f6,uStack_f8);
      pppppuVar31[0xb8] = (undefined8 ****)pppuStack_100;
      pppppuVar31[0xb7] = (undefined8 ****)pppuStack_108;
      pppppuVar31[0xb6] = (undefined8 ****)pppuStack_110;
      pppppuVar31[0xb5] = (undefined8 ****)pppuStack_118;
      pppppuVar31[0xb4] = (undefined8 ****)pppuStack_120;
      *(undefined1 *)(pppppuVar31 + 0xbc) = 0;
      *(undefined1 *)(pppppuVar31 + 0xbe) = 0;
      if (cVar5 != '\0') {
        pppppuVar31[0xbd] = (undefined8 ****)pppuStack_d8;
        pppppuVar31[0xbc] = (undefined8 ****)pppuStack_e0;
        pppuStack_e0 = (undefined8 ****)0x0;
        pppuStack_d8 = (undefined8 ****)0x0;
        *(undefined1 *)(pppppuVar31 + 0xbe) = 1;
      }
      pppppuVar31[0xc1] = (undefined8 ****)pppuStack_b8;
      pppppuVar31[0xc0] = (undefined8 ****)pppuStack_c0;
      pppppuVar31[0xc2] = (undefined8 ****)pppuStack_b0;
      pppuStack_b8 = (undefined8 ***)0x0;
      pppuStack_b0 = (undefined8 ***)0x0;
      pppuStack_c0 = (undefined8 ***)0x0;
      *(undefined1 *)(pppppuVar31 + 0xc6) = 1;
      pppppuVar31[200] = (undefined8 ****)0x0;
      if ((undefined8 *****)ppppuStack_958 != (undefined8 *****)0x0) {
        pppppuVar2 = (undefined8 *****)(ppppuStack_958 + 1);
        do {
          ppppuVar36 = *pppppuVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppuVar2,0x10);
          if (bVar6) {
            *pppppuVar2 = (undefined8 ****)((long)ppppuVar36 + -4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (((ulong)ppppuVar36 & 0x1fffffffc) == 4) {
          do {
            ppppuVar36 = *pppppuVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppuVar2,0x10);
            if (bVar6) {
              *pppppuVar2 = (undefined8 ****)((long)ppppuVar36 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((undefined8 ****)((long)ppppuVar36 + -1) == (undefined8 ****)0x0) {
            (*(code *)(*ppppuStack_958)[1])();
          }
        }
      }
      ppppuStack_958 = pppppuVar31;
      if (ppppuStack_950 != (undefined8 ****)0x0) {
        func_0x0001092b4274(&ppppuStack_950);
      }
      ppppuStack_960 = pppppuVar31 + 0x68;
      ppppuStack_950 = pppppuVar31;
      FUN_10ace5114(&pppppuStack_380);
      pppppuStack_948 = (undefined8 *****)FUN_10aceba4c;
LAB_10ace44f4:
      ppppuVar36 = ppppuStack_960;
      if ((undefined8 ****)ppppuStack_960[0x60] != (undefined8 ****)0x0) {
        func_0x0001092b4274(ppppuStack_960 + 0x60);
      }
      ppppuVar36[0x60] = ppppuStack_950;
      ppppuStack_950 = (undefined8 ****)0x0;
      pppppuStack_380 = pppppuStack_948;
      ppppuStack_378 = ppppuStack_960;
      ppppuStack_370 = pppppuVar34;
      (*(code *)**pppppuVar34)(pppppuVar34,&pppppuStack_380);
      ppppuVar36 = ppppuStack_958;
      ppppuStack_958 = (undefined8 *****)0x0;
      if (ppppuStack_950 != (undefined8 ****)0x0) {
        func_0x0001092b4274(&ppppuStack_950);
        if ((undefined8 *****)ppppuStack_958 != (undefined8 *****)0x0) {
          pppppuVar34 = (undefined8 *****)(ppppuStack_958 + 1);
          do {
            ppppuVar35 = *pppppuVar34;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppuVar34,0x10);
            if (bVar6) {
              *pppppuVar34 = (undefined8 ****)((long)ppppuVar35 + -4);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (((ulong)ppppuVar35 & 0x1fffffffc) == 4) {
            do {
              ppppuVar35 = *pppppuVar34;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppuVar34,0x10);
              if (bVar6) {
                *pppppuVar34 = (undefined8 ****)((long)ppppuVar35 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((undefined8 ****)((long)ppppuVar35 + -1) == (undefined8 ****)0x0) {
              (*(code *)(*ppppuStack_958)[1])();
            }
          }
        }
      }
      pppppuVar34 = *ppppppuVar1;
      if (pppppuVar34 != (undefined8 *****)0x0) {
        pppppuVar31 = pppppuVar34 + 1;
        do {
          ppppuVar35 = *pppppuVar31;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppuVar31,0x10);
          if (bVar6) {
            *pppppuVar31 = (undefined8 ****)((long)ppppuVar35 + -4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (((ulong)ppppuVar35 & 0x1fffffffc) == 4) {
          do {
            ppppuVar35 = *pppppuVar31;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppuVar31,0x10);
            if (bVar6) {
              *pppppuVar31 = (undefined8 ****)((long)ppppuVar35 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((undefined8 ****)((long)ppppuVar35 + -1) == (undefined8 ****)0x0) {
            (*(code *)(*pppppuVar34)[1])();
          }
        }
      }
      *ppppppuVar1 = (undefined8 *****)ppppuVar36;
      goto LAB_10ace45ec;
    }
    lStack_968 = 0;
    (*(code *)(*ppppuVar36)[5])(ppppuVar36,0,&lStack_968);
    pppuVar28 = pppuStack_410;
    pppuVar27 = pppuStack_418;
    pppuVar26 = pppuStack_420;
    pppuVar25 = pppuStack_428;
    pppuVar24 = pppuStack_430;
    pppuVar23 = pppuStack_438;
    pppuVar22 = pppuStack_440;
    pppuVar21 = pppuStack_448;
    pppuVar20 = pppuStack_450;
    pppuVar19 = pppuStack_458;
    uVar18 = uStack_460;
    pppuVar17 = pppuStack_518;
    pppuVar16 = pppuStack_520;
    pppuVar15 = pppuStack_5c0;
    pppuVar14 = pppuStack_5c8;
    uVar13 = uStack_5d0;
    pppuVar12 = pppuStack_620;
    pppuVar11 = pppuStack_630;
    uVar10 = uStack_638;
    if (lStack_968 == 0) {
      ppppuStack_378 = ppppuStack_658;
      pppppuStack_380 = (undefined8 *****)ppppuStack_660;
      ppppuStack_660 = (undefined8 *****)0x0;
      ppppuStack_658 = (undefined8 *****)0x0;
      ppppuStack_370 = (undefined8 ****)&PTR_DAT_110af4b00;
      pppuStack_368 = pppuStack_648;
      uVar8 = (undefined4)uStack_640;
      uVar9 = uStack_640._4_4_;
      uStack_360 = uStack_640;
      uStack_358 = uStack_638;
      uStack_638 = 0;
      pppuStack_648 = (undefined8 ****)0x0;
      uStack_640 = 0;
      pppuStack_350 = pppuStack_630;
      pppuStack_340 = pppuStack_620;
      pppuStack_328 = pppuStack_608;
      pppuStack_330 = pppuStack_610;
      pppuStack_318 = pppuStack_5f8;
      pppuStack_320 = pppuStack_600;
      pppuStack_308 = pppuStack_5e8;
      pppuStack_310 = pppuStack_5f0;
      pppuStack_2f8 = pppuStack_5d8;
      pppuStack_300 = pppuStack_5e0;
      uStack_2f0 = uStack_5d0;
      pppuStack_2e8 = pppuStack_5c8;
      pppuStack_2e0 = pppuStack_5c0;
      pppuStack_5c8 = (undefined8 ****)0x0;
      pppuStack_5c0 = (undefined8 ****)0x0;
      pppuStack_2b8 = pppuStack_598;
      pppuStack_2c0 = pppuStack_5a0;
      pppuStack_2c8 = pppuStack_5a8;
      pppuStack_2d0 = pppuStack_5b0;
      pppuStack_2a8 = pppuStack_588;
      pppuStack_2b0 = pppuStack_590;
      pppuStack_288 = pppuStack_568;
      pppuStack_290 = pppuStack_570;
      pppuStack_2a0 = pppuStack_580;
      pppuStack_250 = pppuStack_530;
      pppuStack_258 = pppuStack_538;
      pppuStack_260 = pppuStack_540;
      pppuStack_268 = pppuStack_548;
      pppuStack_270 = pppuStack_550;
      pppuStack_278 = pppuStack_558;
      pppuStack_280 = pppuStack_560;
      pppuStack_240 = pppuStack_520;
      pppuStack_238 = pppuStack_518;
      pppuStack_520 = (undefined8 ****)0x0;
      pppuStack_518 = (undefined8 ****)0x0;
      pppuStack_218 = pppuStack_4f8;
      pppuStack_220 = pppuStack_500;
      pppuStack_228 = pppuStack_508;
      pppuStack_230 = pppuStack_510;
      pppuStack_1f8 = pppuStack_4d8;
      pppuStack_200 = pppuStack_4e0;
      pppuStack_208 = pppuStack_4e8;
      pppuStack_210 = pppuStack_4f0;
      pppuStack_1e8 = pppuStack_4c8;
      pppuStack_1f0 = pppuStack_4d0;
      pppuStack_1c8 = pppuStack_4a8;
      pppuStack_1d0 = pppuStack_4b0;
      pppuStack_1e0 = pppuStack_4c0;
      pppuStack_190 = pppuStack_470;
      pppuStack_198 = pppuStack_478;
      pppuStack_1a0 = pppuStack_480;
      pppuStack_1a8 = pppuStack_488;
      pppuStack_1b0 = pppuStack_490;
      pppuStack_1b8 = pppuStack_498;
      pppuStack_1c0 = pppuStack_4a0;
      uStack_180 = uStack_460;
      pppuStack_178 = pppuStack_458;
      pppuStack_170 = pppuStack_450;
      pppuStack_168 = pppuStack_448;
      pppuStack_458 = (undefined8 ****)0x0;
      pppuStack_450 = (undefined8 ****)0x0;
      pppuStack_448 = (undefined8 ****)0x0;
      pppuStack_160 = pppuStack_440;
      pppuStack_158 = pppuStack_438;
      pppuStack_150 = pppuStack_430;
      pppuStack_440 = (undefined8 ****)0x0;
      pppuStack_438 = (undefined8 ****)0x0;
      pppuStack_430 = (undefined8 ****)0x0;
      pppuStack_148 = pppuStack_428;
      pppuStack_140 = pppuStack_420;
      pppuStack_138 = pppuStack_418;
      pppuStack_428 = (undefined8 ****)0x0;
      pppuStack_420 = (undefined8 ****)0x0;
      pppuStack_418 = (undefined8 ****)0x0;
      pppuStack_130 = pppuStack_410;
      uStack_ee = uStack_3ce;
      uStack_f0 = uStack_3d0;
      uStack_f8 = uStack_3d8;
      uStack_f6 = uStack_3d6;
      pppuStack_100 = pppuStack_3e0;
      pppuStack_108 = pppuStack_3e8;
      pppuStack_110 = pppuStack_3f0;
      pppuStack_118 = pppuStack_3f8;
      pppuStack_120 = pppuStack_400;
      pppuStack_e0 = (undefined8 ***)((ulong)pppuStack_e0 & 0xffffffffffffff00);
      cStack_d0 = cStack_3b0 == '\x01';
      if ((bool)cStack_d0) {
        pppuStack_d8 = pppuStack_3b8;
        pppuStack_e0 = pppuStack_3c0;
        pppuStack_3c0 = (undefined8 ****)0x0;
        pppuStack_3b8 = (undefined8 ****)0x0;
      }
      pppuStack_b8 = pppuStack_398;
      pppuStack_c0 = pppuStack_3a0;
      pppuStack_b0 = pppuStack_390;
      pppuStack_398 = (undefined8 ****)0x0;
      pppuStack_390 = (undefined8 ****)0x0;
      pppuStack_3a0 = (undefined8 ****)0x0;
      pppppuVar31 = (undefined8 *****)0x650;
      __Znwm();
      pppppuVar31[2] = (undefined8 ****)0x0;
      pppppuVar31[1] = (undefined8 ****)0x200000006;
      *(undefined2 *)(pppppuVar31 + 3) = 4;
      pppppuVar31[5] = (undefined8 ****)0x0;
      pppppuVar31[4] = (undefined8 ****)0x0;
      pppppuVar31[7] = (undefined8 ****)0x0;
      pppppuVar31[6] = (undefined8 ****)0x0;
      pppppuVar31[9] = (undefined8 ****)0x0;
      pppppuVar31[8] = (undefined8 ****)0x0;
      pppppuVar31[0xb] = (undefined8 ****)0x0;
      pppppuVar31[10] = (undefined8 ****)0x0;
      pppppuVar31[0xd] = (undefined8 ****)0x0;
      pppppuVar31[0xc] = (undefined8 ****)0x0;
      pppppuVar31[0xf] = (undefined8 ****)0x0;
      pppppuVar31[0xe] = (undefined8 ****)0x0;
      pppppuVar31[0x10] = (undefined8 ****)0x0;
      pppppuVar31[0x11] = pppppuVar31 + 3;
      pppppuVar31[0x12] = (undefined8 ****)0x0;
      *(undefined1 *)(pppppuVar31 + 0x13) = 0;
      *(undefined1 *)(pppppuVar31 + 0x66) = 0;
      *pppppuVar31 = (undefined8 ****)&PTR_FUN_110c6d0d0;
      pppppuVar31[0x69] = ppppuStack_378;
      pppppuVar31[0x68] = pppppuStack_380;
      pppppuStack_380 = (undefined8 *****)0x0;
      ppppuStack_378 = (undefined8 ****)0x0;
      pppppuVar31[0x6a] = (undefined8 ****)&PTR_DAT_110af4b00;
      pppppuVar31[0x6b] = (undefined8 ****)pppuStack_368;
      *(undefined4 *)(pppppuVar31 + 0x6c) = uVar8;
      *(undefined4 *)((long)pppppuVar31 + 0x364) = uVar9;
      *(undefined4 *)(pppppuVar31 + 0x6d) = uVar10;
      uStack_358 = 0;
      pppuStack_368 = (undefined8 ***)0x0;
      uStack_360 = 0;
      pppppuVar31[0x6e] = (undefined8 ****)pppuVar11;
      pppppuVar31[0x70] = (undefined8 ****)pppuVar12;
      pppppuVar31[0x73] = (undefined8 ****)pppuStack_328;
      pppppuVar31[0x72] = (undefined8 ****)pppuStack_330;
      pppppuVar31[0x75] = (undefined8 ****)pppuStack_318;
      pppppuVar31[0x74] = (undefined8 ****)pppuStack_320;
      pppppuVar31[0x77] = (undefined8 ****)pppuStack_308;
      pppppuVar31[0x76] = (undefined8 ****)pppuStack_310;
      pppppuVar31[0x79] = (undefined8 ****)pppuStack_2f8;
      pppppuVar31[0x78] = (undefined8 ****)pppuStack_300;
      *(undefined4 *)(pppppuVar31 + 0x7a) = uVar13;
      pppppuVar31[0x7b] = (undefined8 ****)pppuVar14;
      pppppuVar31[0x7c] = (undefined8 ****)pppuVar15;
      pppuStack_2e8 = (undefined8 ***)0x0;
      pppuStack_2e0 = (undefined8 ***)0x0;
      pppppuVar31[0x7f] = (undefined8 ****)pppuStack_2c8;
      pppppuVar31[0x7e] = (undefined8 ****)pppuStack_2d0;
      pppppuVar31[0x81] = (undefined8 ****)pppuStack_2b8;
      pppppuVar31[0x80] = (undefined8 ****)pppuStack_2c0;
      pppppuVar31[0x84] = (undefined8 ****)pppuStack_2a0;
      pppppuVar31[0x83] = (undefined8 ****)pppuStack_2a8;
      pppppuVar31[0x82] = (undefined8 ****)pppuStack_2b0;
      pppppuVar31[0x87] = (undefined8 ****)pppuStack_288;
      pppppuVar31[0x86] = (undefined8 ****)pppuStack_290;
      pppppuVar31[0x8e] = (undefined8 ****)pppuStack_250;
      pppppuVar31[0x8d] = (undefined8 ****)pppuStack_258;
      pppppuVar31[0x8c] = (undefined8 ****)pppuStack_260;
      pppppuVar31[0x8b] = (undefined8 ****)pppuStack_268;
      pppppuVar31[0x8a] = (undefined8 ****)pppuStack_270;
      pppppuVar31[0x89] = (undefined8 ****)pppuStack_278;
      pppppuVar31[0x88] = (undefined8 ****)pppuStack_280;
      pppppuVar31[0x90] = (undefined8 ****)pppuVar16;
      pppppuVar31[0x91] = (undefined8 ****)pppuVar17;
      pppuStack_240 = (undefined8 ***)0x0;
      pppuStack_238 = (undefined8 ***)0x0;
      pppppuVar31[0x95] = (undefined8 ****)pppuStack_218;
      pppppuVar31[0x94] = (undefined8 ****)pppuStack_220;
      pppppuVar31[0x93] = (undefined8 ****)pppuStack_228;
      pppppuVar31[0x92] = (undefined8 ****)pppuStack_230;
      pppppuVar31[0x99] = (undefined8 ****)pppuStack_1f8;
      pppppuVar31[0x98] = (undefined8 ****)pppuStack_200;
      pppppuVar31[0x97] = (undefined8 ****)pppuStack_208;
      pppppuVar31[0x96] = (undefined8 ****)pppuStack_210;
      pppppuVar31[0x9c] = (undefined8 ****)pppuStack_1e0;
      pppppuVar31[0x9b] = (undefined8 ****)pppuStack_1e8;
      pppppuVar31[0x9a] = (undefined8 ****)pppuStack_1f0;
      pppppuVar31[0x9f] = (undefined8 ****)pppuStack_1c8;
      pppppuVar31[0x9e] = (undefined8 ****)pppuStack_1d0;
      pppppuVar31[0xa6] = (undefined8 ****)pppuStack_190;
      pppppuVar31[0xa5] = (undefined8 ****)pppuStack_198;
      pppppuVar31[0xa4] = (undefined8 ****)pppuStack_1a0;
      pppppuVar31[0xa3] = (undefined8 ****)pppuStack_1a8;
      pppppuVar31[0xa2] = (undefined8 ****)pppuStack_1b0;
      pppppuVar31[0xa1] = (undefined8 ****)pppuStack_1b8;
      pppppuVar31[0xa0] = (undefined8 ****)pppuStack_1c0;
      *(undefined4 *)(pppppuVar31 + 0xa8) = uVar18;
      pppppuVar31[0xa9] = (undefined8 ****)pppuVar19;
      pppppuVar31[0xaa] = (undefined8 ****)pppuVar20;
      pppppuVar31[0xab] = (undefined8 ****)pppuVar21;
      pppuStack_178 = (undefined8 ***)0x0;
      pppuStack_170 = (undefined8 ***)0x0;
      pppuStack_168 = (undefined8 ***)0x0;
      pppppuVar31[0xac] = (undefined8 ****)pppuVar22;
      pppppuVar31[0xad] = (undefined8 ****)pppuVar23;
      pppppuVar31[0xae] = (undefined8 ****)pppuVar24;
      pppuStack_160 = (undefined8 ***)0x0;
      pppuStack_158 = (undefined8 ***)0x0;
      pppuStack_150 = (undefined8 ***)0x0;
      pppppuVar31[0xaf] = (undefined8 ****)pppuVar25;
      pppppuVar31[0xb0] = (undefined8 ****)pppuVar26;
      pppppuVar31[0xb1] = (undefined8 ****)pppuVar27;
      pppuStack_148 = (undefined8 ***)0x0;
      pppuStack_140 = (undefined8 ***)0x0;
      pppuStack_138 = (undefined8 ***)0x0;
      pppppuVar31[0xb2] = (undefined8 ****)pppuVar28;
      *(undefined8 *)((long)pppppuVar31 + 0x5d2) = uStack_ee;
      *(ulong *)((long)pppppuVar31 + 0x5ca) = CONCAT26(uStack_f0,uStack_f6);
      pppppuVar31[0xb9] = (undefined8 ****)CONCAT62(uStack_f6,uStack_f8);
      pppppuVar31[0xb8] = (undefined8 ****)pppuStack_100;
      pppppuVar31[0xb7] = (undefined8 ****)pppuStack_108;
      pppppuVar31[0xb6] = (undefined8 ****)pppuStack_110;
      pppppuVar31[0xb5] = (undefined8 ****)pppuStack_118;
      pppppuVar31[0xb4] = (undefined8 ****)pppuStack_120;
      *(undefined1 *)(pppppuVar31 + 0xbc) = 0;
      *(undefined1 *)(pppppuVar31 + 0xbe) = 0;
      if (cStack_d0 == '\x01') {
        pppppuVar31[0xbd] = (undefined8 ****)pppuStack_d8;
        pppppuVar31[0xbc] = (undefined8 ****)pppuStack_e0;
        pppuStack_e0 = (undefined8 ****)0x0;
        pppuStack_d8 = (undefined8 ****)0x0;
        *(undefined1 *)(pppppuVar31 + 0xbe) = 1;
      }
      pppppuVar31[0xc1] = (undefined8 ****)pppuStack_b8;
      pppppuVar31[0xc0] = (undefined8 ****)pppuStack_c0;
      pppppuVar31[0xc2] = (undefined8 ****)pppuStack_b0;
      pppuStack_b8 = (undefined8 ***)0x0;
      pppuStack_b0 = (undefined8 ***)0x0;
      pppuStack_c0 = (undefined8 ***)0x0;
      *(undefined1 *)(pppppuVar31 + 0xc6) = 1;
      pppppuVar31[200] = (undefined8 ****)0x0;
      pppppuVar31[0xc9] = ppppuVar36;
      if ((undefined8 *****)ppppuStack_958 != (undefined8 *****)0x0) {
        pppppuVar2 = (undefined8 *****)(ppppuStack_958 + 1);
        do {
          ppppuVar36 = *pppppuVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppuVar2,0x10);
          if (bVar6) {
            *pppppuVar2 = (undefined8 ****)((long)ppppuVar36 + -4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (((ulong)ppppuVar36 & 0x1fffffffc) == 4) {
          do {
            ppppuVar36 = *pppppuVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppuVar2,0x10);
            if (bVar6) {
              *pppppuVar2 = (undefined8 ****)((long)ppppuVar36 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((undefined8 ****)((long)ppppuVar36 + -1) == (undefined8 ****)0x0) {
            (*(code *)(*ppppuStack_958)[1])();
          }
        }
      }
      ppppuStack_958 = pppppuVar31;
      if (ppppuStack_950 != (undefined8 ****)0x0) {
        func_0x0001092b4274(&ppppuStack_950);
      }
      ppppuStack_960 = pppppuVar31 + 0x68;
      ppppuStack_950 = pppppuVar31;
      FUN_10ace5114(&pppppuStack_380);
      pppppuStack_948 = (undefined8 *****)FUN_10aceba1c;
      __ZNSt13exception_ptrD1Ev(&lStack_968);
      goto LAB_10ace44f4;
    }
  }
  else {
    if (((uint)param_1[0x88][2] >> 1 & 1) != 0) {
      FUN_10ace4c5c(&pppppuStack_380,ppppppuVar1);
      FUN_10ace4d24(param_1 + 0x35,&pppppuStack_380);
      ppppppuVar30 = &pppppuStack_380;
      FUN_10a4feea0();
    }
    pppppuVar34 = *ppppppuVar1;
    if (pppppuVar34 == (undefined8 *****)0x0) goto LAB_10ace34a4;
LAB_10ace45f8:
    if (((uint)pppppuVar34[2] >> 1 & 1) != 0) {
      FUN_10ace4c5c(&pppppuStack_380,ppppppuVar1);
      FUN_10ace4d24(param_1 + 0x35,&pppppuStack_380);
      FUN_10a4feea0(&pppppuStack_380);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(&lStack_968);
LAB_10ace467c:
                    /* WARNING: Does not return */
  pcVar29 = (code *)SoftwareBreakpoint(1,0x10ace4680);
  (*pcVar29)();
}



/* Entry: 10ace4884; end: 10ace4c5b;  */

void FUN_10ace4884(long *param_1,long param_2,int param_3,undefined8 *param_4,uint param_5)

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  if (*(long *)(param_2 + 0x1b8) != 0) {
    uVar10 = (ulong)*(uint *)(param_2 + 0x1ac);
    if ((int)*(uint *)(param_2 + 0x1ac) < 3) {
      lVar11 = (long)*(int *)(param_2 + 0x1b4) * (long)*(int *)(param_2 + 0x1b0);
    }
    else {
      lVar11 = 1;
      piVar13 = *(int **)(param_2 + 0x1e8);
      do {
        lVar11 = lVar11 * *piVar13;
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 1;
      } while (uVar10 != 0);
    }
    if (lVar11 != 0) {
      lVar11 = param_2 + 0x1a8;
      uStack_c8 = CONCAT44(uStack_c8._4_4_,(undefined4)uStack_c8);
      if ((param_3 != 0) &&
         (uStack_c8 = CONCAT44(uStack_c8._4_4_,(undefined4)uStack_c8),
         *(float *)(param_2 + 0x3a0) != 1.0)) {
        uStack_d0 = 0x2010000;
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_c8 = lVar11;
        func_0x000109a41858((double)*(float *)(param_2 + 0x3a0),0,lVar11,&uStack_d0,0xffffffff);
        *(undefined4 *)(param_2 + 0x3a0) = 0x3f800000;
      }
      uStack_108 = param_4[9];
      uStack_110 = param_4[8];
      uStack_100 = param_4[10];
      uStack_f8 = (undefined4)param_4[0xb];
      uStack_ec = *(undefined8 *)((long)param_4 + 100);
      uStack_f4 = (undefined4)*(undefined8 *)((long)param_4 + 0x5c);
      uStack_f0 = (undefined4)((ulong)*(undefined8 *)((long)param_4 + 0x5c) >> 0x20);
      uStack_148 = param_4[1];
      uStack_150 = *param_4;
      uStack_140 = param_4[2];
      uStack_138 = param_4[3];
      uStack_130 = param_4[4];
      uStack_128 = param_4[5];
      uStack_118 = param_4[7];
      uStack_120 = param_4[6];
      plStack_d8 = (long *)param_4[0xf];
      uStack_e0 = param_4[0xe];
      if (param_4[0xf] != 0) {
        plVar1 = (long *)(param_4[0xf] + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      uVar4 = *(undefined4 *)(param_2 + 0x1b4);
      uVar5 = *(undefined4 *)(param_2 + 0x1b0);
      FUN_10a4cb5a0(&uStack_d0,&uStack_150);
      FUN_10a2288e0(&uStack_d0,CONCAT44(uVar5,uVar4));
      *(ulong *)(param_2 + 0x2d0) = CONCAT44(uStack_cc,uStack_d0);
      *(undefined4 *)(param_2 + 0x2d8) = (undefined4)uStack_c8;
      *(ulong *)(param_2 + 0x2e4) = CONCAT44(uStack_b8,uStack_bc);
      *(ulong *)(param_2 + 0x2dc) = CONCAT44(uStack_c0,uStack_c8._4_4_);
      *(undefined8 *)(param_2 + 0x2ec) = uStack_b4;
      *(undefined8 *)(param_2 + 0x31c) = uStack_84;
      *(undefined8 *)(param_2 + 0x314) = uStack_8c;
      *(undefined8 *)(param_2 + 0x32c) = uStack_74;
      *(undefined8 *)(param_2 + 0x324) = uStack_7c;
      *(undefined8 *)(param_2 + 0x334) = uStack_6c;
      *(undefined8 *)(param_2 + 0x2fc) = uStack_a4;
      *(undefined8 *)(param_2 + 0x2f4) = uStack_ac;
      *(undefined8 *)(param_2 + 0x30c) = uStack_94;
      *(undefined8 *)(param_2 + 0x304) = uStack_9c;
      FUN_10a0eca24(param_2 + 0x340,auStack_60);
      if (plStack_58 != (long *)0x0) {
        plVar1 = plStack_58 + 1;
        do {
          lVar12 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
      plVar1 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar2 = plStack_d8 + 1;
        do {
          lVar12 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      lVar9 = 0x548;
      __Znwm();
      _bzero();
      lVar12 = 0;
      auVar14 = NEON_fmov(0xbf800000,4);
      do {
        puVar3 = (undefined4 *)(lVar9 + lVar12);
        *puVar3 = 0x42ff0000;
        *(undefined8 *)(puVar3 + 3) = 0;
        *(undefined8 *)(puVar3 + 1) = 0;
        *(undefined8 *)(puVar3 + 7) = 0;
        *(undefined8 *)(puVar3 + 5) = 0;
        *(undefined8 *)(puVar3 + 0xb) = 0;
        *(undefined8 *)(puVar3 + 9) = 0;
        *(undefined8 *)(puVar3 + 0xe) = 0;
        *(undefined8 *)(puVar3 + 0xc) = 0;
        *(undefined8 *)(puVar3 + 0x16) = 0;
        *(undefined8 *)(puVar3 + 0x14) = 0;
        *(undefined4 **)(puVar3 + 0x10) = puVar3 + 2;
        *(undefined4 **)(puVar3 + 0x12) = puVar3 + 0x14;
        puVar3[0x18] = 0x42ff0000;
        *(undefined8 *)(puVar3 + 0x1b) = 0;
        *(undefined8 *)(puVar3 + 0x19) = 0;
        *(undefined8 *)(puVar3 + 0x1f) = 0;
        *(undefined8 *)(puVar3 + 0x1d) = 0;
        *(undefined8 *)(puVar3 + 0x23) = 0;
        *(undefined8 *)(puVar3 + 0x21) = 0;
        *(undefined8 *)(puVar3 + 0x26) = 0;
        *(undefined8 *)(puVar3 + 0x24) = 0;
        *(undefined8 *)(puVar3 + 0x2e) = 0;
        *(undefined8 *)(puVar3 + 0x2c) = 0;
        *(undefined4 **)(puVar3 + 0x28) = puVar3 + 0x1a;
        *(undefined4 **)(puVar3 + 0x2a) = puVar3 + 0x2c;
        puVar3[0x30] = 0x42ff0000;
        *(undefined8 *)(puVar3 + 0x3e) = 0;
        *(undefined8 *)(puVar3 + 0x3c) = 0;
        *(undefined8 *)(puVar3 + 0x3b) = 0;
        *(undefined8 *)(puVar3 + 0x39) = 0;
        *(undefined8 *)(puVar3 + 0x37) = 0;
        *(undefined8 *)(puVar3 + 0x35) = 0;
        *(undefined8 *)(puVar3 + 0x33) = 0;
        *(undefined8 *)(puVar3 + 0x31) = 0;
        *(undefined4 **)(puVar3 + 0x40) = puVar3 + 0x32;
        *(undefined4 **)(puVar3 + 0x42) = puVar3 + 0x44;
        *(undefined8 *)(puVar3 + 0x46) = 0;
        *(undefined8 *)(puVar3 + 0x44) = 0;
        *(undefined1 *)(puVar3 + 0x48) = 0;
        puVar3[0x4a] = 0xffffffff;
        *(undefined8 *)(puVar3 + 0x4b) = 0;
        *(long *)(puVar3 + 0x4f) = auVar14._8_8_;
        *(long *)(puVar3 + 0x4d) = auVar14._0_8_;
        puVar3[0x51] = 0x7fc00000;
        *(undefined8 *)(puVar3 + 0x52) = 0x3f8000007fc00000;
        *(undefined8 *)(puVar3 + 0x56) = 0;
        *(undefined8 *)(puVar3 + 0x54) = 0;
        puVar3[0x58] = 0x3f800000;
        *(undefined8 *)(puVar3 + 0x5b) = 0;
        *(undefined8 *)(puVar3 + 0x59) = 0;
        puVar3[0x5d] = 0x3f800000;
        *(undefined8 *)(puVar3 + 0x60) = 0;
        *(undefined8 *)(puVar3 + 0x5e) = 0;
        *(undefined8 *)(puVar3 + 0x62) = 0x3f800000;
        puVar3[100] = 0;
        *(undefined1 *)(puVar3 + 0x7a) = 0;
        *(undefined1 *)(puVar3 + 0x7b) = 0;
        *(undefined1 *)(puVar3 + 0x7c) = 0;
        *(undefined1 *)(puVar3 + 0x7d) = 0;
        *(undefined1 *)(puVar3 + 0x6a) = 0;
        *(undefined8 *)(puVar3 + 0x68) = 0;
        *(undefined8 *)(puVar3 + 0x66) = 0;
        puVar3[0x7e] = 0x3f800000;
        *(undefined1 *)(puVar3 + 0x82) = 0;
        *(undefined ***)(puVar3 + 0x80) = &PTR_DAT_110ba5598;
        *(undefined8 *)(puVar3 + 0x84) = 0;
        *(undefined1 *)(puVar3 + 0x86) = 0;
        puVar3[0x88] = 0x42ff0000;
        *(undefined8 *)(puVar3 + 0x8b) = 0;
        *(undefined8 *)(puVar3 + 0x89) = 0;
        *(undefined8 *)(puVar3 + 0x8f) = 0;
        *(undefined8 *)(puVar3 + 0x8d) = 0;
        *(undefined8 *)(puVar3 + 0x93) = 0;
        *(undefined8 *)(puVar3 + 0x91) = 0;
        *(undefined8 *)(puVar3 + 0x96) = 0;
        *(undefined8 *)(puVar3 + 0x94) = 0;
        *(undefined4 **)(puVar3 + 0x98) = puVar3 + 0x8a;
        *(undefined4 **)(puVar3 + 0x9a) = puVar3 + 0x9c;
        *(undefined8 *)(puVar3 + 0xa4) = 0;
        *(undefined8 *)(puVar3 + 0xa2) = 0;
        *(undefined8 *)(puVar3 + 0x9e) = 0;
        *(undefined8 *)(puVar3 + 0x9c) = 0;
        lVar12 = lVar12 + 0x298;
        *(undefined2 *)(puVar3 + 0xa0) = 0;
      } while (lVar12 != 0x530);
      *(undefined1 *)(lVar9 + 0x530) = 0;
      *(undefined8 *)(lVar9 + 0x540) = 0;
      *(undefined8 *)(lVar9 + 0x538) = 0;
      *param_1 = lVar9;
      if (param_5 < 2) {
        FUN_10aced290(lVar9 + (ulong)param_5 * 0x298,lVar11);
        return;
      }
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10ace4c1c);
      (*pcVar8)();
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10ace4c5c; end: 10ace4d23;  */

void FUN_10ace4c5c(undefined8 param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 auStack_2c8 [664];
  
  func_0x0001092af8bc(param_2);
  if ((*(byte *)(*param_2 + 0x330) & 1) != 0) {
    FUN_10acecb84(auStack_2c8,*param_2 + 0x98);
    plVar5 = (long *)*param_2;
    *param_2 = 0;
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    FUN_10acecb84(param_1,auStack_2c8);
    FUN_10a4feea0(auStack_2c8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ace4d10);
  (*pcVar4)();
}



/* Entry: 10ace4d24; end: 10ace5113;  */

undefined8 * FUN_10ace4d24(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_1[7] != 0) {
    piVar9 = (int *)(param_1[7] + 0x14);
    do {
      iVar3 = *piVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  if (0 < *(int *)((long)param_1 + 4)) {
    lVar4 = 0;
    lVar6 = param_1[8];
    do {
      *(undefined4 *)(lVar6 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 4));
  }
  piVar9 = (int *)((long)param_2 + 4);
  iVar3 = *piVar9;
  uVar5 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar5 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  uVar5 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  puVar7 = (undefined8 *)param_1[9];
  puVar8 = param_1 + 10;
  if (puVar7 != puVar8) {
    if (puVar7 != (undefined8 *)0x0) {
      _free(puVar7[-1]);
      iVar3 = *piVar9;
    }
    param_1[8] = param_1 + 1;
    param_1[9] = puVar8;
    puVar7 = puVar8;
  }
  puVar8 = (undefined8 *)param_2[9];
  if (iVar3 < 3) {
    *puVar7 = *puVar8;
    puVar7[1] = puVar8[1];
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = puVar8;
    param_2[8] = param_2 + 1;
    param_2[9] = param_2 + 10;
  }
  *(undefined4 *)param_2 = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  piVar9[0] = 0;
  piVar9[1] = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  if (param_1[0x13] != 0) {
    piVar9 = (int *)(param_1[0x13] + 0x14);
    do {
      iVar3 = *piVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xc);
    }
  }
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  if (0 < *(int *)((long)param_1 + 100)) {
    lVar4 = 0;
    lVar6 = param_1[0x14];
    do {
      *(undefined4 *)(lVar6 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 100));
  }
  piVar9 = (int *)((long)param_2 + 100);
  iVar3 = *piVar9;
  uVar5 = param_2[0xc];
  uVar11 = param_2[0xf];
  uVar10 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar11;
  param_1[0xe] = uVar10;
  uVar5 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar5;
  uVar5 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar5;
  puVar7 = (undefined8 *)param_1[0x15];
  puVar8 = param_1 + 0x16;
  if (puVar7 != puVar8) {
    if (puVar7 != (undefined8 *)0x0) {
      _free(puVar7[-1]);
      iVar3 = *piVar9;
    }
    param_1[0x14] = param_1 + 0xd;
    param_1[0x15] = puVar8;
    puVar7 = puVar8;
  }
  puVar8 = (undefined8 *)param_2[0x15];
  if (iVar3 < 3) {
    *puVar7 = *puVar8;
    puVar7[1] = puVar8[1];
  }
  else {
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = puVar8;
    param_2[0x14] = param_2 + 0xd;
    param_2[0x15] = param_2 + 0x16;
  }
  *(undefined4 *)(param_2 + 0xc) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x6c) = 0;
  piVar9[0] = 0;
  piVar9[1] = 0;
  *(undefined8 *)((long)param_2 + 0x7c) = 0;
  *(undefined8 *)((long)param_2 + 0x74) = 0;
  *(undefined8 *)((long)param_2 + 0x8c) = 0;
  *(undefined8 *)((long)param_2 + 0x84) = 0;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  FUN_10aceb66c(param_1 + 0x18,param_2 + 0x18);
  uVar5 = param_2[0x25];
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  param_1[0x25] = uVar5;
  *(undefined8 *)((long)param_1 + 0x134) = *(undefined8 *)((long)param_2 + 0x134);
  *(undefined8 *)((long)param_1 + 0x13c) = *(undefined8 *)((long)param_2 + 0x13c);
  *(undefined8 *)((long)param_1 + 0x144) = *(undefined8 *)((long)param_2 + 0x144);
  uVar10 = *(undefined8 *)((long)param_2 + 0x164);
  uVar5 = *(undefined8 *)((long)param_2 + 0x15c);
  uVar12 = *(undefined8 *)((long)param_2 + 0x174);
  uVar11 = *(undefined8 *)((long)param_2 + 0x16c);
  uVar14 = *(undefined8 *)((long)param_2 + 0x184);
  uVar13 = *(undefined8 *)((long)param_2 + 0x17c);
  *(undefined8 *)((long)param_1 + 0x18c) = *(undefined8 *)((long)param_2 + 0x18c);
  *(undefined8 *)((long)param_1 + 0x174) = uVar12;
  *(undefined8 *)((long)param_1 + 0x16c) = uVar11;
  *(undefined8 *)((long)param_1 + 0x184) = uVar14;
  *(undefined8 *)((long)param_1 + 0x17c) = uVar13;
  *(undefined8 *)((long)param_1 + 0x164) = uVar10;
  *(undefined8 *)((long)param_1 + 0x15c) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x14c);
  *(undefined8 *)((long)param_1 + 0x154) = *(undefined8 *)((long)param_2 + 0x154);
  *(undefined8 *)((long)param_1 + 0x14c) = uVar5;
  FUN_10a0eca24(param_1 + 0x33,param_2 + 0x33);
  uVar11 = param_2[0x35];
  uVar10 = param_2[0x38];
  uVar5 = param_2[0x37];
  param_1[0x36] = param_2[0x36];
  param_1[0x35] = uVar11;
  param_1[0x38] = uVar10;
  param_1[0x37] = uVar5;
  uVar12 = param_2[0x3c];
  uVar11 = param_2[0x3b];
  uVar10 = param_2[0x3e];
  uVar5 = param_2[0x3d];
  uVar14 = param_2[0x3a];
  uVar13 = param_2[0x39];
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)(param_2 + 0x3f);
  param_1[0x3c] = uVar12;
  param_1[0x3b] = uVar11;
  param_1[0x3e] = uVar10;
  param_1[0x3d] = uVar5;
  param_1[0x3a] = uVar14;
  param_1[0x39] = uVar13;
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
  uVar5 = param_2[0x42];
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_2 + 0x43);
  param_1[0x42] = uVar5;
  if (param_1[0x4b] != 0) {
    piVar9 = (int *)(param_1[0x4b] + 0x14);
    do {
      iVar3 = *piVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x44);
    }
  }
  param_1[0x4b] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  if (0 < *(int *)((long)param_1 + 0x224)) {
    lVar4 = 0;
    lVar6 = param_1[0x4c];
    do {
      *(undefined4 *)(lVar6 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0x224));
  }
  piVar9 = (int *)((long)param_2 + 0x224);
  uVar5 = param_2[0x44];
  uVar11 = param_2[0x47];
  uVar10 = param_2[0x46];
  iVar3 = *(int *)((long)param_2 + 0x224);
  param_1[0x45] = param_2[0x45];
  param_1[0x44] = uVar5;
  param_1[0x47] = uVar11;
  param_1[0x46] = uVar10;
  uVar5 = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  param_1[0x48] = uVar5;
  uVar5 = param_2[0x4a];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4a] = uVar5;
  puVar7 = (undefined8 *)param_1[0x4d];
  puVar8 = param_1 + 0x4e;
  if (puVar7 != puVar8) {
    if (puVar7 != (undefined8 *)0x0) {
      _free(puVar7[-1]);
      iVar3 = *piVar9;
    }
    param_1[0x4d] = puVar8;
    param_1[0x4c] = param_1 + 0x45;
    puVar7 = puVar8;
  }
  puVar8 = (undefined8 *)param_2[0x4d];
  if (iVar3 < 3) {
    *puVar7 = *puVar8;
    puVar7[1] = puVar8[1];
  }
  else {
    param_1[0x4d] = puVar8;
    param_1[0x4c] = param_2[0x4c];
    param_2[0x4d] = param_2 + 0x4e;
    param_2[0x4c] = param_2 + 0x45;
  }
  *(undefined4 *)(param_2 + 0x44) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x22c) = 0;
  piVar9[0] = 0;
  piVar9[1] = 0;
  *(undefined8 *)((long)param_2 + 0x23c) = 0;
  *(undefined8 *)((long)param_2 + 0x234) = 0;
  *(undefined8 *)((long)param_2 + 0x24c) = 0;
  *(undefined8 *)((long)param_2 + 0x244) = 0;
  param_2[0x4b] = 0;
  param_2[0x4a] = 0;
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  FUN_10a22b994(param_1 + 0x51,param_2 + 0x51);
  return param_1;
}



/* Entry: 10ace5114; end: 10ace51cf;  */

long FUN_10ace5114(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x2c0;
  FUN_10aceb588(&lStack_28);
  if (*(char *)(param_1 + 0x2b0) == '\x01') {
    func_0x00010a5020c0(param_1 + 0x2a0);
  }
  if (*(long *)(param_1 + 0x238) != 0) {
    *(long *)(param_1 + 0x240) = *(long *)(param_1 + 0x238);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x220) != 0) {
    *(long *)(param_1 + 0x228) = *(long *)(param_1 + 0x220);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x208) != 0) {
    *(long *)(param_1 + 0x210) = *(long *)(param_1 + 0x208);
    __ZdlPv();
  }
  func_0x00010a502068(param_1 + 0x140);
  _free(*(undefined8 *)(param_1 + 0x98));
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110af4b00;
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZdaPv();
  }
  *(long *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10ace51d0; end: 10ace578b;  */

long ***** FUN_10ace51d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  char cVar6;
  long ******pppppplVar7;
  ulong uVar8;
  long ****pppplVar9;
  undefined *******pppppppuVar10;
  long *****ppppplVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long lVar14;
  int iVar15;
  long ***ppplVar16;
  long ****pppplVar17;
  ulong uVar18;
  long ****pppplVar19;
  undefined *****pppppuStack_150;
  undefined *****pppppuStack_148;
  undefined *****pppppuStack_140;
  undefined ******ppppppuStack_138;
  ulong uStack_130;
  byte bStack_121;
  char cStack_119;
  char acStack_118 [8];
  long ***ppplStack_110;
  long ****apppplStack_108 [2];
  char cStack_f1;
  long ****pppplStack_f0;
  long ****pppplStack_e8;
  long ****pppplStack_e0;
  long *****ppppplStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long alStack_88 [3];
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_4[1];
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar8 = (ulong)*(byte *)((long)param_4 + 0x17);
  }
  FUN_10a003c90(&ppppplStack_d0,uVar8 + 1,&ppppppuStack_138);
  pppppplVar7 = (long ******)ppppplStack_d0;
  if (-1 < (long)uStack_c0) {
    pppppplVar7 = &ppppplStack_d0;
  }
  if (uVar8 != 0) {
    puVar1 = (undefined8 *)*param_4;
    if (-1 < *(char *)((long)param_4 + 0x17)) {
      puVar1 = param_4;
    }
    _memmove(pppppplVar7,puVar1,uVar8);
  }
  *(undefined2 *)((long)pppppplVar7 + uVar8) = 0x2f;
  pppppplVar7 = &ppppplStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppplVar7,&DAT_10f2ecb66,0xb);
  pppplStack_e8 = (long ****)pppppplVar7[1];
  pppplStack_f0 = (long ****)*pppppplVar7;
  pppplStack_e0 = (long ****)pppppplVar7[2];
  pppppplVar7[1] = (long *****)0x0;
  pppppplVar7[2] = (long *****)0x0;
  *pppppplVar7 = (long *****)0x0;
  if ((long)uStack_c0 < 0) {
    __ZdlPv(ppppplStack_d0);
  }
  uVar8 = 0;
  FUN_10ad01a04();
  if ((uVar8 & 1) == 0) {
    FUN_10a00946c(&UNK_10f6a1f0c);
LAB_10ace567c:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10ace5680);
    (*pcVar5)();
  }
  FUN_10ad01b0c(apppplStack_108,&pppplStack_f0);
  plStack_70 = (long *)0x0;
  func_0x0001094749d8(acStack_118,apppplStack_108,alStack_88,1,0);
  if (plStack_70 == alStack_88) {
    lVar14 = 0x20;
  }
  else {
    if (plStack_70 == (long *)0x0) goto LAB_10ace530c;
    lVar14 = 0x28;
  }
  (**(code **)(*plStack_70 + lVar14))();
LAB_10ace530c:
  if (acStack_118[0] == '\x01') {
    pppplVar13 = (long ****)(ppplStack_110 + 1);
    pppplVar17 = (long ****)*pppplVar13;
    if (pppplVar17 != (long ****)0x0) {
LAB_10ace532c:
      pppplVar9 = pppplVar17 + 4;
      func_0x00010a003d08(pppplVar9,&UNK_10f6a1f34);
      pppplVar19 = pppplVar17;
      if ('\0' < (char)pppplVar9) goto LAB_10ace5364;
      pppplVar9 = pppplVar17 + 4;
      func_0x00010a003d08(pppplVar9,&UNK_10f6a1f34);
      if ((char)pppplVar9 < '\0') {
        pppplVar19 = pppplVar17 + 1;
        pppplVar17 = pppplVar13;
        goto LAB_10ace5364;
      }
      pppplVar9 = pppplVar17;
      for (pppplVar19 = (long ****)*pppplVar17; pppplVar19 != (long ****)0x0;
          pppplVar19 = *(long *****)
                        ((long)pppplVar19 + ((ulong)((uint)(int)(char)pppplVar12 >> 4) & 8))) {
        pppplVar12 = pppplVar19 + 4;
        func_0x00010a003d08(pppplVar12,&UNK_10f6a1f34);
        if (-1 < (char)pppplVar12) {
          pppplVar9 = pppplVar19;
        }
      }
      for (pppplVar17 = (long ****)pppplVar17[1]; pppplVar17 != (long ****)0x0;
          pppplVar17 = *(long *****)((long)pppplVar17 + lVar14)) {
        pppplVar19 = pppplVar17 + 4;
        func_0x00010a003d08(pppplVar19,&UNK_10f6a1f34);
        lVar14 = 0;
        pppplVar12 = pppplVar17;
        if ((char)pppplVar19 < '\x01') {
          lVar14 = 8;
          pppplVar12 = pppplVar13;
        }
        pppplVar13 = pppplVar12;
      }
      if (pppplVar9 == pppplVar13) goto LAB_10ace536c;
      func_0x00010945a80c(acStack_118,&UNK_10f6a1f34);
      func_0x00010937c804(&ppppppuStack_138);
      uVar8 = uStack_130;
      pppppppuVar10 = (undefined *******)ppppppuStack_138;
      if (-1 < (char)bStack_121) {
        uVar8 = (ulong)bStack_121;
        pppppppuVar10 = &ppppppuStack_138;
      }
      uStack_c8 = 0;
      uStack_c0 = 0;
      ppppplStack_d0 = (long *****)0x0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (&ppppplStack_d0,uVar8,0);
      puVar4 = PTR___DefaultRuneLocale_11034bcf8;
      if (uVar8 != 0) {
        uVar18 = 0;
        do {
          cVar6 = *(char *)((long)pppppppuVar10 + uVar18);
          lVar14 = (long)cVar6;
          if ((-1 < lVar14) && ((*(uint *)(puVar4 + lVar14 * 4 + 0x3c) >> 0xf & 1) != 0)) {
            ___tolower();
            cVar6 = (char)lVar14;
          }
          uVar2 = uStack_c8;
          if (-1 < (long)uStack_c0) {
            uVar2 = uStack_c0 >> 0x38;
          }
          if (uVar2 < uVar18) goto LAB_10ace567c;
          pppppplVar7 = (long ******)ppppplStack_d0;
          if (-1 < (long)uStack_c0) {
            pppppplVar7 = &ppppplStack_d0;
          }
          *(char *)((long)pppppplVar7 + uVar18) = cVar6;
          uVar18 = uVar18 + 1;
        } while (uVar8 != uVar18);
      }
      if ((char)bStack_121 < '\0') {
        __ZdlPv(ppppppuStack_138);
      }
      uVar8 = uStack_c8;
      if (-1 < (long)uStack_c0) {
        uVar8 = uStack_c0 >> 0x38;
      }
      if (uVar8 == 2) {
        pppppplVar7 = (long ******)ppppplStack_d0;
        if (-1 < (long)uStack_c0) {
          pppppplVar7 = &ppppplStack_d0;
        }
        if (*(short *)pppppplVar7 != 0x6c6d) goto LAB_10ace5644;
        iVar15 = 1;
      }
      else {
        if (uVar8 == 8) {
          pppppplVar7 = (long ******)ppppplStack_d0;
          if (-1 < (long)uStack_c0) {
            pppppplVar7 = &ppppplStack_d0;
          }
          if (*pppppplVar7 == (long *****)0x6d726f6674616c70) {
            iVar15 = 2;
            goto LAB_10ace5648;
          }
        }
LAB_10ace5644:
        iVar15 = 0;
      }
LAB_10ace5648:
      *(int *)(param_1 + 0x448) = iVar15;
      if ((long)uStack_c0 < 0) {
        __ZdlPv(ppppplStack_d0);
        iVar15 = *(int *)(param_1 + 0x448);
      }
      if (iVar15 != 1) goto LAB_10ace541c;
      goto LAB_10ace5374;
    }
  }
LAB_10ace536c:
  *(undefined4 *)(param_1 + 0x448) = 1;
LAB_10ace5374:
  uVar8 = param_4[1];
  puVar1 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar8 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar1 = param_4;
  }
  pppppppuVar10 = &ppppppuStack_138;
  FUN_10a4f0e48(pppppppuVar10,puVar1,uVar8);
  func_0x00010ad031c0();
  if (*(char *)((long)pppppppuVar10 + 0x17) < '\0') {
    func_0x000107c3192c(&pppppuStack_150,*pppppppuVar10,pppppppuVar10[1]);
  }
  else {
    pppppuStack_148 = (undefined *****)pppppppuVar10[1];
    pppppuStack_150 = (undefined *****)*pppppppuVar10;
    pppppuStack_140 = (undefined *****)pppppppuVar10[2];
  }
  func_0x000109389d34(&ppppplStack_d0,&ppppppuStack_138,&pppppuStack_150,acStack_118,param_2,param_3
                     );
  FUN_10ace5808(param_1 + 0x50,&ppppplStack_d0);
  FUN_10acef2f8(&ppppplStack_d0);
  if ((long)pppppuStack_140 < 0) {
    __ZdlPv(pppppuStack_150);
  }
  ppppppuStack_138 = (undefined ******)&PTR_DAT_110af47c8;
  if (cStack_119 < '\0') {
    __ZdlPv(uStack_130);
  }
LAB_10ace541c:
  ppppplVar11 = (long *****)&ppplStack_110;
  func_0x000109380ffc(ppppplVar11,acStack_118[0]);
  if (cStack_f1 < '\0') {
    ppppplVar11 = (long *****)apppplStack_108[0];
    __ZdlPv();
  }
  if ((long)pppplStack_e0 < 0) {
    ppppplVar11 = (long *****)pppplStack_f0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if ((long)uStack_c0 < 0) {
      __ZdlPv(ppppplStack_d0);
    }
    if ((char)bStack_121 < '\0') {
      __ZdlPv(ppppppuStack_138);
    }
    func_0x000109380ffc(&ppplStack_110,acStack_118[0]);
    if (cStack_f1 < '\0') {
      __ZdlPv(apppplStack_108[0]);
    }
    if ((long)pppplStack_e0 < 0) {
      __ZdlPv(pppplStack_f0);
    }
    __Unwind_Resume();
    _free(ppppplVar11[0xf]);
    if (ppppplVar11[2] != (long ****)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppplVar13 = *ppppplVar11;
    if (pppplVar13 != (long ****)0x0) {
      pppplVar17 = pppplVar13 + 1;
      do {
        ppplVar16 = *pppplVar17;
        cVar6 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppplVar17,0x10);
        if (bVar3) {
          *pppplVar17 = (long ***)((long)ppplVar16 + -4);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (((ulong)ppplVar16 & 0x1fffffffc) == 4) {
        do {
          ppplVar16 = *pppplVar17;
          cVar6 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppplVar17,0x10);
          if (bVar3) {
            *pppplVar17 = (long ***)((long)ppplVar16 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((long ***)((long)ppplVar16 + -1) == (long ***)0x0) {
          (*(code *)(*pppplVar13)[1])();
        }
      }
    }
    return ppppplVar11;
  }
  return ppppplVar11;
LAB_10ace5364:
  pppplVar13 = pppplVar17;
  pppplVar17 = (long ****)*pppplVar19;
  if ((long ****)*pppplVar19 == (long ****)0x0) goto LAB_10ace536c;
  goto LAB_10ace532c;
}



/* Entry: 10ace578c; end: 10ace5807;  */

long * FUN_10ace578c(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  _free(param_1[0xf]);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10ace5808; end: 10ace58a7;  */

undefined8 * FUN_10ace5808(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 9) == '\x01') {
    uVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar1;
    FUN_10aceced4(param_1 + 5,param_2 + 5);
    FUN_10aced040(param_1 + 1,param_2 + 1);
  }
  else {
    *param_1 = 0;
    param_1[4] = 0;
    param_1[8] = 0;
    *param_1 = *param_2;
    *param_2 = 0;
    FUN_10aceced4(param_1 + 5,param_2 + 5);
    FUN_10aced040(param_1 + 1,param_2 + 1);
    *(undefined1 *)(param_1 + 9) = 1;
  }
  return param_1;
}



/* Entry: 10ace58a8; end: 10ace5b0b;  */

void FUN_10ace58a8(undefined8 param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  undefined2 *puVar16;
  undefined **ppuVar17;
  uint *extraout_x8;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  int *piVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 auStack_178 [4];
  undefined8 uStack_168;
  undefined4 auStack_160 [2];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 auStack_148 [2];
  uint *puStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined2 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  uint *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d0;
  undefined4 uStack_cc;
  undefined1 uStack_c8;
  undefined1 uStack_bc;
  long lStack_b8;
  uint *puStack_b0;
  uint *puStack_a8;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  uint5 uStack_80;
  undefined1 uStack_79;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = 0xffff;
  uStack_96 = 0x7fff;
  uStack_94 = 3;
  uStack_90 = 0x168;
  uStack_88 = 1;
  uStack_84 = uStack_84 & 0xffffff00;
  uVar18 = (ulong)_uStack_80 >> 0x28;
  uVar4 = (uint)_uStack_80;
  uStack_80 = (uint5)(uVar4 & 0xffffff00);
  _uStack_80 = CONCAT35((int3)uVar18,uStack_80);
  plVar9 = &lStack_b8;
  lStack_b8 = param_2;
  func_0x0001098ac018(plVar9,&UNK_10e4a7ac1,0x23,&uStack_98,0,1);
  uStack_d0 = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  lStack_f0 = 0;
  uStack_d8 = 0;
  uStack_cc = 0x1000000;
  uStack_c8 = 0;
  uStack_bc = 0;
  plVar10 = &lStack_b8;
  func_0x0001098ac018(&lStack_f0,plVar10,&UNK_10e4c90da,0x22,&lStack_f0,0,1);
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    __ZdlPv();
  }
  plVar11 = &lStack_b8;
  func_0x0001098ac018(plVar11,&UNK_10e4c8fa1,0x27,&uStack_98,0,1);
  uStack_98 = 0;
  uStack_8c = 0x3cf5c28f;
  uStack_88 = 0x3f400000;
  uStack_94 = 0x3e800000;
  uStack_90 = 0x40900000;
  uStack_84 = uStack_84 & 0xffffff00;
  _uStack_80 = CONCAT17(uStack_79,0x40e00000);
  plVar12 = &lStack_b8;
  func_0x0001098ac018(plVar12,&UNK_10e4c8fc9,0x23,&uStack_98,1,1);
  puStack_b0 = (uint *)0x0;
  puStack_a8 = (uint *)0x0;
  uStack_a0 = 0;
  uStack_94 = SUB84(plVar9,0);
  uStack_98 = 0;
  uStack_96 = 0x2000;
  uStack_90 = SUB84(plVar10,0);
  uStack_8c = SUB84(plVar11,0);
  uStack_88 = SUB84(plVar12,0);
  FUN_10a26ebc0(&puStack_b0,0,&uStack_98,&uStack_84,5);
  uStack_98 = 0xdad0;
  uStack_96 = 0xace;
  uStack_94 = 1;
  uStack_90 = 0x10c6d168;
  uStack_8c = 1;
  uStack_88 = (undefined4)param_1;
  uStack_84 = (uint)((ulong)param_1 >> 0x20);
  param_2 = param_2 + 0x18;
  puVar16 = &uStack_98;
  _uStack_80 = param_4;
  FUN_10a4fe9a0(param_2,puVar16,&puStack_b0);
  iVar15 = (int)puVar16;
  (**(code **)CONCAT44(uStack_8c,uStack_90))(&uStack_90);
  puVar13 = puStack_b0;
  if (puStack_b0 != (uint *)0x0) {
    puStack_a8 = puStack_b0;
    __ZdlPv();
  }
  *param_3 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (**(code **)CONCAT44(uStack_8c,uStack_90))(&uStack_90);
  if (puStack_b0 != (uint *)0x0) {
    puStack_a8 = puStack_b0;
    __ZdlPv();
  }
  puVar14 = puVar13;
  __Unwind_Resume();
  pcStack_f8 = FUN_10ace5b0c;
  lVar20 = *(long *)(puVar14 + 4);
  uVar4 = puVar14[1];
  uVar18 = (ulong)uVar4;
  plStack_130 = plVar10;
  puStack_128 = &uStack_98;
  uStack_120 = param_1;
  uStack_118 = param_4;
  lStack_110 = param_2;
  puStack_108 = puVar13;
  puStack_100 = &stack0xfffffffffffffff0;
  if (lVar20 != 0) {
    if ((int)uVar4 < 3) {
      lVar22 = (long)(int)puVar14[3] * (long)(int)puVar14[2];
    }
    else {
      lVar22 = 1;
      piVar21 = *(int **)(puVar14 + 0x10);
      uVar24 = uVar18;
      do {
        lVar22 = lVar22 * *piVar21;
        uVar24 = uVar24 - 1;
        piVar21 = piVar21 + 1;
      } while (uVar24 != 0);
    }
    if (lVar22 != 0) {
      if ((*puVar14 & 0xfff) != 0) {
        do {
          bVar7 = bRam00000001137ecaf1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x1137ecaf1,0x10);
          if (bVar6) {
            bRam00000001137ecaf1 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((bVar7 & 1) == 0) {
          func_0x00010ae02ecc(0,*puVar14 & 0xfff);
          ppuVar17 = &PTR_PTR_113307128;
          FUN_10ae079a0();
          func_0x00010ae02edc();
          FUN_10ae07cd4(ppuVar17,&PTR_PTR_113307128);
        }
        *extraout_x8 = 0x42ff0000;
        extraout_x8[3] = 0;
        extraout_x8[4] = 0;
        extraout_x8[1] = 0;
        extraout_x8[2] = 0;
        extraout_x8[7] = 0;
        extraout_x8[8] = 0;
        extraout_x8[5] = 0;
        extraout_x8[6] = 0;
        extraout_x8[0xb] = 0;
        extraout_x8[0xc] = 0;
        extraout_x8[9] = 0;
        extraout_x8[10] = 0;
        extraout_x8[0xe] = 0;
        extraout_x8[0xf] = 0;
        extraout_x8[0xc] = 0;
        extraout_x8[0xd] = 0;
        puVar13 = extraout_x8 + 0x14;
        puVar13[0] = 0;
        puVar13[1] = 0;
        *(uint **)(extraout_x8 + 0x10) = extraout_x8 + 2;
        *(uint **)(extraout_x8 + 0x12) = puVar13;
        extraout_x8[0x16] = 0;
        extraout_x8[0x17] = 0;
        return;
      }
      if (iVar15 == 0) {
        do {
          bVar7 = bRam00000001137ecaf0;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x1137ecaf0,0x10);
          if (bVar6) {
            bRam00000001137ecaf0 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((bVar7 & 1) == 0) {
          if ((int)uVar4 < 3) {
            lVar20 = (long)(int)puVar14[3] * (long)(int)puVar14[2];
          }
          else {
            lVar20 = 1;
            piVar21 = *(int **)(puVar14 + 0x10);
            do {
              lVar20 = lVar20 * *piVar21;
              uVar18 = uVar18 - 1;
              piVar21 = piVar21 + 1;
            } while (uVar18 != 0);
          }
          func_0x00010ae02f70(0,lVar20);
          ppuVar17 = &PTR_PTR_113307228;
          FUN_10ae079a0();
          func_0x00010ae02f80();
          FUN_10ae07cd4(ppuVar17,&PTR_PTR_113307228);
        }
      }
      if ((bRam00000001137ecb18 & 1) == 0) {
        iVar8 = 0x137ecb18;
        ___cxa_guard_acquire();
        if (iVar8 != 0) {
          FUN_10acee048();
          ___cxa_atexit(&SUB_10567aa40,0x1137ecb88,0x100000000);
          ___cxa_guard_release(0x1137ecb18);
        }
      }
      if ((bRam00000001137ecb20 & 1) == 0) {
        iVar8 = 0x137ecb20;
        ___cxa_guard_acquire();
        if (iVar8 != 0) {
          FUN_10acee11c();
          ___cxa_atexit(&SUB_10567aa40,0x1137ecbe8,0x100000000);
          ___cxa_guard_release(0x1137ecb20);
        }
      }
      if (iVar15 == 2) {
        uStack_158 = 0x1137ecbe8;
LAB_10ace5d44:
        *extraout_x8 = 0x42ff0000;
        extraout_x8[3] = 0;
        extraout_x8[4] = 0;
        extraout_x8[1] = 0;
        extraout_x8[2] = 0;
        extraout_x8[7] = 0;
        extraout_x8[8] = 0;
        extraout_x8[5] = 0;
        extraout_x8[6] = 0;
        extraout_x8[0xb] = 0;
        extraout_x8[0xc] = 0;
        extraout_x8[9] = 0;
        extraout_x8[10] = 0;
        extraout_x8[0xe] = 0;
        extraout_x8[0xf] = 0;
        extraout_x8[0xc] = 0;
        extraout_x8[0xd] = 0;
        puVar13 = extraout_x8 + 0x14;
        puVar13[0] = 0;
        puVar13[1] = 0;
        *(uint **)(extraout_x8 + 0x10) = extraout_x8 + 2;
        *(uint **)(extraout_x8 + 0x12) = puVar13;
        extraout_x8[0x16] = 0;
        extraout_x8[0x17] = 0;
        uStack_138 = 0;
        auStack_148[0] = 0x1010000;
        uStack_150 = 0;
        auStack_160[0] = 0x1010000;
        auStack_178[0] = 0x2010000;
        uStack_168 = 0;
        puStack_140 = puVar14;
        func_0x000109a41f20(auStack_148,auStack_160,auStack_178);
        return;
      }
      if (iVar15 == 3) {
        uStack_158 = 0x1137ecb88;
        goto LAB_10ace5d44;
      }
      uVar25 = *(undefined8 *)puVar14;
      uVar27 = *(undefined8 *)(puVar14 + 6);
      uVar26 = *(undefined8 *)(puVar14 + 4);
      uVar4 = puVar14[1];
      *(undefined8 *)(extraout_x8 + 2) = *(undefined8 *)(puVar14 + 2);
      *(undefined8 *)extraout_x8 = uVar25;
      *(undefined8 *)(extraout_x8 + 6) = uVar27;
      *(undefined8 *)(extraout_x8 + 4) = uVar26;
      lVar20 = *(long *)(puVar14 + 0xe);
      uVar27 = *(undefined8 *)(puVar14 + 8);
      uVar26 = *(undefined8 *)(puVar14 + 0xe);
      uVar25 = *(undefined8 *)(puVar14 + 0xc);
      *(undefined8 *)(extraout_x8 + 10) = *(undefined8 *)(puVar14 + 10);
      *(undefined8 *)(extraout_x8 + 8) = uVar27;
      *(undefined8 *)(extraout_x8 + 0xe) = uVar26;
      *(undefined8 *)(extraout_x8 + 0xc) = uVar25;
      puVar13 = extraout_x8 + 0x14;
      puVar13[0] = 0;
      puVar13[1] = 0;
      *(uint **)(extraout_x8 + 0x10) = extraout_x8 + 2;
      *(uint **)(extraout_x8 + 0x12) = puVar13;
      extraout_x8[0x16] = 0;
      extraout_x8[0x17] = 0;
      if (lVar20 != 0) {
        piVar21 = (int *)(lVar20 + 0x14);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar6) {
            *piVar21 = *piVar21 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar4 = puVar14[1];
      }
      goto joined_r0x00010ace5c60;
    }
  }
  *extraout_x8 = *puVar14;
  extraout_x8[1] = uVar4;
  *(undefined8 *)(extraout_x8 + 2) = *(undefined8 *)(puVar14 + 2);
  *(long *)(extraout_x8 + 4) = lVar20;
  uVar25 = *(undefined8 *)(puVar14 + 6);
  *(undefined8 *)(extraout_x8 + 8) = *(undefined8 *)(puVar14 + 8);
  *(undefined8 *)(extraout_x8 + 6) = uVar25;
  uVar25 = *(undefined8 *)(puVar14 + 10);
  *(undefined8 *)(extraout_x8 + 0xc) = *(undefined8 *)(puVar14 + 0xc);
  *(undefined8 *)(extraout_x8 + 10) = uVar25;
  lVar20 = *(long *)(puVar14 + 0xe);
  *(long *)(extraout_x8 + 0xe) = lVar20;
  *(uint **)(extraout_x8 + 0x10) = extraout_x8 + 2;
  puVar13 = extraout_x8 + 0x14;
  puVar13[0] = 0;
  puVar13[1] = 0;
  *(uint **)(extraout_x8 + 0x12) = puVar13;
  extraout_x8[0x16] = 0;
  extraout_x8[0x17] = 0;
  if (lVar20 != 0) {
    piVar21 = (int *)(lVar20 + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar6) {
        *piVar21 = *piVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar4 = puVar14[1];
  }
joined_r0x00010ace5c60:
  if ((int)uVar4 < 3) {
    puVar19 = *(undefined8 **)(puVar14 + 0x12);
    puVar23 = *(undefined8 **)(extraout_x8 + 0x12);
    *puVar23 = *puVar19;
    puVar23[1] = puVar19[1];
    return;
  }
  extraout_x8[1] = 0;
  func_0x000109a844cc(extraout_x8,puVar14[1],0,0,0);
  if (0 < (int)extraout_x8[1]) {
    lVar20 = 0;
    lVar22 = *(long *)(puVar14 + 0x10);
    lVar2 = *(long *)(puVar14 + 0x12);
    lVar1 = *(long *)(extraout_x8 + 0x10);
    lVar3 = *(long *)(extraout_x8 + 0x12);
    do {
      *(undefined4 *)(lVar1 + lVar20 * 4) = *(undefined4 *)(lVar22 + lVar20 * 4);
      *(undefined8 *)(lVar3 + lVar20 * 8) = *(undefined8 *)(lVar2 + lVar20 * 8);
      lVar20 = lVar20 + 1;
    } while (lVar20 < (int)extraout_x8[1]);
  }
  return;
}



/* Entry: 10ace5b0c; end: 10ace5ee7;  */

void FUN_10ace5b0c(uint *param_1,uint *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  uint *puVar13;
  int *piVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 auStack_88 [2];
  uint *puStack_80;
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  uint *puStack_50;
  undefined8 uStack_48;
  
  lVar12 = *(long *)(param_2 + 4);
  uVar4 = param_2[1];
  uVar10 = (ulong)uVar4;
  if (lVar12 != 0) {
    if ((int)uVar4 < 3) {
      lVar15 = (long)(int)param_2[3] * (long)(int)param_2[2];
    }
    else {
      lVar15 = 1;
      piVar14 = *(int **)(param_2 + 0x10);
      uVar17 = uVar10;
      do {
        lVar15 = lVar15 * *piVar14;
        uVar17 = uVar17 - 1;
        piVar14 = piVar14 + 1;
      } while (uVar17 != 0);
    }
    if (lVar15 != 0) {
      if ((*param_2 & 0xfff) != 0) {
        do {
          bVar7 = bRam00000001137ecaf1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x1137ecaf1,0x10);
          if (bVar6) {
            bRam00000001137ecaf1 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((bVar7 & 1) == 0) {
          func_0x00010ae02ecc(0,*param_2 & 0xfff);
          ppuVar9 = &PTR_PTR_113307128;
          FUN_10ae079a0();
          func_0x00010ae02edc();
          FUN_10ae07cd4(ppuVar9,&PTR_PTR_113307128);
        }
        *param_1 = 0x42ff0000;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        puVar13 = param_1 + 0x14;
        puVar13[0] = 0;
        puVar13[1] = 0;
        *(uint **)(param_1 + 0x10) = param_1 + 2;
        *(uint **)(param_1 + 0x12) = puVar13;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        return;
      }
      if (param_3 == 0) {
        do {
          bVar7 = bRam00000001137ecaf0;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x1137ecaf0,0x10);
          if (bVar6) {
            bRam00000001137ecaf0 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((bVar7 & 1) == 0) {
          if ((int)uVar4 < 3) {
            lVar12 = (long)(int)param_2[3] * (long)(int)param_2[2];
          }
          else {
            lVar12 = 1;
            piVar14 = *(int **)(param_2 + 0x10);
            do {
              lVar12 = lVar12 * *piVar14;
              uVar10 = uVar10 - 1;
              piVar14 = piVar14 + 1;
            } while (uVar10 != 0);
          }
          func_0x00010ae02f70(0,lVar12);
          ppuVar9 = &PTR_PTR_113307228;
          FUN_10ae079a0();
          func_0x00010ae02f80();
          FUN_10ae07cd4(ppuVar9,&PTR_PTR_113307228);
        }
      }
      if ((bRam00000001137ecb18 & 1) == 0) {
        iVar8 = 0x137ecb18;
        ___cxa_guard_acquire();
        if (iVar8 != 0) {
          FUN_10acee048();
          ___cxa_atexit(&SUB_10567aa40,0x1137ecb88,0x100000000);
          ___cxa_guard_release(0x1137ecb18);
        }
      }
      if ((bRam00000001137ecb20 & 1) == 0) {
        iVar8 = 0x137ecb20;
        ___cxa_guard_acquire();
        if (iVar8 != 0) {
          FUN_10acee11c();
          ___cxa_atexit(&SUB_10567aa40,0x1137ecbe8,0x100000000);
          ___cxa_guard_release(0x1137ecb20);
        }
      }
      if (param_3 == 2) {
        uStack_68 = 0x1137ecbe8;
LAB_10ace5d44:
        *param_1 = 0x42ff0000;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        puVar13 = param_1 + 0x14;
        puVar13[0] = 0;
        puVar13[1] = 0;
        *(uint **)(param_1 + 0x10) = param_1 + 2;
        *(uint **)(param_1 + 0x12) = puVar13;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        uStack_48 = 0;
        auStack_58[0] = 0x1010000;
        uStack_60 = 0;
        auStack_70[0] = 0x1010000;
        auStack_88[0] = 0x2010000;
        uStack_78 = 0;
        puStack_80 = param_1;
        puStack_50 = param_2;
        func_0x000109a41f20(auStack_58,auStack_70,auStack_88);
        return;
      }
      if (param_3 == 3) {
        uStack_68 = 0x1137ecb88;
        goto LAB_10ace5d44;
      }
      uVar18 = *(undefined8 *)param_2;
      uVar20 = *(undefined8 *)(param_2 + 6);
      uVar19 = *(undefined8 *)(param_2 + 4);
      uVar4 = param_2[1];
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar18;
      *(undefined8 *)(param_1 + 6) = uVar20;
      *(undefined8 *)(param_1 + 4) = uVar19;
      lVar12 = *(long *)(param_2 + 0xe);
      uVar20 = *(undefined8 *)(param_2 + 8);
      uVar19 = *(undefined8 *)(param_2 + 0xe);
      uVar18 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 8) = uVar20;
      *(undefined8 *)(param_1 + 0xe) = uVar19;
      *(undefined8 *)(param_1 + 0xc) = uVar18;
      puVar13 = param_1 + 0x14;
      puVar13[0] = 0;
      puVar13[1] = 0;
      *(uint **)(param_1 + 0x10) = param_1 + 2;
      *(uint **)(param_1 + 0x12) = puVar13;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      if (lVar12 != 0) {
        piVar14 = (int *)(lVar12 + 0x14);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar6) {
            *piVar14 = *piVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar4 = param_2[1];
      }
      goto joined_r0x00010ace5c60;
    }
  }
  *param_1 = *param_2;
  param_1[1] = uVar4;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(long *)(param_1 + 4) = lVar12;
  uVar18 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar18;
  uVar18 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = uVar18;
  lVar12 = *(long *)(param_2 + 0xe);
  *(long *)(param_1 + 0xe) = lVar12;
  *(uint **)(param_1 + 0x10) = param_1 + 2;
  puVar13 = param_1 + 0x14;
  puVar13[0] = 0;
  puVar13[1] = 0;
  *(uint **)(param_1 + 0x12) = puVar13;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (lVar12 != 0) {
    piVar14 = (int *)(lVar12 + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar6) {
        *piVar14 = *piVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar4 = param_2[1];
  }
joined_r0x00010ace5c60:
  if ((int)uVar4 < 3) {
    puVar11 = *(undefined8 **)(param_2 + 0x12);
    puVar16 = *(undefined8 **)(param_1 + 0x12);
    *puVar16 = *puVar11;
    puVar16[1] = puVar11[1];
    return;
  }
  param_1[1] = 0;
  func_0x000109a844cc(param_1,param_2[1],0,0,0);
  if (0 < (int)param_1[1]) {
    lVar12 = 0;
    lVar15 = *(long *)(param_2 + 0x10);
    lVar2 = *(long *)(param_2 + 0x12);
    lVar1 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x12);
    do {
      *(undefined4 *)(lVar1 + lVar12 * 4) = *(undefined4 *)(lVar15 + lVar12 * 4);
      *(undefined8 *)(lVar3 + lVar12 * 8) = *(undefined8 *)(lVar2 + lVar12 * 8);
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[1]);
  }
  return;
}



/* Entry: 10ace5ee8; end: 10ace6033;  */

long FUN_10ace5ee8(long param_1)

{
  long lVar1;
  
  func_0x00010a5024d8(param_1 + 0x538);
  lVar1 = 0x298;
  do {
    FUN_10a4feea0(param_1 + lVar1);
    lVar1 = lVar1 + -0x298;
  } while (lVar1 != -0x298);
  return param_1;
}



/* Entry: 10ace6034; end: 10ace6157;  */

void FUN_10ace6034(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar3 = *(long **)(param_1 + 4);
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 2);
      if ((plVar6 != (long *)0x0) &&
         (plVar4 = plVar6, (**(code **)(*plVar6 + 0x50))(plVar6,8), ((ulong)plVar4 & 1) != 0)) {
        if (*param_1 != 1) {
          *param_1 = 1;
          (**(code **)(*plVar6 + 0x18))(plVar6,8,param_4);
        }
        (**(code **)(*plVar6 + 0x10))(plVar6,param_3,param_2,param_4,1,8);
      }
      plVar6 = plVar3 + 1;
      do {
        lVar5 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 10ace6158; end: 10ace6203;  */

void FUN_10ace6158(int *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if ((*param_1 == 1) && (plVar3 = *(long **)(param_1 + 4), plVar3 != (long *)0x0)) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      plVar4 = *(long **)(param_1 + 2);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,8);
        *param_1 = 0;
      }
      plVar4 = plVar3 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  return;
}



/* Entry: 10ace6204; end: 10ace6b0f;  */

long * FUN_10ace6204(long *param_1,undefined **param_2,undefined8 *param_3,long param_4,long param_5
                    ,long param_6)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_580;
  long *plStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  long *plStack_558;
  double dStack_550;
  double dStack_548;
  double dStack_540;
  double dStack_538;
  double dStack_530;
  double dStack_528;
  double dStack_520;
  double dStack_518;
  double dStack_510;
  double dStack_508;
  double dStack_500;
  double dStack_4f8;
  double dStack_4f0;
  double dStack_4e8;
  double dStack_4e0;
  double dStack_4d8;
  undefined1 auStack_4d0 [72];
  undefined8 uStack_488;
  long *plStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined8 uStack_40c;
  undefined8 uStack_400;
  long *plStack_3f8;
  double *pdStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined **ppuStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  double *pdStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  ulong uStack_310;
  long *plStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  long *plStack_2a8;
  undefined8 uStack_2a0;
  undefined **ppuStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  double *pdStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  long *plStack_1f8;
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
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined2 uStack_a8;
  undefined1 uStack_a0;
  long *plStack_98;
  char cStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_6 + 0x2f8) & 1) == 0) goto LAB_10ace6a54;
  if (*(char *)(param_6 + 0x2da) == '\x01') {
    if (*(char *)(param_6 + 0x2d9) == '\x02') {
      lVar10 = param_1[1];
      uStack_580 = *param_3;
      plVar12 = (long *)param_3[1];
      if (plVar12 != (long *)0x0) {
        plVar13 = plVar12 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar13 = *(long **)(lVar10 + 0x20);
      plStack_578 = plVar12;
      if (plVar13 == (long *)0x0) {
        FUN_10acef39c(&uStack_310,&ppuStack_3a0);
        plVar13 = plStack_308;
        uVar4 = uStack_310;
        uStack_310 = 0;
        plStack_308 = (long *)0x0;
        plVar14 = *(long **)(lVar10 + 0x28);
        *(long **)(lVar10 + 0x28) = plVar13;
        *(ulong *)(lVar10 + 0x20) = uVar4;
        if (plVar14 != (long *)0x0) {
          plVar13 = plVar14 + 1;
          do {
            lVar11 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        plVar13 = plStack_308;
        if (plStack_308 != (long *)0x0) {
          plVar14 = plStack_308 + 1;
          do {
            lVar11 = *plVar14;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_308 + 0x10))(plStack_308);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        FUN_10a4ec3f0(*(long *)(lVar10 + 0x20) + 0x38,*(long *)(lVar10 + 0x18) + 0x10);
        lVar11 = *(long *)(lVar10 + 0x20);
        lVar15 = *(long *)(lVar10 + 0x10);
        uVar17 = *(undefined8 *)(lVar10 + 0x10);
        uVar16 = *(undefined8 *)(lVar10 + 8);
        if (lVar15 != 0) {
          plVar13 = (long *)(lVar15 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar6 = *(long *)(lVar11 + 0x498);
        *(undefined8 *)(lVar11 + 0x498) = uVar17;
        *(undefined8 *)(lVar11 + 0x490) = uVar16;
        if (lVar6 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (lVar15 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(lVar15);
        }
        lVar11 = *(long *)(lVar10 + 0x20);
        *(code **)(lVar11 + 0x450) = FUN_10acefa0c;
        (*(code *)**(undefined8 **)(lVar11 + 0x458))(lVar11 + 0x458);
        *(undefined ***)(lVar11 + 0x458) = &PTR_FUN_110c6d3e0;
        *(long *)(lVar11 + 0x460) = lVar10;
        plVar13 = *(long **)(lVar10 + 0x20);
      }
      plVar14 = plStack_578;
      uVar16 = uStack_580;
      if (plStack_578 != (long *)0x0) {
        plVar7 = plStack_578 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar7 = plVar13;
      uStack_560 = uStack_580;
      plStack_558 = plStack_578;
      FUN_10ace2b08();
      if ((int)plVar7 == 0) {
        puVar1 = (undefined8 *)(param_5 + 0x198);
        uStack_428 = *(undefined8 *)(param_5 + 0x1e0);
        uStack_430 = *(undefined8 *)(param_5 + 0x1d8);
        uStack_420 = *(undefined8 *)(param_5 + 0x1e8);
        uStack_418 = (undefined4)*(undefined8 *)(param_5 + 0x1f0);
        uStack_40c = *(undefined8 *)(param_5 + 0x1fc);
        uStack_414 = (undefined4)*(undefined8 *)(param_5 + 500);
        uStack_410 = (undefined4)((ulong)*(undefined8 *)(param_5 + 500) >> 0x20);
        uStack_468 = *(undefined8 *)(param_5 + 0x1a0);
        uStack_470 = *puVar1;
        uStack_458 = *(undefined8 *)(param_5 + 0x1b0);
        uStack_460 = *(undefined8 *)(param_5 + 0x1a8);
        uStack_448 = *(undefined8 *)(param_5 + 0x1c0);
        uStack_450 = *(undefined8 *)(param_5 + 0x1b8);
        uStack_438 = *(undefined8 *)(param_5 + 0x1d0);
        uStack_440 = *(undefined8 *)(param_5 + 0x1c8);
        uStack_400 = *(undefined8 *)(param_5 + 0x208);
        plStack_3f8 = *(long **)(param_5 + 0x210);
        if (plStack_3f8 != (long *)0x0) {
          plVar7 = plStack_3f8 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = *plVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_10a2288e0(&uStack_470,param_2[2]);
        if ((*(byte *)(param_6 + 0x2f8) & 1) == 0) {
LAB_10ace6a54:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ace6a58);
          (*pcVar5)();
        }
        ppuVar9 = (undefined **)(param_6 + 0x2e0);
        param_1 = plVar13;
        FUN_10ace2c64(plVar13,ppuVar9,&uStack_470);
        if ((((ulong)param_1 & 1) != 0) && ((int)plVar13[0x89] != 0)) {
          if ((int)plVar13[0x89] == 2) {
            param_1 = plVar13;
            FUN_10ace2b08();
            if ((int)param_1 != 0) {
              param_1 = plVar13 + 0x8a;
              FUN_10ace2bb8(param_1,param_2,uVar16,plVar14,param_5,param_6);
              ppuVar9 = param_2;
            }
          }
          else {
            if ((int)plVar13[0x34] != *(int *)((long)param_2 + 0x24)) {
              FUN_10a1b498c(&uStack_310,*(int *)((long)param_2 + 0x24),3);
              func_0x00010a343394(plVar13 + 0x32,&uStack_310);
              plVar14 = plStack_308;
              if (plStack_308 != (long *)0x0) {
                plVar7 = plStack_308 + 1;
                do {
                  lVar10 = *plVar7;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar3) {
                    *plVar7 = lVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar10 == 0) {
                  (**(code **)(*plStack_308 + 0x10))(plStack_308);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
                }
              }
              *(undefined4 *)(plVar13 + 0x34) = *(undefined4 *)((long)param_2 + 0x24);
            }
            puStack_478 = param_2[2];
            uStack_310 = uStack_310 & 0xffffffff00000000;
            (*(code *)**(undefined8 **)plVar13[0x32])
                      (&uStack_488,(undefined8 *)plVar13[0x32],param_2,&uStack_310,&puStack_478);
            puVar8 = puVar1;
            FUN_10a0ec6f0(puVar1);
            FUN_10a4cac0c(auStack_4d0,(ulong)puVar8 & 0xffffffff);
            uStack_310 = 0;
            uStack_300 = 0;
            uStack_2a0 = 0;
            plStack_2a8 = (long *)0x0;
            uStack_2e8 = 0;
            uStack_2f0 = 0;
            uStack_2d8 = 0;
            uStack_2e0 = 0;
            uStack_2c8 = 0;
            uStack_2d0 = 0;
            uStack_2b8 = 0;
            uStack_2c0 = 0;
            uStack_2b0 = 0;
            ppuStack_290 = (undefined **)0x0;
            lStack_288 = 0;
            uStack_280 = 0;
            uStack_278 = 0x3ff0000000000000;
            uStack_270 = 0;
            uStack_268 = 0;
            uStack_260 = 0;
            pdStack_250 = (double *)0x3ff0000000000000;
            uStack_240 = 0;
            uStack_248 = 0;
            uStack_238 = 0;
            uStack_230 = 0x3ff0000000000000;
            uStack_228 = 0;
            uStack_220 = 0;
            uStack_218 = 0;
            uStack_210 = 0x3ff0000000000000;
            plStack_1f8 = (long *)0x0;
            uStack_200 = 0;
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1e0 = 0;
            uStack_1d8 = 0x3ff0000000000000;
            uStack_1d0 = 0;
            uStack_1c8 = 0;
            uStack_1c0 = 0;
            uStack_1b8 = 0x3ff0000000000000;
            uStack_1b0 = 0;
            uStack_1a8 = 0;
            uStack_1a0 = 0;
            uStack_190 = 0x3ff0000000000000;
            uStack_180 = 0;
            uStack_188 = 0;
            uStack_178 = 0;
            uStack_170 = 0x3ff0000000000000;
            uStack_168 = 0;
            uStack_160 = 0;
            uStack_158 = 0;
            uStack_150 = 0x3ff0000000000000;
            uStack_140 = 0;
            lStack_130 = 0;
            lStack_138 = 0;
            lStack_120 = 0;
            uStack_128 = 0;
            uStack_110 = 0;
            lStack_118 = 0;
            lStack_100 = 0;
            lStack_108 = 0;
            uStack_f8 = 0;
            uStack_c8 = 0x403e000000000000;
            uStack_c0 = 0x403e000000000000;
            uStack_b8 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            cStack_90 = '\0';
            FUN_10aaafb28(plVar13 + 0x14,*(undefined8 *)(param_5 + 0xd0));
            FUN_10acf7de0(plVar13 + 0x27,*(undefined8 *)(param_5 + 0x130));
            func_0x00010942bc68(&uStack_310,plVar13 + 0x14);
            dStack_550 = (double)(float)auStack_4d0._0_8_;
            dStack_548 = (double)SUB84(auStack_4d0._0_8_,4);
            dStack_540 = (double)(float)auStack_4d0._8_8_;
            dStack_538 = (double)SUB84(auStack_4d0._8_8_,4);
            dStack_530 = (double)(float)auStack_4d0._16_8_;
            dStack_528 = (double)SUB84(auStack_4d0._16_8_,4);
            dStack_520 = (double)(float)auStack_4d0._24_8_;
            dStack_518 = (double)SUB84(auStack_4d0._24_8_,4);
            dStack_510 = (double)(float)auStack_4d0._32_8_;
            dStack_508 = (double)SUB84(auStack_4d0._32_8_,4);
            dStack_500 = (double)(float)auStack_4d0._40_8_;
            dStack_4f8 = (double)SUB84(auStack_4d0._40_8_,4);
            dStack_4f0 = (double)(float)auStack_4d0._48_8_;
            dStack_4e8 = (double)SUB84(auStack_4d0._48_8_,4);
            dStack_4e0 = (double)(float)auStack_4d0._56_8_;
            dStack_4d8 = (double)SUB84(auStack_4d0._56_8_,4);
            func_0x00010937fc48(&ppuStack_3a0,&dStack_550);
            func_0x00010937fbc4(&pdStack_3e8,&ppuStack_3a0);
            uStack_338 = uStack_3c0;
            uStack_340 = uStack_3c8;
            uStack_328 = uStack_3b0;
            uStack_330 = uStack_3b8;
            uStack_320 = uStack_3a8;
            uStack_358 = uStack_3e0;
            pdStack_360 = pdStack_3e8;
            uStack_348 = uStack_3d0;
            uStack_350 = uStack_3d8;
            lStack_288 = lStack_398;
            ppuStack_290 = ppuStack_3a0;
            uStack_278 = uStack_388;
            uStack_280 = uStack_390;
            uStack_268 = uStack_378;
            uStack_270 = uStack_380;
            uStack_260 = uStack_370;
            uStack_248 = uStack_3e0;
            pdStack_250 = pdStack_3e8;
            uStack_238 = uStack_3d0;
            uStack_240 = uStack_3d8;
            uStack_228 = uStack_3c0;
            uStack_230 = uStack_3c8;
            uStack_218 = uStack_3b0;
            uStack_220 = uStack_3b8;
            uStack_210 = uStack_3a8;
            FUN_10acdd07c(&ppuStack_3a0,&uStack_470);
            func_0x000109457fd4(&uStack_310,&ppuStack_3a0);
            _free(uStack_348);
            uStack_310 = *(ulong *)(param_5 + 0x20);
            FUN_10acdd1a0(&ppuStack_3a0,uStack_488,*(int *)(param_5 + 0x198) == 0);
            if (param_4 == 0) {
              dStack_550 = 0.0;
              dStack_548 = 0.0;
              dStack_540 = 0.0;
            }
            else {
              FUN_10acf6838(&dStack_550,*(undefined8 *)(param_4 + 0x148));
            }
            FUN_10ace341c(plVar13,&ppuStack_3a0,&uStack_310,&dStack_550,*(undefined1 *)(param_6 + 1)
                         );
            pdStack_3e8 = &dStack_550;
            FUN_10aceb588(&pdStack_3e8);
            ppuStack_3a0 = &PTR_DAT_110af4b00;
            if (lStack_398 != 0) {
              __ZdaPv();
            }
            if ((*(byte *)(param_6 + 0x2f8) & 1) == 0) goto LAB_10ace6a54;
            FUN_10ace4884(&ppuStack_3a0,plVar13,*(undefined1 *)(param_6 + 0x2d8),puVar1,
                          *(undefined4 *)(*(long *)(param_5 + 0x218) + 0xa0));
            ppuVar9 = ppuStack_3a0;
            plVar13 = (long *)(param_5 + 0x70);
            lVar10 = *plVar13;
            ppuStack_3a0 = (undefined **)0x0;
            *plVar13 = (long)ppuVar9;
            ppuVar9 = (undefined **)0x0;
            if (lVar10 != 0) {
              func_0x00010a502490(plVar13);
              ppuVar9 = ppuStack_3a0;
              ppuStack_3a0 = (undefined **)0x0;
              if (ppuVar9 != (undefined **)0x0) {
                func_0x00010a502490(&ppuStack_3a0);
              }
            }
            if ((cStack_90 == '\x01') && (plStack_98 != (long *)0x0)) {
              plVar13 = plStack_98 + 1;
              do {
                lVar10 = *plVar13;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar3) {
                  *plVar13 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plStack_98 + 0x10))(plStack_98);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
              }
            }
            if (lStack_108 != 0) {
              lStack_100 = lStack_108;
              __ZdlPv();
            }
            if (lStack_120 != 0) {
              lStack_118 = lStack_120;
              __ZdlPv();
            }
            if (lStack_138 != 0) {
              lStack_130 = lStack_138;
              __ZdlPv();
            }
            plVar13 = plStack_1f8;
            if (plStack_1f8 != (long *)0x0) {
              plVar14 = plStack_1f8 + 1;
              do {
                lVar10 = *plVar14;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar3) {
                  *plVar14 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
              }
            }
            param_1 = plStack_2a8;
            _free(plStack_2a8);
            if (plStack_480 != (long *)0x0) {
              plVar13 = plStack_480 + 1;
              do {
                lVar10 = *plVar13;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar3) {
                  *plVar13 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plStack_480 + 0x10))(plStack_480);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_480);
                param_1 = plStack_480;
              }
            }
          }
        }
        plVar13 = plStack_3f8;
        param_2 = ppuVar9;
        plVar14 = plStack_558;
        if (plStack_3f8 != (long *)0x0) {
          plVar7 = plStack_3f8 + 1;
          do {
            lVar10 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_3f8 + 0x10))(plStack_3f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            param_1 = plVar13;
            param_2 = ppuVar9;
            plVar14 = plStack_558;
          }
        }
      }
      else {
        param_1 = plVar13 + 0x8a;
        FUN_10ace2bb8(param_1,param_2,uVar16,plVar14,param_5,param_6);
      }
      if (plVar14 != (long *)0x0) {
        plVar13 = plVar14 + 1;
        do {
          lVar10 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          param_1 = plVar14;
        }
      }
      if (plVar12 != (long *)0x0) {
        plVar13 = plVar12 + 1;
        do {
          lVar10 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_10ace62b4;
      }
    }
    else if (*(char *)(param_6 + 0x2d9) == '\0') goto LAB_10ace6264;
  }
  else {
LAB_10ace6264:
    param_1 = (long *)param_1[1];
    plVar12 = (long *)param_3[1];
    uStack_568 = param_3[1];
    uStack_570 = *param_3;
    if (plVar12 != (long *)0x0) {
      plVar13 = plVar12 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10ace6034(param_1,param_2,param_5,param_6);
    if (plVar12 != (long *)0x0) {
      plVar13 = plVar12 + 1;
      do {
        lVar10 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_10ace62b4:
      if (lVar10 == 0) {
        param_1 = plVar12;
        (**(code **)(*plVar12 + 0x10))(plVar12);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar12);
          return plVar12;
        }
        goto LAB_10ace6a58;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_1;
  }
LAB_10ace6a58:
  ___stack_chk_fail();
  func_0x00010a042d30(&uStack_400);
  func_0x00010a09db0c(&uStack_560);
  func_0x00010a09db0c(&uStack_580);
  __Unwind_Resume(param_1);
  if (((ulong)param_2[0x5f] & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10ace6b44);
    (*pcVar5)();
  }
  plVar12 = (long *)0x300;
  if ((*(char *)((long)param_2 + 0x2d9) == '\x02' & *(byte *)((long)param_2 + 0x2da)) == 0) {
    plVar12 = (long *)0x100;
  }
  return plVar12;
}



/* Entry: 10ace6b10; end: 10ace6b43;  */

undefined8 FUN_10ace6b10(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if ((*(byte *)(param_2 + 0x2f8) & 1) != 0) {
    uVar1 = 0x300;
    if ((*(char *)(param_2 + 0x2d9) == '\x02' & *(byte *)(param_2 + 0x2da)) == 0) {
      uVar1 = 0x100;
    }
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ace6b44);
  (*pcVar2)();
}



/* Entry: 10ace6b44; end: 10ace6be7;  */

void FUN_10ace6b44(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_24;
  
  if ((*(byte *)(param_2 + 0x2f8) & 1) != 0) {
    if (*(char *)(param_2 + 0x2da) == '\x01' && *(char *)(param_2 + 0x2d9) == '\x02') {
      uStack_38 = 0;
      lStack_50 = 0;
      uStack_48 = 0;
      lStack_58 = 0;
      uStack_40 = 0;
      uStack_34 = 0x1000000;
      uStack_30 = 0;
      uStack_24 = 0;
      FUN_10a051998(param_2 + 0x138,&lStack_58);
      if (lStack_58 != 0) {
        lStack_50 = lStack_58;
        __ZdlPv();
      }
      *(undefined1 *)(param_2 + 0x4e3) = 1;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ace6bcc);
  (*pcVar1)();
}



/* Entry: 10ace6be8; end: 10ace6bef;  */

void FUN_10ace6be8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  
  piVar5 = *(int **)(param_1 + 8);
  if ((*piVar5 == 1) && (plVar3 = *(long **)(piVar5 + 4), plVar3 != (long *)0x0)) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      plVar4 = *(long **)(piVar5 + 2);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,8);
        *piVar5 = 0;
      }
      plVar4 = plVar3 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  return;
}



/* Entry: 10ace6bf0; end: 10ace6c67;  */

void FUN_10ace6bf0(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x20);
  if ((lVar6 != 0) && ((*(byte *)(param_2 + 8) & 1) == 0)) {
    plVar4 = *(long **)(lVar6 + 0x440);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    *(undefined8 *)(lVar6 + 0x440) = 0;
  }
  return;
}



/* Entry: 10ace6c68; end: 10ace6ce3;  */

void FUN_10ace6c68(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(param_1 + 8);
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0x10);
  *(undefined8 *)(lVar5 + 0x10) = uVar7;
  *(undefined8 *)(lVar5 + 8) = uVar6;
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10ace6ce4; end: 10ace6d2f;  */

long FUN_10ace6ce4(long param_1)

{
  long lVar1;
  
  FUN_10ace6158(*(undefined8 *)(param_1 + 8));
  FUN_10a235538(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    FUN_10acefb2c((undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10ace6d30; end: 10ace6d33;  */

long FUN_10ace6d30(long param_1)

{
  long lVar1;
  
  FUN_10ace6158(*(undefined8 *)(param_1 + 8));
  FUN_10a235538(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    FUN_10acefb2c((undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10ace6d34; end: 10ace6d47;  */

void FUN_10ace6d34(void)

{
  FUN_10ace6ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ace6d48; end: 10ace6e1f;  */

void FUN_10ace6d48(long *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  uVar5 = param_2;
  FUN_10ac27820();
  if ((uVar5 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (1 < param_3) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ace6e20);
      (*pcVar4)();
    }
    lVar7 = param_2 + param_3 * 0x298;
    lVar6 = *(long *)(lVar7 + 0x288);
    if (lVar6 == 0) {
      FUN_10acf1988(auStack_40,lVar7);
      FUN_10a22b994((long *)(lVar7 + 0x288),auStack_40);
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
      lVar6 = *(long *)(lVar7 + 0x288);
    }
    lVar7 = *(long *)(lVar7 + 0x290);
    *param_1 = lVar6;
    param_1[1] = lVar7;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
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
  return;
}



/* Entry: 10ace6e20; end: 10ace7193;  */

void FUN_10ace6e20(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plStack_138;
  long *plStack_130;
  undefined1 auStack_128 [8];
  int iStack_120;
  int iStack_11c;
  undefined8 uStack_118;
  undefined1 auStack_c8 [8];
  int iStack_c0;
  int iStack_bc;
  undefined8 uStack_b8;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar9 = *(long *)(param_2 + 0x538);
  if (lVar9 != 0) {
LAB_10ace70e0:
    lVar11 = *(long *)(param_2 + 0x540);
    *param_1 = lVar9;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      plVar1 = (long *)(lVar11 + 8);
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
  FUN_10ace7194(auStack_128,param_2);
  if ((iStack_11c != 0 && iStack_120 != 0) && (iStack_11c == iStack_bc)) {
    puStack_60 = &UNK_10f6a2414;
    uStack_58 = 0x15;
    if (iStack_120 == iStack_c0) {
      lVar9 = 0;
      FUN_10a2421c8();
      iVar5 = iStack_11c;
      iVar4 = iStack_120;
      uVar13 = *(undefined8 *)(lVar9 + 0x1e0);
      plVar8 = (long *)0x30;
      __Znwm();
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = (long)&PTR_FUN_110bf7a48;
      plVar1 = plVar8 + 3;
      FUN_10a097d08(plVar1,uVar13,0,iVar5,iVar4 << 1,1,0x20,2);
      plVar8[3] = (long)&PTR_DAT_110bf7a98;
      if (plVar8[4] == 0) {
        puVar10 = (undefined8 *)(plVar8[5] + 0x10);
      }
      else {
        puVar10 = (undefined8 *)(plVar8[4] + 8);
      }
      plVar12 = (long *)*puVar10;
      plStack_138 = plVar1;
      plStack_130 = plVar8;
      if ((plVar12 == (long *)0x0) ||
         (plVar8 = plVar12, ___dynamic_cast(plVar12,&PTR_DAT_110ba0e18,&PTR_DAT_110baa0a0,0),
         plVar8 == (long *)0x0)) {
        lVar9 = plVar12[8];
        FUN_10a303840(lVar9,*(undefined4 *)((long)plVar12 + 0x7c),
                      *(undefined4 *)((long)plVar12 + 0x5c),0);
        _glTexSubImage2D(*(undefined4 *)((long)plVar12 + 0x7c),0,0,0,iStack_bc,iStack_c0,
                         (int)plVar12[0x13],0x1406,uStack_b8);
        _glTexSubImage2D(*(undefined4 *)((long)plVar12 + 0x7c),0,0,iStack_c0,iStack_11c,iStack_120,
                         (int)plVar12[0x13],0x1406,uStack_118);
        _glTexParameteri(*(undefined4 *)((long)plVar12 + 0x7c),0x2801,0x2601);
        _glTexParameteri(*(undefined4 *)((long)plVar12 + 0x7c),0x2800,0x2601);
        FUN_10a303840(lVar9,*(undefined4 *)((long)plVar12 + 0x7c),0,0);
      }
      else {
        FUN_10a4ca8f0(&puStack_60,auStack_c8);
        FUN_10a4ca8f0(&lStack_68,auStack_128);
        puVar6 = puStack_60;
        (**(code **)(*plVar8 + 0xa0))(plVar8,0,0,0,iStack_bc,iStack_c0,0,puStack_60,0);
        (**(code **)(*plVar8 + 0xa0))(plVar8,0,iStack_c0,0,iStack_11c,iStack_120,0,lStack_68,0);
        if (lStack_68 != 0) {
          __ZdaPv(lStack_68);
        }
        if (puVar6 != (undefined *)0x0) {
          __ZdaPv(puVar6);
        }
      }
      FUN_10a0986a0(plVar1,&UNK_10e482b00);
      FUN_10ace7310((long *)(param_2 + 0x538),&plStack_138);
      plVar1 = plStack_130;
      if (plStack_130 != (long *)0x0) {
        plVar8 = plStack_130 + 1;
        do {
          lVar9 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_130 + 0x10))(plStack_130);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      FUN_10acee230(auStack_128);
      lVar9 = *(long *)(param_2 + 0x538);
      goto LAB_10ace70e0;
    }
  }
  uStack_58 = 0x15;
  puStack_60 = &UNK_10f6a2414;
  FUN_10a0edfc4(&puStack_60);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ace7128);
  (*pcVar7)();
}



/* Entry: 10ace7194; end: 10ace730f;  */

void FUN_10ace7194(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar7 = param_2;
  if (param_2[0x55] != 0) {
    uVar5 = (ulong)*(uint *)((long)param_2 + 0x29c);
    if ((int)*(uint *)((long)param_2 + 0x29c) < 3) {
      lVar8 = (long)*(int *)((long)param_2 + 0x2a4) * (long)*(int *)(param_2 + 0x54);
    }
    else {
      lVar8 = 1;
      piVar9 = (int *)param_2[0x5b];
      do {
        lVar8 = lVar8 * *piVar9;
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 1;
      } while (uVar5 != 0);
    }
    lVar1 = 0;
    if (lVar8 != 0) {
      lVar1 = 0x298;
    }
    puVar7 = (undefined8 *)((long)param_2 + lVar1);
  }
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  iVar2 = *(int *)((long)param_2 + 4);
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  lVar8 = param_2[7];
  uVar13 = param_2[4];
  uVar12 = param_2[7];
  uVar11 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar13;
  param_1[7] = uVar12;
  param_1[6] = uVar11;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar8 != 0) {
    piVar9 = (int *)(lVar8 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar4) {
        *piVar9 = *piVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar2 = *(int *)((long)param_2 + 4);
  }
  if (iVar2 < 3) {
    puVar6 = (undefined8 *)param_2[9];
    puVar10 = (undefined8 *)param_1[9];
    *puVar10 = *puVar6;
    puVar10[1] = puVar6[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1);
  }
  uVar13 = *puVar7;
  uVar12 = puVar7[3];
  uVar11 = puVar7[2];
  param_1[0xd] = puVar7[1];
  param_1[0xc] = uVar13;
  iVar2 = *(int *)((long)puVar7 + 4);
  uVar14 = puVar7[5];
  uVar13 = puVar7[4];
  param_1[0xf] = uVar12;
  param_1[0xe] = uVar11;
  param_1[0x11] = uVar14;
  param_1[0x10] = uVar13;
  lVar8 = puVar7[7];
  uVar11 = puVar7[6];
  param_1[0x13] = puVar7[7];
  param_1[0x12] = uVar11;
  param_1[0x16] = 0;
  param_1[0x14] = param_1 + 0xd;
  param_1[0x15] = param_1 + 0x16;
  param_1[0x17] = 0;
  if (lVar8 != 0) {
    piVar9 = (int *)(lVar8 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar4) {
        *piVar9 = *piVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar2 = *(int *)((long)puVar7 + 4);
  }
  if (iVar2 < 3) {
    puVar7 = (undefined8 *)puVar7[9];
    puVar6 = (undefined8 *)param_1[0x15];
    *puVar6 = *puVar7;
    puVar6[1] = puVar7[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 100) = 0;
    func_0x000109a84868(param_1 + 0xc,puVar7);
  }
  return;
}



/* Entry: 10ace7310; end: 10ace7373;  */

undefined8 * FUN_10ace7310(undefined8 *param_1,undefined8 *param_2)

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
  *param_2 = 0;
  param_2[1] = 0;
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



/* Entry: 10ace7374; end: 10ace7943;  */

void FUN_10ace7374(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plStack_160;
  long *plStack_158;
  undefined1 auStack_150 [8];
  int iStack_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined1 auStack_f0 [8];
  int iStack_e8;
  int iStack_e4;
  undefined8 uStack_e0;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar9 = *(long *)(param_2 + 0x538);
  if (lVar9 != 0) goto LAB_10ace7824;
  FUN_10ace7194(auStack_150,param_2);
  if ((iStack_144 != 0 && iStack_148 != 0) && (iStack_144 == iStack_e4)) {
    puStack_70 = &UNK_10f6a2414;
    uStack_68 = 0x15;
    if (iStack_148 == iStack_e8) {
      lVar9 = 0;
      FUN_10a2421c8();
      iVar4 = iStack_144;
      iVar3 = iStack_148;
      uVar13 = *(undefined8 *)(lVar9 + 0x1e0);
      plVar7 = (long *)0x30;
      __Znwm();
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_110bf7a48;
      plVar11 = plVar7 + 3;
      FUN_10a097d08(plVar11,uVar13,1,iVar4,iVar3,2,0x20,4);
      plVar7[3] = (long)&PTR_DAT_110bf7a98;
      if (plVar7[4] == 0) {
        plVar12 = (long *)(plVar7[5] + 0x10);
      }
      else {
        plVar12 = (long *)(plVar7[4] + 8);
      }
      plVar8 = (long *)*plVar12;
      puStack_70 = &UNK_10f6a242a;
      uStack_68 = 0x39;
      plStack_160 = plVar11;
      plStack_158 = plVar7;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x28))();
        puStack_70 = &UNK_10f6a2414;
        uStack_68 = 0x15;
        if ((int)plVar8 == iStack_144) {
          plVar7 = (long *)*plVar12;
          (**(code **)(*plVar7 + 0x30))();
          puStack_70 = &UNK_10f6a2414;
          uStack_68 = 0x15;
          if ((int)plVar7 == iStack_148) {
            plVar7 = (long *)*plVar12;
            (**(code **)(*plVar7 + 0x48))();
            puStack_70 = &UNK_10f6a2414;
            uStack_68 = 0x15;
            if ((int)plVar7 == 2) {
              plVar7 = (long *)*plVar12;
              (**(code **)(*plVar7 + 0x70))();
              puStack_70 = &UNK_10f6a2414;
              uStack_68 = 0x15;
              if ((int)plVar7 == 4) {
                plVar7 = (long *)*plVar12;
                if (plVar7 == (long *)0x0) {
                  plStack_80 = (long *)0x0;
                  plStack_78 = (long *)0x0;
                }
                else {
                  plVar8 = plVar7;
                  ___dynamic_cast(plVar7,&PTR_DAT_110ba0e18,&PTR_DAT_110baa0a0,0);
                  if (plVar8 != (long *)0x0) {
                    plVar11 = (long *)plVar12[1];
                    if (plVar11 != (long *)0x0) {
                      plVar7 = plVar11 + 1;
                      do {
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                        if (bVar2) {
                          *plVar7 = *plVar7 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    plVar7 = plVar8;
                    plStack_80 = plVar8;
                    plStack_78 = plVar11;
                    (**(code **)(*plVar8 + 0x48))();
                    puStack_70 = &UNK_10f6a2487;
                    uStack_68 = 0x29;
                    if ((int)plVar7 == 2) {
                      plVar7 = plVar8;
                      (**(code **)(*plVar8 + 0x50))();
                      puStack_70 = &UNK_10f6a24b1;
                      uStack_68 = 0x1a;
                      if ((int)plVar7 == 0x20) {
                        FUN_10a4ca8f0(&puStack_70,auStack_150);
                        FUN_10a4ca8f0(&plStack_90,auStack_f0);
                        puVar5 = puStack_70;
                        (**(code **)(*plVar8 + 0xa0))
                                  (plVar8,0,0,0,iStack_144,iStack_148,1,puStack_70,0);
                        plVar7 = plStack_90;
                        (**(code **)(*plVar8 + 0xa0))
                                  (plVar8,0,0,1,iStack_e4,iStack_e8,1,plStack_90,0);
                        if (plVar7 != (long *)0x0) {
                          __ZdaPv(plVar7);
                        }
                        if (puVar5 != (undefined *)0x0) {
                          __ZdaPv(puVar5);
                        }
                        goto LAB_10ace779c;
                      }
                    }
                    FUN_10a0edfc4(&puStack_70);
                    goto LAB_10ace78b4;
                  }
                  plStack_80 = (long *)0x0;
                  plStack_78 = (long *)0x0;
                  ___dynamic_cast(plVar7,&PTR_DAT_110ba0e18,&PTR_DAT_110c545f0,0);
                  if (plVar7 != (long *)0x0) {
                    plVar12 = (long *)plVar12[1];
                    if (plVar12 != (long *)0x0) {
                      plVar8 = plVar12 + 1;
                      do {
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                        if (bVar2) {
                          *plVar8 = *plVar8 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    puStack_70 = &UNK_10f6a2414;
                    uStack_68 = 0x15;
                    plStack_90 = plVar7;
                    plStack_88 = plVar12;
                    if (*(int *)((long)plVar7 + 0x7c) != 0x8c1a) {
                      FUN_10a0edfc4(&puStack_70);
                      goto LAB_10ace78b4;
                    }
                    lVar9 = plVar7[8];
                    FUN_10a303840(lVar9,0x8c1a,*(undefined4 *)((long)plVar7 + 0x5c),0);
                    _glTexSubImage3D(*(undefined4 *)((long)plVar7 + 0x7c),0,0,0,0,iStack_144,
                                     iStack_148,1,(int)plVar7[0x13],0x1406,uStack_140);
                    _glTexSubImage3D(*(undefined4 *)((long)plVar7 + 0x7c),0,0,0,1,iStack_e4,
                                     iStack_e8,1,(int)plVar7[0x13],0x1406,uStack_e0);
                    _glTexParameteri(*(undefined4 *)((long)plVar7 + 0x7c),0x2801,0x2601);
                    _glTexParameteri(*(undefined4 *)((long)plVar7 + 0x7c),0x2800,0x2601);
                    FUN_10a303840(lVar9,*(undefined4 *)((long)plVar7 + 0x7c),0,0);
                    FUN_10a0986a0(plVar11,&UNK_10e482b00);
                    plVar11 = plStack_78;
                    if (plVar12 != (long *)0x0) {
                      plVar7 = plVar12 + 1;
                      do {
                        lVar9 = *plVar7;
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                        if (bVar2) {
                          *plVar7 = lVar9 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (lVar9 == 0) {
                        (**(code **)(*plVar12 + 0x10))(plVar12);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
                        plVar11 = plStack_78;
                      }
                    }
LAB_10ace779c:
                    if (plVar11 != (long *)0x0) {
                      plVar7 = plVar11 + 1;
                      do {
                        lVar9 = *plVar7;
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                        if (bVar2) {
                          *plVar7 = lVar9 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (lVar9 == 0) {
                        (**(code **)(*plVar11 + 0x10))(plVar11);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                      }
                    }
                    FUN_10ace7310((long *)(param_2 + 0x538),&plStack_160);
                    plVar11 = plStack_158;
                    if (plStack_158 != (long *)0x0) {
                      plVar7 = plStack_158 + 1;
                      do {
                        lVar9 = *plVar7;
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                        if (bVar2) {
                          *plVar7 = lVar9 + -1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                      if (lVar9 == 0) {
                        (**(code **)(*plStack_158 + 0x10))(plStack_158);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                      }
                    }
                    FUN_10acee230(auStack_150);
                    lVar9 = *(long *)(param_2 + 0x538);
LAB_10ace7824:
                    lVar10 = *(long *)(param_2 + 0x540);
                    *param_1 = lVar9;
                    param_1[1] = lVar10;
                    if (lVar10 != 0) {
                      plVar11 = (long *)(lVar10 + 8);
                      do {
                        cVar1 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                        if (bVar2) {
                          *plVar11 = *plVar11 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    return;
                  }
                }
                plStack_90 = (long *)0x0;
                plStack_88 = (long *)0x0;
                puStack_70 = &UNK_10f6a2464;
                uStack_68 = 0x22;
                FUN_10a0edfc4(&puStack_70);
                goto LAB_10ace78b4;
              }
            }
          }
        }
      }
      FUN_10a0edfc4(&puStack_70);
      goto LAB_10ace78b4;
    }
  }
  uStack_68 = 0x15;
  puStack_70 = &UNK_10f6a2414;
  FUN_10a0edfc4(&puStack_70);
LAB_10ace78b4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ace78b8);
  (*pcVar6)();
}



/* Entry: 10ace7944; end: 10ace79db;  */

void FUN_10ace7944(byte *param_1,byte *param_2)

{
  ulong uVar1;
  
  if (param_2[2] == 1) {
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  }
  uVar1 = *(ulong *)(param_2 + 0x10);
  if (-1 < (char)param_2[0x1f]) {
    uVar1 = (ulong)param_2[0x1f];
  }
  if (uVar1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 8,param_2 + 8);
  }
  *param_1 = *param_1 | *param_2;
  param_1[3] = param_1[3] | param_2[3];
  param_1[4] = param_1[4] | param_2[4];
  param_1[5] = param_1[5] | param_2[5];
  return;
}



/* Entry: 10ace79dc; end: 10ace7a1f;  */

long * FUN_10ace79dc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (((char)param_1[2] == '\x01') && ((long *)*param_1 != (long *)0x0)) {
    (**(code **)(*(long *)*param_1 + 8))();
  }
  plVar5 = (long *)param_1[1];
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



/* Entry: 10ace7a20; end: 10ace7c6b;  */

undefined8 * FUN_10ace7a20(long *param_1,long param_2,undefined4 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6a1f40,&UNK_10f6a1f7f,0x13,&UNK_10f6a2018,in_x6,in_x7,
                          &UNK_10f58672b);
    }
    puStack_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    param_1 = &uStack_88;
    uStack_88 = FUN_10acee348;
    ppuStack_80 = &PTR_FUN_110c6d180;
    param_2 = param_2 + 0x18;
    FUN_10a5115ec(param_2,&uStack_88,&puStack_b0);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    puVar4 = puStack_b0;
    if (puStack_b0 != (undefined8 *)0x0) {
      puStack_a8 = puStack_b0;
      __ZdlPv();
    }
    *param_3 = (int)param_2;
  }
  else {
    if ((char)param_1[2] == '\x01') {
      (**(code **)(*plVar3 + 8))();
      plVar3 = (long *)*param_1;
    }
    (**(code **)*plVar3)();
    lStack_78 = *param_1;
    lStack_70 = param_1[1];
    if (lStack_70 != 0) {
      plVar3 = (long *)(lStack_70 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puStack_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    uStack_88 = (code *)CONCAT44(uStack_88._4_4_,0x20000000);
    FUN_10a26ebc0(&puStack_b0,0,&uStack_88,(long)&uStack_88 + 4,1);
    uStack_88 = FUN_10acee3b0;
    ppuStack_80 = &PTR_FUN_110c6d198;
    uStack_98 = 0;
    uStack_90 = 0;
    param_2 = param_2 + 0x18;
    FUN_10a5115ec(param_2,&uStack_88,&puStack_b0);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    puVar4 = puStack_b0;
    if (puStack_b0 != (undefined8 *)0x0) {
      puStack_a8 = puStack_b0;
      __ZdlPv();
    }
    *param_3 = (int)param_2;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(param_1 + 1);
  if (puStack_b0 != (undefined8 *)0x0) {
    puStack_a8 = puStack_b0;
    __ZdlPv();
  }
  __Unwind_Resume();
  *puVar4 = &PTR_DAT_110c6cb80;
  puVar4[1] = 0;
  puVar5 = (undefined8 *)0x10;
  __Znwm();
  *puVar5 = 0;
  puVar5[1] = 0;
  FUN_10ace7cd0(puVar4 + 1);
  return puVar4;
}



/* Entry: 10ace7c6c; end: 10ace7ccf;  */

undefined8 * FUN_10ace7c6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110c6cb80;
  param_1[1] = 0;
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10ace7cd0(param_1 + 1);
  return param_1;
}



/* Entry: 10ace7cd0; end: 10ace7d0f;  */

void FUN_10ace7cd0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ace7d10; end: 10ace7db3;  */

undefined8 * FUN_10ace7d10(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110c6cb80;
  plVar5 = (long *)param_1[1];
  plVar3 = (long *)plVar5[1];
  if ((plVar3 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 != (long *)0x0))
  {
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = plVar3 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  FUN_10ace7cd0(param_1 + 1,0);
  return param_1;
}



/* Entry: 10ace7db4; end: 10ace7db7;  */

undefined8 * FUN_10ace7db4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110c6cb80;
  plVar5 = (long *)param_1[1];
  plVar3 = (long *)plVar5[1];
  if ((plVar3 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 != (long *)0x0))
  {
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = plVar3 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  FUN_10ace7cd0(param_1 + 1,0);
  return param_1;
}



/* Entry: 10ace7db8; end: 10ace7dcb;  */

void FUN_10ace7db8(void)

{
  FUN_10ace7d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ace7dcc; end: 10ace800f;  */

void FUN_10ace7dcc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar8 = *(long *)(param_5 + 0x578);
  plStack_68 = (long *)0x0;
  plStack_60 = (long *)0x0;
  plVar3 = *(long **)(lVar8 + 0x28);
  if ((plVar3 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_60 = plVar3, plVar3 == (long *)0x0)) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = *(long **)(lVar8 + 0x20);
    plStack_68 = plVar3;
  }
  plVar9 = *(long **)(param_1 + 8);
  plStack_50 = (long *)0x0;
  plStack_48 = (long *)0x0;
  plVar4 = (long *)plVar9[1];
  if (plVar4 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar5 = (long *)0x0;
    plStack_48 = plVar4;
    if (plVar4 != (long *)0x0) {
      plVar5 = (long *)*plVar9;
      plStack_50 = plVar5;
    }
  }
  plVar4 = plStack_48;
  if (plVar5 != plVar3) {
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)*plVar3)(plVar3);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 8);
  uVar11 = *(undefined8 *)(lVar8 + 0x28);
  uVar10 = *(undefined8 *)(lVar8 + 0x20);
  if (*(long *)(lVar8 + 0x28) != 0) {
    plVar3 = (long *)(*(long *)(lVar8 + 0x28) + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar8 = puVar7[1];
  puVar7[1] = uVar11;
  *puVar7 = uVar10;
  if (lVar8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar4 + 1;
    do {
      lVar8 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar3 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar4 = plStack_60 + 1;
    do {
      lVar8 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 8);
  plVar3 = (long *)puVar7[1];
  if ((plVar3 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar3, plVar3 != (long *)0x0)) {
    plVar4 = (long *)*puVar7;
    plStack_50 = plVar4;
    if (plVar4 == (long *)0x0) {
      plVar9 = plVar3 + 1;
      do {
        lVar8 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 != 0) goto LAB_10ace7fb0;
    }
    else {
      (**(code **)(*plVar4 + 0x10))(&plStack_68,plVar4);
      *(long **)(param_4 + 0xf8) = plStack_60;
      *(long **)(param_4 + 0xf0) = plStack_68;
      *(undefined1 *)(param_4 + 0x100) = uStack_58;
      plVar9 = plVar3 + 1;
      do {
        lVar8 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 != 0) {
        return;
      }
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    if (plVar4 != (long *)0x0) {
      return;
    }
  }
LAB_10ace7fb0:
  ppuVar6 = &PTR_PTR_113307008;
  FUN_10ae079a0(0,&PTR_PTR_113307008);
  FUN_10ae07cd4(ppuVar6,&PTR_PTR_113307008);
  return;
}



/* Entry: 10ace8010; end: 10ace81d3;  */

void FUN_10ace8010(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f601e9d;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x14c;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a2049;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x14c;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ace81d4(param_1,&puStack_98,0xffffffff);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a2053;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x14c;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ace81d4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64c473;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x14c;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ace81d4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f42ad2b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x14c;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ace81d4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64c477;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x14c;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ace81d4();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ace81d4; end: 10ace8277;  */

undefined8 * FUN_10ace81d4(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ace8278);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10ace8278; end: 10ace832b;  */

void FUN_10ace8278(undefined8 param_1,undefined4 *param_2,long *param_3)

{
  long *plVar1;
  
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c6cbe8);
  if ((int)plVar1 == 0) {
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x30))(param_3,&PTR_DAT_110c6d1b0);
    *param_2 = (int)plVar1;
    (**(code **)(*param_3 + 0xb8))(param_3,&PTR_DAT_110c6d1d0);
  }
  else {
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x38))(param_3,&PTR_DAT_110c6cc08,0xffffffff);
    *param_2 = (int)plVar1;
    param_1 = 0x10000000000000;
    (**(code **)(*param_3 + 0xc0))(param_3,&PTR_DAT_110c6cbe8);
  }
  *(undefined8 *)(param_2 + 2) = param_1;
  return;
}



/* Entry: 10ace832c; end: 10ace855b;  */

void FUN_10ace832c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  double dVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 auStack_48 [2];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = 0x10000000000000;
  (**(code **)(*param_2 + 0xc0))(param_2,&PTR_DAT_110c6cc28);
  *param_1 = uVar3;
  uVar3 = 0x10000000000000;
  (**(code **)(*param_2 + 0xc0))(param_2,&PTR_DAT_110c6cc48);
  param_1[1] = uVar3;
  uVar3 = 0x10000000000000;
  (**(code **)(*param_2 + 0xc0))(param_2,&PTR_DAT_110c6cc68);
  param_1[2] = uVar3;
  uVar3 = 0x10000000000000;
  (**(code **)(*param_2 + 0xc0))(param_2,&PTR_DAT_110c6cc88);
  param_1[3] = uVar3;
  uVar3 = 0x10000000000000;
  (**(code **)(*param_2 + 0xc0))(param_2,&PTR_DAT_110c6cca8);
  param_1[4] = uVar3;
  uVar3 = 0x10000000000000;
  (**(code **)(*param_2 + 0xc0))(param_2,&PTR_DAT_110c6ccc8);
  param_1[5] = uVar3;
  uVar3 = 0x10000000000000;
  (**(code **)(*param_2 + 0xc0))(param_2,&PTR_DAT_110c6cce8);
  param_1[6] = uVar3;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c6cd08);
  if ((int)plVar1 == 0) {
    puStack_58 = &UNK_10f6a205e;
    uStack_50 = 0x10;
    FUN_10acee474(auStack_48);
    dVar4 = 2.2250738585072014e-308;
    (**(code **)(*param_2 + 0xc0))(param_2,&puStack_58);
    plVar1 = (long *)(long)(dVar4 * 1000000000.0);
  }
  else {
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c6cd08);
  }
  param_1[7] = plVar1;
  (**(code **)(*param_2 + 0xa8))(&puStack_58,param_2,&PTR_DAT_110c6cd28,&UNK_10f6a1ede,0);
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  param_1[9] = uStack_50;
  param_1[8] = puStack_58;
  param_1[10] = auStack_48[0];
  ppuVar2 = &PTR_DAT_110c6cd48;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c6cd48,3);
  *(int *)(param_1 + 0xb) = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (**(code **)(*ppuVar2 + 0x68))(*param_2,ppuVar2,&PTR_DAT_110c6cc28);
  (**(code **)(*ppuVar2 + 0x68))(param_2[1],ppuVar2,&PTR_DAT_110c6cc48);
  (**(code **)(*ppuVar2 + 0x68))(param_2[2],ppuVar2,&PTR_DAT_110c6cc68);
  (**(code **)(*ppuVar2 + 0x68))(param_2[3],ppuVar2,&PTR_DAT_110c6cc88);
  (**(code **)(*ppuVar2 + 0x68))(param_2[4],ppuVar2,&PTR_DAT_110c6cca8);
  (**(code **)(*ppuVar2 + 0x68))(param_2[5],ppuVar2,&PTR_DAT_110c6ccc8);
  (**(code **)(*ppuVar2 + 0x68))(param_2[6],ppuVar2,&PTR_DAT_110c6cce8);
  (**(code **)(*ppuVar2 + 0x48))(ppuVar2,&PTR_DAT_110c6cd08,param_2[7]);
  FUN_10a00d760(ppuVar2,&PTR_DAT_110c6cd28,param_2 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010ace8684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar2 + 0x40))(ppuVar2,&PTR_DAT_110c6cd48,(int)param_2[0xb]);
  return;
}



/* Entry: 10ace855c; end: 10ace8687;  */

void FUN_10ace855c(undefined8 *param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x68))(*param_1,param_2,&PTR_DAT_110c6cc28);
  (**(code **)(*param_2 + 0x68))(param_1[1],param_2,&PTR_DAT_110c6cc48);
  (**(code **)(*param_2 + 0x68))(param_1[2],param_2,&PTR_DAT_110c6cc68);
  (**(code **)(*param_2 + 0x68))(param_1[3],param_2,&PTR_DAT_110c6cc88);
  (**(code **)(*param_2 + 0x68))(param_1[4],param_2,&PTR_DAT_110c6cca8);
  (**(code **)(*param_2 + 0x68))(param_1[5],param_2,&PTR_DAT_110c6ccc8);
  (**(code **)(*param_2 + 0x68))(param_1[6],param_2,&PTR_DAT_110c6cce8);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c6cd08,param_1[7]);
  FUN_10a00d760(param_2,&PTR_DAT_110c6cd28,param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010ace8684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c6cd48,*(undefined4 *)(param_1 + 0xb));
  return;
}



/* Entry: 10ace8688; end: 10ace88cf;  */

void FUN_10ace8688(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a206f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a1ede;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f3f49ba;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a1ede;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ace8828(param_1,&puStack_98,1);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64c477;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a1ede;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ace8828();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f42ad2b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a1ede;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ace8828();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64c473;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a1ede;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010ace8828();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ace88d0; end: 10ace8907;  */

long * FUN_10ace88d0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 8))();
  }
  plVar5 = (long *)param_1[1];
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



/* Entry: 10ace8908; end: 10ace8b27;  */

long * FUN_10ace8908(long *param_1,long param_2,undefined4 *param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *unaff_x24;
  long lStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long *plStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)*param_1;
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
    if ((bRam000000011330a9e8 & 1) != 0) {
      plVar4 = (long *)0x0;
      func_0x00010ae06f08(0,1,&UNK_10f6a2083,&UNK_10f6a20c1,0x13,&UNK_10f6a215f,param_7,param_8,
                          &UNK_10f58672b);
    }
  }
  else {
    if ((char)param_1[2] == '\x01') {
      (**(code **)(*plVar4 + 8))();
      plVar4 = (long *)*param_1;
    }
    (**(code **)*plVar4)(plVar4,param_4);
    lStack_78 = *param_1;
    plVar5 = (long *)param_1[1];
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_b0 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    uStack_a0 = 0;
    uStack_88 = (code *)CONCAT44(uStack_88._4_4_,0x20000000);
    lStack_c0 = lStack_78;
    plStack_b8 = plVar5;
    FUN_10a26ebc0(&plStack_b0,0,&uStack_88,(long)&uStack_88 + 4,1);
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_88 = FUN_10acee4e4;
    ppuStack_80 = &PTR_FUN_110c6d1f0;
    unaff_x24 = &uStack_88;
    uStack_98 = 0;
    uStack_90 = 0;
    param_2 = param_2 + 0x18;
    plStack_70 = plVar5;
    FUN_10a4ff788(param_2,&uStack_88,&plStack_b0);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    plVar4 = plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      plStack_a8 = plStack_b0;
      __ZdlPv();
    }
    *param_3 = (int)param_2;
    *(undefined1 *)(param_1 + 2) = 1;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar4 = plVar5;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar4;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(unaff_x24 + 1);
  FUN_10a51e4c8(&uStack_98);
  if (plStack_b0 != (long *)0x0) {
    plStack_a8 = plStack_b0;
    __ZdlPv();
  }
  FUN_10a51e4c8(&lStack_c0);
  __Unwind_Resume();
  *plVar4 = (long)&PTR_DAT_110c6cd78;
  plVar4[1] = 0;
  puVar6 = (undefined8 *)0x30;
  __Znwm();
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[1] = 0;
  *puVar6 = 0;
  puVar6[3] = 0x4014000000000000;
  puVar6[4] = 1000;
  *(undefined1 *)(puVar6 + 5) = 3;
  FUN_10ace8ba8(plVar4 + 1);
  return plVar4;
}



/* Entry: 10ace8b28; end: 10ace8ba7;  */

undefined8 * FUN_10ace8b28(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110c6cd78;
  param_1[1] = 0;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0x4014000000000000;
  puVar1[4] = 1000;
  *(undefined1 *)(puVar1 + 5) = 3;
  FUN_10ace8ba8(param_1 + 1);
  return param_1;
}



/* Entry: 10ace8ba8; end: 10ace8be7;  */

void FUN_10ace8ba8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ace8be8; end: 10ace8c8b;  */

undefined8 * FUN_10ace8be8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110c6cd78;
  plVar5 = (long *)param_1[1];
  plVar3 = (long *)plVar5[1];
  if ((plVar3 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 != (long *)0x0))
  {
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = plVar3 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  FUN_10ace8ba8(param_1 + 1,0);
  return param_1;
}



/* Entry: 10ace8c8c; end: 10ace8c8f;  */

undefined8 * FUN_10ace8c8c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110c6cd78;
  plVar5 = (long *)param_1[1];
  plVar3 = (long *)plVar5[1];
  if ((plVar3 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 != (long *)0x0))
  {
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = plVar3 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  FUN_10ace8ba8(param_1 + 1,0);
  return param_1;
}



/* Entry: 10ace8c90; end: 10ace8ca3;  */

void FUN_10ace8c90(void)

{
  FUN_10ace8be8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ace8ca4; end: 10ace9053;  */

void FUN_10ace8ca4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined4 uStack_70;
  char cStack_68;
  long *plStack_60;
  long *plStack_58;
  
  lVar9 = *(long *)(param_5 + 0x578);
  plStack_c8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  plVar4 = *(long **)(lVar9 + 0x38);
  if ((plVar4 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_c0 = plVar4, plVar4 == (long *)0x0)) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = *(long **)(lVar9 + 0x30);
    plStack_c8 = plVar4;
  }
  plVar10 = *(long **)(param_1 + 8);
  plStack_60 = (long *)0x0;
  plStack_58 = (long *)0x0;
  plVar5 = (long *)plVar10[1];
  if (plVar5 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar6 = (long *)0x0;
    plStack_58 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar6 = (long *)*plVar10;
      plStack_60 = plVar6;
    }
  }
  plVar5 = plStack_58;
  if (plVar6 == plVar4) {
    puVar8 = *(undefined8 **)(param_1 + 8);
  }
  else {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    puVar8 = *(undefined8 **)(param_1 + 8);
    *(undefined1 *)(puVar8 + 2) = 0;
  }
  uVar13 = *(undefined8 *)(lVar9 + 0x38);
  uVar11 = *(undefined8 *)(lVar9 + 0x30);
  if (*(long *)(lVar9 + 0x38) != 0) {
    plVar4 = (long *)(*(long *)(lVar9 + 0x38) + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar9 = puVar8[1];
  puVar8[1] = uVar13;
  *puVar8 = uVar11;
  if (lVar9 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plVar5 != (long *)0x0) {
    plVar4 = plVar5 + 1;
    do {
      lVar9 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar4 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar5 = plStack_c0 + 1;
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
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  puVar8 = *(undefined8 **)(param_1 + 8);
  plVar4 = (long *)puVar8[1];
  if ((plVar4 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar4, plVar4 == (long *)0x0))
  goto LAB_10ace8f78;
  plVar5 = (long *)*puVar8;
  plStack_60 = plVar5;
  if (plVar5 == (long *)0x0) {
    plVar10 = plVar4 + 1;
    do {
      lVar9 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 != 0) goto LAB_10ace8f78;
  }
  else {
    if ((*(byte *)(param_5 + 0x290) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10ace9010);
      (*pcVar3)();
    }
    lVar9 = *(long *)(param_1 + 8);
    if (*(char *)(lVar9 + 0x10) == '\x01') {
      if (((*(double *)(lVar9 + 0x18) != *(double *)(param_5 + 0x278)) ||
          (*(long *)(lVar9 + 0x20) != *(long *)(param_5 + 0x280))) ||
         (*(char *)(lVar9 + 0x28) != *(char *)(param_5 + 0x288))) {
        (**(code **)(*plVar5 + 8))(plVar5);
        lVar9 = *(long *)(param_1 + 8);
        goto LAB_10ace8e74;
      }
    }
    else {
LAB_10ace8e74:
      uVar11 = *(undefined8 *)(param_5 + 0x280);
      dVar12 = *(double *)(param_5 + 0x278);
      *(undefined1 *)(lVar9 + 0x28) = *(undefined1 *)(param_5 + 0x288);
      *(undefined8 *)(lVar9 + 0x20) = uVar11;
      *(double *)(lVar9 + 0x18) = dVar12;
      lVar9 = *(long *)(param_1 + 8);
      *(undefined1 *)(lVar9 + 0x10) = 1;
      (**(code **)*plVar5)(plVar5,lVar9 + 0x18);
    }
    (**(code **)(*plVar5 + 0x10))(&plStack_c8,plVar5);
    if ((cStack_68 != '\x01') ||
       ((ABS((double)plStack_c8) <= 1e-06 && (ABS((double)plStack_c0) <= 1e-06)))) {
      ppuVar7 = &PTR_PTR_1133070e8;
      FUN_10ae079a0(0,&PTR_PTR_1133070e8);
      FUN_10ae07cd4(ppuVar7,&PTR_PTR_1133070e8);
    }
    else {
      puVar8 = (undefined8 *)0x60;
      __Znwm();
      puVar8[1] = plStack_c0;
      *puVar8 = plStack_c8;
      puVar8[3] = uStack_b0;
      puVar8[2] = uStack_b8;
      puVar8[5] = uStack_a0;
      puVar8[4] = uStack_a8;
      puVar8[7] = uStack_90;
      puVar8[6] = uStack_98;
      puVar8[9] = uStack_80;
      puVar8[8] = uStack_88;
      puVar8[10] = lStack_78;
      uStack_88 = 0;
      uStack_80 = 0;
      lStack_78 = 0;
      *(undefined4 *)(puVar8 + 0xb) = uStack_70;
      plVar10 = (long *)(param_4 + 0xe8);
      lVar9 = *plVar10;
      *plVar10 = (long)puVar8;
      if (lVar9 != 0) {
        func_0x00010a502728(plVar10);
      }
    }
    if ((cStack_68 == '\x01') && (lStack_78 < 0)) {
      __ZdlPv(uStack_88);
    }
    plVar10 = plVar4 + 1;
    do {
      lVar9 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 != 0) {
      return;
    }
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  if (plVar5 != (long *)0x0) {
    return;
  }
LAB_10ace8f78:
  ppuVar7 = &PTR_PTR_113307038;
  FUN_10ae079a0(0,&PTR_PTR_113307038);
  FUN_10ae07cd4(ppuVar7,&PTR_PTR_113307038);
  return;
}


