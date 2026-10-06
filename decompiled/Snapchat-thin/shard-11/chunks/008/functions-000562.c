/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1089665b8; end: 1089665d7;  */

undefined8 FUN_1089665b8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (*(long *)(*param_3 + 0x1a0) != 0) {
    func_0x00010896691c();
  }
  return 1;
}



/* Entry: 1089665d8; end: 1089665df;  */

void FUN_1089665d8(void)

{
  return;
}



/* Entry: 1089665e0; end: 10896661b;  */

void FUN_1089665e0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_FUN_110a9feb8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  return;
}



/* Entry: 10896661c; end: 108966653;  */

void FUN_10896661c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_110a9feb8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108966654; end: 10896676f;  */

void FUN_108966654(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *param_3;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x10);
  if (((0xb < (uint)param_3[1] && lVar1 != 0) && (*(char *)(lVar1 + 1) == -0x33)) &&
     (*(char *)(lVar4 + 0xac) == '\x01')) {
    uVar2 = (*(uint *)(lVar1 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar1 + 8) & 0xff00ff) << 8;
    uVar2 = (uint)(*(uint *)(lVar4 + 0xa8) != (uVar2 >> 0x10 | uVar2 << 0x10));
  }
  puVar3 = *(undefined8 **)(lVar4 + 0x10);
  lVar4 = *(long *)(param_1 + 0x18);
  func_0x000108b866a4(&uStack_70,lVar1,param_3[1],0);
  uStack_c8 = uStack_70;
  uStack_c0 = uStack_68;
  uStack_b8 = uStack_60;
  uStack_a8 = *(undefined8 *)(lVar4 + 0x20);
  uStack_b0 = *(undefined8 *)(lVar4 + 0x18);
  uStack_a0 = uStack_70;
  uStack_98 = uStack_68;
  uStack_90 = uStack_60;
  uStack_80 = uStack_50;
  uStack_88 = uStack_58;
  uStack_78 = uStack_48;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  func_0x000107c27914(&uStack_58);
  (**(code **)*puVar3)
            (puVar3,&uStack_c8,*(undefined8 *)(*(long *)(param_1 + 8) + 8),uVar2,
             **(undefined1 **)(param_1 + 0x20));
  func_0x000107c27914(&uStack_88);
  return;
}



/* Entry: 108966770; end: 1089667a7;  */

long FUN_108966770(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a9ff28);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1089667a8; end: 1089667b3;  */

undefined ** FUN_1089667a8(void)

{
  return &PTR_DAT_110a9ff28;
}



/* Entry: 1089667b4; end: 1089667f7;  */

long * FUN_1089667b4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
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



/* Entry: 1089667f8; end: 108966a1f;  */

long FUN_1089667f8(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar1 = *param_2;
    uVar7 = (ulong)uVar1;
    uVar8 = uVar6 - 1;
    uVar5 = (uint)uVar6;
    if ((uVar6 & uVar8) == 0) {
      uVar9 = (ulong)(uVar5 - 1 & uVar1);
    }
    else {
      uVar9 = uVar7;
      if (uVar6 <= uVar7) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar1 / uVar5;
        }
        uVar9 = (ulong)(uVar1 - uVar2 * uVar5);
      }
    }
    plVar4 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uVar10 = plVar4[1];
        if (uVar10 != uVar7) break;
        if (*(uint *)(plVar4 + 2) == uVar1) {
          return (long)plVar4;
        }
      }
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar3 * uVar6;
      }
    } while (uVar10 == uVar9);
  }
  return 0;
}



/* Entry: 108966a20; end: 108966a3f;  */

undefined8 FUN_108966a20(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_1089650e4(*param_3,*param_1);
  return 1;
}



/* Entry: 108966a40; end: 108966b17;  */

void FUN_108966a40(void)

{
  return;
}



/* Entry: 108966b18; end: 108966b8f;  */

void FUN_108966b18(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  FUN_10896770c(auStack_80);
  lStack_38 = param_3 + *param_1 * 1000000;
  FUN_108966b90(param_1 + 1,auStack_80);
  func_0x000107c27914(auStack_50);
  return;
}



/* Entry: 108966b90; end: 108966bdb;  */

void FUN_108966b90(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  uVar2 = param_2;
  FUN_108967190();
  if (lVar1 == 0) {
    FUN_1089671b8(param_1);
  }
  func_0x000108967a98();
  func_0x0001089676d8(uVar2,param_2);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 108966bdc; end: 108966cd3;  */

void FUN_108966bdc(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plStack_50;
  long *plStack_48;
  
  plVar1 = (long *)(param_1 + 8);
  plVar5 = param_2;
  FUN_108966cd4();
  lVar2 = param_1 + 8;
  plVar3 = plVar5;
  func_0x000108966cfc(lVar2);
  plVar6 = plVar1;
  plVar4 = plVar5;
  FUN_10896708c(plVar1,plVar5,lVar2,plVar3);
  while (plVar3 = plVar6, plVar3 != (long *)0x0) {
    plVar6 = (long *)((ulong)plVar3 >> 1);
    plVar4 = plVar6;
    plStack_50 = plVar1;
    plStack_48 = plVar5;
    func_0x000108967110(&plStack_50);
    if (plStack_48[9] < (long)param_2) {
      plStack_48 = plStack_48 + 10;
      plVar5 = plStack_48;
      plVar1 = plStack_50;
      if ((long)plStack_48 - *plStack_50 == 0xff0) {
        plVar1 = plStack_50 + 1;
        plVar5 = (long *)*plVar1;
      }
      plVar6 = (long *)((long)plVar3 + ~(ulong)plVar6);
    }
  }
  FUN_108966cd4(param_1 + 8);
  if (plVar5 != plVar4) {
    lVar2 = param_1 + 8;
    FUN_108966cd4(lVar2);
    FUN_108966d28(param_1 + 8,lVar2,plVar4,plVar1,plVar5);
  }
  return;
}



/* Entry: 108966cd4; end: 108966d27;  */

void FUN_108966cd4(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 108966d28; end: 108966f9b;  */

void FUN_108966d28(long ****param_1,long ***param_2,undefined8 param_3,long ***param_4,
                  long ***param_5)

{
  long ****pppplVar1;
  long ****pppplVar2;
  long ****pppplVar3;
  long ***ppplVar4;
  long ***ppplVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long ***ppplStack_a0;
  long **pplStack_98;
  long ***ppplStack_90;
  long **pplStack_88;
  long ***ppplStack_80;
  long **pplStack_78;
  long **pplStack_70;
  long ***ppplStack_68;
  
  pppplVar3 = &ppplStack_a0;
  FUN_108967748(param_4,param_5,param_2,param_3);
  pppplVar1 = param_1;
  FUN_108966cd4();
  ppplStack_90 = (long ***)pppplVar1;
  pplStack_88 = (long **)param_5;
  FUN_108967748(param_2,param_3,pppplVar1,param_5);
  pppplVar2 = &ppplStack_90;
  ppplVar5 = param_2;
  FUN_108967790();
  ppplStack_a0 = (long ***)pppplVar2;
  pplStack_98 = (long **)ppplVar5;
  if ((long)param_4 < 1) {
LAB_108966f64:
    FUN_108966cd4();
    ppplStack_80 = (long ***)param_1;
    pplStack_78 = (long **)ppplVar5;
    FUN_108967790(&ppplStack_80,param_2);
    return;
  }
  ppplVar6 = param_1[5];
  ppplVar7 = param_4;
  FUN_108967790();
  if (param_2 <= (long ***)((ulong)((long)ppplVar6 - (long)param_4) >> 1)) {
    if (pppplVar1 != pppplVar2) {
      ppplVar6 = *pppplVar2;
      while( true ) {
        pppplVar2 = pppplVar2 + -1;
        FUN_108967818(&ppplStack_80,ppplVar6,ppplVar5,pppplVar3,ppplVar7);
        ppplVar7 = (long ***)pplStack_70;
        pppplVar3 = (long ****)pplStack_78;
        if (pppplVar2 == pppplVar1) break;
        ppplVar6 = *pppplVar2;
        ppplVar5 = ppplVar6 + 0x1fe;
      }
      ppplVar5 = *pppplVar2 + 0x1fe;
    }
    FUN_108967818(&ppplStack_80,param_5,ppplVar5,pppplVar3,ppplVar7);
    do {
      ppplVar5 = param_5 + -0x1fe;
      do {
        if (param_5 == (long ***)pplStack_70) {
          param_1[4] = (long ***)((long)param_1[4] + (long)param_4);
          param_1[5] = (long ***)((long)param_1[5] - (long)param_4);
          do {
            ppplVar5 = (long ***)0x1;
            pppplVar2 = param_1;
            FUN_1089677bc();
          } while (((ulong)pppplVar2 & 1) != 0);
          goto LAB_108966f64;
        }
        func_0x000107c27914(param_5 + 6);
        param_5 = param_5 + 10;
        ppplVar5 = ppplVar5 + 10;
      } while (*pppplVar1 != ppplVar5);
      pppplVar1 = pppplVar1 + 1;
      param_5 = *pppplVar1;
    } while( true );
  }
  ppplVar6 = (long ***)pppplVar3;
  ppplVar4 = ppplVar7;
  func_0x000108967a98();
  ppplStack_68 = (long ***)&ppplStack_80;
  ppplStack_80 = (long ***)pppplVar2;
  pplStack_78 = (long **)ppplVar5;
  if (pppplVar3 != (long ****)ppplVar6) {
    ppplVar5 = *pppplVar3;
    do {
      FUN_108967978(&ppplStack_68,ppplVar7,ppplVar5 + 0x1fe);
      pppplVar3 = pppplVar3 + 1;
      ppplVar7 = *pppplVar3;
      ppplVar5 = ppplVar7;
    } while (pppplVar3 != (long ****)ppplVar6);
  }
  FUN_108967978(&ppplStack_68,ppplVar7,ppplVar4);
  ppplVar6 = (long ***)pplStack_78;
  pppplVar2 = (long ****)ppplStack_80;
  func_0x000108967a98();
  ppplVar5 = ppplVar7;
  do {
    ppplVar4 = ppplVar6 + -0x1fe;
    do {
      if (ppplVar6 == ppplVar7) {
        param_1[5] = (long ***)((long)param_1[5] - (long)param_4);
        while (pppplVar2 = param_1, FUN_108967190(), (long ****)0x65 < pppplVar2) {
          __ZdlPv(param_1[2][-1]);
          ppplVar5 = param_1[2] + -1;
          func_0x000108967a44(param_1);
        }
        goto LAB_108966f64;
      }
      func_0x000107c27914(ppplVar6 + 6);
      ppplVar6 = ppplVar6 + 10;
      ppplVar4 = ppplVar4 + 10;
    } while (*pppplVar2 != ppplVar4);
    pppplVar2 = pppplVar2 + 1;
    ppplVar6 = *pppplVar2;
  } while( true );
}



/* Entry: 108966f9c; end: 10896702b;  */

void FUN_108966f9c(long param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  while( true ) {
    if (*(long *)(param_1 + 0x30) == 0) {
      return;
    }
    plVar4 = (long *)(*(long *)(*(long *)(param_1 + 0x10) + (*(ulong *)(param_1 + 0x28) / 0x33) * 8)
                     + (*(ulong *)(param_1 + 0x28) % 0x33) * 0x50);
    lVar2 = param_2[1] - *param_2;
    lVar3 = plVar4[1];
    uVar1 = lVar2 + lVar3;
    if ((lVar2 != 0 && param_3 <= uVar1) && (lVar2 == 0 || uVar1 != param_3)) break;
    lVar2 = *plVar4;
    func_0x000107c28464(param_2,param_2[1],lVar2,lVar2 + lVar3);
    FUN_10896702c(param_1 + 8);
  }
  return;
}



/* Entry: 10896702c; end: 10896708b;  */

bool FUN_10896702c(long param_1)

{
  bool bVar1;
  
  func_0x000107c27914(*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0x33) * 8) +
                      (*(ulong *)(param_1 + 0x20) % 0x33) * 0x50 + 0x30);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar1 = 0x65 < *(ulong *)(param_1 + 0x20);
  if (bVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x33;
  }
  return bVar1;
}



