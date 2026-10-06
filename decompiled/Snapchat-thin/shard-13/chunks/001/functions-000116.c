/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a15e244; end: 10a15e2ff;  */

long * FUN_10a15e244(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_148 [8];
  long lStack_140;
  long lStack_138;
  long alStack_128 [3];
  long alStack_110 [3];
  long alStack_f8 [3];
  long alStack_e0 [3];
  long *plStack_c8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar2 = *param_1;
  if ((ulong)((param_1[2] - lVar2 >> 3) * -0x3333333333333333) < param_2) {
    if (0x666666666666666 < param_2) {
      FUN_10a180b1c();
      if ((int)param_1 != 1) {
        return (long *)0x1;
      }
      if (param_2 != param_3) {
        do {
          func_0x000107c2ac14(auStack_148,param_2);
          lVar3 = lStack_138;
          lVar2 = lStack_140;
          plStack_c8 = alStack_e0;
          func_0x000107c2b0d8(&plStack_c8);
          plStack_c8 = alStack_f8;
          func_0x000107c2b0d0(&plStack_c8);
          plStack_c8 = alStack_110;
          func_0x000107c2b0cc(&plStack_c8);
          plStack_c8 = alStack_128;
          func_0x000107c2b0c8(&plStack_c8);
          plStack_c8 = &lStack_140;
          func_0x000107c2b0c0(&plStack_c8);
          if (lVar2 != lVar3) {
            return (long *)0x1;
          }
          param_2 = param_2 + 0x80;
        } while (param_2 != param_3);
      }
      return (long *)0x0;
    }
    lVar3 = param_1[1];
    uVar1 = param_2;
    plStack_38 = param_1;
    FUN_10a180b30();
    lVar2 = param_2 + (lVar3 - lVar2);
    lVar3 = lVar2 + (*param_1 - param_1[1]);
    func_0x00010a180b74(*param_1,param_1[1],lVar3);
    lStack_58 = *param_1;
    *param_1 = lVar3;
    param_1[1] = lVar2;
    lStack_40 = param_1[2];
    param_1[2] = param_2 + uVar1 * 0x28;
    param_1 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a180bf4(param_1);
  }
  return param_1;
}



/* Entry: 10a15e300; end: 10a15e3e3;  */

undefined1 FUN_10a15e300(int param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_e8 [8];
  long lStack_e0;
  long lStack_d8;
  long alStack_c8 [3];
  long alStack_b0 [3];
  long alStack_98 [3];
  long alStack_80 [3];
  long *plStack_68;
  
  if (param_1 != 1) {
    return 1;
  }
  if (param_2 != param_3) {
    do {
      func_0x000107c2ac14(auStack_e8,param_2);
      lVar2 = lStack_d8;
      lVar1 = lStack_e0;
      plStack_68 = alStack_80;
      func_0x000107c2b0d8(&plStack_68);
      plStack_68 = alStack_98;
      func_0x000107c2b0d0(&plStack_68);
      plStack_68 = alStack_b0;
      func_0x000107c2b0cc(&plStack_68);
      plStack_68 = alStack_c8;
      func_0x000107c2b0c8(&plStack_68);
      plStack_68 = &lStack_e0;
      func_0x000107c2b0c0(&plStack_68);
      if (lVar1 != lVar2) {
        return 1;
      }
      param_2 = param_2 + 0x80;
    } while (param_2 != param_3);
  }
  return 0;
}



/* Entry: 10a15e3e4; end: 10a15e4d3;  */

bool FUN_10a15e3e4(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_2 + 2);
  if (((lVar3 == *(long *)(param_2 + 4)) && (*(long *)(param_2 + 0x60) == *(long *)(param_2 + 0x62))
      ) && (*(long *)(param_2 + 8) == *(long *)(param_2 + 10))) {
    bVar2 = *(long *)(param_2 + 0x4e) == *(long *)(param_2 + 0x50);
  }
  else {
    bVar2 = false;
  }
  if (((!bVar2) && (199 < *param_2)) &&
     ((FUN_10aba38a4(lVar3,*(long *)(param_2 + 4) - lVar3 >> 7,0xc,0,param_3,param_4),
      (int)lVar3 != 0 && (uVar1 = *(uint *)(param_1 + 0x734), uVar1 < 9)))) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x18cU) != 0) {
      return true;
    }
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x42U) != 0) {
      lVar3 = *(long *)(param_2 + 2);
      if (lVar3 != *(long *)(param_2 + 4)) {
        do {
          lVar4 = lVar3 + 0x80;
          bVar2 = *(long *)(lVar3 + 8) != *(long *)(lVar3 + 0x10);
          lVar3 = lVar4;
        } while (!bVar2 && lVar4 != *(long *)(param_2 + 4));
        return bVar2;
      }
    }
  }
  return false;
}



/* Entry: 10a15e4d4; end: 10a15e977;  */

void FUN_10a15e4d4(undefined8 *param_1)

{
  bool bVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_5c0;
  long *plStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_598;
  undefined8 auStack_590 [4];
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 auStack_560 [62];
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
  undefined4 uStack_2e0;
  undefined1 uStack_2dc;
  undefined5 uStack_2d8;
  undefined3 uStack_2d3;
  undefined5 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined2 uStack_2bc;
  undefined2 uStack_2b8;
  undefined4 uStack_2b4;
  undefined1 uStack_2b0;
  undefined8 uStack_2ac;
  undefined8 uStack_2a4;
  undefined8 uStack_29c;
  undefined8 uStack_294;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined1 auStack_278 [4];
  undefined1 auStack_274 [8];
  undefined1 auStack_26c [8];
  undefined1 auStack_264 [8];
  undefined4 uStack_25c;
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
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined4 uStack_168;
  undefined4 auStack_160 [2];
  undefined8 uStack_158;
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
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [72];
  undefined1 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  if (param_1[0x39] == 0) {
    lStack_68 = 0;
    lStack_60 = 0;
    uStack_58 = 0;
    lVar7 = 0x210;
    do {
      plVar4 = *(long **)((long)param_1 + lVar7);
      if ((plVar4 != (long *)0x0) && (*(int *)((long)plVar4 + 0x94) == 0)) {
        (**(code **)(*plVar4 + 0x30))();
        if ((char)plVar4[3] == '\x01') {
          if (&lStack_68 != plVar4) {
            FUN_10a0e9f7c(&lStack_68,*plVar4,plVar4[1],plVar4[1] - *plVar4 >> 5);
          }
          break;
        }
      }
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != 0x230);
    uStack_598 = (long *)((ulong)uStack_598._4_4_ << 0x20);
    puVar8 = &uStack_570;
    _bzero(auStack_590,0x220);
    lVar7 = 0x28;
    do {
      *(undefined8 *)((long)&uStack_570 + lVar7) = 0;
      *(undefined8 *)((long)auStack_590 + lVar7 + 0x18) = 0xffffffff;
      *(undefined8 *)((long)auStack_560 + lVar7) = 0;
      *(undefined8 *)((long)&uStack_568 + lVar7) = 0xffffffff;
      *(undefined8 *)((long)auStack_590 + lVar7) = 0;
      *(undefined8 *)((long)auStack_590 + lVar7 + -8) = 0xffffffff;
      *(undefined8 *)((long)auStack_590 + lVar7 + 0x10) = 0;
      *(undefined8 *)((long)auStack_590 + lVar7 + 8) = 0xffffffff;
      lVar7 = lVar7 + 0x40;
    } while (lVar7 != 0x228);
    lVar7 = 0;
    uStack_370 = 0;
    uStack_2d0 = 0;
    uStack_2c0 = 1;
    uStack_2b4 = 7;
    uStack_340 = 0xffffffff;
    uStack_348 = 0x100000000;
    uStack_330 = 0xffffffff;
    uStack_338 = 0x100000000;
    uStack_350 = 0xffffffff;
    uStack_358 = 0x100000000;
    uStack_300 = 0xffffffff;
    uStack_308 = 0x100000000;
    uStack_2f0 = 0xffffffff;
    uStack_2f8 = 0x100000000;
    uStack_320 = 0xffffffff;
    uStack_328 = 0x100000000;
    uStack_310 = 0xffffffff;
    uStack_318 = 0x100000000;
    uStack_2e0 = 0;
    uStack_2dc = 0;
    uStack_2c8 = 0;
    uStack_2d8 = 0;
    uStack_2d3 = 0;
    uStack_2bc = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a4 = 0x700000000;
    uStack_2ac = 0;
    uStack_294 = 0;
    uStack_29c = 0;
    uStack_28c = 0;
    uStack_288 = 7;
    uStack_280 = 0;
    stack0xfffffffffffffd90 = 0;
    _auStack_278 = 0;
    stack0xfffffffffffffda0 = 0;
    stack0xfffffffffffffd98 = 0;
    uStack_250 = 0;
    uStack_258 = 0;
    uStack_240 = 0;
    uStack_248 = 0;
    uStack_230 = 0;
    uStack_238 = 0;
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
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_180 = 0;
    uStack_188 = 0;
    do {
      auStack_278[lVar7] = 0;
      *(undefined8 *)(auStack_26c + lVar7) = 0x100000000;
      *(undefined8 *)(auStack_278 + lVar7 + 4) = 1;
      *(undefined8 *)(auStack_264 + lVar7) = 0;
      *(undefined4 *)((long)&uStack_25c + lVar7) = 0;
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != 0x100);
    lStack_170 = 0;
    uStack_178 = 0;
    uStack_100 = 0xffffffffffffffff;
    uStack_c8 = 0;
    uStack_598 = (long *)CONCAT44(uStack_598._4_4_,2);
    uStack_c0 = param_1[0x50];
    uStack_2e8 = 1;
    auStack_160[0] = 0;
    uStack_168 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_108 = 0;
    uStack_70 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    auStack_b8[0] = 0;
    uStack_360 = 0x10;
    uStack_368 = 0x100000000;
    FUN_10a1607bc(puVar8,(ulong)(lStack_60 - lStack_68) >> 5 & 0xffffffff);
    lVar7 = lStack_60 - lStack_68;
    if (lVar7 != 0) {
      puVar5 = (undefined4 *)(lStack_68 + 0x1c);
      uVar6 = 1;
      do {
        *(undefined4 *)((long)puVar8 + 0xc) = *puVar5;
        *(undefined4 *)puVar8 = puVar5[-1];
        *(undefined4 *)((long)puVar8 + 4) = 0;
        *(undefined4 *)(puVar8 + 1) = 0;
        puVar8 = puVar8 + 2;
        puVar5 = puVar5 + 8;
        bVar1 = uVar6 < (ulong)(lVar7 >> 5);
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (bVar1);
    }
    uStack_2dc = 1;
    uStack_2c0 = 1;
    uStack_2bc = 0;
    auStack_160[0] = *(undefined4 *)(param_1 + 0x1a);
    if ((undefined8 *)auStack_160 == param_1 + 0x1a) {
      uStack_130 = param_1[0x20];
      uStack_100 = param_1[0x26];
    }
    else {
      uStack_138 = 0;
      if (param_1[0x1f] != 0) {
        puVar8 = param_1 + 0x1b;
        lVar7 = param_1[0x1f] << 2;
        do {
          func_0x00010928bcfc(&uStack_158,puVar8);
          puVar8 = (undefined8 *)((long)puVar8 + 4);
          lVar7 = lVar7 + -4;
        } while (lVar7 != 0);
      }
      uStack_130 = param_1[0x20];
      uStack_108 = 0;
      if (param_1[0x25] != 0) {
        puVar8 = param_1 + 0x21;
        lVar7 = param_1[0x25] << 2;
        do {
          func_0x000109261ecc(&uStack_128,puVar8);
          puVar8 = (undefined8 *)((long)puVar8 + 4);
          lVar7 = lVar7 + -4;
        } while (lVar7 != 0);
      }
      uStack_100 = param_1[0x26];
      uStack_d8 = 0;
      if (param_1[0x2b] != 0) {
        puVar8 = param_1 + 0x27;
        lVar7 = param_1[0x2b] << 2;
        do {
          func_0x000109261ecc(&uStack_f8,puVar8);
          puVar8 = (undefined8 *)((long)puVar8 + 4);
          lVar7 = lVar7 + -4;
        } while (lVar7 != 0);
      }
    }
    lStack_170 = *(long *)(param_1[0x2e] + 0x18);
    if (lStack_170 == 0) {
      FUN_10a160848(auStack_278,uStack_138);
    }
    else {
      FUN_10a160848(auStack_278,*(undefined8 *)(lStack_170 + 0x3f8));
    }
    uVar9 = param_1[0x44];
    plStack_5b8 = (long *)0x0;
    uStack_5c0 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    FUN_10a1838ec(&uStack_5c0,param_1[0x42]);
    FUN_10a1838ec(&uStack_5c0,uVar9);
    FUN_10a16020c(auStack_590,&uStack_5c0);
    uStack_c8 = param_1[0x32];
    (**(code **)(*(long *)*param_1 + 0xd8))(&uStack_5c0,(long *)*param_1,&uStack_598);
    func_0x00010a15d6e8(param_1 + 0x39,&uStack_5c0);
    plVar4 = plStack_5b8;
    if (plStack_5b8 != (long *)0x0) {
      plVar2 = plStack_5b8 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar1) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_5b8 + 0x10))(plStack_5b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    func_0x00010a09ad20(auStack_b8);
    uStack_598 = &lStack_68;
    func_0x00010a0e8efc(&uStack_598);
  }
  return;
}



/* Entry: 10a15e978; end: 10a15e9db;  */

undefined8 * FUN_10a15e978(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a15e9dc; end: 10a15ee53;  */

long * FUN_10a15e9dc(long *param_1,long *param_2,undefined4 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long alStack_98 [2];
  char cStack_81;
  undefined8 uStack_80;
  long *plStack_78;
  char cStack_69;
  undefined4 uStack_68;
  byte bStack_61;
  
  lVar6 = param_2[1];
  lVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar7;
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = -1;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x31) = 0xff;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined2 *)(param_1 + 0x46) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  *(undefined8 *)((long)param_1 + 0x289) = 0;
  *(undefined8 *)((long)param_1 + 0x281) = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x9b] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x9c] = 0x32aaaba7;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  func_0x000107c2b054(&uStack_80,"");
  func_0x000107c2b054(alStack_98,"");
  FUN_10a107e2c(param_1 + 0xa4,&uStack_80,alStack_98,0);
  if (cStack_81 < '\0') {
    __ZdlPv(alStack_98[0]);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(uStack_80);
  }
  uVar4 = (ulong)*(uint *)(*param_2 + 0x734);
  FUN_10a15e300(uVar4,*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
  *(byte *)((long)param_1 + 0x189) = (byte)uVar4;
  alStack_98[0] = *param_2;
  bStack_61 = (byte)uVar4 ^ 1;
  uStack_68 = param_3;
  func_0x00010924edd0(&uStack_80,alStack_98[0],alStack_98,&bStack_61,&uStack_68);
  func_0x00010a15d6e8(param_1 + 0x39,&uStack_80);
  if (plStack_78 != (long *)0x0) {
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  if (*(char *)((long)param_1 + 0x189) == '\x01') {
    lVar6 = *param_2;
    FUN_10a15e3e4(lVar6,param_4,&UNK_10f63f667,0x10);
    if ((int)lVar6 != 0) {
      FUN_10a181ea0(param_1 + 0x5d,param_1 + 0x5d,param_4);
      goto LAB_10a15ec94;
    }
  }
  plVar5 = (long *)param_1[0x39];
  (**(code **)(*plVar5 + 0x30))();
  if ((*(byte *)(plVar5 + 6) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a15ed04);
    (*pcVar3)();
  }
  FUN_10a180978(param_1 + 0x5d,param_1 + 0x5d,plVar5);
LAB_10a15ec94:
  lVar6 = 0x488;
  do {
    func_0x00010a180788((long)param_1 + lVar6,0,0);
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x4c8);
  lVar6 = 0x488;
  do {
    func_0x00010a180788((long)param_1 + lVar6,0,0);
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x4c8);
  *(undefined1 *)((long)param_1 + 0x18a) = 1;
  return param_1;
}



/* Entry: 10a15ee54; end: 10a15f03f;  */

void FUN_10a15ee54(long *param_1)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plStack_38;
  
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + 0x734);
    if ((iVar1 != 1 && iVar1 != 6) && (plVar3 = (long *)param_1[0x32], plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x30))(plVar3,param_1 + 0x36);
    }
    FUN_10a15f874(param_1 + 0x39);
    lVar4 = param_1[0x3b];
    for (lVar5 = param_1[0x3c]; lVar5 != lVar4; lVar5 = lVar5 + -0x18) {
      func_0x00010a0ea9d8(lVar5 + -0x10);
    }
    param_1[0x3c] = lVar4;
    plVar3 = param_1 + 0x91;
    lVar4 = -4;
    do {
      func_0x00010a180788(plVar3,0,0);
      plVar3 = plVar3 + 2;
      bVar2 = lVar4 != -1;
      lVar4 = lVar4 + 1;
    } while (bVar2);
    plVar3 = param_1 + 0x42;
    lVar4 = -2;
    do {
      FUN_10a180aa8(plVar3,0,0);
      plVar3 = plVar3 + 2;
      bVar2 = lVar4 != -1;
      lVar4 = lVar4 + 1;
    } while (bVar2);
  }
  if (*(char *)((long)param_1 + 0x54f) < '\0') {
    __ZdlPv(param_1[0xa7]);
  }
  if (*(char *)((long)param_1 + 0x537) < '\0') {
    __ZdlPv(param_1[0xa4]);
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x9c);
  plStack_38 = param_1 + 0x99;
  FUN_10a0426d8(&plStack_38);
  lVar4 = 0x4b8;
  do {
    func_0x00010a0ea980((long)param_1 + lVar4);
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x478);
  FUN_10a1807fc(param_1 + 0x5d);
  func_0x00010a09ad20(param_1 + 0x52);
  FUN_10a0eb0cc(param_1 + 0x50);
  if (*(char *)((long)param_1 + 0x27f) < '\0') {
    __ZdlPv(param_1[0x4d]);
  }
  if (*(char *)((long)param_1 + 0x267) < '\0') {
    __ZdlPv(param_1[0x4a]);
  }
  FUN_10a18089c(param_1 + 0x47);
  lVar4 = 0x220;
  do {
    func_0x00010a0eb17c((long)param_1 + lVar4);
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x200);
  do {
    func_0x00010a0eb124((long)param_1 + lVar4);
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x1e0);
  func_0x00010a18090c(param_1 + 0x3b);
  func_0x00010a0ea9d8(param_1 + 0x39);
  if (*(char *)((long)param_1 + 0x1c7) < '\0') {
    __ZdlPv(param_1[0x36]);
  }
  FUN_10a09da04(param_1 + 0x34);
  FUN_10a09da04(param_1 + 0x32);
  func_0x00010a194b10(param_1 + 0x2c);
  func_0x00010a194aac(param_1 + 0x15);
  func_0x00010a194a48(param_1 + 0x10);
  func_0x00010a1949e4(param_1 + 0xb);
  func_0x00010a194980(param_1 + 6);
  func_0x00010a09dbbc(param_1);
  return;
}



/* Entry: 10a15f040; end: 10a15f2eb;  */

long FUN_10a15f040(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  
  FUN_10a0e6d5c(&uStack_200,param_4);
  FUN_10a15e9dc(param_1,param_2,param_3,&uStack_200);
  func_0x00010923ff08(&uStack_200);
  *(undefined1 *)(param_1 + 0x18b) = 1;
  plVar1 = (long *)(param_1 + 0x238);
  FUN_10a15e244(plVar1,(*(long *)(param_4 + 0x68) - *(long *)(param_4 + 0x60) >> 4) *
                       -0x5555555555555555);
  lVar9 = *(long *)(param_4 + 0x60);
  lVar3 = *(long *)(param_4 + 0x68);
  if (lVar9 != lVar3) {
    do {
      FUN_10a0d09b4(auStack_220,lVar9 + 0x18);
      lVar4 = lVar9;
      FUN_10a0d09b4(&uStack_240);
      puVar5 = *(undefined8 **)(param_1 + 0x240);
      if (puVar5 < *(undefined8 **)(param_1 + 0x248)) {
        *puVar5 = uStack_208;
        puVar5[2] = uStack_238;
        puVar5[1] = uStack_240;
        puVar5[3] = lStack_230;
        uStack_238 = 0;
        lStack_230 = 0;
        uStack_240 = 0;
        puVar5[4] = uStack_228;
        *(undefined8 **)(param_1 + 0x240) = puVar5 + 5;
      }
      else {
        lVar10 = (long)puVar5 - *plVar1;
        uVar6 = (lVar10 >> 3) * -0x3333333333333333 + 1;
        if (0x666666666666666 < uVar6) {
          FUN_10a180b1c();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a15f290);
          (*pcVar2)();
        }
        lVar7 = (long)*(undefined8 **)(param_1 + 0x248) - *plVar1 >> 3;
        uVar8 = lVar7 * -0x6666666666666666;
        if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
          uVar8 = uVar6;
        }
        if (0x333333333333332 < (ulong)(lVar7 * -0x3333333333333333)) {
          uVar8 = 0x666666666666666;
        }
        plStack_1e0 = plVar1;
        FUN_10a180b30();
        puVar5 = (undefined8 *)(uVar8 + lVar10);
        *puVar5 = uStack_208;
        puVar5[3] = lStack_230;
        puVar5[2] = uStack_238;
        puVar5[1] = uStack_240;
        uStack_238 = 0;
        lStack_230 = 0;
        uStack_240 = 0;
        puVar5[4] = uStack_228;
        lVar10 = (long)puVar5 + (*(long *)(param_1 + 0x238) - *(long *)(param_1 + 0x240));
        func_0x00010a180b74(*(long *)(param_1 + 0x238),*(long *)(param_1 + 0x240),lVar10);
        uStack_200 = *(undefined8 *)(param_1 + 0x238);
        *(long *)(param_1 + 0x238) = lVar10;
        *(undefined8 **)(param_1 + 0x240) = puVar5 + 5;
        uStack_1e8 = *(undefined8 *)(param_1 + 0x248);
        *(ulong *)(param_1 + 0x248) = uVar8 + lVar4 * 0x28;
        uStack_1f8 = uStack_200;
        uStack_1f0 = uStack_200;
        func_0x00010a180bf4(&uStack_200);
        *(undefined8 **)(param_1 + 0x240) = puVar5 + 5;
        if (lStack_230 < 0) {
          __ZdlPv(uStack_240);
        }
      }
      if (cStack_209 < '\0') {
        __ZdlPv(auStack_220[0]);
      }
      lVar9 = lVar9 + 0x30;
    } while (lVar9 != lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x238);
  lVar4 = *(long *)(param_1 + 0x240);
  lVar9 = 0;
  if (lVar4 != lVar3) {
    lVar9 = LZCOUNT((lVar4 - lVar3 >> 3) * -0x3333333333333333) * -2 + 0x7e;
  }
  FUN_10a181fc8(lVar3,lVar4,lVar9,1);
  return param_1;
}



/* Entry: 10a15f2ec; end: 10a15f873;  */

ulong * FUN_10a15f2ec(ulong *param_1,ulong *param_2,undefined4 param_3,undefined8 *param_4,
                     undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  long *plStack_88;
  char cStack_79;
  ulong uStack_70;
  undefined1 uStack_65;
  undefined4 uStack_64;
  
  uVar6 = param_2[1];
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  if (uVar6 != 0) {
    plVar5 = (long *)(uVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0xffffffffffffffff;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x31) = 0xff;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined2 *)(param_1 + 0x46) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  *(undefined8 *)((long)param_1 + 0x289) = 0;
  *(undefined8 *)((long)param_1 + 0x281) = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x9b] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x9c] = 0x32aaaba7;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  func_0x000107c2b054(&puStack_c0,"");
  func_0x000107c2b054(&puStack_90,"");
  FUN_10a107e2c(param_1 + 0xa4,&puStack_c0,&puStack_90,0);
  if (cStack_79 < '\0') {
    __ZdlPv(puStack_90);
  }
  if ((long)uStack_b0 < 0) {
    __ZdlPv(puStack_c0);
  }
  *(undefined1 *)((long)param_1 + 0x189) = 0;
  puStack_90 = (undefined8 *)*param_2;
  uStack_70 = CONCAT71(uStack_70._1_7_,1);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,param_3);
  func_0x00010924edd0(&puStack_c0,puStack_90,&puStack_90,&uStack_70,&uStack_a0);
  func_0x00010a15d6e8(param_1 + 0x39,&puStack_c0);
  if (plStack_b8 != (long *)0x0) {
    plVar5 = plStack_b8 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  plVar5 = (long *)param_1[0x39];
  (**(code **)(*plVar5 + 0x30))();
  if ((*(byte *)(plVar5 + 6) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a15f710);
    (*pcVar4)();
  }
  FUN_10a180978(param_1 + 0x5d,param_1 + 0x5d,plVar5);
  lVar7 = 0x488;
  do {
    func_0x00010a180788((long)param_1 + lVar7,0,0);
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x4c8);
  uStack_a0 = *param_2;
  plStack_b8 = (long *)param_4[1];
  puStack_c0 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    plStack_b8 = (long *)(ulong)*(byte *)((long)param_4 + 0x17);
    puStack_c0 = param_4;
  }
  uStack_70 = uStack_70 & 0xffffffff00000000;
  uStack_64 = CONCAT31(uStack_64._1_3_,1);
  func_0x00010924e19c(&puStack_90,uStack_a0,&uStack_a0,&uStack_70,&puStack_c0,&uStack_64);
  uStack_70 = *param_2;
  plStack_b8 = (long *)param_5[1];
  puStack_c0 = (undefined8 *)*param_5;
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    plStack_b8 = (long *)(ulong)*(byte *)((long)param_5 + 0x17);
    puStack_c0 = param_5;
  }
  uStack_64 = 1;
  uStack_65 = 1;
  func_0x00010924e19c(&uStack_a0,uStack_70,&uStack_70,&uStack_64,&puStack_c0,&uStack_65);
  if ((puStack_90 != (undefined8 *)0x0) && (uStack_a0 != 0)) {
    lVar7 = 0;
    puStack_c0 = puStack_90;
    plStack_b8 = plStack_88;
    puStack_90 = (undefined8 *)0x0;
    plStack_88 = (long *)0x0;
    uStack_b0 = uStack_a0;
    plStack_a8 = plStack_98;
    uStack_a0 = 0;
    plStack_98 = (long *)0x0;
    do {
      FUN_10a166f28((long)(param_1 + 0x42) + lVar7,(long)&puStack_c0 + lVar7);
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != 0x20);
    lVar7 = 0x10;
    do {
      func_0x00010a0eb17c((long)&puStack_c0 + lVar7);
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != -0x10);
  }
  plVar5 = plStack_98;
  *(undefined2 *)((long)param_1 + 0x18a) = 0x101;
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
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
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a15f874; end: 10a15f8cf;  */

void FUN_10a15f874(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a15f8d0; end: 10a16004f;  */

ulong FUN_10a15f8d0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long *plStack_5d0;
  long *plStack_5c8;
  long *plStack_5c0;
  long *plStack_5b8;
  long *plStack_5b0;
  undefined8 uStack_5a8;
  uint auStack_598 [2];
  undefined1 auStack_590 [1216];
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [88];
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x9c);
  plVar8 = (long *)(auStack_b8 + 0x57);
  func_0x000109294c2c(plVar8,param_2);
  lVar15 = param_1[0x3c] - param_1[0x3b];
  if (lVar15 != 0) {
    uVar16 = 0;
    puVar12 = (undefined8 *)param_1[0x3b];
    do {
      if ((long *)*puVar12 == plVar8) goto LAB_10a15ff60;
      uVar16 = uVar16 + 1;
      puVar12 = puVar12 + 3;
    } while ((lVar15 >> 3) * -0x5555555555555555 - uVar16 != 0);
  }
  func_0x00010928b998(auStack_598,param_2);
  plVar11 = (long *)*param_3;
  if (plVar11 != (long *)0x0) {
    plVar9 = param_1 + 0x2c;
    plStack_5c0 = plVar11;
    FUN_10a194b6c(plVar9,plVar11,&plStack_5c0);
    FUN_10a15e154(plVar9 + 3,param_3);
  }
  if (*(int *)(*param_1 + 0x734) == 6 || *(int *)(*param_1 + 0x734) == 1) {
    FUN_10a160050(param_1);
    FUN_10a18352c(auStack_b8,param_1 + 0x52);
  }
  if (param_1[0x50] == 0) {
    plVar11 = param_1;
    FUN_10a160120(param_1);
    lVar15 = *param_1;
    plVar9 = param_1;
    func_0x00010a16016c(param_1);
    func_0x000109235564(&plStack_5c0,lVar15,plVar11,plVar9);
    FUN_10a15e978(param_1 + 0x50,&plStack_5c0);
    if (plStack_5b8 != (long *)0x0) {
      plVar11 = plStack_5b8 + 1;
      do {
        lVar15 = *plVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_5b8 + 0x10))(plStack_5b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_5b8);
      }
    }
  }
  lVar15 = param_1[0x44];
  plStack_5b8 = (long *)0x0;
  plStack_5c0 = (long *)0x0;
  uStack_5a8 = 0;
  plStack_5b0 = (long *)0x0;
  FUN_10a1838ec(&plStack_5c0,param_1[0x42]);
  FUN_10a1838ec(&plStack_5c0,lVar15);
  FUN_10a16020c(auStack_590,&plStack_5c0);
  uVar6 = auStack_598[0];
  lStack_c0 = param_1[0x50];
  lStack_d0 = param_1[0x39];
  lStack_c8 = param_1[0x34];
  if (lStack_c8 == 0) {
    plVar11 = (long *)0x0;
LAB_10a15fb18:
    lStack_c8 = param_1[0x32];
    auStack_598[0] = uVar6;
    (**(code **)(*(long *)*param_1 + 0xd8))(&plStack_5c0,(long *)*param_1,auStack_598);
    plVar9 = plStack_5b8;
    plStack_5d0 = plStack_5c0;
    plStack_5c0 = (long *)0x0;
    plStack_5b8 = (long *)0x0;
    plStack_5c8 = plVar9;
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      do {
        lVar15 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    plVar11 = plStack_5b8;
    if (plStack_5b8 != (long *)0x0) {
      plVar1 = plStack_5b8 + 1;
      do {
        lVar15 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_5b8 + 0x10))(plStack_5b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    if (plStack_5d0 == (long *)0x0 && lStack_c8 != 0) {
      uVar16 = param_1[0xa5];
      plVar11 = (long *)param_1[0xa4];
      if (-1 < (char)*(byte *)((long)param_1 + 0x537)) {
        uVar16 = (ulong)*(byte *)((long)param_1 + 0x537);
        plVar11 = param_1 + 0xa4;
      }
      FUN_10ae03140(0,plVar11,uVar16);
      ppuVar10 = &PTR_PTR_113300728;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar10,&PTR_PTR_113300728);
      lStack_c8 = 0;
      (**(code **)(*(long *)*param_1 + 0xd8))(&plStack_5c0,(long *)*param_1,auStack_598);
      plStack_5c8 = plStack_5b8;
      plStack_5d0 = plStack_5c0;
      plStack_5c0 = (long *)0x0;
      plStack_5b8 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        plVar11 = plVar9 + 1;
        do {
          lVar15 = *plVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar11 = plStack_5b8;
      if (plStack_5b8 != (long *)0x0) {
        plVar9 = plStack_5b8 + 1;
        do {
          lVar15 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_5b8 + 0x10))(plStack_5b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
    }
    if (plStack_5d0 == (long *)0x0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&plStack_5c0,&UNK_10f63f678,param_1 + 0xa4);
      func_0x000105687ee0(&plStack_5c0);
      goto LAB_10a15ffb8;
    }
  }
  else {
    auStack_598[0] = auStack_598[0] | 4;
    (**(code **)(*(long *)*param_1 + 0xd8))(&plStack_5c0,(long *)*param_1,auStack_598);
    plStack_5d0 = plStack_5c0;
    plStack_5c8 = plStack_5b8;
    plVar11 = plStack_5b8;
    if (plStack_5c0 == (long *)0x0) goto LAB_10a15fb18;
    uVar16 = param_1[0xa5];
    plVar11 = (long *)param_1[0xa4];
    if (-1 < (char)*(byte *)((long)param_1 + 0x537)) {
      uVar16 = (ulong)*(byte *)((long)param_1 + 0x537);
      plVar11 = param_1 + 0xa4;
    }
    FUN_10ae03140(0,plVar11,uVar16);
    ppuVar10 = &PTR_PTR_1133006e8;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar10,&PTR_PTR_1133006e8);
  }
  if (*(char *)((long)param_1 + 0x231) == '\x01') {
    ppuVar10 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    if (*(char *)(**(long **)*ppuVar10 + 0x79) == '\x01') {
      FUN_10a160274(**(long **)*ppuVar10,auStack_598,param_1 + 0x4a,param_1 + 0x4d);
    }
  }
  plVar11 = (long *)param_1[0x32];
  if (plVar11 != (long *)0x0) {
    lVar15 = param_1[0x99];
    lVar17 = param_1[0x9a];
    if (lVar15 != lVar17) {
      do {
        plVar11 = (long *)param_1[0x32];
        FUN_10a09d9a0(&plStack_5c0,lVar15,0);
        (**(code **)(*plVar11 + 0x30))(plVar11,&plStack_5c0);
        if ((long)plStack_5b0 < 0) {
          __ZdlPv(plStack_5c0);
        }
        lVar15 = lVar15 + 0x18;
      } while (lVar15 != lVar17);
      plVar11 = (long *)param_1[0x32];
      if (plVar11 == (long *)0x0) goto LAB_10a15fdac;
    }
    if ((*(int *)(*param_1 + 0x734) == 8 || *(int *)(*param_1 + 0x734) == 3) &&
       (param_1[0x99] == param_1[0x9a])) {
      (**(code **)(*plVar11 + 0x30))(plVar11,param_1 + 0x36);
    }
  }
LAB_10a15fdac:
  if (param_1[0x39] == 0) {
    FUN_10a160588(param_1 + 0x39,plStack_5d0,plStack_5c8);
    FUN_10a1605fc(param_1);
  }
  plVar11 = param_1;
  FUN_10a160120();
  puVar3 = (uint *)plVar11[1];
  for (puVar2 = (uint *)*plVar11; puVar2 != puVar3; puVar2 = puVar2 + 0x20) {
    lVar15 = *param_1;
    plVar11 = param_1;
    func_0x00010a16016c(param_1);
    func_0x000109235150(&plStack_5c0,lVar15,puVar2,plVar11);
    if (3 < *puVar2) goto LAB_10a15ffb8;
    FUN_10a1606c0(param_1 + (ulong)*puVar2 * 2 + 0x91,&plStack_5c0);
    plVar11 = plStack_5b8;
    if (plStack_5b8 != (long *)0x0) {
      plVar9 = plStack_5b8 + 1;
      do {
        lVar15 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_5b8 + 0x10))(plStack_5b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
  }
  plStack_5b8 = plStack_5d0;
  plStack_5b0 = plStack_5c8;
  puVar12 = (undefined8 *)param_1[0x3c];
  plStack_5c0 = plVar8;
  if ((undefined8 *)param_1[0x3d] <= puVar12) {
    lVar15 = param_1[0x3b];
    uVar16 = ((long)puVar12 - lVar15 >> 3) * -0x5555555555555555 + 1;
    if (uVar16 < 0xaaaaaaaaaaaaaab) {
      lVar17 = param_1[0x3d] - lVar15 >> 3;
      uVar13 = lVar17 * 0x5555555555555556;
      if (uVar13 < uVar16 || uVar13 - uVar16 == 0) {
        uVar13 = uVar16;
      }
      if (0x555555555555554 < (ulong)(lVar17 * -0x5555555555555555)) {
        uVar13 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar13 < 0xaaaaaaaaaaaaaab) {
        lVar17 = uVar13 * 0x18;
        __Znwm();
        puVar14 = (undefined8 *)(lVar17 + ((long)puVar12 - lVar15));
        *puVar14 = plVar8;
        puVar14[1] = plStack_5d0;
        puVar14[2] = plStack_5c8;
        puVar14 = puVar14 + 3;
        _memcpy();
        param_1[0x3b] = lVar17;
        param_1[0x3c] = (long)puVar14;
        param_1[0x3d] = lVar17 + uVar13 * 0x18;
        if (lVar15 != 0) {
          __ZdlPv(lVar15);
        }
        goto LAB_10a15ff34;
      }
      func_0x000109ffded8();
    }
    else {
      FUN_10a1839c0();
    }
LAB_10a15ffb8:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a15ffbc);
    (*pcVar7)();
  }
  *puVar12 = plVar8;
  puVar12[1] = plStack_5d0;
  puVar14 = puVar12 + 3;
  puVar12[2] = plStack_5c8;
LAB_10a15ff34:
  param_1[0x3c] = (long)puVar14;
  uVar16 = (ulong)((int)((ulong)((long)puVar14 - param_1[0x3b]) >> 3) * -0x55555555 - 1);
  func_0x00010a09ad20(auStack_b8);
LAB_10a15ff60:
  __ZNSt3__15mutex6unlockEv(param_1 + 0x9c);
  return uVar16;
}



/* Entry: 10a160050; end: 10a16011f;  */

undefined1 ** FUN_10a160050(undefined1 **param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined1 **ppuVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined1 auStack_70 [24];
  long lStack_58;
  long lStack_50;
  undefined1 auStack_40 [24];
  undefined1 *puStack_28;
  
  if (((ulong)param_1[0x5b] & 1) == 0) {
    if (*(int *)(param_1 + 0x90) == 2) {
      func_0x00010923aaa8(auStack_70,param_1 + 0x5d);
      FUN_10a0e6cd0(param_1 + 0x52,auStack_70);
    }
    else {
      if (*(int *)(param_1 + 0x90) != 1) {
        puVar1 = &UNK_10f63f7da;
        func_0x000105688514();
        func_0x00010923b03c(auStack_70);
        __Unwind_Resume();
        FUN_10a1605fc();
        ppuVar4 = (undefined1 **)(puVar1 + 0x2e8);
        if (*(int *)(puVar1 + 0x480) != 1) {
          if (*(int *)(puVar1 + 0x480) != 2) {
            plVar2 = (long *)&UNK_10f63f71e;
            func_0x000105688514();
            if ((char)plVar2[0x31] < '\0') {
              lVar8 = *plVar2;
              iVar7 = *(int *)(lVar8 + 0x734);
              if (iVar7 == 8 || iVar7 == 3) {
                plVar3 = plVar2;
                FUN_10a160120();
                lVar6 = *plVar3;
                if (lVar6 == plVar3[1]) {
                  uVar5 = 0xffffffff;
                }
                else {
                  iVar7 = 0;
                  do {
                    iVar7 = iVar7 + (int)((ulong)(*(long *)(lVar6 + 0x10) - *(long *)(lVar6 + 8)) >>
                                         6);
                    lVar6 = lVar6 + 0x80;
                  } while (lVar6 != plVar3[1]);
                  uVar5 = iVar7 - 1;
                }
                ppuVar4 = (undefined1 **)(ulong)(uVar5 < *(uint *)(lVar8 + 0x118));
              }
              else {
                ppuVar4 = (undefined1 **)0x0;
              }
              *(char *)(plVar2 + 0x31) = (char)ppuVar4;
              return ppuVar4;
            }
            return (undefined1 **)(ulong)((char)plVar2[0x31] != '\0');
          }
          ppuVar4 = (undefined1 **)(puVar1 + 0x2f0);
        }
        return ppuVar4;
      }
      func_0x000109297a50(auStack_70,param_1 + 0x5d);
      FUN_10a0e6cd0(param_1 + 0x52,auStack_70);
    }
    puStack_28 = auStack_40;
    func_0x00010a09ad80(&puStack_28);
    if (lStack_58 != 0) {
      lStack_50 = lStack_58;
      __ZdlPv();
    }
    param_1 = &puStack_28;
    puStack_28 = auStack_70;
    FUN_10a09ae0c(param_1);
  }
  return param_1;
}



/* Entry: 10a160120; end: 10a16020b;  */

ulong FUN_10a160120(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  FUN_10a1605fc();
  uVar3 = param_1 + 0x2e8;
  if (*(int *)(param_1 + 0x480) != 1) {
    if (*(int *)(param_1 + 0x480) != 2) {
      plVar1 = (long *)&UNK_10f63f71e;
      func_0x000105688514();
      if ((char)plVar1[0x31] < '\0') {
        lVar7 = *plVar1;
        iVar6 = *(int *)(lVar7 + 0x734);
        if (iVar6 == 8 || iVar6 == 3) {
          plVar2 = plVar1;
          FUN_10a160120();
          lVar5 = *plVar2;
          if (lVar5 == plVar2[1]) {
            uVar4 = 0xffffffff;
          }
          else {
            iVar6 = 0;
            do {
              iVar6 = iVar6 + (int)((ulong)(*(long *)(lVar5 + 0x10) - *(long *)(lVar5 + 8)) >> 6);
              lVar5 = lVar5 + 0x80;
            } while (lVar5 != plVar2[1]);
            uVar4 = iVar6 - 1;
          }
          uVar3 = (ulong)(uVar4 < *(uint *)(lVar7 + 0x118));
        }
        else {
          uVar3 = 0;
        }
        *(char *)(plVar1 + 0x31) = (char)uVar3;
        return uVar3;
      }
      return (ulong)((char)plVar1[0x31] != '\0');
    }
    uVar3 = param_1 + 0x2f0;
  }
  return uVar3;
}



/* Entry: 10a16020c; end: 10a160273;  */

long FUN_10a16020c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar2 = *(long *)(param_2 + 0x18) << 3;
      lVar1 = param_2;
      do {
        func_0x0001092956d4(param_1,lVar1);
        lVar1 = lVar1 + 8;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10a160274; end: 10a160587;  */

void FUN_10a160274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  uVar6 = *(ulong *)(param_1 + 0xb0);
  if (uVar6 < *(ulong *)(param_1 + 0xb8)) {
    func_0x00010928b810(uVar6,param_2,param_1 + 0xc0,param_3,param_4);
    lVar4 = uVar6 + 0x578;
    *(long *)(param_1 + 0xb0) = lVar4;
  }
  else {
    plVar10 = (long *)(param_1 + 0xa8);
    lVar8 = uVar6 - *plVar10;
    uVar6 = (lVar8 >> 3) * -0x101767dce434a9b1 + 1;
    if (0x2ecfb9c8695362 < uVar6) {
      FUN_10a183960();
LAB_10a1604e0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a1604e4);
      (*pcVar2)();
    }
    lVar4 = (long)(*(ulong *)(param_1 + 0xb8) - *plVar10) >> 3;
    uVar5 = lVar4 * -0x202ecfb9c8695362;
    if (uVar5 < uVar6 || uVar5 - uVar6 == 0) {
      uVar5 = uVar6;
    }
    if (0x1767dce434a9b0 < (ulong)(lVar4 * -0x101767dce434a9b1)) {
      uVar5 = 0x2ecfb9c8695362;
    }
    plStack_58 = plVar10;
    if (uVar5 == 0) {
      lVar4 = 0;
    }
    else {
      if (0x2ecfb9c8695362 < uVar5) {
        func_0x000109ffded8();
        goto LAB_10a1604e0;
      }
      lVar4 = uVar5 * 0x578;
      __Znwm();
    }
    lVar8 = lVar4 + lVar8;
    lVar9 = lVar4 + uVar5 * 0x578;
    lStack_78 = lVar4;
    lStack_70 = lVar8;
    lStack_68 = lVar8;
    lStack_60 = lVar9;
    func_0x00010928b810(lVar8,param_2,param_1 + 0xc0,param_3,param_4);
    lStack_68 = lVar8 + 0x578;
    lVar7 = *(long *)(param_1 + 0xa8);
    lVar1 = *(long *)(param_1 + 0xb0);
    lVar8 = lVar8 + (lVar7 - lVar1);
    lVar4 = lStack_68;
    if (lVar7 - lVar1 != 0) {
      lVar4 = 0;
      do {
        lVar9 = lVar7 + lVar4;
        lVar3 = lVar8 + lVar4;
        func_0x00010928b998(lVar3,lVar9);
        if (*(char *)(lVar9 + 0x547) < '\0') {
          func_0x000107c3192c((undefined8 *)(lVar3 + 0x530),*(undefined8 *)(lVar9 + 0x530),
                              *(undefined8 *)(lVar7 + lVar4 + 0x538));
        }
        else {
          uVar12 = *(undefined8 *)(lVar9 + 0x538);
          uVar11 = *(undefined8 *)(lVar9 + 0x530);
          *(undefined8 *)(lVar3 + 0x540) = *(undefined8 *)(lVar9 + 0x540);
          *(undefined8 *)(lVar3 + 0x538) = uVar12;
          *(undefined8 *)(lVar3 + 0x530) = uVar11;
        }
        lVar9 = lVar8 + lVar4;
        lVar3 = lVar7 + lVar4;
        if (*(char *)(lVar3 + 0x55f) < '\0') {
          func_0x000107c3192c((undefined8 *)(lVar9 + 0x548),*(undefined8 *)(lVar3 + 0x548),
                              *(undefined8 *)(lVar3 + 0x550));
        }
        else {
          uVar12 = *(undefined8 *)(lVar3 + 0x550);
          uVar11 = *(undefined8 *)(lVar3 + 0x548);
          *(undefined8 *)(lVar9 + 0x558) = *(undefined8 *)(lVar3 + 0x558);
          *(undefined8 *)(lVar9 + 0x550) = uVar12;
          *(undefined8 *)(lVar9 + 0x548) = uVar11;
        }
        lVar9 = lVar8 + lVar4;
        lVar3 = lVar7 + lVar4;
        if (*(char *)(lVar3 + 0x577) < '\0') {
          func_0x000107c3192c((undefined8 *)(lVar9 + 0x560),*(undefined8 *)(lVar3 + 0x560),
                              *(undefined8 *)(lVar3 + 0x568));
        }
        else {
          uVar12 = *(undefined8 *)(lVar3 + 0x568);
          uVar11 = *(undefined8 *)(lVar3 + 0x560);
          *(undefined8 *)(lVar9 + 0x570) = *(undefined8 *)(lVar3 + 0x570);
          *(undefined8 *)(lVar9 + 0x568) = uVar12;
          *(undefined8 *)(lVar9 + 0x560) = uVar11;
        }
        lVar4 = lVar4 + 0x578;
      } while (lVar7 + lVar4 != lVar1);
      do {
        func_0x00010a09acc8(lVar7);
        lVar7 = lVar7 + 0x578;
      } while (lVar7 != lVar1);
      lVar7 = *plVar10;
      lVar4 = lStack_68;
      lVar9 = lStack_60;
    }
    *(long *)(param_1 + 0xa8) = lVar8;
    *(long *)(param_1 + 0xb0) = lVar4;
    lStack_60 = *(undefined8 *)(param_1 + 0xb8);
    *(long *)(param_1 + 0xb8) = lVar9;
    lStack_78 = lVar7;
    lStack_70 = lVar7;
    lStack_68 = lVar7;
    FUN_10a183974(&lStack_78);
  }
  *(long *)(param_1 + 0xb0) = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a160588; end: 10a1605fb;  */

undefined8 * FUN_10a160588(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a1605fc; end: 10a1606bf;  */

void FUN_10a1605fc(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lStack_38;
  
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
    lVar3 = param_1;
    __ZSt19uncaught_exceptionsv();
    lStack_38 = param_1;
    if (*(int *)(param_1 + 0x480) == 2) {
      plVar4 = &lStack_38;
      FUN_10a160ee8(plVar4,param_1 + 0x2f0);
      iVar2 = (int)plVar4;
    }
    else {
      if (*(int *)(param_1 + 0x480) != 1) {
        func_0x000105688514(&UNK_10f63f7a1);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a160694);
        (*pcVar1)();
      }
      plVar4 = &lStack_38;
      FUN_10a160ee8(plVar4,param_1 + 0x2e8);
      iVar2 = (int)plVar4;
    }
    __ZSt19uncaught_exceptionsv();
    if ((int)lVar3 < iVar2) {
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
  }
  return;
}



/* Entry: 10a1606c0; end: 10a160723;  */

undefined8 * FUN_10a1606c0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a160724; end: 10a1607bb;  */

undefined8 ***** FUN_10a160724(undefined8 *****param_1,undefined8 ****param_2)

{
  code *pcVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  long lVar4;
  long lVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuStack_b8;
  
  if (param_2 < (undefined8 ****)0x9) {
    ppppuVar7 = param_1[0x10];
    if (ppppuVar7 < param_2) {
      do {
        (param_1 + (long)ppppuVar7 * 2)[1] = (undefined8 ****)0xffffffff;
        param_1[(long)ppppuVar7 * 2] = (undefined8 ****)0x100000000;
        ppppuVar7 = (undefined8 ****)((long)param_1[0x10] + 1);
        param_1[0x10] = ppppuVar7;
      } while (ppppuVar7 < param_2);
    }
    else {
      param_1[0x10] = param_2;
    }
    return param_1;
  }
  pppppuVar2 = (undefined8 *****)0x10;
  ___cxa_allocate_exception();
  FUN_109ffdeb4();
  pppppuVar3 = pppppuVar2;
  ppppuVar7 = (undefined8 ****)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(pppppuVar2,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170
              );
  ___cxa_free_exception(pppppuVar2);
  __Unwind_Resume();
  if (ppppuVar7 < (undefined8 ****)0x21) {
    ppppuVar8 = pppppuVar3[0x40];
    lVar5 = (long)ppppuVar7 - (long)ppppuVar8;
    if (ppppuVar8 <= ppppuVar7 && lVar5 != 0) {
      pppppuVar2 = pppppuVar3 + (long)ppppuVar8 * 2;
      do {
        pppppuVar2[1] = (undefined8 ****)0x0;
        *pppppuVar2 = (undefined8 ****)0xffffffff;
        lVar5 = lVar5 + -1;
        pppppuVar2 = pppppuVar2 + 2;
      } while (lVar5 != 0);
    }
    pppppuVar3[0x40] = ppppuVar7;
    return pppppuVar3;
  }
  pppppuVar2 = (undefined8 *****)0x10;
  ___cxa_allocate_exception();
  FUN_109ffdeb4();
  pppppuVar3 = pppppuVar2;
  ppppuVar7 = (undefined8 ****)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(pppppuVar2,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170
              );
  ___cxa_free_exception(pppppuVar2);
  __Unwind_Resume();
  if (ppppuVar7 < (undefined8 ****)0x9) {
    ppppuVar8 = pppppuVar3[0x20];
    if (ppppuVar8 < ppppuVar7) {
      do {
        pppppuVar2 = pppppuVar3 + (long)ppppuVar8 * 4;
        pppppuVar2[1] = (undefined8 ****)0x0;
        *pppppuVar2 = (undefined8 ****)0x100000000;
        pppppuVar2[3] = (undefined8 ****)0x0;
        pppppuVar2[2] = (undefined8 ****)0x1;
        ppppuVar8 = (undefined8 ****)((long)pppppuVar3[0x20] + 1);
        pppppuVar3[0x20] = ppppuVar8;
      } while (ppppuVar8 < ppppuVar7);
    }
    else {
      pppppuVar3[0x20] = ppppuVar7;
    }
    return pppppuVar3;
  }
  lVar4 = 0x10;
  ___cxa_allocate_exception();
  FUN_109ffdeb4();
  lVar5 = lVar4;
  ___cxa_throw(lVar4,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar4);
  __Unwind_Resume();
  FUN_10a160944();
  if (*(int *)(lVar5 + 0x480) == 1) {
    pppppuVar3 = (undefined8 *****)(lVar5 + 0x300);
  }
  else {
    if (*(int *)(lVar5 + 0x480) != 2) {
      pppppuVar3 = (undefined8 *****)&UNK_10f63f6cd;
      func_0x000105688514();
      pppppuVar2 = pppppuVar3;
      if (((ulong)pppppuVar3[2] & 1) == 0) {
        pppppuVar6 = pppppuVar3;
        __ZSt19uncaught_exceptionsv();
        ppppuVar7 = pppppuVar3[0x42];
        ppppuStack_b8 = pppppuVar3;
        if ((ppppuVar7 == (undefined8 ****)0x0) ||
           ((*(code *)(*ppppuVar7)[6])(), *(char *)(ppppuVar7 + 3) != '\x01')) {
          if (*(int *)(pppppuVar3 + 0x90) == 2) {
            pppppuVar2 = &ppppuStack_b8;
            FUN_10a160a40(pppppuVar2,pppppuVar3 + 0x61);
          }
          else {
            if (*(int *)(pppppuVar3 + 0x90) != 1) {
              func_0x000105688514(&UNK_10f63f76a);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10a160a0c);
              (*pcVar1)();
            }
            pppppuVar2 = &ppppuStack_b8;
            FUN_10a160a40(pppppuVar2,pppppuVar3 + 0x60);
          }
        }
        else {
          pppppuVar2 = &ppppuStack_b8;
          FUN_10a160a40();
        }
        __ZSt19uncaught_exceptionsv();
        if ((int)pppppuVar6 < (int)pppppuVar2) {
          *(undefined1 *)((long)pppppuVar3 + 0x14) = 1;
        }
      }
      return pppppuVar2;
    }
    pppppuVar3 = (undefined8 *****)(lVar5 + 0x308);
  }
  return pppppuVar3;
}



/* Entry: 10a1607bc; end: 10a160847;  */

undefined8 ***** FUN_10a1607bc(undefined8 *****param_1,undefined8 ****param_2)

{
  code *pcVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  long lVar4;
  long lVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuStack_98;
  
  if (param_2 < (undefined8 ****)0x21) {
    ppppuVar8 = param_1[0x40];
    lVar5 = (long)param_2 - (long)ppppuVar8;
    if (ppppuVar8 <= param_2 && lVar5 != 0) {
      pppppuVar3 = param_1 + (long)ppppuVar8 * 2;
      do {
        pppppuVar3[1] = (undefined8 ****)0x0;
        *pppppuVar3 = (undefined8 ****)0xffffffff;
        lVar5 = lVar5 + -1;
        pppppuVar3 = pppppuVar3 + 2;
      } while (lVar5 != 0);
    }
    param_1[0x40] = param_2;
    return param_1;
  }
  pppppuVar2 = (undefined8 *****)0x10;
  ___cxa_allocate_exception();
  FUN_109ffdeb4();
  pppppuVar3 = pppppuVar2;
  ppppuVar8 = (undefined8 ****)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(pppppuVar2,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170
              );
  ___cxa_free_exception(pppppuVar2);
  __Unwind_Resume();
  if (ppppuVar8 < (undefined8 ****)0x9) {
    ppppuVar7 = pppppuVar3[0x20];
    if (ppppuVar7 < ppppuVar8) {
      do {
        pppppuVar2 = pppppuVar3 + (long)ppppuVar7 * 4;
        pppppuVar2[1] = (undefined8 ****)0x0;
        *pppppuVar2 = (undefined8 ****)0x100000000;
        pppppuVar2[3] = (undefined8 ****)0x0;
        pppppuVar2[2] = (undefined8 ****)0x1;
        ppppuVar7 = (undefined8 ****)((long)pppppuVar3[0x20] + 1);
        pppppuVar3[0x20] = ppppuVar7;
      } while (ppppuVar7 < ppppuVar8);
    }
    else {
      pppppuVar3[0x20] = ppppuVar8;
    }
    return pppppuVar3;
  }
  lVar4 = 0x10;
  ___cxa_allocate_exception();
  FUN_109ffdeb4();
  lVar5 = lVar4;
  ___cxa_throw(lVar4,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar4);
  __Unwind_Resume();
  FUN_10a160944();
  if (*(int *)(lVar5 + 0x480) == 1) {
    pppppuVar3 = (undefined8 *****)(lVar5 + 0x300);
  }
  else {
    if (*(int *)(lVar5 + 0x480) != 2) {
      pppppuVar3 = (undefined8 *****)&UNK_10f63f6cd;
      func_0x000105688514();
      pppppuVar2 = pppppuVar3;
      if (((ulong)pppppuVar3[2] & 1) == 0) {
        pppppuVar6 = pppppuVar3;
        __ZSt19uncaught_exceptionsv();
        ppppuVar8 = pppppuVar3[0x42];
        ppppuStack_98 = pppppuVar3;
        if ((ppppuVar8 == (undefined8 ****)0x0) ||
           ((*(code *)(*ppppuVar8)[6])(), *(char *)(ppppuVar8 + 3) != '\x01')) {
          if (*(int *)(pppppuVar3 + 0x90) == 2) {
            pppppuVar2 = &ppppuStack_98;
            FUN_10a160a40(pppppuVar2,pppppuVar3 + 0x61);
          }
          else {
            if (*(int *)(pppppuVar3 + 0x90) != 1) {
              func_0x000105688514(&UNK_10f63f76a);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10a160a0c);
              (*pcVar1)();
            }
            pppppuVar2 = &ppppuStack_98;
            FUN_10a160a40(pppppuVar2,pppppuVar3 + 0x60);
          }
        }
        else {
          pppppuVar2 = &ppppuStack_98;
          FUN_10a160a40();
        }
        __ZSt19uncaught_exceptionsv();
        if ((int)pppppuVar6 < (int)pppppuVar2) {
          *(undefined1 *)((long)pppppuVar3 + 0x14) = 1;
        }
      }
      return pppppuVar2;
    }
    pppppuVar3 = (undefined8 *****)(lVar5 + 0x308);
  }
  return pppppuVar3;
}



/* Entry: 10a160848; end: 10a1608eb;  */

undefined8 ***** FUN_10a160848(undefined8 *****param_1,undefined8 ****param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuStack_78;
  
  if (param_2 < (undefined8 ****)0x9) {
    ppppuVar7 = param_1[0x20];
    if (ppppuVar7 < param_2) {
      do {
        pppppuVar4 = param_1 + (long)ppppuVar7 * 4;
        pppppuVar4[1] = (undefined8 ****)0x0;
        *pppppuVar4 = (undefined8 ****)0x100000000;
        pppppuVar4[3] = (undefined8 ****)0x0;
        pppppuVar4[2] = (undefined8 ****)0x1;
        ppppuVar7 = (undefined8 ****)((long)param_1[0x20] + 1);
        param_1[0x20] = ppppuVar7;
      } while (ppppuVar7 < param_2);
    }
    else {
      param_1[0x20] = param_2;
    }
    return param_1;
  }
  lVar2 = 0x10;
  ___cxa_allocate_exception();
  FUN_109ffdeb4();
  lVar3 = lVar2;
  ___cxa_throw(lVar2,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar2);
  __Unwind_Resume();
  FUN_10a160944();
  if (*(int *)(lVar3 + 0x480) == 1) {
    pppppuVar4 = (undefined8 *****)(lVar3 + 0x300);
  }
  else {
    if (*(int *)(lVar3 + 0x480) != 2) {
      pppppuVar4 = (undefined8 *****)&UNK_10f63f6cd;
      func_0x000105688514();
      pppppuVar6 = pppppuVar4;
      if (((ulong)pppppuVar4[2] & 1) == 0) {
        pppppuVar5 = pppppuVar4;
        __ZSt19uncaught_exceptionsv();
        ppppuVar7 = pppppuVar4[0x42];
        ppppuStack_78 = pppppuVar4;
        if ((ppppuVar7 == (undefined8 ****)0x0) ||
           ((*(code *)(*ppppuVar7)[6])(), *(char *)(ppppuVar7 + 3) != '\x01')) {
          if (*(int *)(pppppuVar4 + 0x90) == 2) {
            pppppuVar6 = &ppppuStack_78;
            FUN_10a160a40(pppppuVar6,pppppuVar4 + 0x61);
          }
          else {
            if (*(int *)(pppppuVar4 + 0x90) != 1) {
              func_0x000105688514(&UNK_10f63f76a);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10a160a0c);
              (*pcVar1)();
            }
            pppppuVar6 = &ppppuStack_78;
            FUN_10a160a40(pppppuVar6,pppppuVar4 + 0x60);
          }
        }
        else {
          pppppuVar6 = &ppppuStack_78;
          FUN_10a160a40();
        }
        __ZSt19uncaught_exceptionsv();
        if ((int)pppppuVar5 < (int)pppppuVar6) {
          *(undefined1 *)((long)pppppuVar4 + 0x14) = 1;
        }
      }
      return pppppuVar6;
    }
    pppppuVar4 = (undefined8 *****)(lVar3 + 0x308);
  }
  return pppppuVar4;
}



/* Entry: 10a1608ec; end: 10a160943;  */

undefined8 ***** FUN_10a1608ec(long param_1)

{
  code *pcVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 ****ppppuStack_58;
  
  FUN_10a160944();
  if (*(int *)(param_1 + 0x480) == 1) {
    pppppuVar2 = (undefined8 *****)(param_1 + 0x300);
  }
  else {
    if (*(int *)(param_1 + 0x480) != 2) {
      pppppuVar2 = (undefined8 *****)&UNK_10f63f6cd;
      func_0x000105688514();
      pppppuVar5 = pppppuVar2;
      if (((ulong)pppppuVar2[2] & 1) == 0) {
        pppppuVar3 = pppppuVar2;
        __ZSt19uncaught_exceptionsv();
        ppppuVar4 = pppppuVar2[0x42];
        ppppuStack_58 = pppppuVar2;
        if ((ppppuVar4 == (undefined8 ****)0x0) ||
           ((*(code *)(*ppppuVar4)[6])(), *(char *)(ppppuVar4 + 3) != '\x01')) {
          if (*(int *)(pppppuVar2 + 0x90) == 2) {
            pppppuVar5 = &ppppuStack_58;
            FUN_10a160a40(pppppuVar5,pppppuVar2 + 0x61);
          }
          else {
            if (*(int *)(pppppuVar2 + 0x90) != 1) {
              func_0x000105688514(&UNK_10f63f76a);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10a160a0c);
              (*pcVar1)();
            }
            pppppuVar5 = &ppppuStack_58;
            FUN_10a160a40(pppppuVar5,pppppuVar2 + 0x60);
          }
        }
        else {
          pppppuVar5 = &ppppuStack_58;
          FUN_10a160a40();
        }
        __ZSt19uncaught_exceptionsv();
        if ((int)pppppuVar3 < (int)pppppuVar5) {
          *(undefined1 *)((long)pppppuVar2 + 0x14) = 1;
        }
      }
      return pppppuVar5;
    }
    pppppuVar2 = (undefined8 *****)(param_1 + 0x308);
  }
  return pppppuVar2;
}



/* Entry: 10a160944; end: 10a160a3f;  */

void FUN_10a160944(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lStack_38;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  lVar3 = param_1;
  __ZSt19uncaught_exceptionsv();
  plVar4 = *(long **)(param_1 + 0x210);
  lStack_38 = param_1;
  if ((plVar4 == (long *)0x0) || ((**(code **)(*plVar4 + 0x30))(), (char)plVar4[3] != '\x01')) {
    if (*(int *)(param_1 + 0x480) == 2) {
      plVar4 = &lStack_38;
      FUN_10a160a40(plVar4,param_1 + 0x308);
      iVar2 = (int)plVar4;
    }
    else {
      if (*(int *)(param_1 + 0x480) != 1) {
        func_0x000105688514(&UNK_10f63f76a);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a160a0c);
        (*pcVar1)();
      }
      plVar4 = &lStack_38;
      FUN_10a160a40(plVar4,param_1 + 0x300);
      iVar2 = (int)plVar4;
    }
  }
  else {
    iVar2 = (int)&lStack_38;
    FUN_10a160a40();
  }
  __ZSt19uncaught_exceptionsv();
  if ((int)lVar3 < iVar2) {
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}



/* Entry: 10a160a40; end: 10a160ee7;  */

void FUN_10a160a40(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined2 uVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  long *unaff_x20;
  long lVar31;
  long lVar32;
  uint *puVar33;
  ulong unaff_x25;
  undefined8 unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  float fVar34;
  int iStack_144;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  uint uStack_100;
  undefined4 uStack_fc;
  uint uStack_f8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  lVar32 = *param_1;
  *(uint *)(lVar32 + 0x10) = *(uint *)(lVar32 + 0x10) | 1;
  lVar17 = *param_2;
  lVar30 = param_2[1];
  if (lVar17 != lVar30) {
    plVar20 = (long *)(lVar32 + 0x40);
    do {
      uVar2 = *(uint *)(lVar17 + 0x18);
      uVar15 = (ulong)uVar2;
      iVar3 = *(int *)(lVar17 + 0x1c);
      if (iVar3 < 0x1e) {
        if (iVar3 == 0xc) {
          unaff_x26 = 0x17;
        }
        else if (iVar3 == 0x1c) {
          unaff_x26 = 3;
        }
        else {
          if (iVar3 != 0x1d) {
LAB_10a160ea8:
            puVar13 = (undefined8 *)&UNK_10f64043f;
            FUN_10a0ee06c();
            plVar19 = unaff_x20;
            FUN_10a1839dc(1);
            if (lStack_70 < 0) {
              __ZdlPv(lStack_80);
            }
            puVar14 = puVar13;
            __Unwind_Resume();
            pcStack_88 = FUN_10a160ee8;
            plVar24 = (long *)*puVar14;
            *(uint *)(plVar24 + 2) = *(uint *)(plVar24 + 2) | 2;
            puVar33 = (uint *)*plVar19;
            puVar4 = (uint *)plVar19[1];
            if (puVar33 == puVar4) {
              lVar11 = 0;
            }
            else {
              iStack_144 = 0;
              lVar11 = 0;
              lVar17 = *plVar24;
              plVar19 = plVar24 + 0xd;
              plVar25 = plVar24 + 0x17;
              plVar1 = plVar24 + 0x12;
              uStack_e0 = unaff_x28;
              uStack_d8 = unaff_x27;
              uStack_d0 = unaff_x26;
              plStack_c0 = plVar20;
              lStack_b8 = lVar30;
              lStack_b0 = lVar32;
              uStack_a8 = uVar15;
              plStack_a0 = unaff_x20;
              puStack_98 = puVar13;
              puStack_90 = &stack0xfffffffffffffff0;
              do {
                lVar32 = *(long *)(puVar33 + 4);
                for (lVar30 = *(long *)(puVar33 + 2); lVar30 != lVar32; lVar30 = lVar30 + 0x40) {
                  lVar12 = *(long *)(lVar30 + 0x28);
                  lVar18 = *(long *)(lVar30 + 0x30);
                  if (lVar18 != lVar12) {
                    uVar15 = 0;
                    do {
                      lVar31 = lVar12 + uVar15 * 0x28;
                      if (*(int *)(lVar31 + 0x24) - 1U < 0x13) {
                        uStack_130 = CONCAT44(iStack_144,*puVar33);
                        lStack_140 = lVar30;
                        lStack_138 = lVar31;
                        FUN_10a0d09b4(&lStack_120,lVar31);
                        uVar22 = uStack_108;
                        uVar2 = *(int *)(lVar31 + 0x24) - 1;
                        if ((0x12 < uVar2) || ((0x7fff1U >> (ulong)(uVar2 & 0x1f) & 1) == 0)) {
                          FUN_10a0ee06c(&UNK_10f64045b);
                          goto LAB_10a161cf4;
                        }
                        uVar8 = *(undefined2 *)(&UNK_10e49afc2 + (ulong)uVar2 * 2);
                        iVar3 = *(int *)(lVar31 + 0x20);
                        uVar16 = plVar24[0xc];
                        if (uVar16 != 0) {
                          uVar28 = uVar16 - 1;
                          if ((uVar16 & uVar28) == 0) {
                            unaff_x25 = uVar28 & uStack_108;
                          }
                          else {
                            unaff_x25 = uStack_108;
                            if (uVar16 <= uStack_108) {
                              uVar23 = 0;
                              if (uVar16 != 0) {
                                uVar23 = uStack_108 / uVar16;
                              }
                              unaff_x25 = uStack_108 - uVar23 * uVar16;
                            }
                          }
                          plVar20 = *(long **)(plVar24[0xb] + unaff_x25 * 8);
                          if (plVar20 != (long *)0x0) {
                            do {
                              while( true ) {
                                plVar20 = (long *)*plVar20;
                                if (plVar20 == (long *)0x0) goto LAB_10a16107c;
                                uVar23 = plVar20[1];
                                if (uVar23 != uStack_108) break;
                                if (plVar20[5] == uStack_108) goto LAB_10a1611e8;
                              }
                              if ((uVar16 & uVar28) == 0) {
                                uVar23 = uVar23 & uVar28;
                              }
                              else if (uVar16 <= uVar23) {
                                uVar29 = 0;
                                if (uVar16 != 0) {
                                  uVar29 = uVar23 / uVar16;
                                }
                                uVar23 = uVar23 - uVar29 * uVar16;
                              }
                            } while (uVar23 == unaff_x25);
                          }
                        }
LAB_10a16107c:
                        plVar20 = (long *)0x70;
                        __Znwm();
                        lVar12 = lStack_110;
                        *plVar20 = 0;
                        plVar20[1] = uVar22;
                        plVar20[3] = lStack_118;
                        plVar20[2] = lStack_120;
                        lStack_120 = 0;
                        lStack_118 = 0;
                        lStack_110 = 0;
                        plVar20[4] = lVar12;
                        plVar20[5] = uVar22;
                        if (iVar3 < 2) {
                          iVar3 = 1;
                        }
                        *(undefined2 *)(plVar20 + 7) = uVar8;
                        plVar20[6] = (long)&PTR_FUN_110ba96c8;
                        *(int *)((long)plVar20 + 0x3c) = iVar3;
                        *(int *)(plVar20 + 8) = (int)uVar15;
                        *(undefined8 *)((long)plVar20 + 0x4c) = 0xffffffff;
                        *(undefined8 *)((long)plVar20 + 0x44) = 0;
                        *(undefined4 *)((long)plVar20 + 0x54) = 0xffffffff;
                        plVar20[0xb] = 0;
                        plVar20[0xc] = 0;
                        *(undefined4 *)(plVar20 + 0xd) = 2;
                        FUN_10a1686a0(plVar20 + 6,&lStack_140);
                        if ((uVar16 == 0) ||
                           (*(float *)(plVar24 + 0xf) * (float)uVar16 < (float)(plVar24[0xe] + 1)))
                        {
                          if (uVar16 < 3) {
                            uVar28 = 1;
                          }
                          else {
                            uVar28 = (ulong)((uVar16 & uVar16 - 1) != 0);
                          }
                          uVar28 = uVar28 | uVar16 << 1;
                          uVar16 = (ulong)((float)(plVar24[0xe] + 1) / *(float *)(plVar24 + 0xf));
                          if (uVar28 <= uVar16) {
                            uVar28 = uVar16;
                          }
                          FUN_10a183a18(plVar24 + 0xb,uVar28);
                          uVar16 = plVar24[0xc];
                          if ((uVar16 & uVar16 - 1) == 0) {
                            unaff_x25 = uVar16 - 1 & uVar22;
                          }
                          else {
                            unaff_x25 = uVar22;
                            if (uVar16 <= uVar22) {
                              uVar28 = 0;
                              if (uVar16 != 0) {
                                uVar28 = uVar22 / uVar16;
                              }
                              unaff_x25 = uVar22 - uVar28 * uVar16;
                            }
                          }
                        }
                        lVar12 = plVar24[0xb];
                        plVar21 = *(long **)(lVar12 + unaff_x25 * 8);
                        if (plVar21 == (long *)0x0) {
                          *plVar20 = *plVar19;
                          *plVar19 = (long)plVar20;
                          *(long **)(lVar12 + unaff_x25 * 8) = plVar19;
                          if (*plVar20 != 0) {
                            uVar22 = *(ulong *)(*plVar20 + 8);
                            if ((uVar16 & uVar16 - 1) == 0) {
                              uVar22 = uVar22 & uVar16 - 1;
                            }
                            else if (uVar16 <= uVar22) {
                              uVar28 = 0;
                              if (uVar16 != 0) {
                                uVar28 = uVar22 / uVar16;
                              }
                              uVar22 = uVar22 - uVar28 * uVar16;
                            }
                            *(long **)(plVar24[0xb] + uVar22 * 8) = plVar20;
                          }
                        }
                        else {
                          *plVar20 = *plVar21;
                          *plVar21 = (long)plVar20;
                        }
                        plVar24[0xe] = plVar24[0xe] + 1;
LAB_10a1611e8:
                        if (lStack_110 < 0) {
                          __ZdlPv(lStack_120);
                        }
                        lVar12 = *(long *)(lVar30 + 0x28);
                        lVar18 = *(long *)(lVar30 + 0x30);
                      }
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < (ulong)((lVar18 - lVar12 >> 3) * -0x3333333333333333));
                  }
                  iVar3 = *(int *)(lVar17 + 0x148);
                  iVar5 = *(int *)(lVar30 + 0x1c);
                  FUN_10a0d09b4(&lStack_140,lVar30);
                  uVar2 = *puVar33;
                  uVar15 = (ulong)uVar2;
                  uVar6 = *(undefined4 *)(lVar30 + 0x18);
                  if (uStack_130 < 0) {
                    func_0x000107c3192c(&lStack_120,lStack_140,lStack_138);
                  }
                  else {
                    lStack_118 = lStack_138;
                    lStack_120 = lStack_140;
                    lStack_110 = uStack_130;
                  }
                  uVar22 = uStack_128;
                  uStack_f8 = (iVar5 + iVar3) - 1U & -iVar3;
                  uStack_108 = uStack_128;
                  uVar16 = plVar24[0x16];
                  uStack_100 = uVar2;
                  uStack_fc = uVar6;
                  if (uVar16 != 0) {
                    uVar28 = uVar16 - 1;
                    if ((uVar16 & uVar28) == 0) {
                      uVar15 = uVar28 & uStack_128;
                    }
                    else {
                      uVar15 = uStack_128;
                      if (uVar16 <= uStack_128) {
                        uVar15 = 0;
                        if (uVar16 != 0) {
                          uVar15 = uStack_128 / uVar16;
                        }
                        uVar15 = uStack_128 - uVar15 * uVar16;
                      }
                    }
                    plVar20 = *(long **)(plVar24[0x15] + uVar15 * 8);
                    if (plVar20 != (long *)0x0) {
                      do {
                        while( true ) {
                          plVar20 = (long *)*plVar20;
                          if (plVar20 == (long *)0x0) goto LAB_10a161314;
                          uVar23 = plVar20[1];
                          if (uVar23 != uStack_128) break;
                          if (plVar20[5] == uStack_128) goto LAB_10a1615dc;
                        }
                        if ((uVar16 & uVar28) == 0) {
                          uVar23 = uVar23 & uVar28;
                        }
                        else if (uVar16 <= uVar23) {
                          uVar29 = 0;
                          if (uVar16 != 0) {
                            uVar29 = uVar23 / uVar16;
                          }
                          uVar23 = uVar23 - uVar29 * uVar16;
                        }
                      } while (uVar23 == uVar15);
                    }
                  }
LAB_10a161314:
                  plVar20 = (long *)0x40;
                  __Znwm();
                  *plVar20 = 0;
                  plVar20[1] = uVar22;
                  if (lStack_110 < 0) {
                    func_0x000107c3192c(plVar20 + 2,lStack_120,lStack_118);
                    uVar28 = uStack_108;
                  }
                  else {
                    plVar20[3] = lStack_118;
                    plVar20[2] = lStack_120;
                    plVar20[4] = lStack_110;
                    uVar28 = uVar22;
                  }
                  plVar20[5] = uVar28;
                  plVar20[6] = CONCAT44(uStack_fc,uStack_100);
                  *(uint *)(plVar20 + 7) = uStack_f8;
                  if ((uVar16 == 0) ||
                     (*(float *)(plVar24 + 0x19) * (float)uVar16 < (float)(plVar24[0x18] + 1))) {
                    uVar15 = 1;
                    if (2 < uVar16) {
                      uVar15 = (ulong)((uVar16 & uVar16 - 1) != 0);
                    }
                    uVar15 = uVar15 | uVar16 << 1;
                    uVar16 = (ulong)((float)(plVar24[0x18] + 1) / *(float *)(plVar24 + 0x19));
                    if (uVar15 <= uVar16) {
                      uVar15 = uVar16;
                    }
                    if (uVar15 - 1 == 0) {
                      uVar15 = 2;
                    }
                    else if ((uVar15 & uVar15 - 1) != 0) {
                      __ZNSt3__112__next_primeEm();
                    }
                    uVar16 = plVar24[0x16];
                    if (uVar16 < uVar15) {
LAB_10a1613ec:
                      if (uVar15 >> 0x3d != 0) {
                        func_0x000109ffded8();
                        goto LAB_10a161cf4;
                      }
                      lVar12 = uVar15 << 3;
                      __Znwm();
                      lVar18 = plVar24[0x15];
                      plVar24[0x15] = lVar12;
                      if (lVar18 != 0) {
                        __ZdlPv();
                      }
                      uVar16 = 0;
                      plVar24[0x16] = uVar15;
                      do {
                        *(undefined8 *)(plVar24[0x15] + uVar16 * 8) = 0;
                        uVar16 = uVar16 + 1;
                      } while (uVar15 != uVar16);
                      plVar21 = (long *)*plVar25;
                      uVar16 = uVar15;
                      if (plVar21 != (long *)0x0) {
                        uVar28 = plVar21[1];
                        uVar23 = uVar15 - 1;
                        if ((uVar15 & uVar23) == 0) {
                          uVar28 = uVar28 & uVar23;
                        }
                        else if (uVar15 <= uVar28) {
                          uVar29 = 0;
                          if (uVar15 != 0) {
                            uVar29 = uVar28 / uVar15;
                          }
                          uVar28 = uVar28 - uVar29 * uVar15;
                        }
                        *(long **)(plVar24[0x15] + uVar28 * 8) = plVar25;
                        plVar27 = (long *)*plVar21;
                        while (plVar27 != (long *)0x0) {
                          uVar29 = plVar27[1];
                          if ((uVar15 & uVar23) == 0) {
                            uVar29 = uVar29 & uVar23;
                          }
                          else if (uVar15 <= uVar29) {
                            uVar9 = 0;
                            if (uVar15 != 0) {
                              uVar9 = uVar29 / uVar15;
                            }
                            uVar29 = uVar29 - uVar9 * uVar15;
                          }
                          plVar26 = plVar27;
                          if (uVar29 != uVar28) {
                            lVar12 = plVar24[0x15];
                            if (*(long *)(lVar12 + uVar29 * 8) == 0) {
                              *(long **)(lVar12 + uVar29 * 8) = plVar21;
                              uVar28 = uVar29;
                            }
                            else {
                              *plVar21 = *plVar27;
                              *plVar27 = **(undefined8 **)(lVar12 + uVar29 * 8);
                              **(long **)(lVar12 + uVar29 * 8) = (long)plVar27;
                              plVar26 = plVar21;
                            }
                          }
                          plVar21 = plVar26;
                          plVar27 = (long *)*plVar26;
                        }
                      }
                    }
                    else if (uVar15 < uVar16) {
                      uVar28 = (ulong)((float)(ulong)plVar24[0x18] / *(float *)(plVar24 + 0x19));
                      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
                        __ZNSt3__112__next_primeEm();
                      }
                      else if (1 < uVar28) {
                        uVar28 = 1L << (-LZCOUNT(uVar28 - 1) & 0x3fU);
                      }
                      if (uVar15 <= uVar28) {
                        uVar15 = uVar28;
                      }
                      if (uVar15 < uVar16) {
                        if (uVar15 != 0) goto LAB_10a1613ec;
                        lVar12 = plVar24[0x15];
                        plVar24[0x15] = 0;
                        if (lVar12 != 0) {
                          __ZdlPv();
                        }
                        plVar24[0x16] = 0;
                        uVar16 = 0;
                      }
                      else {
                        uVar16 = plVar24[0x16];
                      }
                    }
                    if ((uVar16 & uVar16 - 1) == 0) {
                      uVar15 = uVar16 - 1 & uVar22;
                    }
                    else {
                      uVar15 = uVar22;
                      if (uVar16 <= uVar22) {
                        uVar15 = 0;
                        if (uVar16 != 0) {
                          uVar15 = uVar22 / uVar16;
                        }
                        uVar15 = uVar22 - uVar15 * uVar16;
                      }
                    }
                  }
                  lVar12 = plVar24[0x15];
                  plVar21 = *(long **)(lVar12 + uVar15 * 8);
                  if (plVar21 == (long *)0x0) {
                    *plVar20 = *plVar25;
                    *plVar25 = (long)plVar20;
                    *(long **)(lVar12 + uVar15 * 8) = plVar25;
                    if (*plVar20 != 0) {
                      uVar22 = *(ulong *)(*plVar20 + 8);
                      if ((uVar16 & uVar16 - 1) == 0) {
                        uVar22 = uVar22 & uVar16 - 1;
                      }
                      else if (uVar16 <= uVar22) {
                        uVar28 = 0;
                        if (uVar16 != 0) {
                          uVar28 = uVar22 / uVar16;
                        }
                        uVar22 = uVar22 - uVar28 * uVar16;
                      }
                      *(long **)(plVar24[0x15] + uVar22 * 8) = plVar20;
                    }
                  }
                  else {
                    *plVar20 = *plVar21;
                    *plVar21 = (long)plVar20;
                  }
                  plVar24[0x18] = plVar24[0x18] + 1;
LAB_10a1615dc:
                  if (lStack_110 < 0) {
                    __ZdlPv(lStack_120);
                  }
                  if (uStack_130 < 0) {
                    __ZdlPv(lStack_140);
                  }
                  iStack_144 = iStack_144 + 1;
                }
                lVar32 = *(long *)(puVar33 + 10);
                for (lVar30 = *(long *)(puVar33 + 8); lVar30 != lVar32; lVar30 = lVar30 + 0x40) {
                  FUN_10a0d09b4(&lStack_120,lVar30);
                  uVar22 = uStack_108;
                  uVar2 = *puVar33;
                  unaff_x25 = (ulong)uVar2;
                  uVar6 = *(undefined4 *)(lVar30 + 0x18);
                  uVar16 = plVar24[0x11];
                  if (uVar16 != 0) {
                    uVar28 = uVar16 - 1;
                    if ((uVar16 & uVar28) == 0) {
                      uVar15 = uVar28 & uStack_108;
                    }
                    else {
                      uVar15 = uStack_108;
                      if (uVar16 <= uStack_108) {
                        uVar15 = 0;
                        if (uVar16 != 0) {
                          uVar15 = uStack_108 / uVar16;
                        }
                        uVar15 = uStack_108 - uVar15 * uVar16;
                      }
                    }
                    plVar20 = *(long **)(plVar24[0x10] + uVar15 * 8);
                    if (plVar20 != (long *)0x0) {
                      do {
                        while( true ) {
                          plVar20 = (long *)*plVar20;
                          if (plVar20 == (long *)0x0) goto LAB_10a161708;
                          uVar23 = plVar20[1];
                          if (uVar23 != uStack_108) break;
                          if (plVar20[5] == uStack_108) goto LAB_10a1619ac;
                        }
                        if ((uVar16 & uVar28) == 0) {
                          uVar23 = uVar23 & uVar28;
                        }
                        else if (uVar16 <= uVar23) {
                          uVar29 = 0;
                          if (uVar16 != 0) {
                            uVar29 = uVar23 / uVar16;
                          }
                          uVar23 = uVar23 - uVar29 * uVar16;
                        }
                      } while (uVar23 == uVar15);
                    }
                  }
LAB_10a161708:
                  plVar20 = (long *)0x38;
                  __Znwm();
                  lVar12 = lStack_110;
                  *plVar20 = 0;
                  plVar20[1] = uVar22;
                  plVar20[3] = lStack_118;
                  plVar20[2] = lStack_120;
                  lStack_120 = 0;
                  lStack_118 = 0;
                  lStack_110 = 0;
                  plVar20[4] = lVar12;
                  plVar20[5] = uVar22;
                  plVar20[6] = CONCAT44(uVar6,uVar2);
                  if ((uVar16 == 0) ||
                     (*(float *)(plVar24 + 0x14) * (float)uVar16 < (float)(plVar24[0x13] + 1))) {
                    uVar15 = 1;
                    if (2 < uVar16) {
                      uVar15 = (ulong)((uVar16 & uVar16 - 1) != 0);
                    }
                    uVar15 = uVar15 | uVar16 << 1;
                    uVar28 = (ulong)((float)(plVar24[0x13] + 1) / *(float *)(plVar24 + 0x14));
                    if (uVar15 <= uVar28) {
                      uVar15 = uVar28;
                    }
                    if (uVar15 - 1 == 0) {
                      uVar15 = 2;
                    }
                    else if ((uVar15 & uVar15 - 1) != 0) {
                      __ZNSt3__112__next_primeEm();
                      uVar16 = plVar24[0x11];
                    }
                    if (uVar16 < uVar15) {
LAB_10a1617bc:
                      if (uVar15 >> 0x3d != 0) {
                        func_0x000109ffded8();
                        goto LAB_10a161cf4;
                      }
                      lVar12 = uVar15 << 3;
                      __Znwm();
                      lVar18 = plVar24[0x10];
                      plVar24[0x10] = lVar12;
                      if (lVar18 != 0) {
                        __ZdlPv();
                      }
                      uVar16 = 0;
                      plVar24[0x11] = uVar15;
                      do {
                        *(undefined8 *)(plVar24[0x10] + uVar16 * 8) = 0;
                        uVar16 = uVar16 + 1;
                      } while (uVar15 != uVar16);
                      plVar21 = (long *)*plVar1;
                      uVar16 = uVar15;
                      if (plVar21 != (long *)0x0) {
                        uVar28 = plVar21[1];
                        uVar23 = uVar15 - 1;
                        if ((uVar15 & uVar23) == 0) {
                          uVar28 = uVar28 & uVar23;
                        }
                        else if (uVar15 <= uVar28) {
                          uVar29 = 0;
                          if (uVar15 != 0) {
                            uVar29 = uVar28 / uVar15;
                          }
                          uVar28 = uVar28 - uVar29 * uVar15;
                        }
                        *(long **)(plVar24[0x10] + uVar28 * 8) = plVar1;
                        plVar27 = (long *)*plVar21;
                        while (plVar27 != (long *)0x0) {
                          uVar29 = plVar27[1];
                          if ((uVar15 & uVar23) == 0) {
                            uVar29 = uVar29 & uVar23;
                          }
                          else if (uVar15 <= uVar29) {
                            uVar9 = 0;
                            if (uVar15 != 0) {
                              uVar9 = uVar29 / uVar15;
                            }
                            uVar29 = uVar29 - uVar9 * uVar15;
                          }
                          plVar26 = plVar27;
                          if (uVar29 != uVar28) {
                            lVar12 = plVar24[0x10];
                            if (*(long *)(lVar12 + uVar29 * 8) == 0) {
                              *(long **)(lVar12 + uVar29 * 8) = plVar21;
                              uVar28 = uVar29;
                            }
                            else {
                              *plVar21 = *plVar27;
                              *plVar27 = **(undefined8 **)(lVar12 + uVar29 * 8);
                              **(long **)(lVar12 + uVar29 * 8) = (long)plVar27;
                              plVar26 = plVar21;
                            }
                          }
                          plVar21 = plVar26;
                          plVar27 = (long *)*plVar26;
                        }
                      }
                    }
                    else if (uVar15 < uVar16) {
                      uVar28 = (ulong)((float)(ulong)plVar24[0x13] / *(float *)(plVar24 + 0x14));
                      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
                        __ZNSt3__112__next_primeEm();
                      }
                      else if (1 < uVar28) {
                        uVar28 = 1L << (-LZCOUNT(uVar28 - 1) & 0x3fU);
                      }
                      if (uVar15 <= uVar28) {
                        uVar15 = uVar28;
                      }
                      if (uVar15 < uVar16) {
                        if (uVar15 != 0) goto LAB_10a1617bc;
                        lVar12 = plVar24[0x10];
                        plVar24[0x10] = 0;
                        if (lVar12 != 0) {
                          __ZdlPv();
                        }
                        plVar24[0x11] = 0;
                        uVar16 = 0;
                      }
                      else {
                        uVar16 = plVar24[0x11];
                      }
                    }
                    if ((uVar16 & uVar16 - 1) == 0) {
                      uVar15 = uVar16 - 1 & uVar22;
                    }
                    else {
                      uVar15 = uVar22;
                      if (uVar16 <= uVar22) {
                        uVar15 = 0;
                        if (uVar16 != 0) {
                          uVar15 = uVar22 / uVar16;
                        }
                        uVar15 = uVar22 - uVar15 * uVar16;
                      }
                    }
                  }
                  lVar12 = plVar24[0x10];
                  plVar21 = *(long **)(lVar12 + uVar15 * 8);
                  if (plVar21 == (long *)0x0) {
                    *plVar20 = *plVar1;
                    *plVar1 = (long)plVar20;
                    *(long **)(lVar12 + uVar15 * 8) = plVar1;
                    if (*plVar20 != 0) {
                      uVar22 = *(ulong *)(*plVar20 + 8);
                      if ((uVar16 & uVar16 - 1) == 0) {
                        uVar22 = uVar22 & uVar16 - 1;
                      }
                      else if (uVar16 <= uVar22) {
                        uVar28 = 0;
                        if (uVar16 != 0) {
                          uVar28 = uVar22 / uVar16;
                        }
                        uVar22 = uVar22 - uVar28 * uVar16;
                      }
                      plVar21 = (long *)(plVar24[0x10] + uVar22 * 8);
                      goto LAB_10a16199c;
                    }
                  }
                  else {
                    *plVar20 = *plVar21;
LAB_10a16199c:
                    *plVar21 = (long)plVar20;
                  }
                  plVar24[0x13] = plVar24[0x13] + 1;
LAB_10a1619ac:
                  if (lStack_110 < 0) {
                    __ZdlPv(lStack_120);
                  }
                }
                lVar30 = *(long *)(puVar33 + 0xe);
                lVar32 = *(long *)(puVar33 + 0x10);
                lVar12 = lVar32 - lVar30;
                if (lVar12 != 0) {
                  do {
                    FUN_10a0d09b4(&lStack_120,lVar30);
                    uVar22 = uStack_108;
                    uVar2 = *(int *)(lVar30 + 0x1c) - 2;
                    if ((7 < uVar2) || ((0xd7U >> (ulong)(uVar2 & 0x1f) & 1) == 0)) {
                      FUN_10a0ee06c(&UNK_10f640475);
LAB_10a161cf4:
                    /* WARNING: Does not return */
                      pcVar10 = (code *)SoftwareBreakpoint(1,0x10a161cf8);
                      (*pcVar10)();
                    }
                    uVar8 = *(undefined2 *)(&UNK_10e499980 + (ulong)uVar2 * 2);
                    uVar2 = *(uint *)(lVar30 + 0x18);
                    unaff_x25 = (ulong)uVar2;
                    uVar16 = plVar24[0xc];
                    if (uVar16 != 0) {
                      uVar28 = uVar16 - 1;
                      if ((uVar16 & uVar28) == 0) {
                        uVar15 = uVar28 & uStack_108;
                      }
                      else {
                        uVar15 = uStack_108;
                        if (uVar16 <= uStack_108) {
                          uVar15 = 0;
                          if (uVar16 != 0) {
                            uVar15 = uStack_108 / uVar16;
                          }
                          uVar15 = uStack_108 - uVar15 * uVar16;
                        }
                      }
                      plVar20 = *(long **)(plVar24[0xb] + uVar15 * 8);
                      if (plVar20 != (long *)0x0) {
                        do {
                          while( true ) {
                            plVar20 = (long *)*plVar20;
                            if (plVar20 == (long *)0x0) goto LAB_10a161adc;
                            uVar23 = plVar20[1];
                            if (uVar23 != uStack_108) break;
                            if (plVar20[5] == uStack_108) goto LAB_10a161c58;
                          }
                          if ((uVar16 & uVar28) == 0) {
                            uVar23 = uVar23 & uVar28;
                          }
                          else if (uVar16 <= uVar23) {
                            uVar29 = 0;
                            if (uVar16 != 0) {
                              uVar29 = uVar23 / uVar16;
                            }
                            uVar23 = uVar23 - uVar29 * uVar16;
                          }
                        } while (uVar23 == uVar15);
                      }
                    }
LAB_10a161adc:
                    plVar20 = (long *)0x70;
                    __Znwm();
                    lVar18 = lStack_110;
                    *plVar20 = 0;
                    plVar20[1] = uVar22;
                    plVar20[3] = lStack_118;
                    plVar20[2] = lStack_120;
                    lStack_120 = 0;
                    lStack_118 = 0;
                    lStack_110 = 0;
                    plVar20[4] = lVar18;
                    plVar20[5] = uVar22;
                    uVar7 = *puVar33;
                    uVar6 = *(undefined4 *)(lVar30 + 0x1c);
                    *(undefined2 *)(plVar20 + 7) = uVar8;
                    plVar20[6] = (long)&PTR_FUN_110ba96c8;
                    *(undefined4 *)((long)plVar20 + 0x3c) = 1;
                    *(uint *)(plVar20 + 8) = uVar2;
                    *(undefined4 *)((long)plVar20 + 0x44) = 0;
                    *(undefined4 *)(plVar20 + 9) = 0;
                    *(undefined4 *)((long)plVar20 + 0x4c) = 0xffffffff;
                    *(uint *)(plVar20 + 10) = uVar7;
                    *(undefined4 *)((long)plVar20 + 0x54) = 0xffffffff;
                    plVar20[0xb] = 0;
                    plVar20[0xc] = 0;
                    *(undefined4 *)(plVar20 + 0xd) = uVar6;
                    lStack_138 = 0;
                    lStack_140 = 0;
                    uStack_130 = -1;
                    FUN_10a1686a0(plVar20 + 6,&lStack_140);
                    if ((uVar16 == 0) ||
                       (*(float *)(plVar24 + 0xf) * (float)uVar16 < (float)(plVar24[0xe] + 1))) {
                      if (uVar16 < 3) {
                        uVar15 = 1;
                      }
                      else {
                        uVar15 = (ulong)((uVar16 & uVar16 - 1) != 0);
                      }
                      uVar15 = uVar15 | uVar16 << 1;
                      uVar16 = (ulong)((float)(plVar24[0xe] + 1) / *(float *)(plVar24 + 0xf));
                      if (uVar15 <= uVar16) {
                        uVar15 = uVar16;
                      }
                      FUN_10a183a18(plVar24 + 0xb,uVar15);
                      uVar16 = plVar24[0xc];
                      if ((uVar16 & uVar16 - 1) == 0) {
                        uVar15 = uVar16 - 1 & uVar22;
                      }
                      else {
                        uVar15 = uVar22;
                        if (uVar16 <= uVar22) {
                          uVar15 = 0;
                          if (uVar16 != 0) {
                            uVar15 = uVar22 / uVar16;
                          }
                          uVar15 = uVar22 - uVar15 * uVar16;
                        }
                      }
                    }
                    lVar18 = plVar24[0xb];
                    plVar21 = *(long **)(lVar18 + uVar15 * 8);
                    if (plVar21 == (long *)0x0) {
                      *plVar20 = *plVar19;
                      *plVar19 = (long)plVar20;
                      *(long **)(lVar18 + uVar15 * 8) = plVar19;
                      if (*plVar20 != 0) {
                        uVar22 = *(ulong *)(*plVar20 + 8);
                        if ((uVar16 & uVar16 - 1) == 0) {
                          uVar22 = uVar22 & uVar16 - 1;
                        }
                        else if (uVar16 <= uVar22) {
                          uVar28 = 0;
                          if (uVar16 != 0) {
                            uVar28 = uVar22 / uVar16;
                          }
                          uVar22 = uVar22 - uVar28 * uVar16;
                        }
                        *(long **)(plVar24[0xb] + uVar22 * 8) = plVar20;
                      }
                    }
                    else {
                      *plVar20 = *plVar21;
                      *plVar21 = (long)plVar20;
                    }
                    plVar24[0xe] = plVar24[0xe] + 1;
LAB_10a161c58:
                    if (lStack_110 < 0) {
                      __ZdlPv(lStack_120);
                    }
                    lVar30 = lVar30 + 0x28;
                  } while (lVar30 != lVar32);
                }
                lVar11 = lVar11 + (lVar12 >> 3) * -0x3333333333333333;
                puVar33 = puVar33 + 0x20;
              } while (puVar33 != puVar4);
            }
            plVar24[0x5c] = lVar11;
            return;
          }
          unaff_x26 = 7;
        }
      }
      else if (iVar3 == 0x1e) {
        unaff_x26 = 8;
      }
      else if (iVar3 == 0x1f) {
        unaff_x26 = 9;
      }
      else {
        if (iVar3 != 0x21) goto LAB_10a160ea8;
        unaff_x26 = 0x1f;
      }
      FUN_10a0d09b4(&lStack_80,lVar17);
      unaff_x25 = uStack_68;
      unaff_x28 = *(ulong *)(lVar32 + 0x38);
      if (unaff_x28 != 0) {
        uVar15 = unaff_x28 - 1;
        if ((unaff_x28 & uVar15) == 0) {
          unaff_x27 = uVar15 & uStack_68;
        }
        else {
          unaff_x27 = uStack_68;
          if (unaff_x28 <= uStack_68) {
            uVar22 = 0;
            if (unaff_x28 != 0) {
              uVar22 = uStack_68 / unaff_x28;
            }
            unaff_x27 = uStack_68 - uVar22 * unaff_x28;
          }
        }
        plVar19 = *(long **)(*(long *)(lVar32 + 0x30) + unaff_x27 * 8);
        if (plVar19 != (long *)0x0) {
          do {
            while( true ) {
              plVar19 = (long *)*plVar19;
              if (plVar19 == (long *)0x0) goto LAB_10a160b80;
              uVar22 = plVar19[1];
              if (uVar22 != uStack_68) break;
              if (plVar19[5] == uStack_68) goto LAB_10a160e24;
            }
            if ((unaff_x28 & uVar15) == 0) {
              uVar22 = uVar22 & uVar15;
            }
            else if (unaff_x28 <= uVar22) {
              uVar16 = 0;
              if (unaff_x28 != 0) {
                uVar16 = uVar22 / unaff_x28;
              }
              uVar22 = uVar22 - uVar16 * unaff_x28;
            }
          } while (uVar22 == unaff_x27);
        }
      }
LAB_10a160b80:
      unaff_x20 = (long *)0x48;
      __Znwm();
      lVar11 = lStack_70;
      *unaff_x20 = 0;
      unaff_x20[1] = unaff_x25;
      unaff_x20[3] = lStack_78;
      unaff_x20[2] = lStack_80;
      lStack_80 = 0;
      lStack_78 = 0;
      lStack_70 = 0;
      unaff_x20[4] = lVar11;
      unaff_x20[5] = unaff_x25;
      *(short *)(unaff_x20 + 7) = (short)unaff_x26;
      unaff_x20[6] = (long)&PTR_FUN_110ba9690;
      *(undefined4 *)((long)unaff_x20 + 0x3c) = 0;
      *(uint *)(unaff_x20 + 8) = uVar2;
      fVar34 = (float)(*(long *)(lVar32 + 0x48) + 1);
      if ((unaff_x28 == 0) || (*(float *)(lVar32 + 0x50) * (float)unaff_x28 < fVar34)) {
        uVar15 = 1;
        if (2 < unaff_x28) {
          uVar15 = (ulong)((unaff_x28 & unaff_x28 - 1) != 0);
        }
        uVar15 = uVar15 | unaff_x28 << 1;
        uVar22 = (ulong)(fVar34 / *(float *)(lVar32 + 0x50));
        if (uVar15 <= uVar22) {
          uVar15 = uVar22;
        }
        if (uVar15 - 1 == 0) {
          uVar15 = 2;
        }
        else if ((uVar15 & uVar15 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
          unaff_x28 = *(ulong *)(lVar32 + 0x38);
        }
        if (unaff_x28 < uVar15) {
LAB_10a160c40:
          if (uVar15 >> 0x3d != 0) {
            func_0x000109ffded8();
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x10a160ea8);
            (*pcVar10)();
          }
          lVar11 = uVar15 << 3;
          __Znwm();
          lVar12 = *(long *)(lVar32 + 0x30);
          *(long *)(lVar32 + 0x30) = lVar11;
          if (lVar12 != 0) {
            __ZdlPv();
          }
          uVar22 = 0;
          *(ulong *)(lVar32 + 0x38) = uVar15;
          do {
            *(undefined8 *)(*(long *)(lVar32 + 0x30) + uVar22 * 8) = 0;
            uVar22 = uVar22 + 1;
          } while (uVar15 != uVar22);
          plVar19 = (long *)*plVar20;
          unaff_x28 = uVar15;
          if (plVar19 != (long *)0x0) {
            uVar22 = plVar19[1];
            uVar16 = uVar15 - 1;
            if ((uVar15 & uVar16) == 0) {
              uVar22 = uVar22 & uVar16;
            }
            else if (uVar15 <= uVar22) {
              uVar28 = 0;
              if (uVar15 != 0) {
                uVar28 = uVar22 / uVar15;
              }
              uVar22 = uVar22 - uVar28 * uVar15;
            }
            *(long **)(*(long *)(lVar32 + 0x30) + uVar22 * 8) = plVar20;
            plVar24 = (long *)*plVar19;
            while (plVar24 != (long *)0x0) {
              uVar28 = plVar24[1];
              if ((uVar15 & uVar16) == 0) {
                uVar28 = uVar28 & uVar16;
              }
              else if (uVar15 <= uVar28) {
                uVar23 = 0;
                if (uVar15 != 0) {
                  uVar23 = uVar28 / uVar15;
                }
                uVar28 = uVar28 - uVar23 * uVar15;
              }
              plVar25 = plVar24;
              if (uVar28 != uVar22) {
                lVar11 = *(long *)(lVar32 + 0x30);
                if (*(long *)(lVar11 + uVar28 * 8) == 0) {
                  *(long **)(lVar11 + uVar28 * 8) = plVar19;
                  uVar22 = uVar28;
                }
                else {
                  *plVar19 = *plVar24;
                  *plVar24 = **(undefined8 **)(lVar11 + uVar28 * 8);
                  **(long **)(lVar11 + uVar28 * 8) = (long)plVar24;
                  plVar25 = plVar19;
                }
              }
              plVar19 = plVar25;
              plVar24 = (long *)*plVar25;
            }
          }
        }
        else if (uVar15 < unaff_x28) {
          uVar22 = (ulong)((float)*(ulong *)(lVar32 + 0x48) / *(float *)(lVar32 + 0x50));
          if ((unaff_x28 < 3) || ((unaff_x28 & unaff_x28 - 1) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if (1 < uVar22) {
            uVar22 = 1L << (-LZCOUNT(uVar22 - 1) & 0x3fU);
          }
          if (uVar15 <= uVar22) {
            uVar15 = uVar22;
          }
          if (uVar15 < unaff_x28) {
            if (uVar15 != 0) goto LAB_10a160c40;
            lVar11 = *(long *)(lVar32 + 0x30);
            *(undefined8 *)(lVar32 + 0x30) = 0;
            if (lVar11 != 0) {
              __ZdlPv();
            }
            *(undefined8 *)(lVar32 + 0x38) = 0;
            unaff_x28 = 0;
          }
          else {
            unaff_x28 = *(ulong *)(lVar32 + 0x38);
          }
        }
        if ((unaff_x28 & unaff_x28 - 1) == 0) {
          unaff_x27 = unaff_x28 - 1 & unaff_x25;
        }
        else {
          unaff_x27 = unaff_x25;
          if (unaff_x28 <= unaff_x25) {
            uVar15 = 0;
            if (unaff_x28 != 0) {
              uVar15 = unaff_x25 / unaff_x28;
            }
            unaff_x27 = unaff_x25 - uVar15 * unaff_x28;
          }
        }
      }
      lVar11 = *(long *)(lVar32 + 0x30);
      plVar19 = *(long **)(lVar11 + unaff_x27 * 8);
      if (plVar19 == (long *)0x0) {
        *unaff_x20 = *plVar20;
        *plVar20 = (long)unaff_x20;
        *(long **)(lVar11 + unaff_x27 * 8) = plVar20;
        if (*unaff_x20 != 0) {
          uVar15 = *(ulong *)(*unaff_x20 + 8);
          if ((unaff_x28 & unaff_x28 - 1) == 0) {
            uVar15 = uVar15 & unaff_x28 - 1;
          }
          else if (unaff_x28 <= uVar15) {
            uVar22 = 0;
            if (unaff_x28 != 0) {
              uVar22 = uVar15 / unaff_x28;
            }
            uVar15 = uVar15 - uVar22 * unaff_x28;
          }
          plVar19 = (long *)(*(long *)(lVar32 + 0x30) + uVar15 * 8);
          goto LAB_10a160e14;
        }
      }
      else {
        *unaff_x20 = *plVar19;
LAB_10a160e14:
        *plVar19 = (long)unaff_x20;
      }
      *(long *)(lVar32 + 0x48) = *(long *)(lVar32 + 0x48) + 1;
LAB_10a160e24:
      if (lStack_70 < 0) {
        __ZdlPv(lStack_80);
      }
      lVar17 = lVar17 + 0x20;
    } while (lVar17 != lVar30);
  }
  return;
}



/* Entry: 10a160ee8; end: 10a161dcb;  */

void FUN_10a160ee8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined2 uVar10;
  uint uVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong unaff_x21;
  ulong uVar27;
  long *plVar28;
  uint *puVar29;
  ulong unaff_x25;
  ulong uVar30;
  ulong uVar31;
  int iStack_c4;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  
  plVar28 = (long *)*param_1;
  *(uint *)(plVar28 + 2) = *(uint *)(plVar28 + 2) | 2;
  puVar29 = (uint *)*param_2;
  puVar4 = (uint *)param_2[1];
  if (puVar29 == puVar4) {
    lVar18 = 0;
  }
  else {
    iStack_c4 = 0;
    lVar18 = 0;
    lVar15 = *plVar28;
    plVar1 = plVar28 + 0xd;
    plVar2 = plVar28 + 0x17;
    plVar3 = plVar28 + 0x12;
    do {
      lVar5 = *(long *)(puVar29 + 4);
      for (lVar25 = *(long *)(puVar29 + 2); lVar25 != lVar5; lVar25 = lVar25 + 0x40) {
        lVar14 = *(long *)(lVar25 + 0x28);
        lVar17 = *(long *)(lVar25 + 0x30);
        if (lVar17 != lVar14) {
          uVar27 = 0;
          do {
            lVar26 = lVar14 + uVar27 * 0x28;
            if (*(int *)(lVar26 + 0x24) - 1U < 0x13) {
              uStack_b0 = CONCAT44(iStack_c4,*puVar29);
              lStack_c0 = lVar25;
              lStack_b8 = lVar26;
              FUN_10a0d09b4(&lStack_a0,lVar26);
              uVar31 = uStack_88;
              uVar11 = *(int *)(lVar26 + 0x24) - 1;
              if ((0x12 < uVar11) || ((0x7fff1U >> (ulong)(uVar11 & 0x1f) & 1) == 0)) {
                FUN_10a0ee06c(&UNK_10f64045b);
                goto LAB_10a161cf4;
              }
              uVar10 = *(undefined2 *)(&UNK_10e49afc2 + (ulong)uVar11 * 2);
              iVar6 = *(int *)(lVar26 + 0x20);
              uVar30 = plVar28[0xc];
              if (uVar30 != 0) {
                uVar16 = uVar30 - 1;
                if ((uVar30 & uVar16) == 0) {
                  unaff_x25 = uVar16 & uStack_88;
                }
                else {
                  unaff_x25 = uStack_88;
                  if (uVar30 <= uStack_88) {
                    uVar21 = 0;
                    if (uVar30 != 0) {
                      uVar21 = uStack_88 / uVar30;
                    }
                    unaff_x25 = uStack_88 - uVar21 * uVar30;
                  }
                }
                plVar19 = *(long **)(plVar28[0xb] + unaff_x25 * 8);
                if (plVar19 != (long *)0x0) {
                  do {
                    while( true ) {
                      plVar19 = (long *)*plVar19;
                      if (plVar19 == (long *)0x0) goto LAB_10a16107c;
                      uVar21 = plVar19[1];
                      if (uVar21 != uStack_88) break;
                      if (plVar19[5] == uStack_88) goto LAB_10a1611e8;
                    }
                    if ((uVar30 & uVar16) == 0) {
                      uVar21 = uVar21 & uVar16;
                    }
                    else if (uVar30 <= uVar21) {
                      uVar24 = 0;
                      if (uVar30 != 0) {
                        uVar24 = uVar21 / uVar30;
                      }
                      uVar21 = uVar21 - uVar24 * uVar30;
                    }
                  } while (uVar21 == unaff_x25);
                }
              }
LAB_10a16107c:
              plVar19 = (long *)0x70;
              __Znwm();
              lVar14 = lStack_90;
              *plVar19 = 0;
              plVar19[1] = uVar31;
              plVar19[3] = lStack_98;
              plVar19[2] = lStack_a0;
              lStack_a0 = 0;
              lStack_98 = 0;
              lStack_90 = 0;
              plVar19[4] = lVar14;
              plVar19[5] = uVar31;
              if (iVar6 < 2) {
                iVar6 = 1;
              }
              *(undefined2 *)(plVar19 + 7) = uVar10;
              plVar19[6] = (long)&PTR_FUN_110ba96c8;
              *(int *)((long)plVar19 + 0x3c) = iVar6;
              *(int *)(plVar19 + 8) = (int)uVar27;
              *(undefined8 *)((long)plVar19 + 0x4c) = 0xffffffff;
              *(undefined8 *)((long)plVar19 + 0x44) = 0;
              *(undefined4 *)((long)plVar19 + 0x54) = 0xffffffff;
              plVar19[0xb] = 0;
              plVar19[0xc] = 0;
              *(undefined4 *)(plVar19 + 0xd) = 2;
              FUN_10a1686a0(plVar19 + 6,&lStack_c0);
              if ((uVar30 == 0) ||
                 (*(float *)(plVar28 + 0xf) * (float)uVar30 < (float)(plVar28[0xe] + 1))) {
                if (uVar30 < 3) {
                  uVar16 = 1;
                }
                else {
                  uVar16 = (ulong)((uVar30 & uVar30 - 1) != 0);
                }
                uVar16 = uVar16 | uVar30 << 1;
                uVar30 = (ulong)((float)(plVar28[0xe] + 1) / *(float *)(plVar28 + 0xf));
                if (uVar16 <= uVar30) {
                  uVar16 = uVar30;
                }
                FUN_10a183a18(plVar28 + 0xb,uVar16);
                uVar30 = plVar28[0xc];
                if ((uVar30 & uVar30 - 1) == 0) {
                  unaff_x25 = uVar30 - 1 & uVar31;
                }
                else {
                  unaff_x25 = uVar31;
                  if (uVar30 <= uVar31) {
                    uVar16 = 0;
                    if (uVar30 != 0) {
                      uVar16 = uVar31 / uVar30;
                    }
                    unaff_x25 = uVar31 - uVar16 * uVar30;
                  }
                }
              }
              lVar14 = plVar28[0xb];
              plVar20 = *(long **)(lVar14 + unaff_x25 * 8);
              if (plVar20 == (long *)0x0) {
                *plVar19 = *plVar1;
                *plVar1 = (long)plVar19;
                *(long **)(lVar14 + unaff_x25 * 8) = plVar1;
                if (*plVar19 != 0) {
                  uVar31 = *(ulong *)(*plVar19 + 8);
                  if ((uVar30 & uVar30 - 1) == 0) {
                    uVar31 = uVar31 & uVar30 - 1;
                  }
                  else if (uVar30 <= uVar31) {
                    uVar16 = 0;
                    if (uVar30 != 0) {
                      uVar16 = uVar31 / uVar30;
                    }
                    uVar31 = uVar31 - uVar16 * uVar30;
                  }
                  *(long **)(plVar28[0xb] + uVar31 * 8) = plVar19;
                }
              }
              else {
                *plVar19 = *plVar20;
                *plVar20 = (long)plVar19;
              }
              plVar28[0xe] = plVar28[0xe] + 1;
LAB_10a1611e8:
              if (lStack_90 < 0) {
                __ZdlPv(lStack_a0);
              }
              lVar14 = *(long *)(lVar25 + 0x28);
              lVar17 = *(long *)(lVar25 + 0x30);
            }
            uVar27 = uVar27 + 1;
          } while (uVar27 < (ulong)((lVar17 - lVar14 >> 3) * -0x3333333333333333));
        }
        iVar6 = *(int *)(lVar15 + 0x148);
        iVar7 = *(int *)(lVar25 + 0x1c);
        FUN_10a0d09b4(&lStack_c0,lVar25);
        uVar11 = *puVar29;
        unaff_x21 = (ulong)uVar11;
        uVar8 = *(undefined4 *)(lVar25 + 0x18);
        if (uStack_b0 < 0) {
          func_0x000107c3192c(&lStack_a0,lStack_c0,lStack_b8);
        }
        else {
          lStack_98 = lStack_b8;
          lStack_a0 = lStack_c0;
          lStack_90 = uStack_b0;
        }
        uVar27 = uStack_a8;
        uStack_78 = (iVar7 + iVar6) - 1U & -iVar6;
        uStack_88 = uStack_a8;
        uVar31 = plVar28[0x16];
        uStack_80 = uVar11;
        uStack_7c = uVar8;
        if (uVar31 != 0) {
          uVar30 = uVar31 - 1;
          if ((uVar31 & uVar30) == 0) {
            unaff_x21 = uVar30 & uStack_a8;
          }
          else {
            unaff_x21 = uStack_a8;
            if (uVar31 <= uStack_a8) {
              uVar16 = 0;
              if (uVar31 != 0) {
                uVar16 = uStack_a8 / uVar31;
              }
              unaff_x21 = uStack_a8 - uVar16 * uVar31;
            }
          }
          plVar19 = *(long **)(plVar28[0x15] + unaff_x21 * 8);
          if (plVar19 != (long *)0x0) {
            do {
              while( true ) {
                plVar19 = (long *)*plVar19;
                if (plVar19 == (long *)0x0) goto LAB_10a161314;
                uVar16 = plVar19[1];
                if (uVar16 != uStack_a8) break;
                if (plVar19[5] == uStack_a8) goto LAB_10a1615dc;
              }
              if ((uVar31 & uVar30) == 0) {
                uVar16 = uVar16 & uVar30;
              }
              else if (uVar31 <= uVar16) {
                uVar21 = 0;
                if (uVar31 != 0) {
                  uVar21 = uVar16 / uVar31;
                }
                uVar16 = uVar16 - uVar21 * uVar31;
              }
            } while (uVar16 == unaff_x21);
          }
        }
LAB_10a161314:
        plVar19 = (long *)0x40;
        __Znwm();
        *plVar19 = 0;
        plVar19[1] = uVar27;
        if (lStack_90 < 0) {
          func_0x000107c3192c(plVar19 + 2,lStack_a0,lStack_98);
          uVar30 = uStack_88;
        }
        else {
          plVar19[3] = lStack_98;
          plVar19[2] = lStack_a0;
          plVar19[4] = lStack_90;
          uVar30 = uVar27;
        }
        plVar19[5] = uVar30;
        plVar19[6] = CONCAT44(uStack_7c,uStack_80);
        *(uint *)(plVar19 + 7) = uStack_78;
        if ((uVar31 == 0) ||
           (*(float *)(plVar28 + 0x19) * (float)uVar31 < (float)(plVar28[0x18] + 1))) {
          uVar30 = 1;
          if (2 < uVar31) {
            uVar30 = (ulong)((uVar31 & uVar31 - 1) != 0);
          }
          uVar30 = uVar30 | uVar31 << 1;
          uVar31 = (ulong)((float)(plVar28[0x18] + 1) / *(float *)(plVar28 + 0x19));
          if (uVar30 <= uVar31) {
            uVar30 = uVar31;
          }
          if (uVar30 - 1 == 0) {
            uVar30 = 2;
          }
          else if ((uVar30 & uVar30 - 1) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          uVar31 = plVar28[0x16];
          if (uVar31 < uVar30) {
LAB_10a1613ec:
            if (uVar30 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a161cf4;
            }
            lVar14 = uVar30 << 3;
            __Znwm();
            lVar17 = plVar28[0x15];
            plVar28[0x15] = lVar14;
            if (lVar17 != 0) {
              __ZdlPv();
            }
            uVar31 = 0;
            plVar28[0x16] = uVar30;
            do {
              *(undefined8 *)(plVar28[0x15] + uVar31 * 8) = 0;
              uVar31 = uVar31 + 1;
            } while (uVar30 != uVar31);
            plVar20 = (long *)*plVar2;
            uVar31 = uVar30;
            if (plVar20 != (long *)0x0) {
              uVar16 = plVar20[1];
              uVar21 = uVar30 - 1;
              if ((uVar30 & uVar21) == 0) {
                uVar16 = uVar16 & uVar21;
              }
              else if (uVar30 <= uVar16) {
                uVar24 = 0;
                if (uVar30 != 0) {
                  uVar24 = uVar16 / uVar30;
                }
                uVar16 = uVar16 - uVar24 * uVar30;
              }
              *(long **)(plVar28[0x15] + uVar16 * 8) = plVar2;
              plVar23 = (long *)*plVar20;
              while (plVar23 != (long *)0x0) {
                uVar24 = plVar23[1];
                if ((uVar30 & uVar21) == 0) {
                  uVar24 = uVar24 & uVar21;
                }
                else if (uVar30 <= uVar24) {
                  uVar12 = 0;
                  if (uVar30 != 0) {
                    uVar12 = uVar24 / uVar30;
                  }
                  uVar24 = uVar24 - uVar12 * uVar30;
                }
                plVar22 = plVar23;
                if (uVar24 != uVar16) {
                  lVar14 = plVar28[0x15];
                  if (*(long *)(lVar14 + uVar24 * 8) == 0) {
                    *(long **)(lVar14 + uVar24 * 8) = plVar20;
                    uVar16 = uVar24;
                  }
                  else {
                    *plVar20 = *plVar23;
                    *plVar23 = **(undefined8 **)(lVar14 + uVar24 * 8);
                    **(long **)(lVar14 + uVar24 * 8) = (long)plVar23;
                    plVar22 = plVar20;
                  }
                }
                plVar20 = plVar22;
                plVar23 = (long *)*plVar22;
              }
            }
          }
          else if (uVar30 < uVar31) {
            uVar16 = (ulong)((float)(ulong)plVar28[0x18] / *(float *)(plVar28 + 0x19));
            if ((uVar31 < 3) || ((uVar31 & uVar31 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar16) {
              uVar16 = 1L << (-LZCOUNT(uVar16 - 1) & 0x3fU);
            }
            if (uVar30 <= uVar16) {
              uVar30 = uVar16;
            }
            if (uVar30 < uVar31) {
              if (uVar30 != 0) goto LAB_10a1613ec;
              lVar14 = plVar28[0x15];
              plVar28[0x15] = 0;
              if (lVar14 != 0) {
                __ZdlPv();
              }
              plVar28[0x16] = 0;
              uVar31 = 0;
            }
            else {
              uVar31 = plVar28[0x16];
            }
          }
          if ((uVar31 & uVar31 - 1) == 0) {
            unaff_x21 = uVar31 - 1 & uVar27;
          }
          else {
            unaff_x21 = uVar27;
            if (uVar31 <= uVar27) {
              uVar30 = 0;
              if (uVar31 != 0) {
                uVar30 = uVar27 / uVar31;
              }
              unaff_x21 = uVar27 - uVar30 * uVar31;
            }
          }
        }
        lVar14 = plVar28[0x15];
        plVar20 = *(long **)(lVar14 + unaff_x21 * 8);
        if (plVar20 == (long *)0x0) {
          *plVar19 = *plVar2;
          *plVar2 = (long)plVar19;
          *(long **)(lVar14 + unaff_x21 * 8) = plVar2;
          if (*plVar19 != 0) {
            uVar27 = *(ulong *)(*plVar19 + 8);
            if ((uVar31 & uVar31 - 1) == 0) {
              uVar27 = uVar27 & uVar31 - 1;
            }
            else if (uVar31 <= uVar27) {
              uVar30 = 0;
              if (uVar31 != 0) {
                uVar30 = uVar27 / uVar31;
              }
              uVar27 = uVar27 - uVar30 * uVar31;
            }
            *(long **)(plVar28[0x15] + uVar27 * 8) = plVar19;
          }
        }
        else {
          *plVar19 = *plVar20;
          *plVar20 = (long)plVar19;
        }
        plVar28[0x18] = plVar28[0x18] + 1;
LAB_10a1615dc:
        if (lStack_90 < 0) {
          __ZdlPv(lStack_a0);
        }
        if (uStack_b0 < 0) {
          __ZdlPv(lStack_c0);
        }
        iStack_c4 = iStack_c4 + 1;
      }
      lVar5 = *(long *)(puVar29 + 10);
      for (lVar25 = *(long *)(puVar29 + 8); lVar25 != lVar5; lVar25 = lVar25 + 0x40) {
        FUN_10a0d09b4(&lStack_a0,lVar25);
        uVar27 = uStack_88;
        uVar11 = *puVar29;
        unaff_x25 = (ulong)uVar11;
        uVar8 = *(undefined4 *)(lVar25 + 0x18);
        uVar31 = plVar28[0x11];
        if (uVar31 != 0) {
          uVar30 = uVar31 - 1;
          if ((uVar31 & uVar30) == 0) {
            unaff_x21 = uVar30 & uStack_88;
          }
          else {
            unaff_x21 = uStack_88;
            if (uVar31 <= uStack_88) {
              uVar16 = 0;
              if (uVar31 != 0) {
                uVar16 = uStack_88 / uVar31;
              }
              unaff_x21 = uStack_88 - uVar16 * uVar31;
            }
          }
          plVar19 = *(long **)(plVar28[0x10] + unaff_x21 * 8);
          if (plVar19 != (long *)0x0) {
            do {
              while( true ) {
                plVar19 = (long *)*plVar19;
                if (plVar19 == (long *)0x0) goto LAB_10a161708;
                uVar16 = plVar19[1];
                if (uVar16 != uStack_88) break;
                if (plVar19[5] == uStack_88) goto LAB_10a1619ac;
              }
              if ((uVar31 & uVar30) == 0) {
                uVar16 = uVar16 & uVar30;
              }
              else if (uVar31 <= uVar16) {
                uVar21 = 0;
                if (uVar31 != 0) {
                  uVar21 = uVar16 / uVar31;
                }
                uVar16 = uVar16 - uVar21 * uVar31;
              }
            } while (uVar16 == unaff_x21);
          }
        }
LAB_10a161708:
        plVar19 = (long *)0x38;
        __Znwm();
        lVar14 = lStack_90;
        *plVar19 = 0;
        plVar19[1] = uVar27;
        plVar19[3] = lStack_98;
        plVar19[2] = lStack_a0;
        lStack_a0 = 0;
        lStack_98 = 0;
        lStack_90 = 0;
        plVar19[4] = lVar14;
        plVar19[5] = uVar27;
        plVar19[6] = CONCAT44(uVar8,uVar11);
        if ((uVar31 == 0) ||
           (*(float *)(plVar28 + 0x14) * (float)uVar31 < (float)(plVar28[0x13] + 1))) {
          uVar30 = 1;
          if (2 < uVar31) {
            uVar30 = (ulong)((uVar31 & uVar31 - 1) != 0);
          }
          uVar30 = uVar30 | uVar31 << 1;
          uVar16 = (ulong)((float)(plVar28[0x13] + 1) / *(float *)(plVar28 + 0x14));
          if (uVar30 <= uVar16) {
            uVar30 = uVar16;
          }
          if (uVar30 - 1 == 0) {
            uVar30 = 2;
          }
          else if ((uVar30 & uVar30 - 1) != 0) {
            __ZNSt3__112__next_primeEm();
            uVar31 = plVar28[0x11];
          }
          if (uVar31 < uVar30) {
LAB_10a1617bc:
            if (uVar30 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a161cf4;
            }
            lVar14 = uVar30 << 3;
            __Znwm();
            lVar17 = plVar28[0x10];
            plVar28[0x10] = lVar14;
            if (lVar17 != 0) {
              __ZdlPv();
            }
            uVar31 = 0;
            plVar28[0x11] = uVar30;
            do {
              *(undefined8 *)(plVar28[0x10] + uVar31 * 8) = 0;
              uVar31 = uVar31 + 1;
            } while (uVar30 != uVar31);
            plVar20 = (long *)*plVar3;
            uVar31 = uVar30;
            if (plVar20 != (long *)0x0) {
              uVar16 = plVar20[1];
              uVar21 = uVar30 - 1;
              if ((uVar30 & uVar21) == 0) {
                uVar16 = uVar16 & uVar21;
              }
              else if (uVar30 <= uVar16) {
                uVar24 = 0;
                if (uVar30 != 0) {
                  uVar24 = uVar16 / uVar30;
                }
                uVar16 = uVar16 - uVar24 * uVar30;
              }
              *(long **)(plVar28[0x10] + uVar16 * 8) = plVar3;
              plVar23 = (long *)*plVar20;
              while (plVar23 != (long *)0x0) {
                uVar24 = plVar23[1];
                if ((uVar30 & uVar21) == 0) {
                  uVar24 = uVar24 & uVar21;
                }
                else if (uVar30 <= uVar24) {
                  uVar12 = 0;
                  if (uVar30 != 0) {
                    uVar12 = uVar24 / uVar30;
                  }
                  uVar24 = uVar24 - uVar12 * uVar30;
                }
                plVar22 = plVar23;
                if (uVar24 != uVar16) {
                  lVar14 = plVar28[0x10];
                  if (*(long *)(lVar14 + uVar24 * 8) == 0) {
                    *(long **)(lVar14 + uVar24 * 8) = plVar20;
                    uVar16 = uVar24;
                  }
                  else {
                    *plVar20 = *plVar23;
                    *plVar23 = **(undefined8 **)(lVar14 + uVar24 * 8);
                    **(long **)(lVar14 + uVar24 * 8) = (long)plVar23;
                    plVar22 = plVar20;
                  }
                }
                plVar20 = plVar22;
                plVar23 = (long *)*plVar22;
              }
            }
          }
          else if (uVar30 < uVar31) {
            uVar16 = (ulong)((float)(ulong)plVar28[0x13] / *(float *)(plVar28 + 0x14));
            if ((uVar31 < 3) || ((uVar31 & uVar31 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar16) {
              uVar16 = 1L << (-LZCOUNT(uVar16 - 1) & 0x3fU);
            }
            if (uVar30 <= uVar16) {
              uVar30 = uVar16;
            }
            if (uVar30 < uVar31) {
              if (uVar30 != 0) goto LAB_10a1617bc;
              lVar14 = plVar28[0x10];
              plVar28[0x10] = 0;
              if (lVar14 != 0) {
                __ZdlPv();
              }
              plVar28[0x11] = 0;
              uVar31 = 0;
            }
            else {
              uVar31 = plVar28[0x11];
            }
          }
          if ((uVar31 & uVar31 - 1) == 0) {
            unaff_x21 = uVar31 - 1 & uVar27;
          }
          else {
            unaff_x21 = uVar27;
            if (uVar31 <= uVar27) {
              uVar30 = 0;
              if (uVar31 != 0) {
                uVar30 = uVar27 / uVar31;
              }
              unaff_x21 = uVar27 - uVar30 * uVar31;
            }
          }
        }
        lVar14 = plVar28[0x10];
        plVar20 = *(long **)(lVar14 + unaff_x21 * 8);
        if (plVar20 == (long *)0x0) {
          *plVar19 = *plVar3;
          *plVar3 = (long)plVar19;
          *(long **)(lVar14 + unaff_x21 * 8) = plVar3;
          if (*plVar19 != 0) {
            uVar27 = *(ulong *)(*plVar19 + 8);
            if ((uVar31 & uVar31 - 1) == 0) {
              uVar27 = uVar27 & uVar31 - 1;
            }
            else if (uVar31 <= uVar27) {
              uVar30 = 0;
              if (uVar31 != 0) {
                uVar30 = uVar27 / uVar31;
              }
              uVar27 = uVar27 - uVar30 * uVar31;
            }
            plVar20 = (long *)(plVar28[0x10] + uVar27 * 8);
            goto LAB_10a16199c;
          }
        }
        else {
          *plVar19 = *plVar20;
LAB_10a16199c:
          *plVar20 = (long)plVar19;
        }
        plVar28[0x13] = plVar28[0x13] + 1;
LAB_10a1619ac:
        if (lStack_90 < 0) {
          __ZdlPv(lStack_a0);
        }
      }
      lVar25 = *(long *)(puVar29 + 0xe);
      lVar5 = *(long *)(puVar29 + 0x10);
      lVar14 = lVar5 - lVar25;
      if (lVar14 != 0) {
        do {
          FUN_10a0d09b4(&lStack_a0,lVar25);
          uVar27 = uStack_88;
          uVar11 = *(int *)(lVar25 + 0x1c) - 2;
          if ((7 < uVar11) || ((0xd7U >> (ulong)(uVar11 & 0x1f) & 1) == 0)) {
            FUN_10a0ee06c(&UNK_10f640475);
LAB_10a161cf4:
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10a161cf8);
            (*pcVar13)();
          }
          uVar10 = *(undefined2 *)(&UNK_10e499980 + (ulong)uVar11 * 2);
          uVar11 = *(uint *)(lVar25 + 0x18);
          unaff_x25 = (ulong)uVar11;
          uVar31 = plVar28[0xc];
          if (uVar31 != 0) {
            uVar30 = uVar31 - 1;
            if ((uVar31 & uVar30) == 0) {
              unaff_x21 = uVar30 & uStack_88;
            }
            else {
              unaff_x21 = uStack_88;
              if (uVar31 <= uStack_88) {
                uVar16 = 0;
                if (uVar31 != 0) {
                  uVar16 = uStack_88 / uVar31;
                }
                unaff_x21 = uStack_88 - uVar16 * uVar31;
              }
            }
            plVar19 = *(long **)(plVar28[0xb] + unaff_x21 * 8);
            if (plVar19 != (long *)0x0) {
              do {
                while( true ) {
                  plVar19 = (long *)*plVar19;
                  if (plVar19 == (long *)0x0) goto LAB_10a161adc;
                  uVar16 = plVar19[1];
                  if (uVar16 != uStack_88) break;
                  if (plVar19[5] == uStack_88) goto LAB_10a161c58;
                }
                if ((uVar31 & uVar30) == 0) {
                  uVar16 = uVar16 & uVar30;
                }
                else if (uVar31 <= uVar16) {
                  uVar21 = 0;
                  if (uVar31 != 0) {
                    uVar21 = uVar16 / uVar31;
                  }
                  uVar16 = uVar16 - uVar21 * uVar31;
                }
              } while (uVar16 == unaff_x21);
            }
          }
LAB_10a161adc:
          plVar19 = (long *)0x70;
          __Znwm();
          lVar17 = lStack_90;
          *plVar19 = 0;
          plVar19[1] = uVar27;
          plVar19[3] = lStack_98;
          plVar19[2] = lStack_a0;
          lStack_a0 = 0;
          lStack_98 = 0;
          lStack_90 = 0;
          plVar19[4] = lVar17;
          plVar19[5] = uVar27;
          uVar9 = *puVar29;
          uVar8 = *(undefined4 *)(lVar25 + 0x1c);
          *(undefined2 *)(plVar19 + 7) = uVar10;
          plVar19[6] = (long)&PTR_FUN_110ba96c8;
          *(undefined4 *)((long)plVar19 + 0x3c) = 1;
          *(uint *)(plVar19 + 8) = uVar11;
          *(undefined4 *)((long)plVar19 + 0x44) = 0;
          *(undefined4 *)(plVar19 + 9) = 0;
          *(undefined4 *)((long)plVar19 + 0x4c) = 0xffffffff;
          *(uint *)(plVar19 + 10) = uVar9;
          *(undefined4 *)((long)plVar19 + 0x54) = 0xffffffff;
          plVar19[0xb] = 0;
          plVar19[0xc] = 0;
          *(undefined4 *)(plVar19 + 0xd) = uVar8;
          lStack_b8 = 0;
          lStack_c0 = 0;
          uStack_b0 = -1;
          FUN_10a1686a0(plVar19 + 6,&lStack_c0);
          if ((uVar31 == 0) ||
             (*(float *)(plVar28 + 0xf) * (float)uVar31 < (float)(plVar28[0xe] + 1))) {
            if (uVar31 < 3) {
              uVar30 = 1;
            }
            else {
              uVar30 = (ulong)((uVar31 & uVar31 - 1) != 0);
            }
            uVar30 = uVar30 | uVar31 << 1;
            uVar31 = (ulong)((float)(plVar28[0xe] + 1) / *(float *)(plVar28 + 0xf));
            if (uVar30 <= uVar31) {
              uVar30 = uVar31;
            }
            FUN_10a183a18(plVar28 + 0xb,uVar30);
            uVar31 = plVar28[0xc];
            if ((uVar31 & uVar31 - 1) == 0) {
              unaff_x21 = uVar31 - 1 & uVar27;
            }
            else {
              unaff_x21 = uVar27;
              if (uVar31 <= uVar27) {
                uVar30 = 0;
                if (uVar31 != 0) {
                  uVar30 = uVar27 / uVar31;
                }
                unaff_x21 = uVar27 - uVar30 * uVar31;
              }
            }
          }
          lVar17 = plVar28[0xb];
          plVar20 = *(long **)(lVar17 + unaff_x21 * 8);
          if (plVar20 == (long *)0x0) {
            *plVar19 = *plVar1;
            *plVar1 = (long)plVar19;
            *(long **)(lVar17 + unaff_x21 * 8) = plVar1;
            if (*plVar19 != 0) {
              uVar27 = *(ulong *)(*plVar19 + 8);
              if ((uVar31 & uVar31 - 1) == 0) {
                uVar27 = uVar27 & uVar31 - 1;
              }
              else if (uVar31 <= uVar27) {
                uVar30 = 0;
                if (uVar31 != 0) {
                  uVar30 = uVar27 / uVar31;
                }
                uVar27 = uVar27 - uVar30 * uVar31;
              }
              *(long **)(plVar28[0xb] + uVar27 * 8) = plVar19;
            }
          }
          else {
            *plVar19 = *plVar20;
            *plVar20 = (long)plVar19;
          }
          plVar28[0xe] = plVar28[0xe] + 1;
LAB_10a161c58:
          if (lStack_90 < 0) {
            __ZdlPv(lStack_a0);
          }
          lVar25 = lVar25 + 0x28;
        } while (lVar25 != lVar5);
      }
      lVar18 = lVar18 + (lVar14 >> 3) * -0x3333333333333333;
      puVar29 = puVar29 + 0x20;
    } while (puVar29 != puVar4);
  }
  plVar28[0x5c] = lVar18;
  return;
}



/* Entry: 10a161dcc; end: 10a161e43;  */

int * FUN_10a161dcc(long param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int *extraout_x8;
  
  FUN_10a160050();
  if ((*(byte *)(param_1 + 0x2d8) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a161e44);
    (*pcVar1)();
  }
  piVar2 = *(int **)(param_1 + 0x2a8);
  if (piVar2 != *(int **)(param_1 + 0x2b0)) {
    do {
      if ((*piVar2 == *param_2) && (piVar2[1] == param_2[1])) goto LAB_10a161e30;
      piVar2 = piVar2 + 4;
    } while (piVar2 != *(int **)(param_1 + 0x2b0));
  }
  func_0x000105688514(&UNK_10f63f81c);
  piVar2 = extraout_x8;
LAB_10a161e30:
  return piVar2 + 2;
}



/* Entry: 10a161e44; end: 10a161f07;  */

long FUN_10a161e44(long param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  FUN_10a160944();
  lVar3 = param_1 + 0x30;
  func_0x00010a19504c(lVar3,param_2);
  if (lVar3 != 0) {
    return lVar3 + 0x30;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    _fflush(*(undefined8 *)PTR____stdoutp_11034bdd8);
  }
  func_0x000107c2b054(auStack_50,&UNK_10f63f874);
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  FUN_10a012db0(auStack_38,auStack_50,plVar1);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a161ed4);
  (*pcVar2)();
}



/* Entry: 10a161f08; end: 10a161f9b;  */

undefined8 * FUN_10a161f08(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  __ZNSt3__15mutexD1Ev(param_1 + 0x2b);
  __ZNSt3__15mutexD1Ev(param_1 + 0x23);
  FUN_10a183cbc(param_1 + 0x15);
  func_0x00010a183d18(param_1 + 0x12);
  puStack_28 = param_1 + 0xf;
  FUN_10a0426d8(&puStack_28);
  lVar1 = 0x68;
  do {
    func_0x00010a0eb124((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x38);
  FUN_10a1586e8(param_1 + 7);
  func_0x00010a09dbbc(param_1 + 5);
  *param_1 = &PTR_FUN_110baa260;
  func_0x00010a183e14(param_1 + 1);
  return param_1;
}



/* Entry: 10a161f9c; end: 10a161f9f;  */

undefined8 * FUN_10a161f9c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  __ZNSt3__15mutexD1Ev(param_1 + 0x2b);
  __ZNSt3__15mutexD1Ev(param_1 + 0x23);
  FUN_10a183cbc(param_1 + 0x15);
  func_0x00010a183d18(param_1 + 0x12);
  puStack_28 = param_1 + 0xf;
  FUN_10a0426d8(&puStack_28);
  lVar1 = 0x68;
  do {
    func_0x00010a0eb124((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x38);
  FUN_10a1586e8(param_1 + 7);
  func_0x00010a09dbbc(param_1 + 5);
  *param_1 = &PTR_FUN_110baa260;
  func_0x00010a183e14(param_1 + 1);
  return param_1;
}



/* Entry: 10a161fa0; end: 10a161fb3;  */

void FUN_10a161fa0(void)

{
  FUN_10a161f08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a161fb4; end: 10a16603b;  */

/* WARNING: Removing unreachable block (ram,0x00010a16494c) */
/* WARNING: Removing unreachable block (ram,0x00010a1642f4) */
/* WARNING: Removing unreachable block (ram,0x00010a1658d4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a161fb4(undefined8 *param_1,long param_2,long param_3,byte param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  short *psVar3;
  undefined4 uVar4;
  long ******pppppplVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  long *plVar17;
  long *plVar18;
  undefined **ppuVar19;
  long *plVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *puVar22;
  long ******pppppplVar23;
  long ******pppppplVar24;
  long lVar25;
  short *psVar26;
  short *psVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined4 uVar30;
  uint *puVar31;
  uint *puVar32;
  long *******ppppppplVar33;
  long lVar34;
  long *plVar35;
  ulong *puVar36;
  long *plVar37;
  long *plVar38;
  long *******ppppppplVar39;
  long *******ppppppplVar40;
  long *******ppppppplVar41;
  long *plVar42;
  ulong uVar43;
  long *******ppppppplVar44;
  long ****pppplVar45;
  long ******pppppplVar46;
  char *pcVar47;
  bool bVar48;
  ulong uVar49;
  long ****pppplVar50;
  long *****ppppplVar51;
  long *****ppppplVar52;
  long ****pppplVar53;
  long lVar54;
  long *****ppppplVar55;
  char *pcVar56;
  long *plVar57;
  long ******pppppplVar58;
  long *******ppppppplVar59;
  long lVar60;
  ulong uVar61;
  ulong uVar62;
  long *******ppppppplVar63;
  ulong uVar64;
  long *plVar65;
  undefined8 *puVar66;
  long *plVar67;
  long *******ppppppplVar68;
  float fVar69;
  undefined1 auVar70 [16];
  long *******ppppppplStack_9b0;
  long *******ppppppplStack_9a8;
  long *******ppppppplStack_9a0;
  long *******ppppppplStack_998;
  long *******ppppppplStack_990;
  long *******ppppppplStack_988;
  long *******ppppppplStack_980;
  long ******pppppplStack_978;
  long *****ppppplStack_970;
  long *****ppppplStack_968;
  long *****ppppplStack_960;
  long *****ppppplStack_958;
  long *****ppppplStack_950;
  long *****ppppplStack_948;
  long *****ppppplStack_940;
  long *****ppppplStack_938;
  long *****ppppplStack_930;
  long *****ppppplStack_928;
  long *****ppppplStack_920;
  long *****ppppplStack_918;
  long *******ppppppplStack_910;
  long *******ppppppplStack_908;
  long *******ppppppplStack_900;
  long ******pppppplStack_8f8;
  long *****ppppplStack_8f0;
  long *****ppppplStack_8e8;
  long *****ppppplStack_8e0;
  long *****ppppplStack_8d8;
  long *****ppppplStack_8d0;
  long *****ppppplStack_8c8;
  long *****ppppplStack_8c0;
  long *****ppppplStack_8b8;
  long *****ppppplStack_8b0;
  long *****ppppplStack_8a8;
  long *****ppppplStack_8a0;
  long *****ppppplStack_898;
  long *******ppppppplStack_770;
  long *******ppppppplStack_768;
  undefined8 uStack_760;
  long *******ppppppplStack_758;
  long *****ppppplStack_750;
  long *****ppppplStack_748;
  ulong uStack_740;
  undefined8 uStack_738;
  undefined8 auStack_730 [6];
  ulong uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 auStack_638 [44];
  undefined2 uStack_4d8;
  long *******ppppppplStack_4d0;
  long ******pppppplStack_4c8;
  long ******pppppplStack_4c0;
  long *******ppppppplStack_4b8;
  long ******pppppplStack_4b0;
  long ******pppppplStack_4a8;
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  uint uStack_470;
  long *******ppppppplStack_468;
  long *******ppppppplStack_460;
  long *******ppppppplStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 uStack_430;
  undefined7 uStack_42f;
  undefined1 uStack_428;
  undefined8 uStack_427;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  long *****ppppplStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long ******pppppplStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  long ******pppppplStack_388;
  long ******pppppplStack_380;
  undefined7 uStack_378;
  char cStack_371;
  undefined8 *******pppppppuStack_370;
  long *******ppppppplStack_368;
  ulong uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  uint uStack_318;
  uint uStack_314;
  long *******ppppppplStack_310;
  long *******ppppppplStack_308;
  long *******ppppppplStack_300;
  long ******pppppplStack_2f8;
  long alStack_2f0 [2];
  long *******ppppppplStack_2e0;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  long ******pppppplStack_2c8;
  long alStack_2c0 [2];
  undefined8 *******pppppppuStack_2b0;
  long ******pppppplStack_2a8;
  long ******pppppplStack_2a0;
  long *******ppppppplStack_290;
  undefined7 uStack_288;
  undefined4 uStack_281;
  undefined1 uStack_27d;
  byte bStack_279;
  long ******pppppplStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined8 uStack_240;
  long *plStack_238;
  long ******pppppplStack_230;
  long *plStack_228;
  long *******ppppppplStack_220;
  long ******pppppplStack_218;
  long ******pppppplStack_210;
  undefined4 uStack_208;
  long *******ppppppplStack_200;
  long ****pppplStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  long *******ppppppplStack_1c0;
  long ******pppppplStack_1b8;
  long *****ppppplStack_1b0;
  long *****ppppplStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  long *******ppppppplStack_190;
  undefined1 uStack_188;
  long *******ppppppplStack_180;
  long *******ppppppplStack_178;
  long *******ppppppplStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long ******pppppplStack_148;
  undefined1 uStack_140;
  undefined1 uStack_128;
  long ******pppppplStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  undefined4 uStack_108;
  uint uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long ******pppppplStack_e8;
  undefined1 auStack_e0 [24];
  char acStack_c8 [8];
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar31 = *(uint **)(param_2 + 8);
  plStack_228 = (long *)0x0;
  pppppplStack_230 = (long ******)0x0;
  plStack_238 = (long *)0x0;
  uStack_240 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  lStack_268 = 0;
  pppppplStack_270 = (long ******)0x0;
  puVar32 = puVar31 + 0x1c;
  uVar6 = *puVar31;
  uStack_250 = 0x3f800000;
  if (1 < (int)uVar6) {
    if (1 < uVar6 - 2) {
      if (uVar6 == 4) {
        iVar15 = *(int *)(*(long *)(param_2 + 0x28) + 0x734);
        if (iVar15 != 8 && iVar15 != 3) goto LAB_10a1659c8;
        plVar17 = *(long **)(param_2 + 0x20);
        FUN_10a244d68();
        (**(code **)(*plVar17 + 0x108))();
        auVar70 = *(undefined1 (*) [16])(*(long *)(param_2 + 8) + 0x10);
        auVar70 = NEON_ext(auVar70,auVar70,8,1);
        ppppppplStack_908 = auVar70._8_8_;
        ppppppplStack_910 = auVar70._0_8_;
        plVar42 = plVar17;
        FUN_10a16603c();
        lVar34 = *plVar42;
        if (lVar34 == 0) {
          lVar54 = 0;
          ppppppplStack_758 = (long *******)0x0;
          uStack_760 = (long *******)0x0;
          ppppplStack_748 = (long *****)0x0;
          ppppplStack_750 = (long *****)0x0;
          ppppppplStack_768 = (long *******)0x0;
          ppppppplStack_770 = (long *******)0x0;
          lVar34 = param_2 + 0x48;
          do {
            FUN_10a16609c(lVar34 + lVar54,(long)&ppppppplStack_770 + lVar54);
            lVar54 = lVar54 + 0x10;
          } while (lVar54 != 0x30);
          lVar54 = 0x20;
          do {
            func_0x00010a0eb124((long)&ppppppplStack_770 + lVar54);
            lVar54 = lVar54 + -0x10;
          } while (lVar54 != -0x10);
          lVar54 = *(long *)(param_2 + 8);
          if (*(int *)(lVar54 + 0x50) == 2) {
            ppppppplStack_770 = (long *******)CONCAT44(ppppppplStack_770._4_4_,1);
            ppppppplStack_768 = *(long ********)(lVar54 + 0x20);
            uStack_760 = (long *******)(*(long *)(lVar54 + 0x28) - (long)ppppppplStack_768);
            (**(code **)(**(long **)(param_2 + 0x28) + 0xa0))
                      (&ppppppplStack_180,*(long **)(param_2 + 0x28),&ppppppplStack_770);
            FUN_10a16609c(lVar34,&ppppppplStack_180);
            ppppppplVar33 = ppppppplStack_178;
            if (ppppppplStack_178 != (long *******)0x0) {
              ppppppplVar41 = ppppppplStack_178 + 1;
              do {
                pppppplVar23 = *ppppppplVar41;
                cVar9 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar41,0x10);
                if (bVar12) {
                  *ppppppplVar41 = (long ******)((long)pppppplVar23 + -1);
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (pppppplVar23 == (long ******)0x0) {
                (*(code *)(*ppppppplStack_178)[2])(ppppppplStack_178);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar33);
              }
            }
            ppppppplStack_768 = *(long ********)(lVar54 + 0x38);
            uStack_760 = (long *******)(*(long *)(lVar54 + 0x40) - (long)ppppppplStack_768);
            (**(code **)(**(long **)(param_2 + 0x28) + 0xa0))
                      (&ppppppplStack_180,*(long **)(param_2 + 0x28),&ppppppplStack_770);
            FUN_10a16609c(param_2 + 0x58,&ppppppplStack_180);
            if (ppppppplStack_178 != (long *******)0x0) {
              ppppppplVar33 = ppppppplStack_178 + 1;
              do {
                pppppplVar23 = *ppppppplVar33;
                cVar9 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar33,0x10);
                if (bVar12) {
                  *ppppppplVar33 = (long ******)((long)pppppplVar23 + -1);
                  cVar9 = ExclusiveMonitorsStatus();
                }
                ppppppplVar41 = ppppppplStack_178;
              } while (cVar9 != '\0');
LAB_10a1622c4:
              if (pppppplVar23 == (long ******)0x0) {
                (*(code *)(*ppppppplVar41)[2])(ppppppplVar41);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar41);
              }
            }
          }
          else if (*(int *)(lVar54 + 0x50) == 0) {
            ppppppplStack_770 = (long *******)CONCAT44(ppppppplStack_770._4_4_,1);
            ppppppplStack_768 = *(long ********)(lVar54 + 0x20);
            uStack_760 = (long *******)(*(long *)(lVar54 + 0x28) - (long)ppppppplStack_768);
            (**(code **)(**(long **)(param_2 + 0x28) + 0xa0))
                      (&ppppppplStack_180,*(long **)(param_2 + 0x28),&ppppppplStack_770);
            func_0x00010a0eadd8(lVar34,&ppppppplStack_180);
            func_0x00010a0eadd8(param_2 + 0x58,&ppppppplStack_180);
            if (ppppppplStack_178 != (long *******)0x0) {
              ppppppplVar33 = ppppppplStack_178 + 1;
              do {
                pppppplVar23 = *ppppppplVar33;
                cVar9 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar33,0x10);
                if (bVar12) {
                  *ppppppplVar33 = (long ******)((long)pppppplVar23 + -1);
                  cVar9 = ExclusiveMonitorsStatus();
                }
                ppppppplVar41 = ppppppplStack_178;
              } while (cVar9 != '\0');
              goto LAB_10a1622c4;
            }
          }
          ppppppplStack_178 = (long *******)0x0;
          ppppppplStack_180 = (long *******)0x0;
          ppppppplStack_768 = (long *******)0x0;
          ppppppplStack_770 = (long *******)0x0;
          ppppppplStack_758 = (long *******)0x0;
          uStack_760 = (long *******)0x0;
          ppppplStack_750 = (long *****)CONCAT44(ppppplStack_750._4_4_,0x3f800000);
          FUN_10a166100(plVar17,&ppppppplStack_910,lVar34,&ppppppplStack_180,&ppppppplStack_770);
          func_0x000109243058(&ppppppplStack_770);
        }
        else {
          lVar54 = param_2 + 0x48;
          lVar60 = 3;
          do {
            func_0x00010a0eadd8(lVar54,lVar34);
            lVar34 = lVar34 + 0x10;
            lVar54 = lVar54 + 0x10;
            lVar60 = lVar60 + -1;
          } while (lVar60 != 0);
        }
        FUN_10a1664e0(param_2);
      }
LAB_10a162320:
      plVar42 = (long *)(param_2 + 0x28);
      if (((uVar6 & 0xfffffffe) == 2) &&
         (*(int *)(*plVar42 + 0x734) == 2 || *(int *)(*plVar42 + 0x734) == 7)) {
        if (uVar6 == 3) {
LAB_10a16238c:
          puVar16 = puVar32;
          FUN_10a166bb0();
          if (((ulong)puVar16 & 1) == 0) {
            plVar17 = *(long **)(param_2 + 0x20);
            FUN_10a244d68();
            (**(code **)(*plVar17 + 0x108))();
            if (*(char *)((long)puVar31 + 0x87) < '\0') {
              func_0x000107c3192c(&ppppppplStack_770,*(undefined8 *)(puVar31 + 0x1c),
                                  *(undefined8 *)(puVar31 + 0x1e));
            }
            else {
              ppppppplStack_770 = *(long ********)puVar32;
              ppppppplStack_768 = *(long ********)(puVar31 + 0x1e);
              uStack_760 = *(long ********)(puVar31 + 0x20);
            }
            if (*(char *)((long)puVar31 + 0x9f) < '\0') {
              func_0x000107c3192c(&ppppppplStack_758,*(undefined8 *)(puVar31 + 0x22),
                                  *(undefined8 *)(puVar31 + 0x24));
            }
            else {
              ppppppplStack_758 = *(long ********)(puVar31 + 0x22);
              ppppplStack_750 = *(long ******)(puVar31 + 0x24);
              ppppplStack_748 = *(long ******)(puVar31 + 0x26);
            }
            uStack_740 = CONCAT44(uStack_740._4_4_,puVar31[0x28]);
            func_0x000107c2c4d8(&ppppppplStack_770,&UNK_10f63f99c,0x22);
            FUN_10a08d2e0(&ppppppplStack_180,&ppppppplStack_770);
            ppppppplStack_b8 = ppppppplStack_178;
            ppppppplVar33 = ppppppplStack_180;
            if (-1 < (long)ppppppplStack_170) {
              ppppppplStack_b8 = (long *******)((ulong)ppppppplStack_170 >> 0x38);
              ppppppplVar33 = (long *******)&ppppppplStack_180;
            }
            uVar43 = (ulong)ppppppplStack_b8 >> 3;
            if (((ulong)ppppppplVar33 & 7) == 0) {
              if (ppppppplStack_b8 < (long *******)0x8) goto LAB_10a1624ac;
              uVar61 = 0;
              ppppppplVar41 = ppppppplVar33;
              do {
                uVar61 = uVar61 * 0x40 + 0x9e3779b9 + (uVar61 >> 2) + (long)*ppppppplVar41 ^ uVar61;
                uVar43 = uVar43 - 1;
                ppppppplVar41 = ppppppplVar41 + 1;
              } while (uVar43 != 0);
            }
            else if (ppppppplStack_b8 < (long *******)0x8) {
LAB_10a1624ac:
              uVar61 = 0;
            }
            else {
              uVar61 = 0;
              ppppppplVar41 = ppppppplVar33;
              do {
                uVar61 = uVar61 * 0x40 + 0x9e3779b9 + (uVar61 >> 2) + (long)*ppppppplVar41 ^ uVar61;
                uVar43 = uVar43 - 1;
                ppppppplVar41 = ppppppplVar41 + 1;
              } while (uVar43 != 0);
            }
            ppppppplStack_910 = (long *******)0x0;
            if (((ulong)ppppppplStack_b8 & 7) != 0) {
              _memcpy(&ppppppplStack_910,
                      (long)((long)ppppppplVar33 + (long)ppppppplStack_b8) -
                      ((ulong)ppppppplStack_b8 & 7));
            }
            uVar61 = (ulong)(uVar61 * 0x40 + 0x9e3779b9 + (uVar61 >> 2) + (long)ppppppplStack_910) ^
                     uVar61;
            ppppppplStack_c0 =
                 (long *******)
                 ((ulong)((long)ppppppplStack_b8 + (uVar61 >> 2) + uVar61 * 0x40 + 0x9e3779b9) ^
                 uVar61);
            FUN_10a16603c(plVar17,&ppppppplStack_c0);
            if (*plVar17 != 0) {
              func_0x00010a0eadd8(&pppppplStack_230);
              func_0x00010a15e1d0(&uStack_240,*(undefined8 *)(*plVar17 + 0x30),
                                  *(undefined8 *)(*plVar17 + 0x38));
              plVar35 = plStack_260;
              lVar34 = *plVar17;
              if ((long *******)(lVar34 + 0x40) != &pppppplStack_270) {
                uStack_250 = *(undefined4 *)(lVar34 + 0x60);
                plVar17 = *(long **)(lVar34 + 0x50);
                if (lStack_268 != 0) {
                  lVar34 = 0;
                  do {
                    pppppplStack_270[lVar34] = (long *****)0x0;
                    lVar34 = lVar34 + 1;
                  } while (lStack_268 != lVar34);
                  uStack_258 = 0;
                  plStack_260 = (long *)0x0;
                  plVar18 = plVar35;
                  if (plVar35 != (long *)0x0 && plVar17 != (long *)0x0) {
                    do {
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                (plVar18 + 2,plVar17 + 2);
                      FUN_10a0e46d8(plVar18 + 5,plVar17 + 5);
                      plVar35 = (long *)*plVar18;
                      FUN_10a184e2c(&pppppplStack_270,plVar18);
                      plVar17 = (long *)*plVar17;
                      if (plVar35 == (long *)0x0) break;
                      plVar18 = plVar35;
                    } while (plVar17 != (long *)0x0);
                  }
                  func_0x000109243090(&pppppplStack_270,plVar35);
                }
                if (plVar17 != (long *)0x0) {
                  do {
                    ppppppplVar33 = (long *******)0x1c0;
                    __Znwm();
                    ppppppplStack_900 = (long *******)0x0;
                    *ppppppplVar33 = (long ******)0x0;
                    ppppppplVar33[1] = (long ******)0x0;
                    ppppppplStack_910 = ppppppplVar33;
                    ppppppplStack_908 = &pppppplStack_270;
                    FUN_10a184c6c(ppppppplVar33 + 2,plVar17 + 2);
                    ppppppplStack_900 = (long *******)CONCAT71(ppppppplStack_900._1_7_,1);
                    pppppplVar23 = (long ******)&pppppplStack_270;
                    func_0x000107c2b05c(pppppplVar23,ppppppplVar33 + 2);
                    ppppppplVar33[1] = pppppplVar23;
                    FUN_10a184e2c(&pppppplStack_270,ppppppplVar33);
                    plVar17 = (long *)*plVar17;
                  } while (plVar17 != (long *)0x0);
                }
              }
            }
            if ((long)ppppppplStack_170 < 0) {
              __ZdlPv(ppppppplStack_180);
            }
            if ((long)ppppplStack_748 < 0) {
              __ZdlPv(ppppppplStack_758);
            }
            if ((long)uStack_760 < 0) {
              __ZdlPv(ppppppplStack_770);
            }
          }
          bVar12 = true;
        }
        else {
          ppppppplVar33 = *(long ********)(*(long *)(param_2 + 8) + 0x10);
          if ((long)ppppppplVar33 < 0) goto LAB_10a165ea4;
          ppppppplStack_770 = *(long ********)(*(long *)(param_2 + 8) + 8);
          ppppppplVar41 = (long *******)&ppppppplStack_770;
          ppppppplStack_768 = ppppppplVar33;
          FUN_10a166af4(ppppppplVar41,&UNK_10f63f906,0);
          if (ppppppplVar41 != (long *******)0xffffffffffffffff) goto LAB_10a16238c;
          bVar12 = false;
        }
        __ZNSt3__15mutex4lockEv(param_2 + 0x118);
        if ((bVar12) && (plVar17 = (long *)(param_2 + 0x48), *plVar17 == 0)) {
          plVar18 = *(long **)(param_2 + 0x20);
          FUN_10a244d68();
          (**(code **)(*plVar18 + 0x108))();
          auVar70 = *(undefined1 (*) [16])(*(long *)(param_2 + 8) + 0x10);
          auVar70 = NEON_ext(auVar70,auVar70,8,1);
          ppppppplStack_178 = auVar70._8_8_;
          ppppppplStack_180 = auVar70._0_8_;
          plVar35 = plVar18;
          FUN_10a16603c();
          lVar34 = *plVar35;
          if (lVar34 == 0) {
            ppppppplStack_910 = (long *******)CONCAT44(ppppppplStack_910._4_4_,(uint)(uVar6 == 3));
            ppppppplStack_908 = *(long ********)(*(long *)(param_2 + 8) + 8);
            ppppppplStack_900 = *(long ********)(*(long *)(param_2 + 8) + 0x10);
            (**(code **)(**(long **)(param_2 + 0x28) + 0xa0))
                      (&ppppppplStack_c0,*(long **)(param_2 + 0x28),&ppppppplStack_910);
            ppppppplStack_770 = ppppppplStack_c0;
            ppppppplStack_768 = ppppppplStack_b8;
            if (ppppppplStack_b8 == (long *******)0x0) {
              ppppppplStack_758 = (long *******)0x0;
            }
            else {
              ppppppplVar33 = ppppppplStack_b8 + 1;
              do {
                cVar9 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar33,0x10);
                if (bVar12) {
                  *ppppppplVar33 = (long ******)((long)*ppppppplVar33 + 1);
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              ppppppplStack_758 = ppppppplStack_b8;
              if (ppppppplStack_b8 != (long *******)0x0) {
                ppppppplVar33 = ppppppplStack_b8 + 1;
                do {
                  cVar9 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar33,0x10);
                  if (bVar12) {
                    *ppppppplVar33 = (long ******)((long)*ppppppplVar33 + 1);
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
              }
            }
            uStack_760 = ppppppplStack_c0;
            lVar34 = 0;
            ppppplStack_748 = (long *****)0x0;
            ppppplStack_750 = (long *****)0x0;
            do {
              FUN_10a16609c((long)plVar17 + lVar34,(long)&ppppppplStack_770 + lVar34);
              lVar34 = lVar34 + 0x10;
            } while (lVar34 != 0x30);
            lVar34 = 0x20;
            do {
              func_0x00010a0eb124((long)&ppppppplStack_770 + lVar34);
              lVar34 = lVar34 + -0x10;
            } while (lVar34 != -0x10);
            ppppppplStack_1c8 = (long *******)0x0;
            ppppppplStack_1d0 = (long *******)0x0;
            ppppppplStack_768 = (long *******)0x0;
            ppppppplStack_770 = (long *******)0x0;
            ppppppplStack_758 = (long *******)0x0;
            uStack_760 = (long *******)0x0;
            ppppplStack_750 = (long *****)CONCAT44(ppppplStack_750._4_4_,0x3f800000);
            FUN_10a166100(plVar18,&ppppppplStack_180,plVar17,&ppppppplStack_1d0,&ppppppplStack_770);
            func_0x000109243058(&ppppppplStack_770);
            ppppppplVar33 = ppppppplStack_b8;
            if (ppppppplStack_b8 != (long *******)0x0) {
              ppppppplVar41 = ppppppplStack_b8 + 1;
              do {
                pppppplVar23 = *ppppppplVar41;
                cVar9 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar41,0x10);
                if (bVar12) {
                  *ppppppplVar41 = (long ******)((long)pppppplVar23 + -1);
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (pppppplVar23 == (long ******)0x0) {
                (*(code *)(*ppppppplStack_b8)[2])(ppppppplStack_b8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar33);
              }
            }
          }
          else {
            lVar54 = 3;
            do {
              func_0x00010a0eadd8(plVar17,lVar34);
              lVar34 = lVar34 + 0x10;
              plVar17 = plVar17 + 2;
              lVar54 = lVar54 + -1;
            } while (lVar54 != 0);
          }
          FUN_10a1664e0(param_2);
        }
        __ZNSt3__15mutex6unlockEv(param_2 + 0x118);
      }
      plVar17 = (long *)(param_2 + 0x48);
      if (*plVar17 != 0) {
        ppuVar19 = &PTR___tlv_bootstrap_11340de10;
        (*(code *)PTR___tlv_bootstrap_11340de10)();
        plVar35 = *(long **)*ppuVar19;
        FUN_10a185264(&ppppppplStack_290,0x400);
        FUN_10ab96d04(&ppppppplStack_290,param_2 + 0xc0);
        FUN_10a166c54(&ppppppplStack_290,param_3,param_2 + 0xc0);
        uVar43 = CONCAT17((undefined1)uStack_281,uStack_288);
        ppppppplVar33 = ppppppplStack_290;
        if (-1 < (char)bStack_279) {
          uVar43 = (ulong)bStack_279;
          ppppppplVar33 = (long *******)&ppppppplStack_290;
        }
        uVar61 = uVar43 >> 3;
        if (((ulong)ppppppplVar33 & 7) == 0) {
          if (uVar43 < 8) goto LAB_10a162984;
          uVar62 = 0;
          ppppppplVar41 = ppppppplVar33;
          do {
            uVar62 = uVar62 * 0x40 + 0x9e3779b9 + (uVar62 >> 2) + (long)*ppppppplVar41 ^ uVar62;
            uVar61 = uVar61 - 1;
            ppppppplVar41 = ppppppplVar41 + 1;
          } while (uVar61 != 0);
        }
        else if (uVar43 < 8) {
LAB_10a162984:
          uVar62 = 0;
        }
        else {
          uVar62 = 0;
          ppppppplVar41 = ppppppplVar33;
          do {
            uVar62 = uVar62 * 0x40 + 0x9e3779b9 + (uVar62 >> 2) + (long)*ppppppplVar41 ^ uVar62;
            uVar61 = uVar61 - 1;
            ppppppplVar41 = ppppppplVar41 + 1;
          } while (uVar61 != 0);
        }
        ppppppplStack_770 = (long *******)0x0;
        if ((uVar43 & 7) == 0) {
          ppppppplStack_770 = (long *******)0x0;
        }
        else {
          _memcpy(&ppppppplStack_770,(long)ppppppplVar33 + (uVar43 - (uVar43 & 7)));
        }
        uVar62 = uVar62 * 0x40 + 0x9e3779b9 + (uVar62 >> 2) + (long)ppppppplStack_770 ^ uVar62;
        plVar18 = *(long **)(*(long *)(param_2 + 8) + 8);
        uVar61 = *(ulong *)(*(long *)(param_2 + 8) + 0x10);
        uVar49 = uVar61 >> 3;
        if (((ulong)plVar18 & 7) == 0) {
          if (7 < uVar61) {
            uVar64 = 0;
            plVar20 = plVar18;
            do {
              uVar64 = uVar64 * 0x40 + 0x9e3779b9 + (uVar64 >> 2) + *plVar20 ^ uVar64;
              uVar49 = uVar49 - 1;
              plVar20 = plVar20 + 1;
            } while (uVar49 != 0);
            goto LAB_10a162a8c;
          }
        }
        else if (7 < uVar61) {
          uVar64 = 0;
          plVar20 = plVar18;
          do {
            uVar64 = uVar64 * 0x40 + 0x9e3779b9 + (uVar64 >> 2) + *plVar20 ^ uVar64;
            uVar49 = uVar49 - 1;
            plVar20 = plVar20 + 1;
          } while (uVar49 != 0);
          goto LAB_10a162a8c;
        }
        uVar64 = 0;
LAB_10a162a8c:
        uVar62 = uVar43 + 0x9e3779b9 + uVar62 * 0x40 + (uVar62 >> 2) ^ uVar62;
        ppppppplStack_770 = (long *******)0x0;
        if ((uVar61 & 7) != 0) {
          _memcpy(&ppppppplStack_770,(long)plVar18 + (uVar61 - (uVar61 & 7)));
        }
        uVar64 = uVar64 * 0x40 + 0x9e3779b9 + (uVar64 >> 2) + (long)ppppppplStack_770 ^ uVar64;
        __ZNSt3__19to_stringEy
                  (&ppppppplStack_910,
                   uVar62 * 0x40 + 0x9e3779b9 + (uVar62 >> 2) +
                   (uVar61 + 0x9e3779b9 + uVar64 * 0x40 + (uVar64 >> 2) ^ uVar64) ^ uVar62);
        __ZNSt3__19to_stringEy(&ppppppplStack_180,uVar61 + uVar43);
        ppppppplVar33 = ppppppplStack_178;
        ppppppplVar41 = ppppppplStack_180;
        if (-1 < (long)ppppppplStack_170) {
          ppppppplVar33 = (long *******)((ulong)ppppppplStack_170 >> 0x38);
          ppppppplVar41 = (long *******)&ppppppplStack_180;
        }
        ppppppplVar68 = (long *******)&ppppppplStack_910;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppppplVar68,ppppppplVar41,ppppppplVar33);
        ppppppplStack_770 = (long *******)*ppppppplVar68;
        ppppppplStack_768 = (long *******)ppppppplVar68[1];
        uStack_760 = (long *******)ppppppplVar68[2];
        ppppppplVar68[1] = (long ******)0x0;
        ppppppplVar68[2] = (long ******)0x0;
        *ppppppplVar68 = (long ******)0x0;
        ppppppplVar33 = (long *******)&ppppppplStack_770;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppppplVar33,&UNK_10f63f919,6);
        pppppplStack_2a0 = ppppppplVar33[2];
        pppppplStack_2a8 = ppppppplVar33[1];
        pppppppuStack_2b0 = (undefined8 *******)*ppppppplVar33;
        ppppppplVar33[1] = (long ******)0x0;
        ppppppplVar33[2] = (long ******)0x0;
        *ppppppplVar33 = (long ******)0x0;
        if ((long)uStack_760 < 0) {
          __ZdlPv(ppppppplStack_770);
        }
        if ((long)ppppppplStack_170 < 0) {
          __ZdlPv(ppppppplStack_180);
        }
        if ((long)ppppppplStack_900 < 0) {
          __ZdlPv(ppppppplStack_910);
        }
        uStack_318 = 1;
        ppppppplVar33 = ppppppplStack_290;
        if (-1 < (long)(char)bStack_279) {
          ppppppplVar33 = (long *******)&ppppppplStack_290;
        }
        alStack_2c0[1] = 0;
        alStack_2c0[0] = 0;
        pppppplStack_2c8 = (long ******)0x0;
        uStack_2d0 = 0;
        uStack_2d8 = 0;
        ppppppplStack_2e0 = (long *******)0x0;
        alStack_2f0[1] = 0;
        alStack_2f0[0] = 0;
        pppppplStack_2f8 = (long ******)0x0;
        ppppppplStack_300 = (long *******)0x0;
        ppppppplStack_308 = (long *******)0x0;
        ppppppplStack_310 = (long *******)0x0;
        uStack_314 = 0;
        uStack_320 = 0;
        uStack_328 = 0;
        uStack_330 = 0;
        lStack_338 = 0;
        lVar34 = CONCAT17((undefined1)uStack_281,uStack_288);
        if (-1 < (char)bStack_279) {
          lVar34 = (long)(char)bStack_279;
        }
        ppppppplVar68 = (long *******)((long)ppppppplVar33 + lVar34);
        lStack_340 = 0;
        ppppppplVar41 = ppppppplVar33;
        while (((ppppppplVar59 = ppppppplVar68, 0x14 < lVar34 &&
                (_memchr(ppppppplVar41,0x53,lVar34 + -0x14), ppppppplVar41 != (long *******)0x0)) &&
               (ppppppplVar59 = ppppppplVar41,
               (*ppppppplVar41 != (long ******)0x45525f54525f4353 ||
               ppppppplVar41[1] != (long ******)0x4d5f524556494543) ||
               *(long *)((long)ppppppplVar41 + 0xd) != 0x312045444f4d5f52))) {
          ppppppplVar41 = (long *******)((long)ppppppplVar41 + 1);
          lVar34 = (long)ppppppplVar68 - (long)ppppppplVar41;
        }
        puVar66 = (undefined8 *)&UNK_10f64086b;
        if ((long)ppppppplVar59 - (long)ppppppplVar33 == -1 || ppppppplVar59 == ppppppplVar68) {
          puVar66 = (undefined8 *)&UNK_10f62a468;
        }
        puVar16 = &uStack_314;
        puVar36 = &uStack_320;
        bVar12 = true;
        do {
          bVar13 = bVar12;
          uVar6 = *puVar16;
          if ((2 < uVar6) ||
             (lVar34 = plVar17[(ulong)uVar6 * 2], (*(byte *)(lVar34 + 0x40) & 1) == 0))
          goto LAB_10a165ea4;
          puVar22 = (undefined8 *)&UNK_10f62a458;
          if ((uVar6 != 0) && (puVar22 = puVar66, uVar6 != 1)) {
            FUN_10a00946c(&UNK_10f640875);
            goto LAB_10a165ea4;
          }
          uStack_760 = (long *******)CONCAT17(9,(undefined7)uStack_760);
          ppppppplStack_770 = (long *******)*puVar22;
          ppppppplStack_768._0_2_ = (ushort)*(byte *)(puVar22 + 1);
          ppppppplVar41 = *(long ********)(lVar34 + 0x30);
          for (ppppppplVar33 = *(long ********)(lVar34 + 0x28); ppppppplVar41 != ppppppplVar33;
              ppppppplVar33 = ppppppplVar33 + 7) {
            ppppppplStack_908 = (long *******)(long)*(char *)((long)ppppppplVar33 + 0x17);
            ppppppplStack_910 = ppppppplVar33;
            if ((long)ppppppplStack_908 < 0) {
              ppppppplStack_908 = (long *******)ppppppplVar33[1];
              ppppppplStack_910 = (long *******)*ppppppplVar33;
            }
            ppppppplVar68 = (long *******)&ppppppplStack_910;
            FUN_10a159054(ppppppplVar68,&ppppppplStack_770,9);
            ppppppplVar59 = ppppppplStack_908;
            ppppppplVar63 = ppppppplStack_910;
            if ((int)ppppppplVar68 != 0) goto LAB_10a162d8c;
          }
          ppppppplVar59 = (long *******)0x0;
          ppppppplVar63 = (long *******)"";
LAB_10a162d8c:
          if ((long)uStack_760 < 0) {
            __ZdlPv(ppppppplStack_770);
          }
          plVar57 = *(long **)(lVar34 + 0x30);
          plVar20 = *(long **)(lVar34 + 0x28);
          plVar65 = plVar20;
          for (plVar18 = plVar20; plVar18 != plVar57; plVar18 = plVar18 + 7) {
            bVar7 = *(byte *)((long)plVar18 + 0x17);
            ppppppplVar33 = (long *******)plVar18[1];
            if (-1 < (char)bVar7) {
              ppppppplVar33 = (long *******)(ulong)bVar7;
            }
            if (ppppppplVar59 == ppppppplVar33) {
              plVar65 = (long *)*plVar18;
              if (-1 < (char)bVar7) {
                plVar65 = plVar18;
              }
              ppppppplVar33 = ppppppplVar63;
              _memcmp(ppppppplVar63,plVar65,ppppppplVar59);
              plVar65 = plVar18;
              if ((int)ppppppplVar33 == 0) break;
            }
            plVar65 = plVar57;
          }
          *puVar36 = ((long)plVar65 - (long)plVar20 >> 3) * 0x6db6db6db6db6db7;
          puVar16 = &uStack_318;
          puVar36 = &uStack_328;
          bVar12 = false;
        } while (bVar13);
        uVar62 = 0;
        uVar49 = (ulong)bStack_279;
        bVar12 = (char)bStack_279 < '\0';
        uVar61 = CONCAT17((undefined1)uStack_281,uStack_288);
        uVar43 = uVar61;
        ppppppplVar33 = ppppppplStack_290;
        if (!bVar12) {
          uVar43 = uVar49;
          ppppppplVar33 = (long *******)&ppppppplStack_290;
        }
        uStack_350 = 0;
        uStack_358 = 0;
        lStack_348 = 0;
        ppppppplStack_368 = (long *******)0x0;
        pppppppuStack_370 = (undefined8 *******)0x0;
        uStack_360 = 0;
LAB_10a162e6c:
        ppppppplVar41 = ppppppplStack_290;
        lVar34 = uVar43 - uVar62;
        if (7 < lVar34) {
          plVar18 = (long *)((long)ppppppplVar33 + uVar62);
          while( true ) {
            _memchr(plVar18,0x23,lVar34 + -7);
            if (plVar18 == (long *)0x0) goto LAB_10a163570;
            if (*plVar18 == 0x20656e6966656423) break;
            plVar18 = (long *)((long)plVar18 + 1);
            lVar34 = (long)((long)ppppppplVar33 + uVar43) - (long)plVar18;
            if (lVar34 < 8) goto LAB_10a163570;
          }
          if ((plVar18 != (long *)((long)ppppppplVar33 + uVar43)) &&
             ((long)plVar18 - (long)ppppppplVar33 != -1)) {
            uVar43 = ((long)plVar18 - (long)ppppppplVar33) + 8;
            if (!bVar12) {
              uVar61 = uVar49;
              ppppppplVar41 = (long *******)&ppppppplStack_290;
            }
            if (uVar43 < uVar61) {
              pcVar56 = (char *)((long)ppppppplVar41 + uVar43);
              lVar34 = (long)ppppppplVar33 + (uVar61 - (long)plVar18) + -8;
              do {
                pcVar47 = pcVar56;
                if ((*pcVar56 == '\n') || (*pcVar56 == ' ')) break;
                pcVar56 = pcVar56 + 1;
                lVar34 = lVar34 + -1;
                pcVar47 = (char *)((long)ppppppplVar41 + uVar61);
              } while (lVar34 != 0);
              uVar62 = (long)pcVar47 - (long)ppppppplVar41;
              if (pcVar47 == (char *)((long)ppppppplVar41 + uVar61)) {
                uVar62 = 0xffffffffffffffff;
              }
            }
            else {
              uVar62 = 0xffffffffffffffff;
            }
            func_0x000107c2c4d8(&uStack_358,(long)ppppppplVar41 + uVar43,uVar62 - uVar43);
            lVar34 = uVar62 + 1;
            puVar36 = &uStack_320;
            puVar16 = (uint *)((long)&uStack_330 + 4);
            plVar18 = &lStack_338;
            ppppppplVar33 = (long *******)&ppppppplStack_310;
            ppppppplVar41 = (long *******)&ppppppplStack_2e0;
            bVar12 = true;
LAB_10a162f64:
            uVar43 = *puVar36;
            uVar61 = (*(long *)(param_2 + 0x98) - *(long *)(param_2 + 0x90) >> 3) *
                     -0x3333333333333333;
            if (uVar43 <= uVar61 && uVar61 - uVar43 != 0) {
              plVar57 = (long *)(*(long *)(param_2 + 0x90) + uVar43 * 0x28);
              plVar20 = plVar57;
              func_0x000107c2b05c(plVar57,&uStack_358);
              plVar65 = (long *)plVar57[1];
              if (plVar65 != (long *)0x0) {
                uVar43 = (long)plVar65 - 1;
                if (((ulong)plVar65 & uVar43) == 0) {
                  plVar67 = (long *)(uVar43 & (ulong)plVar20);
                }
                else {
                  plVar67 = plVar20;
                  if (plVar65 <= plVar20) {
                    uVar61 = 0;
                    if (plVar65 != (long *)0x0) {
                      uVar61 = (ulong)plVar20 / (ulong)plVar65;
                    }
                    plVar67 = (long *)((long)plVar20 - uVar61 * (long)plVar65);
                  }
                }
                plVar37 = *(long **)(*plVar57 + (long)plVar67 * 8);
                if (plVar37 != (long *)0x0) {
                  for (plVar37 = (long *)*plVar37; plVar37 != (long *)0x0;
                      plVar37 = (long *)*plVar37) {
                    plVar38 = (long *)plVar37[1];
                    if (plVar20 == plVar38) {
                      plVar38 = plVar57;
                      func_0x000107c2b068(plVar57,plVar37 + 2,&uStack_358);
                      if (((ulong)plVar38 & 1) != 0) {
                        *plVar18 = *plVar18 + 1;
                        uVar6 = *puVar16;
                        uVar43 = (ulong)uVar6;
                        uVar30 = *(undefined4 *)(plVar37 + 8);
                        uVar4 = *(undefined4 *)((long)plVar37 + 0x44);
                        pppppplVar23 = ppppppplVar41[1];
                        if (pppppplVar23 < ppppppplVar41[2]) {
                          *(undefined4 *)pppppplVar23 = uVar30;
                          *(uint *)((long)pppppplVar23 + 4) = uVar6;
                          pppppplVar24 = (long ******)((long)pppppplVar23 + 0xc);
                          *(undefined4 *)(pppppplVar23 + 1) = uVar4;
                        }
                        else {
                          lVar54 = (long)pppppplVar23 - (long)*ppppppplVar41;
                          uVar61 = (lVar54 >> 2) * -0x5555555555555555 + 1;
                          if (0x1555555555555555 < uVar61) {
                            FUN_10a0eaac4();
                            goto LAB_10a165ea4;
                          }
                          lVar60 = (long)ppppppplVar41[2] - (long)*ppppppplVar41 >> 2;
                          uVar49 = lVar60 * 0x5555555555555556;
                          if (uVar49 < uVar61 || uVar49 - uVar61 == 0) {
                            uVar49 = uVar61;
                          }
                          if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar60 * -0x5555555555555555)) {
                            uVar49 = 0x1555555555555555;
                          }
                          ppppppplVar68 = ppppppplVar41;
                          func_0x00010a0eaad8();
                          puVar2 = (undefined4 *)((long)ppppppplVar68 + lVar54);
                          *puVar2 = uVar30;
                          puVar2[1] = uVar6;
                          puVar2[2] = uVar4;
                          pppppplVar24 = (long ******)(puVar2 + 3);
                          pppppplVar58 = (long ******)
                                         ((long)puVar2 -
                                         ((long)ppppppplVar41[1] - (long)*ppppppplVar41));
                          _memcpy(pppppplVar58);
                          pppppplVar23 = *ppppppplVar41;
                          *ppppppplVar41 = pppppplVar58;
                          ppppppplVar41[1] = pppppplVar24;
                          ppppppplVar41[2] = (long ******)((long)ppppppplVar68 + uVar49 * 0xc);
                          if (pppppplVar23 != (long ******)0x0) {
                            __ZdlPv();
                          }
                        }
                        ppppppplVar41[1] = pppppplVar24;
                        if (*(int *)((long)plVar37 + 0x44) == 3) {
                          uVar43 = CONCAT17((undefined1)uStack_281,uStack_288);
                          ppppppplVar41 = ppppppplStack_290;
                          if (-1 < (char)bStack_279) {
                            uVar43 = (ulong)bStack_279;
                            ppppppplVar41 = (long *******)&ppppppplStack_290;
                          }
                          if (uVar62 < uVar43) {
                            pcVar56 = (char *)((long)ppppppplVar41 + uVar62);
                            lVar54 = -uVar62 + uVar43;
                            goto LAB_10a1631a0;
                          }
                          lVar54 = -1;
                          goto LAB_10a163260;
                        }
                        if (*(int *)((long)plVar37 + 0x44) != 1) goto LAB_10a1634d4;
                        uVar61 = uVar43 + 4;
                        pppppplVar23 = *ppppppplVar33;
                        uVar49 = (long)ppppppplVar33[1] - (long)pppppplVar23;
                        if (uVar61 < uVar49 || uVar61 - uVar49 == 0) {
                          if (uVar61 < uVar49) {
                            ppppppplVar33[1] = (long ******)((long)pppppplVar23 + uVar61);
                          }
                        }
                        else {
                          func_0x000107c27d58(ppppppplVar33,uVar61 - uVar49);
                          pppppplVar23 = *ppppppplVar33;
                        }
                        uVar61 = CONCAT17((undefined1)uStack_281,uStack_288);
                        if (-1 < (char)bStack_279) {
                          uVar61 = (ulong)bStack_279;
                        }
                        if (uVar61 < uVar62) goto LAB_10a165ea4;
                        ppppppplVar41 = ppppppplStack_290;
                        if (-1 < (char)bStack_279) {
                          ppppppplVar41 = (long *******)&ppppppplStack_290;
                        }
                        pcVar56 = (char *)((long)ppppppplVar41 + uVar62);
                        if (*pcVar56 != ' ') goto LAB_10a1634cc;
                        if (uVar62 < uVar61) {
                          lVar54 = -uVar62 + uVar61;
                          goto LAB_10a163228;
                        }
                        lVar54 = -1;
                        goto LAB_10a163438;
                      }
                    }
                    else {
                      if (((ulong)plVar65 & uVar43) == 0) {
                        plVar38 = (long *)((ulong)plVar38 & uVar43);
                      }
                      else if (plVar65 <= plVar38) {
                        uVar61 = 0;
                        if (plVar65 != (long *)0x0) {
                          uVar61 = (ulong)plVar38 / (ulong)plVar65;
                        }
                        plVar38 = (long *)((long)plVar38 - uVar61 * (long)plVar65);
                      }
                      if (plVar38 != plVar67) break;
                    }
                  }
                }
              }
              goto LAB_10a1634e4;
            }
            goto LAB_10a165ea4;
          }
        }
        goto LAB_10a163570;
      }
      iVar15 = (int)*(undefined8 *)(param_2 + 8);
      FUN_10a1e6ee4(&ppppppplStack_180);
      lVar34 = 0;
      uStack_660 = 0;
      uStack_668 = 0;
      uStack_650 = 0;
      uStack_658 = 0;
      uStack_640 = 0;
      uStack_648 = 0;
      ppppppplStack_c0 = (long *******)0x0;
      ppppppplStack_b8 = (long *******)0x0;
      uStack_b0 = (long *******)0x0;
      ppppppplStack_770 = (long *******)((ulong)ppppppplStack_770 & 0xffffffff00000000);
      uStack_760 = (long *******)0x0;
      ppppppplStack_768 = (long *******)0x0;
      ppppplStack_750 = (long *****)0x0;
      ppppppplStack_758 = (long *******)0x0;
      uStack_740 = 0;
      ppppplStack_748 = (long *****)0x0;
      auStack_730[0] = 0;
      uStack_738 = 0;
      auStack_730[2] = 0;
      auStack_730[1] = 0;
      auStack_730[4] = 0;
      auStack_730[3] = 0;
      uStack_700 = 0;
      auStack_730[5] = 0;
      uStack_6f0 = 0;
      uStack_6f8 = 0;
      uStack_6e0 = 0;
      uStack_6e8 = 0;
      uStack_6d0 = 0;
      uStack_6d8 = 0;
      uStack_6c0 = 0;
      uStack_6c8 = 0;
      uStack_6b0 = 0;
      uStack_6b8 = 0;
      uStack_6a0 = 0;
      uStack_6a8 = 0;
      uStack_690 = 0;
      uStack_698 = 0;
      uStack_680 = 0;
      uStack_67c = 0;
      uStack_688 = 0;
      uStack_670 = 0;
      uStack_66c = 0;
      uStack_678 = 0;
      uStack_674 = 0;
      do {
        *(undefined8 *)((long)auStack_730 + lVar34 + 8U) = 0;
        *(undefined8 *)((long)auStack_730 + lVar34) = 0;
        *(undefined8 *)((long)&uStack_738 + lVar34) = 0;
        *(undefined8 *)((long)auStack_730 + lVar34 + 0x10U) = 0xffffffff;
        lVar34 = lVar34 + 0x20;
      } while (lVar34 != 0x100);
      auStack_638[9] = 0;
      auStack_638[8] = 0;
      auStack_638[0xb] = 0;
      auStack_638[10] = 0;
      auStack_638[5] = 0;
      auStack_638[4] = 0;
      auStack_638[7] = 0;
      auStack_638[6] = 0;
      auStack_638[1] = 0;
      auStack_638[0] = 0;
      auStack_638[3] = 0;
      auStack_638[2] = 0;
      if (((uVar6 & 0xfffffffe) == 2) &&
         (*(int *)(*plVar42 + 0x734) == 2 || *(int *)(*plVar42 + 0x734) == 7)) {
        uVar43 = *(ulong *)(puVar31 + 0x1e);
        puVar16 = *(uint **)(puVar31 + 0x1c);
        if (-1 < (char)*(byte *)((long)puVar31 + 0x87)) {
          uVar43 = (ulong)*(byte *)((long)puVar31 + 0x87);
          puVar16 = puVar32;
        }
        FUN_10ae03140(0,puVar16,uVar43);
        ppuVar19 = &PTR_PTR_1133003a0;
        FUN_10ae079a0();
        FUN_10ae0314c();
        FUN_10ae07cd4(ppuVar19,&PTR_PTR_1133003a0);
        FUN_10a185264(&ppppppplStack_1d0,0x400);
        lVar34 = param_2 + 0xc0;
        FUN_10ab96d04(&ppppppplStack_1d0,lVar34);
        FUN_10a166f8c(&ppppppplStack_2e0,*(undefined8 *)(param_2 + 8));
        ppppppplVar33 = ppppppplStack_2e0;
        if (-1 < (long)uStack_2d0._7_1_) {
          ppppppplVar33 = (long *******)&ppppppplStack_2e0;
        }
        uVar43 = uStack_2d8;
        if (-1 < uStack_2d0) {
          uVar43 = (long)uStack_2d0._7_1_;
        }
        if (0x12 < (long)uVar43) {
          ppppppplVar68 = (long *******)((long)ppppppplVar33 + uVar43);
          ppppppplVar41 = ppppppplVar33;
          uVar61 = uVar43;
          do {
            _memchr(ppppppplVar41,0x6e,uVar61 - 0x12);
            ppppppplVar59 = ppppppplVar68;
            if ((ppppppplVar41 == (long *******)0x0) ||
               (ppppppplVar59 = ppppppplVar41,
               (*ppppppplVar41 == (long ******)0x657472655673676e &&
               ppppppplVar41[1] == (long ******)0x4572656461685378) &&
               *(long *)((long)ppppppplVar41 + 0xb) == 0x28646e4572656461)) break;
            ppppppplVar41 = (long *******)((long)ppppppplVar41 + 1);
            uVar61 = (long)ppppppplVar68 - (long)ppppppplVar41;
            ppppppplVar59 = ppppppplVar68;
          } while (0x12 < (long)uVar61);
          uVar61 = (long)ppppppplVar59 - (long)ppppppplVar33;
          ppppppplVar41 = ppppppplVar33;
          uVar62 = uVar43;
          if (ppppppplVar59 == ppppppplVar68) {
            uVar61 = 0xffffffffffffffff;
          }
          do {
            _memchr(ppppppplVar41,0x73,uVar62 - 0x12);
            ppppppplVar59 = ppppppplVar68;
            if ((ppppppplVar41 == (long *******)0x0) ||
               (ppppppplVar59 = ppppppplVar41,
               (*ppppppplVar41 == (long ******)0x6c437465535f6373 &&
               ppppppplVar41[1] == (long ******)0x697469736f507069) &&
               *(long *)((long)ppppppplVar41 + 0xb) == 0x286e6f697469736f)) break;
            uVar62 = (long)ppppppplVar68 - ((long)ppppppplVar41 + 1);
            ppppppplVar59 = ppppppplVar68;
            ppppppplVar41 = (long *******)((long)ppppppplVar41 + 1);
          } while (0x12 < (long)uVar62);
          lVar54 = uVar43 - uVar61;
          if ((((uVar61 <= uVar43) && (uVar61 != 0xffffffffffffffff)) &&
              (ppppppplVar59 == ppppppplVar68 || (long)ppppppplVar59 - (long)ppppppplVar33 == -1))
             && (0xb < lVar54)) {
            ppppppplVar41 = (long *******)((long)ppppppplVar33 + uVar61);
            while( true ) {
              _memchr(ppppppplVar41,0x67,lVar54 + -0xb);
              if (ppppppplVar41 == (long *******)0x0) break;
              if (*ppppppplVar41 == (long ******)0x7469736f505f6c67 &&
                  *(int *)(ppppppplVar41 + 1) == 0x3d6e6f69) {
                if (((ppppppplVar41 != ppppppplVar68) &&
                    (uVar61 = (long)ppppppplVar41 - (long)ppppppplVar33,
                    uVar61 != 0xffffffffffffffff)) &&
                   ((uVar61 <= uVar43 && (0 < (long)(uVar43 - uVar61))))) {
                  ppppppplVar41 = (long *******)((long)ppppppplVar33 + uVar61);
                  goto LAB_10a164a68;
                }
                break;
              }
              ppppppplVar41 = (long *******)((long)ppppppplVar41 + 1);
              lVar54 = (long)ppppppplVar68 - (long)ppppppplVar41;
              if (lVar54 < 0xc) break;
            }
          }
        }
LAB_10a162950:
        FUN_10a166c54(&ppppppplStack_1d0,param_3,lVar34);
        if ((long)ppppppplStack_1c0 < 0) {
          func_0x000107c3192c(&ppppppplStack_310,ppppppplStack_1d0,ppppppplStack_1c8);
        }
        else {
          ppppppplStack_308 = ppppppplStack_1c8;
          ppppppplStack_310 = ppppppplStack_1d0;
          ppppppplStack_300 = ppppppplStack_1c0;
        }
        FUN_10a0b4df8(&pppppplStack_3c0,&ppppppplStack_310,&ppppppplStack_2e0);
        FUN_10a1007e0(&ppppplStack_3f0,&pppppplStack_3c0);
        pppplStack_1f8 = (long ****)0x0;
        ppppppplStack_200 = (long *******)0x0;
        uStack_1f0 = 0;
        ppppppplStack_908 = (long *******)0x0;
        ppppppplStack_910 = (long *******)0x0;
        pppppplStack_8f8 = (long ******)0x0;
        ppppppplStack_900 = (long *******)0x0;
        ppppplStack_8f0 = (long *****)CONCAT44(ppppplStack_8f0._4_4_,0x3f800000);
        FUN_10a30da7c(&ppppppplStack_1a0,*(undefined8 *)(param_2 + 0x110),lVar34,&ppppplStack_3f0,
                      &ppppppplStack_200,&ppppppplStack_910,&ppppppplStack_180,1,1);
        ppppppplStack_b8 = ppppppplStack_198;
        ppppppplStack_c0 = ppppppplStack_1a0;
        uStack_b0 = ppppppplStack_190;
        ppppppplStack_190 = (long *******)((ulong)ppppppplStack_190 & 0xffffffffffffff);
        ppppppplStack_1a0 = (long *******)((ulong)ppppppplStack_1a0 & 0xffffffffffffff00);
        func_0x00010a1954dc(&ppppppplStack_910);
        pppplVar45 = pppplStack_1f8;
        ppppppplVar33 = ppppppplStack_200;
        if (-1 < (long)uStack_1f0) {
          pppplVar45 = (long ****)(uStack_1f0 >> 0x38);
          ppppppplVar33 = (long *******)&ppppppplStack_200;
        }
        func_0x000109237af0(&ppppppplStack_910,ppppppplVar33,pppplVar45);
        func_0x00010923a6e0(&ppppppplStack_770,&ppppppplStack_910);
        func_0x00010923ff08(&ppppppplStack_910);
        ppppppplVar59 = uStack_b0;
        ppppppplVar68 = ppppppplStack_b8;
        ppppppplVar41 = ppppppplStack_c0;
        ppppppplVar33 = ppppppplStack_c0;
        if (-1 < (long)uStack_b0._7_1_) {
          ppppppplVar33 = (long *******)&ppppppplStack_c0;
        }
        ppppppplVar63 = ppppppplStack_b8;
        if (-1 < (long)uStack_b0) {
          ppppppplVar63 = (long *******)(long)uStack_b0._7_1_;
        }
        if (0x12 < (long)ppppppplVar63) {
          ppppppplVar44 = (long *******)((long)ppppppplVar33 + (long)ppppppplVar63);
          ppppppplVar40 = ppppppplVar33;
          ppppppplVar39 = ppppppplVar63;
          while (_memchr(ppppppplVar40,0x73,(char *)((long)ppppppplVar39 + -0x12)),
                ppppppplVar40 != (long *******)0x0) {
            if ((*ppppppplVar40 == (long ******)0x5520746375727473 &&
                ppppppplVar40[1] == (long ******)0x6f66696e55726573) &&
                *(long *)((long)ppppppplVar40 + 0xb) == 0x736d726f66696e55) {
              if ((ppppppplVar40 != ppppppplVar44) &&
                 (lVar34 = (long)ppppppplVar40 - (long)ppppppplVar33, lVar34 != -1)) {
                ppppppplVar40 = (long *******)(lVar34 + 0x13);
                lVar54 = (long)ppppppplVar63 - (long)ppppppplVar40;
                if ((ppppppplVar40 <= ppppppplVar63) && (0x12 < lVar54)) {
                  ppppppplVar63 = (long *******)((long)ppppppplVar33 + (long)ppppppplVar40);
                  goto LAB_10a16469c;
                }
              }
              break;
            }
            ppppppplVar40 = (long *******)((long)ppppppplVar40 + 1);
            ppppppplVar39 = (long *******)((long)ppppppplVar44 - (long)ppppppplVar40);
            if ((long)ppppppplVar39 < 0x13) break;
          }
        }
        goto LAB_10a1657bc;
      }
      FUN_10a08fd8c();
      if (iVar15 == 0) {
        lVar54 = *(long *)(param_2 + 8);
        lVar34 = (long)*(char *)(lVar54 + 0x6f);
        if (lVar34 < 0) {
          lVar60 = *(long *)(lVar54 + 0x58);
          lVar34 = *(long *)(lVar54 + 0x60);
        }
        else {
          lVar60 = lVar54 + 0x58;
        }
        func_0x000109237818(lVar60,lVar34);
        if (199 < (uint)lVar60) {
          lVar54 = *(long *)(param_2 + 8);
          lVar34 = (long)*(char *)(lVar54 + 0x6f);
          if (lVar34 < 0) {
            lVar60 = *(long *)(lVar54 + 0x58);
            lVar34 = *(long *)(lVar54 + 0x60);
          }
          else {
            lVar60 = lVar54 + 0x58;
          }
          func_0x000109237af0(&ppppppplStack_910,lVar60,lVar34);
          func_0x00010923a6e0(&ppppppplStack_770,&ppppppplStack_910);
          func_0x00010923ff08(&ppppppplStack_910);
        }
      }
      FUN_10a167238(&ppppppplStack_910,param_2,param_3);
      ppppppplStack_b8 = ppppppplStack_908;
      ppppppplStack_c0 = ppppppplStack_910;
      uStack_b0 = ppppppplStack_900;
      if (*(long *)(param_2 + 0x198) == 0) goto LAB_10a16582c;
      uVar28 = *(undefined8 *)(param_2 + 0x18);
      goto LAB_10a165838;
    }
    iVar15 = *(int *)(*(long *)(param_2 + 0x28) + 0x734);
    if (iVar15 == 2 || iVar15 == 7) goto LAB_10a162320;
    goto LAB_10a1659c8;
  }
  if (uVar6 == 1) {
    iVar15 = *(int *)(*(long *)(param_2 + 0x28) + 0x734);
    lVar34 = param_2;
    if (iVar15 < 7) {
      if (iVar15 != 2) {
LAB_10a162118:
        if (iVar15 != 3) goto LAB_10a162320;
        goto LAB_10a162120;
      }
LAB_10a162110:
      FUN_10a08fd8c();
      if (((uint)lVar34 >> 5 & 1) != 0) goto LAB_10a162118;
    }
    else {
      if (iVar15 != 8) {
        if (iVar15 != 7) goto LAB_10a162320;
        goto LAB_10a162110;
      }
LAB_10a162120:
      uVar14 = (uint)lVar34;
      FUN_10a08fd8c();
      if ((uVar14 >> 7 & 1) != 0) goto LAB_10a162320;
    }
    FUN_10a00946c(&UNK_10f63f8ce);
    goto LAB_10a165ea4;
  }
  if (uVar6 != 0) goto LAB_10a162320;
  puVar29 = &UNK_10f63f897;
  goto LAB_10a1659d0;
  while( true ) {
    pcVar56 = pcVar56 + 1;
    lVar54 = lVar54 + -1;
    pcVar47 = (char *)((long)ppppppplVar41 + uVar43);
    if (lVar54 == 0) break;
LAB_10a1631a0:
    pcVar47 = pcVar56;
    if (*pcVar56 == '\n') break;
  }
  lVar54 = (long)pcVar47 - (long)ppppppplVar41;
  if (pcVar47 == (char *)((long)ppppppplVar41 + uVar43)) {
    lVar54 = -1;
  }
LAB_10a163260:
  func_0x000107c2c4d8(&pppppppuStack_370,(long)ppppppplVar41 + lVar34,lVar54 - lVar34);
  uVar49 = (ulong)*puVar16;
  uVar43 = uVar49 + 4;
  pppppplVar23 = *ppppppplVar33;
  uVar61 = (long)ppppppplVar33[1] - (long)pppppplVar23;
  if (uVar43 < uVar61 || uVar43 - uVar61 == 0) {
    if (uVar43 < uVar61) {
      ppppppplVar33[1] = (long ******)((long)pppppplVar23 + uVar43);
    }
  }
  else {
    func_0x000107c27d58(ppppppplVar33,uVar43 - uVar61);
    pppppplVar23 = *ppppppplVar33;
  }
  func_0x000107c2b074(&ppppppplStack_770,&PTR_DAT_110c52758);
  ppppppplVar68 = uStack_760;
  ppppppplVar41 = ppppppplStack_368;
  if (-1 < (long)uStack_360) {
    ppppppplVar41 = (long *******)(uStack_360 >> 0x38);
  }
  ppppppplVar59 = ppppppplStack_768;
  if (-1 < (long)uStack_760) {
    ppppppplVar59 = (long *******)((ulong)uStack_760 >> 0x38);
  }
  if (ppppppplVar41 == ppppppplVar59) {
    pppppppuVar21 = pppppppuStack_370;
    if (-1 < (long)uStack_360) {
      pppppppuVar21 = &pppppppuStack_370;
    }
    ppppppplVar41 = ppppppplStack_770;
    if (-1 < (long)uStack_760) {
      ppppppplVar41 = (long *******)&ppppppplStack_770;
    }
    _memcmp(pppppppuVar21,ppppppplVar41);
    bVar13 = (int)pppppppuVar21 == 0;
  }
  else {
    bVar13 = false;
  }
  if ((long)ppppppplVar68 < 0) {
    __ZdlPv(ppppppplStack_770);
  }
  if (bVar13) {
    *(undefined4 *)((long)pppppplVar23 + uVar49) = 0;
  }
  else {
    func_0x000107c2b074(&ppppppplStack_770,&PTR_DAT_110c52730);
    ppppppplVar68 = uStack_760;
    ppppppplVar41 = ppppppplStack_368;
    if (-1 < (long)uStack_360) {
      ppppppplVar41 = (long *******)(uStack_360 >> 0x38);
    }
    ppppppplVar59 = ppppppplStack_768;
    if (-1 < (long)uStack_760) {
      ppppppplVar59 = (long *******)((ulong)uStack_760 >> 0x38);
    }
    if (ppppppplVar41 == ppppppplVar59) {
      pppppppuVar21 = pppppppuStack_370;
      if (-1 < (long)uStack_360) {
        pppppppuVar21 = &pppppppuStack_370;
      }
      ppppppplVar41 = ppppppplStack_770;
      if (-1 < (long)uStack_760) {
        ppppppplVar41 = (long *******)&ppppppplStack_770;
      }
      _memcmp(pppppppuVar21,ppppppplVar41);
      bVar13 = (int)pppppppuVar21 == 0;
    }
    else {
      bVar13 = false;
    }
    if ((long)ppppppplVar68 < 0) {
      __ZdlPv(ppppppplStack_770);
    }
    if (bVar13) {
      uVar30 = 1;
    }
    else {
      func_0x000107c2b074(&ppppppplStack_770,&PTR_DAT_110c52708);
      ppppppplVar68 = uStack_760;
      ppppppplVar41 = ppppppplStack_368;
      if (-1 < (long)uStack_360) {
        ppppppplVar41 = (long *******)(uStack_360 >> 0x38);
      }
      ppppppplVar59 = ppppppplStack_768;
      if (-1 < (long)uStack_760) {
        ppppppplVar59 = (long *******)((ulong)uStack_760 >> 0x38);
      }
      if (ppppppplVar41 == ppppppplVar59) {
        pppppppuVar21 = pppppppuStack_370;
        if (-1 < (long)uStack_360) {
          pppppppuVar21 = &pppppppuStack_370;
        }
        ppppppplVar41 = ppppppplStack_770;
        if (-1 < (long)uStack_760) {
          ppppppplVar41 = (long *******)&ppppppplStack_770;
        }
        _memcmp(pppppppuVar21,ppppppplVar41);
        bVar13 = (int)pppppppuVar21 == 0;
      }
      else {
        bVar13 = false;
      }
      if ((long)ppppppplVar68 < 0) {
        __ZdlPv(ppppppplStack_770);
      }
      if (!bVar13) {
        pppppppuVar21 = pppppppuStack_370;
        if (-1 < (long)uStack_360) {
          pppppppuVar21 = &pppppppuStack_370;
        }
        uVar30 = SUB84(pppppppuVar21,0);
        _atoi();
        *(undefined4 *)((long)pppppplVar23 + uVar49) = uVar30;
        goto LAB_10a1634d4;
      }
      uVar30 = 2;
    }
    *(undefined4 *)((long)pppppplVar23 + uVar49) = uVar30;
  }
  goto LAB_10a1634d4;
  while( true ) {
    pcVar56 = pcVar56 + 1;
    lVar54 = lVar54 + -1;
    pcVar47 = (char *)((long)ppppppplVar41 + uVar61);
    if (lVar54 == 0) break;
LAB_10a163228:
    pcVar47 = pcVar56;
    if (*pcVar56 == '\n') break;
  }
  lVar54 = (long)pcVar47 - (long)ppppppplVar41;
  if (pcVar47 == (char *)((long)ppppppplVar41 + uVar61)) {
    lVar54 = -1;
  }
LAB_10a163438:
  lVar54 = lVar54 - lVar34;
  if (lVar54 < 0) goto LAB_10a165ea4;
  piVar1 = (int *)((long)ppppppplVar41 + lVar34);
  if (lVar54 == 5) {
    if (*piVar1 != 0x736c6166 || (char)piVar1[1] != 'e') goto LAB_10a1634d4;
LAB_10a163520:
    *(undefined4 *)((long)pppppplVar23 + uVar43) = 0;
  }
  else {
    if (lVar54 == 4) {
      if (*piVar1 != 0x65757274) goto LAB_10a1634d4;
    }
    else {
      if (lVar54 != 1) goto LAB_10a1634d4;
      if ((char)*piVar1 != '1') {
        if ((char)*piVar1 != '0') goto LAB_10a1634d4;
        goto LAB_10a163520;
      }
    }
LAB_10a1634cc:
    *(undefined4 *)((long)pppppplVar23 + uVar43) = 1;
  }
LAB_10a1634d4:
  *puVar16 = *(int *)(ppppppplVar33 + 1) - *(int *)ppppppplVar33;
LAB_10a1634e4:
  puVar36 = &uStack_328;
  puVar16 = (uint *)&uStack_330;
  plVar18 = &lStack_340;
  bVar13 = !bVar12;
  ppppppplVar33 = &pppppplStack_2f8;
  ppppppplVar41 = &pppppplStack_2c8;
  bVar12 = false;
  if (bVar13) goto LAB_10a163528;
  goto LAB_10a162f64;
LAB_10a163528:
  uVar49 = (ulong)bStack_279;
  bVar12 = (char)bStack_279 < '\0';
  uVar61 = CONCAT17((undefined1)uStack_281,uStack_288);
  uVar43 = uVar61;
  ppppppplVar33 = ppppppplStack_290;
  if (!bVar12) {
    uVar43 = uVar49;
    ppppppplVar33 = (long *******)&ppppppplStack_290;
  }
  if (uVar43 < uVar62) goto LAB_10a163570;
  goto LAB_10a162e6c;
LAB_10a163570:
  FUN_10a096b38(&pppppplStack_388,*(long *)(param_2 + 8) + 0x70);
  lStack_398 = 0;
  uStack_3a0 = 0;
  uStack_3a8 = 0;
  lStack_3b0 = 0;
  uStack_3b8 = 0;
  pppppplStack_3c0 = (long ******)0x0;
  lStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3d8 = 0;
  lStack_3e0 = 0;
  uStack_3e8 = 0;
  ppppplStack_3f0 = (long *****)0x0;
  ppppppplStack_c0 = (long *******)((ulong)ppppppplStack_c0 & 0xffffffff00000000);
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  uStack_b0 = (long *******)0x0;
  uStack_a8 = 0;
  ppppppplStack_b8 = (long *******)0x0;
  auStack_a0[0] = 0;
  uStack_128 = 0;
  ppppppplStack_170 = (long *******)0x0;
  ppppppplStack_180 = (long *******)0x0;
  ppppppplStack_178 = (long *******)0x0;
  uStack_168 = (ulong)uStack_168._4_4_ << 0x20;
  puVar16 = &uStack_314;
  uStack_158 = 0;
  uStack_160 = 0;
  pppppplStack_148 = (long ******)0x0;
  uStack_150 = 0;
  puVar36 = &uStack_320;
  uStack_140 = 0;
  acStack_c8[0] = '\0';
  ppppppplStack_118 = (long *******)0x0;
  ppppppplStack_110 = (long *******)0x0;
  pppppplStack_120 = (long ******)0x0;
  uStack_108 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  pppppplStack_e8 = (long ******)0x0;
  uStack_f0 = 0;
  bVar12 = true;
  auStack_e0[0] = 0;
  ppppppplVar33 = (long *******)&ppppppplStack_310;
  ppppppplVar41 = (long *******)&ppppppplStack_2e0;
  ppppppplVar68 = (long *******)&ppppppplStack_c0;
  ppppppplVar59 = (long *******)&ppppppplStack_180;
  bVar13 = true;
  do {
    bVar48 = bVar13;
    pppppplVar23 = *ppppppplVar41;
    *(int *)ppppppplVar68 =
         (int)((ulong)((long)ppppppplVar41[1] - (long)pppppplVar23) >> 2) * -0x55555555;
    pppppplVar24 = *ppppppplVar33;
    pppppplVar58 = ppppppplVar33[1];
    ppppppplVar68[1] = pppppplVar23;
    ppppppplVar68[2] = (long ******)((long)pppppplVar58 - (long)pppppplVar24);
    ppppppplVar68[3] = pppppplVar24;
    uVar6 = *puVar16;
    if (2 < uVar6) goto LAB_10a165ea4;
    lVar34 = plVar17[(ulong)uVar6 * 2];
    if ((*(byte *)(lVar34 + 0x40) & 1) == 0) goto LAB_10a165ea4;
    *(uint *)((long)ppppppplVar59 + 4) = uVar6;
    puVar22 = (undefined8 *)&UNK_10f62a458;
    if ((uVar6 != 0) && (puVar22 = puVar66, uVar6 != 1)) {
      FUN_10a00946c(&UNK_10f640875);
      goto LAB_10a165ea4;
    }
    ppppppplVar41 = *(long ********)(lVar34 + 0x30);
    for (ppppppplVar33 = *(long ********)(lVar34 + 0x28); ppppppplVar41 != ppppppplVar33;
        ppppppplVar33 = ppppppplVar33 + 7) {
      ppppppplStack_768 = (long *******)(long)*(char *)((long)ppppppplVar33 + 0x17);
      ppppppplStack_770 = ppppppplVar33;
      if ((long)ppppppplStack_768 < 0) {
        ppppppplStack_768 = (long *******)ppppppplVar33[1];
        ppppppplStack_770 = (long *******)*ppppppplVar33;
      }
      ppppppplVar63 = (long *******)&ppppppplStack_770;
      FUN_10a159054(ppppppplVar63,puVar22,9);
      ppppppplVar40 = ppppppplStack_768;
      ppppppplVar44 = ppppppplStack_770;
      if ((int)ppppppplVar63 != 0) goto LAB_10a1636f8;
    }
    ppppppplVar40 = (long *******)0x0;
    ppppppplVar44 = (long *******)"";
LAB_10a1636f8:
    ppppppplVar59[1] = (long ******)ppppppplVar44;
    ppppppplVar59[2] = (long ******)ppppppplVar40;
    pppppplVar23 = *ppppppplVar68;
    pppppplVar58 = ppppppplVar68[3];
    pppppplVar24 = ppppppplVar68[2];
    ppppppplVar59[4] = ppppppplVar68[1];
    ppppppplVar59[3] = pppppplVar23;
    ppppppplVar59[6] = pppppplVar58;
    ppppppplVar59[5] = pppppplVar24;
    ppppppplVar59[7] = (long ******)plVar17[(ulong)uVar6 * 2];
    ppppppplStack_770 = (long *******)((ulong)ppppppplStack_770 & 0xffffffffffffff00);
    uStack_740 = uStack_740 & 0xffffffffffffff00;
    if (((pppppplStack_230 == (long ******)0x0) &&
        ((lVar34 = *plVar35, lVar34 == 0 || (*(char *)(lVar34 + 0x78) != '\x01')))) ||
       (puVar16 = puVar32, FUN_10a166bb0(), ((ulong)puVar16 & 1) != 0)) {
LAB_10a163bfc:
      bVar12 = false;
    }
    else {
      uVar61 = *puVar36;
      lVar34 = *(long *)(param_2 + 0x90);
      uVar43 = (*(long *)(param_2 + 0x98) - lVar34 >> 3) * -0x3333333333333333;
      if (uVar43 < uVar61 || uVar43 - uVar61 == 0) goto LAB_10a165ea4;
      ppppplStack_1a8 = (long *****)0x0;
      ppppplStack_1b0 = (long *****)0x0;
      pppppplStack_1b8 = (long ******)0x0;
      ppppppplStack_1c0 = (long *******)0x0;
      ppppppplStack_1c8 = (long *******)0x0;
      ppppppplStack_1d0 = (long *******)0x0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      pppplStack_1f8 = (long ****)0x0;
      ppppppplStack_200 = (long *******)0x0;
      uStack_1e0 = 0x3f800000;
      if (*(int *)(ppppppplVar59 + 3) != 0) {
        lVar54 = 0;
        uVar43 = 0;
        do {
          puVar2 = (undefined4 *)((long)ppppppplVar59[4] + lVar54);
          if (puVar2[2] == 3) {
            uVar30 = *(undefined4 *)((long)ppppppplVar59[6] + (ulong)(uint)puVar2[1]);
            ppppppplVar33 = (long *******)&ppppppplStack_200;
            FUN_10a185330(ppppppplVar33,*puVar2);
          }
          else {
            if (puVar2[2] != 1) {
              ppppppplStack_910 = (long *******)((ulong)ppppppplStack_910 & 0xffffffffffffff00);
              ppppplStack_8e0 = (long *****)((ulong)ppppplStack_8e0 & 0xffffffffffffff00);
              FUN_10a186654(&ppppppplStack_200);
              if ((long)ppppplStack_1a8 < 0) {
                __ZdlPv(pppppplStack_1b8);
              }
              goto LAB_10a163ac4;
            }
            uVar30 = *(undefined4 *)((long)ppppppplVar59[6] + (ulong)(uint)puVar2[1]);
            ppppppplVar33 = (long *******)&ppppppplStack_200;
            FUN_10a185330(ppppppplVar33,*puVar2);
          }
          *(undefined4 *)((long)ppppppplVar33 + 0x14) = uVar30;
          uVar43 = uVar43 + 1;
          lVar54 = lVar54 + 0xc;
        } while (uVar43 < *(uint *)(ppppppplVar59 + 3));
      }
      for (plVar18 = *(long **)(lVar34 + uVar61 * 0x28 + 0x10); plVar18 != (long *)0x0;
          plVar18 = (long *)*plVar18) {
        if (pppplStack_1f8 != (long ****)0x0) {
          uVar6 = *(uint *)(plVar18 + 8);
          pppplVar45 = (long ****)(ulong)uVar6;
          uVar43 = (long)pppplStack_1f8 - 1;
          uVar14 = (uint)pppplStack_1f8;
          if (((ulong)pppplStack_1f8 & uVar43) == 0) {
            pppplVar50 = (long ****)(ulong)(uVar14 - 1 & uVar6);
          }
          else {
            pppplVar50 = pppplVar45;
            if (pppplStack_1f8 <= pppplVar45) {
              uVar10 = 0;
              if (uVar14 != 0) {
                uVar10 = uVar6 / uVar14;
              }
              pppplVar50 = (long ****)(ulong)(uVar6 - uVar10 * uVar14);
            }
          }
          if ((ppppppplStack_200[(long)pppplVar50] != (long ******)0x0) &&
             (ppppplVar55 = *ppppppplStack_200[(long)pppplVar50], ppppplVar55 != (long *****)0x0)) {
LAB_10a16383c:
            pppplVar53 = ppppplVar55[1];
            if (pppplVar53 == pppplVar45) {
              if (*(uint *)(ppppplVar55 + 2) != uVar6) goto LAB_10a163880;
              pppppplStack_218 = (long ******)0x0;
              ppppppplStack_220 = (long *******)0x0;
              uStack_208 = 0;
              pppppplStack_210 = (long ******)0x0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (&ppppppplStack_220,plVar18 + 2);
              uStack_208 = *(undefined4 *)((long)ppppplVar55 + 0x14);
              if (ppppppplStack_1c0 <= ppppppplStack_1c8) {
                lVar34 = (long)ppppppplStack_1c8 - (long)ppppppplStack_1d0;
                uVar43 = (lVar34 >> 5) + 1;
                if (uVar43 >> 0x3b == 0) {
                  uVar61 = (long)ppppppplStack_1c0 - (long)ppppppplStack_1d0 >> 4;
                  if (uVar61 <= uVar43) {
                    uVar61 = uVar43;
                  }
                  if (0x7fffffffffffffdf <
                      (ulong)((long)ppppppplStack_1c0 - (long)ppppppplStack_1d0)) {
                    uVar61 = 0x7ffffffffffffff;
                  }
                  ppppppplVar33 = (long *******)&ppppppplStack_1d0;
                  FUN_10a09b88c();
                  puVar22 = (undefined8 *)((long)ppppppplVar33 + lVar34);
                  puVar22[2] = pppppplStack_210;
                  puVar22[1] = pppppplStack_218;
                  *puVar22 = ppppppplStack_220;
                  ppppppplVar40 = ppppppplStack_1c8;
                  ppppppplVar68 = ppppppplStack_1d0;
                  pppppplStack_210 = (long ******)0x0;
                  pppppplStack_218 = (long ******)0x0;
                  ppppppplStack_220 = (long *******)0x0;
                  *(undefined4 *)(puVar22 + 3) = uStack_208;
                  ppppppplStack_198 = (long *******)&ppppppplStack_9b0;
                  ppppppplStack_190 = (long *******)&ppppppplStack_9a0;
                  ppppppplVar63 =
                       (long *******)
                       ((long)puVar22 + ((long)ppppppplStack_1d0 - (long)ppppppplStack_1c8));
                  ppppppplVar41 = ppppppplStack_1d0;
                  ppppppplStack_9a0 = ppppppplVar63;
                  ppppppplStack_1a0 = (long *******)&ppppppplStack_1d0;
                  ppppppplStack_9b0 = ppppppplVar63;
                  if ((long)ppppppplStack_1d0 - (long)ppppppplStack_1c8 == 0) {
                    uStack_188 = 1;
                  }
                  else {
                    do {
                      pppppplVar23 = *ppppppplVar41;
                      pppppplVar24 = ppppppplVar41[1];
                      ppppppplStack_9a0[2] = ppppppplVar41[2];
                      ppppppplStack_9a0[1] = pppppplVar24;
                      *ppppppplStack_9a0 = pppppplVar23;
                      ppppppplVar41[1] = (long ******)0x0;
                      ppppppplVar41[2] = (long ******)0x0;
                      *ppppppplVar41 = (long ******)0x0;
                      *(undefined4 *)(ppppppplStack_9a0 + 3) = *(undefined4 *)(ppppppplVar41 + 3);
                      ppppppplVar41 = ppppppplVar41 + 4;
                      ppppppplStack_9a0 = ppppppplStack_9a0 + 4;
                    } while (ppppppplVar41 != ppppppplVar40);
                    uStack_188 = 1;
                    do {
                      if (*(char *)((long)ppppppplVar68 + 0x17) < '\0') {
                        __ZdlPv(*ppppppplVar68);
                      }
                      ppppppplVar68 = ppppppplVar68 + 4;
                    } while (ppppppplVar68 != ppppppplVar40);
                  }
                  ppppppplVar41 = (long *******)(puVar22 + 4);
                  FUN_10a09b988(&ppppppplStack_1a0);
                  bVar13 = ppppppplStack_1d0 != (long *******)0x0;
                  ppppppplStack_1d0 = ppppppplVar63;
                  ppppppplStack_1c0 = ppppppplVar33 + uVar61 * 4;
                  if (bVar13) {
                    ppppppplStack_1c8 = ppppppplVar41;
                    __ZdlPv();
                  }
                  ppppppplStack_1c8 = ppppppplVar41;
                  if ((long)pppppplStack_210 < 0) {
                    __ZdlPv(ppppppplStack_220);
                  }
                  goto LAB_10a163a3c;
                }
                FUN_10a09b878();
                goto LAB_10a165ea4;
              }
              ppppppplStack_1c8[2] = pppppplStack_210;
              ppppppplStack_1c8[1] = pppppplStack_218;
              *ppppppplStack_1c8 = (long ******)ppppppplStack_220;
              pppppplStack_210 = (long ******)0x0;
              pppppplStack_218 = (long ******)0x0;
              ppppppplStack_220 = (long *******)0x0;
              *(undefined4 *)(ppppppplStack_1c8 + 3) = uStack_208;
              ppppppplStack_1c8 = ppppppplStack_1c8 + 4;
            }
            else {
              if (((ulong)pppplStack_1f8 & uVar43) == 0) {
                pppplVar53 = (long ****)((ulong)pppplVar53 & uVar43);
              }
              else if (pppplStack_1f8 <= pppplVar53) {
                uVar61 = 0;
                if (pppplStack_1f8 != (long ****)0x0) {
                  uVar61 = (ulong)pppplVar53 / (ulong)pppplStack_1f8;
                }
                pppplVar53 = (long ****)((long)pppplVar53 - uVar61 * (long)pppplStack_1f8);
              }
              if (pppplVar53 == pppplVar50) goto LAB_10a163880;
            }
          }
        }
LAB_10a163a3c:
      }
      lVar34 = 0;
      if (ppppppplStack_1c8 != ppppppplStack_1d0) {
        lVar34 = LZCOUNT((long)ppppppplStack_1c8 - (long)ppppppplStack_1d0 >> 5) * -2 + 0x7e;
      }
      FUN_10a1856f0(ppppppplStack_1d0,ppppppplStack_1c8,lVar34,1);
      FUN_10a186654(&ppppppplStack_200);
      func_0x000107c2c4d8(&pppppplStack_1b8,ppppppplVar59[1],ppppppplVar59[2]);
      ppppppplStack_908 = ppppppplStack_1c8;
      ppppppplStack_910 = ppppppplStack_1d0;
      ppppppplStack_900 = ppppppplStack_1c0;
      ppppppplStack_1c0 = (long *******)0x0;
      ppppppplStack_1c8 = (long *******)0x0;
      ppppppplStack_1d0 = (long *******)0x0;
      ppppplStack_8f0 = ppppplStack_1b0;
      pppppplStack_8f8 = pppppplStack_1b8;
      ppppplStack_8e8 = ppppplStack_1a8;
      pppppplStack_1b8 = (long ******)0x0;
      ppppplStack_1b0 = (long *****)0x0;
      ppppplStack_1a8 = (long *****)0x0;
      ppppplStack_8e0 = (long *****)CONCAT71(ppppplStack_8e0._1_7_,1);
LAB_10a163ac4:
      ppppppplStack_200 = (long *******)&ppppppplStack_1d0;
      func_0x00010a09ba00(&ppppppplStack_200);
      if ((char)uStack_740 == (char)ppppplStack_8e0) {
        if ((char)uStack_740 != '\0') {
          func_0x00010a18669c(&ppppppplStack_770);
          ppppppplStack_768 = ppppppplStack_908;
          ppppppplStack_770 = ppppppplStack_910;
          uStack_760 = ppppppplStack_900;
          ppppppplStack_908 = (long *******)0x0;
          ppppppplStack_900 = (long *******)0x0;
          ppppppplStack_910 = (long *******)0x0;
          if ((long)ppppplStack_748 < 0) {
            __ZdlPv(ppppppplStack_758);
          }
          ppppplStack_750 = ppppplStack_8f0;
          ppppppplStack_758 = (long *******)pppppplStack_8f8;
          ppppplStack_748 = ppppplStack_8e8;
          ppppplStack_8e8 = (long *****)((ulong)ppppplStack_8e8 & 0xffffffffffffff);
          pppppplStack_8f8 = (long ******)((ulong)pppppplStack_8f8 & 0xffffffffffffff00);
        }
      }
      else if ((char)uStack_740 == '\0') {
        ppppppplStack_768 = ppppppplStack_908;
        ppppppplStack_770 = ppppppplStack_910;
        uStack_760 = ppppppplStack_900;
        ppppppplStack_908 = (long *******)0x0;
        ppppppplStack_900 = (long *******)0x0;
        ppppppplStack_910 = (long *******)0x0;
        ppppplStack_750 = ppppplStack_8f0;
        ppppppplStack_758 = (long *******)pppppplStack_8f8;
        ppppplStack_748 = ppppplStack_8e8;
        pppppplStack_8f8 = (long ******)0x0;
        ppppplStack_8f0 = (long *****)0x0;
        ppppplStack_8e8 = (long *****)0x0;
        uStack_740 = CONCAT71(uStack_740._1_7_,1);
      }
      else {
        if ((long)ppppplStack_748 < 0) {
          __ZdlPv(ppppppplStack_758);
        }
        ppppppplStack_1d0 = (long *******)&ppppppplStack_770;
        func_0x00010a09ba00(&ppppppplStack_1d0);
        uStack_740 = uStack_740 & 0xffffffffffffff00;
      }
      func_0x00010a1866d4(&ppppppplStack_910);
      if ((char)uStack_740 != '\x01') goto LAB_10a163bfc;
      lVar34 = (long)ppppppplStack_768 - (long)ppppppplStack_770 >> 5;
      if (*(int *)((long)ppppppplVar59 + 4) == 0) {
        FUN_10a186724(&pppppplStack_3c0,ppppppplStack_770,ppppppplStack_768,lVar34);
        puVar22 = &uStack_3a8;
      }
      else {
        FUN_10a186724(&ppppplStack_3f0,ppppppplStack_770,ppppppplStack_768,lVar34);
        puVar22 = &uStack_3d8;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (puVar22,&ppppppplStack_758);
    }
    func_0x00010a1866d4(&ppppppplStack_770);
    puVar16 = &uStack_318;
    puVar36 = &uStack_328;
    ppppppplVar33 = &pppppplStack_2f8;
    ppppppplVar41 = &pppppplStack_2c8;
    ppppppplVar68 = (long *******)auStack_a0;
    ppppppplVar59 = &pppppplStack_120;
    bVar13 = false;
  } while (bVar48);
  lVar34 = 0;
  uStack_700 = uStack_700 & 0xffffffff00000000;
  uStack_6a0 = 0xffffffffffffffff;
  auStack_730[3] = 0;
  auStack_730[2] = 0;
  auStack_730[5] = 0;
  auStack_730[4] = 0;
  uStack_738 = 0;
  uStack_740 = 0;
  auStack_730[1] = 0;
  auStack_730[0] = 0;
  ppppppplStack_758 = (long *******)0x0;
  uStack_760 = (long *******)0x0;
  ppppplStack_748 = (long *****)0x0;
  ppppplStack_750 = (long *****)0x0;
  ppppppplStack_768 = (long *******)0x0;
  ppppppplStack_770 = (long *******)0x0;
  uStack_6f0 = 0;
  uStack_6f8 = 0;
  uStack_6e0 = 0;
  uStack_6e8 = 0;
  uStack_6d0 = 0;
  uStack_6d8 = 0;
  uStack_6c0 = 0;
  uStack_6c8 = 0;
  uStack_6b0 = 0;
  uStack_6b8 = 0;
  uStack_6a8 = 0;
  uStack_690 = 0;
  uStack_698 = 0;
  uStack_680 = 0;
  uStack_688 = 0;
  uStack_674 = 0;
  uStack_670 = 0;
  uStack_67c = 0;
  uStack_678 = 0;
  auStack_638[0x1d] = 0;
  auStack_638[0x1c] = 0;
  auStack_638[0x1f] = 0;
  auStack_638[0x1e] = 0;
  auStack_638[0x19] = 0;
  auStack_638[0x18] = 0;
  auStack_638[0x1b] = 0;
  auStack_638[0x1a] = 0;
  auStack_638[0x15] = 0;
  auStack_638[0x14] = 0;
  auStack_638[0x17] = 0;
  auStack_638[0x16] = 0;
  auStack_638[0x11] = 0;
  auStack_638[0x10] = 0;
  auStack_638[0x13] = 0;
  auStack_638[0x12] = 0;
  auStack_638[0xd] = 0;
  auStack_638[0xc] = 0;
  auStack_638[0xf] = 0;
  auStack_638[0xe] = 0;
  auStack_638[9] = 0;
  auStack_638[8] = 0;
  auStack_638[0xb] = 0;
  auStack_638[10] = 0;
  auStack_638[5] = 0;
  auStack_638[4] = 0;
  auStack_638[7] = 0;
  auStack_638[6] = 0;
  auStack_638[1] = 0;
  auStack_638[0] = 0;
  auStack_638[3] = 0;
  auStack_638[2] = 0;
  uStack_650 = 0;
  uStack_658 = 0;
  uStack_640 = 0;
  uStack_648 = 0;
  uStack_660 = 0;
  uStack_668 = 0;
  do {
    *(undefined8 *)((long)auStack_638 + lVar34 + 0x10) = 0;
    *(undefined8 *)((long)auStack_638 + lVar34 + 8) = 0;
    *(undefined8 *)((long)auStack_638 + lVar34) = 0;
    *(undefined8 *)((long)auStack_638 + lVar34 + 0x18) = 0xffffffff;
    lVar34 = lVar34 + 0x20;
  } while (lVar34 != 0x100);
  auStack_638[0x29] = 0;
  auStack_638[0x28] = 0;
  auStack_638[0x2b] = 0;
  auStack_638[0x2a] = 0;
  auStack_638[0x25] = 0;
  auStack_638[0x24] = 0;
  auStack_638[0x27] = 0;
  auStack_638[0x26] = 0;
  auStack_638[0x21] = 0;
  auStack_638[0x20] = 0;
  auStack_638[0x23] = 0;
  auStack_638[0x22] = 0;
  uStack_4d8 = 0;
  pppppplStack_4c8 = (long ******)0x0;
  ppppppplStack_4d0 = (long *******)0x0;
  ppppppplStack_4b8 = (long *******)0x0;
  pppppplStack_4c0 = (long ******)0x0;
  pppppplStack_4a8 = (long ******)0x0;
  pppppplStack_4b0 = (long ******)0x0;
  func_0x000107c2b054(&ppppppplStack_910,"");
  func_0x000107c2b054(&ppppppplStack_1d0,"");
  FUN_10a107e2c(auStack_4a0,&ppppppplStack_910,&ppppppplStack_1d0,0);
  if ((long)ppppppplStack_1c0 < 0) {
    __ZdlPv(ppppppplStack_1d0);
  }
  if ((long)ppppppplStack_900 < 0) {
    __ZdlPv(ppppppplStack_910);
  }
  uStack_410 = 0;
  uStack_418 = 0;
  uStack_400 = 0;
  uStack_408 = 0;
  ppppppplStack_460 = (long *******)0x0;
  ppppppplStack_468 = (long *******)0x0;
  uStack_450 = 0;
  ppppppplStack_458 = (long *******)0x0;
  uStack_440 = 0;
  uStack_448 = 0;
  uStack_430 = 0;
  uStack_438 = 0;
  uStack_427 = 0;
  uStack_42f = 0;
  uStack_428 = 0;
  uStack_3f8 = 0x3f800000;
  FUN_10a15d66c(&ppppppplStack_770,plVar42);
  func_0x00010a15e154(auStack_730 + 4,param_3 + 0x28);
  uStack_700 = CONCAT44(uStack_700._4_4_,*(undefined4 *)(param_3 + 0x38));
  if (&uStack_700 == (ulong *)(param_3 + 0x38)) {
    uStack_6d0 = *(undefined8 *)(param_3 + 0x68);
    uStack_6a0 = *(undefined8 *)(param_3 + 0x98);
  }
  else {
    uStack_6d8 = 0;
    if (*(long *)(param_3 + 0x60) != 0) {
      lVar34 = param_3 + 0x40;
      lVar54 = *(long *)(param_3 + 0x60) << 2;
      do {
        func_0x00010928bcfc(&uStack_6f8,lVar34);
        lVar34 = lVar34 + 4;
        lVar54 = lVar54 + -4;
      } while (lVar54 != 0);
    }
    uStack_6d0 = *(undefined8 *)(param_3 + 0x68);
    uStack_6a8 = 0;
    if (*(long *)(param_3 + 0x90) != 0) {
      lVar34 = param_3 + 0x70;
      lVar54 = *(long *)(param_3 + 0x90) << 2;
      do {
        func_0x000109261ecc(&uStack_6c8,lVar34);
        lVar34 = lVar34 + 4;
        lVar54 = lVar54 + -4;
      } while (lVar54 != 0);
    }
    uStack_6a0 = *(undefined8 *)(param_3 + 0x98);
    uStack_678 = 0;
    uStack_674 = 0;
    if (*(long *)(param_3 + 0xc0) != 0) {
      lVar34 = param_3 + 0xa0;
      lVar54 = *(long *)(param_3 + 0xc0) << 2;
      do {
        func_0x000109261ecc(&uStack_698,lVar34);
        lVar34 = lVar34 + 4;
        lVar54 = lVar54 + -4;
      } while (lVar54 != 0);
    }
  }
  uStack_4d8 = uStack_4d8 & 0xff00;
  FUN_10a166d50(&ppppppplStack_910,&pppppppuStack_2b0);
  if ((long)ppppppplStack_458 < 0) {
    __ZdlPv(ppppppplStack_468);
  }
  ppppppplStack_460 = ppppppplStack_908;
  ppppppplStack_468 = ppppppplStack_910;
  ppppppplStack_458 = ppppppplStack_900;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(auStack_4a0,puVar32);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (auStack_488,puVar31 + 0x22);
  uStack_470 = puVar31[0x28];
  if ((*(uint *)(*plVar42 + 0x734) & 0xfffffffe) == 2) {
    lVar54 = *(long *)(param_2 + 8);
    lVar34 = (long)*(char *)(lVar54 + 0x6f);
    if (lVar34 < 0) {
      lVar60 = *(long *)(lVar54 + 0x58);
      lVar34 = *(long *)(lVar54 + 0x60);
    }
    else {
      lVar60 = lVar54 + 0x58;
    }
    func_0x000109237af0(&ppppppplStack_910,lVar60,lVar34);
    func_0x00010923a6e0(&uStack_670,&ppppppplStack_910);
    func_0x00010923ff08(&ppppppplStack_910);
  }
  if (bVar12) {
    FUN_10a09663c(&ppppppplStack_910,&pppppplStack_388,&pppppplStack_3c0,&ppppplStack_3f0);
    pppppplVar24 = pppppplStack_230;
    ppppplVar55 = ppppplStack_8a0;
    pppppplVar23 = pppppplStack_8f8;
    lVar34 = *plVar35;
    if ((lVar34 == 0) || (*(char *)(lVar34 + 0x78) != '\x01')) {
      if (pppppplStack_230 != (long ******)0x0) {
        if (((ulong)pppppplStack_230[8] & 1) == 0) goto LAB_10a165ea4;
        FUN_10a0963a8(&ppppppplStack_1d0,&ppppppplStack_910,ppppplStack_898,&ppppplStack_8b0);
        FUN_10a0963a8(&ppppppplStack_200,&ppppplStack_8e0,ppppplStack_898,&ppppplStack_8b0);
        ppppppplVar33 = ppppppplStack_1c8;
        ppppppplVar41 = ppppppplStack_1d0;
        if (-1 < (long)ppppppplStack_1c0) {
          ppppppplVar33 = (long *******)((ulong)ppppppplStack_1c0 >> 0x38);
          ppppppplVar41 = (long *******)&ppppppplStack_1d0;
        }
        ppppppplVar68 = (long *******)pppppplVar24[5];
        ppppppplVar59 = (long *******)pppppplVar24[6];
        if (ppppppplVar59 == ppppppplVar68) {
          ppppppplStack_998 = (long *******)0x0;
          ppppppplVar63 = (long *******)"";
        }
        else {
          do {
            ppppppplStack_198 = (long *******)(long)*(char *)((long)ppppppplVar68 + 0x17);
            ppppppplStack_1a0 = ppppppplVar68;
            if ((long)ppppppplStack_198 < 0) {
              ppppppplStack_198 = (long *******)ppppppplVar68[1];
              ppppppplStack_1a0 = (long *******)*ppppppplVar68;
            }
            ppppppplVar40 = (long *******)&ppppppplStack_1a0;
            FUN_10a159054(ppppppplVar40,ppppppplVar41,ppppppplVar33);
            ppppppplStack_998 = ppppppplStack_198;
            ppppppplVar63 = ppppppplStack_1a0;
            if ((int)ppppppplVar40 != 0) goto LAB_10a16440c;
            ppppppplVar68 = ppppppplVar68 + 7;
          } while (ppppppplVar68 != ppppppplVar59);
          ppppppplStack_998 = (long *******)0x0;
          ppppppplVar63 = (long *******)"";
        }
LAB_10a16440c:
        pppplVar45 = pppplStack_1f8;
        ppppppplVar33 = ppppppplStack_200;
        if (-1 < (long)uStack_1f0) {
          pppplVar45 = (long ****)(uStack_1f0 >> 0x38);
          ppppppplVar33 = (long *******)&ppppppplStack_200;
        }
        ppppppplVar41 = (long *******)pppppplVar24[5];
        ppppppplVar68 = (long *******)pppppplVar24[6];
        ppppppplStack_9a0 = ppppppplVar63;
        if (ppppppplVar68 != ppppppplVar41) {
          do {
            ppppppplStack_198 = (long *******)(long)*(char *)((long)ppppppplVar41 + 0x17);
            ppppppplStack_1a0 = ppppppplVar41;
            if ((long)ppppppplStack_198 < 0) {
              ppppppplStack_198 = (long *******)ppppppplVar41[1];
              ppppppplStack_1a0 = (long *******)*ppppppplVar41;
            }
            ppppppplVar59 = (long *******)&ppppppplStack_1a0;
            FUN_10a159054(ppppppplVar59,ppppppplVar33,pppplVar45);
            if (((ulong)ppppppplVar59 & 1) != 0) {
              ppppppplStack_9a8 = ppppppplStack_198;
              ppppppplStack_9b0 = ppppppplStack_1a0;
              if ((ppppppplStack_998 != (long *******)0x0) &&
                 (ppppppplStack_198 != (long *******)0x0)) {
                FUN_10a09695c(&ppppppplStack_1a0,&ppppppplStack_910);
                pppppplVar23 = (long ******)&pppppplStack_270;
                FUN_10a195144(pppppplVar23,&ppppppplStack_1a0);
                if (pppppplVar23 != (long ******)0x0) {
                  FUN_10a0e46d8(&uStack_670,pppppplVar23 + 5);
                  uStack_108 = 0;
                  uStack_f8 = 0;
                  uStack_f0 = 0;
                  uStack_100 = 0;
                  uStack_168 = (ulong)uStack_104 << 0x20;
                  uStack_160 = 0;
                  uStack_150 = 0;
                  uStack_158 = 0;
                  pppppplStack_e8 = pppppplStack_230;
                  pppppplStack_148 = pppppplStack_230;
                  func_0x0001098998d4(&ppppppplStack_220,&ppppppplStack_9a0);
                  if ((long)pppppplStack_4c0 < 0) {
                    __ZdlPv(ppppppplStack_4d0);
                  }
                  pppppplStack_4c8 = pppppplStack_218;
                  ppppppplStack_4d0 = ppppppplStack_220;
                  pppppplStack_4c0 = pppppplStack_210;
                  func_0x0001098998d4(&ppppppplStack_220,&ppppppplStack_9b0);
                  if ((long)pppppplStack_4a8 < 0) {
                    __ZdlPv(ppppppplStack_4b8);
                  }
                  pppppplStack_4b0 = pppppplStack_218;
                  ppppppplStack_4b8 = ppppppplStack_220;
                  pppppplStack_4a8 = pppppplStack_210;
                  ppppppplVar33 = ppppppplStack_4d0;
                  if (-1 < (long)pppppplStack_4c0) {
                    ppppppplVar33 = (long *******)&ppppppplStack_4d0;
                  }
                  ppppppplVar41 = ppppppplVar33;
                  _strlen();
                  ppppppplStack_118 = ppppppplStack_4b8;
                  if (-1 < (long)pppppplStack_4a8) {
                    ppppppplStack_118 = (long *******)&ppppppplStack_4b8;
                  }
                  ppppppplVar68 = ppppppplStack_118;
                  ppppppplStack_178 = ppppppplVar33;
                  ppppppplStack_170 = ppppppplVar41;
                  _strlen();
                  ppppppplStack_110 = ppppppplVar68;
                  func_0x00010a15e1d0(&uStack_740,uStack_240,plStack_238);
                  uStack_4d8 = CONCAT11(1,(undefined1)uStack_4d8);
                  FUN_10a166eac(auStack_4a0);
                }
                if ((long)ppppppplStack_190 < 0) {
                  __ZdlPv(ppppppplStack_1a0);
                }
              }
              break;
            }
            ppppppplVar41 = ppppppplVar41 + 7;
          } while (ppppppplVar41 != ppppppplVar68);
        }
        if ((long)uStack_1f0 < 0) {
          __ZdlPv(ppppppplStack_200);
        }
        if ((long)ppppppplStack_1c0 < 0) {
          __ZdlPv(ppppppplStack_1d0);
        }
      }
    }
    else {
      ppppppplStack_980 = ppppppplStack_900;
      ppppplStack_968 = ppppplStack_8e8;
      ppppplStack_950 = ppppplStack_8d0;
      ppppppplStack_988 = ppppppplStack_908;
      ppppppplStack_990 = ppppppplStack_910;
      ppppppplStack_900 = (long *******)0x0;
      pppppplStack_8f8 = (long ******)0x0;
      ppppppplStack_910 = (long *******)0x0;
      ppppppplStack_908 = (long *******)0x0;
      ppppplStack_970 = ppppplStack_8f0;
      pppppplStack_978 = pppppplVar23;
      ppppplStack_8f0 = (long *****)0x0;
      ppppplStack_8e8 = (long *****)0x0;
      ppppplStack_958 = ppppplStack_8d8;
      ppppplStack_960 = ppppplStack_8e0;
      ppppplStack_8e0 = (long *****)0x0;
      ppppplStack_8d8 = (long *****)0x0;
      ppppplStack_938 = ppppplStack_8b8;
      ppppplStack_940 = ppppplStack_8c0;
      ppppplStack_948 = ppppplStack_8c8;
      ppppplStack_8d0 = (long *****)0x0;
      ppppplStack_8c8 = (long *****)0x0;
      ppppplStack_8c0 = (long *****)0x0;
      ppppplStack_8b8 = (long *****)0x0;
      ppppplStack_928 = ppppplStack_8a8;
      ppppplStack_930 = ppppplStack_8b0;
      ppppplStack_8b0 = (long *****)0x0;
      ppppplStack_8a8 = (long *****)0x0;
      ppppplStack_8a0 = (long *****)0x0;
      ppppplStack_920 = ppppplVar55;
      ppppplStack_918 = ppppplStack_898;
      __ZNSt3__15mutex4lockEv(lVar34 + 0x38);
      ppppppplVar33 = (long *******)(lVar34 + 0x80);
      ppppppplVar41 = ppppppplVar33;
      func_0x000107c2b05c(ppppppplVar33,&pppppplStack_388);
      ppppppplVar59 = *(long ********)(lVar34 + 0x88);
      ppppppplVar68 = &pppppplStack_120;
      if (ppppppplVar59 != (long *******)0x0) {
        pcVar56 = (char *)((long)ppppppplVar59 + -1);
        if (((ulong)ppppppplVar59 & (ulong)pcVar56) == 0) {
          ppppppplVar68 = (long *******)((ulong)pcVar56 & (ulong)ppppppplVar41);
        }
        else {
          ppppppplVar68 = ppppppplVar41;
          if (ppppppplVar59 <= ppppppplVar41) {
            uVar43 = 0;
            if (ppppppplVar59 != (long *******)0x0) {
              uVar43 = (ulong)ppppppplVar41 / (ulong)ppppppplVar59;
            }
            ppppppplVar68 = (long *******)((long)ppppppplVar41 - uVar43 * (long)ppppppplVar59);
          }
        }
        if ((*ppppppplVar33)[(long)ppppppplVar68] != (long *****)0x0) {
          for (ppppppplVar63 = (long *******)*(*ppppppplVar33)[(long)ppppppplVar68];
              ppppppplVar63 != (long *******)0x0; ppppppplVar63 = (long *******)*ppppppplVar63) {
            ppppppplVar40 = (long *******)ppppppplVar63[1];
            if (ppppppplVar40 == ppppppplVar41) {
              ppppppplVar40 = ppppppplVar33;
              func_0x000107c2b068(ppppppplVar33,ppppppplVar63 + 2,&pppppplStack_388);
              if (((ulong)ppppppplVar40 & 1) != 0) goto LAB_10a164bc4;
            }
            else {
              if (((ulong)ppppppplVar59 & (ulong)pcVar56) == 0) {
                ppppppplVar40 = (long *******)((ulong)ppppppplVar40 & (ulong)pcVar56);
              }
              else if (ppppppplVar59 <= ppppppplVar40) {
                uVar43 = 0;
                if (ppppppplVar59 != (long *******)0x0) {
                  uVar43 = (ulong)ppppppplVar40 / (ulong)ppppppplVar59;
                }
                ppppppplVar40 = (long *******)((long)ppppppplVar40 - uVar43 * (long)ppppppplVar59);
              }
              if (ppppppplVar40 != ppppppplVar68) break;
            }
          }
        }
      }
      ppppppplVar63 = (long *******)0x40;
      __Znwm();
      ppppppplStack_1c0 = (long *******)0x0;
      *ppppppplVar63 = (long ******)0x0;
      ppppppplVar63[1] = (long ******)ppppppplVar41;
      ppppppplStack_1d0 = ppppppplVar63;
      ppppppplStack_1c8 = ppppppplVar33;
      if (cStack_371 < '\0') {
        func_0x000107c3192c(ppppppplVar63 + 2,pppppplStack_388,pppppplStack_380);
      }
      else {
        ppppppplVar63[3] = pppppplStack_380;
        ppppppplVar63[2] = pppppplStack_388;
        ppppppplVar63[4] = (long ******)CONCAT17(cStack_371,uStack_378);
      }
      ppppppplVar63[5] = (long ******)0x0;
      ppppppplVar63[6] = (long ******)0x0;
      ppppppplVar63[7] = (long ******)0x0;
      ppppppplStack_1c0 = (long *******)CONCAT71(ppppppplStack_1c0._1_7_,1);
      fVar69 = (float)(*(long *)(lVar34 + 0x98) + 1);
      if ((ppppppplVar59 == (long *******)0x0) ||
         (*(float *)(lVar34 + 0xa0) * (float)ppppppplVar59 < fVar69)) {
        uVar43 = 1;
        if ((long *******)0x2 < ppppppplVar59) {
          uVar43 = (ulong)(((ulong)ppppppplVar59 & (ulong)((long)ppppppplVar59 + -1)) != 0);
        }
        ppppppplVar68 = (long *******)(uVar43 | (long)ppppppplVar59 << 1);
        ppppppplVar59 = (long *******)(long)(fVar69 / *(float *)(lVar34 + 0xa0));
        if (ppppppplVar68 <= ppppppplVar59) {
          ppppppplVar68 = ppppppplVar59;
        }
        if ((char *)((long)ppppppplVar68 + -1) == (char *)0x0) {
          ppppppplVar68 = (long *******)0x2;
        }
        else if (((ulong)ppppppplVar68 & (ulong)((long)ppppppplVar68 + -1)) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        ppppppplVar59 = *(long ********)(lVar34 + 0x88);
        if (ppppppplVar59 < ppppppplVar68) {
LAB_10a164858:
          ppppppplVar59 = ppppppplVar68;
          if ((ulong)ppppppplVar59 >> 0x3d != 0) {
            func_0x000109ffded8();
            goto LAB_10a165ea4;
          }
          pppppplVar23 = (long ******)((long)ppppppplVar59 << 3);
          __Znwm();
          pppppplVar24 = *ppppppplVar33;
          *ppppppplVar33 = pppppplVar23;
          if (pppppplVar24 != (long ******)0x0) {
            __ZdlPv();
          }
          ppppppplVar68 = (long *******)0x0;
          *(long ********)(lVar34 + 0x88) = ppppppplVar59;
          do {
            (*ppppppplVar33)[(long)ppppppplVar68] = (long *****)0x0;
            ppppppplVar68 = (long *******)((long)ppppppplVar68 + 1);
          } while (ppppppplVar59 != ppppppplVar68);
          ppppplVar55 = *(long ******)(lVar34 + 0x90);
          if (ppppplVar55 != (long *****)0x0) {
            ppppppplVar68 = (long *******)ppppplVar55[1];
            pcVar56 = (char *)((long)ppppppplVar59 + -1);
            if (((ulong)ppppppplVar59 & (ulong)pcVar56) == 0) {
              ppppppplVar68 = (long *******)((ulong)ppppppplVar68 & (ulong)pcVar56);
            }
            else if (ppppppplVar59 <= ppppppplVar68) {
              uVar43 = 0;
              if (ppppppplVar59 != (long *******)0x0) {
                uVar43 = (ulong)ppppppplVar68 / (ulong)ppppppplVar59;
              }
              ppppppplVar68 = (long *******)((long)ppppppplVar68 - uVar43 * (long)ppppppplVar59);
            }
            (*ppppppplVar33)[(long)ppppppplVar68] = (long *****)(lVar34 + 0x90);
            ppppplVar51 = (long *****)*ppppplVar55;
            while (ppppplVar51 != (long *****)0x0) {
              ppppppplVar40 = (long *******)ppppplVar51[1];
              if (((ulong)ppppppplVar59 & (ulong)pcVar56) == 0) {
                ppppppplVar40 = (long *******)((ulong)ppppppplVar40 & (ulong)pcVar56);
              }
              else if (ppppppplVar59 <= ppppppplVar40) {
                uVar43 = 0;
                if (ppppppplVar59 != (long *******)0x0) {
                  uVar43 = (ulong)ppppppplVar40 / (ulong)ppppppplVar59;
                }
                ppppppplVar40 = (long *******)((long)ppppppplVar40 - uVar43 * (long)ppppppplVar59);
              }
              ppppplVar52 = ppppplVar51;
              if (ppppppplVar40 != ppppppplVar68) {
                pppppplVar23 = *ppppppplVar33;
                if (pppppplVar23[(long)ppppppplVar40] == (long *****)0x0) {
                  pppppplVar23[(long)ppppppplVar40] = ppppplVar55;
                  ppppppplVar68 = ppppppplVar40;
                }
                else {
                  *ppppplVar55 = *ppppplVar51;
                  *ppppplVar51 = *pppppplVar23[(long)ppppppplVar40];
                  *pppppplVar23[(long)ppppppplVar40] = (long ****)ppppplVar51;
                  ppppplVar52 = ppppplVar55;
                }
              }
              ppppplVar55 = ppppplVar52;
              ppppplVar51 = (long *****)*ppppplVar52;
            }
          }
        }
        else if (ppppppplVar68 < ppppppplVar59) {
          ppppppplVar40 =
               (long *******)(long)((float)*(ulong *)(lVar34 + 0x98) / *(float *)(lVar34 + 0xa0));
          if ((ppppppplVar59 < (long *******)0x3) ||
             (((ulong)ppppppplVar59 & (ulong)((long)ppppppplVar59 + -1)) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *******)0x1 < ppppppplVar40) {
            ppppppplVar40 =
                 (long *******)(1L << (-LZCOUNT((char *)((long)ppppppplVar40 + -1)) & 0x3fU));
          }
          if (ppppppplVar68 <= ppppppplVar40) {
            ppppppplVar68 = ppppppplVar40;
          }
          if (ppppppplVar68 < ppppppplVar59) {
            if (ppppppplVar68 != (long *******)0x0) goto LAB_10a164858;
            pppppplVar23 = *ppppppplVar33;
            *ppppppplVar33 = (long ******)0x0;
            if (pppppplVar23 != (long ******)0x0) {
              __ZdlPv();
            }
            ppppppplVar59 = (long *******)0x0;
            *(undefined8 *)(lVar34 + 0x88) = 0;
          }
          else {
            ppppppplVar59 = *(long ********)(lVar34 + 0x88);
          }
        }
        if (((ulong)ppppppplVar59 & (ulong)((long)ppppppplVar59 + -1)) == 0) {
          ppppppplVar68 = (long *******)((ulong)((long)ppppppplVar59 + -1) & (ulong)ppppppplVar41);
        }
        else {
          ppppppplVar68 = ppppppplVar41;
          if (ppppppplVar59 <= ppppppplVar41) {
            uVar43 = 0;
            if (ppppppplVar59 != (long *******)0x0) {
              uVar43 = (ulong)ppppppplVar41 / (ulong)ppppppplVar59;
            }
            ppppppplVar68 = (long *******)((long)ppppppplVar41 - uVar43 * (long)ppppppplVar59);
          }
        }
      }
      pppppplVar23 = *ppppppplVar33;
      ppppplVar55 = pppppplVar23[(long)ppppppplVar68];
      if (ppppplVar55 == (long *****)0x0) {
        ppppplVar55 = (long *****)(lVar34 + 0x90);
        *ppppppplVar63 = (long ******)*ppppplVar55;
        *ppppplVar55 = (long ****)ppppppplVar63;
        pppppplVar23[(long)ppppppplVar68] = ppppplVar55;
        if (*ppppppplVar63 != (long ******)0x0) {
          ppppppplVar41 = (long *******)(*ppppppplVar63)[1];
          if (((ulong)ppppppplVar59 & (ulong)((long)ppppppplVar59 + -1)) == 0) {
            ppppppplVar41 = (long *******)((ulong)ppppppplVar41 & (ulong)((long)ppppppplVar59 + -1))
            ;
          }
          else if (ppppppplVar59 <= ppppppplVar41) {
            uVar43 = 0;
            if (ppppppplVar59 != (long *******)0x0) {
              uVar43 = (ulong)ppppppplVar41 / (ulong)ppppppplVar59;
            }
            ppppppplVar41 = (long *******)((long)ppppppplVar41 - uVar43 * (long)ppppppplVar59);
          }
          (*ppppppplVar33)[(long)ppppppplVar41] = (long *****)ppppppplVar63;
        }
      }
      else {
        *ppppppplVar63 = (long ******)*ppppplVar55;
        *ppppplVar55 = (long ****)ppppppplVar63;
      }
      *(long *)(lVar34 + 0x98) = *(long *)(lVar34 + 0x98) + 1;
LAB_10a164bc4:
      pppppplVar23 = ppppppplVar63[6];
      if (pppppplVar23 < ppppppplVar63[7]) {
        *pppppplVar23 = (long *****)0x0;
        pppppplVar23[1] = (long *****)0x0;
        pppppplVar23[2] = (long *****)0x0;
        pppppplVar23[1] = (long *****)ppppppplStack_988;
        *pppppplVar23 = (long *****)ppppppplStack_990;
        pppppplVar23[2] = (long *****)ppppppplStack_980;
        ppppppplStack_990 = (long *******)0x0;
        ppppppplStack_988 = (long *******)0x0;
        ppppppplStack_980 = (long *******)0x0;
        pppppplVar23[4] = ppppplStack_970;
        pppppplVar23[3] = (long *****)pppppplStack_978;
        pppppplVar23[5] = ppppplStack_968;
        pppppplVar23[6] = (long *****)0x0;
        ppppplStack_970 = (long *****)0x0;
        ppppplStack_968 = (long *****)0x0;
        pppppplStack_978 = (long ******)0x0;
        pppppplVar23[7] = (long *****)0x0;
        pppppplVar23[8] = (long *****)0x0;
        pppppplVar23[7] = ppppplStack_958;
        pppppplVar23[6] = ppppplStack_960;
        pppppplVar23[8] = ppppplStack_950;
        ppppplStack_960 = (long *****)0x0;
        ppppplStack_958 = (long *****)0x0;
        ppppplStack_950 = (long *****)0x0;
        pppppplVar23[0xb] = ppppplStack_938;
        pppppplVar23[10] = ppppplStack_940;
        pppppplVar23[9] = ppppplStack_948;
        ppppplStack_948 = (long *****)0x0;
        ppppplStack_940 = (long *****)0x0;
        pppppplVar23[0xe] = ppppplStack_920;
        pppppplVar23[0xd] = ppppplStack_928;
        pppppplVar23[0xc] = ppppplStack_930;
        ppppplStack_928 = (long *****)0x0;
        ppppplStack_920 = (long *****)0x0;
        ppppplStack_938 = (long *****)0x0;
        ppppplStack_930 = (long *****)0x0;
        pppppplVar23[0xf] = ppppplStack_918;
        pppppplVar23 = pppppplVar23 + 0x10;
      }
      else {
        lVar54 = (long)pppppplVar23 - (long)ppppppplVar63[5];
        uVar43 = (lVar54 >> 7) + 1;
        if (uVar43 >> 0x39 != 0) {
          func_0x00010a1868dc();
          goto LAB_10a165ea4;
        }
        uVar62 = (long)ppppppplVar63[7] - (long)ppppppplVar63[5];
        uVar61 = (long)uVar62 >> 6;
        if (uVar61 <= uVar43) {
          uVar61 = uVar43;
        }
        if (0x7fffffffffffff7f < uVar62) {
          uVar61 = 0x1ffffffffffffff;
        }
        if (uVar61 == 0) {
          lVar60 = 0;
        }
        else {
          if (uVar61 >> 0x39 != 0) {
            func_0x000109ffded8();
            goto LAB_10a165ea4;
          }
          lVar60 = uVar61 << 7;
          __Znwm();
        }
        ppppplVar55 = ppppplStack_920;
        puVar66 = (undefined8 *)(lVar60 + lVar54);
        puVar66[1] = ppppppplStack_988;
        *puVar66 = ppppppplStack_990;
        puVar66[2] = ppppppplStack_980;
        ppppppplStack_988 = (long *******)0x0;
        ppppppplStack_980 = (long *******)0x0;
        ppppppplStack_990 = (long *******)0x0;
        puVar66[4] = ppppplStack_970;
        puVar66[3] = pppppplStack_978;
        puVar66[5] = ppppplStack_968;
        pppppplStack_978 = (long ******)0x0;
        ppppplStack_970 = (long *****)0x0;
        ppppplStack_968 = (long *****)0x0;
        puVar66[7] = ppppplStack_958;
        puVar66[6] = ppppplStack_960;
        puVar66[8] = ppppplStack_950;
        ppppplStack_958 = (long *****)0x0;
        ppppplStack_950 = (long *****)0x0;
        ppppplStack_960 = (long *****)0x0;
        puVar66[0xb] = ppppplStack_938;
        puVar66[10] = ppppplStack_940;
        puVar66[9] = ppppplStack_948;
        ppppplStack_948 = (long *****)0x0;
        ppppplStack_940 = (long *****)0x0;
        puVar66[0xd] = ppppplStack_928;
        puVar66[0xc] = ppppplStack_930;
        ppppplStack_938 = (long *****)0x0;
        ppppplStack_930 = (long *****)0x0;
        ppppplStack_928 = (long *****)0x0;
        ppppplStack_920 = (long *****)0x0;
        puVar66[0xe] = ppppplVar55;
        puVar66[0xf] = ppppplStack_918;
        pppppplVar24 = ppppppplVar63[5];
        pppppplVar5 = ppppppplVar63[6];
        pppppplVar58 = (long ******)((long)puVar66 + ((long)pppppplVar24 - (long)pppppplVar5));
        pppppplVar23 = pppppplVar24;
        pppppplVar46 = pppppplVar58;
        if ((long)pppppplVar24 - (long)pppppplVar5 != 0) {
          do {
            *pppppplVar46 = (long *****)0x0;
            pppppplVar46[1] = (long *****)0x0;
            pppppplVar46[2] = (long *****)0x0;
            ppppplVar55 = *pppppplVar23;
            pppppplVar46[1] = pppppplVar23[1];
            *pppppplVar46 = ppppplVar55;
            pppppplVar46[2] = pppppplVar23[2];
            *pppppplVar23 = (long *****)0x0;
            pppppplVar23[1] = (long *****)0x0;
            pppppplVar23[2] = (long *****)0x0;
            ppppplVar55 = pppppplVar23[3];
            ppppplVar51 = pppppplVar23[4];
            pppppplVar46[5] = pppppplVar23[5];
            pppppplVar46[4] = ppppplVar51;
            pppppplVar46[3] = ppppplVar55;
            pppppplVar23[4] = (long *****)0x0;
            pppppplVar23[5] = (long *****)0x0;
            pppppplVar23[3] = (long *****)0x0;
            pppppplVar46[6] = (long *****)0x0;
            pppppplVar46[7] = (long *****)0x0;
            pppppplVar46[8] = (long *****)0x0;
            ppppplVar55 = pppppplVar23[6];
            pppppplVar46[7] = pppppplVar23[7];
            pppppplVar46[6] = ppppplVar55;
            pppppplVar46[8] = pppppplVar23[8];
            pppppplVar23[6] = (long *****)0x0;
            pppppplVar23[7] = (long *****)0x0;
            pppppplVar23[8] = (long *****)0x0;
            ppppplVar55 = pppppplVar23[9];
            ppppplVar51 = pppppplVar23[10];
            pppppplVar46[0xb] = pppppplVar23[0xb];
            pppppplVar46[10] = ppppplVar51;
            pppppplVar46[9] = ppppplVar55;
            pppppplVar23[10] = (long *****)0x0;
            pppppplVar23[0xb] = (long *****)0x0;
            pppppplVar23[9] = (long *****)0x0;
            ppppplVar55 = pppppplVar23[0xc];
            ppppplVar51 = pppppplVar23[0xd];
            pppppplVar46[0xe] = pppppplVar23[0xe];
            pppppplVar46[0xd] = ppppplVar51;
            pppppplVar46[0xc] = ppppplVar55;
            pppppplVar23[0xd] = (long *****)0x0;
            pppppplVar23[0xe] = (long *****)0x0;
            pppppplVar23[0xc] = (long *****)0x0;
            pppppplVar46[0xf] = pppppplVar23[0xf];
            pppppplVar23 = pppppplVar23 + 0x10;
            pppppplVar46 = pppppplVar46 + 0x10;
          } while (pppppplVar23 != pppppplVar5);
          do {
            FUN_10a09afa8(pppppplVar24);
            pppppplVar24 = pppppplVar24 + 0x10;
          } while (pppppplVar24 != pppppplVar5);
          pppppplVar24 = ppppppplVar63[5];
        }
        pppppplVar23 = (long ******)(puVar66 + 0x10);
        ppppppplVar63[5] = pppppplVar58;
        ppppppplVar63[6] = pppppplVar23;
        ppppppplVar63[7] = (long ******)(lVar60 + uVar61 * 0x80);
        if (pppppplVar24 != (long ******)0x0) {
          __ZdlPv(pppppplVar24);
        }
      }
      ppppppplVar63[6] = pppppplVar23;
      __ZNSt3__15mutex6unlockEv(lVar34 + 0x38);
      if ((long)ppppplStack_920 < 0) {
        __ZdlPv(ppppplStack_930);
      }
      if ((long)ppppplStack_938 < 0) {
        __ZdlPv(ppppplStack_948);
      }
      ppppppplStack_1d0 = (long *******)&ppppplStack_960;
      func_0x00010a09ba00(&ppppppplStack_1d0);
      if ((long)ppppplStack_968 < 0) {
        __ZdlPv(pppppplStack_978);
      }
      ppppppplStack_1d0 = (long *******)&ppppppplStack_990;
      func_0x00010a09ba00(&ppppppplStack_1d0);
    }
    if ((long)ppppplStack_8a0 < 0) {
      __ZdlPv(ppppplStack_8b0);
    }
    if ((long)ppppplStack_8b8 < 0) {
      __ZdlPv(ppppplStack_8c8);
    }
    ppppppplStack_1d0 = (long *******)&ppppplStack_8e0;
    func_0x00010a09ba00(&ppppppplStack_1d0);
    if ((long)ppppplStack_8e8 < 0) {
      __ZdlPv(pppppplStack_8f8);
    }
    ppppppplStack_1d0 = (long *******)&ppppppplStack_910;
    func_0x00010a09ba00(&ppppppplStack_1d0);
  }
  lVar34 = 0;
  ppppppplVar33 = (long *******)&ppppppplStack_180;
  bVar12 = true;
  do {
    bVar13 = bVar12;
    if (2 < *(uint *)((long)ppppppplVar33 + 4)) goto LAB_10a165ea4;
    func_0x00010a0eadd8(&uStack_760 + lVar34 * 2,
                        plVar17 + (ulong)*(uint *)((long)ppppppplVar33 + 4) * 2);
    if ((pppppplStack_230 != (long ******)0x0) && (ppppppplVar33[7] == pppppplStack_230)) {
      func_0x00010a0eadd8(&uStack_760 + lVar34 * 2,&pppppplStack_230);
    }
    (**(code **)(*(long *)*plVar42 + 0xa8))(&ppppppplStack_910,(long *)*plVar42,ppppppplVar33);
    FUN_10a166f28((long)auStack_730 + lVar34 * 0x10,&ppppppplStack_910);
    ppppppplVar33 = ppppppplStack_908;
    if (ppppppplStack_908 != (long *******)0x0) {
      ppppppplVar41 = ppppppplStack_908 + 1;
      do {
        pppppplVar23 = *ppppppplVar41;
        cVar9 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar41,0x10);
        if (bVar12) {
          *ppppppplVar41 = (long ******)((long)pppppplVar23 + -1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (pppppplVar23 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_908)[2])(ppppppplStack_908);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar33);
      }
    }
    lVar34 = 1;
    ppppppplVar33 = &pppppplStack_120;
    bVar12 = false;
  } while (bVar13);
  FUN_10a195228(&ppppppplStack_910,&ppppppplStack_1d0,&ppppppplStack_770);
  FUN_10a195304(&ppppppplStack_1d0,ppppppplStack_910,ppppppplStack_908);
  *(char *)((long)ppppppplStack_1d0 + 0x142) = '\x01';
  __ZNSt3__15mutex4lockEv(param_2 + 0x158);
  ppppppplVar33 = ppppppplStack_1c8;
  ppppppplVar41 = ppppppplStack_1d0;
  puVar66 = *(undefined8 **)(param_2 + 0xb0);
  if (puVar66 < *(undefined8 **)(param_2 + 0xb8)) {
    *puVar66 = ppppppplStack_1d0;
    puVar66[1] = ppppppplStack_1c8;
    if (ppppppplStack_1c8 != (long *******)0x0) {
      ppppppplVar33 = ppppppplStack_1c8 + 1;
      do {
        cVar9 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar33,0x10);
        if (bVar12) {
          *ppppppplVar33 = (long ******)((long)*ppppppplVar33 + 1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    puVar66 = puVar66 + 2;
  }
  else {
    lVar34 = *(long *)(param_2 + 0xa8);
    lVar60 = (long)puVar66 - lVar34;
    lVar54 = lVar60 >> 4;
    uVar43 = lVar54 + 1;
    if (uVar43 >> 0x3c != 0) {
      func_0x00010a1868f0();
      goto LAB_10a165ea4;
    }
    uVar62 = (long)*(undefined8 **)(param_2 + 0xb8) - lVar34;
    uVar61 = (long)uVar62 >> 3;
    if (uVar61 <= uVar43) {
      uVar61 = uVar43;
    }
    if (0x7fffffffffffffef < uVar62) {
      uVar61 = 0xfffffffffffffff;
    }
    if (uVar61 >> 0x3c != 0) {
      func_0x000109ffded8();
      goto LAB_10a165ea4;
    }
    lVar25 = uVar61 << 4;
    __Znwm();
    puVar22 = (undefined8 *)(lVar25 + lVar60);
    *puVar22 = ppppppplVar41;
    puVar22[1] = ppppppplVar33;
    if (ppppppplVar33 != (long *******)0x0) {
      ppppppplVar33 = ppppppplVar33 + 1;
      do {
        cVar9 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar33,0x10);
        if (bVar12) {
          *ppppppplVar33 = (long ******)((long)*ppppppplVar33 + 1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      lVar34 = *(long *)(param_2 + 0xa8);
      lVar60 = *(long *)(param_2 + 0xb0) - lVar34;
      lVar54 = lVar60 >> 4;
    }
    puVar66 = puVar22 + 2;
    _memcpy(puVar22 + lVar54 * -2,lVar34,lVar60);
    *(undefined8 **)(param_2 + 0xa8) = puVar22 + lVar54 * -2;
    *(undefined8 **)(param_2 + 0xb0) = puVar66;
    *(ulong *)(param_2 + 0xb8) = lVar25 + uVar61 * 0x10;
    if (lVar34 != 0) {
      __ZdlPv(lVar34);
    }
  }
  *(undefined8 **)(param_2 + 0xb0) = puVar66;
  param_1[1] = ppppppplStack_1c8;
  *param_1 = ppppppplStack_1d0;
  ppppppplStack_1d0 = (long *******)0x0;
  ppppppplStack_1c8 = (long *******)0x0;
  __ZNSt3__15mutex6unlockEv(param_2 + 0x158);
  ppppppplVar33 = ppppppplStack_1c8;
  if (ppppppplStack_1c8 != (long *******)0x0) {
    ppppppplVar41 = ppppppplStack_1c8 + 1;
    do {
      pppppplVar23 = *ppppppplVar41;
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar41,0x10);
      if (bVar12) {
        *ppppppplVar41 = (long ******)((long)pppppplVar23 + -1);
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (pppppplVar23 == (long ******)0x0) {
      (*(code *)(*ppppppplStack_1c8)[2])(ppppppplStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar33);
    }
  }
  ppppppplVar33 = ppppppplStack_908;
  if (ppppppplStack_908 != (long *******)0x0) {
    ppppppplVar41 = ppppppplStack_908 + 1;
    do {
      pppppplVar23 = *ppppppplVar41;
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar41,0x10);
      if (bVar12) {
        *ppppppplVar41 = (long ******)((long)pppppplVar23 + -1);
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (pppppplVar23 == (long ******)0x0) {
      (*(code *)(*ppppppplStack_908)[2])(ppppppplStack_908);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar33);
    }
  }
  FUN_10a186904(&ppppppplStack_770);
  lVar34 = 0;
  do {
    if (acStack_c8[lVar34] == '\x01') {
      ppppppplStack_770 = (long *******)(auStack_e0 + lVar34);
      func_0x00010a0eab1c(&ppppppplStack_770);
    }
    lVar34 = lVar34 + -0x60;
  } while (lVar34 != -0xc0);
  if (lStack_3c8 < 0) {
    __ZdlPv(uStack_3d8);
  }
  ppppppplStack_770 = (long *******)&ppppplStack_3f0;
  func_0x00010a09ba00(&ppppppplStack_770);
  if (lStack_398 < 0) {
    __ZdlPv(uStack_3a8);
  }
  ppppppplStack_770 = &pppppplStack_3c0;
  func_0x00010a09ba00(&ppppppplStack_770);
  if (cStack_371 < '\0') {
    __ZdlPv(pppppplStack_388);
  }
  if ((long)uStack_360 < 0) {
    __ZdlPv(pppppppuStack_370);
  }
  if (lStack_348 < 0) {
    __ZdlPv(uStack_358);
  }
  lVar34 = 0;
  do {
    if (*(long *)((long)&pppppplStack_2f8 + lVar34) != 0) {
      *(long *)((long)alStack_2f0 + lVar34) = *(long *)((long)&pppppplStack_2f8 + lVar34);
      __ZdlPv();
    }
    lVar34 = lVar34 + -0x18;
  } while (lVar34 != -0x30);
  lVar34 = 0;
  do {
    if (*(long *)((long)&pppppplStack_2c8 + lVar34) != 0) {
      *(long *)((long)alStack_2c0 + lVar34) = *(long *)((long)&pppppplStack_2c8 + lVar34);
      __ZdlPv();
    }
    lVar34 = lVar34 + -0x18;
  } while (lVar34 != -0x30);
  if ((long)pppppplStack_2a0 < 0) {
    __ZdlPv(pppppppuStack_2b0);
  }
  ppppppplVar33 = ppppppplStack_290;
  if ((char)bStack_279 < '\0') goto LAB_10a1658e8;
  goto LAB_10a1658ec;
LAB_10a163880:
  ppppplVar55 = (long *****)*ppppplVar55;
  if (ppppplVar55 == (long *****)0x0) goto LAB_10a163a3c;
  goto LAB_10a16383c;
LAB_10a164a68:
  _memchr(ppppppplVar41,0x3b);
  if (ppppppplVar41 == (long *******)0x0) goto LAB_10a162950;
  if (*(char *)ppppppplVar41 == ';') {
    if ((ppppppplVar41 != ppppppplVar68) && ((long)ppppppplVar41 - (long)ppppppplVar33 != -1)) {
      func_0x000107c2b054(&ppppppplStack_910,&UNK_10f63f920);
      ppppppplVar68 = ppppppplStack_908;
      ppppppplVar59 = ppppppplStack_910;
      if (-1 < (long)ppppppplStack_900) {
        ppppppplVar68 = (long *******)((ulong)ppppppplStack_900 >> 0x38);
        ppppppplVar59 = (long *******)&ppppppplStack_910;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (&ppppppplStack_2e0,((long)ppppppplVar41 - (long)ppppppplVar33) + 1,ppppppplVar59,
                 ppppppplVar68);
      if ((long)ppppppplStack_900 < 0) {
        __ZdlPv(ppppppplStack_910);
      }
    }
    goto LAB_10a162950;
  }
  ppppppplVar41 = (long *******)((long)ppppppplVar41 + 1);
  if ((long)ppppppplVar68 - (long)ppppppplVar41 < 1) goto LAB_10a162950;
  goto LAB_10a164a68;
LAB_10a16469c:
  _memchr(ppppppplVar63,0x73,lVar54 + -0x12);
  if (ppppppplVar63 == (long *******)0x0) goto LAB_10a1657bc;
  if ((*ppppppplVar63 == (long ******)0x5520746375727473 &&
      ppppppplVar63[1] == (long ******)0x6f66696e55726573) &&
      *(long *)((long)ppppppplVar63 + 0xb) == 0x736d726f66696e55) {
    if ((ppppppplVar63 != ppppppplVar44) && ((long)ppppppplVar63 - (long)ppppppplVar33 != -1)) {
      if ((long)ppppppplVar59 < 0) {
        func_0x000107c3192c(&ppppppplStack_910,ppppppplVar41,ppppppplVar68);
      }
      else {
        ppppppplStack_908 = ppppppplStack_b8;
        ppppppplStack_910 = ppppppplStack_c0;
        ppppppplStack_900 = uStack_b0;
      }
      FUN_10a167020(&ppppppplStack_1a0,&ppppppplStack_910,ppppppplVar40);
      FUN_10a167020(&ppppppplStack_220,&ppppppplStack_910,
                    (int)((long)ppppppplVar63 - (long)ppppppplVar33) + 0x13);
      ppppppplVar33 = ppppppplStack_198;
      pppppplVar23 = pppppplStack_218;
      lVar54 = ((long)ppppppplStack_198 - (long)ppppppplStack_1a0 >> 3) * -0x5555555555555555;
      lVar60 = (long)pppppplStack_218 - (long)ppppppplStack_220 >> 3;
      if (lVar54 + lVar60 * 0x5555555555555555 != 0) goto LAB_10a165400;
      ppppppplVar41 = ppppppplStack_1a0;
      ppppppplVar68 = ppppppplStack_220;
      if (ppppppplStack_198 == ppppppplStack_1a0) goto LAB_10a16578c;
      goto LAB_10a16539c;
    }
    goto LAB_10a1657bc;
  }
  ppppppplVar63 = (long *******)((long)ppppppplVar63 + 1);
  lVar54 = (long)ppppppplVar44 - (long)ppppppplVar63;
  if (lVar54 < 0x13) goto LAB_10a1657bc;
  goto LAB_10a16469c;
  while( true ) {
    ppppppplVar59 = (long *******)*ppppppplVar41;
    if (-1 < (char)bVar7) {
      ppppppplVar59 = ppppppplVar41;
    }
    ppppppplVar63 = (long *******)*ppppppplVar68;
    if (-1 < (char)bVar8) {
      ppppppplVar63 = ppppppplVar68;
    }
    _memcmp(ppppppplVar59,ppppppplVar63);
    if ((int)ppppppplVar59 != 0) goto LAB_10a165400;
    lVar54 = lVar54 + -1;
    ppppppplVar41 = ppppppplVar41 + 3;
    ppppppplVar68 = ppppppplVar68 + 3;
    if (lVar54 == 0) break;
LAB_10a16539c:
    bVar7 = *(byte *)((long)ppppppplVar41 + 0x17);
    pppppplVar24 = ppppppplVar41[1];
    if (-1 < (char)bVar7) {
      pppppplVar24 = (long ******)(ulong)bVar7;
    }
    bVar8 = *(byte *)((long)ppppppplVar68 + 0x17);
    pppppplVar58 = ppppppplVar68[1];
    if (-1 < (char)bVar8) {
      pppppplVar58 = (long ******)(ulong)bVar8;
    }
    if (pppppplVar24 != pppppplVar58) goto LAB_10a165400;
  }
  goto LAB_10a16578c;
LAB_10a165400:
  FUN_10a1869ec(&ppppppplStack_1a0,ppppppplVar33,ppppppplStack_220,pppppplVar23,
                lVar60 * -0x5555555555555555);
  lVar54 = 0;
  if (ppppppplStack_198 != ppppppplStack_1a0) {
    lVar54 = LZCOUNT(((long)ppppppplStack_198 - (long)ppppppplStack_1a0 >> 3) * -0x5555555555555555)
             * -2 + 0x7e;
  }
  func_0x000107c281b4(ppppppplStack_1a0,ppppppplStack_198,&pppppppuStack_2b0,lVar54,1);
  ppppppplVar33 = ppppppplStack_1a0;
  FUN_10a186cbc(ppppppplStack_1a0,ppppppplStack_198,&ppppppplStack_290);
  func_0x000107c2846c(&ppppppplStack_1a0,ppppppplVar33,ppppppplStack_198);
  bStack_279 = 0x13;
  uStack_288 = 0x66696e55726573;
  uStack_281 = 0x736d726f;
  ppppppplStack_290 = (long *******)0x5520746375727473;
  uStack_27d = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&ppppppplStack_290,&UNK_10f63f998,3);
  ppppppplVar33 = ppppppplStack_198;
  if (ppppppplStack_1a0 != ppppppplStack_198) {
    ppppppplVar41 = ppppppplStack_1a0;
    do {
      pppppplVar23 = ppppppplVar41[1];
      if (-1 < (char)*(byte *)((long)ppppppplVar41 + 0x17)) {
        pppppplVar23 = (long ******)(ulong)*(byte *)((long)ppppppplVar41 + 0x17);
      }
      FUN_10a003c90(&pppppppuStack_2b0,(long)pppppplVar23 + 1,&uStack_358);
      pppppppuVar21 = pppppppuStack_2b0;
      if (-1 < (long)pppppplStack_2a0) {
        pppppppuVar21 = &pppppppuStack_2b0;
      }
      if (pppppplVar23 != (long ******)0x0) {
        ppppppplVar68 = (long *******)*ppppppplVar41;
        if (-1 < *(char *)((long)ppppppplVar41 + 0x17)) {
          ppppppplVar68 = ppppppplVar41;
        }
        _memmove(pppppppuVar21,ppppppplVar68,pppppplVar23);
      }
      *(undefined2 *)((long)pppppppuVar21 + (long)pppppplVar23) = 10;
      pppppplVar23 = pppppplStack_2a8;
      pppppppuVar21 = pppppppuStack_2b0;
      if (-1 < (long)pppppplStack_2a0) {
        pppppplVar23 = (long ******)((ulong)pppppplStack_2a0 >> 0x38);
        pppppppuVar21 = &pppppppuStack_2b0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppppplStack_290,pppppppuVar21,pppppplVar23);
      if ((long)pppppplStack_2a0 < 0) {
        __ZdlPv(pppppppuStack_2b0);
      }
      ppppppplVar41 = ppppppplVar41 + 3;
    } while (ppppppplVar41 != ppppppplVar33);
  }
  ppppppplVar33 = ppppppplStack_908;
  ppppppplVar41 = ppppppplStack_910;
  if (-1 < (long)ppppppplStack_900) {
    ppppppplVar33 = (long *******)((ulong)ppppppplStack_900 >> 0x38);
    ppppppplVar41 = (long *******)&ppppppplStack_910;
  }
  lVar54 = (long)ppppppplVar33 - (long)ppppppplVar40;
  if (ppppppplVar33 < ppppppplVar40) {
    lVar54 = -1;
  }
  else {
    psVar3 = (short *)((long)ppppppplVar41 + (long)ppppppplVar33);
    psVar27 = psVar3;
    if (1 < lVar54) {
      psVar26 = (short *)((long)ppppppplVar41 + (long)ppppppplVar40);
      do {
        _memchr(psVar26,0x7d,lVar54 + -1);
        psVar27 = psVar3;
        if ((psVar26 == (short *)0x0) || (psVar27 = psVar26, *psVar26 == 0x3b7d)) break;
        psVar26 = (short *)((long)psVar26 + 1);
        lVar54 = (long)psVar3 - (long)psVar26;
        psVar27 = psVar3;
      } while (1 < lVar54);
    }
    lVar54 = (long)psVar27 - (long)ppppppplVar41;
    if (psVar27 == psVar3) {
      lVar54 = -1;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (&ppppppplStack_910,lVar34,lVar54 - lVar34);
  uVar43 = CONCAT17((undefined1)uStack_281,uStack_288);
  ppppppplVar33 = ppppppplStack_290;
  if (-1 < (char)bStack_279) {
    uVar43 = (ulong)bStack_279;
    ppppppplVar33 = (long *******)&ppppppplStack_290;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (&ppppppplStack_910,lVar34,ppppppplVar33,uVar43);
  ppppppplVar33 = ppppppplStack_908;
  ppppppplVar41 = ppppppplStack_910;
  if (-1 < (long)ppppppplStack_900) {
    ppppppplVar33 = (long *******)((ulong)ppppppplStack_900 >> 0x38);
    ppppppplVar41 = (long *******)&ppppppplStack_910;
  }
  lVar34 = (long)ppppppplVar33 - (long)ppppppplVar40;
  if (ppppppplVar33 < ppppppplVar40) {
    lVar34 = -1;
  }
  else {
    plVar17 = (long *)((long)ppppppplVar41 + (long)ppppppplVar33);
    plVar35 = plVar17;
    if (0x12 < lVar34) {
      plVar18 = (long *)((long)ppppppplVar41 + (long)ppppppplVar40);
      do {
        _memchr(plVar18,0x73,lVar34 + -0x12);
        plVar35 = plVar17;
        if ((plVar18 == (long *)0x0) ||
           (plVar35 = plVar18,
           (*plVar18 == 0x5520746375727473 && plVar18[1] == 0x6f66696e55726573) &&
           *(long *)((long)plVar18 + 0xb) == 0x736d726f66696e55)) break;
        plVar18 = (long *)((long)plVar18 + 1);
        lVar34 = (long)plVar17 - (long)plVar18;
        plVar35 = plVar17;
      } while (0x12 < lVar34);
    }
    lVar34 = (long)plVar35 - (long)ppppppplVar41;
    if (plVar35 == plVar17) {
      lVar34 = -1;
    }
  }
  ppppppplVar68 = (long *******)(lVar34 + 0x13);
  lVar54 = (long)ppppppplVar33 - (long)ppppppplVar68;
  if (ppppppplVar33 < ppppppplVar68) {
    lVar54 = -1;
  }
  else {
    psVar3 = (short *)((long)ppppppplVar41 + (long)ppppppplVar33);
    psVar27 = psVar3;
    if (1 < lVar54) {
      psVar26 = (short *)((long)ppppppplVar41 + (long)ppppppplVar68);
      do {
        _memchr(psVar26,0x7d,lVar54 + -1);
        psVar27 = psVar3;
        if ((psVar26 == (short *)0x0) || (psVar27 = psVar26, *psVar26 == 0x3b7d)) break;
        psVar26 = (short *)((long)psVar26 + 1);
        lVar54 = (long)psVar3 - (long)psVar26;
        psVar27 = psVar3;
      } while (1 < lVar54);
    }
    lVar54 = (long)psVar27 - (long)ppppppplVar41;
    if (psVar27 == psVar3) {
      lVar54 = -1;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (&ppppppplStack_910,lVar34,lVar54 - lVar34);
  uVar43 = CONCAT17((undefined1)uStack_281,uStack_288);
  ppppppplVar33 = ppppppplStack_290;
  if (-1 < (char)bStack_279) {
    uVar43 = (ulong)bStack_279;
    ppppppplVar33 = (long *******)&ppppppplStack_290;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (&ppppppplStack_910,lVar34,ppppppplVar33,uVar43);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (&ppppppplStack_c0,&ppppppplStack_910);
  if ((char)bStack_279 < '\0') {
    __ZdlPv(ppppppplStack_290);
  }
LAB_10a16578c:
  ppppppplStack_290 = (long *******)&ppppppplStack_220;
  FUN_10a0426d8(&ppppppplStack_290);
  ppppppplStack_220 = (long *******)&ppppppplStack_1a0;
  FUN_10a0426d8(&ppppppplStack_220);
  if ((long)ppppppplStack_900 < 0) {
    __ZdlPv(ppppppplStack_910);
  }
LAB_10a1657bc:
  if ((long)uStack_1f0 < 0) {
    __ZdlPv(ppppppplStack_200);
  }
  if (lStack_3e0 < 0) {
    __ZdlPv(ppppplStack_3f0);
  }
  if (lStack_3b0 < 0) {
    __ZdlPv(pppppplStack_3c0);
  }
  if ((long)ppppppplStack_300 < 0) {
    __ZdlPv(ppppppplStack_310);
  }
  if (uStack_2d0 < 0) {
    __ZdlPv(ppppppplStack_2e0);
  }
  if ((long)ppppppplStack_1c0 < 0) {
    __ZdlPv(ppppppplStack_1d0);
  }
LAB_10a16582c:
  uVar28 = *(undefined8 *)(param_2 + 0x18);
LAB_10a165838:
  FUN_10a30731c(&ppppppplStack_910,uVar28,uVar6 & 0xff,&ppppppplStack_c0,&ppppppplStack_770,plVar42,
                param_2 + 0x38,param_3 + 0x28,param_3 + 0x38,param_4 & 0xf);
  FUN_10a195524(&ppppppplStack_1d0,&ppppppplStack_2e0,&ppppppplStack_910);
  ppppppplVar33 = ppppppplStack_908;
  if (ppppppplStack_908 != (long *******)0x0) {
    ppppppplVar41 = ppppppplStack_908 + 1;
    do {
      pppppplVar23 = *ppppppplVar41;
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar41,0x10);
      if (bVar12) {
        *ppppppplVar41 = (long ******)((long)pppppplVar23 + -1);
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (pppppplVar23 == (long ******)0x0) {
      (*(code *)(*ppppppplStack_908)[2])(ppppppplStack_908);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar33);
    }
  }
  param_1[1] = ppppppplStack_1c8;
  *param_1 = ppppppplStack_1d0;
  func_0x00010923ff08(&ppppppplStack_770);
  ppppppplVar33 = ppppppplStack_180;
  if ((long)ppppppplStack_170 < 0) {
LAB_10a1658e8:
    __ZdlPv(ppppppplVar33);
  }
LAB_10a1658ec:
  func_0x000109243058(&pppppplStack_270);
  plVar42 = plStack_238;
  if (plStack_238 != (long *)0x0) {
    plVar17 = plStack_238 + 1;
    do {
      lVar34 = *plVar17;
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar12) {
        *plVar17 = lVar34 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar34 == 0) {
      (**(code **)(*plStack_238 + 0x10))(plStack_238);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar42);
    }
  }
  plVar42 = plStack_228;
  if (plStack_228 != (long *)0x0) {
    plVar17 = plStack_228 + 1;
    do {
      lVar34 = *plVar17;
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar12) {
        *plVar17 = lVar34 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar34 == 0) {
      (**(code **)(*plStack_228 + 0x10))(plStack_228);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar42);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10a1659c8:
  puVar29 = &UNK_10f63f8ce;
LAB_10a1659d0:
  FUN_10a00946c(puVar29);
LAB_10a165ea4:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10a165ea8);
  (*pcVar11)();
}



/* Entry: 10a16603c; end: 10a16609b;  */

void FUN_10a16603c(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  
  pbVar1 = (byte *)(param_1 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a183e6c(param_1 + 8);
  *pbVar1 = 0;
  return;
}



/* Entry: 10a16609c; end: 10a1660ff;  */

undefined8 * FUN_10a16609c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a166100; end: 10a1664df;  */

void FUN_10a166100(long *param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  byte *pbVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  pbVar1 = (byte *)(param_1 + 0xc);
  do {
    bVar4 = *pbVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while ((bVar4 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar4 = *pbVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar7 = (long *)0x80;
  __Znwm();
  lVar8 = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110ba9700;
  plVar2 = plVar7 + 3;
  do {
    plVar16 = (long *)(param_3 + lVar8 * 0x10);
    lVar11 = plVar16[1];
    lVar19 = *plVar16;
    (plVar2 + lVar8 * 2)[1] = plVar16[1];
    plVar2[lVar8 * 2] = lVar19;
    if (lVar11 != 0) {
      plVar16 = (long *)(lVar11 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = *plVar16 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 3);
  lVar8 = *param_4;
  plVar7[10] = param_4[1];
  plVar7[9] = lVar8;
  if (param_4[1] != 0) {
    plVar16 = (long *)(param_4[1] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = *plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar16 = plVar7 + 0xb;
  plVar7[0xc] = 0;
  *plVar16 = 0;
  plVar7[0xe] = 0;
  plVar7[0xd] = 0;
  *(undefined4 *)(plVar7 + 0xf) = *(undefined4 *)(param_5 + 0x20);
  func_0x0001092433d4(plVar16,*(undefined8 *)(param_5 + 8));
  plVar18 = *(long **)(param_5 + 0x10);
  if (plVar18 != (long *)0x0) {
    plVar3 = plVar7 + 0xd;
    plVar14 = param_1;
    do {
      plVar13 = plVar16;
      func_0x000107c2b05c(plVar16,plVar18 + 2);
      plVar15 = (long *)plVar7[0xc];
      if (plVar15 != (long *)0x0) {
        uVar17 = (long)plVar15 - 1;
        if (((ulong)plVar15 & uVar17) == 0) {
          plVar14 = (long *)(uVar17 & (ulong)plVar13);
        }
        else {
          plVar14 = plVar13;
          if (plVar15 <= plVar13) {
            uVar12 = 0;
            if (plVar15 != (long *)0x0) {
              uVar12 = (ulong)plVar13 / (ulong)plVar15;
            }
            plVar14 = (long *)((long)plVar13 - uVar12 * (long)plVar15);
          }
        }
        plVar9 = *(long **)(*plVar16 + (long)plVar14 * 8);
        if (plVar9 != (long *)0x0) {
          for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
            plVar10 = (long *)plVar9[1];
            if (plVar10 == plVar13) {
              plVar10 = plVar16;
              func_0x000107c2b068(plVar16,plVar9 + 2,plVar18 + 2);
              if (((ulong)plVar10 & 1) != 0) goto LAB_10a1663f4;
            }
            else {
              if (((ulong)plVar15 & uVar17) == 0) {
                plVar10 = (long *)((ulong)plVar10 & uVar17);
              }
              else if (plVar15 <= plVar10) {
                uVar12 = 0;
                if (plVar15 != (long *)0x0) {
                  uVar12 = (ulong)plVar10 / (ulong)plVar15;
                }
                plVar10 = (long *)((long)plVar10 - uVar12 * (long)plVar15);
              }
              if (plVar10 != plVar14) break;
            }
          }
        }
      }
      plVar9 = (long *)0x1c0;
      __Znwm();
      uStack_68 = 0;
      *plVar9 = 0;
      plVar9[1] = (long)plVar13;
      plStack_78 = plVar9;
      plStack_70 = plVar16;
      FUN_10a184c6c(plVar9 + 2,plVar18 + 2);
      uStack_68 = CONCAT71(uStack_68._1_7_,1);
      if ((plVar15 == (long *)0x0) ||
         (*(float *)(plVar7 + 0xf) * (float)plVar15 < (float)(plVar7[0xe] + 1))) {
        uVar17 = 1;
        if ((long *)0x2 < plVar15) {
          uVar17 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
        }
        uVar17 = uVar17 | (long)plVar15 << 1;
        uVar12 = (ulong)((float)(plVar7[0xe] + 1) / *(float *)(plVar7 + 0xf));
        if (uVar17 <= uVar12) {
          uVar17 = uVar12;
        }
        func_0x0001092433d4(plVar16,uVar17);
        plVar15 = (long *)plVar7[0xc];
        if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
          plVar14 = (long *)((long)plVar15 - 1U & (ulong)plVar13);
        }
        else {
          plVar14 = plVar13;
          if (plVar15 <= plVar13) {
            uVar17 = 0;
            if (plVar15 != (long *)0x0) {
              uVar17 = (ulong)plVar13 / (ulong)plVar15;
            }
            plVar14 = (long *)((long)plVar13 - uVar17 * (long)plVar15);
          }
        }
      }
      lVar8 = *plVar16;
      plVar13 = *(long **)(lVar8 + (long)plVar14 * 8);
      if (plVar13 == (long *)0x0) {
        *plVar9 = *plVar3;
        *plVar3 = (long)plVar9;
        *(long **)(lVar8 + (long)plVar14 * 8) = plVar3;
        if (*plVar9 != 0) {
          plVar13 = *(long **)(*plVar9 + 8);
          if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
            plVar13 = (long *)((ulong)plVar13 & (long)plVar15 - 1U);
          }
          else if (plVar15 <= plVar13) {
            uVar17 = 0;
            if (plVar15 != (long *)0x0) {
              uVar17 = (ulong)plVar13 / (ulong)plVar15;
            }
            plVar13 = (long *)((long)plVar13 - uVar17 * (long)plVar15);
          }
          *(long **)(*plVar16 + (long)plVar13 * 8) = plVar9;
        }
      }
      else {
        *plVar9 = *plVar13;
        *plVar13 = (long)plVar9;
      }
      plVar7[0xe] = plVar7[0xe] + 1;
LAB_10a1663f4:
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
  plStack_88 = plVar2;
  plStack_80 = plVar7;
  FUN_10a184024(param_1 + 1,param_2,&plStack_88);
  plVar2 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar7 = plStack_80 + 1;
    do {
      lVar8 = *plVar7;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  *pbVar1 = 0;
  return;
}



/* Entry: 10a1664e0; end: 10a166af3;  */

void FUN_10a1664e0(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *unaff_x25;
  ulong uVar23;
  float fVar24;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  lVar6 = 0x48;
  do {
    lVar7 = *(long *)(param_1 + lVar6);
    if (lVar7 != 0) {
      if ((*(byte *)(lVar7 + 0x40) & 1) == 0) {
LAB_10a166ac0:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a166ac4);
        (*pcVar2)();
      }
      lVar1 = *(long *)(lVar7 + 0x30);
      for (lVar7 = *(long *)(lVar7 + 0x28); lVar7 != lVar1; lVar7 = lVar7 + 0x38) {
        FUN_10a0b4ec0(param_1 + 0x78,lVar7);
        plStack_88 = (long *)0x0;
        plStack_90 = (long *)0x0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_70 = 0x3f800000;
        uVar23 = *(ulong *)(param_1 + 0x98);
        if (uVar23 < *(ulong *)(param_1 + 0xa0)) {
          FUN_10a184d64(uVar23,&plStack_90);
          lVar17 = uVar23 + 0x28;
        }
        else {
          lVar17 = uVar23 - *(long *)(param_1 + 0x90);
          uVar23 = (lVar17 >> 3) * -0x3333333333333333 + 1;
          if (0x666666666666666 < uVar23) {
            FUN_10a184dd0();
            goto LAB_10a166ac0;
          }
          lVar4 = (long)(*(ulong *)(param_1 + 0xa0) - *(long *)(param_1 + 0x90)) >> 3;
          uVar11 = lVar4 * -0x6666666666666666;
          if (uVar11 < uVar23 || uVar11 - uVar23 == 0) {
            uVar11 = uVar23;
          }
          if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
            uVar11 = 0x666666666666666;
          }
          if (uVar11 == 0) {
            lVar4 = 0;
          }
          else {
            if (0x666666666666666 < uVar11) {
              func_0x000109ffded8();
              goto LAB_10a166ac0;
            }
            lVar4 = uVar11 * 0x28;
            __Znwm();
          }
          lVar17 = lVar4 + lVar17;
          FUN_10a184d64(lVar17,&plStack_90);
          plVar21 = *(long **)(param_1 + 0x90);
          unaff_x25 = *(long **)(param_1 + 0x98);
          lVar5 = (long)plVar21 + (lVar17 - (long)unaff_x25);
          lVar3 = lVar5;
          plVar19 = plVar21;
          if (unaff_x25 != plVar21) {
            do {
              FUN_10a184d64(lVar3,plVar19);
              plVar19 = plVar19 + 5;
              lVar3 = lVar3 + 0x28;
            } while (plVar19 != unaff_x25);
            do {
              FUN_10a183d74(plVar21);
              plVar21 = plVar21 + 5;
            } while (plVar21 != unaff_x25);
            plVar21 = *(long **)(param_1 + 0x90);
          }
          lVar17 = lVar17 + 0x28;
          *(long *)(param_1 + 0x90) = lVar5;
          *(long *)(param_1 + 0x98) = lVar17;
          *(ulong *)(param_1 + 0xa0) = lVar4 + uVar11 * 0x28;
          if (plVar21 != (long *)0x0) {
            __ZdlPv(plVar21);
          }
        }
        *(long *)(param_1 + 0x98) = lVar17;
        FUN_10a183d74(&plStack_90);
        lVar17 = *(long *)(param_1 + 0x98);
        if (*(long *)(param_1 + 0x90) == lVar17) goto LAB_10a166ac0;
        plVar19 = *(long **)(lVar7 + 0x18);
        plVar21 = *(long **)(lVar7 + 0x20);
        if (plVar19 != plVar21) {
          plVar20 = (long *)(lVar17 + -0x28);
          plVar16 = (long *)(lVar17 + -0x18);
          do {
            plVar10 = plVar20;
            func_0x000107c2b05c(plVar20,plVar19);
            plVar18 = *(long **)(lVar17 + -0x20);
            if (plVar18 != (long *)0x0) {
              uVar23 = (long)plVar18 - 1;
              if (((ulong)plVar18 & uVar23) == 0) {
                unaff_x25 = (long *)(uVar23 & (ulong)plVar10);
              }
              else {
                unaff_x25 = plVar10;
                if (plVar18 <= plVar10) {
                  uVar11 = 0;
                  if (plVar18 != (long *)0x0) {
                    uVar11 = (ulong)plVar10 / (ulong)plVar18;
                  }
                  unaff_x25 = (long *)((long)plVar10 - uVar11 * (long)plVar18);
                }
              }
              puVar8 = *(undefined8 **)(*plVar20 + (long)unaff_x25 * 8);
              if (puVar8 != (undefined8 *)0x0) {
                for (plVar22 = (long *)*puVar8; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22)
                {
                  plVar9 = (long *)plVar22[1];
                  if (plVar9 == plVar10) {
                    plVar9 = plVar20;
                    func_0x000107c2b068(plVar20,plVar22 + 2,plVar19);
                    if (((ulong)plVar9 & 1) != 0) goto LAB_10a1669f8;
                  }
                  else {
                    if (((ulong)plVar18 & uVar23) == 0) {
                      plVar9 = (long *)((ulong)plVar9 & uVar23);
                    }
                    else if (plVar18 <= plVar9) {
                      uVar11 = 0;
                      if (plVar18 != (long *)0x0) {
                        uVar11 = (ulong)plVar9 / (ulong)plVar18;
                      }
                      plVar9 = (long *)((long)plVar9 - uVar11 * (long)plVar18);
                    }
                    if (plVar9 != unaff_x25) break;
                  }
                }
              }
            }
            plVar22 = (long *)0x50;
            __Znwm();
            uStack_80 = 0;
            *plVar22 = 0;
            plVar22[1] = (long)plVar10;
            plStack_90 = plVar22;
            plStack_88 = plVar20;
            if (*(char *)((long)plVar19 + 0x17) < '\0') {
              func_0x000107c3192c(plVar22 + 2,*plVar19,plVar19[1]);
            }
            else {
              lVar5 = plVar19[1];
              lVar4 = *plVar19;
              plVar22[4] = plVar19[2];
              plVar22[3] = lVar5;
              plVar22[2] = lVar4;
            }
            plVar22[8] = 0;
            plVar22[7] = 0;
            plVar22[9] = 0;
            plVar22[6] = 0;
            plVar22[5] = 0;
            *(undefined4 *)(plVar22 + 8) = 0xffffffff;
            uStack_80 = CONCAT71(uStack_80._1_7_,1);
            fVar24 = (float)(*(long *)(lVar17 + -0x10) + 1);
            if ((plVar18 == (long *)0x0) || (*(float *)(lVar17 + -8) * (float)plVar18 < fVar24)) {
              uVar23 = 1;
              if ((long *)0x2 < plVar18) {
                uVar23 = (ulong)(((ulong)plVar18 & (long)plVar18 - 1U) != 0);
              }
              plVar9 = (long *)(uVar23 | (long)plVar18 << 1);
              plVar18 = (long *)(long)(fVar24 / *(float *)(lVar17 + -8));
              if (plVar9 <= plVar18) {
                plVar9 = plVar18;
              }
              if ((long)plVar9 - 1U == 0) {
                plVar9 = (long *)0x2;
              }
              else if (((ulong)plVar9 & (long)plVar9 - 1U) != 0) {
                __ZNSt3__112__next_primeEm();
              }
              plVar18 = *(long **)(lVar17 + -0x20);
              if (plVar18 < plVar9) {
LAB_10a166818:
                plVar18 = plVar9;
                if ((ulong)plVar18 >> 0x3d != 0) {
                  func_0x000109ffded8();
                  goto LAB_10a166ac0;
                }
                lVar4 = (long)plVar18 << 3;
                __Znwm();
                lVar5 = *plVar20;
                *plVar20 = lVar4;
                if (lVar5 != 0) {
                  __ZdlPv();
                }
                plVar9 = (long *)0x0;
                *(long **)(lVar17 + -0x20) = plVar18;
                do {
                  *(undefined8 *)(*plVar20 + (long)plVar9 * 8) = 0;
                  plVar9 = (long *)((long)plVar9 + 1);
                } while (plVar18 != plVar9);
                plVar9 = (long *)*plVar16;
                if (plVar9 != (long *)0x0) {
                  plVar12 = (long *)plVar9[1];
                  uVar23 = (long)plVar18 - 1;
                  if (((ulong)plVar18 & uVar23) == 0) {
                    plVar12 = (long *)((ulong)plVar12 & uVar23);
                  }
                  else if (plVar18 <= plVar12) {
                    uVar11 = 0;
                    if (plVar18 != (long *)0x0) {
                      uVar11 = (ulong)plVar12 / (ulong)plVar18;
                    }
                    plVar12 = (long *)((long)plVar12 - uVar11 * (long)plVar18);
                  }
                  *(long **)(*plVar20 + (long)plVar12 * 8) = plVar16;
                  plVar13 = (long *)*plVar9;
                  while (plVar13 != (long *)0x0) {
                    plVar15 = (long *)plVar13[1];
                    if (((ulong)plVar18 & uVar23) == 0) {
                      plVar15 = (long *)((ulong)plVar15 & uVar23);
                    }
                    else if (plVar18 <= plVar15) {
                      uVar11 = 0;
                      if (plVar18 != (long *)0x0) {
                        uVar11 = (ulong)plVar15 / (ulong)plVar18;
                      }
                      plVar15 = (long *)((long)plVar15 - uVar11 * (long)plVar18);
                    }
                    plVar14 = plVar13;
                    if (plVar15 != plVar12) {
                      lVar4 = *plVar20;
                      if (*(long *)(lVar4 + (long)plVar15 * 8) == 0) {
                        *(long **)(lVar4 + (long)plVar15 * 8) = plVar9;
                        plVar12 = plVar15;
                      }
                      else {
                        *plVar9 = *plVar13;
                        *plVar13 = **(undefined8 **)(lVar4 + (long)plVar15 * 8);
                        **(long **)(lVar4 + (long)plVar15 * 8) = (long)plVar13;
                        plVar14 = plVar9;
                      }
                    }
                    plVar9 = plVar14;
                    plVar13 = (long *)*plVar14;
                  }
                }
              }
              else if (plVar9 < plVar18) {
                plVar12 = (long *)(long)((float)*(ulong *)(lVar17 + -0x10) / *(float *)(lVar17 + -8)
                                        );
                if ((plVar18 < (long *)0x3) || (((ulong)plVar18 & (long)plVar18 - 1U) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if ((long *)0x1 < plVar12) {
                  plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
                }
                if (plVar9 <= plVar12) {
                  plVar9 = plVar12;
                }
                if (plVar9 < plVar18) {
                  if (plVar9 != (long *)0x0) goto LAB_10a166818;
                  lVar4 = *plVar20;
                  *plVar20 = 0;
                  if (lVar4 != 0) {
                    __ZdlPv();
                  }
                  plVar18 = (long *)0x0;
                  *(undefined8 *)(lVar17 + -0x20) = 0;
                }
                else {
                  plVar18 = *(long **)(lVar17 + -0x20);
                }
              }
              if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
                unaff_x25 = (long *)((long)plVar18 - 1U & (ulong)plVar10);
              }
              else {
                unaff_x25 = plVar10;
                if (plVar18 <= plVar10) {
                  uVar23 = 0;
                  if (plVar18 != (long *)0x0) {
                    uVar23 = (ulong)plVar10 / (ulong)plVar18;
                  }
                  unaff_x25 = (long *)((long)plVar10 - uVar23 * (long)plVar18);
                }
              }
            }
            lVar4 = *plVar20;
            plVar10 = *(long **)(lVar4 + (long)unaff_x25 * 8);
            if (plVar10 == (long *)0x0) {
              *plVar22 = *plVar16;
              *plVar16 = (long)plVar22;
              *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar16;
              if (*plVar22 != 0) {
                plVar10 = *(long **)(*plVar22 + 8);
                if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
                  plVar10 = (long *)((ulong)plVar10 & (long)plVar18 - 1U);
                }
                else if (plVar18 <= plVar10) {
                  uVar23 = 0;
                  if (plVar18 != (long *)0x0) {
                    uVar23 = (ulong)plVar10 / (ulong)plVar18;
                  }
                  plVar10 = (long *)((long)plVar10 - uVar23 * (long)plVar18);
                }
                *(long **)(*plVar20 + (long)plVar10 * 8) = plVar22;
              }
            }
            else {
              *plVar22 = *plVar10;
              *plVar10 = (long)plVar22;
            }
            *(long *)(lVar17 + -0x10) = *(long *)(lVar17 + -0x10) + 1;
LAB_10a1669f8:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (plVar22 + 5,plVar19);
            lVar4 = plVar19[4];
            plVar22[8] = plVar19[3];
            *(char *)(plVar22 + 9) = (char)lVar4;
            plVar19 = plVar19 + 5;
          } while (plVar19 != plVar21);
        }
      }
    }
    lVar6 = lVar6 + 0x10;
    if (lVar6 == 0x78) {
      return;
    }
  } while( true );
}



/* Entry: 10a166af4; end: 10a166baf;  */

ulong FUN_10a166af4(long *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = *param_1;
  uVar3 = param_1[1];
  pcVar5 = param_2;
  _strlen();
  lVar7 = uVar3 - param_3;
  if (uVar3 < param_3) {
    param_3 = 0xffffffffffffffff;
  }
  else if (pcVar5 != (char *)0x0) {
    lVar1 = lVar2 + uVar3;
    lVar8 = lVar1;
    if ((long)pcVar5 <= lVar7) {
      lVar6 = lVar2 + param_3;
      cVar4 = *param_2;
      do {
        lVar8 = lVar1;
        if (((0xfffffffffffffffe < (ulong)(lVar7 - (long)pcVar5)) ||
            (_memchr(lVar6,(long)cVar4,(lVar7 - (long)pcVar5) + 1), lVar6 == 0)) ||
           (lVar7 = lVar6, _memcmp(), lVar8 = lVar6, (int)lVar7 == 0)) break;
        lVar6 = lVar6 + 1;
        lVar7 = lVar1 - lVar6;
        lVar8 = lVar1;
      } while ((long)pcVar5 <= lVar7);
    }
    param_3 = lVar8 - lVar2;
    if (lVar8 == lVar1) {
      param_3 = 0xffffffffffffffff;
    }
  }
  return param_3;
}



/* Entry: 10a166bb0; end: 10a166c53;  */

bool FUN_10a166bb0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  cVar3 = *(char *)((long)param_1 + 0x17);
  plVar2 = (long *)*param_1;
  if (-1 < (long)cVar3) {
    plVar2 = param_1;
  }
  lVar6 = param_1[1];
  if (-1 < cVar3) {
    lVar6 = (long)cVar3;
  }
  plVar1 = (long *)((long)plVar2 + lVar6);
  plVar4 = plVar2;
  while (((plVar5 = plVar1, 8 < lVar6 && (_memchr(plVar4,0x73,lVar6 + -8), plVar4 != (long *)0x0))
         && (plVar5 = plVar4, *plVar4 != 0x756972616e656373 || (char)plVar4[1] != 'm'))) {
    plVar4 = (long *)((long)plVar4 + 1);
    lVar6 = (long)plVar1 - (long)plVar4;
  }
  return plVar5 != plVar1 && (long)plVar5 - (long)plVar2 != -1;
}



/* Entry: 10a166c54; end: 10a166d4f;  */

void FUN_10a166c54(undefined8 param_1,long param_2)

{
  undefined1 auStack_158 [288];
  undefined8 uStack_38;
  
  FUN_10ab972e0();
  if (*(char *)(param_2 + 0x3a0) == '\0') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f6407c8,0x21);
  }
  else {
    if (*(char *)(param_2 + 0x3a0) != '\x01') {
      FUN_10a009538(auStack_158,&UNK_10f640807);
      __ZNSt13runtime_errorD2Ev(auStack_158);
      goto LAB_10a166d28;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f640757,0x21);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f640779,0x33);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f6407ad,0x1a);
    uStack_38 = *(undefined8 *)(param_2 + 0x3b8);
    FUN_10a1852ac(param_1,&uStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
LAB_10a166d28:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f640837,0x33);
  return;
}



/* Entry: 10a166d50; end: 10a166e37;  */

void FUN_10a166d50(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar3 = param_2;
  func_0x00010ad03278();
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_68,&UNK_10f64022e,param_2);
  uVar1 = puVar3[1];
  puVar2 = (undefined8 *)*puVar3;
  if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar3 + 0x17);
    puVar2 = puVar3;
  }
  puVar3 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar3,0,puVar2,uVar1);
  uStack_48 = puVar3[1];
  uStack_50 = *puVar3;
  lStack_40 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_10ad03508(param_1,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  return;
}



/* Entry: 10a166e38; end: 10a166eab;  */

long FUN_10a166e38(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x77) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x60));
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  lStack_28 = param_1 + 0x30;
  func_0x00010a09ba00(&lStack_28);
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  lStack_28 = param_1;
  func_0x00010a09ba00(&lStack_28);
  return param_1;
}



/* Entry: 10a166eac; end: 10a166f27;  */

undefined * FUN_10a166eac(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
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
  
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar1 = param_1;
  }
  FUN_10ae03140(0,puVar1,uVar3);
  ppuVar7 = &PTR_PTR_113300368;
  ppuVar6 = ppuVar7;
  FUN_10ae079a0();
  FUN_10ae0314c();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined *)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar6[0x13],ppuVar6[0xf],
                  ppuVar6 + 0x14,0x400);
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
    puVar9 = ppuVar6[0x12];
    puVar8 = ppuVar6[0xb];
    uVar2 = 0;
    _clock_gettime_nsec_np();
    uVar3 = uVar2;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar6 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar6 + 0xe);
    uStack_8c0 = uVar3 & 0xffffffff;
    ppuStack_8b0 = ppuVar6 + 0x10;
    puVar4 = *ppuVar6;
    ppuVar7 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar8;
    puStack_8d8 = puVar9;
    uStack_8d0 = (ulong)(puVar9 != (undefined *)0x0);
    uStack_8c8 = uVar2;
    FUN_10ae0784c(puVar4,ppuVar7,&puStack_900,&puStack_918);
  }
  iVar5 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar4);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10a166f28; end: 10a166f8b;  */

undefined8 * FUN_10a166f28(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a166f8c; end: 10a16701f;  */

void FUN_10a166f8c(ulong *param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  ulong *puVar2;
  char cVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  short ****ppppsVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **appuStack_208 [2];
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined1 auStack_1e8 [56];
  undefined8 uStack_1b0;
  char cStack_199;
  undefined **appuStack_188 [19];
  short ***pppsStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar13 = param_2[2];
  if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a16701c);
    (*pcVar4)();
  }
  if (0x7ffffffffffffff7 < uVar13) {
    func_0x000109ffde50();
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    FUN_10a108878(appuStack_208);
    lStack_70 = (long)param_4;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    pppsStack_f0 = (short ***)0x0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE
              (appuStack_208,&pppsStack_f0);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    pppsStack_f0 = (short ***)0x0;
    uStack_e8 = 0;
    uStack_e0 = 0;
LAB_10a16709c:
    do {
      pppuVar8 = appuStack_208;
      uVar14 = 10;
      FUN_10a10894c(pppuVar8,&pppsStack_f0,10);
      if ((*(byte *)((long)pppuVar8 + (long)((*pppuVar8)[-3] + 0x20)) & 5) != 0) goto LAB_10a167144;
      uVar13 = uStack_e8;
      if (-1 < uStack_e0) {
        uVar13 = (ulong)uStack_e0._7_1_;
      }
      if (uVar13 != 0) {
        if (uStack_e0 < 0) {
          if (uStack_e8 == 1) {
            cVar3 = *(char *)pppsStack_f0;
            goto LAB_10a16712c;
          }
          ppppsVar12 = (short ****)pppsStack_f0;
          if (uStack_e8 == 2) goto LAB_10a16710c;
        }
        else if (uStack_e0._7_1_ == 1) {
          cVar3 = (char)pppsStack_f0;
LAB_10a16712c:
          if (cVar3 == '{') goto LAB_10a16709c;
        }
        else if (uStack_e0._7_1_ == 2) {
          ppppsVar12 = &pppsStack_f0;
LAB_10a16710c:
          if (*(short *)ppppsVar12 == 0x3b7d) goto LAB_10a167144;
        }
        FUN_10a0b4ec0(param_2,&pppsStack_f0);
      }
    } while( true );
  }
  uVar14 = param_2[1];
  if (uVar13 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar13;
    puVar7 = param_1;
    if (uVar13 == 0) goto LAB_10a167004;
  }
  else {
    puVar2 = (ulong *)0x19;
    if ((uVar13 | 7) != 0x17) {
      puVar2 = (ulong *)((uVar13 | 7) + 1);
    }
    puVar7 = puVar2;
    __Znwm();
    param_1[1] = uVar13;
    param_1[2] = (ulong)puVar2 | 0x8000000000000000;
    *param_1 = (ulong)puVar7;
  }
  _memmove(puVar7,uVar14,uVar13);
  param_1 = puVar7;
LAB_10a167004:
  *(undefined1 *)((long)param_1 + uVar13) = 0;
  return;
LAB_10a167144:
  if (uStack_e0 < 0) {
    __ZdlPv(pppsStack_f0);
  }
  appuStack_208[0] = &PTR_SUB_1108a5a38;
  ppuStack_1f8 = &PTR_DAT_1108a5a60;
  appuStack_188[0] = &PTR_DAT_1108a5a88;
  ppuStack_1f0 = &PTR_DAT_11088d7b0;
  if (cStack_199 < '\0') {
    __ZdlPv(uStack_1b0);
  }
  ppuStack_1f0 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_1e8);
  ppuVar10 = &PTR_PTR_1108a5aa0;
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_208);
  pppuVar8 = appuStack_188;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105673d7c(appuStack_208);
  __Unwind_Resume();
  uVar5 = *(uint *)(ppuVar10[5] + 0x738);
  pppuVar9 = pppuVar8;
  FUN_10a08fd8c();
  if (uVar5 < 0x406 || ((ulong)pppuVar9 & 0x10) == 0) {
    uVar13 = 0;
    uVar11 = 0;
  }
  else {
    if (*(long *)(ppuVar10[1] + 0x10) < 0) {
LAB_10a167344:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a167348);
      (*pcVar4)();
    }
    uVar13 = *(ulong *)(ppuVar10[1] + 8);
    FUN_10ab945fc();
    uVar5 = (uint)uVar13;
    uVar11 = 0x100;
    if (((*(char *)(ppuVar10 + 0x18) == '\x01') && (2999 < *(int *)((long)ppuVar10 + 0xc4))) &&
       (uVar5 == 0 || uVar5 == 7)) {
      if (*(long *)(ppuVar10[1] + 0x10) < 0) goto LAB_10a167344;
      iVar6 = (int)*(undefined8 *)(ppuVar10[1] + 8);
      func_0x00010ab94764();
      uVar1 = 3;
      if (iVar6 == 0) {
        uVar1 = uVar5;
      }
      uVar13 = (ulong)uVar1;
      uVar11 = 0x100;
    }
  }
  FUN_10ab942a4(pppuVar8,ppuVar10 + 0x18,uVar14,ppuVar10 + 1,uVar11 | uVar13 & 0xffffffff);
  FUN_10a1007e0(&ppuStack_258,pppuVar8);
  if (*(char *)((long)pppuVar8 + 0x17) < '\0') {
    __ZdlPv(*pppuVar8);
  }
  pppuVar8[1] = ppuStack_250;
  *pppuVar8 = ppuStack_258;
  pppuVar8[2] = ppuStack_248;
  return;
}



/* Entry: 10a167020; end: 10a167237;  */

void FUN_10a167020(undefined8 *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  short ****ppppsVar11;
  ulong uVar12;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **appuStack_1d8 [2];
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined1 auStack_1b8 [56];
  undefined8 uStack_180;
  char cStack_169;
  undefined **appuStack_158 [19];
  short ***pppsStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a108878(appuStack_1d8,param_2,0x18);
  lStack_40 = (long)param_3;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  pppsStack_c0 = (short ***)0x0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE
            (appuStack_1d8,&pppsStack_c0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pppsStack_c0 = (short ***)0x0;
  uStack_b8 = 0;
  uStack_b0 = 0;
LAB_10a16709c:
  do {
    pppuVar6 = appuStack_1d8;
    uVar9 = 10;
    FUN_10a10894c(pppuVar6,&pppsStack_c0,10);
    if ((*(byte *)((long)pppuVar6 + (long)((*pppuVar6)[-3] + 0x20)) & 5) != 0) break;
    uVar12 = uStack_b8;
    if (-1 < uStack_b0) {
      uVar12 = (ulong)uStack_b0._7_1_;
    }
    if (uVar12 != 0) {
      if (uStack_b0 < 0) {
        if (uStack_b8 == 1) {
          cVar2 = *(char *)pppsStack_c0;
          goto LAB_10a16712c;
        }
        ppppsVar11 = (short ****)pppsStack_c0;
        if (uStack_b8 == 2) goto LAB_10a16710c;
      }
      else if (uStack_b0._7_1_ == 1) {
        cVar2 = (char)pppsStack_c0;
LAB_10a16712c:
        if (cVar2 == '{') goto LAB_10a16709c;
      }
      else if (uStack_b0._7_1_ == 2) {
        ppppsVar11 = &pppsStack_c0;
LAB_10a16710c:
        if (*(short *)ppppsVar11 == 0x3b7d) break;
      }
      FUN_10a0b4ec0(param_1,&pppsStack_c0);
    }
  } while( true );
  if (uStack_b0 < 0) {
    __ZdlPv(pppsStack_c0);
  }
  appuStack_1d8[0] = &PTR_SUB_1108a5a38;
  ppuStack_1c8 = &PTR_DAT_1108a5a60;
  appuStack_158[0] = &PTR_DAT_1108a5a88;
  ppuStack_1c0 = &PTR_DAT_11088d7b0;
  if (cStack_169 < '\0') {
    __ZdlPv(uStack_180);
  }
  ppuStack_1c0 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_1b8);
  ppuVar8 = &PTR_PTR_1108a5aa0;
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_1d8);
  pppuVar6 = appuStack_158;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105673d7c(appuStack_1d8);
  __Unwind_Resume();
  uVar4 = *(uint *)(ppuVar8[5] + 0x738);
  pppuVar7 = pppuVar6;
  FUN_10a08fd8c();
  if (uVar4 < 0x406 || ((ulong)pppuVar7 & 0x10) == 0) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    if (*(long *)(ppuVar8[1] + 0x10) < 0) {
LAB_10a167344:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a167348);
      (*pcVar3)();
    }
    uVar12 = *(ulong *)(ppuVar8[1] + 8);
    FUN_10ab945fc();
    uVar4 = (uint)uVar12;
    uVar10 = 0x100;
    if (((*(char *)(ppuVar8 + 0x18) == '\x01') && (2999 < *(int *)((long)ppuVar8 + 0xc4))) &&
       (uVar4 == 0 || uVar4 == 7)) {
      if (*(long *)(ppuVar8[1] + 0x10) < 0) goto LAB_10a167344;
      iVar5 = (int)*(undefined8 *)(ppuVar8[1] + 8);
      func_0x00010ab94764();
      uVar1 = 3;
      if (iVar5 == 0) {
        uVar1 = uVar4;
      }
      uVar12 = (ulong)uVar1;
      uVar10 = 0x100;
    }
  }
  FUN_10ab942a4(pppuVar6,ppuVar8 + 0x18,uVar9,ppuVar8 + 1,uVar10 | uVar12 & 0xffffffff);
  FUN_10a1007e0(&ppuStack_228,pppuVar6);
  if (*(char *)((long)pppuVar6 + 0x17) < '\0') {
    __ZdlPv(*pppuVar6);
  }
  pppuVar6[1] = ppuStack_220;
  *pppuVar6 = ppuStack_228;
  pppuVar6[2] = ppuStack_218;
  return;
}



/* Entry: 10a167238; end: 10a167363;  */

void FUN_10a167238(undefined8 *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(uint *)(*(long *)(param_2 + 0x28) + 0x738);
  puVar5 = param_1;
  FUN_10a08fd8c();
  if (uVar3 < 0x406 || ((ulong)puVar5 & 0x10) == 0) {
    uVar7 = 0;
    uVar6 = 0;
  }
  else {
    if (*(long *)(*(long *)(param_2 + 8) + 0x10) < 0) {
LAB_10a167344:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a167348);
      (*pcVar2)();
    }
    uVar7 = *(ulong *)(*(long *)(param_2 + 8) + 8);
    FUN_10ab945fc();
    uVar3 = (uint)uVar7;
    uVar6 = 0x100;
    if (((*(char *)(param_2 + 0xc0) == '\x01') && (2999 < *(int *)(param_2 + 0xc4))) &&
       (uVar3 == 0 || uVar3 == 7)) {
      if (*(long *)(*(long *)(param_2 + 8) + 0x10) < 0) goto LAB_10a167344;
      iVar4 = (int)*(undefined8 *)(*(long *)(param_2 + 8) + 8);
      func_0x00010ab94764();
      uVar1 = 3;
      if (iVar4 == 0) {
        uVar1 = uVar3;
      }
      uVar7 = (ulong)uVar1;
      uVar6 = 0x100;
    }
  }
  FUN_10ab942a4(param_1,param_2 + 0xc0,param_3,param_2 + 8,uVar6 | uVar7 & 0xffffffff);
  FUN_10a1007e0(&uStack_48,param_1);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[2] = uStack_38;
  return;
}



/* Entry: 10a167364; end: 10a167433;  */

void FUN_10a167364(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined1 uStack_30;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = (uint)(0x402020100 >> (((ulong)**(uint **)(param_1 + 8) & 7) << 3));
  if (4 < (ulong)**(uint **)(param_1 + 8)) {
    uVar2 = 0;
  }
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  uStack_30 = (char)param_5[6] == '\x01';
  if ((bool)uStack_30) {
    uStack_58 = param_5[1];
    uStack_60 = *param_5;
    uStack_50 = param_5[2];
    *param_5 = 0;
    param_5[1] = 0;
    uStack_40 = param_5[4];
    uStack_48 = param_5[3];
    param_5[2] = 0;
    param_5[3] = 0;
    uStack_38 = param_5[5];
    param_5[4] = 0;
    param_5[5] = 0;
  }
  FUN_10a309af4(uVar1,uVar2 & 0xff,param_4,param_1 + 0x28,param_3,&uStack_60);
  FUN_10a186da0(&uStack_60);
  return;
}



/* Entry: 10a167434; end: 10a167503;  */

void FUN_10a167434(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = (uint)(0x402020100 >> (((ulong)**(uint **)(param_2 + 8) & 7) << 3));
  if (4 < (ulong)**(uint **)(param_2 + 8)) {
    uVar1 = 0;
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_60,*param_3,param_3[1]);
  }
  else {
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    lStack_50 = param_3[2];
  }
  FUN_10a3057ac(&uStack_40,uVar2,uVar1 & 0xff,&uStack_60,param_4);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  return;
}



/* Entry: 10a167504; end: 10a167773;  */

/* WARNING: Removing unreachable block (ram,0x00010a1676c4) */
/* WARNING: Removing unreachable block (ram,0x00010a167700) */

void FUN_10a167504(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_388;
  long *plStack_380;
  char cStack_378;
  undefined4 auStack_1f0 [2];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 auStack_1b8 [45];
  undefined8 uStack_50;
  undefined7 uStack_48;
  undefined1 uStack_41;
  ulong uStack_40;
  undefined8 uStack_38;
  
  FUN_10a167238(auStack_1b8 + 0x2c,param_2,param_3);
  lVar6 = 0;
  auStack_1b8[0x1b] = 0;
  auStack_1b8[0x1a] = 0;
  auStack_1b8[0x1d] = 0;
  auStack_1b8[0x1c] = 0;
  auStack_1b8[0x1f] = 0;
  auStack_1b8[0x1e] = 0;
  auStack_1f0[0] = 0;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_1d0 = 0;
  uStack_1d8 = 0;
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  auStack_1b8[1] = 0;
  auStack_1b8[0] = 0;
  auStack_1b8[3] = 0;
  auStack_1b8[2] = 0;
  auStack_1b8[5] = 0;
  auStack_1b8[4] = 0;
  auStack_1b8[7] = 0;
  auStack_1b8[6] = 0;
  auStack_1b8[9] = 0;
  auStack_1b8[8] = 0;
  auStack_1b8[0xb] = 0;
  auStack_1b8[10] = 0;
  auStack_1b8[0xd] = 0;
  auStack_1b8[0xc] = 0;
  auStack_1b8[0xf] = 0;
  auStack_1b8[0xe] = 0;
  auStack_1b8[0x11] = 0;
  auStack_1b8[0x10] = 0;
  auStack_1b8[0x13] = 0;
  auStack_1b8[0x12] = 0;
  auStack_1b8[0x15] = 0;
  auStack_1b8[0x14] = 0;
  auStack_1b8[0x17] = 0;
  auStack_1b8[0x16] = 0;
  auStack_1b8[0x19] = 0;
  auStack_1b8[0x18] = 0;
  do {
    *(undefined8 *)((long)auStack_1b8 + lVar6 + 0x10) = 0;
    *(undefined8 *)((long)auStack_1b8 + lVar6 + 8) = 0;
    *(undefined8 *)((long)auStack_1b8 + lVar6) = 0;
    *(undefined8 *)((long)auStack_1b8 + lVar6 + 0x18) = 0xffffffff;
    lVar6 = lVar6 + 0x20;
  } while (lVar6 != 0x100);
  auStack_1b8[0x29] = 0;
  auStack_1b8[0x28] = 0;
  auStack_1b8[0x2b] = 0;
  auStack_1b8[0x2a] = 0;
  auStack_1b8[0x25] = 0;
  auStack_1b8[0x24] = 0;
  auStack_1b8[0x27] = 0;
  auStack_1b8[0x26] = 0;
  auStack_1b8[0x21] = 0;
  auStack_1b8[0x20] = 0;
  auStack_1b8[0x23] = 0;
  auStack_1b8[0x22] = 0;
  lVar7 = *(long *)(param_2 + 8);
  lVar6 = (long)*(char *)(lVar7 + 0x6f);
  if (lVar6 < 0) {
    lVar5 = *(long *)(lVar7 + 0x58);
    lVar6 = *(long *)(lVar7 + 0x60);
  }
  else {
    lVar5 = lVar7 + 0x58;
  }
  func_0x000109237818(lVar5,lVar6);
  if (199 < (uint)lVar5) {
    lVar7 = *(long *)(param_2 + 8);
    lVar6 = (long)*(char *)(lVar7 + 0x6f);
    if (lVar6 < 0) {
      lVar5 = *(long *)(lVar7 + 0x58);
      lVar6 = *(long *)(lVar7 + 0x60);
    }
    else {
      lVar5 = lVar7 + 0x58;
    }
    func_0x000109237af0(&uStack_388,lVar5,lVar6);
    func_0x00010923a6e0(auStack_1f0,&uStack_388);
    func_0x00010923ff08(&uStack_388);
  }
  FUN_10a309a74(&uStack_388,*(undefined8 *)(param_2 + 0x18),auStack_1b8 + 0x2c,param_2 + 0x28,
                auStack_1f0);
  if (cStack_378 == '\x01') {
    FUN_10a195304(&uStack_40,uStack_388,plStack_380);
    uStack_398 = uStack_38;
    uStack_3a0 = uStack_40;
    bVar4 = true;
    if (plStack_380 != (long *)0x0) {
      plVar1 = plStack_380 + 1;
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
        (**(code **)(*plStack_380 + 0x10))(plStack_380);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_380);
      }
    }
  }
  else {
    uStack_3a0 = uStack_3a0 & 0xffffffffffffff00;
    bVar4 = false;
  }
  param_1[1] = uStack_50;
  *param_1 = auStack_1b8[0x2c];
  param_1[2] = CONCAT17(uStack_41,uStack_48);
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (bVar4) {
    param_1[4] = uStack_398;
    param_1[3] = uStack_3a0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  func_0x00010923ff08(auStack_1f0);
  return;
}



/* Entry: 10a167774; end: 10a167787;  */

bool FUN_10a167774(long param_1)

{
  return *(long *)(*(long *)(param_1 + 0x20) + 0x230) != 0;
}



/* Entry: 10a167788; end: 10a1679ff;  */

undefined *** FUN_10a167788(long *param_1,undefined ***param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long alStack_d0 [3];
  long *plStack_b8;
  undefined ***pppuStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined7 uStack_98;
  char cStack_91;
  long lStack_90;
  long lStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined4 uStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_2[0x33];
  if ((ppuVar7 == (undefined **)0x0) && (ppuVar7 = param_2[0x22], ppuVar7 == (undefined **)0x0)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  else {
    ppuStack_68 = &PTR_FUN_110ba9d78;
    pppuStack_50 = &ppuStack_68;
    ppuVar4 = param_2[5];
    ppuStack_60 = ppuVar7;
    func_0x00010a08f238();
    if (ppuVar4 == (undefined **)0x0) {
      puStack_78 = (undefined *)0x0;
    }
    else {
      FUN_10a155a64();
      puStack_78 = *ppuVar4;
    }
    FUN_10a195718(alStack_d0,&ppuStack_68);
    pppuStack_b0 = param_2 + 0x18;
    uStack_70 = SUB84(param_2[1],0);
    FUN_10a1e6ee4(&lStack_a8);
    lStack_88 = param_3[1];
    lStack_90 = *param_3;
    if (param_3[1] != 0) {
      plVar5 = (long *)(param_3[1] + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppuStack_80 = param_2[5] + 6;
    FUN_10a08fd8c();
    FUN_10a195718(param_1,alStack_d0);
    param_1[4] = (long)pppuStack_b0;
    if (cStack_91 < '\0') {
      func_0x000107c3192c(param_1 + 5,lStack_a8,lStack_a0);
    }
    else {
      param_1[6] = lStack_a0;
      param_1[5] = lStack_a8;
      param_1[7] = CONCAT17(cStack_91,uStack_98);
    }
    lVar3 = lStack_88;
    lVar8 = lStack_90;
    lStack_90 = 0;
    lStack_88 = 0;
    param_1[9] = lVar3;
    param_1[8] = lVar8;
    param_1[0xb] = (long)puStack_78;
    param_1[10] = (long)ppuStack_80;
    *(undefined4 *)(param_1 + 0xc) = uStack_70;
    *(undefined1 *)(param_1 + 0xd) = 1;
    if (cStack_91 < '\0') {
      __ZdlPv(lStack_a8);
    }
    if (plStack_b8 == alStack_d0) {
      lVar8 = 0x20;
LAB_10a1678e8:
      (**(code **)(*plStack_b8 + lVar8))();
    }
    else if (plStack_b8 != (long *)0x0) {
      lVar8 = 0x28;
      goto LAB_10a1678e8;
    }
    param_2 = pppuStack_50;
    if (pppuStack_50 == &ppuStack_68) {
      lVar8 = 0x20;
    }
    else {
      if (pppuStack_50 == (undefined ***)0x0) goto LAB_10a167920;
      lVar8 = 0x28;
    }
    (**(code **)((long)*pppuStack_50 + lVar8))();
  }
LAB_10a167920:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_2;
  }
  ___stack_chk_fail();
  plVar5 = (long *)param_1[3];
  if (plVar5 == param_1) {
    lVar8 = 0x20;
LAB_10a167980:
    (**(code **)(*plVar5 + lVar8))();
  }
  else if (plVar5 != (long *)0x0) {
    lVar8 = 0x28;
    goto LAB_10a167980;
  }
  func_0x00010a167a60(alStack_d0);
  if (pppuStack_50 == &ppuStack_68) {
    lVar8 = 0x20;
  }
  else {
    if (pppuStack_50 == (undefined ***)0x0) goto LAB_10a1679f8;
    lVar8 = 0x28;
  }
  (**(code **)((long)*pppuStack_50 + lVar8))();
LAB_10a1679f8:
  __Unwind_Resume();
  func_0x00010a061620(param_2 + 8);
  if (*(char *)((long)param_2 + 0x3f) < '\0') {
    __ZdlPv(param_2[5]);
  }
  pppuVar6 = (undefined ***)param_2[3];
  if (pppuVar6 == param_2) {
    lVar8 = 0x20;
  }
  else {
    if (pppuVar6 == (undefined ***)0x0) {
      return param_2;
    }
    lVar8 = 0x28;
  }
  (**(code **)((long)*pppuVar6 + lVar8))();
  return param_2;
}



/* Entry: 10a167a00; end: 10a167abf;  */

long * FUN_10a167a00(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x00010a061620(param_1 + 8);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10a167ac0; end: 10a167cab;  */

void FUN_10a167ac0(undefined8 *param_1,long param_2,long param_3,uint param_4,undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 auStack_388 [8];
  long *plStack_380;
  undefined4 auStack_1f0 [2];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 auStack_1b8 [44];
  undefined1 uStack_51;
  
  lVar6 = *(long *)(param_2 + 8);
  lVar5 = (long)*(char *)(lVar6 + 0x6f);
  if (lVar5 < 0) {
    lVar4 = *(long *)(lVar6 + 0x58);
    lVar5 = *(long *)(lVar6 + 0x60);
  }
  else {
    lVar4 = lVar6 + 0x58;
  }
  func_0x000109237818(lVar4,lVar5);
  lVar5 = 0;
  auStack_1b8[0x1b] = 0;
  auStack_1b8[0x1a] = 0;
  auStack_1b8[0x1d] = 0;
  auStack_1b8[0x1c] = 0;
  auStack_1b8[0x1f] = 0;
  auStack_1b8[0x1e] = 0;
  auStack_1f0[0] = 0;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_1d0 = 0;
  uStack_1d8 = 0;
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  auStack_1b8[1] = 0;
  auStack_1b8[0] = 0;
  auStack_1b8[3] = 0;
  auStack_1b8[2] = 0;
  auStack_1b8[5] = 0;
  auStack_1b8[4] = 0;
  auStack_1b8[7] = 0;
  auStack_1b8[6] = 0;
  auStack_1b8[9] = 0;
  auStack_1b8[8] = 0;
  auStack_1b8[0xb] = 0;
  auStack_1b8[10] = 0;
  auStack_1b8[0xd] = 0;
  auStack_1b8[0xc] = 0;
  auStack_1b8[0xf] = 0;
  auStack_1b8[0xe] = 0;
  auStack_1b8[0x11] = 0;
  auStack_1b8[0x10] = 0;
  auStack_1b8[0x13] = 0;
  auStack_1b8[0x12] = 0;
  auStack_1b8[0x15] = 0;
  auStack_1b8[0x14] = 0;
  auStack_1b8[0x17] = 0;
  auStack_1b8[0x16] = 0;
  auStack_1b8[0x19] = 0;
  auStack_1b8[0x18] = 0;
  do {
    *(undefined8 *)((long)auStack_1b8 + lVar5 + 0x10) = 0;
    *(undefined8 *)((long)auStack_1b8 + lVar5 + 8) = 0;
    *(undefined8 *)((long)auStack_1b8 + lVar5) = 0;
    *(undefined8 *)((long)auStack_1b8 + lVar5 + 0x18) = 0xffffffff;
    lVar5 = lVar5 + 0x20;
  } while (lVar5 != 0x100);
  auStack_1b8[0x29] = 0;
  auStack_1b8[0x28] = 0;
  auStack_1b8[0x2b] = 0;
  auStack_1b8[0x2a] = 0;
  auStack_1b8[0x25] = 0;
  auStack_1b8[0x24] = 0;
  auStack_1b8[0x27] = 0;
  auStack_1b8[0x26] = 0;
  auStack_1b8[0x21] = 0;
  auStack_1b8[0x20] = 0;
  auStack_1b8[0x23] = 0;
  auStack_1b8[0x22] = 0;
  if (199 < (uint)lVar4) {
    lVar6 = *(long *)(param_2 + 8);
    lVar5 = (long)*(char *)(lVar6 + 0x6f);
    if (lVar5 < 0) {
      lVar4 = *(long *)(lVar6 + 0x58);
      lVar5 = *(long *)(lVar6 + 0x60);
    }
    else {
      lVar4 = lVar6 + 0x58;
    }
    func_0x000109237af0(auStack_388,lVar4,lVar5);
    func_0x00010923a6e0(auStack_1f0,auStack_388);
    func_0x00010923ff08(auStack_388);
  }
  FUN_10a309bec(auStack_388,*(undefined8 *)(param_2 + 0x18),auStack_1f0,param_2 + 0x28,
                param_2 + 0x38,param_3 + 0x28,param_3 + 0x38,param_5,param_4 & 0xf);
  FUN_10a195524(&uStack_3a0,&uStack_51,auStack_388);
  if (plStack_380 != (long *)0x0) {
    plVar1 = plStack_380 + 1;
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
      (**(code **)(*plStack_380 + 0x10))(plStack_380);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_380);
    }
  }
  param_1[1] = uStack_398;
  *param_1 = uStack_3a0;
  func_0x00010923ff08(auStack_1f0);
  return;
}



/* Entry: 10a167cac; end: 10a16869f;  */

/* WARNING: Removing unreachable block (ram,0x00010a167fb4) */
/* WARNING: Removing unreachable block (ram,0x00010a168174) */
/* WARNING: Removing unreachable block (ram,0x00010a167d48) */
/* WARNING: Removing unreachable block (ram,0x00010a168148) */
/* WARNING: Removing unreachable block (ram,0x00010a167fa4) */
/* WARNING: Removing unreachable block (ram,0x00010a167fc4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a167cac(undefined8 param_1,long *param_2)

{
  ulong *******pppppppuVar1;
  undefined8 *******pppppppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong *******pppppppuVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  ulong *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  ulong ******ppppppuVar12;
  undefined **ppuVar13;
  ulong uVar14;
  long *******ppppppplVar15;
  ulong *******pppppppuVar16;
  long lVar17;
  ulong uVar18;
  ulong *******pppppppuStack_230;
  ulong *******pppppppuStack_228;
  undefined8 uStack_220;
  ulong *******pppppppuStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined8 *******pppppppuStack_1f0;
  ulong *******pppppppuStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1c0 [24];
  long alStack_1a8 [3];
  undefined8 *******pppppppuStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 *******pppppppuStack_178;
  ulong *******pppppppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 *******pppppppuStack_130;
  ulong *******pppppppuStack_128;
  ulong *******pppppppuStack_120;
  ulong *******pppppppuStack_118;
  undefined4 auStack_110 [2];
  ulong *******pppppppuStack_108;
  long lStack_100;
  long alStack_f8 [6];
  char cStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  long *******ppppppplStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  ulong *******pppppppuStack_98;
  ulong *******pppppppuStack_90;
  byte bStack_81;
  ulong *******pppppppuStack_80;
  undefined8 uStack_78;
  char cStack_69;
  undefined4 uStack_68;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x108))();
  (**(code **)(*param_2 + 0xe0))();
  func_0x000107c2b054(alStack_f8,"");
  func_0x000107c2b054(&pppppppuStack_230,"");
  FUN_10a107e2c(&pppppppuStack_98,alStack_f8,&pppppppuStack_230,0);
  if ((long)uStack_220 < 0) {
    __ZdlPv(pppppppuStack_230);
  }
  uStack_68 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (&pppppppuStack_80,param_1);
  func_0x000107c2c4d8(&pppppppuStack_98,&UNK_10f63f99c,0x22);
  FUN_10a08d2e0(&ppppppplStack_b0,&pppppppuStack_98);
  uStack_b8 = uStack_a8;
  if (-1 < (char)bStack_99) {
    uStack_b8 = (ulong)bStack_99;
    ppppppplStack_b0 = (long *******)&ppppppplStack_b0;
  }
  uVar14 = uStack_b8 >> 3;
  if (((ulong)ppppppplStack_b0 & 7) == 0) {
    if (uStack_b8 < 8) goto LAB_10a167dec;
    uVar18 = 0;
    ppppppplVar15 = ppppppplStack_b0;
    do {
      uVar18 = uVar18 * 0x40 + 0x9e3779b9 + (uVar18 >> 2) + (long)*ppppppplVar15 ^ uVar18;
      uVar14 = uVar14 - 1;
      ppppppplVar15 = ppppppplVar15 + 1;
    } while (uVar14 != 0);
  }
  else if (uStack_b8 < 8) {
LAB_10a167dec:
    uVar18 = 0;
  }
  else {
    uVar18 = 0;
    ppppppplVar15 = ppppppplStack_b0;
    do {
      uVar18 = uVar18 * 0x40 + 0x9e3779b9 + (uVar18 >> 2) + (long)*ppppppplVar15 ^ uVar18;
      uVar14 = uVar14 - 1;
      ppppppplVar15 = ppppppplVar15 + 1;
    } while (uVar14 != 0);
  }
  alStack_f8[0] = 0;
  if ((uStack_b8 & 7) != 0) {
    _memcpy(alStack_f8,(long)ppppppplStack_b0 + (uStack_b8 - (uStack_b8 & 7)));
  }
  uVar18 = uVar18 * 0x40 + 0x9e3779b9 + (uVar18 >> 2) + alStack_f8[0] ^ uVar18;
  uStack_c0 = uStack_b8 + 0x9e3779b9 + uVar18 * 0x40 + (uVar18 >> 2) ^ uVar18;
  plVar9 = plVar8;
  FUN_10a16603c(plVar8,&uStack_c0);
  if (*plVar9 != 0) {
    return;
  }
  FUN_10a0f1e30(alStack_f8,&pppppppuStack_98,0);
  if (cStack_c8 != '\x01') {
    pppppppuVar16 = (ulong *******)0x0;
    goto LAB_10a167f7c;
  }
  FUN_10a0f1f4c(&pppppppuStack_230,alStack_f8);
  pppppppuVar16 = pppppppuStack_230;
  if (pppppppuStack_230 == pppppppuStack_228) goto LAB_10a167f7c;
  lStack_100 = (long)pppppppuStack_228 - (long)pppppppuStack_230;
  pppppppuStack_108 = pppppppuStack_230;
  auStack_110[0] = 1;
  (**(code **)(*param_2 + 0xa0))(&pppppppuStack_120,param_2,auStack_110);
  pppppppuStack_130 = (undefined8 *******)0x0;
  pppppppuStack_128 = (ulong *******)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_140 = 0x3f800000;
  FUN_10a08d2e0(&pppppppuStack_230,&pppppppuStack_98);
  pppppppuVar1 = pppppppuStack_228;
  pppppppuVar6 = pppppppuStack_230;
  if (-1 < (long)uStack_220) {
    pppppppuVar1 = (ulong *******)(uStack_220 >> 0x38);
    pppppppuVar6 = (ulong *******)&pppppppuStack_230;
  }
  pppppppuVar10 = pppppppuVar6;
  FUN_10a186dec(pppppppuVar6,pppppppuVar1,&DAT_10f3f8885,8);
  if ((int)pppppppuVar10 == 0) {
    if ((ulong *******)0x7ffffffffffffff7 < pppppppuVar1) {
      func_0x000109ffde50();
      goto LAB_10a1684f4;
    }
    if (pppppppuVar1 < (ulong *******)0x17) {
      uStack_168 = CONCAT17((char)pppppppuVar1,(undefined7)uStack_168);
      pppppppuVar11 = &pppppppuStack_178;
      if (pppppppuVar1 != (ulong *******)0x0) goto LAB_10a16803c;
    }
    else {
      pppppppuVar2 = (undefined8 *******)0x19;
      if (((ulong)pppppppuVar1 | 7) != 0x17) {
        pppppppuVar2 = (undefined8 *******)(((ulong)pppppppuVar1 | 7) + 1);
      }
      pppppppuVar11 = pppppppuVar2;
      __Znwm();
      uStack_168 = (ulong)pppppppuVar2 | 0x8000000000000000;
      pppppppuStack_178 = pppppppuVar11;
      pppppppuStack_170 = pppppppuVar1;
LAB_10a16803c:
      _memmove(pppppppuVar11,pppppppuVar6,pppppppuVar1);
    }
    *(undefined1 *)((long)pppppppuVar11 + (long)pppppppuVar1) = 0;
  }
  else {
    FUN_10a00280c(&pppppppuStack_178,pppppppuVar1 + 1,0);
    pppppppuVar2 = pppppppuStack_178;
    if (-1 < (long)uStack_168) {
      pppppppuVar2 = &pppppppuStack_178;
    }
    _memcpy(pppppppuVar2,pppppppuVar6,pppppppuVar1 + -1);
    puVar5 = (undefined8 *)((long)pppppppuVar2 + (long)(pppppppuVar1 + -1));
    puVar5[1] = 0x6e6f697463656c66;
    *puVar5 = 0x65722e6c6174656d;
  }
  if ((long)uStack_220 < 0) {
    __ZdlPv(pppppppuStack_230);
  }
  FUN_10a0f19e0(&pppppppuStack_230,&pppppppuStack_178,0);
  if ((pppppppuStack_230 != (ulong *******)0x0) && (*(uint *)(pppppppuStack_230 + 1) < 5)) {
    ppppppuVar12 = *pppppppuStack_230;
    (*(code *)(*ppppppuVar12)[2])();
    if (((ulong)ppppppuVar12 & 1) != 0) {
      FUN_10a0f20c0(&pppppppuStack_190,&pppppppuStack_230);
      uVar14 = uStack_188;
      pppppppuVar2 = pppppppuStack_190;
      if (-1 < (long)uStack_180) {
        uVar14 = uStack_180 >> 0x38;
        pppppppuVar2 = &pppppppuStack_190;
      }
      func_0x00010923a7f0(&pppppppuStack_1f0,pppppppuVar2,uVar14);
      FUN_10a19577c(&uStack_160,&pppppppuStack_1f0);
      func_0x000109243058(&pppppppuStack_1f0);
      if ((long)uStack_180 < 0) {
        __ZdlPv(pppppppuStack_190);
      }
      FUN_10a0f1ea0(&pppppppuStack_230);
      if ((long)uStack_168 < 0) {
        __ZdlPv(pppppppuStack_178);
      }
      ppuVar13 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      if ((**(long **)*ppuVar13 == 0) || ((*(byte *)(**(long **)*ppuVar13 + 0x79) & 1) == 0)) {
        pppppppuStack_228 = pppppppuStack_90;
        pppppppuStack_230 = pppppppuStack_98;
        uStack_220._7_1_ = bStack_81;
        uStack_210 = uStack_78;
        pppppppuStack_218 = pppppppuStack_80;
        uStack_208._7_1_ = cStack_69;
        uStack_200 = uStack_68;
        pppppppuVar1 = pppppppuStack_90;
        pppppppuVar6 = pppppppuStack_98;
        if (-1 < (char)bStack_81) {
          pppppppuVar1 = (ulong *******)(ulong)bStack_81;
          pppppppuVar6 = (ulong *******)&pppppppuStack_230;
        }
        pppppppuVar10 = pppppppuVar6;
        FUN_10a186dec(pppppppuVar6,pppppppuVar1,&DAT_10f3f8885,8);
        if ((int)pppppppuVar10 == 0) {
          if ((ulong *******)0x7ffffffffffffff7 < pppppppuVar1) {
            func_0x000109ffde50();
            goto LAB_10a1684f4;
          }
          if (pppppppuVar1 < (ulong *******)0x17) {
            uStack_1e0 = CONCAT17((char)pppppppuVar1,(undefined7)uStack_1e0);
            pppppppuVar11 = &pppppppuStack_1f0;
            if (pppppppuVar1 != (ulong *******)0x0) goto LAB_10a168268;
          }
          else {
            pppppppuVar2 = (undefined8 *******)0x19;
            if (((ulong)pppppppuVar1 | 7) != 0x17) {
              pppppppuVar2 = (undefined8 *******)(((ulong)pppppppuVar1 | 7) + 1);
            }
            pppppppuVar11 = pppppppuVar2;
            __Znwm();
            uStack_1e0 = (ulong)pppppppuVar2 | 0x8000000000000000;
            pppppppuStack_1f0 = pppppppuVar11;
            pppppppuStack_1e8 = pppppppuVar1;
LAB_10a168268:
            _memmove(pppppppuVar11,pppppppuVar6,pppppppuVar1);
          }
          *(undefined1 *)((long)pppppppuVar11 + (long)pppppppuVar1) = 0;
        }
        else {
          FUN_10a00280c(&pppppppuStack_1f0,(undefined1 *)((long)pppppppuVar1 + 7),0);
          pppppppuVar2 = pppppppuStack_1f0;
          if (-1 < (long)uStack_1e0) {
            pppppppuVar2 = &pppppppuStack_1f0;
          }
          _memcpy(pppppppuVar2,pppppppuVar6,pppppppuVar1 + -1);
          puVar5 = (undefined8 *)((long)pppppppuVar2 + (long)(pppppppuVar1 + -1));
          *puVar5 = 0x6d2e7972616e6962;
          *(undefined8 *)((long)puVar5 + 7) = 0x62696c6c6174656d;
        }
        if ((char)uStack_220._7_1_ < '\0') {
          __ZdlPv(pppppppuStack_230);
        }
        pppppppuStack_228 = pppppppuStack_1e8;
        pppppppuStack_230 = pppppppuStack_1f0;
        uStack_220 = uStack_1e0;
        FUN_10a08ccc0(&pppppppuStack_1f0,param_2,&pppppppuStack_230);
        pppppppuVar1 = pppppppuStack_128;
        pppppppuStack_128 = pppppppuStack_1e8;
        pppppppuStack_130 = pppppppuStack_1f0;
        pppppppuStack_1f0 = (undefined8 *******)0x0;
        pppppppuStack_1e8 = (ulong *******)0x0;
        if (pppppppuVar1 != (ulong *******)0x0) {
          pppppppuVar6 = pppppppuVar1 + 1;
          do {
            ppppppuVar12 = *pppppppuVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
            if (bVar4) {
              *pppppppuVar6 = (ulong ******)((long)ppppppuVar12 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppppuVar12 == (ulong ******)0x0) {
            (*(code *)(*pppppppuVar1)[2])(pppppppuVar1);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar1);
          }
        }
        pppppppuVar1 = pppppppuStack_1e8;
        if (pppppppuStack_1e8 != (ulong *******)0x0) {
          pppppppuVar6 = pppppppuStack_1e8 + 1;
          do {
            ppppppuVar12 = *pppppppuVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
            if (bVar4) {
              *pppppppuVar6 = (ulong ******)((long)ppppppuVar12 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppppuVar12 == (ulong ******)0x0) {
            (*(code *)(*pppppppuStack_1e8)[2])(pppppppuStack_1e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar1);
          }
        }
        if (uStack_208._7_1_ < '\0') {
          __ZdlPv(pppppppuStack_218);
        }
        if ((long)uStack_220 < 0) {
          __ZdlPv(pppppppuStack_230);
        }
      }
      pppppppuStack_230 = pppppppuStack_120;
      pppppppuStack_228 = pppppppuStack_118;
      if (pppppppuStack_118 == (ulong *******)0x0) {
        pppppppuStack_218 = (ulong *******)0x0;
LAB_10a1683b0:
        uStack_208 = (ulong *******)0x0;
      }
      else {
        pppppppuVar1 = pppppppuStack_118 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar1,0x10);
          if (bVar4) {
            *pppppppuVar1 = (ulong ******)((long)*pppppppuVar1 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        pppppppuStack_218 = pppppppuStack_118;
        if (pppppppuStack_118 == (ulong *******)0x0) goto LAB_10a1683b0;
        pppppppuVar1 = pppppppuStack_118 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar1,0x10);
          if (bVar4) {
            *pppppppuVar1 = (ulong ******)((long)*pppppppuVar1 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uStack_208 = pppppppuStack_118;
        if (pppppppuStack_118 != (ulong *******)0x0) {
          pppppppuVar1 = pppppppuStack_118 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar1,0x10);
            if (bVar4) {
              *pppppppuVar1 = (ulong ******)((long)*pppppppuVar1 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      FUN_10a166100(plVar8,&uStack_c0,&pppppppuStack_230,&pppppppuStack_130,&uStack_160);
      lVar17 = 0x20;
      do {
        func_0x00010a0eb124((long)&pppppppuStack_230 + lVar17);
        lVar17 = lVar17 + -0x10;
      } while (lVar17 != -0x10);
      func_0x000109243058(&uStack_160);
      pppppppuVar1 = pppppppuStack_128;
      if (pppppppuStack_128 != (ulong *******)0x0) {
        pppppppuVar6 = pppppppuStack_128 + 1;
        do {
          ppppppuVar12 = *pppppppuVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
          if (bVar4) {
            *pppppppuVar6 = (ulong ******)((long)ppppppuVar12 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppppppuVar12 == (ulong ******)0x0) {
          (*(code *)(*pppppppuStack_128)[2])(pppppppuStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar1);
        }
      }
      if (pppppppuStack_118 != (ulong *******)0x0) {
        pppppppuVar1 = pppppppuStack_118 + 1;
        do {
          ppppppuVar12 = *pppppppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar1,0x10);
          if (bVar4) {
            *pppppppuVar1 = (ulong ******)((long)ppppppuVar12 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppppppuVar12 == (ulong ******)0x0) {
          (*(code *)(*pppppppuStack_118)[2])(pppppppuStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuStack_118);
        }
      }
LAB_10a167f7c:
      if (cStack_c8 == '\x01') {
        FUN_10a0f1ea0(alStack_f8);
      }
      if (pppppppuVar16 != (ulong *******)0x0) {
        __ZdlPv(pppppppuVar16);
      }
      return;
    }
  }
  func_0x000107c2b054(auStack_1c0,&UNK_10f63f9d0);
  FUN_10a012db0(alStack_1a8,auStack_1c0,&UNK_10f63fa72);
  pppppppuVar16 = pppppppuStack_228;
  if (-1 < (long)pppppppuStack_218) {
    uStack_220 = (ulong)pppppppuStack_218 >> 0x38;
    pppppppuVar16 = (ulong *******)&pppppppuStack_228;
  }
  plVar8 = alStack_1a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar8,pppppppuVar16,uStack_220);
  uStack_188 = plVar8[1];
  pppppppuStack_190 = (undefined8 *******)*plVar8;
  uStack_180 = plVar8[2];
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = 0;
  FUN_10a012db0(&pppppppuStack_1f0,&pppppppuStack_190,&DAT_10f3b3c06);
  FUN_10a0029c0(&pppppppuStack_1f0);
LAB_10a1684f4:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a1684f8);
  (*pcVar7)();
}



/* Entry: 10a1686a0; end: 10a16872b;  */

void FUN_10a1686a0(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*param_2 != 0) {
    lVar3 = param_2[2];
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(*param_2 + 0x18);
    *(int *)(param_1 + 0x20) = (int)lVar3;
    lVar3 = param_2[1];
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar3 + 0x18);
    uVar1 = *(uint *)(lVar3 + 0x24);
    uVar2 = (ulong)uVar1;
    *(uint *)(param_1 + 0x34) = uVar1;
    func_0x000109296680();
    *(int *)(param_1 + 0x2c) = (int)uVar2;
    lVar3 = param_2[1];
    uVar2 = (ulong)*(uint *)(lVar3 + 0x18) + (ulong)*(uint *)(param_1 + 0x18) * (uVar2 & 0xffffffff)
    ;
    if ((uVar2 >> 0x20 == 0) && (uVar1 = *(uint *)((long)param_2 + 0x14), uVar1 < 0xc)) {
      *(int *)(param_1 + 0x28) = (int)uVar2;
      *(uint *)(param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar3 + 0x1c);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 10a16872c; end: 10a168823;  */

void FUN_10a16872c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  long lStack_60;
  long *plStack_58;
  
  plVar3 = (long *)0x20;
  lStack_60 = param_3;
  __Znwm();
  plVar5 = plVar3 + 1;
  *plVar5 = 0;
  *plVar3 = (long)&PTR_FUN_110ba9df8;
  plVar3[2] = 0;
  plVar3[3] = param_3;
  uStack_70 = param_4 & 0xffffffff;
  uStack_64 = 6;
  uStack_68 = param_5;
  plStack_58 = plVar3;
  func_0x00010928b768(param_1,param_2,&uStack_70,&lStack_60);
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
  return;
}



/* Entry: 10a168824; end: 10a16892f;  */

void FUN_10a168824(long *param_1,long *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8)

{
  long *plVar1;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  long *plStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  
  if (param_2 != (long *)0x0) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0xb8))();
    if (plVar1 == (long *)0x0) {
      return;
    }
    if ((param_8 & 1) == 0) {
      iStack_70 = (int)param_1[6];
    }
    else {
      iStack_70 = 0;
    }
    if (iStack_70 == param_3) {
      return;
    }
    if (*(int *)((long)plVar1 + 0x34) == 3) {
      iStack_54 = *(int *)((long)plVar1 + 0x2c) * 6;
    }
    else if (*(int *)((long)plVar1 + 0x34) == 2) {
      iStack_54 = *(int *)((long)plVar1 + 0x2c);
    }
    else {
      iStack_54 = 1;
    }
    uStack_5c = (undefined4)plVar1[6];
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_78 = param_4;
    uStack_74 = param_5;
    iStack_6c = param_3;
    plStack_68 = plVar1;
    (**(code **)(*param_2 + 0x38))(param_2,param_6,param_7,0,0,0,0,0,&uStack_78,1);
  }
  *(int *)(param_1 + 6) = param_3;
  return;
}



/* Entry: 10a168930; end: 10a168bcf;  */

void FUN_10a168930(undefined8 param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  ppuVar5 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar8 = *ppuVar5;
  if (((puVar8 != (undefined *)0x0) && (puVar8[0xc0] == '\x01')) && (*(long *)(puVar8 + 0x80) != 0))
  {
    FUN_10a08dbac(puVar8 + 0x18);
  }
  plVar1 = (long *)*param_2;
  uVar2 = param_2[1];
  __ZNSt3__115recursive_mutex4lockEv(uVar2);
  FUN_10a012fec(&plStack_a8,param_1,plVar1);
  plVar6 = plStack_a8;
  (**(code **)(*plStack_a8 + 0x48))();
  (**(code **)(*plVar6 + 0x48))();
  plVar7 = param_3;
  (**(code **)(*param_3 + 0xb8))(param_3);
  FUN_10a168824(param_3,plVar6,6,0x6000,0x200,0x1000,0x100,0);
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_70 = *param_5;
  uStack_68 = *(undefined4 *)(param_5 + 1);
  uStack_7c = *param_4;
  uStack_74 = *(undefined4 *)(param_4 + 1);
  plStack_98 = (long *)0x0;
  (**(code **)(*plVar6 + 0x68))(plVar6,plVar7,param_6,&plStack_98,1,6);
  FUN_10a168824(param_3,plVar6,5,0x200,8,0x100,8,0);
  (**(code **)(*plVar6 + 0x40))(plVar6);
  plStack_98 = plStack_a8;
  (**(code **)(*plVar1 + 0x30))(plVar1,0,0,0,0,&plStack_98,1);
  if (plStack_a0 != (long *)0x0) {
    plVar1 = plStack_a0 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  __ZNSt3__115recursive_mutex6unlockEv(uVar2);
  return;
}



/* Entry: 10a168bd0; end: 10a16900b;  */

void FUN_10a168bd0(long *param_1,undefined8 *param_2,ulong param_3,long *param_4,undefined8 *param_5
                  ,undefined8 *param_6,undefined4 param_7,ulong param_8,long param_9)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined **ppuVar6;
  long *plVar7;
  long lVar8;
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  undefined4 uStack_f8;
  ulong uStack_f4;
  int iStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  long **pplStack_d0;
  long **pplStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  
  ppuVar6 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  plVar7 = (long *)(*ppuVar6 + 0x18);
  plStack_98 = (long *)0x0;
  if (*ppuVar6 != (undefined *)0x0) {
    plStack_98 = plVar7;
    FUN_10a08e0bc();
    plStack_b0 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    if ((((param_8 & 1) == 0) && (plVar7 != (long *)0x0)) && ((long *)plVar7[3] == param_1)) {
      bVar4 = false;
      goto LAB_10a168d20;
    }
  }
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  plVar7 = param_1;
  func_0x00010a08f140();
  uVar2 = *(undefined8 *)(*plVar7 + 0x10);
  param_8 = *(ulong *)(*plVar7 + 0x18);
  __ZNSt3__115recursive_mutex4lockEv(param_8);
  FUN_10a012fec(&plStack_110,param_1,uVar2);
  plVar7 = plStack_a8;
  plStack_a8 = plStack_108;
  plStack_b0 = plStack_110;
  plStack_110 = (long *)0x0;
  plStack_108 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar1 = plStack_108 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_b0;
  (**(code **)(*plStack_b0 + 0x48))();
  bVar4 = true;
LAB_10a168d20:
  pplStack_d0 = &plStack_b0;
  pplStack_c8 = &plStack_98;
  puStack_c0 = param_2;
  plStack_b8 = param_4;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  if (param_9 == 0) {
    lStack_100 = *param_4;
    if (lStack_100 != 0) {
      if (*(int *)(lStack_100 + 0x34) == 3) {
        iStack_ec = *(int *)(lStack_100 + 0x2c) * 6;
      }
      else if (*(int *)(lStack_100 + 0x34) == 2) {
        iStack_ec = *(int *)(lStack_100 + 0x2c);
      }
      else {
        iStack_ec = 1;
      }
      plStack_108 = (long *)0x700000000;
      plStack_110 = (long *)0x40000000000;
      uStack_f8 = 0;
      uStack_f4 = (ulong)*(uint *)(lStack_100 + 0x30);
      (**(code **)(*plVar7 + 0x38))(plVar7,1,0x100,0,0,0,0,0,&plStack_110,1);
    }
  }
  else {
    FUN_10a168824(param_9,plVar7,7,0x6000,0x400,0x1000,0x100,0);
  }
  plStack_108 = (long *)((ulong)plStack_108 & 0xffffffff00000000);
  lStack_100 = 0;
  uStack_e8 = *param_6;
  uStack_e0 = *(undefined4 *)(param_6 + 1);
  uStack_f4 = *param_5;
  iStack_ec = *(int *)(param_5 + 1);
  plStack_110 = (long *)(param_3 & 0xffffffff);
  uStack_f8 = param_7;
  (**(code **)(*plVar7 + 0x60))(plVar7,*param_2,*param_4,&plStack_110,1,7);
  if (param_9 == 0) {
    lVar8 = *param_4;
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x34) == 3) {
        iStack_6c = *(int *)(lVar8 + 0x2c) * 6;
      }
      else if (*(int *)(lVar8 + 0x34) == 2) {
        iStack_6c = *(int *)(lVar8 + 0x2c);
      }
      else {
        iStack_6c = 1;
      }
      uStack_88 = 0x500000007;
      uStack_90 = 0x800000400;
      uStack_74 = *(undefined4 *)(lVar8 + 0x30);
      uStack_78 = 0;
      uStack_70 = 0;
      lStack_80 = lVar8;
      (**(code **)(*plVar7 + 0x38))(plVar7,0x100,8,0,0,0,0,0,&uStack_90,1);
    }
  }
  else {
    FUN_10a168824(param_9,plVar7,5,0x400,8,0x100,8,0);
  }
  (**(code **)(*plVar7 + 0x40))(plVar7);
  FUN_10a16900c(&pplStack_d0);
  plVar7 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (bVar4) {
    __ZNSt3__115recursive_mutex6unlockEv(param_8);
  }
  return;
}



/* Entry: 10a16900c; end: 10a16906b;  */

undefined8 * FUN_10a16900c(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  
  if (*(long *)*param_1 == 0) {
    lVar2 = *(long *)param_1[1];
    if ((*(byte *)(lVar2 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a16906c);
      (*pcVar1)();
    }
    FUN_10a097338(lVar2,param_1[2]);
    FUN_10a0971e4(lVar2,param_1[3]);
  }
  else {
    FUN_10a08e2f4();
  }
  return param_1;
}



/* Entry: 10a16906c; end: 10a16954b;  */

void FUN_10a16906c(uint *param_1,long *param_2,int *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  uint auStack_90 [7];
  uint auStack_74 [3];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_1 + 4;
  puVar13[0] = 0;
  puVar13[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 4;
  param_1[0xb] = 5;
  param_1[8] = 2;
  param_1[9] = 3;
  param_1[0xc] = 0;
  uVar17 = param_3[1];
  uVar2 = param_3[2];
  *param_1 = uVar17;
  param_1[1] = uVar2;
  uVar14 = param_3[3];
  uVar16 = param_3[4];
  uVar12 = uVar14;
  if (uVar14 < 2) {
    uVar12 = 1;
  }
  param_1[2] = uVar12;
  param_1[3] = 1;
  if (0x26 < uVar16 - 0x30) {
LAB_10a169108:
    uVar12 = param_3[5];
    if (uVar12 == 0) {
      lVar19 = *param_2;
    }
    else {
      if (0x56 < uVar12) goto LAB_10a169524;
      lVar19 = *param_2;
      if (*(int *)(lVar19 + (ulong)uVar12 * 0x10 + 0x194) != 0) {
        uVar16 = uVar12;
      }
    }
    if (*(int *)(lVar19 + 0x3f4) == 0 && uVar16 == 0x26) {
      uVar16 = 4;
    }
    uVar18 = (ulong)uVar16;
    param_1[7] = uVar16;
    if ((((*(int *)(lVar19 + 0x734) == 2) && ((param_3[6] & 1U) != 0)) &&
        (((uint)param_3[6] >> 5 & 1) == 0)) && (uVar16 == 4)) {
      uVar18 = 0x27;
      param_1[7] = 0x27;
    }
    if (*param_3 - 1U < 3) {
      uVar16 = *(uint *)(&UNK_10e49afe8 + (ulong)(*param_3 - 1U) * 4);
    }
    else {
      uVar16 = 0;
    }
    *puVar13 = uVar16;
    uVar16 = param_3[7];
    if ((0x3e < uVar16 - 2) ||
       (uVar12 = uVar16, (1L << ((ulong)(uVar16 - 2) & 0x3f) & 0x4000000040004045U) == 0)) {
      if (uVar16 < 2) {
        uVar12 = 1;
      }
      else {
        uVar12 = 0;
      }
    }
    param_1[6] = uVar12;
    uVar12 = param_3[8];
    uVar3 = param_3[9];
    if ((uVar3 == 0) || (uVar12 != 3)) {
      FUN_10a094b9c(uVar12,uVar16);
    }
    else {
      if ((uVar2 | uVar17 | uVar14) < 2) {
        uVar12 = 1;
      }
      else {
        uVar12 = 1;
        uVar6 = (ulong)uVar17;
        uVar9 = (ulong)uVar2;
        uVar11 = (ulong)uVar14;
        do {
          uVar10 = uVar11;
          uVar8 = uVar9;
          uVar12 = uVar12 + 1;
          uVar17 = (uint)(uVar6 >> 1);
          if (uVar17 < 2) {
            uVar17 = 1;
          }
          uVar7 = (ulong)uVar17;
          uVar17 = (uint)(uVar8 >> 1);
          if (uVar17 < 2) {
            uVar17 = 1;
          }
          uVar9 = (ulong)uVar17;
          uVar17 = (uint)(uVar10 >> 1);
          if (uVar17 < 2) {
            uVar17 = 1;
          }
          uVar11 = (ulong)uVar17;
          uVar17 = (uint)uVar6;
          uVar6 = uVar7;
        } while (((3 < uVar17) || (3 < (uint)uVar8)) || (3 < (uint)uVar10));
      }
      if (uVar3 <= uVar12) {
        uVar12 = uVar3;
      }
    }
    param_1[3] = uVar12;
    param_1[5] = 0;
    uVar12 = param_3[6];
    uVar17 = (uint)uVar18;
    if ((uVar12 & 1) == 0) {
      if (uVar16 < 2) {
        uVar14 = 0x20;
        goto LAB_10a1692bc;
      }
      uVar14 = 0;
    }
    else {
      ppuVar5 = &PTR_DAT_110ae4700 + uVar18 * 4;
      if (0x56 < uVar17) {
        ppuVar5 = &PTR_DAT_110ae4700;
      }
      uVar14 = 4;
      if ((*(byte *)((long)ppuVar5 + 0x14) & 1) != 0) {
        uVar14 = 8;
      }
LAB_10a1692bc:
      param_1[5] = uVar14;
    }
    if ((uVar12 >> 5 & 1) != 0) {
      uVar14 = uVar14 | 0x20;
      param_1[5] = uVar14;
    }
    if (uVar16 < 2) {
      uVar14 = uVar14 | 1;
      param_1[5] = uVar14;
      ppuVar5 = &PTR_DAT_110ae4700 + uVar18 * 4;
      if (0x56 < uVar17) {
        ppuVar5 = &PTR_DAT_110ae4700;
      }
      uVar12 = *(uint *)((long)ppuVar5 + 0x14);
      if ((uVar12 & 1) != 0) goto LAB_10a16932c;
      uVar16 = 0x30;
      goto LAB_10a16948c;
    }
    ppuVar5 = &PTR_DAT_110ae4700 + uVar18 * 4;
    if (0x56 < uVar17) {
      ppuVar5 = &PTR_DAT_110ae4700;
    }
    uVar12 = *(uint *)((long)ppuVar5 + 0x14);
    if ((uVar12 & 1) == 0) goto LAB_10a169494;
LAB_10a16932c:
    lVar1 = lVar19 + 0x194;
    if ((uVar17 < 0x57) && ((*(byte *)(lVar1 + uVar18 * 0x10) >> 4 & 1) != 0)) goto LAB_10a169474;
    lVar15 = 0;
    if ((uVar12 >> 1 & 1) == 0) {
      auStack_74[0] = uVar17;
      auStack_74[1] = 0x2d;
      auStack_74[2] = 0x2c;
      do {
        uVar18 = (ulong)*(uint *)((long)auStack_74 + lVar15);
        if ((*(uint *)((long)auStack_74 + lVar15) < 0x57) &&
           ((*(byte *)(lVar1 + uVar18 * 0x10) >> 4 & 1) != 0)) goto LAB_10a1693f4;
        lVar15 = lVar15 + 4;
      } while (lVar15 != 0xc);
    }
    else {
      auStack_90[0] = uVar17;
      auStack_90[1] = 0x2f;
      auStack_90[2] = 0x2e;
      do {
        uVar18 = (ulong)*(uint *)((long)auStack_90 + lVar15);
        if ((*(uint *)((long)auStack_90 + lVar15) < 0x57) &&
           ((*(byte *)(lVar1 + uVar18 * 0x10) >> 4 & 1) != 0)) goto LAB_10a1693f4;
        lVar15 = lVar15 + 4;
      } while (lVar15 != 0xc);
    }
    param_1[7] = 0;
    goto LAB_10a1693cc;
  }
  auStack_90[0] = 0xf63fbf5;
  auStack_90[1] = 1;
  auStack_90[2] = 0x28;
  auStack_90[3] = 0;
  if ((param_3[6] & 1U) == 0) goto LAB_10a169108;
LAB_10a16951c:
  FUN_10a0edfc4(auStack_90);
LAB_10a169524:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a169528);
  (*pcVar4)();
LAB_10a1693f4:
  param_1[7] = (uint)uVar18;
  if ((uint)uVar18 == 0) {
LAB_10a1693cc:
    FUN_10a0ee900(auStack_90,&UNK_10f63fc1e,0x40);
    FUN_10a0029c0(auStack_90);
    goto LAB_10a169524;
  }
  FUN_10ae03140(0,*ppuVar5,ppuVar5[1]);
  FUN_10ae03140();
  ppuVar5 = &PTR_PTR_1133003d8;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae0314c();
  FUN_10ae07cd4(ppuVar5,&PTR_PTR_1133003d8);
  uVar16 = param_3[7];
LAB_10a169474:
  if ((uVar16 < 2) && ((*(byte *)(lVar1 + uVar18 * 0x10) >> 5 & 1) != 0)) {
    uVar16 = 0x10;
LAB_10a16948c:
    uVar14 = uVar16 | uVar14;
    param_1[5] = uVar14;
  }
LAB_10a169494:
  uVar16 = param_3[6];
  if ((uVar16 >> 8 & 1) != 0) {
    uVar14 = uVar14 | 2;
    param_1[5] = uVar14;
  }
  if (((uVar16 >> 10 & 1) != 0) && (*(char *)(lVar19 + 0x4c) == '\x01')) {
    param_1[5] = uVar14 & 0xc | 0x80;
  }
  if (((int)uVar18 - 0x3bU < 0x1c) && ((*(byte *)(*param_2 + 0x44) >> 1 & 1) != 0)) {
    param_1[0xc] = 2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  goto LAB_10a16951c;
}



/* Entry: 10a16954c; end: 10a169667;  */

bool FUN_10a16954c(long param_1,uint param_2,undefined8 param_3,long param_4,ulong param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar4 = (uint)param_1;
  if ((1 < (param_2 | uVar4) && (int)param_3 != 0) &&
     ((param_4 != 0 || (FUN_10a173ab0(), param_4 = param_1, param_1 != 0)))) {
    uVar1 = *(uint *)(param_4 + 0x7c);
    iVar2 = *(int *)(param_4 + 0x734);
    uVar7 = 0x2000;
    puVar6 = (uint *)&UNK_10e499a5c;
    if (iVar2 == 1) {
      bVar3 = *(int *)(param_4 + 0x738) != 0x3fc;
      uVar7 = 0x800;
      if (bVar3) {
        uVar7 = 0x2000;
      }
      puVar6 = (uint *)&UNK_10e499a58;
      if (bVar3) {
        puVar6 = (uint *)&UNK_10e499a5c;
      }
    }
    if (uVar7 < uVar1) {
      uVar1 = *puVar6;
    }
    if (uVar1 != 0) {
      if (uVar1 < uVar4) {
        return false;
      }
      if (uVar1 < param_2) {
        return false;
      }
    }
    if (((param_5 & 1) != 0) ||
       (lVar5 = param_4, FUN_10a173b18(param_4,param_3), (((uint)lVar5 ^ 0xffffffff) & 7) == 0)) {
      if (iVar2 != 1) {
        return true;
      }
      if (*(int *)(param_4 + 0x738) != 0x3fc) {
        return true;
      }
      if ((uVar4 ^ uVar4 - 1) <= uVar4 - 1) {
        return false;
      }
      if (param_2 == 0) {
        return false;
      }
      return (param_2 & param_2 - 1) == 0;
    }
  }
  return false;
}



/* Entry: 10a169668; end: 10a1698b7;  */

undefined8 *
FUN_10a169668(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
             ulong param_5,undefined4 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba0e50;
  *(undefined2 *)(param_1 + 3) = 0x100;
  puVar5 = param_1;
  puVar6 = param_2;
  func_0x00010a0fda30();
  param_1[4] = puVar5;
  param_1[5] = puVar6;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = &PTR____cxa_pure_virtual_110ba9908;
  param_1[8] = &PTR_DAT_110bc4550;
  plVar8 = param_1 + 9;
  *plVar8 = 0;
  param_1[10] = 0;
  uVar10 = param_3[1];
  uVar9 = *param_3;
  uVar12 = param_3[3];
  uVar11 = param_3[2];
  uVar14 = param_3[5];
  uVar13 = param_3[4];
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_3 + 6);
  param_1[0x10] = uVar14;
  param_1[0xf] = uVar13;
  param_1[0xe] = uVar12;
  param_1[0xd] = uVar11;
  param_1[0xc] = uVar10;
  param_1[0xb] = uVar9;
  uVar4 = *(undefined4 *)((long)param_3 + 0x1c);
  FUN_10a3158cc();
  *(undefined4 *)((long)param_1 + 0x8c) = uVar4;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((long)param_1 + 0x94) = param_4;
  *param_1 = &PTR_FUN_110ba8fa8;
  param_1[7] = &PTR_FUN_110ba90b0;
  param_1[8] = &PTR_FUN_110ba90d8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  lVar7 = param_2[1];
  uVar9 = *param_2;
  param_1[0x17] = param_2[1];
  param_1[0x16] = uVar9;
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
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = param_6;
  if ((param_5 & 1) == 0) {
    (**(code **)(*(long *)*param_2 + 0x78))(&uStack_70,(long *)*param_2,param_1 + 0xb);
    plStack_78 = plStack_68;
    uStack_80 = uStack_70;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010a169c14(plVar8,&uStack_80);
    plVar1 = plStack_78;
    lVar7 = *plVar8;
    uVar10 = *(undefined8 *)(lVar7 + 0x3c);
    uVar9 = *(undefined8 *)(lVar7 + 0x34);
    uVar12 = *(undefined8 *)(lVar7 + 0x4c);
    uVar11 = *(undefined8 *)(lVar7 + 0x44);
    uVar4 = *(undefined4 *)(lVar7 + 0x54);
    uVar13 = *(undefined8 *)(lVar7 + 0x24);
    param_1[0xc] = *(undefined8 *)(lVar7 + 0x2c);
    param_1[0xb] = uVar13;
    *(undefined4 *)(param_1 + 0x11) = uVar4;
    param_1[0x10] = uVar12;
    param_1[0xf] = uVar11;
    param_1[0xe] = uVar10;
    param_1[0xd] = uVar9;
    if (plStack_78 != (long *)0x0) {
      plVar8 = plStack_78 + 1;
      do {
        lVar7 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    FUN_10a1698b8(param_1);
    if (plStack_68 != (long *)0x0) {
      plVar8 = plStack_68 + 1;
      do {
        lVar7 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
  }
  return param_1;
}



/* Entry: 10a1698b8; end: 10a169a1b;  */

void FUN_10a1698b8(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (((*(long *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 0x30) == 0)) &&
     ((*(byte *)(param_1 + 0x6c) & 1) != 0)) {
    plVar4 = *(long **)(param_1 + 0xb0);
    func_0x00010a08f140();
    lVar6 = *plVar4;
    if (lVar6 != 0) {
      plVar4 = *(long **)(lVar6 + 0x10);
      uVar1 = *(undefined8 *)(lVar6 + 0x18);
      __ZNSt3__115recursive_mutex4lockEv(uVar1);
      FUN_10a012fec(&plStack_48,*(undefined8 *)(param_1 + 0xb0),plVar4);
      plVar5 = plStack_48;
      (**(code **)(*plStack_48 + 0x48))();
      (**(code **)(*plVar5 + 0x48))();
      FUN_10a168824(param_1,plVar5,5,0,8,1,8,0);
      (**(code **)(*plVar5 + 0x40))(plVar5);
      plStack_38 = plStack_48;
      (**(code **)(*plVar4 + 0x30))(plVar4,0,0,0,0,&plStack_38,1);
      if (plStack_40 != (long *)0x0) {
        plVar4 = plStack_40 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
        }
      }
      __ZNSt3__115recursive_mutex6unlockEv(uVar1);
    }
  }
  return;
}



/* Entry: 10a169a1c; end: 10a169b7b;  */

undefined8 * FUN_10a169a1c(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba0e50;
  *(undefined2 *)(param_1 + 3) = 0x100;
  puVar6 = param_1;
  puVar8 = param_2;
  func_0x00010a0fda30();
  param_1[4] = puVar6;
  param_1[5] = puVar8;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = &PTR____cxa_pure_virtual_110ba9908;
  plVar7 = (long *)*param_3;
  (**(code **)(*plVar7 + 0x30))();
  uVar2 = *(undefined1 *)(*param_3 + 0x54);
  param_1[8] = &PTR_DAT_110bc4550;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar11 = *(undefined8 *)((long)plVar7 + 0x3c);
  uVar10 = *(undefined8 *)((long)plVar7 + 0x34);
  uVar13 = *(undefined8 *)((long)plVar7 + 0x4c);
  uVar12 = *(undefined8 *)((long)plVar7 + 0x44);
  uVar5 = *(undefined4 *)((long)plVar7 + 0x54);
  uVar14 = *(undefined8 *)((long)plVar7 + 0x24);
  param_1[0xc] = *(undefined8 *)((long)plVar7 + 0x2c);
  param_1[0xb] = uVar14;
  *(undefined4 *)(param_1 + 0x11) = uVar5;
  param_1[0x10] = uVar13;
  param_1[0xf] = uVar12;
  param_1[0xe] = uVar11;
  param_1[0xd] = uVar10;
  uVar5 = (undefined4)plVar7[8];
  FUN_10a3158cc();
  *(undefined4 *)((long)param_1 + 0x8c) = uVar5;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((long)param_1 + 0x94) = uVar2;
  *param_1 = &PTR_FUN_110ba8fa8;
  param_1[7] = &PTR_FUN_110ba90b0;
  param_1[8] = &PTR_FUN_110ba90d8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  lVar9 = param_2[1];
  uVar10 = *param_2;
  param_1[0x17] = param_2[1];
  param_1[0x16] = uVar10;
  if (lVar9 != 0) {
    plVar7 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar9 = *param_3;
  lVar1 = param_3[1];
  param_1[0x18] = lVar9;
  param_1[0x19] = lVar1;
  if (lVar1 != 0) {
    plVar7 = (long *)(lVar1 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = param_1[0x18];
  }
  param_1[0x1a] = 0;
  FUN_10a1802f4(param_1 + 9,lVar9 + 8);
  uVar11 = *(undefined8 *)(lVar9 + 0x30);
  uVar10 = *(undefined8 *)(lVar9 + 0x28);
  uVar13 = *(undefined8 *)(lVar9 + 0x40);
  uVar12 = *(undefined8 *)(lVar9 + 0x38);
  uVar5 = *(undefined4 *)(lVar9 + 0x48);
  uVar14 = *(undefined8 *)(lVar9 + 0x18);
  param_1[0xc] = *(undefined8 *)(lVar9 + 0x20);
  param_1[0xb] = uVar14;
  *(undefined4 *)(param_1 + 0x11) = uVar5;
  param_1[0x10] = uVar13;
  param_1[0xf] = uVar12;
  param_1[0xe] = uVar11;
  param_1[0xd] = uVar10;
  return param_1;
}



/* Entry: 10a169b7c; end: 10a169c77;  */

long FUN_10a169b7c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 == 0) {
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x78))
              (auStack_30,*(long **)(param_1 + 0xb0),param_1 + 0x58);
    func_0x00010a169c14((long *)(param_1 + 0x48),auStack_30);
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
    FUN_10a1698b8(param_1);
    lVar4 = *(long *)(param_1 + 0x48);
  }
  return lVar4;
}



/* Entry: 10a169c78; end: 10a169c7f;  */

long FUN_10a169c78(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x78))
              (auStack_30,*(long **)(param_1 + 0x70),param_1 + 0x18);
    func_0x00010a169c14((long *)(param_1 + 8),auStack_30);
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
    FUN_10a1698b8(param_1 + -0x40);
    lVar4 = *(long *)(param_1 + 8);
  }
  return lVar4;
}



/* Entry: 10a169c80; end: 10a169d1f;  */

long * FUN_10a169c80(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  plVar5 = (long *)(param_1 + 0x48);
  if (*plVar5 == 0) {
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x78))
              (auStack_40,*(long **)(param_1 + 0xb0),param_1 + 0x58);
    func_0x00010a169c14(plVar5,auStack_40);
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    FUN_10a1698b8(param_1);
  }
  return plVar5;
}



/* Entry: 10a169d20; end: 10a169dcb;  */

long * FUN_10a169d20(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  plVar5 = (long *)(param_1 + 8);
  if (*plVar5 == 0) {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x78))
              (auStack_40,*(long **)(param_1 + 0x70),param_1 + 0x18);
    func_0x00010a169c14(plVar5,auStack_40);
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    FUN_10a1698b8(param_1 + -0x40);
  }
  return plVar5;
}



/* Entry: 10a169dcc; end: 10a169dfb;  */

undefined * FUN_10a169dcc(long param_1)

{
  undefined *puVar1;
  
  if (*(uint *)(param_1 + 0x68) < 4) {
    return (undefined *)(ulong)*(uint *)(&UNK_10dfa3910 + (ulong)*(uint *)(param_1 + 0x68) * 4);
  }
  puVar1 = &UNK_10f63fc5f;
  FUN_10a0ee06c();
  if (*(int *)(puVar1 + 0xd0) == 2) {
    *(undefined4 *)(puVar1 + 0xd0) = 0;
  }
  return puVar1;
}



/* Entry: 10a169dfc; end: 10a169e0f;  */

void FUN_10a169dfc(long param_1)

{
  if (*(int *)(param_1 + 0xd0) == 2) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  return;
}



/* Entry: 10a169e10; end: 10a169eb3;  */

void FUN_10a169e10(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))();
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x30))(param_1);
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x38))(param_1);
  (**(code **)(*param_1 + 0xa0))(param_1,0,0,0,plVar1,plVar2,plVar3,param_2,param_3,param_4);
  return;
}



/* Entry: 10a169eb4; end: 10a16a39f;  */

void FUN_10a169eb4(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,float *param_8,
                  undefined4 param_9,uint param_10)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  float2 *pfVar13;
  ulong uVar14;
  byte bVar15;
  long lVar16;
  long lVar17;
  int iStack_b8;
  int iStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float2 *pfStack_a0;
  long *plStack_98;
  ulong uStack_90;
  byte bStack_88;
  float2 *pfStack_80;
  long *plStack_78;
  ulong uStack_70;
  
  if (param_8 == (float *)0x0) {
    FUN_10a00946c(&UNK_10f63fc95);
    goto LAB_10a16a320;
  }
  if (param_10 == 0) {
    param_10 = *(uint *)((long)param_1 + 0x74);
  }
  if (param_7 < 2) {
    param_7 = 1;
  }
  plVar10 = param_1;
  (**(code **)(*param_1 + 0xb8))(param_1);
  iStack_b8 = (int)param_5;
  iStack_b4 = (int)param_6;
  lVar17 = param_1[0x16];
  ppuVar11 = &PTR___tlv_bootstrap_11340de10;
  uStack_b0 = param_7;
  uStack_ac = param_2;
  uStack_a8 = param_3;
  uStack_a4 = param_4;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar12 = (undefined *)0x0;
  if (*ppuVar11 != (undefined *)0x0) {
    puVar12 = *ppuVar11 + 0x18;
  }
  if ((*(int *)(lVar17 + 0x734) == 1) && (param_10 == *(uint *)((long)param_1 + 0x74))) {
    if ((char)param_1[3] == '\x01') {
      FUN_10a08e0bc();
      lVar17 = param_1[0x16];
      if (puVar12 != (undefined *)0x0) goto LAB_10a169f84;
    }
    (**(code **)(lVar17 + 0x1280))(0xcf5,1);
    (**(code **)(lVar17 + 0x1280))(0xcf2,0);
    (**(code **)(lVar17 + 0x1280))(0xcf3,0);
    (**(code **)(lVar17 + 0x1280))(0xcf4,0);
    func_0x00010926eaf8(plVar10,&uStack_ac,&iStack_b8,param_9,param_8,0,0,0);
  }
  else {
LAB_10a169f84:
    pfStack_a0 = (float2 *)0x0;
    plStack_98 = (long *)0x0;
    uStack_90 = 0;
    bStack_88 = 1;
    FUN_109fc8e58(param_5,param_6,*(undefined4 *)((long)param_1 + 0x74));
    iVar8 = (int)param_1[0xb];
    FUN_109fc8e58(iVar8,*(undefined4 *)((long)param_1 + 0x5c),(ulong)param_10);
    iVar9 = (int)param_1[0xb];
    FUN_109fc8e58(iVar9,*(undefined4 *)((long)param_1 + 0x5c),*(undefined4 *)((long)param_1 + 0x74))
    ;
    param_7 = param_7 * (int)param_5;
    if ((iVar8 == iVar9) && (*(int *)(lVar17 + 0x734) == 1)) {
      FUN_10a16872c(&pfStack_80,lVar17,param_8,param_7,0x40);
      plVar1 = plStack_78;
      pfStack_a0 = pfStack_80;
      plVar10 = plStack_98;
      pfStack_80 = (float2 *)0x0;
      plStack_78 = (long *)0x0;
      plStack_98 = plVar1;
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 1;
        do {
          lVar16 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar16 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      uVar14 = 0;
      uStack_90 = (ulong)param_7 << 0x20;
      bVar15 = 1;
      bStack_88 = 0;
    }
    else {
      FUN_10a1738b8(&pfStack_80,lVar17,param_7);
      plVar1 = plStack_78;
      pfStack_a0 = pfStack_80;
      plVar10 = plStack_98;
      pfStack_80 = (float2 *)0x0;
      plStack_78 = (long *)0x0;
      plStack_98 = plVar1;
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 1;
        do {
          lVar16 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = plStack_78;
      uStack_90 = uStack_70;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar16 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      bStack_88 = 1;
      pfVar13 = pfStack_a0;
      (**(code **)(*(long *)pfStack_a0 + 0x30))(pfStack_a0,2,uStack_90 & 0xffffffff,0);
      if (iVar8 == iVar9) {
        _memcpy();
      }
      else {
        iVar8 = *(int *)((long)param_1 + 0x74);
        if ((param_10 == 0x26) && (iVar8 == 4)) {
          uVar4 = iStack_b4 * iStack_b8 * uStack_b0;
          if (uVar4 != 0) {
            uVar14 = 0;
            do {
              uVar3 = *(undefined1 *)param_8;
              puVar2 = (undefined1 *)((long)pfVar13 + (uVar14 & 0xfffffffc));
              *puVar2 = uVar3;
              puVar2[1] = uVar3;
              puVar2[2] = uVar3;
              puVar2[3] = 0xff;
              uVar14 = uVar14 + 4;
              param_8 = (float *)((long)param_8 + 1);
            } while ((ulong)uVar4 << 2 != uVar14);
          }
        }
        else {
          if (((param_10 != 0x25) || (iVar8 != 0x22)) && ((param_10 != 0x24 || (iVar8 != 0x21)))) {
LAB_10a16a320:
            func_0x00010b0ae4b8(&pfStack_80,&UNK_10f63faa5,0x43);
            FUN_10a0029c0(&pfStack_80);
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10a16a344);
            (*pcVar7)();
          }
          uVar4 = iStack_b4 * iStack_b8 * uStack_b0 *
                  (uint)(byte)(&UNK_110ae471b)[(ulong)param_10 * 0x20];
          uVar14 = (ulong)uVar4;
          if (uVar4 != 0) {
            do {
              *pfVar13 = (float2)*param_8;
              uVar14 = uVar14 - 1;
              pfVar13 = pfVar13 + 1;
              param_8 = param_8 + 1;
            } while (uVar14 != 0);
          }
        }
      }
      (**(code **)(*(long *)pfStack_a0 + 0x38))();
      uVar14 = uStack_90 & 0xffffffff;
      bVar15 = bStack_88 ^ 1;
    }
    FUN_10a168bd0(lVar17,&pfStack_a0,uVar14,param_1 + 9,&uStack_ac,&iStack_b8,param_9,bVar15 & 1,
                  param_1);
    plVar10 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        lVar17 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  return;
}



/* Entry: 10a16a3a0; end: 10a16a477;  */

long * FUN_10a16a3a0(long param_1,int *param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined4 uStack_28;
  
  iVar4 = param_2[2];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)param_2;
  *(int *)(param_1 + 0x10) = iVar4;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  iVar4 = *param_2;
  FUN_109fc8e58(iVar4,param_2[1]);
  FUN_10a1738b8(auStack_38,*(undefined8 *)(param_1 + 0xb0),param_2[2] * iVar4);
  *(undefined4 *)(param_1 + 0xa8) = uStack_28;
  FUN_10a0e65b0(param_1 + 0x98,auStack_38);
  plVar5 = *(long **)(param_1 + 0x98);
  (**(code **)(*plVar5 + 0x30))(plVar5,2,*(undefined4 *)(param_1 + 0xa8),0);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return plVar5;
}



/* Entry: 10a16a478; end: 10a16a487;  */

void FUN_10a16a478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a16a484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x98) + 0x38))();
  return;
}



/* Entry: 10a16a488; end: 10a16a5bf;  */

void FUN_10a16a488(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = param_1;
  (**(code **)(*param_1 + 0xb8))();
  ppuVar3 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  if (*ppuVar3 == (undefined *)0x0) {
LAB_10a16a4e4:
    lVar5 = param_1[0x16];
    if (*(int *)(lVar5 + 0x734) == 1) {
      plVar6 = (long *)param_1[0x13];
      (**(code **)(*plVar6 + 0x30))(plVar6,2,(int)param_1[0x15],0);
      func_0x00010926eaf8(plVar7,param_3,param_1 + 1,param_2,plVar6,0,0,0);
      (**(code **)(*(long *)param_1[0x13] + 0x38))();
      goto LAB_10a16a56c;
    }
  }
  else {
    puVar4 = *ppuVar3 + 0x18;
    FUN_10a08e0bc();
    if (puVar4 == (undefined *)0x0) goto LAB_10a16a4e4;
    lVar5 = param_1[0x16];
  }
  FUN_10a168bd0(lVar5,param_1 + 0x13,(int)param_1[0x15],param_1 + 9,param_3,param_1 + 1,param_2,0,
                param_1);
LAB_10a16a56c:
  plVar7 = (long *)param_1[0x14];
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
      return;
    }
  }
  return;
}



/* Entry: 10a16a5c0; end: 10a16ab0b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a16a5c0(long *param_1,long *param_2,long param_3,ulong param_4)

{
  long *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  char cVar13;
  bool bVar14;
  code *pcVar15;
  long *plVar16;
  long *plVar17;
  undefined **ppuVar18;
  long ****pppplVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  int *******pppppppiVar24;
  long lVar25;
  int *******pppppppiVar26;
  long lVar27;
  int *******pppppppiVar28;
  int *piVar29;
  undefined8 uStack_f0;
  int *******pppppppiStack_d0;
  int *******pppppppiStack_c8;
  int *******pppppppiStack_c0;
  long *plStack_b8;
  long ****pppplStack_b0;
  long *plStack_a8;
  long ****pppplStack_a0;
  long ****pppplStack_98;
  long *plStack_90;
  long *plStack_88;
  long ****pppplStack_80;
  long *plStack_78;
  long ****pppplStack_70;
  long ****pppplStack_68;
  
  if (param_4 == 0) {
    return;
  }
  plVar16 = param_2;
  (**(code **)(*param_2 + 0xb8))();
  plVar17 = param_1;
  (**(code **)(*param_1 + 0xb8))();
  if (plVar16 == (long *)0x0 || plVar17 == (long *)0x0) {
    return;
  }
  ppuVar18 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  pppplVar19 = (long ****)(*ppuVar18 + 0x18);
  pppplStack_68 = (long ****)0x0;
  if (*ppuVar18 == (undefined *)0x0) {
    pppplStack_70 = (long ****)0x0;
  }
  else {
    pppplStack_68 = pppplVar19;
    FUN_10a08e0bc();
    pppplStack_80 = (long ****)0x0;
    plStack_78 = (long *)0x0;
    pppplStack_70 = pppplVar19;
    if ((pppplVar19 != (long ****)0x0) && ((long ***)param_1[0x16] == pppplVar19[3])) {
      bVar14 = false;
      goto LAB_10a16a740;
    }
  }
  plStack_78 = (long *)0x0;
  pppplStack_80 = (long ****)0x0;
  plVar20 = (long *)param_1[0x16];
  func_0x00010a08f140();
  uVar12 = *(undefined8 *)(*plVar20 + 0x10);
  uStack_f0 = *(undefined8 *)(*plVar20 + 0x18);
  __ZNSt3__115recursive_mutex4lockEv();
  FUN_10a012fec(&pppplStack_a0,param_1[0x16],uVar12);
  plVar20 = plStack_78;
  plStack_78 = (long *)pppplStack_98;
  pppplStack_80 = pppplStack_a0;
  pppplStack_a0 = (long ****)0x0;
  pppplStack_98 = (long ****)0x0;
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 1;
    do {
      lVar27 = *plVar1;
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar27 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  pppplVar19 = pppplStack_98;
  if (pppplStack_98 != (long ****)0x0) {
    plVar20 = (long *)(pppplStack_98 + 1);
    do {
      lVar27 = *plVar20;
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar14) {
        *plVar20 = lVar27 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (lVar27 == 0) {
      (**(code **)((long)*pppplStack_98 + 0x10))(pppplStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar19);
    }
  }
  pppplVar19 = pppplStack_80;
  (*(code *)(*pppplStack_80)[9])();
  bVar14 = true;
LAB_10a16a740:
  pppplStack_a0 = (long ****)&pppplStack_80;
  pppplStack_98 = (long ****)&pppplStack_68;
  plStack_90 = param_2;
  plStack_88 = param_1;
  pppplStack_70 = pppplVar19;
  (*(code *)(*pppplVar19)[9])();
  pppplStack_b0 = (long ****)&pppplStack_70;
  plStack_b8 = param_2;
  plStack_a8 = param_1;
  FUN_10a168824(param_2,pppplStack_70,6,0x6000,0x200,0x1000,0x100,0);
  FUN_10a168824(param_1,pppplStack_70,7,0x6000,0x400,0x1000,0x100,0);
  pppppppiStack_d0 = (int *******)0x0;
  pppppppiStack_c8 = (int *******)0x0;
  pppppppiStack_c0 = (int *******)0x0;
  if (0x5d1745d1745d174 < param_4) {
    FUN_10a186f18();
LAB_10a16aa5c:
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10a16aa60);
    (*pcVar15)();
  }
  pppppppiVar26 = (int *******)&pppppppiStack_d0;
  uVar21 = param_4;
  FUN_10a186f2c();
  pppppppiVar24 = (int *******)((long)pppppppiVar26 + uVar21 * 0x2c);
  pppppppiVar28 =
       (int *******)((long)pppppppiVar26 - ((long)pppppppiStack_c8 - (long)pppppppiStack_d0));
  _memcpy(pppppppiVar28);
  bVar3 = pppppppiStack_d0 != (int *******)0x0;
  pppppppiStack_d0 = pppppppiVar28;
  pppppppiStack_c8 = pppppppiVar26;
  pppppppiStack_c0 = pppppppiVar24;
  if (bVar3) {
    __ZdlPv();
  }
  lVar27 = param_4 * 0x28;
  piVar29 = (int *)(param_3 + 0x14);
  do {
    iVar6 = piVar29[-5];
    iVar9 = piVar29[-4];
    iVar7 = piVar29[-1];
    iVar10 = *piVar29;
    iVar4 = piVar29[1] - iVar7;
    if (piVar29[-3] - iVar6 <= piVar29[1] - iVar7) {
      iVar4 = piVar29[-3] - iVar6;
    }
    iVar5 = piVar29[2] - iVar10;
    if (piVar29[-2] - iVar9 <= piVar29[2] - iVar10) {
      iVar5 = piVar29[-2] - iVar9;
    }
    if (0 < iVar4 && 0 < iVar5) {
      iVar8 = piVar29[3];
      iVar11 = piVar29[4];
      if (pppppppiStack_c8 < pppppppiStack_c0) {
        *(int *)pppppppiStack_c8 = iVar8;
        *(int *)((long)pppppppiStack_c8 + 4) = iVar6;
        *(int *)(pppppppiStack_c8 + 1) = iVar9;
        *(int *)((long)pppppppiStack_c8 + 0xc) = 0;
        *(int *)(pppppppiStack_c8 + 2) = iVar11;
        *(int *)((long)pppppppiStack_c8 + 0x14) = iVar7;
        *(int *)(pppppppiStack_c8 + 3) = iVar10;
        *(int *)((long)pppppppiStack_c8 + 0x1c) = 0;
        *(int *)(pppppppiStack_c8 + 4) = iVar4;
        *(int *)((long)pppppppiStack_c8 + 0x24) = iVar5;
        *(int *)(pppppppiStack_c8 + 5) = 1;
        pppppppiStack_c8 = (int *******)((long)pppppppiStack_c8 + 0x2c);
      }
      else {
        lVar25 = (long)pppppppiStack_c8 - (long)pppppppiStack_d0;
        uVar21 = (lVar25 >> 2) * 0x2e8ba2e8ba2e8ba3 + 1;
        if (0x5d1745d1745d174 < uVar21) {
          FUN_10a186f18();
          goto LAB_10a16aa5c;
        }
        lVar22 = (long)pppppppiStack_c0 - (long)pppppppiStack_d0 >> 2;
        uVar23 = lVar22 * 0x5d1745d1745d1746;
        if (uVar23 < uVar21 || uVar23 - uVar21 == 0) {
          uVar23 = uVar21;
        }
        if (0x2e8ba2e8ba2e8b9 < (ulong)(lVar22 * 0x2e8ba2e8ba2e8ba3)) {
          uVar23 = 0x5d1745d1745d174;
        }
        pppppppiVar26 = (int *******)&pppppppiStack_d0;
        FUN_10a186f2c();
        piVar2 = (int *)((long)pppppppiVar26 + lVar25);
        pppppppiVar26 = (int *******)((long)pppppppiVar26 + uVar23 * 0x2c);
        *piVar2 = iVar8;
        piVar2[1] = iVar6;
        piVar2[2] = iVar9;
        piVar2[3] = 0;
        piVar2[4] = iVar11;
        piVar2[5] = iVar7;
        piVar2[6] = iVar10;
        piVar2[7] = 0;
        piVar2[8] = iVar4;
        piVar2[9] = iVar5;
        piVar2[10] = 1;
        pppppppiVar24 = (int *******)(piVar2 + 0xb);
        pppppppiVar28 =
             (int *******)((long)piVar2 - ((long)pppppppiStack_c8 - (long)pppppppiStack_d0));
        _memcpy(pppppppiVar28);
        bVar3 = pppppppiStack_d0 != (int *******)0x0;
        pppppppiStack_d0 = pppppppiVar28;
        pppppppiStack_c8 = pppppppiVar24;
        pppppppiStack_c0 = pppppppiVar26;
        if (bVar3) {
          __ZdlPv();
          pppppppiStack_c8 = pppppppiVar24;
        }
      }
    }
    piVar29 = piVar29 + 10;
    lVar27 = lVar27 + -0x28;
    if (lVar27 == 0) {
      if (pppppppiStack_d0 != pppppppiStack_c8) {
        (*(code *)(*pppplStack_70)[0xe])
                  (pppplStack_70,plVar16,plVar17,pppppppiStack_d0,
                   ((long)pppppppiStack_c8 - (long)pppppppiStack_d0 >> 2) * 0x2e8ba2e8ba2e8ba3,6,7);
      }
      if (pppppppiStack_d0 != (int *******)0x0) {
        pppppppiStack_c8 = pppppppiStack_d0;
        __ZdlPv(pppppppiStack_d0);
      }
      FUN_10a16ab0c(&plStack_b8);
      (*(code *)(*pppplStack_70)[8])();
      FUN_10a16ab80(&pppplStack_a0);
      plVar16 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar17 = plStack_78 + 1;
        do {
          lVar27 = *plVar17;
          cVar13 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *plVar17 = lVar27 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      if (bVar14) {
        __ZNSt3__115recursive_mutex6unlockEv(uStack_f0);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a16ab0c; end: 10a16ab7f;  */

undefined8 * FUN_10a16ab0c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  FUN_10a168824(*param_1,*(undefined8 *)param_1[1],5,0x200,8,0x100,8,0);
  FUN_10a168824(uVar1,*(undefined8 *)param_1[1],5,0x400,8,0x100,8,0);
  return param_1;
}



/* Entry: 10a16ab80; end: 10a16ac07;  */

undefined8 * FUN_10a16ab80(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)*param_1 == 0) {
    lVar4 = *(long *)param_1[1];
    if ((*(byte *)(lVar4 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a16ac08);
      (*pcVar1)();
    }
    plVar2 = (long *)param_1[2];
    plVar3 = (long *)param_1[3];
    (**(code **)(*plVar2 + 0xc0))();
    FUN_10a0971e4(lVar4,plVar2);
    (**(code **)(*plVar3 + 0xc0))(plVar3);
    FUN_10a0971e4(lVar4,plVar3);
  }
  else {
    FUN_10a08e2f4();
  }
  return param_1;
}



/* Entry: 10a16ac08; end: 10a16ac0f;  */

undefined4 FUN_10a16ac08(long param_1)

{
  return *(undefined4 *)(param_1 + 0xd0);
}



/* Entry: 10a16ac10; end: 10a16b1eb;  */

void FUN_10a16ac10(long *param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  undefined **ppuVar10;
  long *plVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  long lVar19;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined1 uStack_d1;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  int iStack_b8;
  int iStack_b4;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = param_1;
  (**(code **)(*param_1 + 0x28))();
  plVar8 = param_1;
  (**(code **)(*param_1 + 0x30))();
  plVar9 = param_1;
  iStack_b8 = (int)plVar11;
  iStack_b4 = (int)plVar8;
  (**(code **)(*param_1 + 0x38))();
  ppuVar10 = (undefined **)param_1[0x18];
  if (ppuVar10 != (undefined **)0x0) {
    ppuStack_f0 = (undefined **)CONCAT44(ppuStack_f0._4_4_,*(int *)((long)ppuVar10 + 0x4c));
    lVar15 = *param_2;
    if (((lVar15 == 0) ||
        ((int)plVar11 != *(int *)(lVar15 + 0x10) || (int)plVar8 != *(int *)(lVar15 + 0x14))) ||
       (*(int *)(lVar15 + 0x24) != *(int *)((long)ppuVar10 + 0x4c))) {
      ppuStack_d0 = ppuVar10;
      FUN_10a1959b0(&ppuStack_b0,&ppuStack_100,&ppuStack_d0,&ppuStack_f0);
      FUN_10a16b1ec(param_2,&ppuStack_b0);
      if (ppuStack_a8 != (undefined **)0x0) {
        ppuVar10 = ppuStack_a8 + 1;
        do {
          puVar17 = *ppuVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
          if (bVar5) {
            *ppuVar10 = puVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          ppuVar13 = ppuStack_a8;
        } while (cVar4 != '\0');
        goto LAB_10a16b108;
      }
    }
    else {
      (**(code **)(*ppuVar10 + 0x10))
                (ppuVar10,*(undefined8 *)(lVar15 + 0x28),*(undefined8 *)(lVar15 + 0x18),0,
                 *(undefined4 *)((long)ppuVar10 + 0x1c));
    }
    goto LAB_10a16b124;
  }
  plVar11 = (long *)param_1[0x16];
  func_0x00010a08f140();
  lVar15 = *plVar11;
  ppuStack_b0 = (undefined **)&UNK_10f63fcd5;
  ppuStack_a8 = (undefined **)0x4a;
  if (((int)param_1[0xd] == 0) && ((int)plVar9 == 1)) {
    ppuVar10 = &PTR_DAT_110ae4700 + (ulong)*(uint *)((long)param_1 + 0x74) * 4;
    if (0x56 < *(uint *)((long)param_1 + 0x74)) {
      ppuVar10 = &PTR_DAT_110ae4700;
    }
    bVar2 = *(byte *)((long)ppuVar10 + 0x1a);
    if (bVar2 == 0) {
      func_0x000109243bf8(&UNK_10f62e152);
LAB_10a16b178:
      FUN_10a0edfc4(&ppuStack_b0);
      goto LAB_10a16b180;
    }
    bVar3 = *(byte *)(ppuVar10 + 3);
    uVar1 = *(uint *)(param_1 + 0xb);
    uVar12 = (ulong)uVar1;
    FUN_109fc8e58(uVar12,*(undefined4 *)((long)param_1 + 0x5c));
    ppuStack_d0 = (undefined **)0x0;
    ppuStack_c8 = (undefined **)0x0;
    lVar19 = param_1[0x16];
    if (*(int *)(lVar19 + 0x734) == 1) {
      plVar11 = param_1;
      (**(code **)(*param_1 + 0x50))();
      FUN_10ab79b88();
    }
    else {
      plVar11 = (long *)(ulong)*(uint *)((long)param_1 + 0x74);
      FUN_10a3158cc();
    }
    if (*(int *)(lVar19 + 0x734) == 1) {
      ppuStack_f0 = (undefined **)CONCAT44(ppuStack_f0._4_4_,(int)plVar11);
      lVar16 = *param_2;
      if (((lVar16 == 0) || (iStack_b8 != *(int *)(lVar16 + 0x10))) ||
         ((iStack_b4 != *(int *)(lVar16 + 0x14) || (*(int *)(lVar16 + 0x24) != (int)plVar11)))) {
        uStack_d1 = 0;
        FUN_10a195a60(&ppuStack_b0,&ppuStack_100,&iStack_b8,&ppuStack_f0,&uStack_d1);
        FUN_10a16b1ec(param_2,&ppuStack_b0);
        ppuVar10 = ppuStack_a8;
        if (ppuStack_a8 != (undefined **)0x0) {
          ppuVar13 = ppuStack_a8 + 1;
          do {
            puVar17 = *ppuVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
            if (bVar5) {
              *ppuVar13 = puVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (puVar17 == (undefined *)0x0) {
            (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
          }
        }
        lVar16 = *param_2;
      }
      uVar18 = *(ulong *)(lVar16 + 0x40);
      if (uVar18 == 0) {
        uVar18 = *(long *)(lVar16 + 0x18) * (long)*(int *)(lVar16 + 0x14);
      }
      ppuStack_b0 = (undefined **)&UNK_10f63fd20;
      ppuStack_a8 = (undefined **)0x47;
      if (uVar18 != uVar12) goto LAB_10a16b178;
      FUN_10a16872c(&ppuStack_b0,param_1[0x16],*(undefined8 *)(lVar16 + 0x28),uVar12,0x80);
      ppuVar13 = ppuStack_a8;
      ppuStack_d0 = ppuStack_b0;
      ppuVar10 = ppuStack_c8;
      ppuStack_b0 = (undefined **)0x0;
      ppuStack_a8 = (undefined **)0x0;
      ppuStack_c8 = ppuVar13;
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar13 = ppuVar10 + 1;
        do {
          puVar17 = *ppuVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
          if (bVar5) {
            *ppuVar13 = puVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar17 == (undefined *)0x0) {
          (**(code **)(*ppuVar10 + 0x10))(ppuVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
        }
      }
      ppuVar10 = ppuStack_a8;
      if (ppuStack_a8 != (undefined **)0x0) {
        ppuVar13 = ppuStack_a8 + 1;
        do {
          puVar17 = *ppuVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
          if (bVar5) {
            *ppuVar13 = puVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar17 == (undefined *)0x0) {
          (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
        }
      }
    }
    else {
      ppuStack_a8 = (undefined **)0x600000080;
      ppuStack_b0 = (undefined **)(uVar12 & 0xffffffff);
      (**(code **)(*(long *)param_1[0x16] + 0x70))(&ppuStack_f0,(long *)param_1[0x16],&ppuStack_b0);
      ppuStack_c8 = ppuStack_e8;
      ppuStack_d0 = ppuStack_f0;
    }
    ppuVar10 = ppuStack_d0;
    ppuStack_b0 = (undefined **)0x0;
    ppuStack_a8 = (undefined **)((ulong)ppuStack_a8 & 0xffffffff00000000);
    FUN_10a168930(param_1[0x16],lVar15 + 0x10,param_1,&ppuStack_b0,param_1 + 0xb,ppuStack_d0);
    if (*(int *)(lVar19 + 0x734) == 1) {
      if (ppuStack_c8 != (undefined **)0x0) {
        ppuVar10 = ppuStack_c8 + 1;
        do {
          puVar17 = *ppuVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
          if (bVar5) {
            *ppuVar10 = puVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          ppuVar13 = ppuStack_c8;
        } while (cVar4 != '\0');
LAB_10a16b108:
        if (puVar17 == (undefined *)0x0) {
          (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
        }
      }
    }
    else {
      ppuVar13 = ppuVar10;
      (**(code **)(*ppuVar10 + 0x30))(ppuVar10,3,0,0);
      ppuStack_98 = ppuStack_c8;
      ppuStack_f8 = ppuStack_c8;
      if (ppuStack_c8 != (undefined **)0x0) {
        ppuVar14 = ppuStack_c8 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar5) {
            *ppuVar14 = *ppuVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuVar14 = (undefined **)0xa8;
      ppuStack_100 = ppuVar10;
      __Znwm();
      ppuVar14[1] = (undefined *)0x0;
      ppuVar14[2] = (undefined *)0x0;
      uVar6 = 0;
      if (bVar3 != 0) {
        uVar6 = ((uVar1 + bVar3) - 1) / (uint)bVar3;
      }
      *ppuVar14 = (undefined *)&PTR_FUN_110baa4d8;
      ppuStack_b0 = (undefined **)FUN_10a195b24;
      ppuStack_a8 = &PTR_FUN_110ba9e48;
      ppuStack_100 = (undefined **)0x0;
      ppuStack_f8 = (undefined **)0x0;
      ppuStack_a0 = ppuVar10;
      FUN_10a1b2668(ppuVar14 + 3,ppuVar13,CONCAT44(iStack_b4,iStack_b8),uVar6 * bVar2,plVar11,
                    &ppuStack_b0,0,0);
      (*(code *)*ppuStack_a8)(&ppuStack_a8);
      ppuStack_f0 = ppuVar14 + 3;
      ppuStack_e8 = ppuVar14;
      FUN_10a16b1ec(param_2,&ppuStack_f0);
      ppuVar10 = ppuStack_e8;
      if (ppuStack_e8 != (undefined **)0x0) {
        ppuVar13 = ppuStack_e8 + 1;
        do {
          puVar17 = *ppuVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
          if (bVar5) {
            *ppuVar13 = puVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar17 == (undefined *)0x0) {
          (**(code **)(*ppuStack_e8 + 0x10))(ppuStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
        }
      }
      ppuVar10 = ppuStack_f8;
      if (ppuStack_f8 != (undefined **)0x0) {
        plVar11 = (long *)(ppuStack_f8 + 1);
        do {
          lVar15 = *plVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          (**(code **)((long)*ppuStack_f8 + 0x10))(ppuStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
        }
      }
      if (ppuStack_c8 != (undefined **)0x0) {
        ppuVar10 = ppuStack_c8 + 1;
        do {
          puVar17 = *ppuVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
          if (bVar5) {
            *ppuVar10 = puVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          ppuVar13 = ppuStack_c8;
        } while (cVar4 != '\0');
        goto LAB_10a16b108;
      }
    }
LAB_10a16b124:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a0edfc4(&ppuStack_b0);
LAB_10a16b180:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a16b184);
  (*pcVar7)();
}



/* Entry: 10a16b1ec; end: 10a16b24f;  */

undefined8 * FUN_10a16b1ec(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a16b250; end: 10a16b257;  */

void FUN_10a16b250(long param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  undefined **ppuVar10;
  long *plVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined1 uStack_d1;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  int iStack_b8;
  int iStack_b4;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_70;
  
  plVar15 = (long *)(param_1 - 0x38);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar15;
  (**(code **)(*plVar15 + 0x28))();
  plVar8 = plVar15;
  (**(code **)(*plVar15 + 0x30))();
  plVar9 = plVar15;
  iStack_b8 = (int)plVar11;
  iStack_b4 = (int)plVar8;
  (**(code **)(*plVar15 + 0x38))();
  ppuVar10 = *(undefined ***)(param_1 + 0x88);
  if (ppuVar10 != (undefined **)0x0) {
    ppuStack_f0 = (undefined **)CONCAT44(ppuStack_f0._4_4_,*(int *)((long)ppuVar10 + 0x4c));
    lVar16 = *param_2;
    if (((lVar16 == 0) ||
        ((int)plVar11 != *(int *)(lVar16 + 0x10) || (int)plVar8 != *(int *)(lVar16 + 0x14))) ||
       (*(int *)(lVar16 + 0x24) != *(int *)((long)ppuVar10 + 0x4c))) {
      ppuStack_d0 = ppuVar10;
      FUN_10a1959b0(&ppuStack_b0,&ppuStack_100,&ppuStack_d0,&ppuStack_f0);
      FUN_10a16b1ec(param_2,&ppuStack_b0);
      if (ppuStack_a8 != (undefined **)0x0) {
        ppuVar10 = ppuStack_a8 + 1;
        do {
          puVar18 = *ppuVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
          if (bVar5) {
            *ppuVar10 = puVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          ppuVar13 = ppuStack_a8;
        } while (cVar4 != '\0');
        goto LAB_10a16b108;
      }
    }
    else {
      (**(code **)(*ppuVar10 + 0x10))
                (ppuVar10,*(undefined8 *)(lVar16 + 0x28),*(undefined8 *)(lVar16 + 0x18),0,
                 *(undefined4 *)((long)ppuVar10 + 0x1c));
    }
    goto LAB_10a16b124;
  }
  plVar11 = *(long **)(param_1 + 0x78);
  func_0x00010a08f140();
  lVar16 = *plVar11;
  ppuStack_b0 = (undefined **)&UNK_10f63fcd5;
  ppuStack_a8 = (undefined **)0x4a;
  if ((*(int *)(param_1 + 0x30) == 0) && ((int)plVar9 == 1)) {
    ppuVar10 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_1 + 0x3c) * 4;
    if (0x56 < *(uint *)(param_1 + 0x3c)) {
      ppuVar10 = &PTR_DAT_110ae4700;
    }
    bVar2 = *(byte *)((long)ppuVar10 + 0x1a);
    if (bVar2 == 0) {
      func_0x000109243bf8(&UNK_10f62e152);
LAB_10a16b178:
      FUN_10a0edfc4(&ppuStack_b0);
      goto LAB_10a16b180;
    }
    bVar3 = *(byte *)(ppuVar10 + 3);
    uVar1 = *(uint *)(param_1 + 0x20);
    uVar12 = (ulong)uVar1;
    FUN_109fc8e58(uVar12,*(undefined4 *)(param_1 + 0x24));
    ppuStack_d0 = (undefined **)0x0;
    ppuStack_c8 = (undefined **)0x0;
    lVar20 = *(long *)(param_1 + 0x78);
    if (*(int *)(lVar20 + 0x734) == 1) {
      plVar11 = plVar15;
      (**(code **)(*plVar15 + 0x50))();
      FUN_10ab79b88();
    }
    else {
      plVar11 = (long *)(ulong)*(uint *)(param_1 + 0x3c);
      FUN_10a3158cc();
    }
    if (*(int *)(lVar20 + 0x734) == 1) {
      ppuStack_f0 = (undefined **)CONCAT44(ppuStack_f0._4_4_,(int)plVar11);
      lVar17 = *param_2;
      if (((lVar17 == 0) || (iStack_b8 != *(int *)(lVar17 + 0x10))) ||
         ((iStack_b4 != *(int *)(lVar17 + 0x14) || (*(int *)(lVar17 + 0x24) != (int)plVar11)))) {
        uStack_d1 = 0;
        FUN_10a195a60(&ppuStack_b0,&ppuStack_100,&iStack_b8,&ppuStack_f0,&uStack_d1);
        FUN_10a16b1ec(param_2,&ppuStack_b0);
        ppuVar10 = ppuStack_a8;
        if (ppuStack_a8 != (undefined **)0x0) {
          ppuVar13 = ppuStack_a8 + 1;
          do {
            puVar18 = *ppuVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
            if (bVar5) {
              *ppuVar13 = puVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (puVar18 == (undefined *)0x0) {
            (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
          }
        }
        lVar17 = *param_2;
      }
      uVar19 = *(ulong *)(lVar17 + 0x40);
      if (uVar19 == 0) {
        uVar19 = *(long *)(lVar17 + 0x18) * (long)*(int *)(lVar17 + 0x14);
      }
      ppuStack_b0 = (undefined **)&UNK_10f63fd20;
      ppuStack_a8 = (undefined **)0x47;
      if (uVar19 != uVar12) goto LAB_10a16b178;
      FUN_10a16872c(&ppuStack_b0,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(lVar17 + 0x28),
                    uVar12,0x80);
      ppuVar13 = ppuStack_a8;
      ppuStack_d0 = ppuStack_b0;
      ppuVar10 = ppuStack_c8;
      ppuStack_b0 = (undefined **)0x0;
      ppuStack_a8 = (undefined **)0x0;
      ppuStack_c8 = ppuVar13;
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar13 = ppuVar10 + 1;
        do {
          puVar18 = *ppuVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
          if (bVar5) {
            *ppuVar13 = puVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar18 == (undefined *)0x0) {
          (**(code **)(*ppuVar10 + 0x10))(ppuVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
        }
      }
      ppuVar10 = ppuStack_a8;
      if (ppuStack_a8 != (undefined **)0x0) {
        ppuVar13 = ppuStack_a8 + 1;
        do {
          puVar18 = *ppuVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
          if (bVar5) {
            *ppuVar13 = puVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar18 == (undefined *)0x0) {
          (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
        }
      }
    }
    else {
      ppuStack_a8 = (undefined **)0x600000080;
      ppuStack_b0 = (undefined **)(uVar12 & 0xffffffff);
      (**(code **)(**(long **)(param_1 + 0x78) + 0x70))
                (&ppuStack_f0,*(long **)(param_1 + 0x78),&ppuStack_b0);
      ppuStack_c8 = ppuStack_e8;
      ppuStack_d0 = ppuStack_f0;
    }
    ppuVar10 = ppuStack_d0;
    ppuStack_b0 = (undefined **)0x0;
    ppuStack_a8 = (undefined **)((ulong)ppuStack_a8 & 0xffffffff00000000);
    FUN_10a168930(*(undefined8 *)(param_1 + 0x78),lVar16 + 0x10,plVar15,&ppuStack_b0,param_1 + 0x20,
                  ppuStack_d0);
    if (*(int *)(lVar20 + 0x734) == 1) {
      if (ppuStack_c8 != (undefined **)0x0) {
        ppuVar10 = ppuStack_c8 + 1;
        do {
          puVar18 = *ppuVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
          if (bVar5) {
            *ppuVar10 = puVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          ppuVar13 = ppuStack_c8;
        } while (cVar4 != '\0');
LAB_10a16b108:
        if (puVar18 == (undefined *)0x0) {
          (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
        }
      }
    }
    else {
      ppuVar13 = ppuVar10;
      (**(code **)(*ppuVar10 + 0x30))(ppuVar10,3,0,0);
      ppuStack_98 = ppuStack_c8;
      ppuStack_f8 = ppuStack_c8;
      if (ppuStack_c8 != (undefined **)0x0) {
        ppuVar14 = ppuStack_c8 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar5) {
            *ppuVar14 = *ppuVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuVar14 = (undefined **)0xa8;
      ppuStack_100 = ppuVar10;
      __Znwm();
      ppuVar14[1] = (undefined *)0x0;
      ppuVar14[2] = (undefined *)0x0;
      uVar6 = 0;
      if (bVar3 != 0) {
        uVar6 = ((uVar1 + bVar3) - 1) / (uint)bVar3;
      }
      *ppuVar14 = (undefined *)&PTR_FUN_110baa4d8;
      ppuStack_b0 = (undefined **)FUN_10a195b24;
      ppuStack_a8 = &PTR_FUN_110ba9e48;
      ppuStack_100 = (undefined **)0x0;
      ppuStack_f8 = (undefined **)0x0;
      ppuStack_a0 = ppuVar10;
      FUN_10a1b2668(ppuVar14 + 3,ppuVar13,CONCAT44(iStack_b4,iStack_b8),uVar6 * bVar2,plVar11,
                    &ppuStack_b0,0,0);
      (*(code *)*ppuStack_a8)(&ppuStack_a8);
      ppuStack_f0 = ppuVar14 + 3;
      ppuStack_e8 = ppuVar14;
      FUN_10a16b1ec(param_2,&ppuStack_f0);
      ppuVar10 = ppuStack_e8;
      if (ppuStack_e8 != (undefined **)0x0) {
        ppuVar13 = ppuStack_e8 + 1;
        do {
          puVar18 = *ppuVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
          if (bVar5) {
            *ppuVar13 = puVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar18 == (undefined *)0x0) {
          (**(code **)(*ppuStack_e8 + 0x10))(ppuStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
        }
      }
      ppuVar10 = ppuStack_f8;
      if (ppuStack_f8 != (undefined **)0x0) {
        plVar11 = (long *)(ppuStack_f8 + 1);
        do {
          lVar16 = *plVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)((long)*ppuStack_f8 + 0x10))(ppuStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
        }
      }
      if (ppuStack_c8 != (undefined **)0x0) {
        ppuVar10 = ppuStack_c8 + 1;
        do {
          puVar18 = *ppuVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
          if (bVar5) {
            *ppuVar10 = puVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          ppuVar13 = ppuStack_c8;
        } while (cVar4 != '\0');
        goto LAB_10a16b108;
      }
    }
LAB_10a16b124:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a0edfc4(&ppuStack_b0);
LAB_10a16b180:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a16b184);
  (*pcVar7)();
}



/* Entry: 10a16b258; end: 10a16b563;  */

void FUN_10a16b258(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  code *pcVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined *puVar13;
  uint uVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar9 = param_1;
  (**(code **)(*param_1 + 0x38))();
  puStack_88 = &UNK_10f63fd68;
  lStack_80 = 0x44;
  if ((int)param_1[0xd] == 0 && (int)plVar9 == 1) {
    plVar9 = (long *)param_1[0x18];
    if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a16b2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))(plVar9,param_2,param_3,param_4,param_5);
      return;
    }
    plVar12 = (long *)param_1[0x16];
    plVar9 = plVar12;
    func_0x00010a08f140();
    ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)((long)param_1 + 0x74) * 4;
    if (0x56 < *(uint *)((long)param_1 + 0x74)) {
      ppuVar1 = &PTR_DAT_110ae4700;
    }
    if (*(byte *)((long)ppuVar1 + 0x1a) != 0) {
      lVar17 = *plVar9;
      iVar3 = (int)param_1[0xb];
      bVar4 = *(byte *)(ppuVar1 + 3);
      uVar7 = 0;
      if (bVar4 != 0) {
        uVar7 = ((iVar3 + (uint)bVar4) - 1) / (uint)bVar4;
      }
      puStack_88 = &UNK_10f63fdad;
      lStack_80 = 0x34;
      if (param_3 == uVar7 * *(byte *)((long)ppuVar1 + 0x1a)) {
        uVar14 = (uint)param_4;
        uVar7 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
        uVar10 = (ulong)*(uint *)((long)param_1 + 0x5c) - (ulong)uVar7;
        uVar10 = uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU);
        iVar15 = (int)param_5;
        uVar11 = (ulong)iVar15;
        if ((long)iVar15 <= (long)uVar10) {
          uVar10 = uVar11;
        }
        uVar2 = 0;
        if (-1 < iVar15) {
          uVar2 = uVar10;
        }
        puVar13 = (undefined *)(uVar2 * param_3);
        lStack_80 = (ulong)uVar7 << 0x20;
        uStack_78 = 0;
        uStack_70 = (undefined4)uVar2;
        uStack_6c = 1;
        uStack_68 = (int)uVar14 < 0 || uVar2 != uVar11;
        puStack_88 = puVar13;
        iStack_74 = iVar3;
        if (((int)uVar14 < 0 || uVar2 != uVar11) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
          func_0x00010ae06f08(1,2,&UNK_10f63fde2,&UNK_10f63fe1f,0x590,&UNK_10f63fe83,param_7,param_8
                              ,param_4,param_5,(ulong)*(uint *)((long)param_1 + 0x5c),uVar2);
        }
        if (puVar13 != (undefined *)0x0) {
          uStack_98 = 0;
          uStack_90 = 0;
          if (*(int *)((long)plVar12 + 0x734) == 1) {
            FUN_10a16872c(&plStack_60,param_1[0x16],param_2,puVar13,0x80);
            plVar9 = plStack_58;
            plVar16 = plStack_60;
          }
          else {
            plStack_58 = (long *)0x600000080;
            plStack_60 = (long *)((ulong)puVar13 & 0xffffffff);
            (**(code **)(*(long *)param_1[0x16] + 0x70))
                      (&plStack_a8,(long *)param_1[0x16],&plStack_60);
            plVar9 = plStack_a0;
            plVar16 = plStack_a8;
          }
          FUN_10a168930(param_1[0x16],lVar17 + 0x10,param_1,&lStack_80,&iStack_74,plVar16);
          if (*(int *)((long)plVar12 + 0x734) != 1) {
            plVar12 = plVar16;
            (**(code **)(*plVar16 + 0x30))(plVar16,1,0,0);
            if (plVar12 == (long *)0x0) goto LAB_10a16b514;
            _memcpy(param_2,plVar12,puVar13);
            (**(code **)(*plVar16 + 0x38))(plVar16);
          }
          if (plVar9 != (long *)0x0) {
            plVar12 = plVar9 + 1;
            do {
              lVar17 = *plVar12;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar6) {
                *plVar12 = lVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar17 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
        }
        return;
      }
      goto LAB_10a16b500;
    }
  }
  else {
LAB_10a16b500:
    FUN_10a0edfc4(&puStack_88);
  }
  func_0x000109243bf8(&UNK_10f62e152);
LAB_10a16b514:
  func_0x000105688514(&UNK_10f63fee5);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a16b524);
  (*pcVar8)();
}



/* Entry: 10a16b564; end: 10a16b56b;  */

void FUN_10a16b564(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined *puVar14;
  uint uVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar10 = (long *)(param_1 + -0x40);
  plVar9 = plVar10;
  (**(code **)(*plVar10 + 0x38))();
  puStack_88 = &UNK_10f63fd68;
  lStack_80 = 0x44;
  if (*(int *)(param_1 + 0x28) == 0 && (int)plVar9 == 1) {
    plVar9 = *(long **)(param_1 + 0x80);
    if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a16b2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))(plVar9,param_2,param_3,param_4,param_5);
      return;
    }
    plVar13 = *(long **)(param_1 + 0x70);
    plVar9 = plVar13;
    func_0x00010a08f140();
    ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_1 + 0x34) * 4;
    if (0x56 < *(uint *)(param_1 + 0x34)) {
      ppuVar1 = &PTR_DAT_110ae4700;
    }
    if (*(byte *)((long)ppuVar1 + 0x1a) != 0) {
      lVar18 = *plVar9;
      iVar3 = *(int *)(param_1 + 0x18);
      bVar4 = *(byte *)(ppuVar1 + 3);
      uVar7 = 0;
      if (bVar4 != 0) {
        uVar7 = ((iVar3 + (uint)bVar4) - 1) / (uint)bVar4;
      }
      puStack_88 = &UNK_10f63fdad;
      lStack_80 = 0x34;
      if (param_3 == uVar7 * *(byte *)((long)ppuVar1 + 0x1a)) {
        uVar15 = (uint)param_4;
        uVar7 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
        uVar11 = (ulong)*(uint *)(param_1 + 0x1c) - (ulong)uVar7;
        uVar11 = uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU);
        iVar16 = (int)param_5;
        uVar12 = (ulong)iVar16;
        if ((long)iVar16 <= (long)uVar11) {
          uVar11 = uVar12;
        }
        uVar2 = 0;
        if (-1 < iVar16) {
          uVar2 = uVar11;
        }
        puVar14 = (undefined *)(uVar2 * param_3);
        lStack_80 = (ulong)uVar7 << 0x20;
        uStack_78 = 0;
        uStack_70 = (undefined4)uVar2;
        uStack_6c = 1;
        uStack_68 = (int)uVar15 < 0 || uVar2 != uVar12;
        puStack_88 = puVar14;
        iStack_74 = iVar3;
        if (((int)uVar15 < 0 || uVar2 != uVar12) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
          func_0x00010ae06f08(1,2,&UNK_10f63fde2,&UNK_10f63fe1f,0x590,&UNK_10f63fe83,param_7,param_8
                              ,param_4,param_5,(ulong)*(uint *)(param_1 + 0x1c),uVar2);
        }
        if (puVar14 != (undefined *)0x0) {
          uStack_98 = 0;
          uStack_90 = 0;
          if (*(int *)((long)plVar13 + 0x734) == 1) {
            FUN_10a16872c(&plStack_60,*(undefined8 *)(param_1 + 0x70),param_2,puVar14,0x80);
            plVar9 = plStack_58;
            plVar17 = plStack_60;
          }
          else {
            plStack_58 = (long *)0x600000080;
            plStack_60 = (long *)((ulong)puVar14 & 0xffffffff);
            (**(code **)(**(long **)(param_1 + 0x70) + 0x70))
                      (&plStack_a8,*(long **)(param_1 + 0x70),&plStack_60);
            plVar9 = plStack_a0;
            plVar17 = plStack_a8;
          }
          FUN_10a168930(*(undefined8 *)(param_1 + 0x70),lVar18 + 0x10,plVar10,&lStack_80,&iStack_74,
                        plVar17);
          if (*(int *)((long)plVar13 + 0x734) != 1) {
            plVar10 = plVar17;
            (**(code **)(*plVar17 + 0x30))(plVar17,1,0,0);
            if (plVar10 == (long *)0x0) goto LAB_10a16b514;
            _memcpy(param_2,plVar10,puVar14);
            (**(code **)(*plVar17 + 0x38))(plVar17);
          }
          if (plVar9 != (long *)0x0) {
            plVar10 = plVar9 + 1;
            do {
              lVar18 = *plVar10;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar6) {
                *plVar10 = lVar18 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
        }
        return;
      }
      goto LAB_10a16b500;
    }
  }
  else {
LAB_10a16b500:
    FUN_10a0edfc4(&puStack_88);
  }
  func_0x000109243bf8(&UNK_10f62e152);
LAB_10a16b514:
  func_0x000105688514(&UNK_10f63fee5);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a16b524);
  (*pcVar8)();
}



/* Entry: 10a16b56c; end: 10a16b5eb;  */

void FUN_10a16b56c(long *param_1,long param_2)

{
  (**(code **)(*param_1 + 0xa0))
            (param_1,0,0,0,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),1,
             *(undefined8 *)(param_2 + 0x28),0);
  return;
}



/* Entry: 10a16b5ec; end: 10a16b64f;  */

undefined8 * FUN_10a16b5ec(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a16b650; end: 10a16b6d3;  */

undefined8 * FUN_10a16b650(undefined8 *param_1,long *param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba0e50;
  *(undefined2 *)(param_1 + 3) = 0x100;
  puVar1 = param_1;
  plVar2 = param_2;
  func_0x00010a0fda30();
  param_1[4] = puVar1;
  param_1[5] = plVar2;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = &PTR_DAT_110ba9148;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (lVar3 != 0) {
    *(undefined1 *)((long)param_1 + 0x34) = param_3;
  }
  FUN_10a16b5ec(param_1 + 7,param_2);
  return param_1;
}



/* Entry: 10a16b6d4; end: 10a16b81b;  */

void FUN_10a16b6d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a16b6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  return;
}



/* Entry: 10a16b81c; end: 10a16b913;  */

void FUN_10a16b81c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lStack_40;
  long *plStack_38;
  
  lVar5 = *param_2;
  if ((lVar5 == 0) || (___dynamic_cast(lVar5,&PTR_DAT_110ba0e18,&PTR_DAT_110baa0a0,0), lVar5 == 0))
  {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plStack_38 = (long *)param_2[1];
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar6 = (undefined8 *)0x60;
    lStack_40 = lVar5;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar7 = puVar6 + 3;
    *puVar6 = &PTR_FUN_110ba9e78;
    FUN_10a16b650(puVar7,&lStack_40,param_3);
    plVar1 = plStack_38;
    *param_1 = puVar7;
    param_1[1] = puVar6;
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a16b914; end: 10a16bc1f;  */

undefined8 * FUN_10a16b914(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puStack_68;
  undefined8 uStack_60;
  
  lVar5 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  uVar9 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar9;
  *param_1 = &PTR_FUN_110ba9220;
  param_2[1] = 0;
  *param_2 = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined1 *)((long)param_1 + 0x142) = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined8 *)((long)param_1 + 0x204) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x1fc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x214) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x20c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x22c) = 0;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x21c) = 0;
  param_1[0x46] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined1 *)((long)param_1 + 0x23c) = 0;
  *(undefined8 *)((long)param_1 + 0x25c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x2cc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x33c) = 0xffffffffffffffff;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 1;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  *(undefined1 *)(param_1 + 0x59) = 1;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  *(undefined1 *)(param_1 + 0x67) = 1;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  *(undefined1 *)(param_1 + 0x75) = 1;
  *(undefined8 *)((long)param_1 + 0x3ac) = 0xffffffffffffffff;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar5 + 0x460) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x458) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x470) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x468) = 0;
    *(undefined4 *)((long)param_1 + lVar5 + 0x478) = 0x3f800000;
    lVar5 = lVar5 + 0x28;
  } while (lVar5 != 0xa0);
  puVar8 = param_1 + 0x83;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  param_1[200] = 0;
  param_1[199] = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  lVar5 = 4;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  do {
    plVar7 = (long *)puVar8[1];
    *puVar8 = 0;
    puVar8[1] = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    puVar8 = puVar8 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puStack_68 = &UNK_10f63ff13;
  uStack_60 = 0x30;
  if (param_1[3] != 0) {
    return param_1;
  }
  FUN_10a0edfc4(&puStack_68);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a16bb4c);
  (*pcVar4)();
}



/* Entry: 10a16bc20; end: 10a16bc97;  */

long FUN_10a16bc20(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0x1a0;
  do {
    lVar1 = param_1 + lVar2;
    func_0x00010a0ec3c8(lVar1 + -0x10);
    if (*(long *)(lVar1 + -0x30) != 0) {
      *(long *)(lVar1 + -0x28) = *(long *)(lVar1 + -0x30);
      __ZdlPv();
    }
    if (*(long *)(lVar1 + -0x48) != 0) {
      *(long *)(param_1 + lVar2 + -0x40) = *(long *)(lVar1 + -0x48);
      __ZdlPv();
    }
    lVar1 = *(long *)(param_1 + lVar2 + -0x60);
    if (lVar1 != 0) {
      *(long *)(param_1 + lVar2 + -0x58) = lVar1;
      __ZdlPv();
    }
    lVar2 = lVar2 + -0x68;
  } while (lVar2 != 0);
  return param_1;
}



/* Entry: 10a16bc98; end: 10a16bcef;  */

long FUN_10a16bc98(long param_1)

{
  FUN_10a18702c(param_1 + 0x58);
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a16bcf0; end: 10a16bef7;  */

long FUN_10a16bcf0(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    func_0x00010a0ec3c8(lVar1 + 0x688);
    if (*(long *)(lVar1 + 0x668) != 0) {
      *(long *)(lVar1 + 0x670) = *(long *)(lVar1 + 0x668);
      __ZdlPv();
    }
    if (*(long *)(lVar1 + 0x650) != 0) {
      *(long *)(param_1 + lVar2 + 0x658) = *(long *)(lVar1 + 0x650);
      __ZdlPv();
    }
    lVar1 = *(long *)(param_1 + lVar2 + 0x638);
    if (lVar1 != 0) {
      *(long *)(param_1 + lVar2 + 0x640) = lVar1;
      __ZdlPv();
    }
    lVar2 = lVar2 + -0x68;
  } while (lVar2 != -0x1a0);
  lVar2 = 0x4d0;
  do {
    FUN_10a186f74(param_1 + lVar2);
    lVar2 = lVar2 + -0x28;
  } while (lVar2 != 0x430);
  lVar2 = 0x448;
  do {
    func_0x00010a0ec370(param_1 + lVar2);
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0x408);
  FUN_10a18702c(param_1 + 0x400);
  if (*(long *)(param_1 + 1000) != 0) {
    *(long *)(param_1 + 0x3f0) = *(long *)(param_1 + 1000);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x3d0) != 0) {
    *(long *)(param_1 + 0x3d8) = *(long *)(param_1 + 0x3d0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x3b8) != 0) {
    *(long *)(param_1 + 0x3c0) = *(long *)(param_1 + 0x3b8);
    __ZdlPv();
  }
  FUN_10a18702c(param_1 + 0x390);
  if (*(long *)(param_1 + 0x378) != 0) {
    *(long *)(param_1 + 0x380) = *(long *)(param_1 + 0x378);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x360) != 0) {
    *(long *)(param_1 + 0x368) = *(long *)(param_1 + 0x360);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x348) != 0) {
    *(long *)(param_1 + 0x350) = *(long *)(param_1 + 0x348);
    __ZdlPv();
  }
  FUN_10a18702c(param_1 + 800);
  if (*(long *)(param_1 + 0x308) != 0) {
    *(long *)(param_1 + 0x310) = *(long *)(param_1 + 0x308);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x2f0) != 0) {
    *(long *)(param_1 + 0x2f8) = *(long *)(param_1 + 0x2f0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x2d8) != 0) {
    *(long *)(param_1 + 0x2e0) = *(long *)(param_1 + 0x2d8);
    __ZdlPv();
  }
  FUN_10a18702c(param_1 + 0x2b0);
  if (*(long *)(param_1 + 0x298) != 0) {
    *(long *)(param_1 + 0x2a0) = *(long *)(param_1 + 0x298);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x280) != 0) {
    *(long *)(param_1 + 0x288) = *(long *)(param_1 + 0x280);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x268) != 0) {
    *(long *)(param_1 + 0x270) = *(long *)(param_1 + 0x268);
    __ZdlPv();
  }
  lStack_38 = param_1 + 0x240;
  FUN_10a0426d8(&lStack_38);
  FUN_10a195cf0(param_1 + 0x1d0);
  FUN_10a195c50(param_1 + 0x118);
  if (*(long *)(param_1 + 0xf0) != 0) {
    *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xd8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(long *)(param_1 + 200) = *(long *)(param_1 + 0xc0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xa8);
    __ZdlPv();
  }
  func_0x00010a1943f8(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a16bef8; end: 10a16befb;  */

long FUN_10a16bef8(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    func_0x00010a0ec3c8(lVar1 + 0x688);
    if (*(long *)(lVar1 + 0x668) != 0) {
      *(long *)(lVar1 + 0x670) = *(long *)(lVar1 + 0x668);
      __ZdlPv();
    }
    if (*(long *)(lVar1 + 0x650) != 0) {
      *(long *)(param_1 + lVar2 + 0x658) = *(long *)(lVar1 + 0x650);
      __ZdlPv();
    }
    lVar1 = *(long *)(param_1 + lVar2 + 0x638);
    if (lVar1 != 0) {
      *(long *)(param_1 + lVar2 + 0x640) = lVar1;
      __ZdlPv();
    }
    lVar2 = lVar2 + -0x68;
  } while (lVar2 != -0x1a0);
  lVar2 = 0x4d0;
  do {
    FUN_10a186f74(param_1 + lVar2);
    lVar2 = lVar2 + -0x28;
  } while (lVar2 != 0x430);
  lVar2 = 0x448;
  do {
    func_0x00010a0ec370(param_1 + lVar2);
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0x408);
  FUN_10a18702c(param_1 + 0x400);
  if (*(long *)(param_1 + 1000) != 0) {
    *(long *)(param_1 + 0x3f0) = *(long *)(param_1 + 1000);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x3d0) != 0) {
    *(long *)(param_1 + 0x3d8) = *(long *)(param_1 + 0x3d0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x3b8) != 0) {
    *(long *)(param_1 + 0x3c0) = *(long *)(param_1 + 0x3b8);
    __ZdlPv();
  }
  FUN_10a18702c(param_1 + 0x390);
  if (*(long *)(param_1 + 0x378) != 0) {
    *(long *)(param_1 + 0x380) = *(long *)(param_1 + 0x378);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x360) != 0) {
    *(long *)(param_1 + 0x368) = *(long *)(param_1 + 0x360);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x348) != 0) {
    *(long *)(param_1 + 0x350) = *(long *)(param_1 + 0x348);
    __ZdlPv();
  }
  FUN_10a18702c(param_1 + 800);
  if (*(long *)(param_1 + 0x308) != 0) {
    *(long *)(param_1 + 0x310) = *(long *)(param_1 + 0x308);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x2f0) != 0) {
    *(long *)(param_1 + 0x2f8) = *(long *)(param_1 + 0x2f0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x2d8) != 0) {
    *(long *)(param_1 + 0x2e0) = *(long *)(param_1 + 0x2d8);
    __ZdlPv();
  }
  FUN_10a18702c(param_1 + 0x2b0);
  if (*(long *)(param_1 + 0x298) != 0) {
    *(long *)(param_1 + 0x2a0) = *(long *)(param_1 + 0x298);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x280) != 0) {
    *(long *)(param_1 + 0x288) = *(long *)(param_1 + 0x280);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x268) != 0) {
    *(long *)(param_1 + 0x270) = *(long *)(param_1 + 0x268);
    __ZdlPv();
  }
  lStack_38 = param_1 + 0x240;
  FUN_10a0426d8(&lStack_38);
  FUN_10a195cf0(param_1 + 0x1d0);
  FUN_10a195c50(param_1 + 0x118);
  if (*(long *)(param_1 + 0xf0) != 0) {
    *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xd8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(long *)(param_1 + 200) = *(long *)(param_1 + 0xc0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xa8);
    __ZdlPv();
  }
  func_0x00010a1943f8(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a16befc; end: 10a16bf0f;  */

void FUN_10a16befc(void)

{
  FUN_10a16bcf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a16bf10; end: 10a16efff;  */

/* WARNING: Removing unreachable block (ram,0x00010a16dee0) */
/* WARNING: Removing unreachable block (ram,0x00010a16dd3c) */
/* WARNING: Removing unreachable block (ram,0x00010a16dc18) */
/* WARNING: Removing unreachable block (ram,0x00010a16d9a0) */
/* WARNING: Removing unreachable block (ram,0x00010a16daa8) */
/* WARNING: Removing unreachable block (ram,0x00010a16d77c) */
/* WARNING: Removing unreachable block (ram,0x00010a16d254) */
/* WARNING: Removing unreachable block (ram,0x00010a16ceac) */
/* WARNING: Removing unreachable block (ram,0x00010a16cf74) */
/* WARNING: Removing unreachable block (ram,0x00010a16cccc) */
/* WARNING: Removing unreachable block (ram,0x00010a16c4d4) */
/* WARNING: Removing unreachable block (ram,0x00010a16c664) */
/* WARNING: Removing unreachable block (ram,0x00010a16c340) */
/* WARNING: Removing unreachable block (ram,0x00010a16c8c4) */
/* WARNING: Removing unreachable block (ram,0x00010a16cbd8) */
/* WARNING: Removing unreachable block (ram,0x00010a16cbe4) */
/* WARNING: Removing unreachable block (ram,0x00010a16c198) */
/* WARNING: Removing unreachable block (ram,0x00010a16c72c) */
/* WARNING: Removing unreachable block (ram,0x00010a16c4e0) */
/* WARNING: Removing unreachable block (ram,0x00010a16c178) */
/* WARNING: Removing unreachable block (ram,0x00010a16c288) */
/* WARNING: Removing unreachable block (ram,0x00010a16c984) */
/* WARNING: Removing unreachable block (ram,0x00010a16ca60) */
/* WARNING: Removing unreachable block (ram,0x00010a16c7f0) */
/* WARNING: Removing unreachable block (ram,0x00010a16cde0) */
/* WARNING: Removing unreachable block (ram,0x00010a16ccec) */
/* WARNING: Removing unreachable block (ram,0x00010a16d150) */
/* WARNING: Removing unreachable block (ram,0x00010a16d170) */
/* WARNING: Removing unreachable block (ram,0x00010a16d3d4) */
/* WARNING: Removing unreachable block (ram,0x00010a16d554) */
/* WARNING: Removing unreachable block (ram,0x00010a16d314) */
/* WARNING: Removing unreachable block (ram,0x00010a16d494) */
/* WARNING: Removing unreachable block (ram,0x00010a16e33c) */
/* WARNING: Removing unreachable block (ram,0x00010a16de10) */
/* WARNING: Removing unreachable block (ram,0x00010a16d610) */
/* WARNING: Removing unreachable block (ram,0x00010a16dfb0) */
/* WARNING: Removing unreachable block (ram,0x00010a16d6c8) */
/* WARNING: Removing unreachable block (ram,0x00010a16db90) */
/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10a16bf10(long *******param_1)

{
  long *plVar1;
  undefined1 auVar2 [8];
  undefined8 *******pppppppuVar3;
  code *pcVar4;
  bool bVar5;
  long ******pppppplVar6;
  undefined8 *puVar7;
  long ******pppppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  undefined **ppuVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  long *****ppppplVar22;
  long ******pppppplVar23;
  long ******pppppplVar24;
  long ******pppppplVar25;
  long ******pppppplVar26;
  long ******pppppplVar27;
  undefined8 auStack_210 [2];
  char cStack_1f9;
  undefined8 uStack_1f0;
  long *****ppppplStack_1e8;
  ulong uStack_1e0;
  long *******ppppppplStack_1d8;
  undefined *puStack_1d0;
  long *******ppppppplStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  long lStack_1b0;
  long ******pppppplStack_1a8;
  long ******pppppplStack_1a0;
  long ******pppppplStack_198;
  long ******pppppplStack_190;
  long ******pppppplStack_188;
  long ******pppppplStack_180;
  long ******pppppplStack_178;
  long ******pppppplStack_170;
  undefined8 uStack_168;
  long ******pppppplStack_158;
  long ******pppppplStack_150;
  undefined8 *******pppppppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  long *******ppppppplStack_130;
  long ******pppppplStack_128;
  long ******pppppplStack_120;
  long *******ppppppplStack_110;
  long ******pppppplStack_108;
  long ******pppppplStack_100;
  undefined8 uStack_f8;
  long *******ppppppplStack_f0;
  long ******pppppplStack_e8;
  long ******pppppplStack_e0;
  undefined1 auStack_d0 [6];
  undefined1 auStack_ca [2];
  undefined8 uStack_c8;
  long ******pppppplStack_c0;
  undefined1 auStack_b0 [6];
  undefined1 auStack_aa [2];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 *******pppppppuStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  
  if ((*(byte *)((long)param_1 + 0x141) & 1) != 0) {
    return param_1;
  }
  *(undefined1 *)((long)param_1 + 0x141) = 1;
  FUN_10a1605fc(param_1[3]);
  pppppplVar6 = param_1[3];
  FUN_10a16f000(pppppplVar6,8,0x13);
  param_1[5] = pppppplVar6;
  pppppplVar6 = param_1[3];
  FUN_10a16f000(pppppplVar6,9,0x14);
  param_1[6] = pppppplVar6;
  pppppplVar6 = param_1[3];
  FUN_10a16f000(pppppplVar6,10,0x15);
  param_1[0xf] = pppppplVar6;
  pppppplVar6 = param_1[3];
  FUN_10a16f000(pppppplVar6,6,0x11);
  param_1[7] = pppppplVar6;
  pppppplVar6 = param_1[3];
  FUN_10a16f000(pppppplVar6,7,0x12);
  param_1[8] = pppppplVar6;
  pppppplVar6 = param_1[3];
  FUN_10a16f000(pppppplVar6,2,0xd);
  param_1[9] = pppppplVar6;
  pppppplVar6 = param_1[3];
  FUN_10a16f000(pppppplVar6,3,0xe);
  param_1[10] = pppppplVar6;
  pppppplVar6 = param_1[3];
  FUN_10a16f000(pppppplVar6,0,0xb);
  param_1[0xb] = pppppplVar6;
  pppppplVar6 = param_1[3];
  FUN_10a16f000(pppppplVar6,1,0xc);
  param_1[0xc] = pppppplVar6;
  pppppplVar6 = param_1[3];
  FUN_10a16f000(pppppplVar6,4,0xf);
  param_1[0xd] = pppppplVar6;
  pppppplVar6 = param_1[3];
  FUN_10a16f000(pppppplVar6,5,0x10);
  param_1[0xe] = pppppplVar6;
  pppppplVar6 = param_1[3];
  FUN_10a16f000(pppppplVar6,0x1a,0x1b);
  param_1[0x14] = pppppplVar6;
  pppppplVar6 = param_1[3];
  FUN_10a16f000(pppppplVar6,0x16,0xd8);
  param_1[0x10] = pppppplVar6;
  pppppplVar6 = param_1[3];
  FUN_10a16f000(pppppplVar6,0x17,0xd8);
  param_1[0x11] = pppppplVar6;
  pppppplVar6 = param_1[3];
  FUN_10a16f000(pppppplVar6,0x18,0xd8);
  param_1[0x12] = pppppplVar6;
  pppppplVar6 = param_1[3];
  FUN_10a16f000(pppppplVar6,0x19,0xd8);
  iVar14 = 0;
  param_1[0x13] = pppppplVar6;
LAB_10a16c098:
  do {
    func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110c510d8);
    if ((long)pppppplStack_100 < 0) {
      func_0x000107c3192c(&ppppppplStack_f0,ppppppplStack_110,pppppplStack_108);
    }
    else {
      pppppplStack_e8 = pppppplStack_108;
      ppppppplStack_f0 = ppppppplStack_110;
      pppppplStack_e0 = pppppplStack_100;
    }
    ppppppplVar11 = (long *******)&ppppppplStack_f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppppplVar11,&DAT_10f62a9e8,1);
    uStack_c8 = ppppppplVar11[1];
    _auStack_d0 = (long *******)*ppppppplVar11;
    pppppplStack_c0 = ppppppplVar11[2];
    ppppppplVar11[1] = (long ******)0x0;
    ppppppplVar11[2] = (long ******)0x0;
    *ppppppplVar11 = (long ******)0x0;
    __ZNSt3__19to_stringEi(&ppppppplStack_130,iVar14);
    pppppplVar6 = pppppplStack_128;
    ppppppplVar11 = ppppppplStack_130;
    if (-1 < (long)pppppplStack_120) {
      pppppplVar6 = (long ******)((ulong)pppppplStack_120 >> 0x38);
      ppppppplVar11 = (long *******)&ppppppplStack_130;
    }
    puVar7 = (undefined8 *)auStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,ppppppplVar11,pppppplVar6);
    auStack_a8 = (undefined1  [8])puVar7[1];
    _auStack_b0 = (long *******)*puVar7;
    uStack_a0 = (long ******)puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = (undefined8 *)auStack_b0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f63ff44,2);
    uStack_88 = puVar7[1];
    pppppppuStack_90 = (undefined8 *******)*puVar7;
    uStack_80 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    if ((long)pppppplStack_120 < 0) {
      __ZdlPv(ppppppplStack_130);
    }
    if ((long)pppppplStack_e0 < 0) {
      __ZdlPv(ppppppplStack_f0);
    }
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
    pppppplVar6 = param_1[3];
    iVar20 = (int)(char)uStack_80._7_1_;
    uVar19 = uStack_88;
    if (-1 < iVar20) {
      uVar19 = (ulong)uStack_80._7_1_;
    }
    pppppplStack_150 = (long ******)CONCAT44(pppppplStack_150._4_4_,iVar20);
    FUN_10a003c90(auStack_b0,uVar19 + 0xf,auStack_d0);
    if (uVar19 != 0) {
      pppppppuVar3 = pppppppuStack_90;
      if (-1 < iVar20) {
        pppppppuVar3 = &pppppppuStack_90;
      }
      _memmove(auStack_b0,pppppppuVar3,uVar19);
    }
    *(undefined8 *)(auStack_b0 + uVar19) = 0x5266666f6c6c6166;
    *(undefined8 *)(auStack_b0 + uVar19 + 7) = 0x72715365676e6152;
    auStack_a8[uVar19 + 7] = 0;
    pppppplStack_100 = uStack_a0;
    pppppplStack_108 = (long ******)auStack_a8;
    ppppppplStack_110 = _auStack_b0;
    auStack_a8 = (undefined1  [8])0x0;
    uStack_a0 = (long ******)0x0;
    _auStack_b0 = (long *******)0x0;
    uStack_f8 = 0;
    func_0x000107c2b080(&ppppppplStack_110);
    FUN_10a1605fc(pppppplVar6);
    pppppplVar6 = pppppplVar6 + 0xb;
    FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
    pppppplVar24 = param_1[3];
    FUN_10a003c90(auStack_b0,uVar19 + 0x18,auStack_d0);
    if (uVar19 != 0) {
      pppppppuVar3 = pppppppuStack_90;
      if (-1 < iVar20) {
        pppppppuVar3 = &pppppppuStack_90;
      }
      _memmove(auStack_b0,pppppppuVar3,uVar19);
    }
    *(undefined8 *)(auStack_a8 + uVar19) = 0x4967654e65676e61;
    *(undefined8 *)(auStack_b0 + uVar19) = 0x5266666f6c6c6166;
    *(undefined8 *)(auStack_98 + (uVar19 - 8)) = 0x727153727153766e;
    pppppplStack_100 = uStack_a0;
    auStack_98[uVar19] = 0;
    pppppplStack_108 = (long ******)auStack_a8;
    ppppppplStack_110 = _auStack_b0;
    auStack_a8 = (undefined1  [8])0x0;
    uStack_a0 = (long ******)0x0;
    _auStack_b0 = (long *******)0x0;
    uStack_f8 = 0;
    func_0x000107c2b080(&ppppppplStack_110);
    FUN_10a1605fc(pppppplVar24);
    pppppplVar24 = pppppplVar24 + 0xb;
    FUN_10a194fac(pppppplVar24,&ppppppplStack_110);
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
    pppppplVar26 = param_1[3];
    FUN_10a003c90(auStack_b0,uVar19 + 0xc,auStack_d0);
    if (uVar19 != 0) {
      pppppppuVar3 = pppppppuStack_90;
      if (-1 < iVar20) {
        pppppppuVar3 = &pppppppuStack_90;
      }
      _memmove(auStack_b0,pppppppuVar3,uVar19);
    }
    *(undefined8 *)(auStack_b0 + uVar19) = 0x616e457961636564;
    *(undefined4 *)(auStack_a8 + uVar19) = 0x64656c62;
    auStack_a8[uVar19 + 4] = 0;
    pppppplStack_100 = uStack_a0;
    pppppplStack_108 = (long ******)auStack_a8;
    ppppppplStack_110 = _auStack_b0;
    _auStack_b0 = (long *******)0x0;
    auStack_a8 = (undefined1  [8])0x0;
    uStack_a0 = (long ******)0x0;
    uStack_f8 = 0;
    func_0x000107c2b080(&ppppppplStack_110);
    FUN_10a1605fc(pppppplVar26);
    pppppplVar26 = pppppplVar26 + 0xb;
    FUN_10a194fac(pppppplVar26,&ppppppplStack_110);
    pppppplVar27 = (long ******)0x0;
    if (pppppplVar26 != (long ******)0x0) {
      pppppplVar27 = pppppplVar26 + 6;
    }
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
    if (pppppplVar6 == (long ******)0x0) {
      pppppplVar26 = param_1[3];
      FUN_10a003c90(auStack_b0,uVar19 + 0x10,auStack_d0);
      if (uVar19 != 0) {
        pppppppuVar3 = pppppppuStack_90;
        if (-1 < iVar20) {
          pppppppuVar3 = &pppppppuStack_90;
        }
        _memmove(auStack_b0,pppppppuVar3,uVar19);
      }
      *(undefined8 *)(auStack_a8 + uVar19) = 0x65636e6174736944;
      *(undefined8 *)(auStack_b0 + uVar19) = 0x646e457961636564;
      auStack_98[uVar19 - 8] = 0;
      pppppplStack_100 = uStack_a0;
      pppppplStack_108 = (long ******)auStack_a8;
      ppppppplStack_110 = _auStack_b0;
      _auStack_b0 = (long *******)0x0;
      auStack_a8 = (undefined1  [8])0x0;
      uStack_a0 = (long ******)0x0;
      uStack_f8 = 0;
      func_0x000107c2b080(&ppppppplStack_110);
      FUN_10a1605fc(pppppplVar26);
      pppppplVar26 = pppppplVar26 + 0xb;
      FUN_10a194fac(pppppplVar26,&ppppppplStack_110);
      pppppplVar6 = (long ******)0x0;
      if (pppppplVar26 != (long ******)0x0) {
        pppppplVar6 = pppppplVar26 + 6;
      }
      if ((long)pppppplStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
      }
      if (pppppplVar24 == (long ******)0x0) goto LAB_10a16c418;
LAB_10a16c5a0:
      pppppplStack_178 = pppppplVar24 + 6;
    }
    else {
      pppppplVar6 = pppppplVar6 + 6;
      if (pppppplVar24 != (long ******)0x0) goto LAB_10a16c5a0;
LAB_10a16c418:
      pppppplVar24 = param_1[3];
      FUN_10a003c90(auStack_b0,uVar19 + 0x17,auStack_d0);
      if (uVar19 != 0) {
        pppppppuVar3 = pppppppuStack_90;
        if (-1 < iVar20) {
          pppppppuVar3 = &pppppppuStack_90;
        }
        _memmove(auStack_b0,pppppppuVar3,uVar19);
      }
      *(undefined8 *)(auStack_a8 + uVar19) = 0x6944646e45796163;
      *(undefined8 *)(auStack_b0 + uVar19) = 0x654470635267656e;
      *(undefined8 *)(auStack_a8 + uVar19 + 7) = 0x3465636e61747369;
      pppppplStack_100 = uStack_a0;
      auStack_98[uVar19 - 1] = 0;
      pppppplStack_108 = (long ******)auStack_a8;
      ppppppplStack_110 = _auStack_b0;
      auStack_a8 = (undefined1  [8])0x0;
      uStack_a0 = (long ******)0x0;
      _auStack_b0 = (long *******)0x0;
      uStack_f8 = 0;
      func_0x000107c2b080(&ppppppplStack_110);
      FUN_10a1605fc(pppppplVar24);
      pppppplVar24 = pppppplVar24 + 0xb;
      FUN_10a194fac(pppppplVar24,&ppppppplStack_110);
      pppppplStack_178 = (long ******)0x0;
      if (pppppplVar24 != (long ******)0x0) {
        pppppplStack_178 = pppppplVar24 + 6;
      }
      if ((long)pppppplStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
      }
    }
    pppppplVar24 = param_1[3];
    FUN_10a003c90(auStack_b0,uVar19 + 10,auStack_d0);
    if (uVar19 != 0) {
      pppppppuVar3 = pppppppuStack_90;
      if (-1 < iVar20) {
        pppppppuVar3 = &pppppppuStack_90;
      }
      _memmove(auStack_b0,pppppppuVar3,uVar19);
    }
    *(undefined8 *)(auStack_b0 + uVar19) = 0x616353656c676e61;
    *(undefined2 *)(auStack_a8 + uVar19) = 0x656c;
    auStack_a8[uVar19 + 2] = 0;
    pppppplStack_100 = uStack_a0;
    pppppplStack_108 = (long ******)auStack_a8;
    ppppppplStack_110 = _auStack_b0;
    _auStack_b0 = (long *******)0x0;
    auStack_a8 = (undefined1  [8])0x0;
    uStack_a0 = (long ******)0x0;
    uStack_f8 = 0;
    func_0x000107c2b080(&ppppppplStack_110);
    FUN_10a1605fc(pppppplVar24);
    pppppplVar24 = pppppplVar24 + 0xb;
    FUN_10a194fac(pppppplVar24,&ppppppplStack_110);
    pppppplStack_180 = (long ******)0x0;
    if (pppppplVar24 != (long ******)0x0) {
      pppppplStack_180 = pppppplVar24 + 6;
    }
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
    pppppplVar24 = param_1[3];
    FUN_10a003c90(auStack_b0,uVar19 + 0xb,auStack_d0);
    if (uVar19 != 0) {
      pppppppuVar3 = pppppppuStack_90;
      if (-1 < iVar20) {
        pppppppuVar3 = &pppppppuStack_90;
      }
      _memmove(auStack_b0,pppppppuVar3,uVar19);
    }
    *(undefined8 *)(auStack_b0 + uVar19) = 0x66664f656c676e61;
    *(undefined4 *)(auStack_b0 + uVar19 + 7) = 0x74657366;
    auStack_a8[uVar19 + 3] = 0;
    pppppplStack_100 = uStack_a0;
    pppppplStack_108 = (long ******)auStack_a8;
    ppppppplStack_110 = _auStack_b0;
    _auStack_b0 = (long *******)0x0;
    auStack_a8 = (undefined1  [8])0x0;
    uStack_a0 = (long ******)0x0;
    uStack_f8 = 0;
    func_0x000107c2b080(&ppppppplStack_110);
    FUN_10a1605fc(pppppplVar24);
    pppppplVar24 = pppppplVar24 + 0xb;
    FUN_10a194fac(pppppplVar24,&ppppppplStack_110);
    pppppplStack_188 = (long ******)0x0;
    if (pppppplVar24 != (long ******)0x0) {
      pppppplStack_188 = pppppplVar24 + 6;
    }
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
    pppppplVar24 = param_1[3];
    FUN_10a003c90(auStack_b0,uVar19 + 9,auStack_d0);
    if (uVar19 != 0) {
      pppppppuVar3 = pppppppuStack_90;
      if (-1 < iVar20) {
        pppppppuVar3 = &pppppppuStack_90;
      }
      _memmove(auStack_b0,pppppppuVar3,uVar19);
    }
    pppppplStack_158 = (long ******)0x6f69746365726964;
    builtin_strncpy(auStack_b0 + uVar19,"directio",8);
    *(undefined2 *)(auStack_a8 + uVar19) = 0x6e;
    pppppplStack_100 = uStack_a0;
    pppppplStack_108 = (long ******)auStack_a8;
    ppppppplStack_110 = _auStack_b0;
    auStack_a8 = (undefined1  [8])0x0;
    uStack_a0 = (long ******)0x0;
    _auStack_b0 = (long *******)0x0;
    uStack_f8 = 0;
    func_0x000107c2b080(&ppppppplStack_110);
    FUN_10a1605fc(pppppplVar24);
    pppppplVar24 = pppppplVar24 + 0xb;
    FUN_10a194fac(pppppplVar24,&ppppppplStack_110);
    pppppplStack_198 = (long ******)0x0;
    if (pppppplVar24 != (long ******)0x0) {
      pppppplStack_198 = pppppplVar24 + 6;
    }
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
    pppppplVar24 = param_1[3];
    pppppplStack_190 = pppppplVar6;
    FUN_10a003c90(auStack_b0,uVar19 + 8,auStack_d0);
    if (uVar19 != 0) {
      pppppppuVar3 = pppppppuStack_90;
      if (-1 < iVar20) {
        pppppppuVar3 = &pppppppuStack_90;
      }
      _memmove(auStack_b0,pppppppuVar3,uVar19);
    }
    *(undefined8 *)(auStack_b0 + uVar19) = 0x6e6f697469736f70;
    auStack_a8[uVar19] = 0;
    pppppplStack_100 = uStack_a0;
    pppppplStack_108 = (long ******)auStack_a8;
    ppppppplStack_110 = _auStack_b0;
    auStack_a8 = (undefined1  [8])0x0;
    uStack_a0 = (long ******)0x0;
    _auStack_b0 = (long *******)0x0;
    uStack_f8 = 0;
    func_0x000107c2b080(&ppppppplStack_110);
    FUN_10a1605fc(pppppplVar24);
    pppppplVar24 = pppppplVar24 + 0xb;
    FUN_10a194fac(pppppplVar24,&ppppppplStack_110);
    pppppplStack_1a0 = pppppplVar24 + 6;
    if (pppppplVar24 == (long ******)0x0) {
      pppppplStack_1a0 = (long ******)0x0;
    }
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
    pppppplVar6 = param_1[3];
    FUN_10a003c90(auStack_b0,uVar19 + 5,auStack_d0);
    if (uVar19 != 0) {
      pppppppuVar3 = pppppppuStack_90;
      if (-1 < iVar20) {
        pppppppuVar3 = &pppppppuStack_90;
      }
      _memmove(auStack_b0,pppppppuVar3,uVar19);
    }
    *(undefined4 *)(auStack_b0 + uVar19) = 0x6f6c6f63;
    *(undefined2 *)(auStack_b0 + uVar19 + 4) = 0x72;
    pppppplStack_100 = uStack_a0;
    pppppplStack_108 = (long ******)auStack_a8;
    ppppppplStack_110 = _auStack_b0;
    auStack_a8 = (undefined1  [8])0x0;
    uStack_a0 = (long ******)0x0;
    _auStack_b0 = (long *******)0x0;
    uStack_f8 = 0;
    func_0x000107c2b080(&ppppppplStack_110);
    FUN_10a1605fc(pppppplVar6);
    pppppplVar6 = pppppplVar6 + 0xb;
    FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
    pppppplStack_1a8 = pppppplVar6 + 6;
    if (pppppplVar6 == (long ******)0x0) {
      pppppplStack_1a8 = (long ******)0x0;
    }
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
    pppppplVar26 = param_1[3];
    FUN_10a003c90(auStack_b0,uVar19 + 0x14,auStack_d0);
    if (uVar19 != 0) {
      pppppppuVar3 = pppppppuStack_90;
      if (-1 < (int)pppppplStack_150) {
        pppppppuVar3 = &pppppppuStack_90;
      }
      _memmove(auStack_b0,pppppppuVar3,uVar19);
    }
    uStack_168 = 0x49736d6172615070;
    pppppplStack_170 = (long ******)0x614d776f64616873;
    *(undefined8 *)(auStack_a8 + uVar19) = 0x49736d6172615070;
    *(undefined8 *)(auStack_b0 + uVar19) = 0x614d776f64616873;
    *(undefined4 *)(auStack_98 + (uVar19 - 8)) = 0x7865646e;
    pppppplStack_100 = uStack_a0;
    auStack_98[uVar19 - 4] = 0;
    pppppplStack_108 = (long ******)auStack_a8;
    ppppppplStack_110 = _auStack_b0;
    _auStack_b0 = (long *******)0x0;
    auStack_a8 = (undefined1  [8])0x0;
    uStack_a0 = (long ******)0x0;
    uStack_f8 = 0;
    func_0x000107c2b080(&ppppppplStack_110);
    FUN_10a1605fc(pppppplVar26);
    pppppplVar26 = pppppplVar26 + 0xb;
    FUN_10a194fac(pppppplVar26,&ppppppplStack_110);
    pppppplVar25 = (long ******)0x0;
    if (pppppplVar26 != (long ******)0x0) {
      pppppplVar25 = pppppplVar26 + 6;
    }
    iVar20 = (int)pppppplStack_150;
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
    if (pppppplVar6 != (long ******)0x0 || pppppplVar24 != (long ******)0x0) {
      pppppplVar26 = param_1[0x16];
      if (pppppplVar26 < param_1[0x17]) {
        *pppppplVar26 = (long *****)pppppplVar27;
        pppppplVar26[1] = (long *****)pppppplStack_190;
        pppppplVar26[2] = (long *****)pppppplStack_178;
        pppppplVar26[3] = (long *****)pppppplStack_180;
        pppppplVar26[4] = (long *****)pppppplStack_188;
        pppppplVar26[5] = (long *****)pppppplStack_198;
        pppppplVar26[6] = (long *****)pppppplStack_1a0;
        pppppplVar26[7] = (long *****)pppppplStack_1a8;
        pppppplVar27 = pppppplVar26 + 9;
        pppppplVar26[8] = (long *****)pppppplVar25;
      }
      else {
        pppppplVar23 = param_1[0x15];
        uVar19 = ((long)pppppplVar26 - (long)pppppplVar23 >> 3) * -0x71c71c71c71c71c7 + 1;
        if (0x38e38e38e38e38e < uVar19) {
          func_0x00010a18709c();
          goto LAB_10a16ebec;
        }
        lVar21 = (long)param_1[0x17] - (long)pppppplVar23 >> 3;
        uVar13 = lVar21 * 0x1c71c71c71c71c72;
        if (uVar13 < uVar19 || uVar13 - uVar19 == 0) {
          uVar13 = uVar19;
        }
        if (0x1c71c71c71c71c6 < (ulong)(lVar21 * -0x71c71c71c71c71c7)) {
          uVar13 = 0x38e38e38e38e38e;
        }
        if (0x38e38e38e38e38e < uVar13) {
          func_0x000109ffded8();
          goto LAB_10a16ebec;
        }
        pppppplVar8 = (long ******)(uVar13 * 0x48);
        __Znwm();
        plVar1 = (long *)((long)pppppplVar8 + ((long)pppppplVar26 - (long)pppppplVar23));
        *plVar1 = (long)pppppplVar27;
        plVar1[1] = (long)pppppplStack_190;
        plVar1[2] = (long)pppppplStack_178;
        plVar1[3] = (long)pppppplStack_180;
        plVar1[4] = (long)pppppplStack_188;
        plVar1[5] = (long)pppppplStack_198;
        plVar1[6] = (long)pppppplStack_1a0;
        plVar1[7] = (long)pppppplStack_1a8;
        plVar1[8] = (long)pppppplVar25;
        pppppplVar27 = (long ******)(plVar1 + 9);
        _memcpy();
        param_1[0x15] = pppppplVar8;
        param_1[0x16] = pppppplVar27;
        param_1[0x17] = pppppplVar8 + uVar13 * 9;
        if (pppppplVar23 != (long ******)0x0) {
          __ZdlPv(pppppplVar23);
        }
        iVar20 = (int)pppppplStack_150;
      }
      param_1[0x16] = pppppplVar27;
      iVar14 = iVar14 + 1;
    }
    if (-1 < iVar20) {
      if (pppppplVar6 == (long ******)0x0 && pppppplVar24 == (long ******)0x0) break;
      goto LAB_10a16c098;
    }
    __ZdlPv(pppppppuStack_90);
  } while (pppppplVar6 != (long ******)0x0 || pppppplVar24 != (long ******)0x0);
  iVar14 = 0;
  do {
    while( true ) {
      func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110c51128);
      if ((long)pppppplStack_100 < 0) {
        func_0x000107c3192c(&ppppppplStack_f0,ppppppplStack_110,pppppplStack_108);
      }
      else {
        pppppplStack_e8 = pppppplStack_108;
        ppppppplStack_f0 = ppppppplStack_110;
        pppppplStack_e0 = pppppplStack_100;
      }
      ppppppplVar11 = (long *******)&ppppppplStack_f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppppplVar11,&DAT_10f62a9e8,1);
      uStack_c8 = ppppppplVar11[1];
      _auStack_d0 = (long *******)*ppppppplVar11;
      pppppplStack_c0 = ppppppplVar11[2];
      ppppppplVar11[1] = (long ******)0x0;
      ppppppplVar11[2] = (long ******)0x0;
      *ppppppplVar11 = (long ******)0x0;
      __ZNSt3__19to_stringEi(&ppppppplStack_130,iVar14);
      pppppplVar6 = pppppplStack_128;
      ppppppplVar11 = ppppppplStack_130;
      if (-1 < (long)pppppplStack_120) {
        pppppplVar6 = (long ******)((ulong)pppppplStack_120 >> 0x38);
        ppppppplVar11 = (long *******)&ppppppplStack_130;
      }
      puVar7 = (undefined8 *)auStack_d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar7,ppppppplVar11,pppppplVar6);
      auStack_a8 = (undefined1  [8])puVar7[1];
      _auStack_b0 = (long *******)*puVar7;
      uStack_a0 = (long ******)puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      puVar7 = (undefined8 *)auStack_b0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar7,&UNK_10f63ff44,2);
      uStack_88 = puVar7[1];
      pppppppuStack_90 = (undefined8 *******)*puVar7;
      uStack_80 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      if ((long)pppppplStack_120 < 0) {
        __ZdlPv(ppppppplStack_130);
      }
      if ((long)pppppplStack_e0 < 0) {
        __ZdlPv(ppppppplStack_f0);
      }
      if ((long)pppppplStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
      }
      uVar13 = uStack_80;
      pppppplVar6 = param_1[3];
      uVar19 = uStack_88;
      if (-1 < (long)uStack_80) {
        uVar19 = uStack_80 >> 0x38;
      }
      FUN_10a003c90(auStack_b0,uVar19 + 9,auStack_d0);
      if (uVar19 != 0) {
        pppppppuVar3 = pppppppuStack_90;
        if (-1 < (long)uVar13) {
          pppppppuVar3 = &pppppppuStack_90;
        }
        _memmove(auStack_b0,pppppppuVar3,uVar19);
      }
      *(long *******)(auStack_b0 + uVar19) = pppppplStack_158;
      *(undefined2 *)(auStack_a8 + uVar19) = 0x6e;
      pppppplStack_100 = uStack_a0;
      pppppplStack_108 = (long ******)auStack_a8;
      ppppppplStack_110 = _auStack_b0;
      auStack_a8 = (undefined1  [8])0x0;
      uStack_a0 = (long ******)0x0;
      _auStack_b0 = (long *******)0x0;
      uStack_f8 = 0;
      func_0x000107c2b080(&ppppppplStack_110);
      FUN_10a1605fc(pppppplVar6);
      pppppplVar6 = pppppplVar6 + 0xb;
      FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
      pppppplVar24 = pppppplVar6 + 6;
      if (pppppplVar6 == (long ******)0x0) {
        pppppplVar24 = (long ******)0x0;
      }
      if ((long)pppppplStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
      }
      pppppplVar26 = param_1[3];
      FUN_10a003c90(auStack_b0,uVar19 + 5,auStack_d0);
      pppppplStack_150 = pppppplVar24;
      if (uVar19 != 0) {
        pppppppuVar3 = pppppppuStack_90;
        if (-1 < (long)uVar13) {
          pppppppuVar3 = &pppppppuStack_90;
        }
        _memmove(auStack_b0,pppppppuVar3,uVar19);
      }
      *(undefined4 *)(auStack_b0 + uVar19) = 0x6f6c6f63;
      *(undefined2 *)(auStack_b0 + uVar19 + 4) = 0x72;
      pppppplStack_100 = uStack_a0;
      pppppplStack_108 = (long ******)auStack_a8;
      ppppppplStack_110 = _auStack_b0;
      auStack_a8 = (undefined1  [8])0x0;
      uStack_a0 = (long ******)0x0;
      _auStack_b0 = (long *******)0x0;
      uStack_f8 = 0;
      func_0x000107c2b080(&ppppppplStack_110);
      FUN_10a1605fc(pppppplVar26);
      pppppplVar26 = pppppplVar26 + 0xb;
      FUN_10a194fac(pppppplVar26,&ppppppplStack_110);
      pppppplVar24 = pppppplVar26 + 6;
      if (pppppplVar26 == (long ******)0x0) {
        pppppplVar24 = (long ******)0x0;
      }
      if ((long)pppppplStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
      }
      pppppplVar27 = param_1[3];
      FUN_10a003c90(auStack_b0,uVar19 + 0x14,auStack_d0);
      if (uVar19 != 0) {
        pppppppuVar3 = pppppppuStack_90;
        if (-1 < (long)uVar13) {
          pppppppuVar3 = &pppppppuStack_90;
        }
        _memmove(auStack_b0,pppppppuVar3,uVar19);
      }
      *(undefined8 *)(auStack_a8 + uVar19) = uStack_168;
      *(long *******)(auStack_b0 + uVar19) = pppppplStack_170;
      *(undefined4 *)(auStack_98 + (uVar19 - 8)) = 0x7865646e;
      pppppplStack_100 = uStack_a0;
      auStack_98[uVar19 - 4] = 0;
      pppppplStack_108 = (long ******)auStack_a8;
      ppppppplStack_110 = _auStack_b0;
      _auStack_b0 = (long *******)0x0;
      auStack_a8 = (undefined1  [8])0x0;
      uStack_a0 = (long ******)0x0;
      uStack_f8 = 0;
      func_0x000107c2b080(&ppppppplStack_110);
      FUN_10a1605fc(pppppplVar27);
      pppppplVar27 = pppppplVar27 + 0xb;
      FUN_10a194fac(pppppplVar27,&ppppppplStack_110);
      pppppplVar25 = (long ******)0x0;
      if (pppppplVar27 != (long ******)0x0) {
        pppppplVar25 = pppppplVar27 + 6;
      }
      if ((long)pppppplStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
      }
      if (pppppplVar26 != (long ******)0x0 || pppppplVar6 != (long ******)0x0) break;
      if (-1 < (long)uVar13) goto LAB_10a16cfb8;
LAB_10a16d058:
      __ZdlPv(pppppppuStack_90);
      if (pppppplVar26 == (long ******)0x0 && pppppplVar6 == (long ******)0x0) goto LAB_10a16d064;
    }
    pppppplVar27 = param_1[0x19];
    if (pppppplVar27 < param_1[0x1a]) {
      *pppppplVar27 = (long *****)pppppplStack_150;
      pppppplVar27[1] = (long *****)pppppplVar24;
      pppppplVar24 = pppppplVar27 + 4;
      pppppplVar27[2] = (long *****)0x0;
      pppppplVar27[3] = (long *****)pppppplVar25;
    }
    else {
      pppppplVar23 = param_1[0x18];
      lVar21 = (long)pppppplVar27 - (long)pppppplVar23;
      uVar19 = (lVar21 >> 5) + 1;
      if (uVar19 >> 0x3b != 0) {
        func_0x00010a1870b0();
        goto LAB_10a16ebec;
      }
      uVar16 = (long)param_1[0x1a] - (long)pppppplVar23;
      uVar18 = (long)uVar16 >> 4;
      if (uVar18 <= uVar19) {
        uVar18 = uVar19;
      }
      if (0x7fffffffffffffdf < uVar16) {
        uVar18 = 0x7ffffffffffffff;
      }
      if (uVar18 >> 0x3b != 0) {
        func_0x000109ffded8();
        goto LAB_10a16ebec;
      }
      lVar17 = uVar18 << 5;
      __Znwm();
      plVar1 = (long *)(lVar17 + lVar21);
      *plVar1 = (long)pppppplStack_150;
      plVar1[1] = (long)pppppplVar24;
      plVar1[2] = 0;
      plVar1[3] = (long)pppppplVar25;
      pppppplVar24 = (long ******)(plVar1 + 4);
      _memcpy(plVar1 + (lVar21 >> 5) * -4,pppppplVar23,lVar21);
      param_1[0x18] = (long ******)(plVar1 + (lVar21 >> 5) * -4);
      param_1[0x19] = pppppplVar24;
      param_1[0x1a] = (long ******)(lVar17 + uVar18 * 0x20);
      if (pppppplVar23 != (long ******)0x0) {
        __ZdlPv(pppppplVar23);
      }
    }
    param_1[0x19] = pppppplVar24;
    iVar14 = iVar14 + 1;
    if ((long)uVar13 < 0) goto LAB_10a16d058;
LAB_10a16cfb8:
  } while (pppppplVar26 != (long ******)0x0 || pppppplVar6 != (long ******)0x0);
LAB_10a16d064:
  pppppplStack_150 = (long ******)((ulong)pppppplStack_150 & 0xffffffff00000000);
  do {
    while( true ) {
      func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110c51178);
      if ((long)pppppplStack_100 < 0) {
        func_0x000107c3192c(&ppppppplStack_f0,ppppppplStack_110,pppppplStack_108);
      }
      else {
        pppppplStack_e8 = pppppplStack_108;
        ppppppplStack_f0 = ppppppplStack_110;
        pppppplStack_e0 = pppppplStack_100;
      }
      ppppppplVar11 = (long *******)&ppppppplStack_f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppppplVar11,&DAT_10f62a9e8,1);
      uStack_c8 = ppppppplVar11[1];
      _auStack_d0 = (long *******)*ppppppplVar11;
      pppppplStack_c0 = ppppppplVar11[2];
      ppppppplVar11[1] = (long ******)0x0;
      ppppppplVar11[2] = (long ******)0x0;
      *ppppppplVar11 = (long ******)0x0;
      __ZNSt3__19to_stringEi(&ppppppplStack_130,(ulong)pppppplStack_150 & 0xffffffff);
      pppppplVar6 = pppppplStack_128;
      ppppppplVar11 = ppppppplStack_130;
      if (-1 < (long)pppppplStack_120) {
        pppppplVar6 = (long ******)((ulong)pppppplStack_120 >> 0x38);
        ppppppplVar11 = (long *******)&ppppppplStack_130;
      }
      puVar7 = (undefined8 *)auStack_d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar7,ppppppplVar11,pppppplVar6);
      auStack_a8 = (undefined1  [8])puVar7[1];
      _auStack_b0 = (long *******)*puVar7;
      uStack_a0 = (long ******)puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      puVar7 = (undefined8 *)auStack_b0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar7,&UNK_10f63ff44,2);
      uStack_88 = puVar7[1];
      pppppppuStack_90 = (undefined8 *******)*puVar7;
      uStack_80 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      if ((long)pppppplStack_120 < 0) {
        __ZdlPv(ppppppplStack_130);
      }
      if ((long)pppppplStack_e0 < 0) {
        __ZdlPv(ppppppplStack_f0);
      }
      if ((long)pppppplStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
      }
      uVar13 = uStack_80;
      pppppplVar6 = param_1[3];
      uVar19 = uStack_88;
      if (-1 < (long)uStack_80) {
        uVar19 = uStack_80 >> 0x38;
      }
      FUN_10a003c90(auStack_b0,uVar19 + 5,auStack_d0);
      if (uVar19 != 0) {
        pppppppuVar3 = pppppppuStack_90;
        if (-1 < (long)uVar13) {
          pppppppuVar3 = &pppppppuStack_90;
        }
        _memmove(auStack_b0,pppppppuVar3,uVar19);
      }
      *(undefined4 *)(auStack_b0 + uVar19) = 0x6f6c6f63;
      *(undefined2 *)(auStack_b0 + uVar19 + 4) = 0x72;
      pppppplStack_100 = uStack_a0;
      pppppplStack_108 = (long ******)auStack_a8;
      ppppppplStack_110 = _auStack_b0;
      auStack_a8 = (undefined1  [8])0x0;
      uStack_a0 = (long ******)0x0;
      _auStack_b0 = (long *******)0x0;
      uStack_f8 = 0;
      func_0x000107c2b080(&ppppppplStack_110);
      FUN_10a1605fc(pppppplVar6);
      pppppplVar6 = pppppplVar6 + 0xb;
      FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
      if ((long)pppppplStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
      }
      pppppplVar24 = param_1[3];
      FUN_10a003c90(auStack_b0,uVar19 + 0x12,auStack_d0);
      if (uVar19 != 0) {
        pppppppuVar3 = pppppppuStack_90;
        if (-1 < (long)uVar13) {
          pppppppuVar3 = &pppppppuStack_90;
        }
        _memmove(auStack_b0,pppppppuVar3,uVar19);
      }
      *(undefined8 *)(auStack_a8 + uVar19) = 0x696e6f6d7261486c;
      *(undefined8 *)(auStack_b0 + uVar19) = 0x6163697265687073;
      *(undefined2 *)(auStack_98 + (uVar19 - 8)) = 0x7363;
      pppppplStack_100 = uStack_a0;
      auStack_98[uVar19 - 6] = 0;
      pppppplStack_108 = (long ******)auStack_a8;
      ppppppplStack_110 = _auStack_b0;
      _auStack_b0 = (long *******)0x0;
      auStack_a8 = (undefined1  [8])0x0;
      uStack_a0 = (long ******)0x0;
      uStack_f8 = 0;
      func_0x000107c2b080(&ppppppplStack_110);
      FUN_10a1605fc(pppppplVar24);
      pppppplVar24 = pppppplVar24 + 0xb;
      FUN_10a194fac(pppppplVar24,&ppppppplStack_110);
      pppppplVar26 = (long ******)0x0;
      if (pppppplVar24 != (long ******)0x0) {
        pppppplVar26 = pppppplVar24 + 6;
      }
      if ((long)pppppplStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
      }
      pppppplVar24 = param_1[3];
      FUN_10a003c90(auStack_b0,uVar19 + 8,auStack_d0);
      if (uVar19 != 0) {
        pppppppuVar3 = pppppppuStack_90;
        if (-1 < (long)uVar13) {
          pppppppuVar3 = &pppppppuStack_90;
        }
        _memmove(auStack_b0,pppppppuVar3,uVar19);
      }
      *(undefined8 *)(auStack_b0 + uVar19) = 0x657275736f707865;
      auStack_a8[uVar19] = 0;
      pppppplStack_100 = uStack_a0;
      pppppplStack_108 = (long ******)auStack_a8;
      ppppppplStack_110 = _auStack_b0;
      auStack_a8 = (undefined1  [8])0x0;
      uStack_a0 = (long ******)0x0;
      _auStack_b0 = (long *******)0x0;
      uStack_f8 = 0;
      func_0x000107c2b080(&ppppppplStack_110);
      FUN_10a1605fc(pppppplVar24);
      pppppplVar24 = pppppplVar24 + 0xb;
      FUN_10a194fac(pppppplVar24,&ppppppplStack_110);
      pppppplStack_170 = (long ******)0x0;
      if (pppppplVar24 != (long ******)0x0) {
        pppppplStack_170 = pppppplVar24 + 6;
      }
      if ((long)pppppplStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
      }
      pppppplVar24 = param_1[3];
      FUN_10a003c90(auStack_b0,uVar19 + 8,auStack_d0);
      if (uVar19 != 0) {
        pppppppuVar3 = pppppppuStack_90;
        if (-1 < (long)uVar13) {
          pppppppuVar3 = &pppppppuStack_90;
        }
        _memmove(auStack_b0,pppppppuVar3,uVar19);
      }
      *(undefined8 *)(auStack_b0 + uVar19) = 0x6e6f697461746f72;
      auStack_a8[uVar19] = 0;
      pppppplStack_100 = uStack_a0;
      pppppplStack_108 = (long ******)auStack_a8;
      ppppppplStack_110 = _auStack_b0;
      auStack_a8 = (undefined1  [8])0x0;
      uStack_a0 = (long ******)0x0;
      _auStack_b0 = (long *******)0x0;
      uStack_f8 = 0;
      func_0x000107c2b080(&ppppppplStack_110);
      FUN_10a1605fc(pppppplVar24);
      pppppplVar24 = pppppplVar24 + 0xb;
      FUN_10a194fac(pppppplVar24,&ppppppplStack_110);
      pppppplStack_178 = (long ******)0x0;
      if (pppppplVar24 != (long ******)0x0) {
        pppppplStack_178 = pppppplVar24 + 6;
      }
      if ((long)pppppplStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
      }
      pppppplVar24 = param_1[3];
      FUN_10a003c90(auStack_b0,uVar19 + 9,auStack_d0);
      if (uVar19 != 0) {
        pppppppuVar3 = pppppppuStack_90;
        if (-1 < (long)uVar13) {
          pppppppuVar3 = &pppppppuStack_90;
        }
        _memmove(auStack_b0,pppppppuVar3,uVar19);
      }
      *(undefined8 *)(auStack_b0 + uVar19) = 0x7469736e65746e69;
      *(undefined2 *)(auStack_a8 + uVar19) = 0x79;
      pppppplStack_100 = uStack_a0;
      pppppplStack_108 = (long ******)auStack_a8;
      ppppppplStack_110 = _auStack_b0;
      auStack_a8 = (undefined1  [8])0x0;
      uStack_a0 = (long ******)0x0;
      _auStack_b0 = (long *******)0x0;
      uStack_f8 = 0;
      func_0x000107c2b080(&ppppppplStack_110);
      FUN_10a1605fc(pppppplVar24);
      pppppplVar24 = pppppplVar24 + 0xb;
      FUN_10a194fac(pppppplVar24,&ppppppplStack_110);
      pppppplStack_180 = (long ******)0x0;
      if (pppppplVar24 != (long ******)0x0) {
        pppppplStack_180 = pppppplVar24 + 6;
      }
      if ((long)pppppplStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
      }
      pppppplVar24 = param_1[3];
      FUN_10a003c90(auStack_b0,uVar19 + 6,auStack_d0);
      if (uVar19 != 0) {
        pppppppuVar3 = pppppppuStack_90;
        if (-1 < (long)uVar13) {
          pppppppuVar3 = &pppppppuStack_90;
        }
        _memmove(auStack_b0,pppppppuVar3,uVar19);
      }
      *(undefined2 *)(auStack_b0 + uVar19 + 4) = 0x7468;
      *(undefined4 *)(auStack_b0 + uVar19) = 0x67696577;
      auStack_b0[uVar19 + 6] = 0;
      pppppplStack_100 = uStack_a0;
      pppppplStack_108 = (long ******)auStack_a8;
      ppppppplStack_110 = _auStack_b0;
      auStack_a8 = (undefined1  [8])0x0;
      uStack_a0 = (long ******)0x0;
      _auStack_b0 = (long *******)0x0;
      uStack_f8 = 0;
      func_0x000107c2b080(&ppppppplStack_110);
      FUN_10a1605fc(pppppplVar24);
      pppppplVar24 = pppppplVar24 + 0xb;
      FUN_10a194fac(pppppplVar24,&ppppppplStack_110);
      pppppplVar27 = (long ******)0x0;
      if (pppppplVar24 != (long ******)0x0) {
        pppppplVar27 = pppppplVar24 + 6;
      }
      if ((long)pppppplStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
      }
      FUN_10a003c90(auStack_b0,uVar19 + 0xd,auStack_d0);
      pppppplStack_190 = pppppplVar27;
      pppppplStack_188 = pppppplVar26;
      pppppplStack_158 = pppppplVar6;
      if (uVar19 != 0) {
        pppppppuVar3 = pppppppuStack_90;
        if (-1 < (long)uVar13) {
          pppppppuVar3 = &pppppppuStack_90;
        }
        _memmove(auStack_b0,pppppppuVar3,uVar19);
      }
      *(undefined8 *)(auStack_b0 + uVar19) = 0x4565737566666964;
      *(undefined8 *)(auStack_b0 + uVar19 + 5) = 0x70614d766e456573;
      auStack_a8[uVar19 + 5] = 0;
      pppppplStack_100 = uStack_a0;
      pppppplStack_108 = (long ******)auStack_a8;
      ppppppplStack_110 = _auStack_b0;
      auStack_a8 = (undefined1  [8])0x0;
      uStack_a0 = (long ******)0x0;
      _auStack_b0 = (long *******)0x0;
      uStack_f8 = 0;
      func_0x000107c2b080(&ppppppplStack_110);
      ppppppplVar11 = param_1;
      FUN_10a16f110(param_1,&ppppppplStack_110);
      if ((long)pppppplStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
      }
      FUN_10a003c90(auStack_b0,uVar19 + 0xe,auStack_d0);
      if (uVar19 != 0) {
        pppppppuVar3 = pppppppuStack_90;
        if (-1 < (long)uVar13) {
          pppppppuVar3 = &pppppppuStack_90;
        }
        _memmove(auStack_b0,pppppppuVar3,uVar19);
      }
      *(undefined8 *)(auStack_b0 + uVar19) = 0x72616c7563657073;
      *(undefined8 *)(auStack_b0 + uVar19 + 6) = 0x70614d766e457261;
      auStack_a8[uVar19 + 6] = 0;
      pppppplStack_100 = uStack_a0;
      pppppplStack_108 = (long ******)auStack_a8;
      ppppppplStack_110 = _auStack_b0;
      auStack_a8 = (undefined1  [8])0x0;
      uStack_a0 = (long ******)0x0;
      _auStack_b0 = (long *******)0x0;
      uStack_f8 = 0;
      func_0x000107c2b080(&ppppppplStack_110);
      ppppppplVar9 = param_1;
      FUN_10a16f110(param_1,&ppppppplStack_110);
      pppppplVar6 = pppppplStack_158;
      ppppppplVar10 = ppppppplVar9;
      if ((long)pppppplStack_100 < 0) {
        ppppppplVar10 = ppppppplStack_110;
        __ZdlPv();
      }
      iVar14 = (int)ppppppplVar10;
      FUN_10a08fd8c();
      if ((iVar14 != 0) &&
         ((ppppppplVar11 == (long *******)0x0 || (ppppppplVar9 == (long *******)0x0)))) break;
      if (pppppplVar6 != (long ******)0x0) goto LAB_10a16d7a4;
LAB_10a16dacc:
      if (-1 < (long)uVar13) goto LAB_10a16dad0;
LAB_10a16d8d8:
      __ZdlPv(pppppppuStack_90);
      if (pppppplVar6 == (long ******)0x0) goto LAB_10a16dbac;
    }
    func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110c51178);
    if ((long)pppppplStack_100 < 0) {
      func_0x000107c3192c(&ppppppplStack_130,ppppppplStack_110,pppppplStack_108);
    }
    else {
      pppppplStack_128 = pppppplStack_108;
      ppppppplStack_130 = ppppppplStack_110;
      pppppplStack_120 = pppppplStack_100;
    }
    ppppppplVar10 = (long *******)&ppppppplStack_130;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppppplVar10,"_",1);
    pppppplStack_e8 = ppppppplVar10[1];
    ppppppplStack_f0 = (long *******)*ppppppplVar10;
    pppppplStack_e0 = ppppppplVar10[2];
    ppppppplVar10[1] = (long ******)0x0;
    ppppppplVar10[2] = (long ******)0x0;
    *ppppppplVar10 = (long ******)0x0;
    __ZNSt3__19to_stringEi(&pppppppuStack_148,(ulong)pppppplStack_150 & 0xffffffff);
    uVar19 = uStack_140;
    pppppppuVar3 = pppppppuStack_148;
    if (-1 < (char)bStack_131) {
      uVar19 = (ulong)bStack_131;
      pppppppuVar3 = &pppppppuStack_148;
    }
    ppppppplVar10 = (long *******)&ppppppplStack_f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppppplVar10,pppppppuVar3,uVar19);
    uStack_c8 = ppppppplVar10[1];
    _auStack_d0 = (long *******)*ppppppplVar10;
    pppppplStack_c0 = ppppppplVar10[2];
    ppppppplVar10[1] = (long ******)0x0;
    ppppppplVar10[2] = (long ******)0x0;
    *ppppppplVar10 = (long ******)0x0;
    puVar7 = (undefined8 *)auStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,"_",1);
    auStack_a8 = (undefined1  [8])puVar7[1];
    _auStack_b0 = (long *******)*puVar7;
    uStack_a0 = (long ******)puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    if ((char)bStack_131 < '\0') {
      __ZdlPv(pppppppuStack_148);
    }
    if ((long)pppppplStack_e0 < 0) {
      __ZdlPv(ppppppplStack_f0);
    }
    if ((long)pppppplStack_120 < 0) {
      __ZdlPv(ppppppplStack_130);
    }
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
    pppppplVar24 = (long ******)((ulong)uStack_a0 >> 0x38);
    if (ppppppplVar11 == (long *******)0x0) {
      auVar2 = auStack_a8;
      if (-1 < (long)uStack_a0) {
        auVar2 = (undefined1  [8])pppppplVar24;
      }
      pppppplStack_198 = pppppplVar24;
      FUN_10a003c90(auStack_d0,(long)auVar2 + 0xd,&ppppppplStack_f0);
      if (auVar2 != (undefined1  [8])0x0) {
        ppppppplVar11 = _auStack_b0;
        if (-1 < (char)pppppplStack_198) {
          ppppppplVar11 = (long *******)auStack_b0;
        }
        _memmove(auStack_d0,ppppppplVar11,auVar2);
      }
      *(undefined8 *)(auStack_d0 + (long)auVar2) = 0x4565737566666964;
      *(undefined8 *)(auStack_d0 + (long)auVar2 + 5) = 0x70614d766e456573;
      *(undefined1 *)((long)&uStack_c8 + (long)auVar2 + 5U) = 0;
      pppppplStack_100 = pppppplStack_c0;
      pppppplStack_108 = uStack_c8;
      ppppppplStack_110 = _auStack_d0;
      uStack_c8 = (long ******)0x0;
      pppppplStack_c0 = (long ******)0x0;
      _auStack_d0 = (long *******)0x0;
      uStack_f8 = 0;
      func_0x000107c2b080(&ppppppplStack_110);
      ppppppplVar11 = param_1;
      FUN_10a16f110(param_1,&ppppppplStack_110);
      pppppplVar24 = pppppplStack_198;
      if ((long)pppppplStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
        pppppplVar24 = pppppplStack_198;
      }
    }
    uVar15 = (uint)pppppplVar24;
    if (ppppppplVar9 == (long *******)0x0) {
      auVar2 = auStack_a8;
      if (-1 < (char)pppppplVar24) {
        auVar2 = (undefined1  [8])pppppplVar24;
      }
      pppppplStack_198 = pppppplVar24;
      FUN_10a003c90(auStack_d0,(long)auVar2 + 0xe,&ppppppplStack_f0);
      if (auVar2 != (undefined1  [8])0x0) {
        ppppppplVar9 = _auStack_b0;
        if (-1 < (char)pppppplStack_198) {
          ppppppplVar9 = (long *******)auStack_b0;
        }
        _memmove(auStack_d0,ppppppplVar9,auVar2);
      }
      *(undefined8 *)(auStack_d0 + (long)auVar2) = 0x72616c7563657073;
      *(undefined8 *)(auStack_d0 + (long)auVar2 + 6) = 0x70614d766e457261;
      *(undefined1 *)((long)&uStack_c8 + (long)auVar2 + 6U) = 0;
      pppppplStack_100 = pppppplStack_c0;
      pppppplStack_108 = uStack_c8;
      ppppppplStack_110 = _auStack_d0;
      uStack_c8 = (long ******)0x0;
      pppppplStack_c0 = (long ******)0x0;
      _auStack_d0 = (long *******)0x0;
      uStack_f8 = 0;
      func_0x000107c2b080(&ppppppplStack_110);
      ppppppplVar9 = param_1;
      FUN_10a16f110(param_1,&ppppppplStack_110);
      if ((long)pppppplStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
      }
      uVar15 = (uint)pppppplStack_198;
    }
    if ((uVar15 >> 7 & 1) != 0) {
      __ZdlPv(_auStack_b0);
    }
    if (pppppplVar6 == (long ******)0x0) goto LAB_10a16dacc;
LAB_10a16d7a4:
    pppppplVar26 = pppppplStack_188;
    pppppplVar24 = param_1[0x1c];
    if (pppppplVar24 < param_1[0x1d]) {
      *pppppplVar24 = (long *****)(pppppplVar6 + 6);
      pppppplVar24[1] = (long *****)pppppplStack_188;
      pppppplVar24[2] = (long *****)ppppppplVar11;
      pppppplVar24[3] = (long *****)ppppppplVar9;
      pppppplVar24[4] = (long *****)pppppplStack_170;
      pppppplVar24[5] = (long *****)pppppplStack_178;
      pppppplVar26 = pppppplVar24 + 8;
      pppppplVar24[6] = (long *****)pppppplStack_180;
      pppppplVar24[7] = (long *****)pppppplStack_190;
    }
    else {
      pppppplVar27 = param_1[0x1b];
      lVar21 = (long)pppppplVar24 - (long)pppppplVar27;
      uVar19 = (lVar21 >> 6) + 1;
      if (uVar19 >> 0x3a != 0) {
        func_0x00010a1870c4();
        goto LAB_10a16ebec;
      }
      uVar16 = (long)param_1[0x1d] - (long)pppppplVar27;
      uVar18 = (long)uVar16 >> 5;
      if (uVar18 <= uVar19) {
        uVar18 = uVar19;
      }
      if (0x7fffffffffffffbf < uVar16) {
        uVar18 = 0x3ffffffffffffff;
      }
      if (uVar18 >> 0x3a != 0) {
        func_0x000109ffded8();
        goto LAB_10a16ebec;
      }
      lVar17 = uVar18 << 6;
      __Znwm();
      plVar1 = (long *)(lVar17 + lVar21);
      *plVar1 = (long)(pppppplVar6 + 6);
      plVar1[1] = (long)pppppplVar26;
      plVar1[2] = (long)ppppppplVar11;
      plVar1[3] = (long)ppppppplVar9;
      plVar1[4] = (long)pppppplStack_170;
      plVar1[5] = (long)pppppplStack_178;
      pppppplVar26 = (long ******)(plVar1 + 8);
      plVar1[6] = (long)pppppplStack_180;
      plVar1[7] = (long)pppppplStack_190;
      _memcpy(plVar1 + (lVar21 >> 6) * -8,pppppplVar27,lVar21);
      param_1[0x1b] = (long ******)(plVar1 + (lVar21 >> 6) * -8);
      param_1[0x1c] = pppppplVar26;
      param_1[0x1d] = (long ******)(lVar17 + uVar18 * 0x40);
      pppppplVar6 = pppppplStack_158;
      if (pppppplVar27 != (long ******)0x0) {
        __ZdlPv(pppppplVar27);
        pppppplVar6 = pppppplStack_158;
      }
    }
    param_1[0x1c] = pppppplVar26;
    if (ppppppplVar11 != (long *******)0x0 || ppppppplVar9 != (long *******)0x0) {
      *(undefined1 *)((long)param_1 + 0x23c) = 1;
    }
    pppppplStack_150 = (long ******)CONCAT44(pppppplStack_150._4_4_,(int)pppppplStack_150 + 1);
    if ((long)uVar13 < 0) goto LAB_10a16d8d8;
LAB_10a16dad0:
  } while (pppppplVar6 != (long ******)0x0);
LAB_10a16dbac:
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110c514c0);
  if ((long)pppppplStack_100 < 0) {
    func_0x000107c3192c(auStack_b0,ppppppplStack_110,pppppplStack_108);
  }
  else {
    auStack_a8 = (undefined1  [8])pppppplStack_108;
    _auStack_b0 = ppppppplStack_110;
    uStack_a0 = pppppplStack_100;
  }
  puVar7 = (undefined8 *)auStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&DAT_10f62a9de,1);
  uStack_88 = puVar7[1];
  pppppppuStack_90 = (undefined8 *******)*puVar7;
  uStack_80 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  iVar14 = 0;
  pppppplStack_158 = (long ******)CONCAT44(pppppplStack_158._4_4_,(int)(char)uStack_80._7_1_);
  uVar19 = uStack_88;
  if (-1 < (char)uStack_80._7_1_) {
    uVar19 = (ulong)uStack_80._7_1_;
  }
  while( true ) {
    FUN_10a003c90(auStack_d0,uVar19 + 3,&ppppppplStack_f0);
    if (uVar19 != 0) {
      pppppppuVar3 = pppppppuStack_90;
      if (-1 < (int)pppppplStack_158) {
        pppppppuVar3 = &pppppppuStack_90;
      }
      _memmove(auStack_d0,pppppppuVar3,uVar19);
    }
    *(undefined4 *)(auStack_d0 + uVar19) = 0x5b6773;
    __ZNSt3__19to_stringEi(&ppppppplStack_f0,iVar14);
    pppppplVar6 = pppppplStack_e8;
    ppppppplVar11 = ppppppplStack_f0;
    if (-1 < (long)pppppplStack_e0) {
      pppppplVar6 = (long ******)((ulong)pppppplStack_e0 >> 0x38);
      ppppppplVar11 = (long *******)&ppppppplStack_f0;
    }
    puVar7 = (undefined8 *)auStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,ppppppplVar11,pppppplVar6);
    pppppplStack_108 = (long ******)puVar7[1];
    ppppppplStack_110 = (long *******)*puVar7;
    pppppplStack_100 = (long ******)puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    ppppppplVar11 = (long *******)&ppppppplStack_110;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppppplVar11,&UNK_10f63ff44,2);
    auStack_a8 = (undefined1  [8])ppppppplVar11[1];
    _auStack_b0 = (long *******)*ppppppplVar11;
    uStack_a0 = ppppppplVar11[2];
    ppppppplVar11[1] = (long ******)0x0;
    ppppppplVar11[2] = (long ******)0x0;
    *ppppppplVar11 = (long ******)0x0;
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
    if ((long)pppppplStack_e0 < 0) {
      __ZdlPv(ppppppplStack_f0);
    }
    pppppplVar24 = uStack_a0;
    pppppplVar6 = param_1[3];
    auVar2 = auStack_a8;
    if (-1 < (long)uStack_a0) {
      auVar2 = (undefined1  [8])((ulong)uStack_a0 >> 0x38);
    }
    FUN_10a003c90(auStack_d0,(long)auVar2 + 5,&ppppppplStack_f0);
    if (auVar2 != (undefined1  [8])0x0) {
      ppppppplVar11 = _auStack_b0;
      if (-1 < (long)pppppplVar24) {
        ppppppplVar11 = (long *******)auStack_b0;
      }
      _memmove(auStack_d0,ppppppplVar11,auVar2);
    }
    *(undefined4 *)(auStack_d0 + (long)auVar2) = 0x6f6c6f63;
    *(undefined2 *)(auStack_d0 + (long)auVar2 + 4) = 0x72;
    pppppplStack_100 = pppppplStack_c0;
    pppppplStack_108 = uStack_c8;
    ppppppplStack_110 = _auStack_d0;
    uStack_c8 = (long ******)0x0;
    pppppplStack_c0 = (long ******)0x0;
    _auStack_d0 = (long *******)0x0;
    uStack_f8 = 0;
    func_0x000107c2b080(&ppppppplStack_110);
    FUN_10a1605fc(pppppplVar6);
    pppppplVar6 = pppppplVar6 + 0xb;
    FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
    pppppplVar26 = pppppplVar6 + 6;
    if (pppppplVar6 == (long ******)0x0) {
      pppppplVar26 = (long ******)0x0;
    }
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
    pppppplVar27 = param_1[3];
    FUN_10a003c90(auStack_d0,(long)auVar2 + 4,&ppppppplStack_f0);
    pppppplStack_150 = pppppplVar26;
    if (auVar2 != (undefined1  [8])0x0) {
      ppppppplVar11 = _auStack_b0;
      if (-1 < (long)pppppplVar24) {
        ppppppplVar11 = (long *******)auStack_b0;
      }
      _memmove(auStack_d0,ppppppplVar11,auVar2);
    }
    *(undefined4 *)(auStack_d0 + (long)auVar2) = 0x73697861;
    auStack_d0[(long)auVar2 + 4] = 0;
    pppppplStack_100 = pppppplStack_c0;
    pppppplStack_108 = uStack_c8;
    ppppppplStack_110 = _auStack_d0;
    uStack_c8 = (long ******)0x0;
    pppppplStack_c0 = (long ******)0x0;
    _auStack_d0 = (long *******)0x0;
    uStack_f8 = 0;
    func_0x000107c2b080(&ppppppplStack_110);
    FUN_10a1605fc(pppppplVar27);
    pppppplVar27 = pppppplVar27 + 0xb;
    FUN_10a194fac(pppppplVar27,&ppppppplStack_110);
    pppppplVar26 = pppppplVar27 + 6;
    if (pppppplVar27 == (long ******)0x0) {
      pppppplVar26 = (long ******)0x0;
    }
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
    pppppplVar25 = param_1[3];
    FUN_10a003c90(auStack_d0,(long)auVar2 + 9,&ppppppplStack_f0);
    if (auVar2 != (undefined1  [8])0x0) {
      ppppppplVar11 = _auStack_b0;
      if (-1 < (long)pppppplVar24) {
        ppppppplVar11 = (long *******)auStack_b0;
      }
      _memmove(auStack_d0,ppppppplVar11,auVar2);
    }
    *(undefined8 *)(auStack_d0 + (long)auVar2) = 0x73656e7072616873;
    *(undefined2 *)((long)&uStack_c8 + (long)auVar2) = 0x73;
    pppppplStack_100 = pppppplStack_c0;
    pppppplStack_108 = uStack_c8;
    ppppppplStack_110 = _auStack_d0;
    uStack_c8 = (long ******)0x0;
    pppppplStack_c0 = (long ******)0x0;
    _auStack_d0 = (long *******)0x0;
    uStack_f8 = 0;
    func_0x000107c2b080(&ppppppplStack_110);
    FUN_10a1605fc(pppppplVar25);
    pppppplVar25 = pppppplVar25 + 0xb;
    ppppppplVar11 = (long *******)&ppppppplStack_110;
    FUN_10a194fac();
    pppppplVar23 = pppppplVar25 + 6;
    if (pppppplVar25 == (long ******)0x0) {
      pppppplVar23 = (long ******)0x0;
    }
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
    if (((pppppplVar6 == (long ******)0x0) && (pppppplVar27 == (long ******)0x0)) &&
       (pppppplVar25 == (long ******)0x0)) break;
    pppppplVar6 = param_1[0x1f];
    if (pppppplVar6 < param_1[0x20]) {
      *pppppplVar6 = (long *****)pppppplStack_150;
      pppppplVar6[1] = (long *****)pppppplVar26;
      pppppplVar26 = pppppplVar6 + 3;
      pppppplVar6[2] = (long *****)pppppplVar23;
    }
    else {
      lVar21 = (long)pppppplVar6 - (long)param_1[0x1e];
      uVar13 = (lVar21 >> 3) * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar13) {
        func_0x00010a1870d8();
        goto LAB_10a16ebec;
      }
      lVar17 = (long)param_1[0x20] - (long)param_1[0x1e] >> 3;
      uVar18 = lVar17 * 0x5555555555555556;
      if (uVar18 < uVar13 || uVar18 - uVar13 == 0) {
        uVar18 = uVar13;
      }
      if (0x555555555555554 < (ulong)(lVar17 * -0x5555555555555555)) {
        uVar18 = 0xaaaaaaaaaaaaaaa;
      }
      FUN_10a1870ec();
      plVar1 = (long *)(uVar18 + lVar21);
      *plVar1 = (long)pppppplStack_150;
      plVar1[1] = (long)pppppplVar26;
      plVar1[2] = (long)pppppplVar23;
      pppppplVar26 = (long ******)(plVar1 + 3);
      pppppplVar27 = (long ******)((long)plVar1 - ((long)param_1[0x1f] - (long)param_1[0x1e]));
      _memcpy(pppppplVar27);
      pppppplVar6 = param_1[0x1e];
      param_1[0x1e] = pppppplVar27;
      param_1[0x1f] = pppppplVar26;
      param_1[0x20] = (long ******)(uVar18 + (long)ppppppplVar11 * 0x18);
      if (pppppplVar6 != (long ******)0x0) {
        __ZdlPv();
      }
    }
    param_1[0x1f] = pppppplVar26;
    if ((long)pppppplVar24 < 0) {
      __ZdlPv(_auStack_b0);
    }
    iVar14 = iVar14 + 1;
  }
  if ((long)pppppplVar24 < 0) {
    __ZdlPv(_auStack_b0);
  }
  pppppplVar6 = param_1[0x1e];
  pppppplVar24 = param_1[0x1f];
  if ((long)pppppplVar24 - (long)pppppplVar6 != 0x120) {
    if (pppppplVar6 == pppppplVar24) {
      uVar13 = 0;
      lVar21 = 0;
      pppppplVar26 = pppppplVar24;
    }
    else {
      lStack_1b0 = ((long)pppppplVar24 - (long)pppppplVar6 >> 3) * -0x5555555555555555;
      ppppppplVar11 = (long *******)0x2;
      func_0x00010ae06f08(1,2,&UNK_10f64000c,&UNK_10f640051,0x11e,&UNK_10f640095);
      pppppplVar6 = param_1[0x1e];
      lVar21 = (long)param_1[0x1f] - (long)pppppplVar6;
      uVar13 = (lVar21 >> 3) * -0x5555555555555555;
      pppppplVar24 = pppppplVar6;
      pppppplVar26 = param_1[0x1f];
    }
    uVar18 = ((long)pppppplVar26 - (long)pppppplVar24 >> 3) * -0x5555555555555555;
    if (0xb < uVar18) {
      uVar18 = 0xc;
    }
    uVar16 = uVar18 - uVar13;
    if (uVar18 < uVar13 || uVar16 == 0) {
      if (uVar18 < uVar13) {
        pppppplVar26 = pppppplVar6 + uVar18 * 3;
        goto LAB_10a16e26c;
      }
    }
    else if ((ulong)(((long)param_1[0x20] - (long)pppppplVar26 >> 3) * -0x5555555555555555) < uVar16
            ) {
      lVar17 = (long)param_1[0x20] - (long)pppppplVar6 >> 3;
      uVar13 = lVar17 * 0x5555555555555556;
      if (uVar13 < uVar18 || uVar13 - uVar18 == 0) {
        uVar13 = uVar18;
      }
      if (0x555555555555554 < (ulong)(lVar17 * -0x5555555555555555)) {
        uVar13 = 0xaaaaaaaaaaaaaaa;
      }
      FUN_10a1870ec();
      lVar21 = uVar13 + lVar21;
      lVar17 = uVar16 * 0x18 + -0x18;
      iVar14 = (int)lVar17;
      lVar17 = (lVar17 - ((ulong)(iVar14 + ((uint)(iVar14 * 0xaaab) >> 0x14) * -0x18) & 0xfff8)) +
               0x18;
      _bzero(lVar21,lVar17);
      pppppplVar24 = (long ******)(lVar21 - ((long)param_1[0x1f] - (long)param_1[0x1e]));
      _memcpy(pppppplVar24);
      pppppplVar6 = param_1[0x1e];
      param_1[0x1e] = pppppplVar24;
      param_1[0x1f] = (long ******)(lVar21 + lVar17);
      param_1[0x20] = (long ******)(uVar13 + (long)ppppppplVar11 * 0x18);
      if (pppppplVar6 != (long ******)0x0) {
        __ZdlPv();
      }
    }
    else {
      lVar21 = uVar16 * 0x18 + -0x18;
      uVar15 = (uint)lVar21;
      lVar21 = (lVar21 - ((ulong)(uVar15 + ((uVar15 & 0xfff8) / 0x18) * -0x18) & 0xfff8)) + 0x18;
      _bzero(pppppplVar26,lVar21);
      pppppplVar26 = (long ******)((long)pppppplVar26 + lVar21);
LAB_10a16e26c:
      param_1[0x1f] = pppppplVar26;
    }
  }
  pppppplVar6 = param_1[3];
  FUN_10a003c90(auStack_b0,uVar19 + 0xc,auStack_d0);
  if (uVar19 != 0) {
    pppppppuVar3 = pppppppuStack_90;
    if (-1 < (int)pppppplStack_158) {
      pppppppuVar3 = &pppppppuStack_90;
    }
    _memmove(auStack_b0,pppppppuVar3,uVar19);
  }
  *(undefined8 *)(auStack_b0 + uVar19) = 0x4c746e6569626d61;
  *(undefined4 *)(auStack_a8 + uVar19) = 0x74686769;
  auStack_a8[uVar19 + 4] = 0;
  pppppplStack_100 = uStack_a0;
  pppppplStack_108 = (long ******)auStack_a8;
  ppppppplStack_110 = _auStack_b0;
  _auStack_b0 = (long *******)0x0;
  auStack_a8 = (undefined1  [8])0x0;
  uStack_a0 = (long ******)0x0;
  uStack_f8 = 0;
  func_0x000107c2b080(&ppppppplStack_110);
  FUN_10a1605fc(pppppplVar6);
  pppppplVar6 = pppppplVar6 + 0xb;
  FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
  pppppplVar24 = (long ******)0x0;
  if (pppppplVar6 != (long ******)0x0) {
    pppppplVar24 = pppppplVar6 + 6;
  }
  param_1[0x21] = pppppplVar24;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  if ((int)pppppplStack_158 < 0) {
    __ZdlPv(pppppppuStack_90);
  }
  pppppplVar6 = param_1[3];
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110c51bc8);
  FUN_10a1605fc(pppppplVar6);
  pppppplVar6 = pppppplVar6 + 0xb;
  FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
  pppppplVar24 = (long ******)0x0;
  if (pppppplVar6 != (long ******)0x0) {
    pppppplVar24 = pppppplVar6 + 6;
  }
  param_1[0x38] = pppppplVar24;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  pppppplVar6 = param_1[3];
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110c523e8);
  FUN_10a1605fc(pppppplVar6);
  pppppplVar6 = pppppplVar6 + 0xb;
  FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
  pppppplVar24 = (long ******)0x0;
  if (pppppplVar6 != (long ******)0x0) {
    pppppplVar24 = pppppplVar6 + 6;
  }
  param_1[0x39] = pppppplVar24;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110c512b8);
  ppppppplVar11 = param_1;
  FUN_10a16f110(param_1,&ppppppplStack_110);
  param_1[0x29] = (long ******)ppppppplVar11;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110c512e0);
  ppppppplVar11 = param_1;
  FUN_10a16f110(param_1,&ppppppplStack_110);
  param_1[0x2a] = (long ******)ppppppplVar11;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110c51308);
  ppppppplVar11 = param_1;
  FUN_10a16f110(param_1,&ppppppplStack_110);
  param_1[0x2b] = (long ******)ppppppplVar11;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  pppppplVar6 = param_1[3];
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110c51330);
  FUN_10a1605fc(pppppplVar6);
  pppppplVar6 = pppppplVar6 + 0xb;
  FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
  pppppplVar24 = (long ******)0x0;
  if (pppppplVar6 != (long ******)0x0) {
    pppppplVar24 = pppppplVar6 + 6;
  }
  param_1[0x2c] = pppppplVar24;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  pppppplVar6 = param_1[3];
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110c51358);
  FUN_10a1605fc(pppppplVar6);
  pppppplVar6 = pppppplVar6 + 0xb;
  FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
  pppppplVar24 = (long ******)0x0;
  if (pppppplVar6 != (long ******)0x0) {
    pppppplVar24 = pppppplVar6 + 6;
  }
  param_1[0x2d] = pppppplVar24;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  pppppplVar6 = param_1[3];
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110c51380);
  FUN_10a1605fc(pppppplVar6);
  pppppplVar6 = pppppplVar6 + 0xb;
  FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
  pppppplVar24 = (long ******)0x0;
  if (pppppplVar6 != (long ******)0x0) {
    pppppplVar24 = pppppplVar6 + 6;
  }
  param_1[0x2e] = pppppplVar24;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  if ((((param_1[0x15] == param_1[0x16]) && (param_1[0x18] == param_1[0x19])) &&
      ((param_1[0x1b] == param_1[0x1c] &&
       ((param_1[0x29] == (long ******)0x0 && (param_1[0x2a] == (long ******)0x0)))))) &&
     (param_1[0x1e] == param_1[0x1f])) {
    bVar5 = param_1[0x21] != (long ******)0x0;
  }
  else {
    bVar5 = true;
  }
  *(bool *)(param_1 + 0x22) = bVar5;
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110bab0c0);
  ppppppplVar11 = param_1;
  FUN_10a16f110(param_1,&ppppppplStack_110);
  param_1[0x2f] = (long ******)ppppppplVar11;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110bab0a8);
  ppppppplVar11 = param_1;
  FUN_10a16f110(param_1,&ppppppplStack_110);
  param_1[0x30] = (long ******)ppppppplVar11;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110baa2b0);
  ppppppplVar11 = param_1;
  FUN_10a16f110(param_1,&ppppppplStack_110);
  param_1[0x31] = (long ******)ppppppplVar11;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  pppppplVar6 = param_1[3];
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110ba9920);
  FUN_10a1605fc(pppppplVar6);
  pppppplVar6 = pppppplVar6 + 0xb;
  FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
  pppppplVar24 = (long ******)0x0;
  if (pppppplVar6 != (long ******)0x0) {
    pppppplVar24 = pppppplVar6 + 6;
  }
  param_1[0x32] = pppppplVar24;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  pppppplVar6 = param_1[3];
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110ba9938);
  FUN_10a1605fc(pppppplVar6);
  pppppplVar6 = pppppplVar6 + 0xb;
  FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
  pppppplVar24 = (long ******)0x0;
  if (pppppplVar6 != (long ******)0x0) {
    pppppplVar24 = pppppplVar6 + 6;
  }
  param_1[0x33] = pppppplVar24;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  pppppplVar6 = param_1[3];
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110c52528);
  FUN_10a1605fc(pppppplVar6);
  pppppplVar6 = pppppplVar6 + 0xb;
  FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
  pppppplVar24 = (long ******)0x0;
  if (pppppplVar6 != (long ******)0x0) {
    pppppplVar24 = pppppplVar6 + 6;
  }
  param_1[0x34] = pppppplVar24;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  pppppplVar6 = param_1[3];
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110c52550);
  FUN_10a1605fc(pppppplVar6);
  pppppplVar6 = pppppplVar6 + 0xb;
  FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
  pppppplVar24 = (long ******)0x0;
  if (pppppplVar6 != (long ******)0x0) {
    pppppplVar24 = pppppplVar6 + 6;
  }
  param_1[0x35] = pppppplVar24;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  pppppplVar6 = param_1[3];
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110c52578);
  FUN_10a1605fc(pppppplVar6);
  pppppplVar6 = pppppplVar6 + 0xb;
  FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
  pppppplVar24 = (long ******)0x0;
  if (pppppplVar6 != (long ******)0x0) {
    pppppplVar24 = pppppplVar6 + 6;
  }
  param_1[0x36] = pppppplVar24;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  pppppplVar6 = param_1[3];
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110c52618);
  FUN_10a1605fc(pppppplVar6);
  pppppplVar6 = pppppplVar6 + 0xb;
  FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
  pppppplVar24 = (long ******)0x0;
  if (pppppplVar6 != (long ******)0x0) {
    pppppplVar24 = pppppplVar6 + 6;
  }
  param_1[0x37] = pppppplVar24;
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (param_1[0x32] == (long ******)0x0) {
    pppppplVar6 = param_1[3];
    func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110ba9950);
    FUN_10a1605fc(pppppplVar6);
    pppppplVar6 = pppppplVar6 + 0xb;
    FUN_10a194fac(pppppplVar6,&ppppppplStack_110);
    pppppplVar24 = (long ******)0x0;
    if (pppppplVar6 != (long ******)0x0) {
      pppppplVar24 = pppppplVar6 + 6;
    }
    param_1[0x32] = pppppplVar24;
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
      pppppplVar6 = param_1[0x32];
    }
    if (pppppplVar6 != (long ******)0x0) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      ppuVar12 = &PTR_PTR_113300418;
      FUN_10ae079a0(0,&PTR_PTR_113300418);
      FUN_10ae07cd4(ppuVar12,&PTR_PTR_113300418);
    }
  }
  pppppplVar6 = param_1[3];
  FUN_10a1605fc(pppppplVar6);
  for (ppppplVar22 = pppppplVar6[0xd]; ppppplVar22 != (long *****)0x0;
      ppppplVar22 = (long *****)*ppppplVar22) {
    pppppplStack_108 = (long ******)(long)*(char *)((long)ppppplVar22 + 0x27);
    if ((long)pppppplStack_108 < 0) {
      ppppppplVar11 = (long *******)ppppplVar22[2];
      pppppplStack_108 = (long ******)ppppplVar22[3];
    }
    else {
      ppppppplVar11 = (long *******)(ppppplVar22 + 2);
    }
    ppppppplStack_110 = ppppppplVar11;
    if ((long ******)0x4 < pppppplStack_108) {
      uVar19 = (long)pppppplStack_108 - 5;
      ppppppplVar9 = (long *******)&ppppppplStack_110;
      FUN_10a0423ac(ppppppplVar9,uVar19,5,&UNK_10f64090a,5);
      if ((int)ppppppplVar9 == 0) {
        if ((long)uVar19 < 0) {
LAB_10a16ebec:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a16ebf0);
          (*pcVar4)();
        }
        uVar13 = uVar19;
        FUN_10a0db864(&ppppppplStack_110,ppppppplVar11);
        uVar15 = (uint)&ppppppplStack_110;
        ppppppplVar11 = param_1;
        FUN_10a16f110();
        if ((long)pppppplStack_100 < 0) {
          __ZdlPv(ppppppplStack_110);
        }
        ppppppplStack_110 = (long *******)&UNK_10f640101;
        pppppplStack_108 = (long ******)0x4f;
        if (ppppppplVar11 == (long *******)0x0) {
          ppppppplVar9 = (long *******)&ppppppplStack_110;
          FUN_10a0edfc4();
          if ((int)pppppplStack_158 < 0) {
            __ZdlPv(pppppppuStack_90);
          }
          ppppppplVar10 = ppppppplVar9;
          __Unwind_Resume();
          uStack_1f0 = 0x4f;
          puStack_1d0 = &UNK_10f64090a;
          pcStack_1b8 = FUN_10a16f000;
          ppppplStack_1e8 = ppppplVar22;
          uStack_1e0 = uVar19;
          ppppppplStack_1d8 = ppppppplVar11;
          ppppppplStack_1c8 = ppppppplVar9;
          puStack_1c0 = &stack0xfffffffffffffff0;
          if (uVar15 < 0xd8) {
            func_0x000107c2b074(auStack_210,&PTR_DAT_110c50c00 + (ulong)uVar15 * 5);
            FUN_10a1605fc(ppppppplVar10);
            ppppppplVar11 = ppppppplVar10 + 0xb;
            FUN_10a194fac(ppppppplVar11,auStack_210);
            ppppppplVar9 = (long *******)0x0;
            if (ppppppplVar11 != (long *******)0x0) {
              ppppppplVar9 = ppppppplVar11 + 6;
            }
            if (cStack_1f9 < '\0') {
              __ZdlPv(auStack_210[0]);
            }
            if (((uint)uVar13 != 0xd8) && (ppppppplVar11 == (long *******)0x0)) {
              if (0xd7 < (uint)uVar13) goto LAB_10a16f0ec;
              func_0x000107c2b074(auStack_210,&PTR_DAT_110c50c00 + (uVar13 & 0xffffffff) * 5);
              FUN_10a1605fc(ppppppplVar10);
              ppppppplVar10 = ppppppplVar10 + 0xb;
              FUN_10a194fac(ppppppplVar10,auStack_210);
              ppppppplVar9 = (long *******)0x0;
              if (ppppppplVar10 != (long *******)0x0) {
                ppppppplVar9 = ppppppplVar10 + 6;
              }
              if (cStack_1f9 < '\0') {
                __ZdlPv(auStack_210[0]);
              }
            }
            return ppppppplVar9;
          }
LAB_10a16f0ec:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a16f0f0);
          (*pcVar4)();
        }
      }
    }
  }
  pppppplVar6 = param_1[3];
  FUN_10a1605fc(pppppplVar6);
  func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110ba9968);
  pppppplVar6 = pppppplVar6 + 0x15;
  FUN_10a194450(pppppplVar6,&ppppppplStack_110);
  if ((long)pppppplStack_100 < 0) {
    __ZdlPv(ppppppplStack_110);
  }
  ppppppplVar11 = (long *******)param_1[3];
  FUN_10a1605fc();
  if (pppppplVar6 != (long ******)0x0) {
    ppppplVar22 = pppppplVar6[6];
    *(undefined4 *)((long)param_1 + 0x204) = *(undefined4 *)(pppppplVar6 + 7);
    *(long ******)((long)param_1 + 0x1fc) = ppppplVar22;
    func_0x000107c2b054(&ppppppplStack_110,&DAT_10f63b1cc);
    ppppppplVar11 = param_1 + 0x48;
    FUN_10a059fa0(ppppppplVar11,&ppppppplStack_110);
    if ((long)pppppplStack_100 < 0) {
      ppppppplVar11 = ppppppplStack_110;
      __ZdlPv();
    }
  }
  FUN_10abfe474();
  ppppppplVar9 = param_1;
  FUN_10a171d50(param_1,*ppppppplVar11,ppppppplVar11[1],param_1 + 0x4b);
  FUN_10abfe594();
  ppppppplVar11 = param_1;
  FUN_10a171d50(param_1,*ppppppplVar9,ppppppplVar9[1],param_1 + 0x59);
  FUN_10abfe6b4();
  ppppppplVar9 = param_1;
  FUN_10a171d50(param_1,*ppppppplVar11,ppppppplVar11[1],param_1 + 0x67);
  FUN_10abfed98();
  ppppppplVar11 = param_1;
  FUN_10a171d50(param_1,*ppppppplVar9,ppppppplVar9[1],param_1 + 0x75);
  if (*(char *)(param_1 + 0x4b) == '\x01') {
    func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110ba9980);
    pppppplVar6 = param_1[3];
    FUN_10a1702b0(pppppplVar6,&ppppppplStack_110);
    param_1[0x44] = pppppplVar6;
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
      ppppppplVar11 = (long *******)0x0;
      if (param_1[0x44] == (long ******)0x0) goto LAB_10a16eaa0;
    }
    else if (pppppplVar6 == (long ******)0x0) {
      ppppppplVar11 = (long *******)0x0;
      goto LAB_10a16eaa0;
    }
    pppppplVar6 = param_1[3];
    FUN_10a1605fc(pppppplVar6);
    func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110ba9980);
    pppppplVar6 = pppppplVar6 + 0x15;
    FUN_10a194450(pppppplVar6,&ppppppplStack_110);
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
    ppppppplVar11 = (long *******)param_1[3];
    FUN_10a1605fc(ppppppplVar11);
    if (pppppplVar6 != (long ******)0x0) {
      pppppplVar24 = (long ******)pppppplVar6[6];
      *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(pppppplVar6 + 7);
      param_1[0x41] = pppppplVar24;
      func_0x000107c2b054(&ppppppplStack_110,&DAT_10f63ad92);
      ppppppplVar11 = param_1 + 0x48;
      FUN_10a059fa0(ppppppplVar11,&ppppppplStack_110);
      if ((long)pppppplStack_100 < 0) {
        ppppppplVar11 = ppppppplStack_110;
        __ZdlPv(ppppppplStack_110);
      }
    }
  }
LAB_10a16eaa0:
  if (*(char *)(param_1 + 0x75) == '\x01') {
    func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110ba9998);
    pppppplVar6 = param_1[3];
    FUN_10a1702b0(pppppplVar6,&ppppppplStack_110);
    param_1[0x45] = pppppplVar6;
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
      if (param_1[0x45] == (long ******)0x0) {
        return (long *******)0x0;
      }
    }
    else if (pppppplVar6 == (long ******)0x0) {
      return (long *******)0x0;
    }
    pppppplVar6 = param_1[3];
    FUN_10a1605fc(pppppplVar6);
    func_0x000107c2b074(&ppppppplStack_110,&PTR_DAT_110ba9998);
    pppppplVar6 = pppppplVar6 + 0x15;
    FUN_10a194450(pppppplVar6,&ppppppplStack_110);
    if ((long)pppppplStack_100 < 0) {
      __ZdlPv(ppppppplStack_110);
    }
    ppppppplVar11 = (long *******)param_1[3];
    FUN_10a1605fc(ppppppplVar11);
    if (pppppplVar6 != (long ******)0x0) {
      ppppplVar22 = pppppplVar6[6];
      *(undefined4 *)((long)param_1 + 0x21c) = *(undefined4 *)(pppppplVar6 + 7);
      *(long ******)((long)param_1 + 0x214) = ppppplVar22;
      func_0x000107c2b054(&ppppppplStack_110,&DAT_10f63ace6);
      ppppppplVar11 = param_1 + 0x48;
      FUN_10a059fa0(ppppppplVar11,&ppppppplStack_110);
      if ((long)pppppplStack_100 < 0) {
        __ZdlPv(ppppppplStack_110);
        ppppppplVar11 = ppppppplStack_110;
      }
    }
  }
  return ppppppplVar11;
}



/* Entry: 10a16f000; end: 10a16f10f;  */

long FUN_10a16f000(long param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 auStack_60 [2];
  char cStack_49;
  
  if (param_2 < 0xd8) {
    func_0x000107c2b074(auStack_60,&PTR_DAT_110c50c00 + (ulong)param_2 * 5);
    FUN_10a1605fc(param_1);
    lVar2 = param_1 + 0x58;
    FUN_10a194fac(lVar2,auStack_60);
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = lVar2 + 0x30;
    }
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
    if ((param_3 != 0xd8) && (lVar2 == 0)) {
      if (0xd7 < param_3) goto LAB_10a16f0ec;
      func_0x000107c2b074(auStack_60,&PTR_DAT_110c50c00 + (ulong)param_3 * 5);
      FUN_10a1605fc(param_1);
      param_1 = param_1 + 0x58;
      FUN_10a194fac(param_1,auStack_60);
      lVar3 = 0;
      if (param_1 != 0) {
        lVar3 = param_1 + 0x30;
      }
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
      }
    }
    return lVar3;
  }
LAB_10a16f0ec:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a16f0f0);
  (*pcVar1)();
}



/* Entry: 10a16f110; end: 10a1702af;  */

long ***** FUN_10a16f110(long param_1,long ****param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long ****pppplVar5;
  code *pcVar6;
  int iVar7;
  long ***ppplVar8;
  uint uVar9;
  long ***ppplVar10;
  long *plVar11;
  long ***ppplVar12;
  undefined8 *puVar13;
  long *****ppppplVar14;
  ulong uVar15;
  long ***ppplVar16;
  long *plVar17;
  long *plVar18;
  long *****ppppplVar19;
  long ***ppplVar20;
  long lVar21;
  long *****ppppplVar22;
  long lVar23;
  long *****ppppplVar24;
  long ****pppplVar25;
  long *****ppppplVar26;
  bool bVar27;
  long *****ppppplVar28;
  long *****ppppplVar29;
  float fVar30;
  long ****pppplVar31;
  long **pplStack_d0;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  byte bStack_b9;
  undefined8 uStack_b8;
  long ****pppplStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined1 uStack_a0;
  undefined6 uStack_9f;
  byte bStack_99;
  long lStack_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  ppplVar8 = &pplStack_d0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplVar10 = param_2[1];
  pppplStack_b0 = (long ****)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    ppplVar10 = (long ***)(ulong)*(byte *)((long)param_2 + 0x17);
    pppplStack_b0 = param_2;
  }
  uStack_a8 = SUB87(ppplVar10,0);
  uStack_a1 = (undefined1)((ulong)ppplVar10 >> 0x38);
  ppppplVar24 = &pppplStack_b0;
  FUN_10a159054(ppppplVar24,&UNK_10f64090a,5);
  pppplStack_b0 = (long ****)&UNK_10f640151;
  uStack_a8 = 0x56;
  uStack_a1 = 0;
  if ((int)ppppplVar24 != 0) {
    FUN_10a0edfc4(&pppplStack_b0);
    goto LAB_10a1701b0;
  }
  plVar1 = (long *)(param_1 + 0x118);
  ppplVar10 = *(long ****)(param_1 + 0x120);
  if (ppplVar10 != (long ***)0x0) {
    ppplVar12 = param_2[3];
    uVar15 = (long)ppplVar10 - 1;
    if (((ulong)ppplVar10 & uVar15) == 0) {
      ppplVar16 = (long ***)(uVar15 & (ulong)ppplVar12);
    }
    else {
      ppplVar16 = ppplVar12;
      if (ppplVar10 <= ppplVar12) {
        uVar4 = 0;
        if (ppplVar10 != (long ***)0x0) {
          uVar4 = (ulong)ppplVar12 / (ulong)ppplVar10;
        }
        ppplVar16 = (long ***)((long)ppplVar12 - uVar4 * (long)ppplVar10);
      }
    }
    plVar18 = *(long **)(*plVar1 + (long)ppplVar16 * 8);
    if (plVar18 != (long *)0x0) {
      do {
        while( true ) {
          plVar18 = (long *)*plVar18;
          if (plVar18 == (long *)0x0) goto LAB_10a16f21c;
          ppplVar20 = (long ***)plVar18[1];
          if (ppplVar20 != ppplVar12) break;
          if ((long ***)plVar18[5] == ppplVar12) {
            ppppplVar24 = (long *****)(plVar18 + 6);
            goto LAB_10a170124;
          }
        }
        if (((ulong)ppplVar10 & uVar15) == 0) {
          ppplVar20 = (long ***)((ulong)ppplVar20 & uVar15);
        }
        else if (ppplVar10 <= ppplVar20) {
          uVar4 = 0;
          if (ppplVar10 != (long ***)0x0) {
            uVar4 = (ulong)ppplVar20 / (ulong)ppplVar10;
          }
          ppplVar20 = (long ***)((long)ppplVar20 - uVar4 * (long)ppplVar10);
        }
      } while (ppplVar20 == ppplVar16);
    }
  }
LAB_10a16f21c:
  lVar21 = *(long *)(param_1 + 0x18);
  FUN_10a1605fc(lVar21);
  lVar21 = lVar21 + 0x58;
  FUN_10a194fac(lVar21,param_2);
  pppplVar25 = (long ****)(lVar21 + 0x30);
  pppplVar31 = (long ****)0x0;
  if (lVar21 != 0) {
    pppplVar31 = pppplVar25;
  }
  lVar23 = *(long *)(param_1 + 0x18);
  bStack_b9 = 5;
  pplStack_d0 = (long **)CONCAT26(pplStack_d0._6_2_,0x4353727241);
  ppplVar10 = param_2[1];
  pppplVar5 = (long ****)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    ppplVar10 = (long ***)(ulong)*(byte *)((long)param_2 + 0x17);
    pppplVar5 = param_2;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (&pplStack_d0,0,pppplVar5,ppplVar10);
  pppplStack_b0 = (long ****)*ppplVar8;
  uVar3 = ppplVar8[1];
  uStack_90 = (undefined4)uVar3;
  uStack_8c = (undefined2)((ulong)uVar3 >> 0x20);
  uStack_8a = (undefined1)((ulong)uVar3 >> 0x30);
  uStack_89 = (undefined1)*(undefined8 *)((long)ppplVar8 + 0xf);
  uStack_88 = (undefined7)((ulong)*(undefined8 *)((long)ppplVar8 + 0xf) >> 8);
  bStack_99 = *(byte *)((long)ppplVar8 + 0x17);
  ppplVar8[1] = (long **)0x0;
  ppplVar8[2] = (long **)0x0;
  *ppplVar8 = (long **)0x0;
  uStack_a0 = (undefined1)uStack_88;
  uStack_9f = (undefined6)((uint7)uStack_88 >> 8);
  uStack_a8 = CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90));
  uStack_a1 = uStack_89;
  lStack_98 = 0;
  func_0x000107c2b080(&pppplStack_b0);
  FUN_10a1605fc(lVar23);
  ppppplVar24 = (long *****)(lVar23 + 0x58);
  FUN_10a194fac(ppppplVar24,&pppplStack_b0);
  ppppplVar29 = ppppplVar24 + 6;
  ppppplVar28 = (long *****)0x0;
  if (ppppplVar24 != (long *****)0x0) {
    ppppplVar28 = ppppplVar29;
  }
  if ((char)bStack_99 < '\0') {
    __ZdlPv(pppplStack_b0);
  }
  ppppplVar26 = ppppplVar28;
  if ((char)bStack_b9 < '\0') {
    __ZdlPv(pplStack_d0);
    if (lVar21 != 0) goto LAB_10a16f318;
LAB_10a16f330:
    pppplVar25 = pppplVar31;
    if ((ppppplVar24 == (long *****)0x0) ||
       ((ppppplVar26 = ppppplVar29, 5 < *(ushort *)(ppppplVar24 + 7) - 0x19 &&
        (*(ushort *)(ppppplVar24 + 7) != 0xd)))) {
      plVar18 = *(long **)(*(long *)(param_1 + 0x18) + 0x238);
      plVar11 = *(long **)(*(long *)(param_1 + 0x18) + 0x240);
      ppppplVar26 = ppppplVar28;
      if (plVar18 != plVar11) {
        do {
          if ((long ***)*plVar18 == param_2[3]) {
            if (*(char *)((long)plVar18 + 0x1f) < '\0') {
              func_0x000107c3192c(&pppplStack_b0,plVar18[1],plVar18[2]);
            }
            else {
              pppplStack_b0 = (long ****)plVar18[1];
              lVar21 = plVar18[3];
              uStack_a0 = (undefined1)lVar21;
              uStack_9f = (undefined6)((ulong)lVar21 >> 8);
              bStack_99 = (byte)((ulong)lVar21 >> 0x38);
              uStack_a8 = (undefined7)plVar18[2];
              uStack_a1 = (undefined1)((ulong)plVar18[2] >> 0x38);
            }
            lStack_98 = plVar18[4];
            uVar9 = (uint)(char)bStack_99;
            uVar15 = CONCAT17(uStack_a1,uStack_a8);
            if (-1 < (int)uVar9) {
              uVar15 = (ulong)bStack_99;
            }
            if (uVar15 != 0) {
              lVar21 = *(long *)(param_1 + 0x18);
              FUN_10a1605fc(lVar21);
              ppppplVar24 = &pppplStack_b0;
              lVar21 = lVar21 + 0x58;
              FUN_10a194fac(lVar21,&pppplStack_b0);
              pppplVar31 = (long ****)0x0;
              if (lVar21 != 0) {
                pppplVar31 = (long ****)(lVar21 + 0x30);
              }
              lVar21 = *(long *)(param_1 + 0x18);
              uStack_80 = CONCAT17(5,(undefined7)uStack_80);
              uStack_90 = 0x53727241;
              uStack_8c = 0x43;
              uVar15 = CONCAT17(uStack_a1,uStack_a8);
              ppppplVar29 = (long *****)pppplStack_b0;
              if (-1 < (char)bStack_99) {
                uVar15 = (ulong)bStack_99;
                ppppplVar29 = ppppplVar24;
              }
              puVar13 = (undefined8 *)&uStack_90;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                        (puVar13,0,ppppplVar29,uVar15);
              pplStack_d0 = (long **)*puVar13;
              uStack_78 = (undefined7)puVar13[1];
              uStack_71 = (undefined1)*(undefined8 *)((long)puVar13 + 0xf);
              uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar13 + 0xf) >> 8);
              bStack_b9 = *(byte *)((long)puVar13 + 0x17);
              puVar13[1] = 0;
              puVar13[2] = 0;
              *puVar13 = 0;
              uStack_c0 = uStack_70;
              uStack_c8 = uStack_78;
              uStack_c1 = uStack_71;
              uStack_b8 = 0;
              func_0x000107c2b080(&pplStack_d0);
              FUN_10a1605fc(lVar21);
              lVar21 = lVar21 + 0x58;
              FUN_10a194fac(lVar21,&pplStack_d0);
              ppppplVar28 = (long *****)0x0;
              if (lVar21 != 0) {
                ppppplVar28 = (long *****)(lVar21 + 0x30);
              }
              if ((char)bStack_b9 < '\0') {
                __ZdlPv(pplStack_d0);
              }
              if (uStack_80 < 0) {
                __ZdlPv(CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90))));
              }
              uVar9 = (uint)bStack_99;
            }
            ppppplVar26 = ppppplVar28;
            pppplVar25 = pppplVar31;
            if ((uVar9 >> 7 & 1) != 0) {
              __ZdlPv(pppplStack_b0);
            }
            break;
          }
          plVar18 = plVar18 + 5;
        } while (plVar18 != plVar11);
      }
    }
    if (pppplVar25 != (long ****)0x0) goto LAB_10a16f4dc;
    pppplVar25 = (long ****)0x0;
    bVar27 = true;
LAB_10a16f750:
    if ((ppppplVar26 != (long *****)0x0) &&
       ((*(ushort *)(ppppplVar26 + 1) - 0x19 < 6 || (*(ushort *)(ppppplVar26 + 1) == 0xd))))
    goto LAB_10a16f4f8;
    ppppplVar24 = (long *****)0x0;
LAB_10a170124:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return ppppplVar24;
    }
    ___stack_chk_fail();
  }
  else {
    if (lVar21 == 0) goto LAB_10a16f330;
LAB_10a16f318:
    if ((5 < *(ushort *)(lVar21 + 0x38) - 0x19) && (*(ushort *)(lVar21 + 0x38) != 0xd))
    goto LAB_10a16f330;
LAB_10a16f4dc:
    bVar27 = false;
    if (5 < *(ushort *)(pppplVar25 + 1) - 0x19 && *(ushort *)(pppplVar25 + 1) != 0xd)
    goto LAB_10a16f750;
LAB_10a16f4f8:
    ppppplVar28 = (long *****)param_2[3];
    ppppplVar29 = *(long ******)(param_1 + 0x120);
    if (ppppplVar29 != (long *****)0x0) {
      uVar15 = (long)ppppplVar29 - 1;
      if (((ulong)ppppplVar29 & uVar15) == 0) {
        ppppplVar24 = (long *****)(uVar15 & (ulong)ppppplVar28);
      }
      else {
        ppppplVar24 = ppppplVar28;
        if (ppppplVar29 <= ppppplVar28) {
          uVar4 = 0;
          if (ppppplVar29 != (long *****)0x0) {
            uVar4 = (ulong)ppppplVar28 / (ulong)ppppplVar29;
          }
          ppppplVar24 = (long *****)((long)ppppplVar28 - uVar4 * (long)ppppplVar29);
        }
      }
      puVar13 = *(undefined8 **)(*plVar1 + (long)ppppplVar24 * 8);
      if (puVar13 != (undefined8 *)0x0) {
        for (ppppplVar22 = (long *****)*puVar13; ppppplVar22 != (long *****)0x0;
            ppppplVar22 = (long *****)*ppppplVar22) {
          ppppplVar14 = (long *****)ppppplVar22[1];
          if (ppppplVar14 == ppppplVar28) {
            if ((long *****)ppppplVar22[5] == ppppplVar28) goto LAB_10a16f8a4;
          }
          else {
            if (((ulong)ppppplVar29 & uVar15) == 0) {
              ppppplVar14 = (long *****)((ulong)ppppplVar14 & uVar15);
            }
            else if (ppppplVar29 <= ppppplVar14) {
              uVar4 = 0;
              if (ppppplVar29 != (long *****)0x0) {
                uVar4 = (ulong)ppppplVar14 / (ulong)ppppplVar29;
              }
              ppppplVar14 = (long *****)((long)ppppplVar14 - uVar4 * (long)ppppplVar29);
            }
            if (ppppplVar14 != ppppplVar24) break;
          }
        }
      }
    }
    ppppplVar22 = (long *****)0xb0;
    __Znwm();
    uStack_a8 = SUB87(plVar1,0);
    uStack_a1 = (undefined1)((ulong)plVar1 >> 0x38);
    uStack_a0 = 0;
    uStack_9f = 0;
    bStack_99 = 0;
    *ppppplVar22 = (long ****)0x0;
    ppppplVar22[1] = (long ****)ppppplVar28;
    pppplStack_b0 = (long ****)ppppplVar22;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(ppppplVar22 + 2,*param_2,param_2[1]);
      ppppplVar14 = (long *****)param_2[3];
    }
    else {
      pppplVar31 = (long ****)*param_2;
      ppppplVar22[3] = (long ****)param_2[1];
      ppppplVar22[2] = pppplVar31;
      ppppplVar22[4] = (long ****)param_2[2];
      ppppplVar14 = ppppplVar28;
    }
    ppppplVar22[5] = (long ****)ppppplVar14;
    ppppplVar22[6] = (long ****)0x0;
    ppppplVar22[7] = (long ****)0x0;
    ppppplVar22[8] = (long ****)0x0;
    ppppplVar22[9] = (long ****)0x28cd94bfde;
    ppppplVar22[0xb] = (long ****)0x0;
    ppppplVar22[10] = (long ****)0x0;
    ppppplVar22[0xd] = (long ****)0x0;
    ppppplVar22[0xc] = (long ****)0x0;
    ppppplVar22[0xf] = (long ****)0x0;
    ppppplVar22[0xe] = (long ****)0x0;
    ppppplVar22[0x11] = (long ****)0x0;
    ppppplVar22[0x10] = (long ****)0x0;
    ppppplVar22[0x13] = (long ****)0x0;
    ppppplVar22[0x12] = (long ****)0x0;
    ppppplVar22[0x15] = (long ****)0x0;
    ppppplVar22[0x14] = (long ****)0x0;
    uStack_a0 = 1;
    fVar30 = (float)(*(long *)(param_1 + 0x130) + 1);
    if ((ppppplVar29 != (long *****)0x0) &&
       (fVar30 <= *(float *)(param_1 + 0x138) * (float)ppppplVar29)) {
LAB_10a16f830:
      lVar21 = *plVar1;
      puVar13 = *(undefined8 **)(lVar21 + (long)ppppplVar24 * 8);
      if (puVar13 == (undefined8 *)0x0) {
        *ppppplVar22 = *(long *****)(param_1 + 0x128);
        *(long ******)(param_1 + 0x128) = ppppplVar22;
        *(long *)(lVar21 + (long)ppppplVar24 * 8) = param_1 + 0x128;
        if (*ppppplVar22 != (long ****)0x0) {
          ppppplVar24 = (long *****)(*ppppplVar22)[1];
          if (((ulong)ppppplVar29 & (long)ppppplVar29 - 1U) == 0) {
            ppppplVar24 = (long *****)((ulong)ppppplVar24 & (long)ppppplVar29 - 1U);
          }
          else if (ppppplVar29 <= ppppplVar24) {
            uVar15 = 0;
            if (ppppplVar29 != (long *****)0x0) {
              uVar15 = (ulong)ppppplVar24 / (ulong)ppppplVar29;
            }
            ppppplVar24 = (long *****)((long)ppppplVar24 - uVar15 * (long)ppppplVar29);
          }
          *(long ******)(*plVar1 + (long)ppppplVar24 * 8) = ppppplVar22;
        }
      }
      else {
        *ppppplVar22 = (long ****)*puVar13;
        *puVar13 = ppppplVar22;
      }
      *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + 1;
LAB_10a16f8a4:
      ppppplVar24 = ppppplVar22 + 6;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(ppppplVar24,param_2);
      ppppplVar22[9] = (long ****)param_2[3];
      ppppplVar22[10] = pppplVar25;
      ppppplVar22[0xb] = (long ****)ppppplVar26;
      if (bVar27) {
        iVar7 = 0;
      }
      else {
        iVar7 = (int)*(short *)(pppplVar25 + 1);
        FUN_10a1709f4();
      }
      *(int *)(ppppplVar22 + 0x15) = iVar7;
      if (ppppplVar26 == (long *****)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (int)*(short *)(ppppplVar26 + 1);
        FUN_10a1709f4();
      }
      *(int *)((long)ppppplVar22 + 0xac) = iVar7;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&pplStack_d0,*param_2,param_2[1]);
      }
      else {
        pplStack_d0 = (long **)*param_2;
        uStack_c8 = SUB87(param_2[1],0);
        uStack_c1 = (undefined1)((ulong)param_2[1] >> 0x38);
        uStack_c0 = SUB87(param_2[2],0);
        bStack_b9 = (byte)((ulong)param_2[2] >> 0x38);
      }
      lVar21 = *(long *)(param_1 + 0x18);
      uVar15 = CONCAT17(uStack_c1,uStack_c8);
      if (-1 < (char)bStack_b9) {
        uVar15 = (ulong)bStack_b9;
      }
      FUN_10a003c90(&uStack_90,uVar15 + 9,&uStack_78);
      puVar2 = (undefined4 *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)));
      if (-1 < uStack_80) {
        puVar2 = &uStack_90;
      }
      if (uVar15 != 0) {
        ppplVar10 = (long ***)pplStack_d0;
        if (-1 < (char)bStack_b9) {
          ppplVar10 = &pplStack_d0;
        }
        _memmove(puVar2,ppplVar10,uVar15);
      }
      *(undefined8 *)((long)puVar2 + uVar15) = 0x726f66736e617254;
      *(undefined2 *)((undefined8 *)((long)puVar2 + uVar15) + 1) = 0x6d;
      lVar23 = uStack_80;
      pppplStack_b0 =
           (long ****)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)));
      uStack_a8 = uStack_88;
      uStack_88 = 0;
      uStack_81 = 0;
      uStack_80 = 0;
      lStack_98 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_8a = 0;
      uStack_89 = 0;
      uStack_a0 = (undefined1)lVar23;
      uStack_9f = (undefined6)((ulong)lVar23 >> 8);
      bStack_99 = (byte)((ulong)lVar23 >> 0x38);
      func_0x000107c2b080(&pppplStack_b0);
      FUN_10a1605fc(lVar21);
      lVar21 = lVar21 + 0x58;
      FUN_10a194fac(lVar21,&pppplStack_b0);
      if ((char)bStack_99 < '\0') {
        __ZdlPv(pppplStack_b0);
      }
      if (uStack_80 < 0) {
        __ZdlPv(CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90))));
      }
      if (lVar21 != 0) {
        ppppplVar22[0xc] = (long ****)(lVar21 + 0x30);
      }
      lVar21 = *(long *)(param_1 + 0x18);
      uVar15 = CONCAT17(uStack_c1,uStack_c8);
      if (-1 < (char)bStack_b9) {
        uVar15 = (ulong)bStack_b9;
      }
      FUN_10a003c90(&uStack_90,uVar15 + 0x15,&uStack_78);
      puVar2 = (undefined4 *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)));
      if (-1 < uStack_80) {
        puVar2 = &uStack_90;
      }
      if (uVar15 != 0) {
        ppplVar10 = (long ***)pplStack_d0;
        if (-1 < (char)bStack_b9) {
          ppplVar10 = &pplStack_d0;
        }
        _memmove(puVar2,ppplVar10,uVar15);
      }
      puVar13 = (undefined8 *)((long)puVar2 + uVar15);
      puVar13[1] = 0x78697274614d6e6f;
      *puVar13 = 0x697463656a6f7250;
      *(undefined8 *)((long)puVar13 + 0xd) = 0x736d726554786972;
      lVar23 = uStack_80;
      *(undefined1 *)((long)puVar13 + 0x15) = 0;
      pppplStack_b0 =
           (long ****)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)));
      uStack_a8 = uStack_88;
      uStack_a1 = uStack_81;
      uStack_88 = 0;
      uStack_81 = 0;
      uStack_80 = 0;
      lStack_98 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_8a = 0;
      uStack_89 = 0;
      uStack_a0 = (undefined1)lVar23;
      uStack_9f = (undefined6)((ulong)lVar23 >> 8);
      bStack_99 = (byte)((ulong)lVar23 >> 0x38);
      func_0x000107c2b080(&pppplStack_b0);
      FUN_10a1605fc(lVar21);
      lVar21 = lVar21 + 0x58;
      FUN_10a194fac(lVar21,&pppplStack_b0);
      if ((char)bStack_99 < '\0') {
        __ZdlPv(pppplStack_b0);
      }
      if (uStack_80 < 0) {
        __ZdlPv(CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90))));
      }
      if (lVar21 != 0) {
        ppppplVar22[0xd] = (long ****)(lVar21 + 0x30);
      }
      lVar21 = *(long *)(param_1 + 0x18);
      uVar15 = CONCAT17(uStack_c1,uStack_c8);
      if (-1 < (char)bStack_b9) {
        uVar15 = (ulong)bStack_b9;
      }
      FUN_10a003c90(&uStack_90,uVar15 + 8,&uStack_78);
      puVar2 = (undefined4 *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)));
      if (-1 < uStack_80) {
        puVar2 = &uStack_90;
      }
      if (uVar15 != 0) {
        ppplVar10 = (long ***)pplStack_d0;
        if (-1 < (char)bStack_b9) {
          ppplVar10 = &pplStack_d0;
        }
        _memmove(puVar2,ppplVar10,uVar15);
      }
      *(undefined8 *)((long)puVar2 + uVar15) = 0x78614d6e694d7655;
      *(undefined1 *)((undefined8 *)((long)puVar2 + uVar15) + 1) = 0;
      lVar23 = uStack_80;
      pppplStack_b0 =
           (long ****)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)));
      uStack_a8 = uStack_88;
      uStack_a1 = uStack_81;
      uStack_88 = 0;
      uStack_81 = 0;
      uStack_80 = 0;
      lStack_98 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_8a = 0;
      uStack_89 = 0;
      uStack_a0 = (undefined1)lVar23;
      uStack_9f = (undefined6)((ulong)lVar23 >> 8);
      bStack_99 = (byte)((ulong)lVar23 >> 0x38);
      func_0x000107c2b080(&pppplStack_b0);
      FUN_10a1605fc(lVar21);
      lVar21 = lVar21 + 0x58;
      FUN_10a194fac(lVar21,&pppplStack_b0);
      if ((char)bStack_99 < '\0') {
        __ZdlPv(pppplStack_b0);
      }
      if (uStack_80 < 0) {
        __ZdlPv(CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90))));
      }
      if (lVar21 != 0) {
        ppppplVar22[0xe] = (long ****)(lVar21 + 0x30);
      }
      lVar21 = *(long *)(param_1 + 0x18);
      uVar15 = CONCAT17(uStack_c1,uStack_c8);
      if (-1 < (char)bStack_b9) {
        uVar15 = (ulong)bStack_b9;
      }
      FUN_10a003c90(&uStack_90,uVar15 + 0xb,&uStack_78);
      puVar2 = (undefined4 *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)));
      if (-1 < uStack_80) {
        puVar2 = &uStack_90;
      }
      if (uVar15 != 0) {
        ppplVar10 = (long ***)pplStack_d0;
        if (-1 < (char)bStack_b9) {
          ppplVar10 = &pplStack_d0;
        }
        _memmove(puVar2,ppplVar10,uVar15);
      }
      puVar13 = (undefined8 *)((long)puVar2 + uVar15);
      *puVar13 = 0x6f43726564726f42;
      *(undefined4 *)((long)puVar13 + 7) = 0x726f6c6f;
      *(undefined1 *)((long)puVar13 + 0xb) = 0;
      lVar23 = uStack_80;
      pppplStack_b0 =
           (long ****)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)));
      uStack_a8 = uStack_88;
      uStack_a1 = uStack_81;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_8a = 0;
      uStack_89 = 0;
      uStack_88 = 0;
      uStack_81 = 0;
      uStack_80 = 0;
      uStack_a0 = (undefined1)lVar23;
      uStack_9f = (undefined6)((ulong)lVar23 >> 8);
      bStack_99 = (byte)((ulong)lVar23 >> 0x38);
      lStack_98 = 0;
      func_0x000107c2b080(&pppplStack_b0);
      FUN_10a1605fc(lVar21);
      lVar21 = lVar21 + 0x58;
      FUN_10a194fac(lVar21,&pppplStack_b0);
      if ((char)bStack_99 < '\0') {
        __ZdlPv(pppplStack_b0);
      }
      if (uStack_80 < 0) {
        __ZdlPv(CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90))));
      }
      if (lVar21 != 0) {
        ppppplVar22[0xf] = (long ****)(lVar21 + 0x30);
      }
      lVar21 = *(long *)(param_1 + 0x18);
      uVar15 = CONCAT17(uStack_c1,uStack_c8);
      if (-1 < (char)bStack_b9) {
        uVar15 = (ulong)bStack_b9;
      }
      FUN_10a003c90(&uStack_90,uVar15 + 4,&uStack_78);
      puVar2 = (undefined4 *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)));
      if (-1 < uStack_80) {
        puVar2 = &uStack_90;
      }
      if (uVar15 != 0) {
        ppplVar10 = (long ***)pplStack_d0;
        if (-1 < (char)bStack_b9) {
          ppplVar10 = &pplStack_d0;
        }
        _memmove(puVar2,ppplVar10,uVar15);
      }
      *(undefined4 *)((long)puVar2 + uVar15) = 0x736d6944;
      *(undefined1 *)((undefined4 *)((long)puVar2 + uVar15) + 1) = 0;
      lVar23 = uStack_80;
      pppplStack_b0 =
           (long ****)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)));
      uStack_a8 = uStack_88;
      uStack_a1 = uStack_81;
      uStack_88 = 0;
      uStack_81 = 0;
      uStack_80 = 0;
      lStack_98 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_8a = 0;
      uStack_89 = 0;
      uStack_a0 = (undefined1)lVar23;
      uStack_9f = (undefined6)((ulong)lVar23 >> 8);
      bStack_99 = (byte)((ulong)lVar23 >> 0x38);
      func_0x000107c2b080(&pppplStack_b0);
      FUN_10a1605fc(lVar21);
      lVar21 = lVar21 + 0x58;
      FUN_10a194fac(lVar21,&pppplStack_b0);
      if ((char)bStack_99 < '\0') {
        __ZdlPv(pppplStack_b0);
      }
      if (uStack_80 < 0) {
        __ZdlPv(CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90))));
      }
      if (lVar21 != 0) {
        ppppplVar22[0x13] = (long ****)(lVar21 + 0x30);
      }
      lVar21 = *(long *)(param_1 + 0x18);
      uVar15 = CONCAT17(uStack_c1,uStack_c8);
      if (-1 < (char)bStack_b9) {
        uVar15 = (ulong)bStack_b9;
      }
      FUN_10a003c90(&uStack_90,uVar15 + 9,&uStack_78);
      puVar2 = (undefined4 *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)));
      if (-1 < uStack_80) {
        puVar2 = &uStack_90;
      }
      if (uVar15 != 0) {
        ppplVar10 = (long ***)pplStack_d0;
        if (-1 < (char)bStack_b9) {
          ppplVar10 = &pplStack_d0;
        }
        _memmove(puVar2,ppplVar10,uVar15);
      }
      *(undefined8 *)((long)puVar2 + uVar15) = 0x69636552736d6944;
      *(undefined2 *)((undefined8 *)((long)puVar2 + uVar15) + 1) = 0x70;
      lVar23 = uStack_80;
      pppplStack_b0 =
           (long ****)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)));
      uStack_a8 = uStack_88;
      uStack_a1 = uStack_81;
      uStack_88 = 0;
      uStack_81 = 0;
      uStack_80 = 0;
      lStack_98 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_8a = 0;
      uStack_89 = 0;
      uStack_a0 = (undefined1)lVar23;
      uStack_9f = (undefined6)((ulong)lVar23 >> 8);
      bStack_99 = (byte)((ulong)lVar23 >> 0x38);
      func_0x000107c2b080(&pppplStack_b0);
      FUN_10a1605fc(lVar21);
      lVar21 = lVar21 + 0x58;
      FUN_10a194fac(lVar21,&pppplStack_b0);
      if ((char)bStack_99 < '\0') {
        __ZdlPv(pppplStack_b0);
      }
      if (uStack_80 < 0) {
        __ZdlPv(CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90))));
      }
      if (lVar21 != 0) {
        ppppplVar22[0x14] = (long ****)(lVar21 + 0x30);
      }
      lVar21 = *(long *)(param_1 + 0x18);
      uVar15 = CONCAT17(uStack_c1,uStack_c8);
      if (-1 < (char)bStack_b9) {
        uVar15 = (ulong)bStack_b9;
      }
      FUN_10a003c90(&uStack_90,uVar15 + 4,&uStack_78);
      puVar2 = (undefined4 *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)));
      if (-1 < uStack_80) {
        puVar2 = &uStack_90;
      }
      if (uVar15 != 0) {
        ppplVar10 = (long ***)pplStack_d0;
        if (-1 < (char)bStack_b9) {
          ppplVar10 = &pplStack_d0;
        }
        _memmove(puVar2,ppplVar10,uVar15);
      }
      *(undefined4 *)((long)puVar2 + uVar15) = 0x657a6953;
      *(undefined1 *)((undefined4 *)((long)puVar2 + uVar15) + 1) = 0;
      lVar23 = uStack_80;
      pppplStack_b0 =
           (long ****)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)));
      uStack_a8 = uStack_88;
      uStack_a1 = uStack_81;
      uStack_88 = 0;
      uStack_81 = 0;
      uStack_80 = 0;
      lStack_98 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_8a = 0;
      uStack_89 = 0;
      uStack_a0 = (undefined1)lVar23;
      uStack_9f = (undefined6)((ulong)lVar23 >> 8);
      bStack_99 = (byte)((ulong)lVar23 >> 0x38);
      func_0x000107c2b080(&pppplStack_b0);
      FUN_10a1605fc(lVar21);
      lVar21 = lVar21 + 0x58;
      FUN_10a194fac(lVar21,&pppplStack_b0);
      if ((char)bStack_99 < '\0') {
        __ZdlPv(pppplStack_b0);
      }
      if (uStack_80 < 0) {
        __ZdlPv(CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90))));
      }
      if (lVar21 != 0) {
        ppppplVar22[0x10] = (long ****)(lVar21 + 0x30);
      }
      iVar7 = *(int *)(ppppplVar22 + 0x15);
      if (iVar7 == 0x8c1a) {
        lVar21 = *(long *)(param_1 + 0x18);
        uVar15 = CONCAT17(uStack_c1,uStack_c8);
        if (-1 < (char)bStack_b9) {
          uVar15 = (ulong)bStack_b9;
        }
        FUN_10a003c90(&uStack_90,uVar15 + 10,&uStack_78);
        puVar2 = (undefined4 *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)))
        ;
        if (-1 < uStack_80) {
          puVar2 = &uStack_90;
        }
        if (uVar15 != 0) {
          ppplVar10 = (long ***)pplStack_d0;
          if (-1 < (char)bStack_b9) {
            ppplVar10 = &pplStack_d0;
          }
          _memmove(puVar2,ppplVar10,uVar15);
        }
        puVar13 = (undefined8 *)((long)puVar2 + uVar15);
        *puVar13 = 0x756f437961727241;
        *(undefined2 *)(puVar13 + 1) = 0x746e;
        *(undefined1 *)((long)puVar13 + 10) = 0;
        lVar23 = uStack_80;
        pppplStack_b0 =
             (long ****)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)));
        uStack_a8 = uStack_88;
        uStack_a1 = uStack_81;
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_8a = 0;
        uStack_89 = 0;
        uStack_88 = 0;
        uStack_81 = 0;
        uStack_80 = 0;
        uStack_a0 = (undefined1)lVar23;
        uStack_9f = (undefined6)((ulong)lVar23 >> 8);
        bStack_99 = (byte)((ulong)lVar23 >> 0x38);
        lStack_98 = 0;
        func_0x000107c2b080(&pppplStack_b0);
        FUN_10a1605fc(lVar21);
        lVar21 = lVar21 + 0x58;
        FUN_10a194fac(lVar21,&pppplStack_b0);
        if ((char)bStack_99 < '\0') {
          __ZdlPv(pppplStack_b0);
        }
        if (uStack_80 < 0) {
          __ZdlPv(CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90))));
        }
        if (lVar21 != 0) {
          ppppplVar22[0x12] = (long ****)(lVar21 + 0x30);
        }
        iVar7 = *(int *)(ppppplVar22 + 0x15);
      }
      if (iVar7 == 0x806f) {
        lVar21 = *(long *)(param_1 + 0x18);
        uVar15 = CONCAT17(uStack_c1,uStack_c8);
        if (-1 < (char)bStack_b9) {
          uVar15 = (ulong)bStack_b9;
        }
        FUN_10a003c90(&uStack_90,uVar15 + 5,&uStack_78);
        puVar2 = (undefined4 *)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)))
        ;
        if (-1 < uStack_80) {
          puVar2 = &uStack_90;
        }
        if (uVar15 != 0) {
          ppplVar10 = (long ***)pplStack_d0;
          if (-1 < (char)bStack_b9) {
            ppplVar10 = &pplStack_d0;
          }
          _memmove(puVar2,ppplVar10,uVar15);
        }
        *(undefined4 *)((long)puVar2 + uVar15) = 0x74706544;
        *(undefined2 *)((undefined4 *)((long)puVar2 + uVar15) + 1) = 0x68;
        lVar23 = uStack_80;
        pppplStack_b0 =
             (long ****)CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90)));
        uStack_a8 = uStack_88;
        uStack_a1 = uStack_81;
        uStack_88 = 0;
        uStack_81 = 0;
        uStack_80 = 0;
        lStack_98 = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_8a = 0;
        uStack_89 = 0;
        uStack_a0 = (undefined1)lVar23;
        uStack_9f = (undefined6)((ulong)lVar23 >> 8);
        bStack_99 = (byte)((ulong)lVar23 >> 0x38);
        func_0x000107c2b080(&pppplStack_b0);
        FUN_10a1605fc(lVar21);
        lVar21 = lVar21 + 0x58;
        FUN_10a194fac(lVar21,&pppplStack_b0);
        if ((char)bStack_99 < '\0') {
          __ZdlPv(pppplStack_b0);
        }
        if (uStack_80 < 0) {
          __ZdlPv(CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90))));
        }
        if (lVar21 != 0) {
          ppppplVar22[0x11] = (long ****)(lVar21 + 0x30);
        }
      }
      if ((char)bStack_b9 < '\0') {
        __ZdlPv(pplStack_d0);
      }
      goto LAB_10a170124;
    }
    uVar15 = 1;
    if ((long *****)0x2 < ppppplVar29) {
      uVar15 = (ulong)(((ulong)ppppplVar29 & (long)ppppplVar29 - 1U) != 0);
    }
    ppppplVar24 = (long *****)(uVar15 | (long)ppppplVar29 << 1);
    ppppplVar29 = (long *****)(long)(fVar30 / *(float *)(param_1 + 0x138));
    if (ppppplVar24 <= ppppplVar29) {
      ppppplVar24 = ppppplVar29;
    }
    if ((long)ppppplVar24 - 1U == 0) {
      ppppplVar24 = (long *****)0x2;
    }
    else if (((ulong)ppppplVar24 & (long)ppppplVar24 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    ppppplVar29 = *(long ******)(param_1 + 0x120);
    if (ppppplVar24 <= ppppplVar29) {
      if (ppppplVar24 < ppppplVar29) {
        ppppplVar14 = (long *****)
                      (long)((float)*(ulong *)(param_1 + 0x130) / *(float *)(param_1 + 0x138));
        if ((ppppplVar29 < (long *****)0x3) || (((ulong)ppppplVar29 & (long)ppppplVar29 - 1U) != 0))
        {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long *****)0x1 < ppppplVar14) {
          ppppplVar14 = (long *****)(1L << (-LZCOUNT((long)ppppplVar14 + -1) & 0x3fU));
        }
        if (ppppplVar24 <= ppppplVar14) {
          ppppplVar24 = ppppplVar14;
        }
        if (ppppplVar24 < ppppplVar29) {
          if (ppppplVar24 != (long *****)0x0) goto LAB_10a16f68c;
          lVar21 = *plVar1;
          *plVar1 = 0;
          if (lVar21 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(param_1 + 0x120) = 0;
          ppppplVar29 = (long *****)0x0;
        }
        else {
          ppppplVar29 = *(long ******)(param_1 + 0x120);
        }
      }
LAB_10a16f804:
      if (((ulong)ppppplVar29 & (long)ppppplVar29 - 1U) == 0) {
        ppppplVar24 = (long *****)((long)ppppplVar29 - 1U & (ulong)ppppplVar28);
      }
      else {
        ppppplVar24 = ppppplVar28;
        if (ppppplVar29 <= ppppplVar28) {
          uVar15 = 0;
          if (ppppplVar29 != (long *****)0x0) {
            uVar15 = (ulong)ppppplVar28 / (ulong)ppppplVar29;
          }
          ppppplVar24 = (long *****)((long)ppppplVar28 - uVar15 * (long)ppppplVar29);
        }
      }
      goto LAB_10a16f830;
    }
LAB_10a16f68c:
    if ((ulong)ppppplVar24 >> 0x3d == 0) {
      lVar21 = (long)ppppplVar24 << 3;
      __Znwm();
      lVar23 = *plVar1;
      *plVar1 = lVar21;
      if (lVar23 != 0) {
        __ZdlPv();
      }
      ppppplVar29 = (long *****)0x0;
      *(long ******)(param_1 + 0x120) = ppppplVar24;
      do {
        *(undefined8 *)(*plVar1 + (long)ppppplVar29 * 8) = 0;
        ppppplVar29 = (long *****)((long)ppppplVar29 + 1);
      } while (ppppplVar24 != ppppplVar29);
      plVar18 = *(long **)(param_1 + 0x128);
      ppppplVar29 = ppppplVar24;
      if (plVar18 != (long *)0x0) {
        ppppplVar14 = (long *****)plVar18[1];
        uVar15 = (long)ppppplVar24 - 1;
        if (((ulong)ppppplVar24 & uVar15) == 0) {
          ppppplVar14 = (long *****)((ulong)ppppplVar14 & uVar15);
        }
        else if (ppppplVar24 <= ppppplVar14) {
          uVar4 = 0;
          if (ppppplVar24 != (long *****)0x0) {
            uVar4 = (ulong)ppppplVar14 / (ulong)ppppplVar24;
          }
          ppppplVar14 = (long *****)((long)ppppplVar14 - uVar4 * (long)ppppplVar24);
        }
        *(long *)(*plVar1 + (long)ppppplVar14 * 8) = param_1 + 0x128;
        plVar11 = (long *)*plVar18;
        while (plVar11 != (long *)0x0) {
          ppppplVar19 = (long *****)plVar11[1];
          if (((ulong)ppppplVar24 & uVar15) == 0) {
            ppppplVar19 = (long *****)((ulong)ppppplVar19 & uVar15);
          }
          else if (ppppplVar24 <= ppppplVar19) {
            uVar4 = 0;
            if (ppppplVar24 != (long *****)0x0) {
              uVar4 = (ulong)ppppplVar19 / (ulong)ppppplVar24;
            }
            ppppplVar19 = (long *****)((long)ppppplVar19 - uVar4 * (long)ppppplVar24);
          }
          plVar17 = plVar11;
          if (ppppplVar19 != ppppplVar14) {
            lVar21 = *plVar1;
            if (*(long *)(lVar21 + (long)ppppplVar19 * 8) == 0) {
              *(long **)(lVar21 + (long)ppppplVar19 * 8) = plVar18;
              ppppplVar14 = ppppplVar19;
            }
            else {
              *plVar18 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar21 + (long)ppppplVar19 * 8);
              **(long **)(lVar21 + (long)ppppplVar19 * 8) = (long)plVar11;
              plVar17 = plVar18;
            }
          }
          plVar18 = plVar17;
          plVar11 = (long *)*plVar17;
        }
      }
      goto LAB_10a16f804;
    }
  }
  func_0x000109ffded8();
LAB_10a1701b0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1701b4);
  (*pcVar6)();
}



/* Entry: 10a1702b0; end: 10a170423;  */

ulong FUN_10a1702b0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 uStack_41;
  
  if (*(char *)((long)param_1 + 0x189) == '\x01') {
    FUN_10a160120();
    lVar8 = *param_1;
    lVar3 = param_1[1];
    if (lVar8 != lVar3) {
      uVar9 = param_2[1];
      puVar1 = (undefined8 *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar9 = (ulong)*(byte *)((long)param_2 + 0x17);
        puVar1 = param_2;
      }
      do {
        puVar4 = *(undefined8 **)(lVar8 + 0x10);
        for (puVar10 = *(undefined8 **)(lVar8 + 8); puVar10 != puVar4; puVar10 = puVar10 + 8) {
          bVar5 = *(byte *)((long)puVar10 + 0x17);
          uVar2 = puVar10[1];
          if (-1 < (char)bVar5) {
            uVar2 = (ulong)bVar5;
          }
          if (uVar2 == uVar9) {
            puVar6 = (undefined8 *)*puVar10;
            if (-1 < (char)bVar5) {
              puVar6 = puVar10;
            }
            _memcmp(puVar6,puVar1,uVar9);
            if ((int)puVar6 == 0) {
              uVar9 = (ulong)*(uint *)((long)puVar10 + 0x1c) + 0x2853a3c667 ^ 0x9e3779b9;
              lVar3 = puVar10[6];
              for (lVar8 = puVar10[5]; lVar8 != lVar3; lVar8 = lVar8 + 0x28) {
                puVar7 = &uStack_41;
                func_0x000107c2b05c(puVar7,lVar8);
                uVar9 = uVar9 + 0x9e3779b9;
                uVar9 = ((ulong)(puVar7 + uVar9 * 0x40 + 0x9e3779b9 + (uVar9 >> 2)) ^ uVar9) +
                        0x9e3779b9;
                uVar9 = ((ulong)*(uint *)(lVar8 + 0x18) + 0x9e3779b9 + uVar9 * 0x40 + (uVar9 >> 2) ^
                        uVar9) + 0x9e3779b9;
                uVar9 = ((ulong)*(uint *)(lVar8 + 0x1c) + 0x9e3779b9 + uVar9 * 0x40 + (uVar9 >> 2) ^
                        uVar9) + 0x9e3779b9;
                uVar9 = ((ulong)*(uint *)(lVar8 + 0x20) + 0x9e3779b9 + uVar9 * 0x40 + (uVar9 >> 2) ^
                        uVar9) + 0x9e3779b9;
                uVar9 = (ulong)*(uint *)(lVar8 + 0x24) + 0x9e3779b9 + uVar9 * 0x40 + (uVar9 >> 2) ^
                        uVar9;
              }
              return uVar9;
            }
          }
        }
        lVar8 = lVar8 + 0x80;
      } while (lVar8 != lVar3);
    }
  }
  return 0;
}



/* Entry: 10a170424; end: 10a17058b;  */

void FUN_10a170424(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  long lStack_58;
  long lStack_50;
  
  if (*(long *)(param_1 + 400) != 0) {
    FUN_10a187130(&lStack_58,param_5 / 3);
    if (2 < param_5) {
      uVar4 = 0;
      uVar5 = 0;
      puVar6 = (undefined4 *)(param_4 + 0x18);
      lVar7 = 0x3c;
      do {
        if ((((param_5 <= uVar4) || (param_5 <= uVar4 + 1)) || (param_5 <= uVar4 + 2)) ||
           ((ulong)(lStack_50 - lStack_58 >> 6) <= uVar5)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a170570);
          (*pcVar3)();
        }
        puVar2 = (undefined4 *)(lStack_58 + lVar7);
        lVar7 = lVar7 + 0x40;
        uVar4 = uVar4 + 3;
        uVar9 = puVar6[4];
        uVar8 = puVar6[5];
        uVar11 = puVar6[2];
        uVar10 = puVar6[3];
        uVar13 = *puVar6;
        uVar12 = puVar6[1];
        uVar15 = puVar6[-2];
        uVar14 = puVar6[-1];
        uVar17 = puVar6[-4];
        uVar16 = puVar6[-3];
        puVar1 = puVar6 + -6;
        uVar18 = puVar6[-5];
        puVar6 = puVar6 + 0xc;
        uVar5 = uVar5 + 1;
        puVar2[-0xf] = *puVar1;
        puVar2[-0xe] = uVar15;
        puVar2[-0xd] = uVar11;
        puVar2[-0xc] = 0;
        puVar2[-0xb] = uVar18;
        puVar2[-10] = uVar14;
        puVar2[-9] = uVar10;
        puVar2[-8] = 0;
        puVar2[-7] = uVar17;
        puVar2[-6] = uVar13;
        puVar2[-5] = uVar9;
        puVar2[-4] = 0;
        puVar2[-3] = uVar16;
        puVar2[-2] = uVar12;
        puVar2[-1] = uVar8;
        *puVar2 = 0x3f800000;
      } while (param_5 / 3 != uVar5);
    }
    FUN_10a17058c(param_1,param_2,param_3,*(undefined8 *)(param_1 + 400),lStack_58,
                  lStack_50 - lStack_58 >> 6);
    if (lStack_58 != 0) {
      lStack_50 = lStack_58;
      __ZdlPv();
    }
  }
  return;
}


