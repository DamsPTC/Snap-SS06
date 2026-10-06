/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8a5b00; end: 10b8a5c3b;  */

undefined8 * FUN_10b8a5b00(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_28;
  
  puVar1 = param_1;
  func_0x00010b8a69f4();
  uStack_28 = extraout_x8;
  FUN_10b8a5780();
  uStack_48 = param_1[3];
  pcStack_58 = FUN_10b8a64c4;
  ppuStack_50 = &PTR_FUN_110d70be8;
  FUN_10b8a2cb0(puVar1 + 0xc,&pcStack_58);
  func_0x00010b8a6a98(ppuStack_50);
  *(undefined1 *)((long)puVar1 + 0x92) = 1;
  puVar1 = (undefined8 *)*puVar1;
  func_0x00010b8a69e0(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_10b8a5780();
  func_0x00010b8a6a54();
  return (undefined8 *)*puVar1;
}



/* Entry: 10b8a5c3c; end: 10b8a5c6b;  */

undefined8 FUN_10b8a5c3c(undefined8 *param_1)

{
  FUN_10b8a5780();
  return *param_1;
}



/* Entry: 10b8a5c6c; end: 10b8a608f;  */

long **** FUN_10b8a5c6c(long ****param_1,long ****param_2,long *param_3,ulong *param_4)

{
  ulong *puVar1;
  int *piVar2;
  long ***ppplVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  long ****pppplVar7;
  ulong *puVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  undefined8 *puVar11;
  code ****ppppcVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  ulong *puVar15;
  code ***pppcVar16;
  ulong *puVar17;
  code **ppcStack_248;
  code ***pppcStack_240;
  code ***pppcStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined4 uStack_21c;
  code ***pppcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1c8;
  ulong *puStack_1c0;
  ulong *puStack_1b8;
  code ***pppcStack_1b0;
  code ***pppcStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  code ***pppcStack_190;
  ulong *puStack_188;
  ulong uStack_180;
  undefined1 *puStack_178;
  long ***ppplStack_168;
  long ***ppplStack_160;
  ulong uStack_158;
  ulong auStack_150 [2];
  code ***pppcStack_140;
  undefined **appuStack_138 [5];
  code ***pppcStack_110;
  code **ppcStack_108;
  ulong uStack_100;
  undefined1 *puStack_f8;
  ulong uStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [48];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  short sStack_7e;
  undefined1 uStack_7c;
  undefined8 uStack_70;
  
  pppplVar9 = param_1;
  plVar14 = param_3;
  func_0x00010b8a69f4();
  ppplStack_160 = (long ***)0x0;
  uStack_158 = 0;
  auStack_150[0] = 0;
  pppplVar7 = &ppplStack_160;
  puVar8 = (ulong *)*plVar14;
  puVar15 = (ulong *)plVar14[1];
  uVar6 = (long)puVar15 - (long)puVar8 == 0;
  uStack_70 = extraout_x8;
  if (!(bool)uVar6) {
    ppppcVar12 = (code ****)((long)puVar15 - (long)puVar8 >> 4);
    if ((ulong)ppppcVar12 >> 0x3c != 0) goto LAB_10b8a608c;
    FUN_10b8a15f0(&pppcStack_110,ppppcVar12,0,auStack_150);
    pppcVar16 = (code ***)((long)ppcStack_108 - (uStack_158 - (long)ppplStack_160));
    _memcpy(pppcVar16);
    ppplVar3 = ppplStack_160;
    ppplStack_160 = (long ***)pppcVar16;
    func_0x00010b8a6a5c(ppplVar3,uStack_100);
    puVar8 = (ulong *)*param_3;
    puVar15 = (ulong *)param_3[1];
  }
  for (; puVar8 != puVar15; puVar8 = puVar8 + 2) {
    FUN_10b8a3c40(param_1[1],puVar8);
    if (uStack_158 < auStack_150[0]) {
      func_0x00010b8a6ab0();
      uStack_158 = extraout_x8_00;
    }
    else {
      pppplVar7 = &ppplStack_160;
      FUN_10b8a152c(pppplVar7,((long)(uStack_158 - (long)ppplStack_160) >> 4) + 1);
      FUN_10b8a15f0(&pppcStack_110,pppplVar7,(long)(uStack_158 - (long)ppplStack_160) >> 4,
                    auStack_150);
      func_0x00010b8a6ab0(uStack_100);
      pppcVar16 = (code ***)((long)ppcStack_108 - (uStack_158 - (long)ppplStack_160));
      uStack_100 = extraout_x8_01;
      _memcpy(pppcVar16);
      ppplVar3 = ppplStack_160;
      puStack_178 = puStack_f8;
      uStack_180 = uStack_100;
      ppplStack_160 = (long ***)pppcVar16;
      func_0x00010b8a6a5c(ppplVar3);
      uStack_158 = uStack_180;
    }
  }
  puStack_188 = param_4;
  FUN_10b8a3c40(param_1[1],param_2);
  puVar8 = (ulong *)0x40;
  __Znwm();
  ppcStack_108 = (code **)uStack_158;
  pppcStack_110 = (code ***)ppplStack_160;
  uStack_100 = auStack_150[0];
  ppplStack_160 = (long ***)0x0;
  uStack_158 = 0;
  auStack_150[0] = 0;
  pppcStack_190 = (code ***)param_2;
  func_0x00010b8a9dd4();
  FUN_10b8a1a98(&pppcStack_110);
  puVar17 = (ulong *)*param_3;
  puVar15 = (ulong *)param_3[1];
  puVar1 = puVar8 + 1;
  puStack_178 = (undefined1 *)0x1;
  uStack_180 = 0;
  for (; pppplVar7 = (long ****)pppcStack_190, uVar6 = puVar17 == puVar15, !(bool)uVar6;
      puVar17 = puVar17 + 2) {
    pppcVar16 = (code ***)param_1[1];
    FUN_10b8a3c40(pppcVar16,puVar17);
    ppcStack_108 = (code **)*puVar17;
    if (ppcStack_108 != (code **)0x0) {
      piVar2 = (int *)((long)ppcStack_108 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uStack_7f = *(undefined1 *)((long)puVar17 + 0xd);
    uStack_100 = 0;
    puStack_e8 = puStack_178;
    uStack_f0 = uStack_180;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    sStack_7e = (ushort)((code ***)puVar8[2] != pppcVar16) << 8;
    uStack_7c = 1;
    ppplStack_168 = (long ***)pppcVar16;
    pppcStack_110 = pppcVar16;
    puStack_f8 = auStack_e0;
    puStack_98 = puVar8;
    func_0x0001081044e0(0);
    func_0x000107c278f8(0);
    pppcStack_140 = (code ***)FUN_10b8a6370;
    appuStack_138[0] = &PTR_DAT_110a21c28;
    switch((int)puVar17[1]) {
    case 0:
      uVar13 = 0x10b8a5864;
      break;
    case 1:
      uVar13 = 0x10b8a5a68;
      break;
    case 2:
      uVar13 = 0x10b8a5910;
      break;
    case 3:
      uVar13 = 0x10b8a5bb0;
      break;
    case 4:
      func_0x00010b8a59b4(&pppcStack_110);
    default:
      goto LAB_10b8a5f44;
    }
    func_0x00010b8a6a54(&pppcStack_110,uVar13);
LAB_10b8a5f44:
    func_0x0001081034b0(param_1 + 4,&ppplStack_168);
    func_0x0001081034d8();
    (*(code *)*appuStack_138[0])(appuStack_138);
    FUN_10b8a24a8(&pppcStack_110);
  }
  pppplVar9 = (long ****)param_1[1];
  FUN_10b8a3c40(pppplVar9,pppcStack_190);
  ppcStack_108 = (code **)*pppplVar7;
  if ((long ***)ppcStack_108 != (long ***)0x0) {
    ppplVar3 = (long ***)(ppcStack_108 + 1);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppplVar3,0x10);
      if (bVar5) {
        *(int *)ppplVar3 = *(int *)ppplVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uStack_7f = (undefined1)puVar8[7];
  uStack_100 = *puStack_188;
  if (uStack_100 != 0) {
    plVar14 = (long *)(uStack_100 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = *plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puStack_f8 = auStack_e0;
  puStack_e8 = puStack_178;
  uStack_f0 = uStack_180;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 1;
  sStack_7e = 0;
  uStack_7c = 1;
  pppcStack_140 = (code ***)pppplVar9;
  pppcStack_110 = (code ***)pppplVar9;
  puStack_98 = puVar8;
  func_0x0001081034b0(param_1 + 4,&pppcStack_140);
  ppppcVar12 = &pppcStack_110;
  func_0x0001081034d8();
  FUN_10b8a24a8(&pppcStack_110);
  func_0x0001081044e0(0);
  func_0x000107c278f8(0);
  param_1 = (long ****)pppcStack_140;
  func_0x0001081044e0(puVar8);
  pppplVar9 = &ppplStack_160;
  FUN_10b8a1a98();
  func_0x00010b8a69e0(uStack_70);
  if ((bool)uVar6) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10b8a608c:
  FUN_10b8a15e4();
  pcStack_198 = FUN_10b8a6090;
  puStack_1c0 = puVar8;
  puStack_1b8 = puVar15;
  pppcStack_1b0 = (code ***)pppplVar7;
  pppcStack_1a8 = (code ***)param_1;
  puStack_1a0 = &stack0xfffffffffffffff0;
  func_0x00010b8a69f4();
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_1c8 = extraout_x8_02;
  func_0x00010b8a6a3c(&UNK_10f7ca68b);
  uStack_21c = 0;
  func_0x00010b8a69c0();
  func_0x00010b8a6a34();
  func_0x00010b8a6a3c("transform");
  uStack_21c = 0;
  func_0x00010b8a69c0();
  func_0x00010b8a6a34();
  func_0x00010b8a6a3c(&DAT_10f3eaddb);
  uStack_21c = 5;
  func_0x00010b8a69c0();
  func_0x00010b8a6a34();
  func_0x00010b8a6a3c(&DAT_10f3eade8);
  uStack_21c = 5;
  func_0x00010b8a69c0();
  func_0x00010b8a6a34();
  func_0x00010b8a6a3c(&DAT_10f2c4aed);
  uStack_21c = 1;
  func_0x00010b8a69c0();
  func_0x00010b8a6a34();
  func_0x00010b8a6a3c(&DAT_10f2c4af4);
  uStack_21c = 1;
  func_0x00010b8a69c0();
  func_0x00010b8a6a34();
  func_0x00010b8a6a3c(&DAT_10f2c46ae);
  uStack_21c = 1;
  func_0x00010b8a69c0();
  func_0x00010b8a6a34();
  func_0x00010b8a6a3c(&UNK_10f7ca69b);
  pppplVar10 = pppplVar9 + 4;
  pppplVar7 = pppplVar9;
  (*(code *)(*pppplVar9)[0xc])(pppplVar9,&pppcStack_218,&uStack_210,ppppcVar12);
  func_0x00010b8a6a34();
  pppcStack_218 = (code ***)pppplVar7;
  func_0x0001081034b0(pppplVar10,&pppcStack_218);
  func_0x00010b8a6adc();
  pcStack_1e8 = FUN_10b8b0994;
  uStack_1f0 = extraout_x9;
  FUN_10b8a2cb0(pppplVar10 + 0xc,auStack_1f8);
  func_0x00010b8a6a98(uStack_1f0);
  pppcVar16 = pppcStack_218;
  puVar11 = &uStack_210;
  func_0x0001080ceaec();
  func_0x00010b8a69e0(uStack_1c8);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    pppcStack_238 = pppcVar16;
    pcStack_228 = FUN_10b8a6210;
    ppcStack_248 = (code **)puVar11[1];
    pppplVar7 = (long ****)&ppcStack_248;
    pppcStack_240 = (code ***)pppplVar9;
    ppuStack_230 = &puStack_1a0;
    func_0x00010b8ad890(pppplVar7,puVar11 + 4);
    *(undefined1 *)(puVar11 + 0xc) = 1;
    return pppplVar7;
  }
  return (long ****)pppcVar16;
}



/* Entry: 10b8a6090; end: 10b8a620f;  */

long * FUN_10b8a6090(long *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined4 uStack_8c;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_38;
  
  func_0x00010b8a69f4();
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_38 = extraout_x8;
  func_0x00010b8a6a3c(&UNK_10f7ca68b);
  uStack_8c = 0;
  func_0x00010b8a69c0();
  func_0x00010b8a6a34();
  func_0x00010b8a6a3c("transform");
  uStack_8c = 0;
  func_0x00010b8a69c0();
  func_0x00010b8a6a34();
  func_0x00010b8a6a3c(&DAT_10f3eaddb);
  uStack_8c = 5;
  func_0x00010b8a69c0();
  func_0x00010b8a6a34();
  func_0x00010b8a6a3c(&DAT_10f3eade8);
  uStack_8c = 5;
  func_0x00010b8a69c0();
  func_0x00010b8a6a34();
  func_0x00010b8a6a3c(&DAT_10f2c4aed);
  uStack_8c = 1;
  func_0x00010b8a69c0();
  func_0x00010b8a6a34();
  func_0x00010b8a6a3c(&DAT_10f2c4af4);
  uStack_8c = 1;
  func_0x00010b8a69c0();
  func_0x00010b8a6a34();
  func_0x00010b8a6a3c(&DAT_10f2c46ae);
  uStack_8c = 1;
  func_0x00010b8a69c0();
  func_0x00010b8a6a34();
  func_0x00010b8a6a3c(&UNK_10f7ca69b);
  plVar2 = param_1 + 4;
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x60))(param_1,&plStack_88,&uStack_80,param_2);
  func_0x00010b8a6a34();
  plStack_88 = plVar1;
  func_0x0001081034b0(plVar2,&plStack_88);
  func_0x00010b8a6adc();
  pcStack_58 = FUN_10b8b0994;
  uStack_60 = extraout_x9;
  FUN_10b8a2cb0(plVar2 + 0xc,auStack_68);
  func_0x00010b8a6a98(uStack_60);
  plVar1 = plStack_88;
  puVar3 = &uStack_80;
  func_0x0001080ceaec();
  func_0x00010b8a69e0(uStack_38);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  plStack_a8 = plVar1;
  pcStack_98 = FUN_10b8a6210;
  lStack_b8 = puVar3[1];
  plVar1 = &lStack_b8;
  plStack_b0 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010b8ad890(plVar1,puVar3 + 4);
  *(undefined1 *)(puVar3 + 0xc) = 1;
  return plVar1;
}



/* Entry: 10b8a6210; end: 10b8a6247;  */

void FUN_10b8a6210(long param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 8);
  func_0x00010b8ad890(&uStack_28,param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 10b8a6248; end: 10b8a627f;  */

void FUN_10b8a6248(long param_1,undefined4 param_2)

{
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_20 = *(undefined8 *)(param_1 + 8);
  uStack_18 = param_2;
  FUN_10b8a0da4(&uStack_20,param_1 + 0x20,param_1 + 0x58);
  return;
}



/* Entry: 10b8a6280; end: 10b8a628f;  */

void FUN_10b8a6280(long param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  undefined8 *unaff_x19;
  
  func_0x000108106768(param_1 + 0x50);
  if (!(bool)in_ZR) {
    uVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x0001081063c0();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *unaff_x19 = uVar1;
    func_0x0001080ceeb8();
  }
  return;
}



/* Entry: 10b8a6290; end: 10b8a6357;  */

long * FUN_10b8a6290(long *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010b8a6a04();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    func_0x0001080cfa50();
  }
  return param_1;
}



/* Entry: 10b8a6358; end: 10b8a636f;  */

void FUN_10b8a6358(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  return;
}



/* Entry: 10b8a6370; end: 10b8a637f;  */

void FUN_10b8a6370(undefined8 param_1,undefined8 param_2)

{
  func_0x000105277f8c(param_2);
  func_0x00010b8a6ad0();
  FUN_10b8a63a0();
  return;
}



/* Entry: 10b8a6380; end: 10b8a639f;  */

void FUN_10b8a6380(void)

{
  func_0x00010b8a6ad0();
  FUN_10b8a63a0();
  return;
}



/* Entry: 10b8a63a0; end: 10b8a63ab;  */

void FUN_10b8a63a0(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8a63ac; end: 10b8a641f;  */

void FUN_10b8a63ac(void)

{
  func_0x00010b8a6ad0();
  func_0x0001080cfa50();
  return;
}



/* Entry: 10b8a6420; end: 10b8a64c3;  */

bool FUN_10b8a6420(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = 0;
  uVar4 = param_3 >> 7;
  uVar2 = param_1[3];
  lVar3 = *param_1;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    uVar6 = *(ulong *)(lVar3 + uVar4);
    uVar5 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar7 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar4 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      *param_4 = uVar7;
      if (*(long *)(param_1[1] + uVar7 * 0xa0) == *param_2) goto LAB_10b8a64b8;
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
LAB_10b8a64b8:
  return uVar5 != 0;
}



/* Entry: 10b8a64c4; end: 10b8a6773;  */

/* WARNING: Possible PIC construction at 0x00010b8a6604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8a6724: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8a6608) */
/* WARNING: Removing unreachable block (ram,0x00010b8a6614) */
/* WARNING: Removing unreachable block (ram,0x00010b8a6728) */
/* WARNING: Removing unreachable block (ram,0x00010b8a6730) */
/* WARNING: Removing unreachable block (ram,0x00010b8a6740) */

undefined8 * FUN_10b8a64c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 **ppuVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 **ppuVar12;
  undefined8 uVar13;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 *puStack_100;
  long *plStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 auStack_b0 [8];
  undefined8 uStack_70;
  
  ppuVar3 = &puStack_100;
  ppuVar12 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar10 = param_3;
  func_0x00010b8a69f4();
  uVar4 = (*(byte *)(puVar10 + 1) & 0xfe) == 2;
  if ((bool)uVar4) {
    func_0x00010b8a69e0(extraout_x8);
    if ((bool)uVar4) {
      *param_1 = 1;
      FUN_10b9a8f04(param_1 + 1,param_3);
      return param_1;
    }
  }
  else {
    if (param_2[0x3e] != 0) {
      puVar10 = param_2;
      if ((undefined8 *)param_2[0x25] != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)param_2[0x25];
      }
      puStack_b8 = (undefined8 *)0x8;
      puStack_c0 = (undefined8 *)0x0;
      puVar5 = puVar10;
      puStack_c8 = auStack_b0;
      FUN_10b8c6828();
      if ((undefined8 *)0x8 < puVar5) {
        puVar6 = puVar5;
        FUN_10b8a6774();
        puVar11 = puStack_c8;
        for (lVar8 = 0; (long)puStack_c0 * 8 - lVar8 != 0; lVar8 = lVar8 + 8) {
          *(undefined8 *)((long)puVar6 + lVar8) = *(undefined8 *)((long)puStack_c8 + lVar8);
          *(undefined8 *)((long)puStack_c8 + lVar8) = 0;
        }
        uStack_e0 = 0;
        uStack_d8 = 0;
        ppuStack_f0 = &puStack_c8;
        puStack_e8 = puVar5;
        ppuStack_d0 = &puStack_c8;
        func_0x00010b8a67c0(&uStack_e0);
        plStack_f8 = (long *)0x0;
        if (puVar11 != (undefined8 *)0x0) {
          uVar13 = 0x10b8a6608;
          ppuVar3 = &puStack_100;
          puVar10 = puStack_c0;
          goto FUN_10b8a6790;
        }
        puStack_c8 = puVar6;
        puStack_b8 = puVar5;
        func_0x00010b8a67fc(&plStack_f8);
      }
      puStack_100 = auStack_b0;
      for (puVar11 = (undefined8 *)0x0; puVar11 != puVar5;
          puVar11 = (undefined8 *)((long)puVar11 + 1)) {
        puVar6 = puVar10;
        FUN_10b8c685c(puVar10,puVar11);
        func_0x0001080da434();
        plVar7 = (long *)0x28;
        __Znwm();
        plVar9 = plVar7 + 1;
        *plVar9 = 1;
        plVar7[2] = (long)puVar11;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)&PTR_FUN_110d71148;
        plVar7[4] = (long)puVar6;
        plStack_f8 = plVar7;
        if (puStack_c0 == puStack_b8) {
          FUN_10b8a6830(&uStack_e0,&puStack_c8,puStack_c8 + (long)puStack_c0,&plStack_f8);
        }
        else {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar2) {
              *plVar9 = *plVar9 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          puStack_c8[(long)puStack_c0] = plVar7;
          puStack_c0 = (undefined8 *)((long)puStack_c0 + 1);
        }
        if (plStack_f8 != (long *)0x0) {
          plVar7 = plStack_f8 + 1;
          do {
            lVar8 = *plVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = lVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar8 + -1 == 0) {
            (**(code **)(*plStack_f8 + 8))();
          }
        }
        func_0x0001080d289c(0);
      }
      func_0x00010b8ae050(param_1,param_2[0x3e],param_3,*(undefined8 *)(param_4 + 0x10),puStack_c8,
                          puStack_c0,0);
      uVar13 = 0x10b8a6728;
      puVar11 = puStack_c8;
      puVar10 = puStack_c0;
      goto FUN_10b8a6790;
    }
    puVar10 = (undefined8 *)&UNK_10f7ca6ae;
    uStack_70 = extraout_x8;
    FUN_10b99f5f8(&puStack_c8);
    *param_1 = 2;
    param_1[1] = puStack_c8;
    puStack_c8 = (undefined8 *)0x0;
    param_2 = (undefined8 *)0x0;
    func_0x000104bda960();
    func_0x00010b8a69e0(uStack_70);
    if ((bool)uVar4) {
      return param_2;
    }
  }
  ___stack_chk_fail();
  if ((ulong)param_2 >> 0x3c == 0) {
    param_2 = (undefined8 *)((long)param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2);
    return param_2;
  }
  pcStack_108 = FUN_10b8a6774;
  uVar13 = 0x10b8a6790;
  puStack_110 = (undefined1 *)ppuVar12;
  _abort();
  ppuVar3 = (undefined8 **)&puStack_110;
  puVar11 = param_2;
  ppuVar12 = &puStack_110;
FUN_10b8a6790:
  *(undefined8 **)((long)ppuVar3 + -0x20) = param_3;
  *(undefined8 **)((long)ppuVar3 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar12;
  *(undefined8 *)((long)ppuVar3 + -8) = uVar13;
  for (; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)((long)puVar10 + -1)) {
    func_0x0001078d39c4();
    puVar11 = puVar11 + 1;
  }
  return puVar11;
}



/* Entry: 10b8a6774; end: 10b8a678f;  */

void FUN_10b8a6774(ulong param_1,long param_2)

{
  if (param_1 >> 0x3c != 0) {
    _abort();
    for (; param_2 != 0; param_2 = param_2 + -1) {
      func_0x0001078d39c4();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_1 << 3);
  return;
}



/* Entry: 10b8a6790; end: 10b8a682f;  */

void FUN_10b8a6790(long param_1,long param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    func_0x0001078d39c4(param_1);
    param_1 = param_1 + 8;
  }
  return;
}



/* Entry: 10b8a6830; end: 10b8a69b3;  */

void FUN_10b8a6830(long *param_1,ulong *param_2,undefined8 *param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_80;
  ulong *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong *puStack_58;
  
  uVar11 = param_2[2];
  uVar1 = param_2[1] + 1;
  if (uVar1 - uVar11 <= 0xfffffffffffffff - uVar11) {
    if (uVar11 >> 0x3d == 0) {
      uVar9 = (uVar11 << 3) / 5;
    }
    else {
      uVar9 = uVar11 << 3;
      if (4 < uVar11 >> 0x3d) {
        uVar9 = 0xffffffffffffffff;
      }
    }
    uVar11 = *param_2;
    if (0xffffffffffffffe < uVar9) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    uVar6 = uVar1;
    FUN_10b8a6774();
    uVar9 = *param_2;
    uVar3 = param_2[1];
    for (lVar7 = 0; puVar8 = (undefined8 *)(uVar9 + lVar7), puVar8 != param_3; lVar7 = lVar7 + 8) {
      *(undefined8 *)(uVar6 + lVar7) = *puVar8;
      *puVar8 = 0;
    }
    lVar10 = *param_4;
    if (lVar10 != 0) {
      plVar2 = (long *)(lVar10 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *(long *)(uVar6 + lVar7) = lVar10;
    for (puVar8 = param_3; lVar7 = lVar7 + 8, puVar8 != (undefined8 *)(uVar9 + uVar3 * 8);
        puVar8 = puVar8 + 1) {
      *(undefined8 *)(uVar6 + lVar7) = *puVar8;
      *puVar8 = 0;
    }
    uStack_68 = 0;
    uStack_60 = 0;
    puStack_78 = param_2;
    uStack_70 = uVar1;
    puStack_58 = param_2;
    func_0x00010b8a67c0(&uStack_68);
    uStack_80 = 0;
    if ((uVar9 != 0) && (func_0x00010b8a6790(uVar9,param_2[1]), param_2 + 3 != (ulong *)*param_2)) {
      __ZdlPv();
    }
    *param_2 = uVar6;
    param_2[1] = param_2[1] + 1;
    param_2[2] = uVar1;
    func_0x00010b8a67fc(&uStack_80);
    *param_1 = (long)param_3 + (*param_2 - uVar11);
    return;
  }
  _abort();
  return;
}



/* Entry: 10b8a69b4; end: 10b8a6b77;  */

void FUN_10b8a69b4(void)

{
  return;
}



/* Entry: 10b8a6b78; end: 10b8a6c0b;  */

void FUN_10b8a6b78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x00010b8a8e78();
  lVar1 = param_1 + 0x58;
  func_0x00010b8a6be4(lVar1,&uStack_28);
  if (*(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x70) == lVar1) {
    FUN_10b8a6c0c(param_1 + 0x58,&uStack_28);
  }
  FUN_10b8a6c30();
  __ZNSt3__15mutex6unlockEv(param_1 + 0xc0);
  return;
}



/* Entry: 10b8a6c0c; end: 10b8a6c2f;  */

long FUN_10b8a6c0c(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b8a7c2c(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b8a6c30; end: 10b8a6cab;  */

long FUN_10b8a6c30(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10b8a7580();
    lVar2 = uVar1 + 0x30;
  }
  else {
    lVar2 = param_1;
    FUN_10b8a75bc();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x30;
}



/* Entry: 10b8a6cac; end: 10b8a6ccf;  */

long FUN_10b8a6cac(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  func_0x00010b8a803c(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b8a6cd0; end: 10b8a6d17;  */

long FUN_10b8a6cd0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long extraout_x8;
  
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    func_0x00010b8a8e24();
    *(undefined8 *)(extraout_x8 + 0x10) = *param_2;
    lVar1 = extraout_x8 + 0x30;
  }
  else {
    lVar1 = param_1;
    FUN_10b8a78bc();
  }
  *(long *)(param_1 + 8) = lVar1;
  return lVar1 + -0x30;
}



/* Entry: 10b8a6d18; end: 10b8a6ea7;  */

void FUN_10b8a6d18(void)

{
  undefined8 extraout_x8;
  long unaff_x20;
  
  func_0x00010b8a8cc0();
  func_0x00010b8a8e78();
  func_0x00010b8a8ef4(extraout_x8);
  func_0x00010b8a6d54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x20 + 0xc0);
  return;
}



/* Entry: 10b8a6ea8; end: 10b8a6ef7;  */

long FUN_10b8a6ea8(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  func_0x00010b8a8cc0();
  FUN_10b8a8434();
  func_0x00010b8a8ef4();
  plVar1 = param_1;
  FUN_10b8a8450();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b8a6ef8; end: 10b8a740b;  */

long * FUN_10b8a6ef8(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                    undefined8 param_5,undefined1 *param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x8;
  undefined *puVar11;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *unaff_x20;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_288 [8];
  long lStack_280;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 auStack_258 [2];
  undefined8 uStack_248;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined **ppuStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *apuStack_1c8 [5];
  undefined8 uStack_1a0;
  undefined8 *apuStack_198 [5];
  undefined **ppuStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 auStack_110 [50];
  undefined1 uStack_de;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  char cStack_78;
  undefined8 uStack_70;
  
  func_0x00010b8a8cc0();
  func_0x00010b8a8b84();
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_70 = extraout_x8;
  FUN_10b8a74c8();
  lStack_218 = *param_3;
  lVar19 = *param_1;
  plVar9 = param_3;
  if (lStack_218 != lVar19) {
    (**(code **)(*(long *)*unaff_x20 + 0x48))(&ppuStack_170,(long *)*unaff_x20,param_3);
    func_0x000104bdcf6c(&lStack_1e8,&ppuStack_170);
    func_0x000104bfe1e0(&ppuStack_170);
    FUN_10b8a74c8();
    plVar9 = (long *)0x113846718;
  }
  func_0x00010811ffc4(&lStack_1e8,plVar9);
  uVar18 = lStack_1e0 - lStack_1e8 >> 3;
  uStack_220 = param_4;
  if (uVar18 < 2) {
    uVar17 = unaff_x20[3];
    uVar2 = unaff_x20[1];
    (**(code **)(*(long *)*unaff_x20 + 0x58))();
    FUN_10b8abd28(&ppuStack_170,uVar17,uVar2);
    func_0x00010b8abe60(&ppuStack_170);
    if (lStack_150 != 0) {
      plVar9 = (long *)(lStack_150 + 8);
      do {
        lVar20 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 + -1 == 0) {
        func_0x00010b8a8d18();
      }
    }
    if (lStack_158 != 0) {
      plVar9 = (long *)(lStack_158 + 8);
      do {
        lVar20 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 + -1 == 0) {
        func_0x00010b8a8d18();
      }
    }
    if (lStack_160 != 0) {
      plVar9 = (long *)(lStack_160 + 8);
      do {
        lVar20 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 + -1 == 0) {
        func_0x00010b8a8d18();
      }
    }
    FUN_10b8a7aec(lStack_168);
  }
  else {
    while (uVar18 = uVar18 - 1, uVar18 != 0) {
      lVar20 = lStack_1e8 + uVar18 * 8;
      func_0x00010b8a6d54(&ppuStack_d8);
      ppuVar1 = ppuStack_d8;
      ppuVar7 = ppuStack_d8 + 4;
      func_0x0001081053cc();
      puVar11 = ppuVar1[4];
      puVar12 = ppuVar1[7];
      ppuStack_170 = ppuVar7;
      lStack_168 = lVar20;
      while (ppuStack_170 != (undefined **)(puVar11 + (long)puVar12)) {
        func_0x0001081034b0();
        func_0x0001081034d8();
        func_0x00010810544c(&ppuStack_170);
      }
      if (((ulong)ppuStack_d8[0xd] & 1) != 0) {
        *param_6 = 1;
      }
      if (ppuStack_d8[0xb] != (undefined *)0x0) {
        FUN_10b8a6290(param_5);
      }
      func_0x0001080d5cdc(ppuStack_d8);
    }
  }
  uVar6 = lStack_218 == lVar19;
  if (!(bool)uVar6) {
    uStack_d0 = unaff_x20[1];
    uStack_c0 = unaff_x20[2];
    ppuStack_d8 = &PTR_FUN_110d70b40;
    lStack_c8 = unaff_x20[0x17];
    if ((lStack_c8 != 0) && (*(long *)(lStack_c8 + 0x10) != 0)) {
      plVar9 = (long *)(*(long *)(lStack_c8 + 0x10) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puStack_b8 = &UNK_10dd5b8b0;
    uStack_b0 = 0;
    plStack_a8 = (long *)0x0;
    lStack_a0 = 0;
    cStack_78 = '\0';
    lStack_88 = 0;
    lStack_80 = 0;
    uStack_90 = 0;
    (**(code **)(*(long *)*unaff_x20 + 0x50))((long *)*unaff_x20,param_3,&ppuStack_d8);
    if (lStack_88 != 0) {
      func_0x000108103cc0(uStack_220,&lStack_88);
    }
    if (lStack_80 != 0) {
      FUN_10b8a6290(param_5,&lStack_80);
    }
    if (cStack_78 == '\x01') {
      *param_6 = 1;
    }
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    plVar9 = plStack_a8;
    func_0x0001080d10c8(&uStack_200);
    ppuVar7 = &puStack_b8;
    func_0x0001081053cc();
    ppuVar1 = (undefined **)(puStack_b8 + lStack_a0);
    ppuStack_210 = ppuVar7;
    plStack_208 = plVar9;
    while (plVar9 = plStack_208, uVar6 = ppuStack_210 == ppuVar1, !(bool)uVar6) {
      func_0x000108105aa0(&ppuStack_170,plStack_208 + 1);
      puVar8 = unaff_x20 + 0xb;
      plVar10 = plVar9;
      func_0x00010b8a6be4();
      if ((undefined8 *)(unaff_x20[0xb] + unaff_x20[0xe]) != puVar8) {
        lVar19 = (plVar10[2] - plVar10[1]) / 0x30;
        lVar20 = lVar19 * 0x30;
        for (; lVar19 != 0; lVar19 = lVar19 + -1) {
          uStack_1a0 = *(undefined8 *)(plVar10[1] + lVar20 + -0x30);
          (**(code **)(*(long *)(plVar10[1] + lVar20 + -0x28) + 0x18))(apuStack_198);
          func_0x00010b8a2bec(&ppuStack_170,&uStack_1a0,0);
          (*(code *)*apuStack_198[0])(apuStack_198);
          lVar20 = lVar20 + -0x30;
        }
        func_0x00010b8a2dc0(&ppuStack_170,1);
        uStack_de = 1;
      }
      puVar8 = unaff_x20 + 0x11;
      FUN_10b8a80a4(puVar8,plVar9);
      lVar19 = 0;
      uVar18 = (ulong)puVar8 >> 7;
      uVar13 = unaff_x20[0x14];
      while( true ) {
        uVar18 = uVar18 & uVar13;
        uVar14 = *(ulong *)(unaff_x20[0x11] + uVar18);
        uVar15 = uVar14 ^ ((ulong)puVar8 & 0x7f) * 0x101010101010101;
        for (uVar15 = uVar15 + 0xfefefefefefefeff & (uVar15 ^ 0xffffffffffffffff) &
                      0x8080808080808080; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
          uVar16 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = uVar18 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar13;
          if (*(long *)(unaff_x20[0x12] + uVar16 * 0x20) == *plVar9) {
            if (uVar13 != uVar16) {
              lVar19 = unaff_x20[0x12] + uVar16 * 0x20;
              puVar3 = *(undefined8 **)(lVar19 + 0x10);
              for (puVar8 = *(undefined8 **)(lVar19 + 8); puVar8 != puVar3; puVar8 = puVar8 + 6) {
                uStack_1d0 = *puVar8;
                (**(code **)(puVar8[1] + 0x18))(apuStack_1c8,puVar8 + 1);
                func_0x00010b8a2cb0(auStack_110,&uStack_1d0);
                (*(code *)*apuStack_1c8[0])(apuStack_1c8);
              }
            }
            goto LAB_10b8a733c;
          }
        }
        if ((uVar14 & ~uVar14 << 6 & 0x8080808080808080) != 0) break;
        lVar19 = lVar19 + 8;
        uVar18 = lVar19 + uVar18;
      }
LAB_10b8a733c:
      func_0x00010811ffc4(&uStack_200,&lStack_168);
      func_0x0001081034b0();
      func_0x0001081034d8();
      FUN_10b8a24a8(&ppuStack_170);
      func_0x00010810544c(&ppuStack_210);
    }
    func_0x000104bfe1e0(&uStack_200);
    FUN_10b8a5610(&ppuStack_d8);
  }
  plVar9 = &lStack_1e8;
  func_0x000104bfe1e0(plVar9);
  func_0x00010b8a8ad0(uStack_70);
  if ((bool)uVar6) {
    return plVar9;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_10b8a740c;
  puStack_230 = &stack0xfffffffffffffff0;
  func_0x00010b8a8b84();
  uStack_248 = extraout_x8_01;
  func_0x00010b8a8500(auStack_258);
  *extraout_x8_00 = auStack_258[0];
  func_0x00010b8a8ad0(uStack_248);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    pcStack_268 = FUN_10b8a7458;
    ppuStack_270 = &puStack_230;
    FUN_10b8a8804(auStack_288);
    return (long *)(lStack_280 + 8);
  }
  return plVar9;
}



/* Entry: 10b8a740c; end: 10b8a7457;  */

long FUN_10b8a740c(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x00010b8a8b84();
  uStack_28 = extraout_x8;
  func_0x00010b8a8500(auStack_38);
  *param_1 = auStack_38[0];
  func_0x00010b8a8ad0(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_10b8a7458;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10b8a8804(auStack_68);
  return lStack_60 + 8;
}



/* Entry: 10b8a7458; end: 10b8a747b;  */

long FUN_10b8a7458(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b8a8804(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b8a747c; end: 10b8a74c7;  */

long * FUN_10b8a747c(long *param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
      do {
        func_0x00010b8a8ec4();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    func_0x0001080d5cdc();
  }
  return param_1;
}



/* Entry: 10b8a74c8; end: 10b8a757f;  */

undefined8 FUN_10b8a74c8(void)

{
  int iVar1;
  
  if ((bRam0000000113846720 & 1) == 0) {
    iVar1 = 0x13846720;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x113846718,&UNK_10f7ca6e9);
      ___cxa_guard_release(0x113846720);
    }
  }
  return 0x113846718;
}



/* Entry: 10b8a7580; end: 10b8a75bb;  */

void FUN_10b8a7580(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = *param_2;
  (**(code **)(param_2[1] + 0x18))(puVar1 + 1);
  *(undefined8 **)(param_1 + 8) = puVar1 + 6;
  return;
}



/* Entry: 10b8a75bc; end: 10b8a761f;  */

undefined8 FUN_10b8a75bc(void)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x00010b8a8cc0();
  func_0x00010b8a8e0c();
  FUN_10b8a7620();
  func_0x00010b8a8d80();
  FUN_10b8a76fc();
  *puStack_48 = *unaff_x19;
  (**(code **)(unaff_x19[1] + 0x18))(puStack_48 + 1,unaff_x19 + 1);
  func_0x00010b8a8e3c();
  FUN_10b8a7670();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  func_0x00010b8a784c(auStack_58);
  return uVar1;
}



/* Entry: 10b8a7620; end: 10b8a766f;  */

long * FUN_10b8a7620(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0x555555555555556) {
    uVar1 = (param_1[2] - *param_1) / 0x30;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar1) {
      plVar3 = (long *)0x555555555555555;
    }
    return plVar3;
  }
  FUN_10b8a76f0();
  func_0x00010b8a8cc0();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_10b8a7798(plVar3,*param_1,param_1[1],lVar4);
  unaff_x19[1] = lVar4;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 10b8a7670; end: 10b8a76ef;  */

void FUN_10b8a7670(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010b8a8cc0();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_10b8a7798(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b8a76f0; end: 10b8a76fb;  */

long * FUN_10b8a76f0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b8a7748();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 10b8a76fc; end: 10b8a776b;  */

long * FUN_10b8a76fc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b8a7748();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 10b8a776c; end: 10b8a7797;  */

void FUN_10b8a776c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  if ((undefined8 *)0x555555555555555 < param_2) {
    func_0x000104bfe188();
    for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 6) {
      *param_4 = *puVar1;
      (**(code **)(puVar1[1] + 0x10))(param_4 + 1,puVar1 + 1);
      param_4 = param_4 + 6;
    }
    for (; param_2 != param_3; param_2 = param_2 + 6) {
      (**(code **)param_2[1])(param_2 + 1);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x30);
  return;
}



/* Entry: 10b8a7798; end: 10b8a780f;  */

void FUN_10b8a7798(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 6) {
    *param_4 = *puVar1;
    (**(code **)(puVar1[1] + 0x10))(param_4 + 1,puVar1 + 1);
    param_4 = param_4 + 6;
  }
  for (; param_2 != param_3; param_2 = param_2 + 6) {
    (**(code **)param_2[1])(param_2 + 1);
  }
  return;
}



/* Entry: 10b8a7810; end: 10b8a7877;  */

void FUN_10b8a7810(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    (*(code *)**(undefined8 **)(param_2 + 8))((undefined8 *)(param_2 + 8));
  }
  return;
}



/* Entry: 10b8a7878; end: 10b8a787f;  */

void FUN_10b8a7878(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8a8cc0(param_1,*(undefined8 *)(param_1 + 8));
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    puVar2 = *(undefined8 **)(lVar1 + -0x28);
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x30;
    (*(code *)*puVar2)();
  }
  return;
}



/* Entry: 10b8a7880; end: 10b8a78bb;  */

void FUN_10b8a7880(void)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8a8cc0();
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    puVar2 = *(undefined8 **)(lVar1 + -0x28);
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x30;
    (*(code *)*puVar2)();
  }
  return;
}



/* Entry: 10b8a78bc; end: 10b8a7913;  */

undefined8 FUN_10b8a78bc(void)

{
  long extraout_x8;
  undefined8 *unaff_x19;
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  func_0x00010b8a8cc0();
  func_0x00010b8a8e0c();
  func_0x000108104304();
  func_0x00010b8a8d80();
  FUN_10b8a30e4();
  func_0x00010b8a8e24(uStack_48);
  *(undefined8 *)(extraout_x8 + 0x10) = *unaff_x19;
  func_0x00010b8a8e3c();
  func_0x00010b8a305c();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  func_0x00010b8a31e4(auStack_58);
  return uVar1;
}



/* Entry: 10b8a7914; end: 10b8a7943;  */

ulong FUN_10b8a7914(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b8a7944; end: 10b8a79bf;  */

void FUN_10b8a7944(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        FUN_10b8a7a54(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x10;
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



/* Entry: 10b8a79c0; end: 10b8a7a53;  */

void FUN_10b8a79c0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  byte unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00010b8a8bfc();
  __Znwm(unaff_x25 + param_2 * 0x10);
  func_0x00010b8a8b6c();
  func_0x00010b8a8c18();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x00010b8a8d24(uVar1);
  for (; unaff_x24 != unaff_x25; unaff_x25 = unaff_x25 + 1) {
    if (-1 < *(char *)(unaff_x19 + unaff_x25)) {
      lVar2 = unaff_x21;
      FUN_10b8a7a7c();
      func_0x00010b8a8c6c();
      FUN_10b8a7914();
      *(byte *)(unaff_x23 + lVar2) = unaff_w22 & 0x7f;
      func_0x00010b8a8ab8();
      func_0x00010b8a8cd8();
      FUN_10b8a7a98(extraout_x8_00 + lVar2 * 0x10,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x10;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8a7a54; end: 10b8a7a7b;  */

undefined8 FUN_10b8a7a54(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10b8a83c8(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b8a7a7c; end: 10b8a7a97;  */

void FUN_10b8a7a7c(undefined8 *param_1)

{
  func_0x00010b8a8d5c(param_1,*param_1);
  return;
}



/* Entry: 10b8a7a98; end: 10b8a7aab;  */

undefined8 FUN_10b8a7a98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10b8a83c8(param_2 + 1);
  func_0x00010007e5d0(param_2);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b8a7aac; end: 10b8a7ac7;  */

void FUN_10b8a7aac(long param_1)

{
  FUN_10b9a7674();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 10b8a7ac8; end: 10b8a7aeb;  */

undefined8 * FUN_10b8a7ac8(undefined8 *param_1)

{
  FUN_10b8a7aec(*param_1);
  return param_1;
}



/* Entry: 10b8a7aec; end: 10b8a7b17;  */

void FUN_10b8a7aec(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x00010b8a7b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b8a7b18; end: 10b8a7b5f;  */

long FUN_10b8a7b18(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10b8a7b7c();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b8a7b60; end: 10b8a7b7b;  */

void FUN_10b8a7b60(void)

{
  func_0x00010b8a8dec();
  FUN_10b8a7c14();
  return;
}



/* Entry: 10b8a7b7c; end: 10b8a7c13;  */

bool FUN_10b8a7b7c(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = 0;
  uVar4 = param_3 >> 7;
  uVar2 = param_1[3];
  lVar3 = *param_1;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    uVar6 = *(ulong *)(lVar3 + uVar4);
    uVar5 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar7 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar4 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      *param_4 = uVar7;
      if (*(long *)(param_1[1] + uVar7 * 0x20) == *param_2) goto LAB_10b8a8e6c;
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
LAB_10b8a8e6c:
  return uVar5 != 0;
}



/* Entry: 10b8a7c14; end: 10b8a7c2b;  */

void FUN_10b8a7c14(void)

{
  func_0x00010b8a8ccc();
  return;
}



/* Entry: 10b8a7c2c; end: 10b8a7c93;  */

void FUN_10b8a7c2c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  byte unaff_w22;
  
  uVar3 = (uint)param_2;
  plVar2 = param_1;
  FUN_10b8a7b60();
  func_0x00010b8a8ee0();
  FUN_10b8a7c94();
  if ((uVar3 & 1) != 0) {
    puVar1 = (undefined8 *)(param_1[1] + (long)plVar2 * 0x20);
    *puVar1 = *param_2;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(byte *)(*param_1 + (long)plVar2) = unaff_w22 & 0x7f;
    func_0x00010b8a8aa0();
  }
  func_0x00010b8a8e54();
  return;
}



/* Entry: 10b8a7c94; end: 10b8a7d2b;  */

undefined1  [16] FUN_10b8a7c94(ulong param_1)

{
  undefined8 uVar1;
  ulong extraout_x8;
  ulong uVar2;
  long extraout_x9;
  long lVar3;
  ulong extraout_x10;
  long extraout_x11;
  ulong extraout_x12;
  long extraout_x13;
  long extraout_x14;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  func_0x00010b8a8c94();
  uVar4 = extraout_x8;
  lVar3 = extraout_x9;
  while( true ) {
    uVar4 = uVar4 & extraout_x10;
    uVar5 = *(ulong *)(extraout_x11 + uVar4);
    for (uVar6 = (uVar5 ^ extraout_x12) + extraout_x14 & (uVar5 ^ extraout_x12 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar2 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar4 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & extraout_x10;
      if (*(long *)(*(long *)(param_1 + 8) + uVar2 * 0x20) == extraout_x13) {
        uVar1 = 0;
        goto LAB_10b8a7d0c;
      }
    }
    if ((uVar5 & ~uVar5 << 6 & 0x8080808080808080) != 0) break;
    lVar3 = lVar3 + 8;
    uVar4 = lVar3 + uVar4;
  }
  FUN_10b8a7d2c();
  uVar1 = 1;
  uVar2 = param_1;
LAB_10b8a7d0c:
  auVar7._8_8_ = uVar1;
  auVar7._0_8_ = uVar2;
  return auVar7;
}



/* Entry: 10b8a7d2c; end: 10b8a7da3;  */

void FUN_10b8a7d2c(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00010b8a8b94();
  FUN_10b8a7da4();
  lVar3 = *(long *)(unaff_x19 + 0x28);
  if (lVar3 != 0) goto LAB_10b8a7d5c;
  bVar1 = 0xfd < *(byte *)(unaff_x21 + param_1);
  bVar2 = *(byte *)(unaff_x21 + param_1) == 0xfe;
  if (bVar2) {
    lVar3 = 0;
    goto LAB_10b8a7d5c;
  }
  if (unaff_x22 == 0) {
LAB_10b8a7d84:
    FUN_10b8a7dd4();
  }
  else {
    func_0x00010b8a8ddc();
    if (bVar1 && !bVar2) {
      func_0x00010b8a8dbc();
      goto LAB_10b8a7d84;
    }
    func_0x00010b8a7e68();
  }
  func_0x00010b8a8d04();
  FUN_10b8a7da4();
  lVar3 = *(long *)(unaff_x19 + 0x28);
LAB_10b8a7d5c:
  func_0x00010b8a8b48(lVar3);
  return;
}



/* Entry: 10b8a7da4; end: 10b8a7dd3;  */

ulong FUN_10b8a7da4(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b8a7dd4; end: 10b8a7f57;  */

void FUN_10b8a7dd4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  byte unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00010b8a8bfc();
  __Znwm(unaff_x25 + param_2 * 0x20);
  func_0x00010b8a8b6c();
  func_0x00010b8a8c18();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x00010b8a8d24(uVar1);
  for (; unaff_x24 != unaff_x25; unaff_x25 = unaff_x25 + 1) {
    if (-1 < *(char *)(unaff_x19 + unaff_x25)) {
      lVar2 = unaff_x21;
      FUN_10b8a7f58();
      func_0x00010b8a8c6c();
      FUN_10b8a7da4();
      *(byte *)(unaff_x23 + lVar2) = unaff_w22 & 0x7f;
      func_0x00010b8a8ab8();
      func_0x00010b8a8cd8();
      FUN_10b8a7f74(extraout_x8_00 + lVar2 * 0x20,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x20;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8a7f58; end: 10b8a7f73;  */

void FUN_10b8a7f58(undefined8 *param_1)

{
  func_0x00010b8a8d5c(param_1,*param_1);
  return;
}



/* Entry: 10b8a7f74; end: 10b8a7f83;  */

undefined8 FUN_10b8a7f74(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x00010b8a8e98();
  uStack_28 = param_1;
  func_0x00010b8a7fb4(&uStack_28);
  return param_1;
}



/* Entry: 10b8a7f84; end: 10b8a7fef;  */

undefined8 FUN_10b8a7f84(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010b8a7fb4(&uStack_28);
  return param_1;
}



/* Entry: 10b8a7ff0; end: 10b8a7ff7;  */

void FUN_10b8a7ff0(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00010b8a8cc0(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x30) {
    (*(code *)**(undefined8 **)(lVar1 + -0x28))((undefined8 *)(lVar1 + -0x28));
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8a7ff8; end: 10b8a80a3;  */

void FUN_10b8a7ff8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00010b8a8cc0();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x30) {
    (*(code *)**(undefined8 **)(lVar1 + -0x28))((undefined8 *)(lVar1 + -0x28));
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8a80a4; end: 10b8a816f;  */

void FUN_10b8a80a4(void)

{
  func_0x00010b8a8dec();
  func_0x00010b8a8158();
  return;
}



/* Entry: 10b8a8170; end: 10b8a81e7;  */

void FUN_10b8a8170(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00010b8a8b94();
  FUN_10b8a81e8();
  lVar3 = *(long *)(unaff_x19 + 0x28);
  if (lVar3 != 0) goto LAB_10b8a81a0;
  bVar1 = 0xfd < *(byte *)(unaff_x21 + param_1);
  bVar2 = *(byte *)(unaff_x21 + param_1) == 0xfe;
  if (bVar2) {
    lVar3 = 0;
    goto LAB_10b8a81a0;
  }
  if (unaff_x22 == 0) {
LAB_10b8a81c8:
    FUN_10b8a8218();
  }
  else {
    func_0x00010b8a8ddc();
    if (bVar1 && !bVar2) {
      func_0x00010b8a8dbc();
      goto LAB_10b8a81c8;
    }
    func_0x00010b8a82ac();
  }
  func_0x00010b8a8d04();
  FUN_10b8a81e8();
  lVar3 = *(long *)(unaff_x19 + 0x28);
LAB_10b8a81a0:
  func_0x00010b8a8b48(lVar3);
  return;
}



/* Entry: 10b8a81e8; end: 10b8a8217;  */

ulong FUN_10b8a81e8(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b8a8218; end: 10b8a839b;  */

void FUN_10b8a8218(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  byte unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00010b8a8bfc();
  __Znwm(unaff_x25 + param_2 * 0x20);
  func_0x00010b8a8b6c();
  func_0x00010b8a8c18();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x00010b8a8d24(uVar1);
  for (; unaff_x24 != unaff_x25; unaff_x25 = unaff_x25 + 1) {
    if (-1 < *(char *)(unaff_x19 + unaff_x25)) {
      lVar2 = unaff_x21;
      FUN_10b8a839c();
      func_0x00010b8a8c6c();
      FUN_10b8a81e8();
      *(byte *)(unaff_x23 + lVar2) = unaff_w22 & 0x7f;
      func_0x00010b8a8ab8();
      func_0x00010b8a8cd8();
      FUN_10b8a83b8(extraout_x8_00 + lVar2 * 0x20,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x20;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8a839c; end: 10b8a83b7;  */

void FUN_10b8a839c(undefined8 *param_1)

{
  func_0x00010b8a8d5c(param_1,*param_1);
  return;
}



/* Entry: 10b8a83b8; end: 10b8a83c7;  */

undefined8 FUN_10b8a83b8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x00010b8a8e98();
  uStack_28 = param_1;
  func_0x00010b8a2e74(&uStack_28);
  return param_1;
}



/* Entry: 10b8a83c8; end: 10b8a8433;  */

undefined8 * FUN_10b8a83c8(undefined8 *param_1)

{
  func_0x0001080d5cdc(*param_1);
  return param_1;
}



/* Entry: 10b8a8434; end: 10b8a844f;  */

void FUN_10b8a8434(void)

{
  func_0x00010b8a8dec();
  FUN_10b8a84e8();
  return;
}



/* Entry: 10b8a8450; end: 10b8a84e7;  */

bool FUN_10b8a8450(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar1 = 0;
  uVar4 = param_3 >> 7;
  uVar2 = param_1[3];
  lVar3 = *param_1;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    uVar6 = *(ulong *)(lVar3 + uVar4);
    uVar5 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    lVar7 = *param_2;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar8 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar4 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
      *param_4 = uVar8;
      if (*(long *)(param_1[1] + uVar8 * 0x10) == lVar7) goto LAB_10b8a8e6c;
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
LAB_10b8a8e6c:
  return uVar5 != 0;
}



/* Entry: 10b8a84e8; end: 10b8a8537;  */

void FUN_10b8a84e8(void)

{
  func_0x00010b8a8ccc();
  return;
}



/* Entry: 10b8a8538; end: 10b8a85d7;  */

void FUN_10b8a8538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined1 *puVar3;
  int extraout_w11;
  undefined1 *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  
  puVar1 = auStack_70;
  func_0x00010b8a8b84();
  uStack_58 = extraout_x8;
  FUN_10b8a85f4(auStack_70,1);
  FUN_10b8a864c(lStack_60,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar2 = lStack_60;
  lStack_60 = 0;
  FUN_10b8a85d8(param_1,lVar2 + 0x18);
  FUN_10b8a87f4();
  func_0x00010b8a8ad0(uStack_58);
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
    pcStack_78 = FUN_10b8a85d8;
    lStack_88 = extraout_x8_00[1];
    puStack_90 = puVar1;
    puStack_80 = &stack0xfffffffffffffff0;
    if (lStack_88 != 0) {
      do {
        func_0x00010b8a8ec4();
        puVar3 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(puVar3,&puStack_90);
    func_0x000107c284e8(&puStack_90);
    return;
  }
  return;
}



/* Entry: 10b8a85d8; end: 10b8a85f3;  */

void FUN_10b8a85d8(long *param_1,long param_2,long param_3)

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
        func_0x00010b8a8ec4();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(lVar1,&lStack_20);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b8a85f4; end: 10b8a861b;  */

long FUN_10b8a85f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b8a861c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b8a861c; end: 10b8a864b;  */

undefined8 * FUN_10b8a861c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x186186186186187) {
    puVar1 = (undefined8 *)(param_2 * 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d70c18;
  param_1[1] = 0;
  FUN_10b8a86a8(param_1 + 3);
  return param_1;
}



/* Entry: 10b8a864c; end: 10b8a867f;  */

undefined8 * FUN_10b8a864c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d70c18;
  param_1[1] = 0;
  FUN_10b8a86a8(param_1 + 3);
  return param_1;
}



/* Entry: 10b8a8680; end: 10b8a8683;  */

void FUN_10b8a8680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d70c18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8a8684; end: 10b8a8697;  */

void FUN_10b8a8684(void)

{
  func_0x00010b8a877c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8a8698; end: 10b8a86a7;  */

void FUN_10b8a8698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8a86a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8a86a8; end: 10b8a873f;  */

undefined8 *
FUN_10b8a86a8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 *param_7)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_78 [6];
  undefined8 uStack_48;
  
  func_0x00010b8a8b84();
  uStack_48 = extraout_x8;
  FUN_10b8a8740(auStack_78,param_3);
  FUN_10b8a906c(param_1,param_2,auStack_78,param_4,param_5,param_6,*param_7);
  puVar1 = auStack_78;
  func_0x00010810452c();
  func_0x00010b8a8ad0(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &UNK_10dd5b8b0;
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  puVar1[2] = uVar2;
  uVar2 = param_2[3];
  param_2[3] = 0;
  puVar1[3] = uVar2;
  puVar1[5] = param_2[5];
  param_2[5] = 0;
  return puVar1;
}



/* Entry: 10b8a8740; end: 10b8a878f;  */

void FUN_10b8a8740(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar1 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &UNK_10dd5b8b0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  uVar1 = param_2[3];
  param_2[3] = 0;
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[5] = 0;
  return;
}



/* Entry: 10b8a8790; end: 10b8a87f3;  */

void FUN_10b8a8790(long param_1,long param_2,undefined8 param_3)

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
        func_0x00010b8a8ec4();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8a87f4; end: 10b8a8803;  */

void FUN_10b8a87f4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8a8804; end: 10b8a89a7;  */

void FUN_10b8a8804(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  
  plVar6 = param_2;
  FUN_10b8a8434();
  lVar10 = 0;
  uVar11 = (ulong)plVar6 >> 7;
  lVar8 = *param_2;
  while( true ) {
    uVar11 = uVar11 & param_2[3];
    uVar14 = *(ulong *)(lVar8 + uVar11);
    uVar12 = uVar14 ^ ((ulong)plVar6 & 0x7f) * 0x101010101010101;
    for (uVar12 = uVar12 + 0xfefefefefefefeff & (uVar12 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar3 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      lVar13 = param_2[1];
      plVar7 = (long *)(uVar11 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & param_2[3]);
      if (*(long *)(lVar13 + (long)plVar7 * 0x10) == *param_3) {
        uVar9 = 0;
        goto LAB_10b8a88bc;
      }
    }
    if ((uVar14 & ~uVar14 << 6 & 0x8080808080808080) != 0) break;
    lVar10 = lVar10 + 8;
    uVar11 = lVar10 + uVar11;
  }
  plVar7 = param_2;
  func_0x00010b8a8930(param_2,plVar6);
  plVar2 = (long *)(param_2[1] + (long)plVar7 * 0x10);
  lVar10 = *param_3;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar2 = lVar10;
  plVar2[1] = 0;
  *(byte *)(*param_2 + (long)plVar7) = (byte)plVar6 & 0x7f;
  FUN_10b8a8aa0();
  lVar8 = *param_2;
  lVar13 = param_2[1];
  uVar9 = 1;
LAB_10b8a88bc:
  *param_1 = lVar8 + (long)plVar7;
  param_1[1] = lVar13 + (long)plVar7 * 0x10;
  *(undefined1 *)(param_1 + 2) = uVar9;
  return;
}



/* Entry: 10b8a89a8; end: 10b8a8a9f;  */

/* WARNING: Possible PIC construction at 0x00010b8a8a20: Changing call to branch */

void FUN_10b8a89a8(long *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte extraout_w8;
  byte bVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w9;
  long lVar5;
  undefined8 extraout_x9;
  long extraout_x9_00;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x11;
  long unaff_x20;
  byte unaff_w21;
  long unaff_x22;
  ulong uVar7;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  
  func_0x00010b8a8b84();
  uStack_58 = extraout_x8;
  func_0x00010b8a8d38();
  uVar7 = 0;
  do {
    uVar2 = (ulong)param_1[3] <= uVar7;
    uVar3 = uVar7 == param_1[3];
    if ((bool)uVar3) {
      func_0x00010b8a8dac();
      uVar1 = extraout_x9;
      if (!(bool)uVar3) {
        uVar1 = extraout_x8_01;
      }
      func_0x00010b8a8dcc(uVar1);
      func_0x00010b8a8ad0(uStack_58);
      if ((bool)uVar3) {
        return;
      }
      ___stack_chk_fail();
      lVar5 = extraout_x9_00;
      uVar7 = extraout_x10;
      uVar6 = extraout_x11;
      bVar4 = extraout_w8;
FUN_10b8a8aa0:
      *(byte *)(lVar5 + (uVar6 & uVar7) + (uVar6 & 7) + 1) = bVar4;
      return;
    }
    func_0x00010b8a8dfc();
    if ((bool)uVar3) {
      FUN_10b8a7a7c(param_1[1] + uVar7 * 0x10);
      func_0x00010b8a8c50();
      FUN_10b8a7914();
      func_0x00010b8a8c34();
      if (!(bool)uVar2 || (bool)uVar3) {
        bVar4 = unaff_w21 & 0x7f;
        *(byte *)(unaff_x22 + uVar7) = bVar4;
        lVar5 = *param_1;
        uVar7 = uVar7 - 8;
        uVar6 = param_1[3];
        goto FUN_10b8a8aa0;
      }
      func_0x00010b8a8ae4();
      lVar5 = extraout_x8_00 + uVar7 * 0x10;
      if (extraout_w9 == 0x80) {
        FUN_10b8a7a98(extraout_x8_00 + unaff_x20 * 0x10,lVar5);
        func_0x00010b8a8b1c();
      }
      else {
        FUN_10b8a7a98(auStack_68,lVar5);
        FUN_10b8a7a98(param_1[1] + uVar7 * 0x10,param_1[1] + unaff_x20 * 0x10);
        FUN_10b8a7a98(param_1[1] + unaff_x20 * 0x10,auStack_68);
        uVar7 = uVar7 - 1;
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}



/* Entry: 10b8a8aa0; end: 10b8a8eff;  */

void FUN_10b8a8aa0(void)

{
  undefined1 in_w8;
  long in_x9;
  ulong in_x10;
  ulong in_x11;
  
  *(undefined1 *)(in_x9 + (in_x11 & in_x10) + (in_x11 & 7) + 1) = in_w8;
  return;
}



/* Entry: 10b8a8f00; end: 10b8a906b;  */

undefined8 FUN_10b8a8f00(undefined8 param_1)

{
  func_0x00010b8a9034();
  func_0x00010b8a8f24();
  return param_1;
}



/* Entry: 10b8a906c; end: 10b8a917b;  */

undefined8 *
FUN_10b8a906c(undefined8 *param_1,long *param_2,long param_3,long *param_4,long *param_5,
             undefined8 param_6,undefined1 param_7)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puStack_50;
  long lStack_48;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d70cc0;
  lVar6 = *param_2;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[3] = lVar6;
  FUN_10b8a8740(param_1 + 4);
  lVar6 = *param_4;
  if (lVar6 != 0) {
    plVar2 = (long *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[10] = lVar6;
  lVar6 = *param_5;
  if (lVar6 != 0) {
    plVar2 = (long *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[0xb] = lVar6;
  param_1[0xc] = param_6;
  *(undefined1 *)(param_1 + 0xd) = param_7;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  puVar5 = param_1 + 4;
  func_0x0001081053cc();
  lVar6 = param_1[4];
  lVar7 = param_1[7];
  puStack_50 = puVar5;
  lStack_48 = param_3;
  while (puStack_50 != (undefined8 *)(lVar6 + lVar7)) {
    FUN_10b8a917c(param_1,lStack_48 + 8);
    func_0x00010810544c(&puStack_50);
  }
  return param_1;
}



/* Entry: 10b8a917c; end: 10b8a91d7;  */

void FUN_10b8a917c(long param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uStack_38;
  
  uVar1 = *param_2;
  while ((ulong)(*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 3) <= uVar1) {
    uStack_38 = 0;
    FUN_10b8a9254(param_1 + 0x70,&uStack_38);
  }
  *(ulong **)(*(long *)(param_1 + 0x70) + uVar1 * 8) = param_2;
  return;
}



/* Entry: 10b8a91d8; end: 10b8a923b;  */

undefined8 * FUN_10b8a91d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d70cc0;
  FUN_10b8a98b4(param_1 + 0x11);
  if (param_1[0xe] != 0) {
    param_1[0xf] = param_1[0xe];
    __ZdlPv();
  }
  FUN_10b8a63ac(param_1 + 0xb);
  func_0x000108104e70(param_1 + 10);
  func_0x00010810452c(param_1 + 4);
  func_0x000107c278f4(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b8a923c; end: 10b8a923f;  */

undefined8 * FUN_10b8a923c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d70cc0;
  FUN_10b8a98b4(param_1 + 0x11);
  if (param_1[0xe] != 0) {
    param_1[0xf] = param_1[0xe];
    __ZdlPv();
  }
  FUN_10b8a63ac(param_1 + 0xb);
  func_0x000108104e70(param_1 + 10);
  func_0x00010810452c(param_1 + 4);
  func_0x000107c278f4(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b8a9240; end: 10b8a9253;  */

void FUN_10b8a9240(void)

{
  FUN_10b8a91d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8a9254; end: 10b8a9293;  */

undefined8 * FUN_10b8a9254(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = 0;
  }
  else {
    puVar2 = param_1;
    FUN_10b8a959c();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 10b8a9294; end: 10b8a92db;  */

undefined8 FUN_10b8a9294(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined8 uStack_58;
  undefined8 auStack_50 [2];
  undefined8 uStack_40;
  ulong uStack_38;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    lVar2 = *(long *)(param_1 + 0x70);
    lVar3 = *(long *)(param_1 + 0x78) - lVar2;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x70);
    lVar3 = *(long *)(param_1 + 0x78) - lVar2;
    if (((ulong)(lVar3 >> 3) <= param_2) || (*(long *)(lVar2 + param_2 * 8) == 0)) {
      uStack_38 = param_2;
      if (*(long *)(param_1 + 0x88) == 0) {
        FUN_10b8a93ac(auStack_50);
        uVar1 = auStack_50[0];
        auStack_50[0] = 0;
        FUN_10b8a98d8((long *)(param_1 + 0x88),uVar1);
        FUN_10b8a98b4(auStack_50);
      }
      FUN_10b8a3d20(&uStack_40,*(undefined8 *)(param_1 + 0x60),param_2);
      uStack_58 = 0;
      uStack_59 = 1;
      uStack_5a = 0;
      FUN_10b8a99b4(auStack_50,&uStack_38,&uStack_40,param_1 + 0x50,&uStack_58,&uStack_59,&uStack_5a
                   );
      func_0x00010b8a93d8(*(undefined8 *)(param_1 + 0x88),auStack_50);
      FUN_10b8a917c(param_1,auStack_50[0]);
      uVar1 = auStack_50[0];
      FUN_10b8a9b90(auStack_50);
      func_0x000107c278f8(uStack_40);
      return uVar1;
    }
  }
  if (param_2 < (ulong)(lVar3 >> 3)) {
    return *(undefined8 *)(lVar2 + param_2 * 8);
  }
  return 0;
}



/* Entry: 10b8a92dc; end: 10b8a93ab;  */

undefined8 FUN_10b8a92dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined8 uStack_58;
  undefined8 auStack_50 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_2;
  if (*(long *)(param_1 + 0x88) == 0) {
    FUN_10b8a93ac(auStack_50);
    uVar1 = auStack_50[0];
    auStack_50[0] = 0;
    FUN_10b8a98d8((long *)(param_1 + 0x88),uVar1);
    FUN_10b8a98b4(auStack_50);
  }
  FUN_10b8a3d20(&uStack_40,*(undefined8 *)(param_1 + 0x60),param_2);
  uStack_58 = 0;
  uStack_59 = 1;
  uStack_5a = 0;
  FUN_10b8a99b4(auStack_50,&uStack_38,&uStack_40,param_1 + 0x50,&uStack_58,&uStack_59,&uStack_5a);
  func_0x00010b8a93d8(*(undefined8 *)(param_1 + 0x88),auStack_50);
  FUN_10b8a917c(param_1,auStack_50[0]);
  uVar1 = auStack_50[0];
  FUN_10b8a9b90(auStack_50);
  func_0x000107c278f8(uStack_40);
  return uVar1;
}