/* Entry: 10896708c; end: 1089670b7;  */

void FUN_10896708c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_1089670b8(&uStack_30,&uStack_20);
  return;
}



/* Entry: 1089670b8; end: 10896718f;  */

long FUN_1089670b8(long *param_1,undefined8 *param_2)

{
  if (param_1[1] == param_2[1]) {
    return 0;
  }
  return (param_1[1] - *(long *)*param_1) / 0x50 + (*param_1 - (long)*param_2 >> 3) * 0x33 +
         (param_2[1] - *(long *)*param_2) / -0x50;
}



/* Entry: 108967190; end: 1089671b7;  */

long FUN_108967190(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1089674f4();
  return lVar1 - (*(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28));
}



/* Entry: 1089671b8; end: 1089674f3;  */

void FUN_1089671b8(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 uStack_d0;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  ulong *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  if (param_1[4] < 0x33) {
    puVar12 = (undefined8 *)param_1[1];
    puVar16 = (undefined8 *)param_1[2];
    puVar15 = (undefined8 *)*param_1;
    uVar17 = (long)puVar16 - (long)puVar12;
    puVar13 = param_1 + 3;
    puVar14 = (undefined8 *)*puVar13;
    if (uVar17 < (ulong)((long)puVar14 - (long)puVar15)) {
      uVar7 = 0xff0;
      __Znwm();
      if (puVar14 == puVar16) {
        if (puVar12 == puVar15) {
          lVar11 = (long)puVar14 - (long)puVar12 >> 2;
          if (puVar16 == puVar12) {
            lVar11 = 1;
          }
          puStack_70 = puVar13;
          FUN_108967638();
          func_0x000108967a80(lVar11 * 2 + 6);
          FUN_108967610(&puStack_90,param_1[1],param_1[2]);
          puVar16 = (undefined8 *)param_1[1];
          puVar12 = (undefined8 *)*param_1;
          puVar15 = (undefined8 *)param_1[3];
          puVar14 = (undefined8 *)param_1[2];
          param_1[1] = (ulong)puStack_88;
          *param_1 = (ulong)puStack_90;
          param_1[3] = (ulong)puStack_78;
          param_1[2] = (ulong)puStack_80;
          puStack_90 = puVar12;
          puStack_88 = puVar16;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x000108967aa0();
          puVar12 = (undefined8 *)param_1[1];
        }
        puVar12[-1] = uVar7;
        uVar17 = param_1[1];
        param_1[1] = uVar17 - 8;
        uVar7 = *(undefined8 *)(uVar17 - 8);
        param_1[1] = uVar17;
        FUN_108967518(param_1,uVar7);
      }
      else {
        *puVar16 = uVar7;
        param_1[2] = param_1[2] + 8;
      }
    }
    else {
      puVar9 = (undefined8 *)((long)puVar14 - (long)puVar15 >> 2);
      if (puVar14 == puVar15) {
        puVar9 = (undefined8 *)0x1;
      }
      puStack_98 = puVar13;
      FUN_108967638();
      puVar14 = (undefined8 *)((long)puVar9 + uVar17);
      puVar15 = puVar9 + param_2;
      uVar7 = 0xff0;
      lVar11 = param_2;
      puStack_b8 = puVar9;
      puStack_b0 = puVar14;
      puStack_a8 = puVar14;
      puStack_a0 = puVar15;
      __Znwm();
      puStack_c8 = param_1 + 5;
      uStack_c0 = 0x33;
      puVar10 = puVar14;
      if (uVar17 == param_2 * 8) {
        if (puVar16 == puVar12) {
          puVar12 = (undefined8 *)0x1;
          uStack_d0 = uVar7;
          puStack_70 = puVar13;
          FUN_108967638();
          puStack_78 = puVar12 + lVar11;
          puStack_90 = puVar12;
          puStack_88 = puVar12;
          puStack_80 = puVar12;
          FUN_108967610(&puStack_90,puVar14,puVar14);
          puVar1 = puStack_78;
          puVar10 = puStack_80;
          puVar16 = puStack_88;
          puVar12 = puStack_90;
          puStack_b8 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_a0 = puStack_78;
          puStack_90 = puVar9;
          puStack_88 = puVar14;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x000108967aa0();
          puVar9 = puVar12;
          puVar14 = puVar16;
          puVar15 = puVar1;
        }
        else {
          puVar14 = puVar14 + (((long)puVar14 - (long)puVar9 >> 3) + 1) / -2;
          puVar10 = puVar14;
          puStack_b0 = puVar14;
        }
      }
      puVar12 = puVar10 + 1;
      *puVar10 = uVar7;
      uStack_d0 = 0;
      puVar16 = (undefined8 *)param_1[2];
      puStack_a8 = puVar12;
      while (puVar10 = (undefined8 *)param_1[1], puVar16 != puVar10) {
        puVar10 = puVar14;
        if (puVar14 == puVar9) {
          if (puVar12 < puVar15) {
            lVar11 = (long)puVar12 - (long)puVar9;
            puVar1 = puVar12 + (((long)puVar15 - (long)puVar12 >> 3) + 1) / 2;
            puVar10 = (undefined8 *)((long)puVar1 - ((long)puVar12 - (long)puVar9));
            puVar12 = puVar1;
            if (lVar11 != 0) {
              _memmove(puVar10,puVar14,lVar11);
            }
          }
          else {
            lVar11 = (long)puVar15 - (long)puVar9 >> 2;
            if ((long)puVar15 - (long)puVar9 == 0) {
              lVar11 = 1;
            }
            puStack_70 = puVar13;
            FUN_108967638(lVar11);
            func_0x000108967a80(lVar11 * 2 + 6);
            FUN_108967610(&puStack_90,puVar9,puVar12);
            puVar5 = puStack_78;
            puVar4 = puStack_80;
            puVar10 = puStack_88;
            puVar1 = puStack_90;
            puStack_90 = puVar9;
            puStack_88 = puVar14;
            puStack_80 = puVar12;
            puStack_78 = puVar15;
            func_0x000108967aa0();
            puVar9 = puVar1;
            puVar12 = puVar4;
            puVar15 = puVar5;
          }
        }
        puVar16 = puVar16 + -1;
        puVar14 = puVar10 + -1;
        *puVar14 = *puVar16;
      }
      puStack_b8 = (undefined8 *)*param_1;
      *param_1 = (ulong)puVar9;
      param_1[1] = (ulong)puVar14;
      puStack_a0 = (undefined8 *)param_1[3];
      puStack_a8 = (undefined8 *)param_1[2];
      param_1[2] = (ulong)puVar12;
      param_1[3] = (ulong)puVar15;
      puStack_b0 = puVar10;
      func_0x00010896766c(&uStack_d0);
      func_0x000108967698(&puStack_b8);
    }
    return;
  }
  param_1[4] = param_1[4] - 0x33;
  uVar7 = *(undefined8 *)param_1[1];
  param_1[1] = (ulong)((undefined8 *)param_1[1] + 1);
  puVar12 = (undefined8 *)param_1[2];
  if (puVar12 == (undefined8 *)param_1[3]) {
    uVar17 = *param_1;
    uVar8 = param_1[1];
    if (uVar8 < uVar17 || uVar8 - uVar17 == 0) {
      puVar13 = (ulong *)((long)((long)puVar12 - uVar17) >> 2);
      if ((long)puVar12 - uVar17 == 0) {
        puVar13 = (ulong *)0x1;
      }
      puVar6 = puVar13;
      FUN_108967638();
      puStack_70 = puVar6;
      puStack_68 = puVar6 + ((ulong)puVar13 >> 2);
      FUN_108967610(&puStack_70,param_1[1],param_1[2]);
      uVar17 = param_1[1];
      puVar18 = (ulong *)*param_1;
      param_1[1] = (ulong)puStack_68;
      *param_1 = (ulong)puStack_70;
      param_1[3] = (ulong)(puVar6 + uVar8);
      param_1[2] = (ulong)(puVar6 + ((ulong)puVar13 >> 2));
      puStack_70 = puVar18;
      puStack_68 = (ulong *)uVar17;
      func_0x000108967698(&puStack_70);
      puVar12 = (undefined8 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar8 - uVar17) >> 3) + 1) / -2;
      lVar11 = uVar8 + lVar2 * 8;
      lVar3 = (long)puVar12 - uVar8;
      if (lVar3 != 0) {
        _memmove(lVar11,uVar8,lVar3);
        uVar8 = param_1[1];
      }
      puVar12 = (undefined8 *)(lVar11 + lVar3);
      param_1[1] = uVar8 + lVar2 * 8;
      param_1[2] = (ulong)puVar12;
    }
  }
  *puVar12 = uVar7;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 1089674f4; end: 108967517;  */

long FUN_1089674f4(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x33 + -1;
  }
  return lVar1;
}



/* Entry: 108967518; end: 10896760f;  */

void FUN_108967518(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  puStack_50 = param_1 + 3;
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_108967638();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_108967610(&uStack_70,param_1[1],param_1[2]);
      uVar4 = param_1[1];
      uVar7 = *param_1;
      uVar8 = param_1[3];
      uVar6 = param_1[2];
      param_1[1] = uStack_68;
      *param_1 = uStack_70;
      param_1[3] = uStack_58;
      param_1[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x000108967698(&uStack_70);
      puVar5 = (undefined8 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = param_1[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      param_1[1] = uVar4 + lVar2 * 8;
      param_1[2] = (ulong)puVar5;
    }
  }
  *puVar5 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 108967610; end: 108967637;  */

void FUN_108967610(long param_1,undefined8 *param_2,long param_3)

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



/* Entry: 108967638; end: 10896770b;  */

undefined1  [16] FUN_108967638(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10896770c; end: 108967747;  */

undefined8 * FUN_10896770c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  FUN_10895a610(param_1 + 3,param_2);
  return param_1;
}



/* Entry: 108967748; end: 10896778f;  */

long FUN_108967748(long *param_1,long param_2,long *param_3,long param_4)

{
  if (param_2 == param_4) {
    return 0;
  }
  return (param_2 - *param_1) / 0x50 + ((long)param_1 - (long)param_3 >> 3) * 0x33 +
         (param_4 - *param_3) / -0x50;
}



/* Entry: 108967790; end: 1089677bb;  */

undefined1  [16] FUN_108967790(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  func_0x000108967110(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1089677bc; end: 108967817;  */

uint FUN_1089677bc(long param_1,uint param_2)

{
  uint uVar1;
  
  if (*(ulong *)(param_1 + 0x20) < 0x33) {
    param_2 = 1;
  }
  uVar1 = 0;
  if (*(ulong *)(param_1 + 0x20) < 0x66) {
    uVar1 = param_2;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x33;
  }
  return uVar1 ^ 1;
}



/* Entry: 108967818; end: 1089678fb;  */

void FUN_108967818(long *param_1,long param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != param_3) {
    lVar2 = *param_4;
    lVar3 = param_3;
    while( true ) {
      lVar1 = (param_5 - lVar2) / 0x50;
      lVar2 = (lVar3 - param_2) / 0x50;
      if (lVar1 <= lVar2) {
        lVar2 = lVar1;
      }
      lVar1 = lVar3 + lVar2 * -0x50;
      for (lVar2 = lVar2 * -0x50; lVar2 != 0; lVar2 = lVar2 + 0x50) {
        lVar3 = lVar3 + -0x50;
        param_5 = param_5 + -0x50;
        FUN_1089678fc(param_5,lVar3);
      }
      if (param_2 == lVar1) break;
      param_4 = param_4 + -1;
      lVar2 = *param_4;
      param_5 = lVar2 + 0xff0;
      lVar3 = lVar1;
    }
    param_2 = param_3;
    if (param_5 == *param_4 + 0xff0) {
      param_4 = param_4 + 1;
      param_5 = *param_4;
    }
  }
  *param_1 = param_2;
  param_1[1] = (long)param_4;
  param_1[2] = param_5;
  return;
}



/* Entry: 1089678fc; end: 108967977;  */

undefined8 * FUN_1089678fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (param_1 != param_2) {
    FUN_10895a610(auStack_60,param_2);
    FUN_108b8664c(param_1 + 3,auStack_60);
    func_0x000107c27914(auStack_48);
    *param_1 = param_1[3];
    param_1[2] = param_1[5];
    param_1[1] = param_1[4];
  }
  param_1[9] = param_2[9];
  return param_1;
}



/* Entry: 108967978; end: 108967a43;  */

void FUN_108967978(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)*param_1;
  lVar2 = ((undefined8 *)*param_1)[1];
  if (param_2 != param_3) {
    lVar4 = *plVar3;
    while( true ) {
      lVar1 = ((lVar4 - lVar2) + 0xff0) / 0x50;
      lVar4 = (param_3 - param_2) / 0x50;
      if (lVar1 <= lVar4) {
        lVar4 = lVar1;
      }
      lVar1 = param_2 + lVar4 * 0x50;
      for (lVar4 = lVar4 * 0x50; lVar4 != 0; lVar4 = lVar4 + -0x50) {
        FUN_1089678fc(lVar2,param_2);
        param_2 = param_2 + 0x50;
        lVar2 = lVar2 + 0x50;
      }
      if (param_3 == lVar1) break;
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar4 = lVar2;
      param_2 = lVar1;
    }
    if (lVar2 == *plVar3 + 0xff0) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
    }
  }
  param_1 = (undefined8 *)*param_1;
  *param_1 = plVar3;
  param_1[1] = lVar2;
  return;
}



/* Entry: 108967a44; end: 108967ae3;  */

void FUN_108967a44(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 108967ae4; end: 108967feb;  */

undefined8 **
FUN_108967ae4(undefined8 **param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,int param_8,
             undefined8 *param_9,undefined8 *param_10)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  long *plVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_180 [24];
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined1 auStack_150 [24];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [24];
  code *pcStack_108;
  undefined **ppuStack_100;
  undefined8 **ppuStack_f8;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_110a9ffb0;
  param_1[2] = (undefined8 *)0x0;
  param_1[3] = param_9;
  param_1[4] = param_10;
  param_1[5] = param_2;
  param_1[6] = param_5;
  puVar6 = (undefined8 *)param_3[1];
  puVar8 = (undefined8 *)*param_3;
  uVar9 = *(undefined8 *)((long)param_3 + 0xc);
  *(undefined8 *)((long)param_1 + 0x4c) = *(undefined8 *)((long)param_3 + 0x14);
  *(undefined8 *)((long)param_1 + 0x44) = uVar9;
  param_1[8] = puVar6;
  param_1[7] = puVar8;
  puVar6 = (undefined8 *)param_6[1];
  puVar8 = (undefined8 *)*param_6;
  param_1[0xd] = (undefined8 *)param_6[2];
  param_1[0xc] = puVar6;
  param_1[0xb] = puVar8;
  param_1[0xe] = (undefined8 *)*param_7;
  func_0x00010bd4569c(param_1 + 0xf,0x13);
  ppuVar1 = param_1 + 0x12;
  FUN_10896e648(ppuVar1,param_1[3],0);
  param_1[0x1d] = ppuVar1;
  puVar8 = param_1[0xf];
  func_0x00010bd3f528(&puStack_a8,param_1 + 0x16);
  func_0x00010bd45a84(param_1 + 0x1e,puVar8);
  FUN_10896e790(param_1 + 0x20,&puStack_a8);
  FUN_10896e790(param_1 + 0x2f,&puStack_a8);
  func_0x000107c27fdc(param_1 + 0x3e,0x4400);
  puVar6 = (undefined8 *)((long)param_1[0x3f] - (long)param_1[0x3e]);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar8 = param_1[0x3e];
  }
  param_1[0x41] = puVar8;
  param_1[0x42] = puVar6;
  func_0x000107c27fdc(param_1 + 0x43,0x4400);
  puVar6 = (undefined8 *)((long)param_1[0x44] - (long)param_1[0x43]);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar8 = param_1[0x43];
  }
  param_1[0x46] = puVar8;
  param_1[0x47] = puVar6;
  param_1[0x49] = (undefined8 *)0x0;
  param_1[0x48] = (undefined8 *)0x0;
  FUN_108971df4();
  FUN_10896a520(param_1 + 0x20);
  FUN_108971df4();
  FUN_10896a520(param_1 + 0x2f);
  func_0x0001089719c4();
  ppuVar2 = param_1 + 0x4a;
  ppuVar3 = param_1 + 0x4b;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4b] = (undefined8 *)0x0;
  param_1[0x4a] = (undefined8 *)0x0;
  param_1[0x4d] = (undefined8 *)param_6[2];
  param_1[0x4f] = (undefined8 *)0x0;
  param_1[0x4e] = (undefined8 *)0x0;
  param_1[0x51] = (undefined8 *)0x0;
  param_1[0x50] = (undefined8 *)0x0;
  param_1[0x53] = (undefined8 *)0x0;
  param_1[0x52] = (undefined8 *)0x0;
  param_1[0x54] = (undefined8 *)0x7fffffffffffffff;
  param_1[0x5f] = (undefined8 *)0x0;
  param_1[0x61] = (undefined8 *)0x0;
  param_1[0x60] = (undefined8 *)0x0;
  param_1[0x56] = (undefined8 *)0x0;
  param_1[0x55] = (undefined8 *)0x0;
  param_1[0x58] = (undefined8 *)0x0;
  param_1[0x57] = (undefined8 *)0x0;
  param_1[0x5a] = (undefined8 *)0x0;
  param_1[0x59] = (undefined8 *)0x0;
  param_1[0x5c] = (undefined8 *)0x0;
  param_1[0x5b] = (undefined8 *)0x0;
  *(undefined8 *)((long)param_1 + 0x2e9) = 0;
  *(undefined8 *)((long)param_1 + 0x2e1) = 0;
  func_0x000107c31950(param_1 + 0x5b,0x2000);
  func_0x00010b290850(&puStack_168);
  for (; puStack_168 != puStack_160; puStack_168 = puStack_168 + 3) {
    uStack_a0 = puStack_168[1];
    puStack_a8 = (undefined8 *)*puStack_168;
    if (-1 < (char)*(byte *)((long)puStack_168 + 0x17)) {
      uStack_a0 = (ulong)*(byte *)((long)puStack_168 + 0x17);
      puStack_a8 = puStack_168;
    }
    func_0x00010bd45924(param_1 + 0xf,&puStack_a8);
  }
  uVar5 = *(char *)((long)param_4 + 0x17) == '\0';
  plVar4 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar4 = param_4;
  }
  func_0x000107c2b7f8(param_1[0x1e],plVar4);
  if (param_8 == 0) {
    if (param_1[0x1e][1] != 0) {
      *(undefined1 *)(param_1[0x1e][1] + 0xe8) = 1;
    }
    puStack_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    uStack_98 = 0;
    func_0x000107c2a674(&puStack_a8,&UNK_10f4ed943);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_180,param_4);
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_150,auStack_180);
  puVar8 = (undefined8 *)0x20;
  __Znwm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&puStack_a8,auStack_150);
  *puVar8 = &PTR_FUN_110aa0180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar8 + 1,&puStack_a8);
  func_0x00010bd45b6c(auStack_120,param_1 + 0x1e,puVar8,&uStack_138);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
  func_0x000107c2a674(&uStack_138,&UNK_10f4ed953);
  func_0x000108971f80();
  pcStack_d8 = FUN_10896eae8;
  ppuStack_d0 = &PTR_FUN_110aa01c0;
  ppuStack_c8 = param_1;
  (**(code **)*param_1[4])(&puStack_a8,param_1[4],&pcStack_d8);
  puVar8 = puStack_a8;
  puStack_a8 = (undefined8 *)0x0;
  puVar6 = *ppuVar2;
  *ppuVar2 = puVar8;
  if (puVar6 != (undefined8 *)0x0) {
    func_0x000108971840();
    puVar8 = puStack_a8;
    puStack_a8 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      func_0x000108971840();
    }
  }
  func_0x000108971bb0(ppuStack_d0);
  pcStack_108 = FUN_10896eb64;
  ppuStack_100 = &PTR_FUN_110aa01e0;
  ppuStack_f8 = param_1;
  (**(code **)*param_1[4])(&puStack_a8,param_1[4],&pcStack_108);
  puVar8 = puStack_a8;
  puStack_a8 = (undefined8 *)0x0;
  puVar6 = *ppuVar3;
  *ppuVar3 = puVar8;
  if (puVar6 != (undefined8 *)0x0) {
    func_0x000108971840();
    puVar8 = puStack_a8;
    puStack_a8 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      func_0x000108971840();
    }
  }
  func_0x000108971bb0(ppuStack_100);
  ppuVar7 = &puStack_168;
  func_0x000107c278a8();
  func_0x000108971480(uStack_70);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x000108971bb0(ppuStack_100);
    func_0x000107c278a8(&puStack_168);
    func_0x000107c27914(param_1 + 0x5f);
    func_0x000107c27914(param_1 + 0x5b);
    FUN_108968a64(param_1 + 0x55);
    FUN_108968a64(param_1 + 0x4e);
    func_0x000108950b24(ppuVar3);
    func_0x000108950b24(ppuVar2);
    FUN_10896ea5c(param_1 + 0x1e);
    FUN_10896ea24(ppuVar1);
    func_0x00010bd458ac(param_1 + 0xf);
    FUN_10895c820(param_1 + 1);
    __Unwind_Resume();
    *ppuVar7 = &PTR_FUN_110a9ffb0;
    func_0x000107c27914(ppuVar7 + 0x5f);
    func_0x000107c27914(ppuVar7 + 0x5b);
    FUN_108968a64(ppuVar7 + 0x55);
    FUN_108968a64(ppuVar7 + 0x4e);
    func_0x000108950b24(ppuVar7 + 0x4b);
    func_0x000108950b24(ppuVar7 + 0x4a);
    FUN_10896ea5c(ppuVar7 + 0x1e);
    FUN_10896ea24(ppuVar7 + 0x12);
    func_0x00010bd458ac(ppuVar7 + 0xf);
    FUN_10895c820(ppuVar7 + 1);
    return ppuVar7;
  }
  return param_1;
}



/* Entry: 108967fec; end: 108968067;  */

undefined8 * FUN_108967fec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9ffb0;
  func_0x000107c27914(param_1 + 0x5f);
  func_0x000107c27914(param_1 + 0x5b);
  FUN_108968a64(param_1 + 0x55);
  FUN_108968a64(param_1 + 0x4e);
  func_0x000108950b24(param_1 + 0x4b);
  func_0x000108950b24(param_1 + 0x4a);
  FUN_10896ea5c(param_1 + 0x1e);
  FUN_10896ea24(param_1 + 0x12);
  func_0x00010bd458ac(param_1 + 0xf);
  FUN_10895c820(param_1 + 1);
  return param_1;
}



/* Entry: 108968068; end: 10896806b;  */

undefined8 * FUN_108968068(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9ffb0;
  func_0x000107c27914(param_1 + 0x5f);
  func_0x000107c27914(param_1 + 0x5b);
  FUN_108968a64(param_1 + 0x55);
  FUN_108968a64(param_1 + 0x4e);
  func_0x000108950b24(param_1 + 0x4b);
  func_0x000108950b24(param_1 + 0x4a);
  FUN_10896ea5c(param_1 + 0x1e);
  FUN_10896ea24(param_1 + 0x12);
  func_0x00010bd458ac(param_1 + 0xf);
  FUN_10895c820(param_1 + 1);
  return param_1;
}



/* Entry: 10896806c; end: 10896807f;  */

void FUN_10896806c(void)

{
  FUN_108967fec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108968080; end: 1089681a7;  */

void FUN_108968080(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *puVar3;
  long unaff_x21;
  long alStack_148 [6];
  undefined1 auStack_118 [24];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 *apuStack_98 [3];
  undefined **ppuStack_80;
  undefined8 **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x0001089714ac();
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  uStack_28 = extraout_x8;
  func_0x0001089721e8();
  ppuStack_78 = apuStack_98;
  ppuStack_80 = &PTR_FUN_110a9cb70;
  ppuStack_70 = &PTR_FUN_110a9cad0;
  ppuStack_68 = &PTR_DAT_110a9cb90;
  apuStack_98[0] = puVar3;
  func_0x00010bd3f528(auStack_60,apuStack_98);
  func_0x000108968b5c(&uStack_a0);
  FUN_10895c544(auStack_b0);
  func_0x000108971f20();
  uStack_c0 = uStack_a0;
  uStack_a0 = 0;
  puVar2 = &uStack_c0;
  func_0x000108969458(auStack_b8,puVar2,apuStack_98,0,0);
  FUN_108968bf8(auStack_b8);
  func_0x000108971f5c();
  func_0x000108971f08();
  puVar1 = &uStack_a0;
  FUN_1089694f4();
  func_0x000108971ef0();
  func_0x000108971f78();
  *(undefined4 *)(unaff_x19 + 0x260) = 1;
  func_0x000108971480(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108971f5c();
  func_0x000108971f08();
  FUN_1089694f4(&uStack_a0);
  func_0x000108971ef0();
  func_0x000108971f78();
  func_0x000108971660();
  func_0x0001089717c8();
  func_0x00010897225c(puVar2[1]);
  func_0x000108b865c0();
  func_0x000108972148();
  func_0x000107c27914(unaff_x21 + 0x18);
  func_0x000108967aa8(alStack_148,puVar3[1],1);
  if (puVar3[1] != 0) {
    _memmove(alStack_148[0] + 4,*puVar3);
  }
  FUN_108968250(puVar1,alStack_148,1);
  func_0x000107c27914(auStack_118);
  return;
}



/* Entry: 1089681a8; end: 10896824f;  */

void FUN_1089681a8(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  long alStack_78 [6];
  undefined1 auStack_48 [24];
  
  func_0x0001089717c8();
  func_0x00010897225c(*(undefined8 *)(param_2 + 8));
  func_0x000108b865c0();
  func_0x000108972148();
  func_0x000107c27914(unaff_x21 + 0x18);
  func_0x000108967aa8(alStack_78,unaff_x20[1],1);
  if (unaff_x20[1] != 0) {
    _memmove(alStack_78[0] + 4,*unaff_x20);
  }
  FUN_108968250();
  func_0x000107c27914(auStack_48);
  return;
}



/* Entry: 108968250; end: 1089682bf;  */

void FUN_108968250(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long unaff_x19;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [16];
  
  if (*(int *)(param_1 + 0x260) != 2) {
    return;
  }
  func_0x0001089717c8();
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (param_3 == 1) {
    lVar1 = 0x268;
  }
  else {
    if (param_3 != 0) goto FUN_108968984;
    lVar1 = 0x2a0;
  }
  FUN_108966b18(unaff_x19 + lVar1);
FUN_108968984:
  FUN_108966bdc(unaff_x19 + 0x268,param_1);
  if (((*(long *)(unaff_x19 + 0x2d0) != 0) || (*(long *)(unaff_x19 + 0x298) != 0)) &&
     ((*(byte *)(unaff_x19 + 0x2f0) & 1) == 0)) {
    *(undefined8 *)(unaff_x19 + 0x2e0) = *(undefined8 *)(unaff_x19 + 0x2d8);
    func_0x0001089721f4(unaff_x19 + 0x2a0);
    func_0x0001089721f4(unaff_x19 + 0x268);
    *(undefined1 *)(unaff_x19 + 0x2f0) = 1;
    lStack_70 = unaff_x19 + 0xe8;
    lStack_60 = *(long *)(unaff_x19 + 0x2e0) - *(long *)(unaff_x19 + 0x2d8);
    lStack_68 = 0;
    if (lStack_60 != 0) {
      lStack_68 = *(long *)(unaff_x19 + 0x2d8);
    }
    func_0x0001089721e8();
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    func_0x000108971c78(&lStack_70,&uStack_88);
    FUN_10896d588();
    FUN_10895c544(auStack_48);
    func_0x000108971f78();
  }
  return;
}



/* Entry: 1089682c0; end: 10896842b;  */

void FUN_1089682c0(undefined1 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  undefined1 auStack_a0 [24];
  long lStack_88;
  int iStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  uVar1 = param_3;
  func_0x00010b4fcc14();
  if (uVar1 < 0x1f7d) {
    func_0x000108b865c0(auStack_b8,uVar1 + 4,0);
    func_0x000108972148();
    func_0x000107c27914(auStack_a0);
    func_0x000108967aa8(&lStack_88,uVar1,0);
    func_0x00010b4d1758(param_3,lStack_88 + 4,iStack_80 + -4);
    if ((param_3 & 1) == 0) {
      FUN_108b80b94(auStack_b8,0x7e9,&UNK_10f4ed75a);
      func_0x000108971c84();
      *(undefined4 *)(param_1 + 8) = uStack_b0;
      func_0x000108971e58();
      param_1[0x28] = 1;
      func_0x000108b80d84(auStack_b8);
    }
    else {
      FUN_108968250(param_2,&lStack_88,0);
      *param_1 = 0;
      param_1[0x28] = 0;
    }
    func_0x000107c27914(auStack_58);
  }
  else {
    FUN_108b80b94(&lStack_88,0x7e9,&UNK_10f4ed73e);
    func_0x000108971c84();
    *(int *)(param_1 + 8) = iStack_80;
    *(undefined8 *)(param_1 + 0x18) = uStack_70;
    *(undefined8 *)(param_1 + 0x10) = uStack_78;
    *(undefined8 *)(param_1 + 0x20) = uStack_68;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    param_1[0x28] = 1;
    func_0x0001089718c0();
  }
  return;
}



/* Entry: 10896842c; end: 108968563;  */

void FUN_10896842c(long param_1)

{
  int iVar1;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = *(int *)(param_1 + 0x260);
  *(undefined4 *)(param_1 + 0x260) = 3;
  if (iVar1 != 3) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001089684b4(auStack_50,param_1 + 0x90,&uStack_38);
    func_0x0001089684d8(auStack_50,param_1 + 0x90,2,&uStack_38);
    func_0x000108968500(auStack_50,param_1 + 0x90,&uStack_38);
    FUN_1089a46c0(*(undefined8 *)(param_1 + 0x250));
    FUN_1089a46c0(*(undefined8 *)(param_1 + 600));
  }
  return;
}



/* Entry: 108968564; end: 10896861f;  */

byte * FUN_108968564(long param_1)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = param_1;
  func_0x00010bd42e30();
  uVar1 = param_1 + 3;
  if (lVar2 != 0) {
    for (lVar5 = 0; lVar5 != 0x10; lVar5 = lVar5 + 8) {
      pbVar3 = *(byte **)(lVar2 + 0x10 + lVar5);
      if ((pbVar3 != (byte *)0x0) && (((ulong)pbVar3 & 0xf) == 0 && uVar1 >> 2 <= (ulong)*pbVar3)) {
        *(undefined8 *)(lVar2 + lVar5 + 0x10) = 0;
        bVar4 = *pbVar3;
        goto LAB_108968610;
      }
    }
    lVar5 = *(long *)(lVar2 + 0x10);
    if (lVar5 == 0) {
      lVar5 = *(long *)(lVar2 + 0x18);
      if (lVar5 == 0) goto LAB_1089685f4;
      lVar6 = 3;
    }
    else {
      lVar6 = 2;
    }
    *(undefined8 *)(lVar2 + lVar6 * 8) = 0;
    FUN_10894e15c(lVar5);
  }
LAB_1089685f4:
  pbVar3 = (byte *)0x10;
  FUN_10894e104(0x10,uVar1 & 0xfffffffffffffffc | 1);
  bVar4 = (byte)(uVar1 >> 2);
  if (0x3ff < uVar1) {
    bVar4 = 0;
  }
LAB_108968610:
  pbVar3[param_1] = bVar4;
  return pbVar3;
}



/* Entry: 108968620; end: 108968657;  */

void FUN_108968620(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined1 auStack_28 [24];
  
  if (((*(char *)(param_2 + 0x72) == '\x01') && (*(long *)(param_2 + 0x68) != 0)) &&
     (*(int *)(*(long *)(param_2 + 0x68) + 8) != 0)) {
    func_0x00010897181c(auStack_28);
    func_0x000108971f9c();
    func_0x0001089722d4();
    puVar1 = (undefined8 *)0x108;
    FUN_108968564();
    *puVar1 = FUN_108970040;
    puVar1[1] = FUN_1089702e0;
    puVar1[0x1b] = unaff_x19;
    func_0x0001089717b4();
    *(undefined1 *)(puVar1 + 0x20) = 0;
    return;
  }
  uVar2 = *param_3;
  *param_3 = 0;
  *param_1 = uVar2;
  return;
}



/* Entry: 108968658; end: 108968697;  */

void FUN_108968658(void)

{
  undefined8 *puVar1;
  undefined8 unaff_x19;
  
  func_0x0001089722d4();
  puVar1 = (undefined8 *)0x108;
  FUN_108968564();
  *puVar1 = FUN_108970040;
  puVar1[1] = FUN_1089702e0;
  puVar1[0x1b] = unaff_x19;
  func_0x0001089717b4();
  *(undefined1 *)(puVar1 + 0x20) = 0;
  return;
}



/* Entry: 108968698; end: 1089686db;  */

void FUN_108968698(long *param_1)

{
  long lStack_28;
  
  lStack_28 = *param_1;
  *param_1 = 0;
  *(undefined8 *)(lStack_28 + 0x10) = 0;
  FUN_108968df8(lStack_28);
  FUN_10896ec44(&lStack_28);
  return;
}



/* Entry: 1089686dc; end: 10896870f;  */

void FUN_1089686dc(long param_1)

{
  int iVar1;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x18))();
  }
  iVar1 = *(int *)(param_1 + 0x260);
  *(undefined4 *)(param_1 + 0x260) = 3;
  if (iVar1 != 3) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001089684b4(auStack_50,param_1 + 0x90,&uStack_38);
    func_0x0001089684d8(auStack_50,param_1 + 0x90,2,&uStack_38);
    func_0x000108968500(auStack_50,param_1 + 0x90,&uStack_38);
    FUN_1089a46c0(*(undefined8 *)(param_1 + 0x250));
    FUN_1089a46c0(*(undefined8 *)(param_1 + 600));
  }
  return;
}



/* Entry: 108968710; end: 1089687a7;  */

void FUN_108968710(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  uVar1 = param_2;
  uStack_60 = param_3;
  uStack_58 = param_4;
  FUN_108b86440();
  FUN_108969520(auStack_90,param_2);
  func_0x000107c2a67c(auStack_50,&uStack_60,auStack_90);
  func_0x000107c2793c(&UNK_10f3174d2);
  func_0x000107c3173c(auStack_78);
  func_0x000108971c84();
  *(int *)(param_1 + 8) = (int)uVar1;
  func_0x000108971e58();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  func_0x000108971f80();
  return;
}



/* Entry: 1089687a8; end: 10896881b;  */

void FUN_1089687a8(void)

{
  undefined8 *puVar1;
  undefined8 unaff_x19;
  
  func_0x0001089722d4();
  puVar1 = (undefined8 *)0x120;
  FUN_108968564();
  *puVar1 = FUN_1089705a4;
  puVar1[1] = FUN_1089709a0;
  puVar1[0x21] = unaff_x19;
  func_0x0001089717b4();
  *(undefined1 *)((long)puVar1 + 0x114) = 0;
  return;
}



/* Entry: 10896881c; end: 10896887f;  */

void FUN_10896881c(long param_1)

{
  long lVar1;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001089717c8();
  func_0x00010bd42e30();
  if ((unaff_x20 < 0x3fd) && (param_1 != 0)) {
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar1 = 2;
    }
    else {
      if (*(long *)(param_1 + 0x18) != 0) goto FUN_10894e15c;
      lVar1 = 3;
    }
    *unaff_x19 = unaff_x19[unaff_x20];
    *(undefined1 **)(param_1 + lVar1 * 8) = unaff_x19;
    return;
  }
FUN_10894e15c:
  if (unaff_x19 != (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(unaff_x19 + -8));
    return;
  }
  return;
}



/* Entry: 108968880; end: 1089688b7;  */

undefined8 * FUN_108968880(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lStack_58;
  long alStack_28 [3];
  
  if (((*(char *)(param_2 + 0x72) == '\x01') && (*(long *)(param_2 + 0x68) != 0)) &&
     (*(int *)(*(long *)(param_2 + 0x68) + 8) != 0)) {
    plVar1 = alStack_28;
    func_0x00010897181c();
    func_0x000108971f9c();
    lVar3 = *plVar1;
    *plVar1 = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    lStack_58 = lVar3;
    FUN_108968df8(lVar3);
    puVar4 = *(undefined8 **)(lVar3 + 0x20);
    FUN_10896ecb8(&lStack_58);
    return puVar4;
  }
  uVar2 = *param_3;
  *param_3 = 0;
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 1089688b8; end: 108968903;  */

undefined8 FUN_1089688b8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_28;
  
  lVar1 = *param_1;
  *param_1 = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lStack_28 = lVar1;
  FUN_108968df8(lVar1);
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  FUN_10896ecb8(&lStack_28);
  return uVar2;
}



/* Entry: 108968904; end: 108968983;  */

void FUN_108968904(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = param_1;
  func_0x000108971bcc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_38,param_1);
  func_0x000108971c84(0x10896892c);
  *(undefined4 *)(lVar2 + 8) = 0x7e5;
  *(undefined8 *)(lVar2 + 0x18) = uStack_30;
  *(undefined8 *)(lVar2 + 0x10) = uStack_38;
  *(undefined8 *)(lVar2 + 0x20) = uStack_28;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000108971a20();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108968970);
  (*pcVar1)();
}



/* Entry: 108968984; end: 108968a63;  */

void FUN_108968984(long param_1)

{
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  FUN_108966bdc(param_1 + 0x268);
  if (((*(long *)(param_1 + 0x2d0) != 0) || (*(long *)(param_1 + 0x298) != 0)) &&
     ((*(byte *)(param_1 + 0x2f0) & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x2d8);
    func_0x0001089721f4(param_1 + 0x2a0);
    func_0x0001089721f4(param_1 + 0x268);
    *(undefined1 *)(param_1 + 0x2f0) = 1;
    lStack_70 = param_1 + 0xe8;
    lStack_60 = *(long *)(param_1 + 0x2e0) - *(long *)(param_1 + 0x2d8);
    lStack_68 = 0;
    if (lStack_60 != 0) {
      lStack_68 = *(long *)(param_1 + 0x2d8);
    }
    func_0x0001089721e8();
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    lStack_38 = param_1;
    func_0x000108971c78(&lStack_70,&uStack_88);
    FUN_10896d588();
    FUN_10895c544(auStack_48);
    func_0x000108971f78();
  }
  return;
}



/* Entry: 108968a64; end: 108968bf7;  */

long * FUN_108968a64(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  plVar1 = param_1;
  FUN_108966cd4();
  lVar3 = param_2;
  func_0x000108966cfc(param_1);
  do {
    lVar6 = param_2 + -0xff0;
    do {
      if (param_2 == lVar3) {
        param_1[5] = 0;
        puVar4 = (undefined8 *)param_1[1];
        while( true ) {
          puVar5 = (undefined8 *)param_1[2];
          uVar2 = (long)puVar5 - (long)puVar4 >> 3;
          if (uVar2 < 3) break;
          __ZdlPv(*puVar4);
          puVar4 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar4;
        }
        if (uVar2 == 1) {
          lVar3 = 0x19;
        }
        else {
          if (uVar2 != 2) goto LAB_108968b24;
          lVar3 = 0x33;
        }
        param_1[4] = lVar3;
LAB_108968b24:
        for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
          __ZdlPv(*puVar4);
        }
        FUN_108967a44(param_1,param_1[1]);
        if (*param_1 != 0) {
          __ZdlPv();
        }
        return param_1;
      }
      func_0x000107c27914(param_2 + 0x30);
      param_2 = param_2 + 0x50;
      lVar6 = lVar6 + 0x50;
    } while (*plVar1 != lVar6);
    plVar1 = plVar1 + 1;
    param_2 = *plVar1;
  } while( true );
}



/* Entry: 108968bf8; end: 108968c2f;  */

void FUN_108968bf8(long *param_1)

{
  long extraout_x8;
  undefined8 *puVar1;
  long *unaff_x19;
  
  *(long **)(*(long *)(*param_1 + 0x58) + 8) = param_1;
  func_0x000108971ddc();
  puVar1 = *(undefined8 **)(extraout_x8 + 0x58);
  do {
    (**(code **)*puVar1)();
    if (*unaff_x19 == 0) {
      return;
    }
    puVar1 = *(undefined8 **)(*unaff_x19 + 0x58);
  } while (puVar1 != (undefined8 *)0x0);
  *unaff_x19 = 0;
  FUN_108968df8();
  func_0x0001089719fc();
  return;
}



/* Entry: 108968c30; end: 108968d27;  */

undefined1  [16] FUN_108968c30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1[3];
  *param_1 = &PTR_DAT_110aa0030;
  func_0x00010bd3f73c(param_1 + 1);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 108968d28; end: 108968d2b;  */

void FUN_108968d28(undefined8 *param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar1;
  long *unaff_x19;
  
  func_0x000108971ddc();
  *(undefined8 **)(*(long *)(extraout_x8 + 0x58) + 8) = param_1;
  func_0x0001089716d4(*param_1);
  FUN_10897219c();
  func_0x000108971ddc();
  puVar1 = *(undefined8 **)(extraout_x8_00 + 0x58);
  do {
    (**(code **)*puVar1)();
    if (*unaff_x19 == 0) {
      return;
    }
    puVar1 = *(undefined8 **)(*unaff_x19 + 0x58);
  } while (puVar1 != (undefined8 *)0x0);
  *unaff_x19 = 0;
  FUN_108968df8();
  func_0x0001089719fc();
  return;
}



/* Entry: 108968d2c; end: 108968d5b;  */

void FUN_108968d2c(undefined8 *param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar1;
  long *unaff_x19;
  
  func_0x000108971ddc();
  *(undefined8 **)(*(long *)(extraout_x8 + 0x58) + 8) = param_1;
  func_0x0001089716d4(*param_1);
  FUN_10897219c();
  func_0x000108971ddc();
  puVar1 = *(undefined8 **)(extraout_x8_00 + 0x58);
  do {
    (**(code **)*puVar1)();
    if (*unaff_x19 == 0) {
      return;
    }
    puVar1 = *(undefined8 **)(*unaff_x19 + 0x58);
  } while (puVar1 != (undefined8 *)0x0);
  *unaff_x19 = 0;
  FUN_108968df8();
  func_0x0001089719fc();
  return;
}



/* Entry: 108968d5c; end: 108968d7b;  */

void FUN_108968d5c(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x00010bd3f7b8(&uStack_18);
  return;
}



/* Entry: 108968d7c; end: 108968d9f;  */

void FUN_108968d7c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 8) = *(undefined8 *)(param_1 + 8);
  }
  func_0x000108971930();
  return;
}



/* Entry: 108968da0; end: 108968df7;  */

void FUN_108968da0(void)

{
  long extraout_x8;
  undefined8 *puVar1;
  long *unaff_x19;
  
  func_0x000108971ddc();
  puVar1 = *(undefined8 **)(extraout_x8 + 0x58);
  do {
    (**(code **)*puVar1)();
    if (*unaff_x19 == 0) {
      return;
    }
    puVar1 = *(undefined8 **)(*unaff_x19 + 0x58);
  } while (puVar1 != (undefined8 *)0x0);
  *unaff_x19 = 0;
  FUN_108968df8();
  func_0x0001089719fc();
  return;
}



/* Entry: 108968df8; end: 108968e53;  */

void FUN_108968df8(long param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  uStack_30 = 0;
  FUN_108968e54(auStack_28,(long *)(param_1 + 0x18),&uStack_30);
  __ZNSt13exception_ptrC1ERKS_(auStack_38,auStack_28);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108968e40);
  (*pcVar1)();
}



/* Entry: 108968e54; end: 108968e8b;  */

void FUN_108968e54(undefined8 param_1,undefined8 param_2)

{
  __ZNSt13exception_ptrC1ERKS_(param_1,param_2);
  func_0x000108971994();
  __ZNSt13exception_ptraSERKS_();
  func_0x000108971cfc();
  return;
}



/* Entry: 108968e8c; end: 108968edb;  */

void FUN_108968e8c(void)

{
  int unaff_w19;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  func_0x000108971d84();
  FUN_108968edc(auStack_40);
  if (unaff_w19 != 0) {
    FUN_108968d2c(auStack_48);
  }
  func_0x000108971ed0();
  FUN_108968f14(auStack_40);
  return;
}



/* Entry: 108968edc; end: 108968f13;  */

void FUN_108968edc(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000108971864();
  if (extraout_x8 != 0) {
    func_0x000108972168();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x0001089720d4();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 108968f14; end: 108968f37;  */

undefined8 FUN_108968f14(undefined8 param_1)

{
  FUN_108968edc();
  return param_1;
}



/* Entry: 108968f38; end: 108968f7f;  */

void FUN_108968f38(void)

{
  long extraout_x8;
  undefined8 *unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x000108971ddc();
  if (extraout_x8 != 0) {
    *unaff_x19 = 0;
    FUN_108968f80(extraout_x8 + 0x20,auStack_28,0);
    func_0x0001089719fc();
  }
  FUN_1089694f4();
  return;
}



/* Entry: 108968f80; end: 108968fdb;  */

void FUN_108968f80(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar3;
  undefined8 extraout_x9;
  code *pcVar4;
  undefined1 auStack_190 [56];
  undefined8 uStack_158;
  undefined8 uStack_130;
  undefined1 uStack_121;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [56];
  undefined8 auStack_c0 [5];
  long lStack_98;
  undefined8 uStack_88;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x000108971508(param_1,param_1);
  uStack_28 = extraout_x8;
  func_0x00010bd3f528(auStack_60);
  FUN_108968fdc(auStack_60);
  func_0x000108971d40();
  func_0x000108971480(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108971918();
    func_0x00010bd43af0();
    func_0x000108971660();
    puVar2 = &uStack_130;
    func_0x000108971508();
    uStack_88 = extraout_x8_00;
    func_0x00010bd3f57c(auStack_f8);
    puVar1 = auStack_c0;
    FUN_10896911c(puVar1,auStack_f8);
    uVar3 = *param_2;
    *param_2 = 0;
    if (*(long *)(lStack_98 + 0x18) == 0) {
      pcVar4 = *(code **)(lStack_98 + 0x10);
      uStack_130 = 0;
      puStack_110 = &uStack_121;
      uStack_120 = uVar3;
      func_0x00010bd42e30();
      func_0x0001089717dc();
      uVar3 = uStack_120;
      uStack_120 = 0;
      *puVar1 = FUN_1089691a0;
      puVar1[1] = uVar3;
      uStack_108 = 0;
      uStack_100 = 0;
      puStack_118 = puVar1;
      FUN_10896922c(&puStack_110);
      (*pcVar4)(auStack_c0,&puStack_118);
      FUN_10894e00c(&puStack_118);
      func_0x000108971f08();
    }
    else {
      uStack_130 = uVar3;
      func_0x0001089719bc(auStack_c0,FUN_108969178);
    }
    FUN_1089694f4();
    func_0x000108971f20();
    func_0x000108971ef0();
    func_0x000108971480(uStack_88);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    FUN_10894e00c(&puStack_118);
    func_0x000108971f08();
    FUN_1089694f4(&uStack_130);
    func_0x000108971f20();
    func_0x000108971ef0();
    func_0x000108971660();
    func_0x0001089714ac();
    uStack_158 = extraout_x8_01;
    func_0x00010bd3f6c8(auStack_190,extraout_x9,&UNK_10df7906f,0);
    func_0x00010bd3f54c(puVar2,auStack_190);
    func_0x000108971d40();
    func_0x000108971480(uStack_158);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      *puVar2 = 0;
      func_0x0001089719fc();
      return;
    }
  }
  return;
}



/* Entry: 108968fdc; end: 108968fe7;  */

void FUN_108968fdc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar3;
  undefined8 extraout_x9;
  code *pcVar4;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  undefined8 uStack_d0;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [56];
  undefined8 auStack_60 [5];
  long lStack_38;
  undefined8 uStack_28;
  
  puVar2 = &uStack_d0;
  func_0x000108971508(param_1,param_2,0,0);
  uStack_28 = extraout_x8;
  func_0x00010bd3f57c(auStack_98);
  puVar1 = auStack_60;
  FUN_10896911c(puVar1,auStack_98);
  uVar3 = *param_2;
  *param_2 = 0;
  if (*(long *)(lStack_38 + 0x18) == 0) {
    pcVar4 = *(code **)(lStack_38 + 0x10);
    uStack_d0 = 0;
    puStack_b0 = &uStack_c1;
    uStack_c0 = uVar3;
    func_0x00010bd42e30();
    func_0x0001089717dc();
    uVar3 = uStack_c0;
    uStack_c0 = 0;
    *puVar1 = FUN_1089691a0;
    puVar1[1] = uVar3;
    uStack_a8 = 0;
    uStack_a0 = 0;
    puStack_b8 = puVar1;
    FUN_10896922c(&puStack_b0);
    (*pcVar4)(auStack_60,&puStack_b8);
    FUN_10894e00c(&puStack_b8);
    func_0x000108971f08();
  }
  else {
    uStack_d0 = uVar3;
    func_0x0001089719bc(auStack_60,FUN_108969178);
  }
  FUN_1089694f4();
  func_0x000108971f20();
  func_0x000108971ef0();
  func_0x000108971480(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10894e00c(&puStack_b8);
  func_0x000108971f08();
  FUN_1089694f4(&uStack_d0);
  func_0x000108971f20();
  func_0x000108971ef0();
  func_0x000108971660();
  func_0x0001089714ac();
  uStack_f8 = extraout_x8_00;
  func_0x00010bd3f6c8(auStack_130,extraout_x9,&UNK_10df7906f,0);
  func_0x00010bd3f54c(puVar2,auStack_130);
  func_0x000108971d40();
  func_0x000108971480(uStack_f8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *puVar2 = 0;
  func_0x0001089719fc();
  return;
}



/* Entry: 108968fe8; end: 10896911b;  */

void FUN_108968fe8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar3;
  undefined8 extraout_x9;
  code *pcVar4;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  undefined8 uStack_d0;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [56];
  undefined8 auStack_60 [5];
  long lStack_38;
  undefined8 uStack_28;
  
  puVar2 = &uStack_d0;
  func_0x000108971508();
  uStack_28 = extraout_x8;
  func_0x00010bd3f57c(auStack_98);
  puVar1 = auStack_60;
  FUN_10896911c(puVar1,auStack_98);
  uVar3 = *param_2;
  *param_2 = 0;
  if (*(long *)(lStack_38 + 0x18) == 0) {
    pcVar4 = *(code **)(lStack_38 + 0x10);
    uStack_d0 = 0;
    puStack_b0 = &uStack_c1;
    uStack_c0 = uVar3;
    func_0x00010bd42e30();
    func_0x0001089717dc();
    uVar3 = uStack_c0;
    uStack_c0 = 0;
    *puVar1 = FUN_1089691a0;
    puVar1[1] = uVar3;
    uStack_a8 = 0;
    uStack_a0 = 0;
    puStack_b8 = puVar1;
    FUN_10896922c(&puStack_b0);
    (*pcVar4)(auStack_60,&puStack_b8);
    FUN_10894e00c(&puStack_b8);
    func_0x000108971f08();
  }
  else {
    uStack_d0 = uVar3;
    func_0x0001089719bc(auStack_60,FUN_108969178);
  }
  FUN_1089694f4();
  func_0x000108971f20();
  func_0x000108971ef0();
  func_0x000108971480(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10894e00c(&puStack_b8);
  func_0x000108971f08();
  FUN_1089694f4(&uStack_d0);
  func_0x000108971f20();
  func_0x000108971ef0();
  func_0x000108971660();
  func_0x0001089714ac();
  uStack_f8 = extraout_x8_00;
  func_0x00010bd3f6c8(auStack_130,extraout_x9,&UNK_10df7906f,0);
  func_0x00010bd3f54c(puVar2,auStack_130);
  func_0x000108971d40();
  func_0x000108971480(uStack_f8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *puVar2 = 0;
  func_0x0001089719fc();
  return;
}



/* Entry: 10896911c; end: 108969177;  */

void FUN_10896911c(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 *unaff_x19;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x0001089714ac();
  uStack_28 = extraout_x8;
  func_0x00010bd3f6c8(auStack_60,extraout_x9,&UNK_10df7906f,0);
  func_0x00010bd3f54c();
  func_0x000108971d40();
  func_0x000108971480(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *unaff_x19 = 0;
  func_0x0001089719fc();
  return;
}



/* Entry: 108969178; end: 10896917b;  */

void FUN_108969178(undefined8 *param_1)

{
  *param_1 = 0;
  func_0x0001089719fc();
  return;
}



/* Entry: 10896917c; end: 10896919f;  */

void FUN_10896917c(undefined8 *param_1)

{
  *param_1 = 0;
  func_0x0001089719fc();
  return;
}



/* Entry: 1089691a0; end: 1089691ef;  */

void FUN_1089691a0(void)

{
  int unaff_w19;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  func_0x000108971d84();
  FUN_1089691f0(auStack_40);
  if (unaff_w19 != 0) {
    FUN_10896917c(auStack_48);
  }
  func_0x0001089719fc();
  FUN_10896922c(auStack_40);
  return;
}



/* Entry: 1089691f0; end: 10896922b;  */

void FUN_1089691f0(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000108971864();
  if (extraout_x8 != 0) {
    FUN_1089694f4(extraout_x8 + 8);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x0001089720d4();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10896922c; end: 10896924f;  */

undefined8 FUN_10896922c(undefined8 param_1)

{
  FUN_1089691f0();
  return param_1;
}



/* Entry: 108969250; end: 108969253;  */

void FUN_108969250(void)

{
  func_0x000108971fdc();
  func_0x000108971cfc();
  return;
}



/* Entry: 108969254; end: 10896926f;  */

void FUN_108969254(void)

{
  func_0x000108971fdc();
  func_0x000108971cfc();
  return;
}



/* Entry: 108969270; end: 108969293;  */

undefined8 FUN_108969270(undefined8 param_1)

{
  FUN_1089692fc();
  return param_1;
}



/* Entry: 108969294; end: 1089692fb;  */

void FUN_108969294(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  int unaff_w19;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x0001089719a0();
  func_0x0001089714f8();
  func_0x000108971974();
  FUN_1089692fc(auStack_58);
  if (unaff_w19 != 0) {
    FUN_108969254(auStack_38);
  }
  func_0x000108971ec0();
  puVar1 = auStack_58;
  FUN_108969270();
  func_0x000108971480(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108971ec0();
  FUN_108969270(auStack_58);
  func_0x000108971660();
  func_0x000108971864();
  if (extraout_x8 != 0) {
    __ZNSt13exception_ptrD1Ev(extraout_x8 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = 0;
  }
  if (*(long *)(puVar1 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x000108972104();
    *(undefined8 *)(puVar1 + 8) = 0;
  }
  return;
}



/* Entry: 1089692fc; end: 108969337;  */

void FUN_1089692fc(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000108971864();
  if (extraout_x8 != 0) {
    __ZNSt13exception_ptrD1Ev(extraout_x8 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x000108972104();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 108969338; end: 10896933b;  */

void FUN_108969338(void)

{
  func_0x000108971fdc();
  func_0x000108971cfc();
  return;
}



/* Entry: 10896933c; end: 108969357;  */

void FUN_10896933c(void)

{
  func_0x000108971fdc();
  func_0x000108971cfc();
  return;
}



/* Entry: 108969358; end: 10896937b;  */

undefined8 FUN_108969358(undefined8 param_1)

{
  FUN_1089693e4();
  return param_1;
}



/* Entry: 10896937c; end: 1089693e3;  */

void FUN_10896937c(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  int unaff_w19;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x0001089719a0();
  func_0x0001089714f8();
  func_0x000108971974();
  FUN_1089693e4(auStack_58);
  if (unaff_w19 != 0) {
    FUN_10896933c(auStack_38);
  }
  func_0x000108971ec0();
  puVar1 = auStack_58;
  FUN_108969358();
  func_0x000108971480(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108971ec0();
  FUN_108969358(auStack_58);
  func_0x000108971660();
  func_0x000108971864();
  if (extraout_x8 != 0) {
    __ZNSt13exception_ptrD1Ev(extraout_x8 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = 0;
  }
  if (*(long *)(puVar1 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x000108972104();
    *(undefined8 *)(puVar1 + 8) = 0;
  }
  return;
}



/* Entry: 1089693e4; end: 10896948f;  */

void FUN_1089693e4(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000108971864();
  if (extraout_x8 != 0) {
    __ZNSt13exception_ptrD1Ev(extraout_x8 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x000108972104();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 108969490; end: 1089694f3;  */

long * FUN_108969490(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = lVar1;
  *(long *)(lVar1 + 0x58) = lVar1;
  func_0x00010bd3f528(*param_1 + 0x20,param_3);
  *(undefined1 *)(*param_1 + 0x70) = 1;
  *(undefined8 *)(*param_1 + 0x60) = param_4;
  *(undefined8 *)(*param_1 + 0x68) = param_5;
  return param_1;
}



/* Entry: 1089694f4; end: 10896951f;  */

void FUN_1089694f4(void)

{
  long extraout_x8;
  code *extraout_x8_00;
  
  func_0x000108971ddc();
  if (extraout_x8 != 0) {
    func_0x000108971808();
    (*extraout_x8_00)();
  }
  return;
}



/* Entry: 108969520; end: 108969583;  */

void FUN_108969520(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    ppuVar1 = &PTR_PTR_113289a30;
  }
  else {
    if (*(long *)(param_2 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbca40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNKSt3__110error_code7messageEv_110346048)(param_1);
      return;
    }
    ppuVar1 = *(undefined ***)(param_2 + 8);
  }
  FUN_10894f438();
                    /* WARNING: Could not recover jumptable at 0x000108969580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar1 + 0x20))(param_1,ppuVar1,param_2);
  return;
}



/* Entry: 108969584; end: 1089695cb;  */

undefined8 * FUN_108969584(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1089695cc(&uStack_38,param_2);
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  return param_1;
}



/* Entry: 1089695cc; end: 1089695df;  */

undefined8 * FUN_1089695cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = param_2;
  func_0x000100069674(param_2,&PTR_PTR_113409a48);
  *(int *)param_1 = (int)param_2;
  uVar1 = 2;
  if ((int)uVar2 != 0) {
    uVar1 = 3;
  }
  param_1[1] = &PTR_PTR_113409a48;
  param_1[2] = uVar1;
  return param_1;
}



/* Entry: 1089695e0; end: 1089696c3;  */

void FUN_1089695e0(long param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  int aiStack_48 [4];
  ulong uStack_38;
  
  func_0x00010bd41388(aiStack_48,param_1 + 0x28,param_2,*param_3,1,6,param_4);
  if (((uStack_38 & 1) == 0) || ((uStack_38 == 1 && (aiStack_48[0] == 0)))) {
    *(undefined4 *)(param_2 + 0x10) = *param_3;
  }
  func_0x000108971770();
  return;
}



/* Entry: 1089696c4; end: 1089696c7;  */

void FUN_1089696c4(long param_1)

{
  long lVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long extraout_x8;
  undefined8 *puVar5;
  undefined8 extraout_x8_00;
  long lVar6;
  long *unaff_x19;
  code *pcVar7;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 uStack_c9;
  long *plStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long alStack_a8 [5];
  long lStack_80;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_38;
  
  func_0x0001089714ac();
  uStack_38 = extraout_x8_00;
  func_0x0001089715c0();
  func_0x000108971814(param_1 + 0x20);
  plVar3 = alStack_a8;
  func_0x00010bd3f54c(plVar3,&lStack_70);
  func_0x0001089717d4();
  lVar6 = *unaff_x19;
  *unaff_x19 = 0;
  lStack_e0 = unaff_x19[2];
  lStack_e8 = unaff_x19[1];
  lStack_d8 = unaff_x19[3];
  if (*(code **)(lStack_80 + 0x18) == (code *)0x0) {
    pcVar7 = *(code **)(lStack_80 + 0x10);
    lStack_f0 = 0;
    lStack_60 = unaff_x19[2];
    lStack_68 = unaff_x19[1];
    lStack_58 = unaff_x19[3];
    puStack_c0 = &uStack_c9;
    lStack_70 = lVar6;
    func_0x00010bd42e30();
    func_0x0001089717dc();
    lVar6 = lStack_70;
    lStack_70 = 0;
    plVar3[1] = lVar6;
    lVar1 = lStack_58;
    lVar6 = lStack_68;
    plVar3[3] = lStack_60;
    plVar3[2] = lVar6;
    plVar3[4] = lVar1;
    *plVar3 = (long)FUN_108969c20;
    uStack_b8 = 0;
    uStack_b0 = 0;
    plStack_c8 = plVar3;
    FUN_108969ca4(&puStack_c0);
    (*pcVar7)(alStack_a8,&plStack_c8);
    FUN_10894e00c(&plStack_c8);
    FUN_108968f38(&lStack_70);
  }
  else {
    lStack_f0 = lVar6;
    (**(code **)(lStack_80 + 0x18))(alStack_a8,FUN_108969830,&lStack_f0);
  }
  func_0x0001089718d0();
  plVar3 = alStack_a8;
  func_0x00010bd43af0();
  func_0x000108971480(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10894e00c(&plStack_c8);
    FUN_108968f38(&lStack_70);
    func_0x0001089718d0();
    plVar4 = alStack_a8;
    func_0x00010bd43af0();
    func_0x000108971660();
    iVar2 = (int)plVar4 + 8;
    func_0x0001089717c8();
    *(long **)(*(long *)(*plVar4 + 0x58) + 8) = plVar4;
    func_0x000107c2a678();
    if (iVar2 != 0) {
      func_0x00010bdb1c9c(*(undefined8 *)(*plVar3 + 0x58),&lStack_70);
    }
    func_0x0001089716d4(*plVar3);
    FUN_10897219c();
    func_0x000108971ddc();
    puVar5 = *(undefined8 **)(extraout_x8 + 0x58);
    do {
      (**(code **)*puVar5)();
      if (*plVar3 == 0) {
        return;
      }
      puVar5 = *(undefined8 **)(*plVar3 + 0x58);
    } while (puVar5 != (undefined8 *)0x0);
    *plVar3 = 0;
    FUN_108968df8();
    func_0x0001089719fc();
    return;
  }
  return;
}



/* Entry: 1089696c8; end: 10896982f;  */

void FUN_1089696c8(long param_1)

{
  long lVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long extraout_x8;
  undefined8 *puVar5;
  undefined8 extraout_x8_00;
  long lVar6;
  long *unaff_x19;
  code *pcVar7;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 uStack_c9;
  long *plStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long alStack_a8 [5];
  long lStack_80;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_38;
  
  func_0x0001089714ac();
  uStack_38 = extraout_x8_00;
  func_0x0001089715c0();
  func_0x000108971814(param_1 + 0x20);
  plVar3 = alStack_a8;
  func_0x00010bd3f54c(plVar3,&lStack_70);
  func_0x0001089717d4();
  lVar6 = *unaff_x19;
  *unaff_x19 = 0;
  lStack_e0 = unaff_x19[2];
  lStack_e8 = unaff_x19[1];
  lStack_d8 = unaff_x19[3];
  if (*(code **)(lStack_80 + 0x18) == (code *)0x0) {
    pcVar7 = *(code **)(lStack_80 + 0x10);
    lStack_f0 = 0;
    lStack_60 = unaff_x19[2];
    lStack_68 = unaff_x19[1];
    lStack_58 = unaff_x19[3];
    puStack_c0 = &uStack_c9;
    lStack_70 = lVar6;
    func_0x00010bd42e30();
    func_0x0001089717dc();
    lVar6 = lStack_70;
    lStack_70 = 0;
    plVar3[1] = lVar6;
    lVar1 = lStack_58;
    lVar6 = lStack_68;
    plVar3[3] = lStack_60;
    plVar3[2] = lVar6;
    plVar3[4] = lVar1;
    *plVar3 = (long)FUN_108969c20;
    uStack_b8 = 0;
    uStack_b0 = 0;
    plStack_c8 = plVar3;
    FUN_108969ca4(&puStack_c0);
    (*pcVar7)(alStack_a8,&plStack_c8);
    FUN_10894e00c(&plStack_c8);
    FUN_108968f38(&lStack_70);
  }
  else {
    lStack_f0 = lVar6;
    (**(code **)(lStack_80 + 0x18))(alStack_a8,FUN_108969830,&lStack_f0);
  }
  func_0x0001089718d0();
  plVar3 = alStack_a8;
  func_0x00010bd43af0();
  func_0x000108971480(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10894e00c(&plStack_c8);
    FUN_108968f38(&lStack_70);
    func_0x0001089718d0();
    plVar4 = alStack_a8;
    func_0x00010bd43af0();
    func_0x000108971660();
    iVar2 = (int)plVar4 + 8;
    func_0x0001089717c8();
    *(long **)(*(long *)(*plVar4 + 0x58) + 8) = plVar4;
    func_0x000107c2a678();
    if (iVar2 != 0) {
      func_0x00010bdb1c9c(*(undefined8 *)(*plVar3 + 0x58),&lStack_70);
    }
    func_0x0001089716d4(*plVar3);
    FUN_10897219c();
    func_0x000108971ddc();
    puVar5 = *(undefined8 **)(extraout_x8 + 0x58);
    do {
      (**(code **)*puVar5)();
      if (*plVar3 == 0) {
        return;
      }
      puVar5 = *(undefined8 **)(*plVar3 + 0x58);
    } while (puVar5 != (undefined8 *)0x0);
    *plVar3 = 0;
    FUN_108968df8();
    func_0x0001089719fc();
    return;
  }
  return;
}



/* Entry: 108969830; end: 10896983b;  */

void FUN_108969830(long *param_1)

{
  int iVar1;
  long extraout_x8;
  undefined8 *puVar2;
  long *unaff_x19;
  
  iVar1 = (int)param_1 + 8;
  func_0x0001089717c8();
  *(long **)(*(long *)(*param_1 + 0x58) + 8) = param_1;
  func_0x000107c2a678();
  if (iVar1 != 0) {
    func_0x00010bdb1c9c(*(undefined8 *)(*unaff_x19 + 0x58));
  }
  func_0x0001089716d4(*unaff_x19);
  FUN_10897219c();
  func_0x000108971ddc();
  puVar2 = *(undefined8 **)(extraout_x8 + 0x58);
  do {
    (**(code **)*puVar2)();
    if (*unaff_x19 == 0) {
      return;
    }
    puVar2 = *(undefined8 **)(*unaff_x19 + 0x58);
  } while (puVar2 != (undefined8 *)0x0);
  *unaff_x19 = 0;
  FUN_108968df8();
  func_0x0001089719fc();
  return;
}



/* Entry: 10896983c; end: 10896988b;  */

void FUN_10896983c(long *param_1,int param_2)

{
  long extraout_x8;
  undefined8 *puVar1;
  long *unaff_x19;
  
  func_0x0001089717c8();
  *(long **)(*(long *)(*param_1 + 0x58) + 8) = param_1;
  func_0x000107c2a678();
  if (param_2 != 0) {
    func_0x00010bdb1c9c(*(undefined8 *)(*unaff_x19 + 0x58));
  }
  func_0x0001089716d4(*unaff_x19);
  FUN_10897219c();
  func_0x000108971ddc();
  puVar1 = *(undefined8 **)(extraout_x8 + 0x58);
  do {
    (**(code **)*puVar1)();
    if (*unaff_x19 == 0) {
      return;
    }
    puVar1 = *(undefined8 **)(*unaff_x19 + 0x58);
  } while (puVar1 != (undefined8 *)0x0);
  *unaff_x19 = 0;
  FUN_108968df8();
  func_0x0001089719fc();
  return;
}



/* Entry: 10896988c; end: 10896988f;  */

void FUN_10896988c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 108969890; end: 1089698c7;  */

void FUN_108969890(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __ZNSt13runtime_errorC2ERKS_();
  func_0x000108971d78(&UNK_110aa02d8);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}


