/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109387e00; end: 109387efb;  */

long FUN_109387e00(long *param_1,undefined8 *param_2)

{
  long lVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  if (param_1[1] == param_1[2]) {
    uVar5 = *param_2;
    puVar3 = (undefined1 *)*param_1;
    uStack_30 = *puVar3;
    *puVar3 = 7;
    uStack_28 = *(undefined8 *)(puVar3 + 8);
    *(undefined8 *)(puVar3 + 8) = uVar5;
    FUN_109380ffc(&uStack_28);
    lVar1 = *param_1;
  }
  else {
    pcVar2 = *(char **)(param_1[2] + -8);
    if (*pcVar2 == '\x02') {
      puVar4 = *(undefined1 **)(pcVar2 + 8);
      puVar3 = *(undefined1 **)(puVar4 + 8);
      if (puVar3 < *(undefined1 **)(puVar4 + 0x10)) {
        *(undefined8 *)(puVar3 + 8) = 0;
        uVar5 = *param_2;
        *puVar3 = 7;
        *(undefined8 *)(puVar3 + 8) = uVar5;
        puVar3 = puVar3 + 0x10;
      }
      else {
        puVar3 = puVar4;
        FUN_109387efc();
      }
      *(undefined1 **)(puVar4 + 8) = puVar3;
      lVar1 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      uVar5 = *param_2;
      puVar3 = (undefined1 *)param_1[4];
      *puVar3 = 7;
      uStack_38 = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(puVar3 + 8) = uVar5;
      FUN_109380ffc(&uStack_38);
      lVar1 = param_1[4];
    }
  }
  return lVar1;
}



/* Entry: 109387efc; end: 109387fff;  */

undefined1 * FUN_109387efc(long *param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar9 = param_1[1] - *param_1;
  uVar1 = (lVar9 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar7 = (long)uVar5 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar7 = 0xfffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10938153c();
    }
    plStack_50 = (long *)((long)plVar3 + lVar9);
    *(undefined8 *)((long)plStack_50 + 8) = 0;
    uVar10 = *(undefined8 *)param_2;
    *(undefined1 *)plStack_50 = 7;
    *(undefined8 *)((long)plStack_50 + 8) = uVar10;
    puVar4 = (undefined1 *)((long)plStack_50 + 0x10);
    puVar8 = (undefined1 *)((long)plStack_50 + (*param_1 - param_1[1]));
    plStack_58 = plVar3;
    plStack_48 = (long *)puVar4;
    plStack_40 = plVar3 + uVar7 * 2;
    func_0x000109381570(param_1,*param_1,param_1[1],puVar8);
    plStack_58 = (long *)*param_1;
    *param_1 = (long)puVar8;
    param_1[1] = (long)puVar4;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar3 + uVar7 * 2);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    FUN_109381644(&plStack_58);
    return puVar4;
  }
  FUN_109381528();
  FUN_109381644(&plStack_58);
  __Unwind_Resume();
  if (param_1[1] == param_1[2]) {
    bVar2 = *param_2;
    puVar4 = (undefined1 *)*param_1;
    uStack_90 = *puVar4;
    *puVar4 = 4;
    uStack_88 = *(undefined8 *)(puVar4 + 8);
    *(ulong *)(puVar4 + 8) = (ulong)bVar2;
    FUN_109380ffc(&uStack_88);
    puVar4 = (undefined1 *)*param_1;
  }
  else {
    pcVar6 = *(char **)(param_1[2] + -8);
    if (*pcVar6 == '\x02') {
      puVar8 = *(undefined1 **)(pcVar6 + 8);
      puVar4 = *(undefined1 **)(puVar8 + 8);
      if (puVar4 < *(undefined1 **)(puVar8 + 0x10)) {
        *(undefined8 *)(puVar4 + 8) = 0;
        bVar2 = *param_2;
        *puVar4 = 4;
        *(ulong *)(puVar4 + 8) = (ulong)bVar2;
        puVar4 = puVar4 + 0x10;
      }
      else {
        puVar4 = puVar8;
        FUN_1093880fc();
      }
      *(undefined1 **)(puVar8 + 8) = puVar4;
      puVar4 = (undefined1 *)(*(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10);
    }
    else {
      bVar2 = *param_2;
      puVar4 = (undefined1 *)param_1[4];
      *puVar4 = 4;
      uStack_98 = *(undefined8 *)(puVar4 + 8);
      *(ulong *)(puVar4 + 8) = (ulong)bVar2;
      FUN_109380ffc(&uStack_98);
      puVar4 = (undefined1 *)param_1[4];
    }
  }
  return puVar4;
}



/* Entry: 109388000; end: 1093880fb;  */

long FUN_109388000(long *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  if (param_1[1] == param_1[2]) {
    bVar1 = *param_2;
    puVar4 = (undefined1 *)*param_1;
    uStack_30 = *puVar4;
    *puVar4 = 4;
    uStack_28 = *(undefined8 *)(puVar4 + 8);
    *(ulong *)(puVar4 + 8) = (ulong)bVar1;
    FUN_109380ffc(&uStack_28);
    lVar2 = *param_1;
  }
  else {
    pcVar3 = *(char **)(param_1[2] + -8);
    if (*pcVar3 == '\x02') {
      puVar5 = *(undefined1 **)(pcVar3 + 8);
      puVar4 = *(undefined1 **)(puVar5 + 8);
      if (puVar4 < *(undefined1 **)(puVar5 + 0x10)) {
        *(undefined8 *)(puVar4 + 8) = 0;
        bVar1 = *param_2;
        *puVar4 = 4;
        *(ulong *)(puVar4 + 8) = (ulong)bVar1;
        puVar4 = puVar4 + 0x10;
      }
      else {
        puVar4 = puVar5;
        FUN_1093880fc();
      }
      *(undefined1 **)(puVar5 + 8) = puVar4;
      lVar2 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      bVar1 = *param_2;
      puVar4 = (undefined1 *)param_1[4];
      *puVar4 = 4;
      uStack_38 = *(undefined8 *)(puVar4 + 8);
      *(ulong *)(puVar4 + 8) = (ulong)bVar1;
      FUN_109380ffc(&uStack_38);
      lVar2 = param_1[4];
    }
  }
  return lVar2;
}



/* Entry: 1093880fc; end: 1093881ff;  */

undefined1 * FUN_1093880fc(long *param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar9 = param_1[1] - *param_1;
  uVar1 = (lVar9 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar7 = (long)uVar5 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar7 = 0xfffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10938153c();
    }
    plStack_50 = (long *)((long)plVar3 + lVar9);
    *(undefined8 *)((long)plStack_50 + 8) = 0;
    bVar2 = *param_2;
    *(undefined1 *)plStack_50 = 4;
    *(ulong *)((long)plStack_50 + 8) = (ulong)bVar2;
    puVar4 = (undefined1 *)((long)plStack_50 + 0x10);
    puVar8 = (undefined1 *)((long)plStack_50 + (*param_1 - param_1[1]));
    plStack_58 = plVar3;
    plStack_48 = (long *)puVar4;
    plStack_40 = plVar3 + uVar7 * 2;
    func_0x000109381570(param_1,*param_1,param_1[1],puVar8);
    plStack_58 = (long *)*param_1;
    *param_1 = (long)puVar8;
    param_1[1] = (long)puVar4;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar3 + uVar7 * 2);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    FUN_109381644(&plStack_58);
    return puVar4;
  }
  FUN_109381528();
  FUN_109381644(&plStack_58);
  __Unwind_Resume();
  if (param_1[1] == param_1[2]) {
    puVar4 = (undefined1 *)*param_1;
    uStack_90 = *puVar4;
    *puVar4 = 0;
    uStack_88 = *(undefined8 *)(puVar4 + 8);
    *(undefined8 *)(puVar4 + 8) = 0;
    FUN_109380ffc(&uStack_88);
    puVar4 = (undefined1 *)*param_1;
  }
  else {
    pcVar6 = *(char **)(param_1[2] + -8);
    if (*pcVar6 == '\x02') {
      puVar8 = *(undefined1 **)(pcVar6 + 8);
      puVar4 = *(undefined1 **)(puVar8 + 8);
      if (puVar4 < *(undefined1 **)(puVar8 + 0x10)) {
        *puVar4 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        puVar4 = puVar4 + 0x10;
      }
      else {
        puVar4 = puVar8;
        FUN_1093882e0();
      }
      *(undefined1 **)(puVar8 + 8) = puVar4;
      puVar4 = (undefined1 *)(*(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10);
    }
    else {
      puVar4 = (undefined1 *)param_1[4];
      *puVar4 = 0;
      uStack_98 = *(undefined8 *)(puVar4 + 8);
      *(undefined8 *)(puVar4 + 8) = 0;
      FUN_109380ffc(&uStack_98);
      puVar4 = (undefined1 *)param_1[4];
    }
  }
  return puVar4;
}



/* Entry: 109388200; end: 1093882df;  */

long FUN_109388200(long *param_1)

{
  long lVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  if (param_1[1] == param_1[2]) {
    puVar3 = (undefined1 *)*param_1;
    uStack_30 = *puVar3;
    *puVar3 = 0;
    uStack_28 = *(undefined8 *)(puVar3 + 8);
    *(undefined8 *)(puVar3 + 8) = 0;
    FUN_109380ffc(&uStack_28);
    lVar1 = *param_1;
  }
  else {
    pcVar2 = *(char **)(param_1[2] + -8);
    if (*pcVar2 == '\x02') {
      puVar4 = *(undefined1 **)(pcVar2 + 8);
      puVar3 = *(undefined1 **)(puVar4 + 8);
      if (puVar3 < *(undefined1 **)(puVar4 + 0x10)) {
        *puVar3 = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        puVar3 = puVar3 + 0x10;
      }
      else {
        puVar3 = puVar4;
        FUN_1093882e0();
      }
      *(undefined1 **)(puVar4 + 8) = puVar3;
      lVar1 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      puVar3 = (undefined1 *)param_1[4];
      *puVar3 = 0;
      uStack_38 = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(puVar3 + 8) = 0;
      FUN_109380ffc(&uStack_38);
      lVar1 = param_1[4];
    }
  }
  return lVar1;
}



/* Entry: 1093882e0; end: 1093883d3;  */

undefined1 * FUN_1093882e0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined1 *puVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar8 = param_1[1] - *param_1;
  uVar1 = (lVar8 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar4 = param_1[2] - *param_1;
    uVar7 = (long)uVar4 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar7 = 0xfffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10938153c();
    }
    plStack_50 = (long *)((long)plVar2 + lVar8);
    *(undefined1 *)plStack_50 = 0;
    *(undefined8 *)((long)plStack_50 + 8) = 0;
    puVar3 = (undefined1 *)((long)plStack_50 + 0x10);
    puVar9 = (undefined1 *)((long)plStack_50 + (*param_1 - param_1[1]));
    plStack_58 = plVar2;
    plStack_48 = (long *)puVar3;
    plStack_40 = plVar2 + uVar7 * 2;
    func_0x000109381570(param_1,*param_1,param_1[1],puVar9);
    plStack_58 = (long *)*param_1;
    *param_1 = (long)puVar9;
    param_1[1] = (long)puVar3;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar7 * 2);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    FUN_109381644(&plStack_58);
    return puVar3;
  }
  FUN_109381528();
  FUN_109381644(&plStack_58);
  plVar2 = param_1;
  __Unwind_Resume();
  pcStack_68 = FUN_1093883d4;
  lStack_80 = lVar8;
  plStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  if (plVar2[1] == plVar2[2]) {
    uVar6 = *param_2;
    puVar3 = (undefined1 *)*plVar2;
    uStack_90 = *puVar3;
    *puVar3 = 5;
    uStack_88 = *(undefined8 *)(puVar3 + 8);
    *(undefined8 *)(puVar3 + 8) = uVar6;
    FUN_109380ffc(&uStack_88);
    puVar3 = (undefined1 *)*plVar2;
  }
  else {
    pcVar5 = *(char **)(plVar2[2] + -8);
    if (*pcVar5 == '\x02') {
      puVar9 = *(undefined1 **)(pcVar5 + 8);
      puVar3 = *(undefined1 **)(puVar9 + 8);
      if (puVar3 < *(undefined1 **)(puVar9 + 0x10)) {
        *(undefined8 *)(puVar3 + 8) = 0;
        uVar6 = *param_2;
        *puVar3 = 5;
        *(undefined8 *)(puVar3 + 8) = uVar6;
        puVar3 = puVar3 + 0x10;
      }
      else {
        puVar3 = puVar9;
        FUN_1093884d0();
      }
      *(undefined1 **)(puVar9 + 8) = puVar3;
      puVar3 = (undefined1 *)(*(long *)(*(long *)(*(long *)(plVar2[2] + -8) + 8) + 8) + -0x10);
    }
    else {
      uVar6 = *param_2;
      puVar3 = (undefined1 *)plVar2[4];
      *puVar3 = 5;
      uStack_98 = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(puVar3 + 8) = uVar6;
      FUN_109380ffc(&uStack_98);
      puVar3 = (undefined1 *)plVar2[4];
    }
  }
  return puVar3;
}



/* Entry: 1093883d4; end: 1093884cf;  */

long FUN_1093883d4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  if (param_1[1] == param_1[2]) {
    uVar3 = *param_2;
    puVar4 = (undefined1 *)*param_1;
    uStack_30 = *puVar4;
    *puVar4 = 5;
    uStack_28 = *(undefined8 *)(puVar4 + 8);
    *(undefined8 *)(puVar4 + 8) = uVar3;
    FUN_109380ffc(&uStack_28);
    lVar1 = *param_1;
  }
  else {
    pcVar2 = *(char **)(param_1[2] + -8);
    if (*pcVar2 == '\x02') {
      puVar5 = *(undefined1 **)(pcVar2 + 8);
      puVar4 = *(undefined1 **)(puVar5 + 8);
      if (puVar4 < *(undefined1 **)(puVar5 + 0x10)) {
        *(undefined8 *)(puVar4 + 8) = 0;
        uVar3 = *param_2;
        *puVar4 = 5;
        *(undefined8 *)(puVar4 + 8) = uVar3;
        puVar4 = puVar4 + 0x10;
      }
      else {
        puVar4 = puVar5;
        FUN_1093884d0();
      }
      *(undefined1 **)(puVar5 + 8) = puVar4;
      lVar1 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      uVar3 = *param_2;
      puVar4 = (undefined1 *)param_1[4];
      *puVar4 = 5;
      uStack_38 = *(undefined8 *)(puVar4 + 8);
      *(undefined8 *)(puVar4 + 8) = uVar3;
      FUN_109380ffc(&uStack_38);
      lVar1 = param_1[4];
    }
  }
  return lVar1;
}



/* Entry: 1093884d0; end: 1093885d3;  */

undefined1 * FUN_1093884d0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined1 *puVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar9 = param_1[1] - *param_1;
  uVar1 = (lVar9 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar4 = param_1[2] - *param_1;
    uVar7 = (long)uVar4 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar7 = 0xfffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10938153c();
    }
    plStack_50 = (long *)((long)plVar2 + lVar9);
    *(undefined8 *)((long)plStack_50 + 8) = 0;
    uVar6 = *param_2;
    *(undefined1 *)plStack_50 = 5;
    *(undefined8 *)((long)plStack_50 + 8) = uVar6;
    puVar3 = (undefined1 *)((long)plStack_50 + 0x10);
    puVar8 = (undefined1 *)((long)plStack_50 + (*param_1 - param_1[1]));
    plStack_58 = plVar2;
    plStack_48 = (long *)puVar3;
    plStack_40 = plVar2 + uVar7 * 2;
    func_0x000109381570(param_1,*param_1,param_1[1],puVar8);
    plStack_58 = (long *)*param_1;
    *param_1 = (long)puVar8;
    param_1[1] = (long)puVar3;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar7 * 2);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    FUN_109381644(&plStack_58);
    return puVar3;
  }
  FUN_109381528();
  FUN_109381644(&plStack_58);
  __Unwind_Resume();
  if (param_1[1] == param_1[2]) {
    FUN_10938229c();
    puVar3 = (undefined1 *)*param_1;
    uStack_a0 = *puVar3;
    *puVar3 = 3;
    uStack_98 = *(undefined8 *)(puVar3 + 8);
    *(undefined8 **)(puVar3 + 8) = param_2;
    FUN_109380ffc(&uStack_98);
    puVar3 = (undefined1 *)*param_1;
  }
  else {
    pcVar5 = *(char **)(param_1[2] + -8);
    if (*pcVar5 == '\x02') {
      puVar8 = *(undefined1 **)(pcVar5 + 8);
      puVar3 = *(undefined1 **)(puVar8 + 8);
      if (puVar3 < *(undefined1 **)(puVar8 + 0x10)) {
        *(undefined8 *)(puVar3 + 8) = 0;
        *puVar3 = 3;
        FUN_10938229c();
        *(undefined8 **)(puVar3 + 8) = param_2;
        puVar3 = puVar3 + 0x10;
        *(undefined1 **)(puVar8 + 8) = puVar3;
      }
      else {
        puVar3 = puVar8;
        FUN_1093886f0();
      }
      *(undefined1 **)(puVar8 + 8) = puVar3;
      puVar3 = (undefined1 *)(*(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10);
    }
    else {
      FUN_10938229c();
      puVar3 = (undefined1 *)param_1[4];
      *puVar3 = 3;
      uStack_a8 = *(undefined8 *)(puVar3 + 8);
      *(undefined8 **)(puVar3 + 8) = param_2;
      FUN_109380ffc(&uStack_a8);
      puVar3 = (undefined1 *)param_1[4];
    }
  }
  return puVar3;
}



/* Entry: 1093885d4; end: 1093886ef;  */

long FUN_1093885d4(long *param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  if (param_1[1] == param_1[2]) {
    FUN_10938229c();
    puVar3 = (undefined1 *)*param_1;
    uStack_40 = *puVar3;
    *puVar3 = 3;
    uStack_38 = *(undefined8 *)(puVar3 + 8);
    *(undefined8 *)(puVar3 + 8) = param_2;
    FUN_109380ffc(&uStack_38);
    lVar1 = *param_1;
  }
  else {
    pcVar2 = *(char **)(param_1[2] + -8);
    if (*pcVar2 == '\x02') {
      puVar4 = *(undefined1 **)(pcVar2 + 8);
      puVar3 = *(undefined1 **)(puVar4 + 8);
      if (puVar3 < *(undefined1 **)(puVar4 + 0x10)) {
        *(undefined8 *)(puVar3 + 8) = 0;
        *puVar3 = 3;
        FUN_10938229c();
        *(undefined8 *)(puVar3 + 8) = param_2;
        puVar3 = puVar3 + 0x10;
        *(undefined1 **)(puVar4 + 8) = puVar3;
      }
      else {
        puVar3 = puVar4;
        FUN_1093886f0();
      }
      *(undefined1 **)(puVar4 + 8) = puVar3;
      lVar1 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      FUN_10938229c();
      puVar3 = (undefined1 *)param_1[4];
      *puVar3 = 3;
      uStack_48 = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(puVar3 + 8) = param_2;
      FUN_109380ffc(&uStack_48);
      lVar1 = param_1[4];
    }
  }
  return lVar1;
}



/* Entry: 1093886f0; end: 109388803;  */

undefined1 * FUN_1093886f0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar10 = param_1[1] - *param_1;
  uVar1 = (lVar10 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar8 = (long)uVar5 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar8 = 0xfffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar8 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10938153c();
    }
    puVar4 = (undefined1 *)((long)plVar3 + lVar10);
    plStack_40 = plVar3 + uVar8 * 2;
    *(undefined8 *)(puVar4 + 8) = 0;
    *puVar4 = 3;
    plStack_58 = plVar3;
    plStack_50 = (long *)puVar4;
    plStack_48 = (long *)puVar4;
    FUN_10938229c();
    *(undefined8 **)(puVar4 + 8) = param_2;
    plStack_48 = (long *)(puVar4 + 0x10);
    lVar10 = *param_1;
    lVar2 = param_1[1];
    func_0x000109381570(param_1,lVar10,lVar2,puVar4 + (lVar10 - lVar2));
    plVar3 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = (long)(puVar4 + (lVar10 - lVar2));
    lVar10 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar10;
    FUN_109381644(&plStack_58);
    return (undefined1 *)plVar3;
  }
  FUN_109381528();
  FUN_109381644(&plStack_58);
  __Unwind_Resume();
  if (param_1[1] == param_1[2]) {
    uVar7 = *param_2;
    puVar4 = (undefined1 *)*param_1;
    uStack_a0 = *puVar4;
    *puVar4 = 6;
    uStack_98 = *(undefined8 *)(puVar4 + 8);
    *(undefined8 *)(puVar4 + 8) = uVar7;
    FUN_109380ffc(&uStack_98);
    puVar4 = (undefined1 *)*param_1;
  }
  else {
    pcVar6 = *(char **)(param_1[2] + -8);
    if (*pcVar6 == '\x02') {
      puVar9 = *(undefined1 **)(pcVar6 + 8);
      puVar4 = *(undefined1 **)(puVar9 + 8);
      if (puVar4 < *(undefined1 **)(puVar9 + 0x10)) {
        *(undefined8 *)(puVar4 + 8) = 0;
        uVar7 = *param_2;
        *puVar4 = 6;
        *(undefined8 *)(puVar4 + 8) = uVar7;
        puVar4 = puVar4 + 0x10;
      }
      else {
        puVar4 = puVar9;
        FUN_109388900();
      }
      *(undefined1 **)(puVar9 + 8) = puVar4;
      puVar4 = (undefined1 *)(*(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10);
    }
    else {
      uVar7 = *param_2;
      puVar4 = (undefined1 *)param_1[4];
      *puVar4 = 6;
      uStack_a8 = *(undefined8 *)(puVar4 + 8);
      *(undefined8 *)(puVar4 + 8) = uVar7;
      FUN_109380ffc(&uStack_a8);
      puVar4 = (undefined1 *)param_1[4];
    }
  }
  return puVar4;
}



/* Entry: 109388804; end: 1093888ff;  */

long FUN_109388804(long *param_1,undefined8 *param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  if (param_1[1] == param_1[2]) {
    uVar3 = *param_2;
    puVar4 = (undefined1 *)*param_1;
    uStack_30 = *puVar4;
    *puVar4 = 6;
    uStack_28 = *(undefined8 *)(puVar4 + 8);
    *(undefined8 *)(puVar4 + 8) = uVar3;
    FUN_109380ffc(&uStack_28);
    lVar1 = *param_1;
  }
  else {
    pcVar2 = *(char **)(param_1[2] + -8);
    if (*pcVar2 == '\x02') {
      puVar5 = *(undefined1 **)(pcVar2 + 8);
      puVar4 = *(undefined1 **)(puVar5 + 8);
      if (puVar4 < *(undefined1 **)(puVar5 + 0x10)) {
        *(undefined8 *)(puVar4 + 8) = 0;
        uVar3 = *param_2;
        *puVar4 = 6;
        *(undefined8 *)(puVar4 + 8) = uVar3;
        puVar4 = puVar4 + 0x10;
      }
      else {
        puVar4 = puVar5;
        FUN_109388900();
      }
      *(undefined1 **)(puVar5 + 8) = puVar4;
      lVar1 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      uVar3 = *param_2;
      puVar4 = (undefined1 *)param_1[4];
      *puVar4 = 6;
      uStack_38 = *(undefined8 *)(puVar4 + 8);
      *(undefined8 *)(puVar4 + 8) = uVar3;
      FUN_109380ffc(&uStack_38);
      lVar1 = param_1[4];
    }
  }
  return lVar1;
}



/* Entry: 109388900; end: 109388a03;  */

long * FUN_109388900(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar8 = param_1[1] - *param_1;
  uVar1 = (lVar8 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar7 = (long)uVar5 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar7 = 0xfffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      FUN_10938153c();
    }
    plStack_50 = (long *)((long)plVar4 + lVar8);
    *(undefined8 *)((long)plStack_50 + 8) = 0;
    uVar6 = *param_2;
    *(undefined1 *)plStack_50 = 6;
    *(undefined8 *)((long)plStack_50 + 8) = uVar6;
    plVar2 = (long *)((long)plStack_50 + 0x10);
    puVar3 = (undefined1 *)((long)plStack_50 + (*param_1 - param_1[1]));
    plStack_58 = plVar4;
    plStack_48 = plVar2;
    plStack_40 = plVar4 + uVar7 * 2;
    func_0x000109381570(param_1,*param_1,param_1[1],puVar3);
    plStack_58 = (long *)*param_1;
    *param_1 = (long)puVar3;
    param_1[1] = (long)plVar2;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar4 + uVar7 * 2);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    FUN_109381644(&plStack_58);
    return plVar2;
  }
  FUN_109381528();
  FUN_109381644(&plStack_58);
  __Unwind_Resume();
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    lVar8 = (long)plVar4 + *(long *)(*plVar4 + -0x18);
    __ZNSt3__18ios_base5clearEj(lVar8,*(uint *)(lVar8 + 0x20) & 2);
  }
  return param_1;
}



/* Entry: 109388a04; end: 109388a47;  */

long * FUN_109388a04(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    lVar1 = (long)plVar2 + *(long *)(*plVar2 + -0x18);
    __ZNSt3__18ios_base5clearEj(lVar1,*(uint *)(lVar1 + 0x20) & 2);
  }
  return param_1;
}



/* Entry: 109388a48; end: 109388c6b;  */

void FUN_109388a48(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *****pppppuVar1;
  undefined8 *puVar2;
  double *pdVar3;
  long lVar4;
  double *pdVar5;
  int iVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 ****ppppuStack_278;
  undefined8 ****ppppuStack_270;
  undefined8 ***pppuStack_268;
  undefined8 ***pppuStack_260;
  undefined8 ****ppppuStack_258;
  undefined4 uStack_250;
  undefined8 ****ppppuStack_248;
  code *pcStack_240;
  code *pcStack_238;
  double adStack_1f0 [30];
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  double adStack_e0 [19];
  long lStack_48;
  
  pdVar3 = adStack_1f0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  adStack_1f0[0x14] = 0.0;
  adStack_1f0[0x15] = 0.0;
  adStack_1f0[0x16] = 0.0;
  adStack_1f0[0x11] = 0.0;
  adStack_1f0[0x10] = 1.0;
  adStack_1f0[0x13] = 6.123233995736766e-17;
  adStack_1f0[0x12] = 0.0;
  func_0x00010937fbc4(adStack_e0,adStack_1f0 + 0x10);
  adStack_1f0[0x1d] = adStack_e0[5];
  adStack_1f0[0x1c] = adStack_e0[4];
  uStack_f8 = adStack_e0[7];
  dStack_100 = adStack_e0[6];
  uStack_f0 = adStack_e0[8];
  adStack_1f0[0x19] = adStack_e0[1];
  adStack_1f0[0x18] = adStack_e0[0];
  adStack_1f0[0x1b] = adStack_e0[3];
  adStack_1f0[0x1a] = adStack_e0[2];
  FUN_10937f9d4(adStack_e0,adStack_1f0 + 0x10,param_2);
  lVar4 = 0;
  pdVar5 = adStack_e0 + 10;
  do {
    dVar7 = pdVar5[-2];
    *(double *)((long)adStack_1f0 + lVar4 + 8) = pdVar5[-1];
    *(double *)((long)adStack_1f0 + lVar4) = dVar7;
    *(double *)((long)adStack_1f0 + lVar4 + 0x10) = *pdVar5;
    lVar4 = lVar4 + 0x20;
    pdVar5 = pdVar5 + 3;
  } while (lVar4 != 0x60);
  lVar4 = 0;
  adStack_1f0[0xd] = adStack_e0[5];
  adStack_1f0[0xc] = adStack_e0[4];
  adStack_1f0[0xe] = adStack_e0[6];
  adStack_1f0[3] = 0.0;
  adStack_1f0[7] = 0.0;
  adStack_1f0[0xb] = 0.0;
  adStack_1f0[0xf] = 1.0;
  puVar2 = (undefined8 *)(param_3 + 0x50);
  do {
    uVar8 = puVar2[-2];
    *(undefined8 *)((long)adStack_1f0 + lVar4 + 0x88) = puVar2[-1];
    *(undefined8 *)((long)adStack_1f0 + lVar4 + 0x80) = uVar8;
    *(undefined8 *)((long)adStack_1f0 + lVar4 + 0x90) = *puVar2;
    lVar4 = lVar4 + 0x20;
    puVar2 = puVar2 + 3;
  } while (lVar4 != 0x60);
  lVar4 = 0;
  dVar9 = *(double *)(param_3 + 0x28);
  dVar7 = *(double *)(param_3 + 0x20);
  dStack_100 = *(double *)(param_3 + 0x30);
  adStack_1f0[0x13] = 0.0;
  adStack_1f0[0x17] = 0.0;
  adStack_1f0[0x1b] = 0.0;
  uStack_f8 = 0x3ff0000000000000;
  do {
    dVar10 = *(double *)((long)adStack_1f0 + lVar4);
    dVar11 = *(double *)((long)adStack_1f0 + lVar4 + 8);
    dVar12 = *(double *)((long)adStack_1f0 + lVar4 + 0x10);
    dVar13 = *(double *)((long)adStack_1f0 + lVar4 + 0x18);
    *(double *)((long)adStack_e0 + lVar4 + 8) =
         adStack_1f0[0x11] * dVar10 + adStack_1f0[0x15] * dVar11 + adStack_1f0[0x19] * dVar12 +
         dVar9 * dVar13;
    *(double *)((long)adStack_e0 + lVar4) =
         adStack_1f0[0x10] * dVar10 + adStack_1f0[0x14] * dVar11 + adStack_1f0[0x18] * dVar12 +
         dVar7 * dVar13;
    *(double *)((long)adStack_e0 + lVar4 + 0x18) =
         dVar10 * 0.0 + dVar11 * 0.0 + dVar12 * 0.0 + dVar13 * 1.0;
    *(double *)((long)adStack_e0 + lVar4 + 0x10) =
         adStack_1f0[0x12] * dVar10 + adStack_1f0[0x16] * dVar11 + adStack_1f0[0x1a] * dVar12 +
         dStack_100 * dVar13;
    lVar4 = lVar4 + 0x20;
  } while (lVar4 != 0x80);
  adStack_1f0[1] = adStack_e0[1];
  adStack_1f0[0] = adStack_e0[0];
  adStack_1f0[3] = adStack_e0[3];
  adStack_1f0[2] = adStack_e0[2];
  adStack_1f0[5] = adStack_e0[5];
  adStack_1f0[4] = adStack_e0[4];
  adStack_1f0[7] = adStack_e0[7];
  adStack_1f0[6] = adStack_e0[6];
  adStack_1f0[9] = adStack_e0[9];
  adStack_1f0[8] = adStack_e0[8];
  adStack_1f0[0xb] = adStack_e0[0xb];
  adStack_1f0[10] = adStack_e0[10];
  adStack_1f0[0xc] = adStack_e0[0xc] * 100.0;
  adStack_1f0[0xd] = adStack_e0[0xd] * 100.0;
  adStack_1f0[0xf] = adStack_e0[0xf];
  adStack_1f0[0xe] = adStack_e0[0xe] * 100.0;
  FUN_10937fc48(param_1,adStack_1f0);
  lVar4 = param_1;
  func_0x00010937fbc4(adStack_e0);
  *(double *)(param_1 + 0x68) = adStack_e0[5];
  *(double *)(param_1 + 0x60) = adStack_e0[4];
  *(double *)(param_1 + 0x78) = adStack_e0[7];
  *(double *)(param_1 + 0x70) = adStack_e0[6];
  *(double *)(param_1 + 0x80) = adStack_e0[8];
  *(double *)(param_1 + 0x48) = adStack_e0[1];
  *(double *)(param_1 + 0x40) = adStack_e0[0];
  *(double *)(param_1 + 0x58) = adStack_e0[3];
  *(double *)(param_1 + 0x50) = adStack_e0[2];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if ((bRam0000000113732d30 & 1) == 0) {
    iVar6 = 0x13732d30;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      puVar2 = (undefined8 *)0x40;
      __Znwm();
      *puVar2 = 0x32aaaba7;
      puVar2[2] = 0;
      puVar2[1] = 0;
      puVar2[4] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      puVar2[5] = 0;
      puVar2[7] = 0;
      puRam0000000113732d28 = puVar2;
      ___cxa_guard_release(0x113732d30);
    }
  }
  puVar2 = puRam0000000113732d28;
  __ZNSt3__15mutex4lockEv(puRam0000000113732d28);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&ppppuStack_258,&UNK_10f568609,param_6);
  pppppuVar1 = &ppppuStack_258;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar1,&DAT_10f68f57e,1);
  pppuStack_268 = pppppuVar1[1];
  ppppuStack_270 = *pppppuVar1;
  pppuStack_260 = pppppuVar1[2];
  pppppuVar1[1] = (undefined8 ****)0x0;
  pppppuVar1[2] = (undefined8 ****)0x0;
  *pppppuVar1 = (undefined8 ****)0x0;
  if ((long)ppppuStack_248 < 0) {
    __ZdlPv(ppppuStack_258);
  }
  iVar6 = (int)lVar4;
  if (iVar6 == 8) {
    ppppuStack_278 = ppppuStack_270;
    if (-1 < (long)pppuStack_260) {
      ppppuStack_278 = &ppppuStack_270;
    }
    ppppuStack_258 = &ppppuStack_248;
    uStack_250 = 1;
    ppppuStack_248 = &ppppuStack_278;
    pcStack_240 = FUN_10937b8b8;
    pcStack_238 = FUN_10937b948;
    FUN_10937ad5c(PTR___ZNSt3__14coutE_110346740,&UNK_10f568634,ppppuStack_258,1);
  }
  else {
    FUN_109388fdc();
    if (*(char *)(lRam0000000113732d48 + 8) == '\x01') {
      FUN_109388fdc();
      (*pcRam0000000113732d40)(lVar4,pdVar3,param_4,param_5,&ppppuStack_270);
    }
    else if (iVar6 == 4) {
      ppppuStack_278 = ppppuStack_270;
      if (-1 < (long)pppuStack_260) {
        ppppuStack_278 = &ppppuStack_270;
      }
      ppppuStack_258 = &ppppuStack_248;
      uStack_250 = 1;
      ppppuStack_248 = &ppppuStack_278;
      pcStack_240 = FUN_10937b8b8;
      pcStack_238 = FUN_10937b948;
      FUN_10937ad5c(PTR___ZNSt3__14coutE_110346740,&UNK_10f56862a,ppppuStack_258,1);
    }
    else if (iVar6 == 2) {
      ppppuStack_278 = ppppuStack_270;
      if (-1 < (long)pppuStack_260) {
        ppppuStack_278 = &ppppuStack_270;
      }
      ppppuStack_258 = &ppppuStack_248;
      uStack_250 = 1;
      ppppuStack_248 = &ppppuStack_278;
      pcStack_240 = FUN_10937b8b8;
      pcStack_238 = FUN_10937b948;
      FUN_10937ad5c(PTR___ZNSt3__14coutE_110346740,&UNK_10f56861d,ppppuStack_258,1);
    }
    else if (iVar6 == 1) {
      ppppuStack_278 = ppppuStack_270;
      if (-1 < (long)pppuStack_260) {
        ppppuStack_278 = &ppppuStack_270;
      }
      ppppuStack_258 = &ppppuStack_248;
      uStack_250 = 1;
      ppppuStack_248 = &ppppuStack_278;
      pcStack_240 = FUN_10937b8b8;
      pcStack_238 = FUN_10937b948;
      FUN_10937ad5c(PTR___ZNSt3__14coutE_110346740,&UNK_10f568612,ppppuStack_258,1);
    }
  }
  if ((long)pppuStack_260 < 0) {
    __ZdlPv(ppppuStack_270);
  }
  __ZNSt3__15mutex6unlockEv(puVar2);
  return;
}



/* Entry: 109388c6c; end: 109388fdb;  */

void FUN_109388c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  undefined4 uStack_60;
  undefined8 **ppuStack_58;
  code *pcStack_50;
  code *pcStack_48;
  
  if ((bRam0000000113732d30 & 1) == 0) {
    iVar3 = 0x13732d30;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      puVar2 = (undefined8 *)0x40;
      __Znwm();
      *puVar2 = 0x32aaaba7;
      puVar2[2] = 0;
      puVar2[1] = 0;
      puVar2[4] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      puVar2[5] = 0;
      puVar2[7] = 0;
      puRam0000000113732d28 = puVar2;
      ___cxa_guard_release(0x113732d30);
    }
  }
  puVar2 = puRam0000000113732d28;
  __ZNSt3__15mutex4lockEv(puRam0000000113732d28);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&ppuStack_68,&UNK_10f568609,param_5);
  pppuVar1 = &ppuStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar1,&DAT_10f68f57e,1);
  puStack_78 = pppuVar1[1];
  ppuStack_80 = *pppuVar1;
  puStack_70 = pppuVar1[2];
  pppuVar1[1] = (undefined8 **)0x0;
  pppuVar1[2] = (undefined8 **)0x0;
  *pppuVar1 = (undefined8 **)0x0;
  if ((long)ppuStack_58 < 0) {
    __ZdlPv(ppuStack_68);
  }
  iVar3 = (int)param_1;
  if (iVar3 == 8) {
    ppuStack_88 = ppuStack_80;
    if (-1 < (long)puStack_70) {
      ppuStack_88 = &ppuStack_80;
    }
    ppuStack_68 = &ppuStack_58;
    uStack_60 = 1;
    ppuStack_58 = &ppuStack_88;
    pcStack_50 = FUN_10937b8b8;
    pcStack_48 = FUN_10937b948;
    FUN_10937ad5c(PTR___ZNSt3__14coutE_110346740,&UNK_10f568634,ppuStack_68,1);
  }
  else {
    FUN_109388fdc();
    if (*(char *)(lRam0000000113732d48 + 8) == '\x01') {
      FUN_109388fdc();
      (*pcRam0000000113732d40)(param_1,param_2,param_3,param_4,&ppuStack_80);
    }
    else if (iVar3 == 4) {
      ppuStack_88 = ppuStack_80;
      if (-1 < (long)puStack_70) {
        ppuStack_88 = &ppuStack_80;
      }
      ppuStack_68 = &ppuStack_58;
      uStack_60 = 1;
      ppuStack_58 = &ppuStack_88;
      pcStack_50 = FUN_10937b8b8;
      pcStack_48 = FUN_10937b948;
      FUN_10937ad5c(PTR___ZNSt3__14coutE_110346740,&UNK_10f56862a,ppuStack_68,1);
    }
    else if (iVar3 == 2) {
      ppuStack_88 = ppuStack_80;
      if (-1 < (long)puStack_70) {
        ppuStack_88 = &ppuStack_80;
      }
      ppuStack_68 = &ppuStack_58;
      uStack_60 = 1;
      ppuStack_58 = &ppuStack_88;
      pcStack_50 = FUN_10937b8b8;
      pcStack_48 = FUN_10937b948;
      FUN_10937ad5c(PTR___ZNSt3__14coutE_110346740,&UNK_10f56861d,ppuStack_68,1);
    }
    else if (iVar3 == 1) {
      ppuStack_88 = ppuStack_80;
      if (-1 < (long)puStack_70) {
        ppuStack_88 = &ppuStack_80;
      }
      ppuStack_68 = &ppuStack_58;
      uStack_60 = 1;
      ppuStack_58 = &ppuStack_88;
      pcStack_50 = FUN_10937b8b8;
      pcStack_48 = FUN_10937b948;
      FUN_10937ad5c(PTR___ZNSt3__14coutE_110346740,&UNK_10f568612,ppuStack_68,1);
    }
  }
  if ((long)puStack_70 < 0) {
    __ZdlPv(ppuStack_80);
  }
  __ZNSt3__15mutex6unlockEv(puVar2);
  return;
}



/* Entry: 109388fdc; end: 109389067;  */

void FUN_109388fdc(void)

{
  int iVar1;
  
  if ((bRam0000000113732d38 & 1) == 0) {
    iVar1 = 0x13732d38;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113732d78 = 0;
      uRam0000000113732d70 = 0;
      uRam0000000113732d68 = 0;
      uRam0000000113732d60 = 0;
      uRam0000000113732d58 = 0;
      uRam0000000113732d50 = 0;
      pcRam0000000113732d40 = FUN_109389410;
      ppuRam0000000113732d48 = &PTR_FUN_110ae9180;
      ___cxa_atexit(FUN_1093893e4,0x113732d40,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113732d38);
      return;
    }
  }
  return;
}



/* Entry: 109389068; end: 1093890eb;  */

void FUN_109389068(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined1 auStack_1c8 [56];
  undefined8 uStack_190;
  char cStack_179;
  undefined **appuStack_168 [19];
  undefined8 *puStack_d0;
  undefined4 uStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 auStack_48 [2];
  char cStack_31;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  uStack_2c = param_2;
  uStack_28 = param_1;
  FUN_1093890ec(auStack_48,&UNK_10f5686c7,&uStack_28,&uStack_2c);
  puVar2 = &UNK_10f56863f;
  puVar3 = &UNK_10f5686bc;
  FUN_109388c6c(1,&UNK_10f56863f,&UNK_10f5686bc,0x69,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  uVar1 = 1;
  _exit();
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  __Unwind_Resume(uVar1);
  FUN_10926db08(&ppuStack_1d8);
  puStack_d0 = &puStack_c0;
  uStack_c8 = 2;
  pcStack_b8 = FUN_10937b8b8;
  pcStack_b0 = FUN_10937b948;
  uStack_a0 = 0x109389420;
  pcStack_98 = FUN_109389470;
  puStack_c0 = puVar2;
  puStack_a8 = puVar3;
  FUN_10937ad5c(&ppuStack_1d8,uVar1,puStack_d0,2);
  FUN_10926dc5c(extraout_x8,&ppuStack_1d0,&puStack_d0);
  appuStack_168[0] = &PTR_DAT_11088d708;
  ppuStack_1d8 = &PTR_SUB_11088d6e0;
  ppuStack_1d0 = &PTR_DAT_11088d7b0;
  if (cStack_179 < '\0') {
    __ZdlPv(uStack_190);
  }
  ppuStack_1d0 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_1c8);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_1d8,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_168);
  return;
}



/* Entry: 1093890ec; end: 109389217;  */

void FUN_1093890ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined1 auStack_178 [56];
  undefined8 uStack_140;
  char cStack_129;
  undefined **appuStack_118 [19];
  undefined8 *puStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  
  FUN_10926db08(&ppuStack_188);
  puStack_80 = &uStack_70;
  uStack_78 = 2;
  pcStack_68 = FUN_10937b8b8;
  pcStack_60 = FUN_10937b948;
  uStack_50 = 0x109389420;
  pcStack_48 = FUN_109389470;
  uStack_70 = param_3;
  uStack_58 = param_4;
  FUN_10937ad5c(&ppuStack_188,param_2,puStack_80,2);
  FUN_10926dc5c(param_1,&ppuStack_180,&puStack_80);
  appuStack_118[0] = &PTR_DAT_11088d708;
  ppuStack_188 = &PTR_SUB_11088d6e0;
  ppuStack_180 = &PTR_DAT_11088d7b0;
  if (cStack_129 < '\0') {
    __ZdlPv(uStack_140);
  }
  ppuStack_180 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_178);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_188,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_118);
  return;
}



/* Entry: 109389218; end: 1093892a3;  */

void FUN_109389218(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined1 auStack_1f0 [56];
  undefined8 uStack_1b8;
  char cStack_1a1;
  undefined **appuStack_190 [19];
  undefined8 *puStack_f8;
  undefined4 uStack_f0;
  undefined *puStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 uStack_38;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  uStack_38 = param_3;
  uStack_2c = param_2;
  uStack_28 = param_1;
  FUN_1093892a4(auStack_50,&UNK_10f5686ea,&uStack_28,&uStack_2c,&uStack_38);
  puVar2 = &UNK_10f56863f;
  puVar3 = &UNK_10f5686bc;
  uVar4 = 0x6f;
  FUN_109388c6c(1);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  uVar1 = 1;
  _exit();
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  __Unwind_Resume(uVar1);
  FUN_10926db08(&ppuStack_200);
  puStack_f8 = &puStack_e8;
  uStack_f0 = 3;
  pcStack_d8 = FUN_10937b948;
  pcStack_e0 = FUN_10937b8b8;
  uStack_c8 = 0x109389420;
  pcStack_c0 = FUN_109389470;
  pcStack_b0 = FUN_10937b8b8;
  pcStack_a8 = FUN_10937b948;
  puStack_e8 = puVar2;
  puStack_d0 = puVar3;
  uStack_b8 = uVar4;
  FUN_10937ad5c(&ppuStack_200,uVar1,puStack_f8,3);
  FUN_10926dc5c(extraout_x8,&ppuStack_1f8,&puStack_f8);
  appuStack_190[0] = &PTR_DAT_11088d708;
  ppuStack_200 = &PTR_SUB_11088d6e0;
  ppuStack_1f8 = &PTR_DAT_11088d7b0;
  if (cStack_1a1 < '\0') {
    __ZdlPv(uStack_1b8);
  }
  ppuStack_1f8 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_1f0);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_200,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_190);
  return;
}



/* Entry: 1093892a4; end: 1093893e3;  */

void FUN_1093892a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined1 auStack_1a0 [56];
  undefined8 uStack_168;
  char cStack_151;
  undefined **appuStack_140 [19];
  undefined8 *puStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  code *pcStack_58;
  
  FUN_10926db08(&ppuStack_1b0);
  puStack_a8 = &uStack_98;
  uStack_a0 = 3;
  pcStack_88 = FUN_10937b948;
  pcStack_90 = FUN_10937b8b8;
  uStack_78 = 0x109389420;
  pcStack_70 = FUN_109389470;
  pcStack_60 = FUN_10937b8b8;
  pcStack_58 = FUN_10937b948;
  uStack_98 = param_3;
  uStack_80 = param_4;
  uStack_68 = param_5;
  FUN_10937ad5c(&ppuStack_1b0,param_2,puStack_a8,3);
  FUN_10926dc5c(param_1,&ppuStack_1a8,&puStack_a8);
  appuStack_140[0] = &PTR_DAT_11088d708;
  ppuStack_1b0 = &PTR_SUB_11088d6e0;
  ppuStack_1a8 = &PTR_DAT_11088d7b0;
  if (cStack_151 < '\0') {
    __ZdlPv(uStack_168);
  }
  ppuStack_1a8 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_1a0);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_1b0,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_140);
  return;
}



/* Entry: 1093893e4; end: 10938940f;  */

long FUN_1093893e4(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 8))();
  return param_1;
}



/* Entry: 109389410; end: 10938946f;  */

void FUN_109389410(undefined8 param_1,undefined8 param_2,long param_3,int param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_178;
  int iStack_170;
  char cStack_161;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 auStack_150 [56];
  undefined8 uStack_118;
  char cStack_101;
  undefined **appuStack_f0 [19];
  undefined1 uStack_51;
  
  func_0x000105277f8c(param_6);
  if (*(char *)(param_3 + -1) == 'c') {
    FUN_1092b4db8();
    return;
  }
  if (param_4 < 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi_1103464d8)();
    return;
  }
  FUN_10926db08(&ppuStack_160);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(&ppuStack_160,*param_5);
  FUN_10926dc5c(&ppuStack_178,&ppuStack_158,&uStack_51);
  pppuVar1 = (undefined8 ***)ppuStack_178;
  if (-1 < cStack_161) {
    iStack_170 = (int)cStack_161;
    pppuVar1 = &ppuStack_178;
  }
  if (param_4 <= iStack_170) {
    iStack_170 = param_4;
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(param_6,pppuVar1,(long)iStack_170);
  if (cStack_161 < '\0') {
    __ZdlPv(ppuStack_178);
  }
  appuStack_f0[0] = &PTR_DAT_11088d708;
  ppuStack_160 = &PTR_SUB_11088d6e0;
  ppuStack_158 = &PTR_DAT_11088d7b0;
  if (cStack_101 < '\0') {
    __ZdlPv(uStack_118);
  }
  ppuStack_158 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_150);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_160,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_f0);
  return;
}



/* Entry: 109389470; end: 109389477;  */

undefined4 FUN_109389470(undefined4 *param_1)

{
  return *param_1;
}



/* Entry: 109389478; end: 1093895b7;  */

void FUN_109389478(undefined8 param_1,undefined4 *param_2,int param_3)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_168;
  int iStack_160;
  char cStack_151;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [56];
  undefined8 uStack_108;
  char cStack_f1;
  undefined **appuStack_e0 [19];
  undefined1 uStack_41;
  
  FUN_10926db08(&ppuStack_150);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(&ppuStack_150,*param_2);
  FUN_10926dc5c(&ppuStack_168,&ppuStack_148,&uStack_41);
  pppuVar1 = (undefined8 ***)ppuStack_168;
  if (-1 < cStack_151) {
    iStack_160 = (int)cStack_151;
    pppuVar1 = &ppuStack_168;
  }
  if (param_3 <= iStack_160) {
    iStack_160 = param_3;
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(param_1,pppuVar1,(long)iStack_160);
  if (cStack_151 < '\0') {
    __ZdlPv(ppuStack_168);
  }
  appuStack_e0[0] = &PTR_DAT_11088d708;
  ppuStack_150 = &PTR_SUB_11088d6e0;
  ppuStack_148 = &PTR_DAT_11088d7b0;
  if (cStack_f1 < '\0') {
    __ZdlPv(uStack_108);
  }
  ppuStack_148 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_140);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_150,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e0);
  return;
}



/* Entry: 1093895b8; end: 1093896ab;  */

void FUN_1093895b8(double *param_1,long param_2,int *param_3,double *param_4,double *param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  
  dVar2 = *param_1;
  dVar3 = param_1[1];
  dVar4 = param_1[2];
  dStack_50 = *(double *)(param_2 + 0x40) * dVar2 + *(double *)(param_2 + 0x58) * dVar3 +
              *(double *)(param_2 + 0x70) * dVar4 + *(double *)(param_2 + 0x20);
  dStack_48 = *(double *)(param_2 + 0x48) * dVar2 + *(double *)(param_2 + 0x60) * dVar3 +
              *(double *)(param_2 + 0x78) * dVar4 + *(double *)(param_2 + 0x28);
  dStack_40 = dVar2 * *(double *)(param_2 + 0x50) +
              dVar3 * *(double *)(param_2 + 0x68) + dVar4 * *(double *)(param_2 + 0x80) +
              *(double *)(param_2 + 0x30);
  piVar1 = param_3;
  FUN_10937d5c4(param_3,param_4,&dStack_50);
  if (((((int)piVar1 != 0) && (*param_4 < (double)*param_3 + -0.5)) && (0.0 <= param_4[1])) &&
     ((0.0 <= *param_4 && (param_4[1] < (double)param_3[1] + -0.5)))) {
    *param_5 = dStack_40;
  }
  return;
}



/* Entry: 1093896ac; end: 10938977f;  */

void FUN_1093896ac(float param_1,long param_2,long param_3,double *param_4,double *param_5,
                  ulong param_6)

{
  ulong uVar1;
  int iVar2;
  
  if ((param_1 == 1.0) || (param_4 == param_5)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      uVar1 = param_6;
      func_0x000107c284a0();
      if (param_1 <= (float)(uVar1 & 0xffffffff) / 4.2949673e+09) {
        *(float *)(*(long *)(param_3 + 8) + (long)(*(int *)(param_3 + 0x18) * (int)param_4[1]) * 4 +
                  (long)(int)*param_4 * 4) = (float)(param_4[2] * 0.01);
        iVar2 = iVar2 + 1;
      }
      param_4 = param_4 + 4;
    } while (param_4 != param_5);
  }
  _memcpy(param_2,param_6,0x9c8);
  *(int *)(param_2 + 0x9c8) = iVar2;
  return;
}



/* Entry: 109389780; end: 10938988b;  */

long FUN_109389780(char *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  uStack_38 = param_2;
  if (*param_1 == '\x01') {
    lVar2 = *(long *)(param_1 + 8);
    FUN_10938ce90(lVar2,&uStack_38);
    return lVar2 + 0x38;
  }
  uVar3 = 0x20;
  ___cxa_allocate_exception(0x20);
  FUN_10937bcec(param_1);
  func_0x000107c31940(auStack_68,param_1);
  FUN_10928a5e0(auStack_50,&UNK_10f5688c5,auStack_68);
  FUN_10937bbbc(uVar3,0x131,auStack_50);
  ___cxa_throw(uVar3,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109389834);
  (*pcVar1)();
}



/* Entry: 10938988c; end: 109389a17;  */

undefined4 FUN_10938988c(char *param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == '\x01') {
    uStack_38 = 0x8000000000000000;
    uStack_40 = 0;
    uVar2 = *(undefined8 *)(param_1 + 8);
    pcStack_50 = param_1;
    FUN_1093793a4();
    lStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0x8000000000000000;
    if (*param_1 == '\x02') {
      uStack_60 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
    }
    else if (*param_1 == '\x01') {
      lStack_68 = *(long *)(param_1 + 8) + 8;
    }
    else {
      uStack_58 = 1;
    }
    ppcVar3 = &pcStack_50;
    pcStack_70 = param_1;
    uStack_48 = uVar2;
    FUN_10937c708(ppcVar3,&pcStack_70);
    if (((ulong)ppcVar3 & 1) == 0) {
      FUN_10938cf68(&pcStack_50);
      FUN_10937ba88();
    }
    else {
      pcStack_70._0_4_ = *param_3;
    }
    return pcStack_70._0_4_;
  }
  uVar2 = 0x20;
  ___cxa_allocate_exception(0x20);
  FUN_10937bcec(param_1);
  func_0x000107c31940(&pcStack_70,param_1);
  FUN_10928a5e0(&pcStack_50,&UNK_10f5688f8,&pcStack_70);
  FUN_10937bbbc(uVar2,0x132,&pcStack_50);
  ___cxa_throw(uVar2,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1093899c0);
  (*pcVar1)();
}



/* Entry: 109389a18; end: 109389ba3;  */

undefined4 FUN_109389a18(char *param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == '\x01') {
    uStack_38 = 0x8000000000000000;
    uStack_40 = 0;
    uVar2 = *(undefined8 *)(param_1 + 8);
    pcStack_50 = param_1;
    FUN_1093793a4();
    lStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0x8000000000000000;
    if (*param_1 == '\x02') {
      uStack_60 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
    }
    else if (*param_1 == '\x01') {
      lStack_68 = *(long *)(param_1 + 8) + 8;
    }
    else {
      uStack_58 = 1;
    }
    ppcVar3 = &pcStack_50;
    pcStack_70 = param_1;
    uStack_48 = uVar2;
    FUN_10937c708(ppcVar3,&pcStack_70);
    if (((ulong)ppcVar3 & 1) == 0) {
      FUN_10938cf68(&pcStack_50);
      FUN_10938d050();
    }
    else {
      pcStack_70._0_4_ = *param_3;
    }
    return pcStack_70._0_4_;
  }
  uVar2 = 0x20;
  ___cxa_allocate_exception(0x20);
  FUN_10937bcec(param_1);
  func_0x000107c31940(&pcStack_70,param_1);
  FUN_10928a5e0(&pcStack_50,&UNK_10f5688f8,&pcStack_70);
  FUN_10937bbbc(uVar2,0x132,&pcStack_50);
  ___cxa_throw(uVar2,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109389b4c);
  (*pcVar1)();
}



/* Entry: 109389ba4; end: 109389d33;  */

byte FUN_109389ba4(char *param_1,undefined8 param_2,byte *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == '\x01') {
    uStack_38 = 0x8000000000000000;
    uStack_40 = 0;
    uVar2 = *(undefined8 *)(param_1 + 8);
    pcStack_50 = param_1;
    FUN_1093793a4();
    lStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0x8000000000000000;
    if (*param_1 == '\x02') {
      uStack_60 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
    }
    else if (*param_1 == '\x01') {
      lStack_68 = *(long *)(param_1 + 8) + 8;
    }
    else {
      uStack_58 = 1;
    }
    ppcVar3 = &pcStack_50;
    pcStack_70 = param_1;
    uStack_48 = uVar2;
    FUN_10937c708(ppcVar3,&pcStack_70);
    if (((ulong)ppcVar3 & 1) == 0) {
      FUN_10938cf68(&pcStack_50);
      FUN_10938d198();
    }
    else {
      pcStack_70._0_1_ = *param_3;
    }
    return (byte)pcStack_70 & 1;
  }
  uVar2 = 0x20;
  ___cxa_allocate_exception(0x20);
  FUN_10937bcec(param_1);
  func_0x000107c31940(&pcStack_70,param_1);
  FUN_10928a5e0(&pcStack_50,&UNK_10f5688f8,&pcStack_70);
  FUN_10937bbbc(uVar2,0x132,&pcStack_50);
  ___cxa_throw(uVar2,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109389cdc);
  (*pcVar1)();
}



/* Entry: 109389d34; end: 10938ab97;  */

/* WARNING: Removing unreachable block (ram,0x00010938a1d4) */
/* WARNING: Removing unreachable block (ram,0x00010938a180) */
/* WARNING: Removing unreachable block (ram,0x00010938a688) */
/* WARNING: Removing unreachable block (ram,0x00010938a69c) */

void FUN_109389d34(long *param_1,long *param_2,undefined8 param_3,char *param_4,long *param_5,
                  uint *param_6)

{
  long *plVar1;
  bool bVar2;
  code *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ulong uVar17;
  char cVar18;
  ulong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  char *pcVar23;
  double dVar24;
  long *plStack_c10;
  undefined4 uStack_c04;
  undefined1 auStack_c00 [8];
  long *plStack_bf8;
  char *pcStack_bf0;
  long lStack_be8;
  undefined8 uStack_be0;
  undefined8 auStack_bd8 [3];
  undefined8 uStack_bc0;
  char cStack_ba9;
  long *plStack_ba8;
  char *pcStack_ba0;
  char **ppcStack_b98;
  char *pcStack_b90;
  undefined8 uStack_b88;
  uint uStack_b80;
  undefined4 uStack_b7c;
  undefined4 uStack_b78;
  undefined4 uStack_b74;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  undefined4 uStack_b68;
  undefined4 uStack_b64;
  undefined4 uStack_b60;
  undefined4 uStack_b5c;
  undefined4 uStack_b58;
  char cStack_b54;
  char cStack_b53;
  undefined2 uStack_b52;
  undefined4 uStack_b50;
  long *plStack_b48;
  long *plStack_b40;
  long lStack_b38;
  char *pcStack_b30;
  char **ppcStack_b28;
  char *pcStack_b20;
  char acStack_b18 [8];
  char *pcStack_b10;
  char *pcStack_b08;
  undefined8 uStack_b00;
  char **ppcStack_af8;
  char *pcStack_af0;
  ulong uStack_ae8;
  undefined8 uStack_140;
  char *pcStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  char *pcStack_f0;
  char **ppcStack_e8;
  char *pcStack_e0;
  undefined8 uStack_d8;
  char *pcStack_d0;
  char **ppcStack_c8;
  char *pcStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = *param_6;
  FUN_109389780(param_4,&UNK_10f568749);
  FUN_10937c804(&pcStack_b30);
  FUN_109389780(param_4,&UNK_10f568753);
  FUN_10937ba88();
  uVar16 = (undefined4)uStack_b00;
  uVar17 = (ulong)uStack_b00 & 0xffffffff;
  FUN_109389780(param_4,&UNK_10f568760);
  FUN_10937ba88();
  uVar19 = (ulong)uStack_b00 & 0xffffffff;
  if ((long)pcStack_b20 < 0) {
    func_0x000107c3192c(&pcStack_d0,pcStack_b30,ppcStack_b28);
  }
  else {
    ppcStack_c8 = ppcStack_b28;
    pcStack_d0 = pcStack_b30;
    pcStack_c0 = pcStack_b20;
  }
  uStack_b8 = uVar16;
  uStack_b4 = (undefined4)uStack_b00;
  pcVar23 = (char *)*param_5;
  puVar11 = &uStack_b00;
  uStack_b00 = (char **)pcVar23;
  FUN_10937e964(puVar11,uVar17,uVar19);
  uVar16 = SUB84(pcVar23,0);
  func_0x000107c31940(&uStack_b00,&UNK_10f568772);
  pcVar23 = param_4;
  FUN_10938988c(param_4,&uStack_b00,&UNK_10dfc8198);
  if ((long)pcStack_af0 < 0) {
    __ZdlPv(uStack_b00);
  }
  func_0x000107c31940(&uStack_b00,&UNK_10f568784);
  pcVar4 = param_4;
  FUN_10938988c(param_4,&uStack_b00,&UNK_10dfc819c);
  if ((long)pcStack_af0 < 0) {
    __ZdlPv(uStack_b00);
  }
  func_0x000107c31940(&uStack_b00,&UNK_10f568791);
  FUN_109389a18(param_4,&uStack_b00,&UNK_10dfc81a0);
  uVar15 = uVar16;
  if ((long)pcStack_af0 < 0) {
    __ZdlPv(uStack_b00);
  }
  func_0x000107c31940(&uStack_b00,&UNK_10f5687a3);
  FUN_109389a18(param_4,&uStack_b00,&UNK_10dfc81a4);
  uVar20 = uVar15;
  if ((long)pcStack_af0 < 0) {
    __ZdlPv(uStack_b00);
  }
  func_0x000107c31940(&uStack_b00,&UNK_10f5687b6);
  FUN_109389a18(param_4,&uStack_b00,&UNK_10dfc81a8);
  uVar21 = uVar20;
  if ((long)pcStack_af0 < 0) {
    __ZdlPv(uStack_b00);
  }
  func_0x000107c31940(&uStack_b00,&UNK_10f5687d1);
  FUN_109389a18(param_4,&uStack_b00,&UNK_10dfc81ac);
  if ((long)pcStack_af0 < 0) {
    __ZdlPv(uStack_b00);
  }
  func_0x000107c31940(&plStack_b48,&UNK_10f5687e9);
  if (*param_4 != '\x01') {
    uVar12 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_10937bcec(param_4);
    func_0x000107c31940(&pcStack_bf0,param_4);
    FUN_10928a5e0(&uStack_b00,&UNK_10f5688f8,&pcStack_bf0);
    FUN_10937bbbc(uVar12,0x132,&uStack_b00);
    ___cxa_throw(uVar12,&PTR_DAT_110af4510,FUN_10937bd14);
    goto LAB_10938a8b0;
  }
  dVar24 = 0.0;
  uStack_ae8 = 0x8000000000000000;
  pcStack_af0 = (char *)0x0;
  ppcVar5 = *(char ***)(param_4 + 8);
  uStack_b00 = (char **)param_4;
  FUN_1093793a4(ppcVar5,&plStack_b48);
  lStack_be8 = 0;
  uStack_be0 = 0;
  auStack_bd8[0] = 0x8000000000000000;
  if (*param_4 == '\x02') {
    uStack_be0 = *(undefined8 *)(*(long *)(param_4 + 8) + 8);
  }
  else if (*param_4 == '\x01') {
    lStack_be8 = *(long *)(param_4 + 8) + 8;
  }
  else {
    auStack_bd8[0] = 1;
  }
  puVar6 = &uStack_b00;
  pcStack_bf0 = param_4;
  ppcStack_af8 = ppcVar5;
  FUN_10937c708(puVar6,&pcStack_bf0);
  if (((ulong)puVar6 & 1) == 0) {
    pcVar7 = (char *)&uStack_b00;
    FUN_10938cf68();
    cVar18 = *pcVar7;
    if (cVar18 == '\x05') {
LAB_10938a050:
      cVar18 = pcVar7[8];
      goto LAB_10938a070;
    }
    if (cVar18 == '\a') {
      dVar24 = *(double *)(pcVar7 + 8);
      cVar18 = (char)(int)dVar24;
      goto LAB_10938a070;
    }
    if (cVar18 == '\x06') goto LAB_10938a050;
  }
  else {
    cVar18 = '\0';
LAB_10938a070:
    uVar22 = SUB84(dVar24,0);
    if (lStack_b38 < 0) {
      __ZdlPv(plStack_b48);
    }
    func_0x000107c31940(&uStack_b00,&UNK_10f5687fc);
    pcVar7 = param_4;
    FUN_10938988c(param_4,&uStack_b00,&UNK_10dfc81b0);
    if ((long)pcStack_af0 < 0) {
      __ZdlPv(uStack_b00);
    }
    func_0x000107c31940(&uStack_b00,&UNK_10f56881c);
    pcVar8 = param_4;
    FUN_109389ba4(param_4,&uStack_b00,&UNK_10dfc81b4);
    if ((long)pcStack_af0 < 0) {
      __ZdlPv(uStack_b00);
    }
    func_0x000107c31940(&uStack_b00,&UNK_10f568831);
    pcVar9 = param_4;
    FUN_109389ba4(param_4,&uStack_b00,&UNK_10dfc81b5);
    if ((long)pcStack_af0 < 0) {
      __ZdlPv(uStack_b00);
    }
    func_0x000107c31940(&uStack_b00,&UNK_10f568846);
    FUN_109389a18(param_4,&uStack_b00,&UNK_10dfc81b8);
    if ((long)pcStack_af0 < 0) {
      __ZdlPv(uStack_b00);
    }
    ppcStack_b98 = ppcStack_c8;
    pcStack_ba0 = pcStack_d0;
    pcStack_b90 = pcStack_c0;
    uStack_b88 = CONCAT44(uStack_b4,uStack_b8);
    uStack_b7c = SUB84(puVar11,0);
    uStack_b78 = (undefined4)((ulong)puVar11 >> 0x20);
    uStack_b74 = SUB84(pcVar23,0);
    uStack_b70 = SUB84(pcVar4,0);
    uStack_b5c = CONCAT31(uStack_b5c._1_3_,cVar18);
    uStack_b58 = SUB84(pcVar7,0);
    cStack_b54 = (char)pcVar9;
    cStack_b53 = (char)pcVar8;
    uStack_b80 = uVar13;
    uStack_b6c = uVar16;
    uStack_b68 = uVar15;
    uStack_b64 = uVar20;
    uStack_b60 = uVar21;
    uStack_b50 = uVar22;
    if ((long)pcStack_b20 < 0) {
      __ZdlPv(pcStack_b30);
    }
    if ((long)pcStack_b90 < 0) {
      func_0x000107c3192c(&uStack_b00,pcStack_ba0,ppcStack_b98);
    }
    else {
      ppcStack_af8 = ppcStack_b98;
      uStack_b00 = (char **)pcStack_ba0;
      pcStack_af0 = pcStack_b90;
    }
    (**(code **)(*param_2 + 0x10))(&plStack_ba8,param_2,&uStack_b00);
    if ((long)pcStack_af0 < 0) {
      __ZdlPv(uStack_b00);
    }
    plVar10 = plStack_ba8;
    (**(code **)(*plStack_ba8 + 0x28))();
    if (((ulong)plVar10 & 1) == 0) {
      func_0x000105688514(&UNK_10f568859);
      goto LAB_10938a8b0;
    }
    uVar16 = uStack_b78;
    uVar15 = uStack_b7c;
    if ((*param_6 | 2) == 3) {
      uVar16 = uStack_b7c;
      uVar15 = uStack_b78;
    }
    acStack_b18[0] = '\0';
    acStack_b18[1] = '\0';
    acStack_b18[2] = '\0';
    acStack_b18[3] = '\0';
    acStack_b18[4] = '\0';
    acStack_b18[5] = '\0';
    acStack_b18[6] = '\0';
    acStack_b18[7] = '\0';
    pcStack_b10 = (char *)0x0;
    pcStack_b08 = (char *)0x0;
    uStack_b00 = (char **)CONCAT44(uVar16,uVar15);
    ppcStack_af8 = (char **)0x100000003;
    pcStack_bf0._0_4_ = 1;
    pcVar23 = acStack_b18;
    FUN_10938cab4(pcVar23,"data",&uStack_b00,&pcStack_bf0);
    uStack_b00 = (char **)CONCAT44(uVar16,uVar15);
    ppcStack_af8 = (char **)0x100000001;
    pcStack_bf0 = (char *)CONCAT44(pcStack_bf0._4_4_,1);
    pcStack_b10 = pcVar23;
    if (pcVar23 < pcStack_b08) {
      FUN_10938cc0c(pcVar23,&UNK_10f56887f,&uStack_b00,&pcStack_bf0);
      pcVar23 = pcVar23 + 0x58;
    }
    else {
      pcVar23 = acStack_b18;
      FUN_10938cab4(pcVar23,&UNK_10f56887f,&uStack_b00,&pcStack_bf0);
    }
    pcStack_b30 = (char *)0x0;
    ppcStack_b28 = (char **)0x0;
    pcStack_b20 = (char *)0x0;
    uStack_b00 = (char **)CONCAT44(uVar16,uVar15);
    ppcStack_af8 = (char **)((long)&MACH_HEADER.magic + 1);
    pcStack_bf0 = (char *)CONCAT44(pcStack_bf0._4_4_,1);
    ppcVar5 = &pcStack_b30;
    pcStack_b10 = pcVar23;
    FUN_10938cab4(ppcVar5,&UNK_10f56888f,&uStack_b00,&pcStack_bf0);
    if (cStack_b53 == '\x01') {
      uStack_b00 = (char **)CONCAT44(uVar16,uVar15);
      ppcStack_af8 = (char **)((long)&MACH_HEADER.cputype + 1);
      pcStack_bf0 = (char *)CONCAT44(pcStack_bf0._4_4_,1);
      ppcStack_b28 = ppcVar5;
      if (ppcVar5 < pcStack_b20) {
        FUN_10938cc0c(ppcVar5,&UNK_10f5688b7,&uStack_b00,&pcStack_bf0);
        ppcVar5 = ppcVar5 + 0xb;
      }
      else {
        ppcVar5 = &pcStack_b30;
        FUN_10938cab4(ppcVar5,&UNK_10f5688b7,&uStack_b00,&pcStack_bf0);
      }
    }
    ppcStack_b28 = ppcVar5;
    if (cStack_b54 == '\x01') {
      uStack_b00 = (char **)CONCAT44(uVar16,uVar15);
      ppcStack_af8 = (char **)((long)&MACH_HEADER.magic + 1);
      pcStack_bf0 = (char *)CONCAT44(pcStack_bf0._4_4_,1);
      if (ppcVar5 < pcStack_b20) {
        FUN_10938cc0c(ppcVar5,&UNK_10f56889d,&uStack_b00,&pcStack_bf0);
        ppcStack_b28 = ppcVar5 + 0xb;
      }
      else {
        ppcVar5 = &pcStack_b30;
        FUN_10938cab4(ppcVar5,&UNK_10f56889d,&uStack_b00,&pcStack_bf0);
        ppcStack_b28 = ppcVar5;
      }
    }
    FUN_109379174(&pcStack_bf0,acStack_b18,&pcStack_b30);
    uStack_c04 = 1;
    (**(code **)(*plStack_ba8 + 0x20))(&plStack_c10);
    func_0x000109d0a228(&uStack_b00,&plStack_c10);
    ppcStack_c8 = (char **)0x2000000008;
    pcStack_d0 = (char *)0x4000000002;
    pcStack_c0 = section_1000001f0.segname;
    plStack_b40 = (long *)0x0;
    lStack_b38 = 0;
    plStack_b48 = (long *)0x0;
    FUN_10938c9c4(&plStack_b48,&pcStack_d0,&uStack_b8,6);
    FUN_10938d298(auStack_c00,&pcStack_d0,&pcStack_bf0,&uStack_c04,&uStack_b00,&plStack_b48);
    if (plStack_b48 != (long *)0x0) {
      plStack_b40 = plStack_b48;
      __ZdlPv();
    }
    (*(code *)(&PTR_FUN_110af4bf0)[uStack_ae8 & 0xff])(&uStack_b00);
    plVar10 = plStack_c10;
    plStack_c10 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    func_0x000109d05694(&plStack_b48,&pcStack_d0,param_3);
    func_0x000109d03fe8(&uStack_b00,plStack_b48,auStack_c00,0);
    FUN_10938ab98(&pcStack_d0,&uStack_b00);
    if (uStack_b00 != (char **)0x0) {
      plVar10 = (long *)(uStack_b00 + 1);
      do {
        lVar14 = *plVar10;
        cVar18 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = lVar14 + -1;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      if (lVar14 == 0) {
        (**(code **)((long)*uStack_b00 + 0x10))();
      }
    }
    pcVar23 = pcStack_d0;
    uVar13 = 0x3039;
    uStack_b00 = (char **)CONCAT44(uStack_b00._4_4_,0x3039);
    lVar14 = 1;
    do {
      uVar13 = (int)lVar14 + (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965;
      *(uint *)((long)&uStack_b00 + lVar14 * 4) = uVar13;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0x270);
    uStack_140 = 0;
    pcStack_d0 = (char *)0x0;
    pcStack_138 = pcVar23;
    puVar11 = (undefined8 *)0x20;
    __Znwm();
    uVar12 = uStack_b88;
    *puVar11 = &PTR_FUN_110af4978;
    puVar11[1] = 0;
    uStack_120 = CONCAT44(uStack_b74,uStack_b78);
    uStack_128 = CONCAT44(uStack_b7c,uStack_b80);
    uStack_110 = CONCAT44(uStack_b64,uStack_b68);
    uStack_118 = CONCAT44(uStack_b6c,uStack_b70);
    uStack_100 = CONCAT26(uStack_b52,CONCAT15(cStack_b53,CONCAT14(cStack_b54,uStack_b58)));
    uStack_108 = CONCAT44(uStack_b5c,uStack_b60);
    uStack_f8 = uStack_b50;
    pcStack_e0 = pcStack_b90;
    puVar11[2] = 0;
    puVar11[3] = pcVar23;
    ppcStack_e8 = ppcStack_b98;
    pcStack_f0 = pcStack_ba0;
    ppcStack_b98 = (char **)0x0;
    pcStack_b90 = (char *)0x0;
    pcStack_ba0 = (char *)0x0;
    uStack_d8 = uStack_b88;
    lVar14 = 0xa30;
    puStack_130 = puVar11;
    __Znwm();
    _memcpy();
    plVar10 = plStack_b40;
    *(char **)(lVar14 + 0x9c8) = pcVar23;
    *(undefined8 **)(lVar14 + 0x9d0) = puVar11;
    *(ulong *)(lVar14 + 0x9e0) = CONCAT44(uStack_b74,uStack_b78);
    *(ulong *)(lVar14 + 0x9d8) = CONCAT44(uStack_b7c,uStack_b80);
    *(ulong *)(lVar14 + 0x9f0) = CONCAT44(uStack_b64,uStack_b68);
    *(ulong *)(lVar14 + 0x9e8) = CONCAT44(uStack_b6c,uStack_b70);
    *(ulong *)(lVar14 + 0xa00) =
         CONCAT26(uStack_b52,CONCAT15(cStack_b53,CONCAT14(cStack_b54,uStack_b58)));
    *(ulong *)(lVar14 + 0x9f8) = CONCAT44(uStack_b5c,uStack_b60);
    *(undefined4 *)(lVar14 + 0xa08) = uStack_b50;
    *(char ***)(lVar14 + 0xa18) = ppcStack_e8;
    *(char **)(lVar14 + 0xa10) = pcStack_f0;
    *(char **)(lVar14 + 0xa20) = pcStack_e0;
    *(undefined8 *)(lVar14 + 0xa28) = uVar12;
    *param_1 = lVar14;
    param_1[1] = (long)&PTR_DAT_110af49e0;
    param_1[4] = (long)(param_1 + 1);
    param_1[5] = (long)&PTR_DAT_110af4a70;
    param_1[8] = (long)(param_1 + 5);
    if (plStack_b40 != (long *)0x0) {
      plVar1 = plStack_b40 + 1;
      do {
        lVar14 = *plVar1;
        cVar18 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar2) {
          *plVar1 = lVar14 + -1;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_b40 + 0x10))(plStack_b40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (plStack_bf8 != (long *)0x0) {
      plVar10 = plStack_bf8 + 1;
      do {
        lVar14 = *plVar10;
        cVar18 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = lVar14 + -1;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_bf8 + 0x10))(plStack_bf8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_bf8);
      }
    }
    if (cStack_ba9 < '\0') {
      __ZdlPv(uStack_bc0);
    }
    uStack_b00 = (char **)auStack_bd8;
    FUN_109378cec(&uStack_b00);
    uStack_b00 = &pcStack_bf0;
    FUN_109378cec(&uStack_b00);
    uStack_b00 = &pcStack_b30;
    FUN_109378cec(&uStack_b00);
    uStack_b00 = (char **)acStack_b18;
    FUN_109378cec(&uStack_b00);
    plVar10 = plStack_ba8;
    plStack_ba8 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    if ((long)pcStack_b90 < 0) {
      __ZdlPv(pcStack_ba0);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
      return;
    }
    ___stack_chk_fail();
  }
  uVar12 = 0x20;
  ___cxa_allocate_exception(0x20);
  FUN_10937bcec(pcVar7);
  func_0x000107c31940(acStack_b18,pcVar7);
  FUN_10928a5e0(&pcStack_bf0,&UNK_10f567436,acStack_b18);
  FUN_10937bbbc(uVar12,0x12e,&pcStack_bf0);
  ___cxa_throw(uVar12,&PTR_DAT_110af4510,FUN_10937bd14);
LAB_10938a8b0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10938a8b4);
  (*pcVar3)();
}



/* Entry: 10938ab98; end: 10938ac2b;  */

void FUN_10938ab98(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  FUN_10938d600(plVar5);
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
                    /* WARNING: Could not recover jumptable at 0x00010938abf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10938ac2c; end: 10938ac9f;  */

long FUN_10938ac2c(long param_1)

{
  if (*(char *)(param_1 + 0xa27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xa10));
  }
  func_0x00010938cd4c(param_1 + 0x9c8);
  return param_1;
}



/* Entry: 10938aca0; end: 10938c70f;  */

void FUN_10938aca0(long param_1,long param_2,long *param_3,long *param_4)

{
  uint uVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  int iVar9;
  undefined *puVar10;
  float fVar11;
  code *pcVar12;
  bool bVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined4 *puVar18;
  undefined **ppuVar19;
  float *pfVar20;
  ulong uVar21;
  float *pfVar22;
  float *pfVar23;
  int iVar24;
  undefined8 *extraout_x8;
  long lVar25;
  long lVar26;
  byte *pbVar27;
  long *plVar28;
  int iVar29;
  ulong uVar30;
  ulong uVar31;
  float *pfVar32;
  int iVar33;
  int iVar34;
  float *pfVar35;
  ulong uVar36;
  long *plVar37;
  long lVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  long lVar44;
  undefined8 *puVar45;
  undefined4 uVar46;
  double dVar47;
  undefined8 uVar48;
  double dVar49;
  float fVar50;
  float fVar51;
  undefined8 *puStack_16e0;
  undefined **ppuStack_16d0;
  undefined **ppuStack_16c8;
  long lStack_16c0;
  long lStack_16b8;
  int iStack_16b0;
  undefined1 auStack_16a8 [40];
  undefined8 uStack_1680;
  undefined8 uStack_1678;
  undefined8 uStack_1670;
  undefined8 uStack_1668;
  undefined4 uStack_1660;
  undefined4 uStack_1658;
  undefined4 uStack_1654;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined4 uStack_1640;
  undefined4 uStack_163c;
  undefined8 uStack_1638;
  undefined **ppuStack_1630;
  undefined4 *puStack_1628;
  undefined8 uStack_1620;
  undefined4 uStack_1618;
  undefined8 uStack_1610;
  undefined8 uStack_1608;
  byte *pbStack_1600;
  byte *pbStack_15f8;
  byte *pbStack_15f0;
  byte *pbStack_15e8;
  undefined8 uStack_15e0;
  long lStack_15d8;
  undefined8 *puStack_15d0;
  long *plStack_15c8;
  long alStack_15c0 [304];
  undefined **ppuStack_c40;
  long lStack_c38;
  undefined8 uStack_c30;
  ulong uStack_c20;
  long lStack_c18;
  long lStack_c10;
  undefined **ppuStack_c08;
  undefined **ppuStack_c00;
  byte *pbStack_bf8;
  int iStack_bf0;
  int iStack_bec;
  int iStack_be8;
  int iStack_be4;
  undefined **ppuStack_be0;
  byte *pbStack_bd8;
  undefined8 uStack_bd0;
  int iStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  long lStack_bb0;
  undefined4 uStack_ba8;
  float *pfStack_ba0;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  int iStack_b58;
  undefined4 uStack_b54;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  int iStack_b40;
  int iStack_b3c;
  ulong uStack_b38;
  undefined **ppuStack_b30;
  long *plStack_b28;
  long lStack_b20;
  ulong uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  int iStack_1a8;
  int iStack_1a0;
  int iStack_19c;
  undefined8 *puStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  long lStack_98;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar44 = *param_4;
  puVar14 = (undefined8 *)(lVar44 + 0x9dc);
  uStack_bd0 = 0;
  iStack_bc8 = 0;
  pbStack_bd8 = (byte *)0x0;
  ppuStack_be0 = &PTR_DAT_110af4b00;
  FUN_10938d9d4(&ppuStack_be0,puVar14);
  lVar26 = *(long *)(param_1 + 8);
  uVar36 = *(ulong *)(param_1 + 0x10);
  iVar33 = *(int *)(param_1 + 0x18);
  uStack_b70._0_4_ = 0x42ff0010;
  uStack_b70._4_4_ = 2;
  ppuStack_b30 = (undefined **)&uStack_b68;
  uStack_b68._0_4_ = (int)(uVar36 >> 0x20);
  uStack_b68._4_4_ = (int)uVar36;
  uStack_b60._0_4_ = (int)lVar26;
  uStack_b60._4_4_ = (int)((ulong)lVar26 >> 0x20);
  uStack_b48._0_4_ = 0;
  uStack_b48._4_4_ = 0;
  uStack_b50._0_4_ = 0;
  uStack_b50._4_4_ = 0;
  uStack_b38 = 0;
  iStack_b40 = 0;
  iStack_b3c = 0;
  uStack_b18 = 0;
  lStack_b20 = 0;
  iStack_b58 = (int)uStack_b60;
  uStack_b54 = uStack_b60._4_4_;
  plStack_b28 = &lStack_b20;
  if ((lVar26 == 0) && ((long)uStack_b68._4_4_ * (long)(int)uStack_b68 != 0)) {
    puVar18 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar18 = 1;
    uStack_1610 = (undefined **)(puVar18 + 1);
    uStack_1608 = (undefined **)0x1c;
    *(undefined1 *)(puVar18 + 8) = 0;
    *(undefined8 *)(puVar18 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar18 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar18 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar18 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&uStack_1610,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
    goto LAB_10938c3fc;
  }
  uStack_b50 = (long)uStack_b68._4_4_ * 3;
  lVar38 = uStack_b50;
  if (uVar36 >> 0x20 != 1) {
    lVar38 = (long)iVar33 * 3;
  }
  lStack_b20 = uStack_b50;
  if (iVar33 != 0) {
    lStack_b20 = lVar38;
  }
  uStack_b70._0_4_ = 0x42ff4010;
  if (lVar38 != uStack_b50 && iVar33 != 0) {
    uStack_b70._0_4_ = 0x42ff0010;
  }
  uStack_b18 = 3;
  uStack_b48 = lVar26 + lStack_b20 * ((long)uVar36 >> 0x20);
  uStack_b50 = (uStack_b48 - lStack_b20) + uStack_b50;
  uStack_120 = 0;
  puStack_130._0_4_ = 0x1010000;
  puStack_128 = &uStack_b70;
  uStack_1610 = (undefined **)0x242ff0010;
  puStack_15d0 = &uStack_1608;
  iVar33 = (int)(uStack_bd0 >> 0x20);
  iVar34 = (int)uStack_bd0;
  uStack_1608 = (undefined **)CONCAT44(iVar34,iVar33);
  pbStack_1600 = pbStack_bd8;
  pbStack_15f8 = pbStack_bd8;
  pbStack_15e8 = (byte *)0x0;
  pbStack_15f0 = (byte *)0x0;
  lStack_15d8 = 0;
  uStack_15e0 = 0;
  alStack_15c0[0] = 0;
  alStack_15c0[1] = 0;
  plStack_15c8 = alStack_15c0;
  if ((pbStack_bd8 == (byte *)0x0) && ((long)iVar34 * (long)iVar33 != 0)) {
    puVar18 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar18 = 1;
    uStack_bc0 = (undefined **)(puVar18 + 1);
    uStack_bb8 = (undefined **)0x1c;
    *(undefined1 *)(puVar18 + 8) = 0;
    *(undefined8 *)(puVar18 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar18 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar18 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar18 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&uStack_bc0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
    goto LAB_10938c3fc;
  }
  lVar38 = (long)iVar34 * 3;
  lVar26 = lVar38;
  if (uStack_bd0 >> 0x20 != 1) {
    lVar26 = (long)iStack_bc8 * 3;
  }
  alStack_15c0[0] = lVar38;
  if (iStack_bc8 != 0) {
    alStack_15c0[0] = lVar26;
  }
  uVar46 = 0x42ff4010;
  if (lVar26 != lVar38 && iStack_bc8 != 0) {
    uVar46 = 0x42ff0010;
  }
  uStack_1610 = (undefined **)CONCAT44(2,uVar46);
  alStack_15c0[1] = 3;
  pbStack_15e8 = pbStack_bd8 + alStack_15c0[0] * ((long)uStack_bd0 >> 0x20);
  pbStack_15f0 = pbStack_15e8 + (lVar38 - alStack_15c0[0]);
  iStack_1a0 = -0x3dff0000;
  dStack_190 = 0.0;
  uStack_bc0 = (undefined **)*puVar14;
  puStack_198 = &uStack_1610;
  FUN_109b0f718(0,0,&puStack_130,&iStack_1a0,&uStack_bc0,1);
  lVar26 = uStack_b50;
  lVar38 = uStack_b48;
  if (lStack_15d8 != 0) {
    piVar2 = (int *)(lStack_15d8 + 0x14);
    do {
      iVar33 = *piVar2;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar13) {
        *piVar2 = iVar33 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar33 + -1 == 0) {
      func_0x000109a848d4(&uStack_1610);
      lVar26 = uStack_b50;
      lVar38 = uStack_b48;
    }
  }
  lStack_15d8 = 0;
  pbStack_15f8 = (byte *)0x0;
  pbStack_1600 = (byte *)0x0;
  pbStack_15e8 = (byte *)0x0;
  pbStack_15f0 = (byte *)0x0;
  if (0 < uStack_1610._4_4_) {
    lVar25 = 0;
    do {
      *(undefined4 *)((long)puStack_15d0 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < uStack_1610._4_4_);
  }
  uStack_b50 = lVar26;
  uStack_b48 = lVar38;
  if (plStack_15c8 != alStack_15c0 && plStack_15c8 != (long *)0x0) {
    _free(plStack_15c8[-1]);
  }
  if (uStack_b38 != 0) {
    piVar2 = (int *)(uStack_b38 + 0x14);
    do {
      iVar33 = *piVar2;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar13) {
        *piVar2 = iVar33 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar33 + -1 == 0) {
      func_0x000109a848d4(&uStack_b70);
    }
  }
  uStack_b38 = 0;
  iStack_b58 = 0;
  uStack_b54 = 0;
  uStack_b60._0_4_ = 0;
  uStack_b60._4_4_ = 0;
  uStack_b48._0_4_ = 0;
  uStack_b48._4_4_ = 0;
  uStack_b50._0_4_ = 0;
  uStack_b50._4_4_ = 0;
  if (0 < uStack_b70._4_4_) {
    lVar26 = 0;
    do {
      *(undefined4 *)((long)ppuStack_b30 + lVar26 * 4) = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < uStack_b70._4_4_);
  }
  if (plStack_b28 != &lStack_b20 && plStack_b28 != (long *)0x0) {
    _free(plStack_b28[-1]);
  }
  uStack_b68._0_4_ = (int)*(undefined8 *)(param_2 + 0x88);
  uStack_b68._4_4_ = (int)((ulong)*(undefined8 *)(param_2 + 0x88) >> 0x20);
  uStack_b70._0_4_ = (undefined4)*(undefined8 *)(param_2 + 0x80);
  uStack_b70._4_4_ = (int)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20);
  iStack_b58 = (int)*(undefined8 *)(param_2 + 0x98);
  uStack_b54 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x98) >> 0x20);
  uStack_b60._0_4_ = (int)*(undefined8 *)(param_2 + 0x90);
  uStack_b60._4_4_ = (int)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20);
  uStack_b48._0_4_ = (undefined4)*(undefined8 *)(param_2 + 0xa8);
  uStack_b48._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xa8) >> 0x20);
  uStack_b50._0_4_ = (undefined4)*(undefined8 *)(param_2 + 0xa0);
  uStack_b50._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xa0) >> 0x20);
  iStack_b40 = (int)*(undefined8 *)(param_2 + 0xb0);
  iStack_b3c = (int)((ulong)*(undefined8 *)(param_2 + 0xb0) >> 0x20);
  uStack_b08 = *(undefined8 *)(param_2 + 0xe8);
  uStack_b10 = *(undefined8 *)(param_2 + 0xe0);
  uStack_af8 = *(undefined8 *)(param_2 + 0xf8);
  uStack_b00 = *(undefined8 *)(param_2 + 0xf0);
  uStack_af0 = *(undefined8 *)(param_2 + 0x100);
  plStack_b28 = *(long **)(param_2 + 200);
  ppuStack_b30 = *(undefined ***)(param_2 + 0xc0);
  uStack_b18 = *(undefined8 *)(param_2 + 0xd8);
  lStack_b20 = *(long *)(param_2 + 0xd0);
  FUN_109388a48(&puStack_130,param_2 + 0x140,&uStack_b70);
  iVar34 = *(int *)(lVar44 + 0x9dc);
  iVar4 = *(int *)(lVar44 + 0x9e0);
  dStack_170 = (*(double *)(param_2 + 0x40) / 0.017453292519943295) * 0.017453292519943295;
  dVar49 = (*(double *)(param_2 + 0x48) / 0.017453292519943295) * 0.017453292519943295;
  uStack_140 = 0;
  uStack_148 = 0;
  dVar47 = dStack_170 * 0.5;
  iStack_1a0 = iVar34;
  iStack_19c = iVar4;
  dStack_190 = (double)iVar34 / 2.0;
  dStack_188 = (double)iVar4 / 2.0;
  dStack_168 = dVar49;
  _tan();
  dVar49 = dVar49 * 0.5;
  _tan();
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_150 = 0;
  dStack_178 = ((double)iVar4 / 2.0) / dVar49;
  iVar5 = *(int *)(lVar44 + 0x9e8);
  fVar51 = *(float *)(lVar44 + 0x9f0);
  uStack_1608 = (undefined **)0x0;
  uStack_1610 = (undefined **)0x0;
  pbStack_15f8 = (byte *)0x0;
  pbStack_1600 = (byte *)0x0;
  uStack_b70._0_4_ = 0x42ff0000;
  uStack_b68._4_4_ = 0;
  uStack_b60._0_4_ = 0;
  uStack_b70._4_4_ = 0;
  uStack_b68._0_4_ = 0;
  uStack_b54 = 0;
  uStack_b50._0_4_ = 0;
  uStack_b60._4_4_ = 0;
  iStack_b58 = 0;
  uStack_b48._4_4_ = 0;
  uStack_b50._4_4_ = 0;
  uStack_b48._0_4_ = 0;
  uStack_b38 = 0;
  iStack_b40 = 0;
  iStack_b3c = 0;
  ppuStack_b30 = (undefined **)&uStack_b68;
  iVar33 = iVar4;
  if (iVar34 <= iVar4) {
    iVar33 = iVar34;
  }
  uStack_b18 = 0;
  lStack_b20 = 0;
  uStack_bc0 = (undefined **)CONCAT44(iVar34,iVar4);
  plStack_b28 = &lStack_b20;
  dStack_180 = ((double)iVar34 / 2.0) / dVar47;
  FUN_109a83fd0(&uStack_b70,2,&uStack_bc0,5);
  FUN_109a48880(&uStack_b70,&uStack_1610);
  iVar34 = 0;
  if (iVar5 != 0) {
    iVar34 = iVar33 / iVar5;
  }
  iVar33 = 0;
  if (iVar34 != 0) {
    iVar33 = iStack_1a0 / iVar34;
  }
  iVar33 = iVar33 + 1;
  iVar4 = 0;
  if (iVar34 != 0) {
    iVar4 = iStack_19c / iVar34;
  }
  iVar4 = iVar4 + 1;
  ppuVar19 = (undefined **)(long)(iVar4 * iVar33);
  func_0x00010737fadc(&uStack_1610);
  pbVar27 = pbStack_1600;
  ppuVar8 = uStack_1608;
  ppuVar7 = uStack_1610;
  if (0 < (long)uStack_1608) {
    uStack_1608 = (undefined **)((ulong)uStack_1608 & 0xffffffff00000000);
    ppuVar19 = ppuVar8;
    func_0x000109266090(&uStack_1610);
  }
  lVar26 = *(long *)(param_2 + 0x1d8);
  lVar38 = *(long *)(param_2 + 0x1e0);
  if (lVar38 - lVar26 == 0) {
    puVar41 = (undefined8 *)0x0;
    lStack_c18 = 0;
    uStack_c20 = 0;
    lStack_c10 = 0;
  }
  else {
    puVar40 = (undefined8 *)0x0;
    puVar43 = (undefined8 *)0x0;
    uVar36 = 0;
    uVar31 = (lVar38 - lVar26 >> 3) * -0x5555555555555555;
    puVar45 = (undefined8 *)0x0;
    do {
      lVar25 = *(long *)(param_2 + 0x208);
      puVar41 = puVar45;
      if (lVar25 == *(long *)(param_2 + 0x210)) {
LAB_10938b1d0:
        uVar31 = lVar26 + uVar36 * 0x18;
        ppuVar19 = &puStack_130;
        FUN_1093895b8(uVar31,ppuVar19,&iStack_1a0,&uStack_1610,&uStack_1680);
        uVar48 = uStack_1680;
        if ((uVar31 & 1) != 0) {
          uVar31 = (ulong)((int)((double)uStack_1610 / (double)iVar34) +
                          iVar33 * (int)((double)uStack_1608 / (double)iVar34));
          uVar30 = uVar31 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)((long)ppuVar7 + uVar30) =
               1L << (uVar31 & 0x3f) | *(ulong *)((long)ppuVar7 + uVar30);
          uStack_bb8 = uStack_1608;
          uStack_bc0 = uStack_1610;
          if (puVar40 < puVar43) {
            puVar40[1] = uStack_1608;
            *puVar40 = uStack_1610;
            puVar40[2] = uStack_1680;
            puVar40 = puVar40 + 4;
          }
          else {
            lVar26 = (long)puVar40 - (long)puVar45 >> 5;
            uVar31 = lVar26 + 1;
            if (uVar31 >> 0x3b != 0) {
              FUN_10938ca6c();
              goto LAB_10938c3fc;
            }
            uVar30 = (long)puVar43 - (long)puVar45 >> 4;
            if (uVar30 <= uVar31) {
              uVar30 = uVar31;
            }
            if (0x7fffffffffffffdf < (ulong)((long)puVar43 - (long)puVar45)) {
              uVar30 = 0x7ffffffffffffff;
            }
            if (uVar30 == 0) {
              ppuVar19 = (undefined **)0x0;
            }
            else {
              FUN_10938ca80();
            }
            puVar39 = (undefined8 *)(uVar30 + ((long)puVar40 - (long)puVar45));
            puVar39[1] = uStack_bb8;
            *puVar39 = uStack_bc0;
            puVar39[2] = uVar48;
            puVar41 = puVar39 + lVar26 * -4;
            puVar42 = puVar41;
            for (puVar43 = puVar45; puVar43 != puVar40; puVar43 = puVar43 + 4) {
              uVar48 = *puVar43;
              puVar42[1] = puVar43[1];
              *puVar42 = uVar48;
              puVar42[2] = puVar43[2];
              puVar42 = puVar42 + 4;
            }
            puVar43 = (undefined8 *)(uVar30 + (long)ppuVar19 * 0x20);
            puVar40 = puVar39 + 4;
            if (puVar45 != (undefined8 *)0x0) {
              __ZdlPv(puVar45);
            }
          }
        }
        lVar26 = *(long *)(param_2 + 0x1d8);
        lVar38 = *(long *)(param_2 + 0x1e0);
      }
      else {
        if (uVar31 != *(long *)(param_2 + 0x210) - lVar25 >> 2) {
          FUN_10938ce40(&UNK_10f568710);
          goto LAB_10938c3fc;
        }
        if (fVar51 <= *(float *)(lVar25 + uVar36 * 4)) goto LAB_10938b1d0;
      }
      uVar36 = uVar36 + 1;
      uVar31 = (lVar38 - lVar26 >> 3) * -0x5555555555555555;
      puVar45 = puVar41;
    } while (uVar36 < uVar31);
    lStack_c18 = 0;
    uStack_c20 = 0;
    lStack_c10 = 0;
    if ((long)puVar40 - (long)puVar41 != 0) {
      uVar36 = (long)puVar40 - (long)puVar41 >> 5;
      if (uVar36 >> 0x3b != 0) {
        FUN_10938ca6c();
        goto LAB_10938c3fc;
      }
      FUN_10938ca80();
      lStack_c18 = 0;
      lStack_c10 = uVar36 + (long)ppuVar19 * 0x20;
      do {
        puVar43 = (undefined8 *)((long)puVar41 + lStack_c18);
        puVar45 = (undefined8 *)(uVar36 + lStack_c18);
        uVar48 = *puVar43;
        puVar45[1] = puVar43[1];
        *puVar45 = uVar48;
        puVar45[2] = puVar43[2];
        lStack_c18 = lStack_c18 + 0x20;
      } while (puVar43 + 4 != puVar40);
      lStack_c18 = uVar36 + lStack_c18;
      uStack_c20 = uVar36;
    }
  }
  ppuStack_c00 = ppuVar8;
  pbStack_bf8 = pbVar27;
  iStack_bf0 = 1;
  ppuStack_c08 = ppuVar7;
  iStack_bec = iVar33;
  iStack_be8 = iVar33;
  iStack_be4 = iVar4;
  if (puVar41 != (undefined8 *)0x0) {
    __ZdlPv(puVar41);
  }
  if (uStack_b38 != 0) {
    piVar2 = (int *)(uStack_b38 + 0x14);
    do {
      iVar33 = *piVar2;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar13) {
        *piVar2 = iVar33 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar33 + -1 == 0) {
      func_0x000109a848d4(&uStack_b70);
    }
  }
  uStack_b38 = 0;
  iStack_b58 = 0;
  uStack_b54 = 0;
  uStack_b60._0_4_ = 0;
  uStack_b60._4_4_ = 0;
  uStack_b48._0_4_ = 0;
  uStack_b48._4_4_ = 0;
  uStack_b50._0_4_ = 0;
  uStack_b50._4_4_ = 0;
  if (0 < uStack_b70._4_4_) {
    lVar26 = 0;
    do {
      *(undefined4 *)((long)ppuStack_b30 + lVar26 * 4) = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < uStack_b70._4_4_);
  }
  if (plStack_b28 != &lStack_b20 && plStack_b28 != (long *)0x0) {
    _free(plStack_b28[-1]);
  }
  iVar33 = 0;
  if (iVar34 != 0) {
    iVar33 = iStack_1a0 / iVar34;
  }
  uVar1 = iVar33 + 1;
  iVar4 = 0;
  if (iVar34 != 0) {
    iVar4 = iStack_19c / iVar34;
  }
  iVar5 = (iVar4 + 1U) * uVar1;
  if (iVar5 == 0) {
    puVar41 = (undefined8 *)0x0;
    puVar40 = (undefined8 *)0x0;
LAB_10938b4b8:
    iVar9 = iStack_bec;
    iVar5 = iStack_bf0;
    ppuVar7 = ppuStack_c08;
    lVar26 = (long)puVar41 - (long)puVar40 >> 5;
    if (0 < lVar26) {
      uVar36 = lVar26 + 1;
      puVar41 = puVar40;
      do {
        *puVar41 = 0;
        puVar41[1] = 0;
        puVar41[2] = 0x7fefffffffffffff;
        puVar41 = puVar41 + 4;
        uVar36 = uVar36 - 1;
      } while (1 < uVar36);
    }
    plVar37 = (long *)*param_3;
    plVar16 = (long *)param_3[1];
    if (plVar37 != plVar16) {
      do {
        puVar43 = (undefined8 *)plVar37[1];
        for (puVar41 = (undefined8 *)*plVar37; puVar41 != puVar43;
            puVar41 = (undefined8 *)((long)puVar41 + 0xc)) {
          uStack_b60 = (double)*(float *)(puVar41 + 1) * 100.0;
          uStack_b70 = (undefined **)((double)(float)*puVar41 * 100.0);
          uStack_b68 = (undefined *)((double)(float)((ulong)*puVar41 >> 0x20) * 100.0);
          puVar45 = &uStack_b70;
          ppuVar19 = &puStack_130;
          FUN_1093895b8(puVar45,ppuVar19,&iStack_1a0,&uStack_1610,&uStack_bc0);
          if ((int)puVar45 != 0) {
            iVar24 = (int)((double)uStack_1610 / (double)iVar34);
            iVar29 = (int)((double)uStack_1608 / (double)iVar34);
            uVar36 = (ulong)(iVar5 * iVar24 + iVar9 * iVar29);
            if ((((ulong)ppuVar7[uVar36 >> 6] >> (uVar36 & 0x3f) & 1) == 0) &&
               (puVar45 = puVar40 + (long)(int)(iVar24 + uVar1 * iVar29) * 4,
               (double)uStack_bc0 < (double)puVar45[2])) {
              puVar45[1] = uStack_1608;
              *puVar45 = uStack_1610;
              puVar45[2] = uStack_bc0;
            }
          }
        }
        plVar37 = plVar37 + 0xf;
      } while (plVar37 != plVar16);
    }
    if (iVar33 < 0) {
      puVar41 = (undefined8 *)0x0;
      puStack_16e0 = (undefined8 *)0x0;
    }
    else {
      puVar45 = (undefined8 *)0x0;
      puVar41 = (undefined8 *)0x0;
      puStack_16e0 = (undefined8 *)0x0;
      puVar42 = (undefined8 *)0x0;
      uVar36 = 0;
      puVar43 = (undefined8 *)0x0;
      do {
        if (-1 < iVar4) {
          uVar31 = 0;
          do {
            puVar39 = puVar40 + uVar36 * 4 + uVar31 * uVar1 * 4;
            if ((double)puVar39[2] < 1.79769313486232e+308) {
              if (puVar43 < puVar45) {
                uVar48 = *puVar39;
                puVar43[1] = puVar39[1];
                *puVar43 = uVar48;
                puVar43[2] = puVar39[2];
                puVar39 = puStack_16e0;
              }
              else {
                lVar26 = (long)puVar42 - (long)puStack_16e0 >> 5;
                uVar30 = lVar26 + 1;
                if (uVar30 >> 0x3b != 0) {
                  FUN_10938ca6c();
                  goto LAB_10938c3fc;
                }
                uVar21 = (long)puVar45 - (long)puStack_16e0 >> 4;
                if (uVar21 <= uVar30) {
                  uVar21 = uVar30;
                }
                if (0x7fffffffffffffdf < (ulong)((long)puVar45 - (long)puStack_16e0)) {
                  uVar21 = 0x7ffffffffffffff;
                }
                if (uVar21 == 0) {
                  ppuVar19 = (undefined **)0x0;
                }
                else {
                  FUN_10938ca80();
                }
                puVar43 = (undefined8 *)(uVar21 + ((long)puVar42 - (long)puStack_16e0));
                uVar48 = *puVar39;
                puVar43[1] = puVar39[1];
                *puVar43 = uVar48;
                puVar43[2] = puVar39[2];
                puVar39 = puVar43 + lVar26 * -4;
                puVar45 = puVar39;
                for (puVar41 = puStack_16e0; puVar41 != puVar42; puVar41 = puVar41 + 4) {
                  uVar48 = *puVar41;
                  puVar45[1] = puVar41[1];
                  *puVar45 = uVar48;
                  puVar45[2] = puVar41[2];
                  puVar45 = puVar45 + 4;
                }
                puVar45 = (undefined8 *)(uVar21 + (long)ppuVar19 * 0x20);
                if (puStack_16e0 != (undefined8 *)0x0) {
                  __ZdlPv(puStack_16e0);
                }
              }
              puStack_16e0 = puVar39;
              puVar43 = puVar43 + 4;
              puVar42 = puVar43;
              puVar41 = puVar43;
            }
            uVar31 = uVar31 + 1;
          } while (uVar31 != iVar4 + 1U);
        }
        uVar36 = uVar36 + 1;
      } while (uVar36 != uVar1);
    }
    if (puVar40 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    FUN_10938da84(0,&ppuStack_c40,puVar14);
    _memcpy(&uStack_1610,*param_4,0x9c8);
    FUN_1093896ac(*(undefined4 *)(lVar44 + 0x9f4),&uStack_b70,&ppuStack_c40,uStack_c20,lStack_c18,
                  &uStack_1610);
    _memcpy(*param_4,&uStack_b70,0x9c8);
    iVar33 = iStack_1a8;
    if ((*(char *)(lVar44 + 0x9fc) == '\0') ||
       ((*(char *)(lVar44 + 0x9fc) == '\x02' && (iStack_1a8 < *(int *)(lVar44 + 0xa00))))) {
      _memcpy(&uStack_1610,*param_4,0x9c8);
      FUN_1093896ac(*(undefined4 *)(lVar44 + 0x9f8),&uStack_b70,&ppuStack_c40,puStack_16e0,puVar41,
                    &uStack_1610);
      _memcpy(*param_4,&uStack_b70,0x9c8);
      iVar34 = iStack_1a8;
    }
    else {
      iVar34 = 0;
    }
    iVar4 = *(int *)(*param_4 + 0x9d8);
    if (iVar4 == 1) {
      FUN_10938dbb8(&uStack_b70,&ppuStack_be0);
      FUN_10938dc30(&ppuStack_be0,&uStack_b70);
      uStack_b70._0_4_ = 0x10af4b00;
      uStack_b70._4_4_ = 1;
      ppuVar19 = &PTR_DAT_110af4b00;
      if (uStack_b68 != (undefined *)0x0) {
        __ZdaPv();
        ppuVar19 = (undefined **)CONCAT44(uStack_b70._4_4_,(undefined4)uStack_b70);
      }
LAB_10938b898:
      uStack_b70 = ppuVar19;
      func_0x00010938df78(&ppuStack_be0);
    }
    else {
      if (iVar4 == 2) {
        FUN_10938dee0(&ppuStack_be0);
        ppuVar19 = uStack_b70;
        goto LAB_10938b898;
      }
      if (iVar4 == 3) {
        FUN_10938dbb8(&uStack_b70,&ppuStack_be0);
        FUN_10938dc30(&ppuStack_be0,&uStack_b70);
        uStack_b70._0_4_ = 0x10af4b00;
        uStack_b70._4_4_ = 1;
        if (uStack_b68 != (undefined *)0x0) {
          __ZdaPv();
        }
        FUN_10938dee0(&ppuStack_be0);
      }
    }
    iVar4 = *(int *)(*param_4 + 0x9d8);
    if (iVar4 == 1) {
      FUN_10938e030(&uStack_b70,&ppuStack_c40);
      FUN_10938c710(&ppuStack_c40,&uStack_b70);
      uStack_b70._0_4_ = 0x10af4cf0;
      uStack_b70._4_4_ = 1;
      ppuVar19 = &PTR_FUN_110af4cf0;
      if (uStack_b68 != (undefined *)0x0) {
        __ZdaPv();
        ppuVar19 = (undefined **)CONCAT44(uStack_b70._4_4_,(undefined4)uStack_b70);
      }
LAB_10938b938:
      uStack_b70 = ppuVar19;
      func_0x00010938e334(&ppuStack_c40);
    }
    else {
      if (iVar4 == 2) {
        FUN_10938e2bc(&ppuStack_c40);
        ppuVar19 = uStack_b70;
        goto LAB_10938b938;
      }
      if (iVar4 == 3) {
        FUN_10938e030(&uStack_b70,&ppuStack_c40);
        FUN_10938c710(&ppuStack_c40,&uStack_b70);
        uStack_b70._0_4_ = 0x10af4cf0;
        uStack_b70._4_4_ = 1;
        if (uStack_b68 != (undefined *)0x0) {
          __ZdaPv();
        }
        FUN_10938e2bc(&ppuStack_c40);
      }
    }
    uStack_b70._0_4_ = (undefined4)uStack_bd0;
    uStack_b70._4_4_ = (int)(uStack_bd0 >> 0x20);
    puStack_1628 = (undefined4 *)0x0;
    uStack_1620 = 0;
    uStack_1618 = 0;
    ppuStack_1630 = &PTR_FUN_110af4b90;
    FUN_10938e3fc(&ppuStack_1630,&uStack_b70);
    uVar1 = (int)uStack_bd0 * uStack_bd0._4_4_;
    if ((ulong)uVar1 != 0) {
      pbVar27 = pbStack_bd8;
      puVar18 = puStack_1628;
      do {
        uVar46 = NEON_ucvtf((uint)*pbVar27);
        *puVar18 = uVar46;
        uVar46 = NEON_ucvtf((uint)pbVar27[1]);
        puVar18[1] = uVar46;
        uVar46 = NEON_ucvtf((uint)pbVar27[2]);
        puVar18[2] = uVar46;
        pbVar27 = pbVar27 + 3;
        puVar18 = puVar18 + 3;
      } while (pbVar27 !=
               pbStack_bd8 +
               (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) + (long)(int)uVar1
              );
    }
    uStack_1640 = (undefined4)uStack_1620;
    uStack_163c = (undefined4)((ulong)uStack_1620 >> 0x20);
    uStack_1638 = 0x100000003;
    uStack_1650 = 0x100000001;
    uStack_1648 = 0x100000001;
    uStack_1658 = (undefined4)uStack_c30;
    uStack_1654 = (undefined4)((ulong)uStack_c30 >> 0x20);
    uStack_1678 = 0;
    uStack_1680 = 0;
    uStack_1668 = 0;
    uStack_1670 = 0;
    uStack_1660 = 0x3f800000;
    func_0x000109d0f600(&uStack_b70,&uStack_1640,&uStack_1648);
    func_0x000107c31940(&uStack_1610,"data");
    puVar14 = &uStack_1680;
    FUN_10938e4b0(puVar14,&uStack_1610,&uStack_1610);
    puVar10 = uStack_b68;
    puVar14[7] = uStack_b60;
    puVar14[6] = puVar10;
    puVar14[8] = CONCAT44(uStack_b54,iStack_b58);
    func_0x0001093783c0(puVar14 + 9,&uStack_b50);
    func_0x00010937843c(puVar14 + 0xb,&iStack_b40);
    if ((long)pbStack_1600 < 0) {
      __ZdlPv(uStack_1610);
    }
    func_0x000105675c90(&uStack_b70);
    func_0x000109d0f600(&uStack_b70,&uStack_1658,&uStack_1648,lStack_c38);
    func_0x000107c31940(&uStack_1610,&UNK_10f56887f);
    puVar14 = &uStack_1680;
    FUN_10938e4b0(puVar14,&uStack_1610,&uStack_1610);
    puVar10 = uStack_b68;
    puVar14[7] = uStack_b60;
    puVar14[6] = puVar10;
    puVar14[8] = CONCAT44(uStack_b54,iStack_b58);
    func_0x0001093783c0(puVar14 + 9,&uStack_b50);
    func_0x00010937843c(puVar14 + 0xb,&iStack_b40);
    if ((long)pbStack_1600 < 0) {
      __ZdlPv(uStack_1610);
    }
    func_0x000105675c90(&uStack_b70);
    func_0x000109cdb3f0(auStack_16a8,*(undefined8 *)(*param_4 + 0x9c8),&uStack_1680,1);
    func_0x000107c31940(&uStack_b70,&UNK_10f56888f);
    puVar15 = auStack_16a8;
    FUN_10938e710(puVar15,&uStack_b70);
    if (puVar15 == (undefined1 *)0x0) {
      FUN_109262df8(&UNK_10f639994);
      goto LAB_10938c3fc;
    }
    func_0x000109d0e828(&uStack_1610,puVar15 + 0x28,&uStack_1648,0);
    if ((long)uStack_b60 < 0) {
      __ZdlPv(CONCAT44(uStack_b70._4_4_,(undefined4)uStack_b70));
    }
    pbVar27 = pbStack_15f0;
    ppuVar19 = uStack_1608;
    uStack_b60._0_4_ = 0;
    uStack_b60._4_4_ = 0;
    uStack_b70._0_4_ = 0x10af4cf0;
    uStack_b70._4_4_ = 1;
    uStack_b68._0_4_ = 0;
    uStack_b68._4_4_ = 0;
    iStack_b58 = 0;
    iStack_b40 = 0;
    iStack_b3c = 0;
    uStack_b50._0_4_ = 0x10af4cf0;
    uStack_b50._4_4_ = 1;
    uStack_b48._0_4_ = 0;
    uStack_b48._4_4_ = 0;
    uStack_b38 = uStack_b38 & 0xffffffff00000000;
    lStack_b20 = 0;
    ppuStack_b30 = &PTR_FUN_110af4c80;
    plStack_b28 = (long *)0x0;
    uStack_b18 = uStack_b18 & 0xffffffff00000000;
    uStack_b10 = CONCAT71(uStack_b10._1_7_,1);
    iVar4 = (int)uStack_1608;
    ppuStack_16c8 = uStack_1608;
    lStack_bb0 = 0;
    uStack_ba8 = 0;
    uStack_bb8 = (undefined **)0x0;
    uStack_bc0 = &PTR_FUN_110af4cf0;
    FUN_10938db10(&uStack_bc0,&ppuStack_16c8);
    FUN_10938c710(&uStack_b70,&uStack_bc0);
    uStack_bc0 = &PTR_FUN_110af4cf0;
    if (uStack_bb8 != (undefined **)0x0) {
      __ZdaPv();
    }
    uStack_bc0 = ppuVar19;
    FUN_10938db10(&uStack_b70,&uStack_bc0);
    if (0 < uStack_b60._4_4_) {
      lVar26 = 0;
      do {
        _memcpy(CONCAT44(uStack_b68._4_4_,(int)uStack_b68) + lVar26 * iStack_b58 * 4,pbVar27,
                (long)(int)uStack_b60 << 2);
        lVar26 = lVar26 + 1;
        pbVar27 = (byte *)((long)pbVar27 + (long)iVar4 * 4);
      } while (lVar26 < uStack_b60._4_4_);
    }
    func_0x000107c31940(&uStack_bc0,&UNK_10f56889d);
    puVar15 = auStack_16a8;
    FUN_10937a848(puVar15,&uStack_bc0);
    if (lStack_bb0 < 0) {
      __ZdlPv(uStack_bc0);
    }
    if (puVar15 == (undefined1 *)0x0) {
      ppuStack_16c8 = ppuVar19;
      FUN_10938da84(0x3f800000,&uStack_bc0,&ppuStack_16c8);
      FUN_10938c710(&uStack_b50,&uStack_bc0);
      uStack_bc0 = &PTR_FUN_110af4cf0;
      if (uStack_bb8 != (undefined **)0x0) {
        __ZdaPv();
      }
    }
    else {
      func_0x000107c31940(&ppuStack_16c8,&UNK_10f56889d);
      puVar15 = auStack_16a8;
      FUN_10938e710(puVar15,&ppuStack_16c8);
      if (puVar15 == (undefined1 *)0x0) {
        FUN_109262df8(&UNK_10f639994);
        goto LAB_10938c3fc;
      }
      func_0x000109d0e828(&uStack_bc0,puVar15 + 0x28,&uStack_1648,0);
      if (lStack_16b8 < 0) {
        __ZdlPv(ppuStack_16c8);
      }
      pfVar35 = pfStack_ba0;
      ppuVar7 = uStack_bb8;
      lVar26 = (long)(int)uStack_bb8;
      if ((0.0 < *(float *)(lVar44 + 0xa08)) && (pfStack_ba0 != (float *)0x0)) {
        pfVar20 = pfStack_ba0 + lVar26;
        pfVar23 = pfStack_ba0 + uStack_bb8._4_4_ * (int)uStack_bb8;
        pfVar22 = pfStack_ba0;
        do {
          pfVar32 = pfVar22 + 1;
          fVar51 = 1.0;
          if (*pfVar22 <= *(float *)(lVar44 + 0xa08)) {
            fVar51 = 0.0;
          }
          *pfVar22 = fVar51;
          pfVar3 = pfVar23;
          if (pfVar23 <= pfVar32) {
            pfVar3 = (float *)0x0;
          }
          bVar13 = pfVar32 != pfVar20;
          lVar38 = lVar26;
          if (bVar13) {
            lVar38 = 0;
          }
          pfVar20 = pfVar20 + lVar38;
          if (bVar13) {
            pfVar3 = pfVar23;
          }
          pfVar23 = pfVar3;
          pfVar22 = pfVar32;
        } while (pfVar3 != (float *)0x0);
      }
      ppuStack_16d0 = uStack_bb8;
      ppuStack_16c8 = &PTR_FUN_110af4cf0;
      lStack_16c0 = 0;
      lStack_16b8 = 0;
      iStack_16b0 = 0;
      FUN_10938db10(&ppuStack_16c8,&ppuStack_16d0);
      FUN_10938c710(&uStack_b50,&ppuStack_16c8);
      ppuStack_16c8 = &PTR_FUN_110af4cf0;
      if (lStack_16c0 != 0) {
        __ZdaPv();
      }
      ppuStack_16c8 = ppuVar7;
      FUN_10938db10(&uStack_b50,&ppuStack_16c8);
      if (0 < iStack_b3c) {
        lVar38 = 0;
        do {
          _memcpy(CONCAT44(uStack_b48._4_4_,(undefined4)uStack_b48) + lVar38 * (int)uStack_b38 * 4,
                  pfVar35,(long)iStack_b40 << 2);
          lVar38 = lVar38 + 1;
          pfVar35 = pfVar35 + lVar26;
        } while (lVar38 < iStack_b3c);
      }
      func_0x000105675c90(&uStack_bc0);
    }
    func_0x000107c31940(&uStack_bc0,&UNK_10f5688b7);
    puVar15 = auStack_16a8;
    FUN_10937a848(puVar15,&uStack_bc0);
    if (lStack_bb0 < 0) {
      __ZdlPv(uStack_bc0);
      if (puVar15 != (undefined1 *)0x0) goto LAB_10938be2c;
LAB_10938bfa4:
      ppuStack_16c8 = ppuVar19;
      FUN_10938e7f4(&uStack_bc0,&ppuStack_16c8,0);
      FUN_10938c7c4(&ppuStack_b30,&uStack_bc0);
      uStack_bc0 = &PTR_FUN_110af4c80;
      if (uStack_bb8 != (undefined **)0x0) {
        __ZdaPv();
      }
    }
    else {
      if (puVar15 == (undefined1 *)0x0) goto LAB_10938bfa4;
LAB_10938be2c:
      func_0x000107c31940(&ppuStack_16c8,&UNK_10f5688b7);
      puVar15 = auStack_16a8;
      FUN_10938e710(puVar15,&ppuStack_16c8);
      if (puVar15 == (undefined1 *)0x0) {
        FUN_109262df8(&UNK_10f639994);
        goto LAB_10938c3fc;
      }
      func_0x000109d0e828(&uStack_bc0,puVar15 + 0x28,&uStack_1648,0);
      if (lStack_16b8 < 0) {
        __ZdlPv(ppuStack_16c8);
      }
      ppuStack_16d0 = uStack_bb8;
      FUN_10938e7f4(&ppuStack_16c8,&ppuStack_16d0,0);
      if (((int)lStack_bb0 == 5) && (0 < (int)((ulong)ppuStack_16d0 >> 0x20))) {
        uVar36 = 0;
        fVar51 = *(float *)(lVar44 + 0x9ec);
        uVar31 = (ulong)ppuStack_16d0 & 0x7fffffff;
        if (((ulong)ppuStack_16d0 & 0x7ffffffe) == 0) {
          uVar31 = 1;
        }
        pfVar35 = pfStack_ba0 + 1;
        do {
          if (0 < (int)ppuStack_16d0) {
            uVar30 = 0;
            pfVar20 = pfVar35;
            do {
              pfVar32 = pfStack_ba0 + uVar36 * ((ulong)ppuStack_16d0 & 0xffffffff) * 5 + uVar30 * 5;
              fVar50 = *pfVar32;
              lVar26 = 0x10;
              pfVar22 = pfVar32;
              pfVar23 = pfVar20;
              do {
                pfVar3 = pfVar23;
                fVar11 = *pfVar23;
                if (*pfVar23 <= fVar50) {
                  pfVar3 = pfVar22;
                  fVar11 = fVar50;
                }
                fVar50 = fVar11;
                lVar26 = lVar26 + -4;
                pfVar22 = pfVar3;
                pfVar23 = pfVar23 + 1;
              } while (lVar26 != 0);
              uVar21 = (ulong)((long)pfVar3 - (long)pfVar32) >> 2;
              if (fVar51 <= *pfVar3 && (uVar21 & 0xff) != 0) {
                *(char *)(lStack_16c0 + (long)iStack_16b0 * (long)(int)uVar36 + uVar30) =
                     (char)uVar21;
              }
              uVar30 = uVar30 + 1;
              pfVar20 = pfVar20 + 5;
            } while (uVar30 != uVar31);
          }
          uVar36 = uVar36 + 1;
          pfVar35 = pfVar35 + ((ulong)ppuStack_16d0 & 0xffffffff) * 4 +
                              ((ulong)ppuStack_16d0 & 0xffffffff);
        } while (uVar36 != (ulong)ppuStack_16d0 >> 0x20);
      }
      FUN_10938c7c4(&ppuStack_b30,&ppuStack_16c8);
      ppuStack_16c8 = &PTR_FUN_110af4c80;
      if (lStack_16c0 != 0) {
        __ZdaPv();
      }
      func_0x000105675c90(&uStack_bc0);
    }
    bVar13 = iVar34 + iVar33 < *(int *)(lVar44 + 0x9e4);
    uStack_b10 = CONCAT71(uStack_b10._1_7_,bVar13);
    *extraout_x8 = &PTR_FUN_110af4cf0;
    extraout_x8[1] = CONCAT44(uStack_b68._4_4_,(int)uStack_b68);
    extraout_x8[2] = CONCAT44(uStack_b60._4_4_,(int)uStack_b60);
    *(int *)(extraout_x8 + 3) = iStack_b58;
    iStack_b58 = 0;
    uStack_b68._0_4_ = 0;
    uStack_b68._4_4_ = 0;
    uStack_b60._0_4_ = 0;
    uStack_b60._4_4_ = 0;
    extraout_x8[4] = &PTR_FUN_110af4cf0;
    extraout_x8[5] = CONCAT44(uStack_b48._4_4_,(undefined4)uStack_b48);
    extraout_x8[6] = CONCAT44(iStack_b3c,iStack_b40);
    *(int *)(extraout_x8 + 7) = (int)uStack_b38;
    uStack_b38 = uStack_b38 & 0xffffffff00000000;
    uStack_b48._0_4_ = 0;
    uStack_b48._4_4_ = 0;
    iStack_b40 = 0;
    iStack_b3c = 0;
    extraout_x8[8] = &PTR_FUN_110af4c80;
    extraout_x8[9] = plStack_b28;
    extraout_x8[10] = lStack_b20;
    *(undefined4 *)(extraout_x8 + 0xb) = (undefined4)uStack_b18;
    plStack_b28 = (long *)0x0;
    lStack_b20 = 0;
    uStack_b18 = uStack_b18 & 0xffffffff00000000;
    *(bool *)(extraout_x8 + 0xc) = bVar13;
    extraout_x8[0x11] = 0;
    plVar37 = extraout_x8 + 0x12;
    extraout_x8[0x15] = 0;
    extraout_x8[0xd] = *param_4;
    *param_4 = 0;
    if (param_4 + 5 != plVar37) {
      plVar16 = (long *)param_4[8];
      if (plVar16 == param_4 + 5) {
        (**(code **)(*plVar16 + 0x18))(plVar16,plVar37);
        (**(code **)(*(long *)param_4[8] + 0x20))();
        param_4[8] = extraout_x8[0x15];
        extraout_x8[0x15] = plVar37;
      }
      else {
        extraout_x8[0x15] = plVar16;
        param_4[8] = 0;
      }
    }
    plVar37 = extraout_x8 + 0xe;
    plVar16 = param_4 + 1;
    if (plVar16 != plVar37) {
      plVar17 = (long *)extraout_x8[0x11];
      plVar28 = (long *)param_4[4];
      if (plVar17 == plVar37) {
        if (plVar28 == plVar16) {
          (**(code **)(*plVar17 + 0x18))(plVar17,&uStack_bc0);
          (**(code **)(*(long *)extraout_x8[0x11] + 0x20))();
          extraout_x8[0x11] = 0;
          (**(code **)(*(long *)param_4[4] + 0x18))((long *)param_4[4],plVar37);
          (**(code **)(*(long *)param_4[4] + 0x20))();
          param_4[4] = 0;
          extraout_x8[0x11] = plVar37;
          (*(code *)uStack_bc0[3])(&uStack_bc0,plVar16);
          (*(code *)uStack_bc0[4])(&uStack_bc0);
        }
        else {
          (**(code **)(*plVar17 + 0x18))(plVar17,plVar16);
          (**(code **)(*(long *)extraout_x8[0x11] + 0x20))();
          extraout_x8[0x11] = param_4[4];
        }
        param_4[4] = (long)plVar16;
      }
      else if (plVar28 == plVar16) {
        (**(code **)(*plVar28 + 0x18))(plVar28,plVar37);
        (**(code **)(*(long *)param_4[4] + 0x20))();
        param_4[4] = extraout_x8[0x11];
        extraout_x8[0x11] = plVar37;
      }
      else {
        extraout_x8[0x11] = plVar28;
        param_4[4] = (long)plVar17;
      }
    }
    ppuStack_b30 = &PTR_FUN_110af4c80;
    if (plStack_b28 != (long *)0x0) {
      __ZdaPv();
    }
    plStack_b28 = (long *)0x0;
    lStack_b20 = 0;
    uStack_b18 = uStack_b18 & 0xffffffff00000000;
    uStack_b50._0_4_ = 0x10af4cf0;
    uStack_b50._4_4_ = 1;
    if (CONCAT44(uStack_b48._4_4_,(undefined4)uStack_b48) != 0) {
      __ZdaPv();
    }
    uStack_b48._0_4_ = 0;
    uStack_b48._4_4_ = 0;
    iStack_b40 = 0;
    iStack_b3c = 0;
    uStack_b38 = uStack_b38 & 0xffffffff00000000;
    uStack_b70._0_4_ = 0x10af4cf0;
    uStack_b70._4_4_ = 1;
    if (CONCAT44(uStack_b68._4_4_,(int)uStack_b68) != 0) {
      __ZdaPv();
    }
    func_0x000105675c90(&uStack_1610);
    func_0x000109379fe8(auStack_16a8);
    func_0x000109379fe8(&uStack_1680);
    ppuStack_1630 = &PTR_FUN_110af4b90;
    if (puStack_1628 != (undefined4 *)0x0) {
      __ZdaPv();
    }
    ppuStack_c40 = &PTR_FUN_110af4cf0;
    if (lStack_c38 != 0) {
      __ZdaPv();
    }
    if (puStack_16e0 != (undefined8 *)0x0) {
      __ZdlPv(puStack_16e0);
    }
    if (ppuStack_c08 != (undefined **)0x0) {
      __ZdlPv();
    }
    if (uStack_c20 != 0) {
      __ZdlPv();
    }
    _free(uStack_148);
    ppuStack_be0 = &PTR_DAT_110af4b00;
    if (pbStack_bd8 != (byte *)0x0) {
      __ZdaPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar41 = (undefined8 *)(long)iVar5;
    if (-1 < iVar5) {
      puVar40 = puVar41;
      FUN_10938ca80();
      ppuVar19 = (undefined **)((long)puVar41 << 5);
      _bzero();
      puVar41 = puVar40 + (long)puVar41 * 4;
      goto LAB_10938b4b8;
    }
  }
  FUN_10938ca6c();
LAB_10938c3fc:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10938c400);
  (*pcVar12)();
}



/* Entry: 10938c710; end: 10938c77b;  */

long FUN_10938c710(long param_1,long param_2)

{
  if (param_1 != param_2) {
    if (*(long *)(param_1 + 8) != 0) {
      __ZdaPv();
    }
    *(long *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10938c77c; end: 10938c7bf;  */

undefined8 * FUN_10938c77c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af4cf0;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10938c7c0; end: 10938c7c3;  */

void FUN_10938c7c0(void)

{
  return;
}



/* Entry: 10938c7c4; end: 10938c82f;  */

long FUN_10938c7c4(long param_1,long param_2)

{
  if (param_1 != param_2) {
    if (*(long *)(param_1 + 8) != 0) {
      __ZdaPv();
    }
    *(long *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10938c830; end: 10938c873;  */

undefined8 * FUN_10938c830(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af4c80;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10938c874; end: 10938c8ff;  */

undefined8 * FUN_10938c874(undefined8 *param_1)

{
  param_1[8] = &PTR_FUN_110af4c80;
  if (param_1[9] != 0) {
    __ZdaPv();
  }
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[4] = &PTR_FUN_110af4cf0;
  if (param_1[5] != 0) {
    __ZdaPv();
  }
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_110af4cf0;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10938c900; end: 10938c9c3;  */

undefined8 * FUN_10938c900(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af4b90;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10938c9c4; end: 10938ca33;  */

void FUN_10938c9c4(long param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    FUN_10938ca34(param_1,param_4);
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10938ca34; end: 10938ca6b;  */

undefined1  [16] FUN_10938ca34(long *param_1,ulong param_2,ulong *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  ulong *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong uStack_118;
  ulong uStack_110;
  undefined7 uStack_108;
  char cStack_101;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  
  if (param_2 >> 0x3e == 0) {
    plVar2 = param_1;
    FUN_10937dfb0();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + param_2 * 4;
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = plVar2;
    return auVar10;
  }
  FUN_10937df9c();
  puVar3 = (ulong *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar3 >> 0x3b == 0) {
    lVar4 = (long)puVar3 << 5;
    __Znwm(lVar4);
    auVar11._8_8_ = puVar3;
    auVar11._0_8_ = lVar4;
    return auVar11;
  }
  func_0x000104c4f740();
  lVar4 = puVar3[1] - *puVar3;
  uVar8 = (lVar4 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar8 < 0x2e8ba2e8ba2e8bb) {
    lVar7 = (long)(puVar3[2] - *puVar3) >> 3;
    uVar9 = lVar7 * 0x5d1745d1745d1746;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x1745d1745d1745c < (ulong)(lVar7 * 0x2e8ba2e8ba2e8ba3)) {
      uVar9 = 0x2e8ba2e8ba2e8ba;
    }
    puStack_98 = puVar3;
    if (uVar9 == 0) {
      puVar6 = (ulong *)0x0;
    }
    else {
      puVar6 = puVar3;
      FUN_109378aac();
    }
    puVar5 = (undefined *)((long)puVar6 + lVar4);
    puStack_a0 = puVar6 + uVar9 * 0xb;
    puStack_b8 = puVar6;
    puStack_b0 = (ulong *)puVar5;
    puStack_a8 = (ulong *)puVar5;
    FUN_10938cc0c(puVar5,param_2,param_3,param_4);
    puStack_a8 = (ulong *)(puVar5 + 0x58);
    uVar8 = *puVar3;
    lVar4 = uVar8 - puVar3[1];
    FUN_109378f10(puVar3,uVar8,puVar3[1],puVar5 + lVar4);
    puVar6 = puStack_a8;
    puStack_b8 = (ulong *)*puVar3;
    *puVar3 = (ulong)(puVar5 + lVar4);
    uVar9 = puVar3[2];
    puVar3[2] = (ulong)puStack_a0;
    puVar3[1] = (ulong)puStack_a8;
    puStack_b0 = puStack_b8;
    puStack_a8 = puStack_b8;
    puStack_a0 = (ulong *)uVar9;
    func_0x0001056754bc(&puStack_b8);
    auVar12._8_8_ = uVar8;
    auVar12._0_8_ = puVar6;
    return auVar12;
  }
  FUN_109378a98();
  func_0x0001056754bc(&puStack_b8);
  __Unwind_Resume();
  func_0x000107c31940(&uStack_118);
  uVar1 = *param_4;
  if (cStack_101 < '\0') {
    param_2 = uStack_118;
    func_0x000107c3192c(puVar3,uStack_118,uStack_110);
    uVar8 = *param_3;
    puVar3[4] = param_3[1];
    puVar3[3] = uVar8;
    *(undefined4 *)(puVar3 + 5) = uVar1;
    *(undefined8 *)((long)puVar3 + 0x2c) = 0;
    *(undefined1 *)(puVar3 + 7) = 0;
    *(undefined1 *)(puVar3 + 10) = 0;
    if (cStack_101 < '\0') {
      __ZdlPv(uStack_118);
    }
  }
  else {
    puVar3[1] = uStack_110;
    *puVar3 = uStack_118;
    puVar3[2] = CONCAT17(cStack_101,uStack_108);
    uVar8 = *param_3;
    puVar3[4] = param_3[1];
    puVar3[3] = uVar8;
    *(undefined4 *)(puVar3 + 5) = uVar1;
    *(undefined8 *)((long)puVar3 + 0x2c) = 0;
    *(undefined1 *)(puVar3 + 7) = 0;
    *(undefined1 *)(puVar3 + 10) = 0;
  }
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = puVar3;
  return auVar13;
}



/* Entry: 10938ca6c; end: 10938ca7f;  */

undefined1  [16] FUN_10938ca6c(undefined8 param_1,long param_2,long *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lStack_f8;
  long lStack_f0;
  undefined7 uStack_e8;
  char cStack_e1;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar2 >> 0x3b == 0) {
    lVar3 = (long)plVar2 << 5;
    __Znwm(lVar3);
    auVar9._8_8_ = plVar2;
    auVar9._0_8_ = lVar3;
    return auVar9;
  }
  func_0x000104c4f740();
  lVar3 = plVar2[1] - *plVar2;
  uVar7 = (lVar3 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar7 < 0x2e8ba2e8ba2e8bb) {
    lVar6 = plVar2[2] - *plVar2 >> 3;
    uVar8 = lVar6 * 0x5d1745d1745d1746;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x1745d1745d1745c < (ulong)(lVar6 * 0x2e8ba2e8ba2e8ba3)) {
      uVar8 = 0x2e8ba2e8ba2e8ba;
    }
    plStack_78 = plVar2;
    if (uVar8 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = plVar2;
      FUN_109378aac();
    }
    puVar4 = (undefined *)((long)plVar5 + lVar3);
    plStack_80 = plVar5 + uVar8 * 0xb;
    plStack_98 = plVar5;
    plStack_90 = (long *)puVar4;
    plStack_88 = (long *)puVar4;
    FUN_10938cc0c(puVar4,param_2,param_3,param_4);
    plStack_88 = (long *)(puVar4 + 0x58);
    lVar3 = *plVar2;
    lVar6 = lVar3 - plVar2[1];
    FUN_109378f10(plVar2,lVar3,plVar2[1],puVar4 + lVar6);
    plVar5 = plStack_88;
    plStack_98 = (long *)*plVar2;
    *plVar2 = (long)(puVar4 + lVar6);
    lVar6 = plVar2[2];
    plVar2[2] = (long)plStack_80;
    plVar2[1] = (long)plStack_88;
    plStack_90 = plStack_98;
    plStack_88 = plStack_98;
    plStack_80 = (long *)lVar6;
    func_0x0001056754bc(&plStack_98);
    auVar10._8_8_ = lVar3;
    auVar10._0_8_ = plVar5;
    return auVar10;
  }
  FUN_109378a98();
  func_0x0001056754bc(&plStack_98);
  __Unwind_Resume();
  func_0x000107c31940(&lStack_f8);
  uVar1 = *param_4;
  if (cStack_e1 < '\0') {
    param_2 = lStack_f8;
    func_0x000107c3192c(plVar2,lStack_f8,lStack_f0);
    lVar3 = *param_3;
    plVar2[4] = param_3[1];
    plVar2[3] = lVar3;
    *(undefined4 *)(plVar2 + 5) = uVar1;
    *(undefined8 *)((long)plVar2 + 0x2c) = 0;
    *(undefined1 *)(plVar2 + 7) = 0;
    *(undefined1 *)(plVar2 + 10) = 0;
    if (cStack_e1 < '\0') {
      __ZdlPv(lStack_f8);
    }
  }
  else {
    plVar2[1] = lStack_f0;
    *plVar2 = lStack_f8;
    plVar2[2] = CONCAT17(cStack_e1,uStack_e8);
    lVar3 = *param_3;
    plVar2[4] = param_3[1];
    plVar2[3] = lVar3;
    *(undefined4 *)(plVar2 + 5) = uVar1;
    *(undefined8 *)((long)plVar2 + 0x2c) = 0;
    *(undefined1 *)(plVar2 + 7) = 0;
    *(undefined1 *)(plVar2 + 10) = 0;
  }
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = plVar2;
  return auVar11;
}



/* Entry: 10938ca80; end: 10938cab3;  */

undefined1  [16] FUN_10938ca80(long *param_1,long param_2,long *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lStack_e8;
  long lStack_e0;
  undefined7 uStack_d8;
  char cStack_d1;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  if ((ulong)param_1 >> 0x3b == 0) {
    lVar2 = (long)param_1 << 5;
    __Znwm(lVar2);
    auVar7._8_8_ = param_1;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  func_0x000104c4f740();
  lVar2 = param_1[1] - *param_1;
  uVar5 = (lVar2 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar5 < 0x2e8ba2e8ba2e8bb) {
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar4 * 0x5d1745d1745d1746;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x1745d1745d1745c < (ulong)(lVar4 * 0x2e8ba2e8ba2e8ba3)) {
      uVar6 = 0x2e8ba2e8ba2e8ba;
    }
    plStack_68 = param_1;
    if (uVar6 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_109378aac();
    }
    lVar2 = (long)plVar3 + lVar2;
    plStack_70 = plVar3 + uVar6 * 0xb;
    plStack_88 = plVar3;
    plStack_80 = (long *)lVar2;
    plStack_78 = (long *)lVar2;
    FUN_10938cc0c(lVar2,param_2,param_3,param_4);
    plStack_78 = (long *)(lVar2 + 0x58);
    lVar4 = *param_1;
    lVar2 = lVar2 + (lVar4 - param_1[1]);
    FUN_109378f10(param_1,lVar4,param_1[1],lVar2);
    plVar3 = plStack_78;
    plStack_88 = (long *)*param_1;
    *param_1 = lVar2;
    lVar2 = param_1[2];
    param_1[2] = (long)plStack_70;
    param_1[1] = (long)plStack_78;
    plStack_80 = plStack_88;
    plStack_78 = plStack_88;
    plStack_70 = (long *)lVar2;
    func_0x0001056754bc(&plStack_88);
    auVar8._8_8_ = lVar4;
    auVar8._0_8_ = plVar3;
    return auVar8;
  }
  FUN_109378a98();
  func_0x0001056754bc(&plStack_88);
  __Unwind_Resume();
  func_0x000107c31940(&lStack_e8);
  uVar1 = *param_4;
  if (cStack_d1 < '\0') {
    param_2 = lStack_e8;
    func_0x000107c3192c(param_1,lStack_e8,lStack_e0);
    lVar2 = *param_3;
    param_1[4] = param_3[1];
    param_1[3] = lVar2;
    *(undefined4 *)(param_1 + 5) = uVar1;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    if (cStack_d1 < '\0') {
      __ZdlPv(lStack_e8);
    }
  }
  else {
    param_1[1] = lStack_e0;
    *param_1 = lStack_e8;
    param_1[2] = CONCAT17(cStack_d1,uStack_d8);
    lVar2 = *param_3;
    param_1[4] = param_3[1];
    param_1[3] = lVar2;
    *(undefined4 *)(param_1 + 5) = uVar1;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 10938cab4; end: 10938cc0b;  */

long * FUN_10938cab4(long *param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lStack_c8;
  long lStack_c0;
  undefined7 uStack_b8;
  char cStack_b1;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar4 < 0x2e8ba2e8ba2e8bb) {
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar3 * 0x5d1745d1745d1746;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x1745d1745d1745c < (ulong)(lVar3 * 0x2e8ba2e8ba2e8ba3)) {
      uVar5 = 0x2e8ba2e8ba2e8ba;
    }
    plStack_48 = param_1;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_109378aac();
    }
    lVar6 = (long)plVar2 + lVar6;
    plStack_50 = plVar2 + uVar5 * 0xb;
    plStack_68 = plVar2;
    plStack_60 = (long *)lVar6;
    plStack_58 = (long *)lVar6;
    FUN_10938cc0c(lVar6,param_2,param_3,param_4);
    plStack_58 = (long *)(lVar6 + 0x58);
    lVar6 = lVar6 + (*param_1 - param_1[1]);
    FUN_109378f10(param_1,*param_1,param_1[1],lVar6);
    plVar2 = plStack_58;
    plStack_68 = (long *)*param_1;
    *param_1 = lVar6;
    lVar6 = param_1[2];
    param_1[2] = (long)plStack_50;
    param_1[1] = (long)plStack_58;
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    plStack_50 = (long *)lVar6;
    func_0x0001056754bc(&plStack_68);
    return plVar2;
  }
  FUN_109378a98();
  func_0x0001056754bc(&plStack_68);
  __Unwind_Resume();
  func_0x000107c31940(&lStack_c8);
  uVar1 = *param_4;
  if (cStack_b1 < '\0') {
    func_0x000107c3192c(param_1,lStack_c8,lStack_c0);
    lVar6 = *param_3;
    param_1[4] = param_3[1];
    param_1[3] = lVar6;
    *(undefined4 *)(param_1 + 5) = uVar1;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    if (cStack_b1 < '\0') {
      __ZdlPv(lStack_c8);
    }
  }
  else {
    param_1[1] = lStack_c0;
    *param_1 = lStack_c8;
    param_1[2] = CONCAT17(cStack_b1,uStack_b8);
    lVar6 = *param_3;
    param_1[4] = param_3[1];
    param_1[3] = lVar6;
    *(undefined4 *)(param_1 + 5) = uVar1;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
  }
  return param_1;
}



/* Entry: 10938cc0c; end: 10938ccd3;  */

undefined8 *
FUN_10938cc0c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined7 uStack_38;
  char cStack_31;
  
  func_0x000107c31940(&uStack_48);
  uVar1 = *param_4;
  if (cStack_31 < '\0') {
    func_0x000107c3192c(param_1,uStack_48,uStack_40);
    uVar2 = *param_3;
    param_1[4] = param_3[1];
    param_1[3] = uVar2;
    *(undefined4 *)(param_1 + 5) = uVar1;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    if (cStack_31 < '\0') {
      __ZdlPv(uStack_48);
    }
  }
  else {
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[2] = CONCAT17(cStack_31,uStack_38);
    uVar2 = *param_3;
    param_1[4] = param_3[1];
    param_1[3] = uVar2;
    *(undefined4 *)(param_1 + 5) = uVar1;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
  }
  return param_1;
}



/* Entry: 10938ccd4; end: 10938ccf3;  */

void FUN_10938ccd4(void)

{
  return;
}



/* Entry: 10938ccf4; end: 10938cda3;  */

long FUN_10938ccf4(long param_1)

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



/* Entry: 10938cda4; end: 10938cdcb;  */

void FUN_10938cda4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000109cda590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10938cdcc; end: 10938ce03;  */

void FUN_10938cdcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af4cf0;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10938ce04; end: 10938ce07;  */

void FUN_10938ce04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10938ce08; end: 10938ce3f;  */

void FUN_10938ce08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af4c80;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10938ce40; end: 10938ce8f;  */

long * FUN_10938ce40(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  lVar1 = 0x10;
  ___cxa_allocate_exception();
  __ZNSt11logic_errorC1EPKc();
  lVar2 = lVar1;
  puVar4 = (undefined8 *)PTR___ZTISt11logic_error_110346a38;
  ___cxa_throw(lVar1,PTR___ZTISt11logic_error_110346a38,PTR___ZNSt11logic_errorD1Ev_110346148);
  ___cxa_free_exception(lVar1);
  __Unwind_Resume();
  plVar5 = (long *)(lVar2 + 8);
  plVar7 = (long *)*plVar5;
  plVar6 = plVar5;
  if (plVar7 != (long *)0x0) {
    do {
      plVar3 = plVar7 + 4;
      func_0x00010938cf14(plVar3,*puVar4);
      if (-1 < (char)plVar3) {
        plVar6 = plVar7;
      }
      plVar7 = *(long **)((long)plVar7 + ((ulong)plVar3 >> 4 & 8));
    } while (plVar7 != (long *)0x0);
    if (plVar6 != plVar5) {
      plVar7 = plVar6 + 4;
      func_0x00010938cf14(plVar7,*puVar4);
      if ((char)plVar7 < '\x01') {
        return plVar6;
      }
    }
  }
  return plVar5;
}



/* Entry: 10938ce90; end: 10938cf67;  */

long * FUN_10938ce90(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      func_0x00010938cf14(plVar1,*param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if (plVar3 != plVar2) {
      plVar4 = plVar3 + 4;
      func_0x00010938cf14(plVar4,*param_2);
      if ((char)plVar4 < '\x01') {
        return plVar3;
      }
    }
  }
  return plVar2;
}



/* Entry: 10938cf68; end: 10938d04f;  */

char * FUN_10938cf68(long *param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '\x02') {
    pcVar2 = (char *)param_1[2];
  }
  else if (*pcVar2 == '\x01') {
    pcVar2 = (char *)(param_1[1] + 0x38);
  }
  else if (param_1[3] != 0) {
    uVar3 = 0x20;
    ___cxa_allocate_exception(0x20);
    func_0x000107c31940(auStack_48,&UNK_10f567425);
    FUN_10937951c(uVar3,0xd6,auStack_48);
    ___cxa_throw(uVar3,&PTR_DAT_110af4550,FUN_10937964c);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10938d018);
    (*pcVar1)();
  }
  return pcVar2;
}



/* Entry: 10938d050; end: 10938d197;  */

void FUN_10938d050(byte *param_1,float *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  bVar1 = *param_1;
  if (bVar1 < 6) {
    if (bVar1 == 4) {
      fVar4 = (float)NEON_ucvtf((uint)param_1[8]);
    }
    else {
      if (bVar1 != 5) {
LAB_10938d0d8:
        uVar3 = 0x20;
        ___cxa_allocate_exception(0x20);
        FUN_10937bcec(param_1);
        func_0x000107c31940(auStack_60,param_1);
        FUN_10928a5e0(auStack_48,&UNK_10f567436,auStack_60);
        FUN_10937bbbc(uVar3,0x12e,auStack_48);
        ___cxa_throw(uVar3,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10938d140);
        (*pcVar2)();
      }
      fVar4 = (float)*(long *)(param_1 + 8);
    }
  }
  else if (bVar1 == 7) {
    fVar4 = (float)*(double *)(param_1 + 8);
  }
  else {
    if (bVar1 != 6) goto LAB_10938d0d8;
    fVar4 = (float)*(ulong *)(param_1 + 8);
  }
  *param_2 = fVar4;
  return;
}



/* Entry: 10938d198; end: 10938d297;  */

void FUN_10938d198(char *param_1,char *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*param_1 == '\x04') {
    *param_2 = param_1[8];
    return;
  }
  uVar2 = 0x20;
  ___cxa_allocate_exception(0x20);
  FUN_10937bcec(param_1);
  func_0x000107c31940(auStack_60,param_1);
  FUN_10928a5e0(auStack_48,&UNK_10f568911,auStack_60);
  FUN_10937bbbc(uVar2,0x12e,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10938d240);
  (*pcVar1)();
}



/* Entry: 10938d298; end: 10938d30f;  */

void FUN_10938d298(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x120;
  __Znwm();
  FUN_10938d310();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10938d310; end: 10938d357;  */

undefined8 * FUN_10938d310(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110af4c20;
  FUN_10938d394(param_1 + 3);
  return param_1;
}



/* Entry: 10938d358; end: 10938d367;  */

void FUN_10938d358(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af4c20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10938d368; end: 10938d387;  */

void FUN_10938d368(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af4c20;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10938d388; end: 10938d393;  */

void FUN_10938d388(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x100) != 0) {
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x100);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0xbf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xa8));
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x88);
    __ZdlPv();
  }
  (*(code *)(&PTR_FUN_110af4bf0)[*(byte *)(param_1 + 0x78)])(param_1 + 0x60);
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  lStack_28 = param_1 + 0x30;
  FUN_109378cec(&lStack_28);
  lStack_28 = param_1 + 0x18;
  FUN_109378cec(&lStack_28);
  return;
}



/* Entry: 10938d394; end: 10938d50f;  */

undefined8 **
FUN_10938d394(undefined8 **param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 *puStack_f8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined1 uStack_aa;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined4 uStack_8e;
  undefined1 uStack_8a;
  undefined2 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte bStack_38;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *param_3;
  bStack_38 = *(byte *)(param_4 + 3);
  if (bStack_38 == 2) {
    uStack_48 = param_4[1];
    uStack_50 = *param_4;
    *param_4 = 0;
    param_4[1] = 0;
  }
  else if (bStack_38 == 1) {
    uStack_48 = param_4[1];
    uStack_50 = *param_4;
    uStack_40 = param_4[2];
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
  }
  uStack_30 = *(undefined2 *)(param_4 + 4);
  uStack_2e = *(undefined1 *)((long)param_4 + 0x22);
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0x3f800000;
  uStack_ac = 0;
  uStack_aa = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  uStack_90 = 0x200;
  uStack_8e = 0;
  uStack_8a = 0;
  uStack_88 = 1;
  uStack_84 = 0;
  uStack_80 = 0x10000;
  uStack_7c = 0x100;
  uStack_7a = 1;
  uStack_78 = 0x1000000;
  uStack_74 = 1;
  uStack_70 = 0x100;
  uStack_68 = 100000;
  uStack_60 = 0;
  uStack_5c = 1;
  uStack_58 = 0;
  func_0x000109d03aac(param_1,param_2,uVar1,&uStack_50,param_5,&uStack_c8,2);
  puVar2 = &uStack_50;
  (*(code *)(&PTR_FUN_110af4bf0)[bStack_38])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000105673ce8(&uStack_c8);
  (*(code *)(&PTR_FUN_110af4bf0)[bStack_38])(&uStack_50);
  __Unwind_Resume();
  if (puVar2[0x1d] != 0) {
    puVar2[0x1e] = puVar2[0x1d];
    __ZdlPv();
  }
  if (*(char *)((long)puVar2 + 0xa7) < '\0') {
    __ZdlPv(puVar2[0x12]);
  }
  if (puVar2[0xe] != 0) {
    puVar2[0xf] = puVar2[0xe];
    __ZdlPv();
  }
  (*(code *)(&PTR_FUN_110af4bf0)[*(byte *)(puVar2 + 0xc)])(puVar2 + 9);
  if (*(char *)((long)puVar2 + 0x47) < '\0') {
    __ZdlPv(puVar2[6]);
  }
  puStack_f8 = puVar2 + 3;
  FUN_109378cec(&puStack_f8);
  ppuVar3 = &puStack_f8;
  puStack_f8 = puVar2;
  FUN_109378cec(ppuVar3);
  return ppuVar3;
}



/* Entry: 10938d510; end: 10938d5ff;  */

void FUN_10938d510(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0xa7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x90));
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
    __ZdlPv();
  }
  (*(code *)(&PTR_FUN_110af4bf0)[*(byte *)(param_1 + 0x60)])(param_1 + 0x48);
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  lStack_28 = param_1 + 0x18;
  FUN_109378cec(&lStack_28);
  lStack_28 = param_1;
  FUN_109378cec(&lStack_28);
  return;
}



/* Entry: 10938d600; end: 10938d6eb;  */

void FUN_10938d600(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  long lStack_40;
  char cStack_38;
  
  lStack_40 = param_2 + 0x18;
  cStack_38 = '\x01';
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(param_2,&lStack_40);
  lVar3 = *(long *)(param_2 + 0x10);
  uStack_48 = 0;
  __ZNSt13exception_ptrD1Ev(&uStack_48);
  if (lVar3 == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x90);
    uVar5 = *(undefined8 *)(param_2 + 0xa0);
    uVar4 = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *param_1 = uVar2;
    param_1[2] = uVar5;
    param_1[1] = uVar4;
    param_1[3] = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0xb0);
    if (cStack_38 == '\x01') {
      __ZNSt3__15mutex6unlockEv(lStack_40);
    }
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_50,(long *)(param_2 + 0x10));
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10938d6bc);
  (*pcVar1)();
}



/* Entry: 10938d6ec; end: 10938d6ef;  */

void FUN_10938d6ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10938d6f0; end: 10938d723;  */

void FUN_10938d6f0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10938d724; end: 10938d75b;  */

undefined8 FUN_10938d724(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af49b8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10938d75c; end: 10938d767;  */

void FUN_10938d75c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10938d768; end: 10938d78b;  */

void FUN_10938d768(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110af49e0;
  return;
}



/* Entry: 10938d78c; end: 10938d7a3;  */

void FUN_10938d78c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110af49e0;
  return;
}



/* Entry: 10938d7a4; end: 10938d827;  */

void FUN_10938d7a4(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0xa27) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0xa10));
    }
    func_0x00010938cd4c(lVar1 + 0x9c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10938d828; end: 10938d83b;  */

undefined ** FUN_10938d828(void)

{
  return &PTR_DAT_110af4a50;
}



/* Entry: 10938d83c; end: 10938d85f;  */

void FUN_10938d83c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110af4a70;
  return;
}



/* Entry: 10938d860; end: 10938d877;  */

void FUN_10938d860(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110af4a70;
  return;
}



/* Entry: 10938d878; end: 10938d94b;  */

long FUN_10938d878(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar4 = 0xa30;
  __Znwm();
  _memcpy();
  *(undefined8 *)(lVar4 + 0x9c8) = *(undefined8 *)(param_2 + 0x9c8);
  lVar5 = *(long *)(param_2 + 0x9d0);
  *(long *)(lVar4 + 0x9d0) = lVar5;
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
  *(undefined4 *)(lVar4 + 0xa08) = *(undefined4 *)(param_2 + 0xa08);
  uVar6 = *(undefined8 *)(param_2 + 0x9d8);
  uVar8 = *(undefined8 *)(param_2 + 0x9f0);
  uVar7 = *(undefined8 *)(param_2 + 0x9e8);
  *(undefined8 *)(lVar4 + 0x9e0) = *(undefined8 *)(param_2 + 0x9e0);
  *(undefined8 *)(lVar4 + 0x9d8) = uVar6;
  *(undefined8 *)(lVar4 + 0x9f0) = uVar8;
  *(undefined8 *)(lVar4 + 0x9e8) = uVar7;
  uVar6 = *(undefined8 *)(param_2 + 0x9f8);
  *(undefined8 *)(lVar4 + 0xa00) = *(undefined8 *)(param_2 + 0xa00);
  *(undefined8 *)(lVar4 + 0x9f8) = uVar6;
  if (*(char *)(param_2 + 0xa27) < '\0') {
    func_0x000107c3192c((undefined8 *)(lVar4 + 0xa10),*(undefined8 *)(param_2 + 0xa10),
                        *(undefined8 *)(param_2 + 0xa18));
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0xa10);
    *(undefined8 *)(lVar4 + 0xa18) = *(undefined8 *)(param_2 + 0xa18);
    *(undefined8 *)(lVar4 + 0xa10) = uVar6;
    *(undefined8 *)(lVar4 + 0xa20) = *(undefined8 *)(param_2 + 0xa20);
  }
  *(undefined8 *)(lVar4 + 0xa28) = *(undefined8 *)(param_2 + 0xa28);
  return lVar4;
}



/* Entry: 10938d94c; end: 10938d987;  */

long FUN_10938d94c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af4ae0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10938d988; end: 10938d993;  */

undefined ** FUN_10938d988(void)

{
  return &PTR_DAT_110af4ae0;
}



/* Entry: 10938d994; end: 10938d9cb;  */

void FUN_10938d994(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110af4b00;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10938d9cc; end: 10938d9d3;  */

void FUN_10938d9cc(void)

{
  return;
}



/* Entry: 10938d9d4; end: 10938da83;  */

void FUN_10938d9d4(long param_1,int *param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (*param_2 == 0 && param_2[1] == 0) {
    if (*(long *)(param_1 + 8) != 0) {
      __ZdaPv();
    }
    *(long *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else if ((*param_2 != *(int *)(param_1 + 0x10)) || (param_2[1] != *(int *)(param_1 + 0x14))) {
    if (*(long *)(param_1 + 8) != 0) {
      __ZdaPv();
    }
    *(long *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    lVar2 = (long)param_2[1] * (long)*param_2 * 3;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (long)param_2[1] * (long)*param_2;
    if (SUB168(auVar1 * ZEXT816(3),8) != 0) {
      lVar2 = -1;
    }
    __Znam();
    uVar4 = *(undefined8 *)param_2;
    *(long *)(param_1 + 8) = lVar2;
    uVar3 = (undefined4)uVar4;
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    *(int *)(param_1 + 0x14) = (int)((ulong)uVar4 >> 0x20);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  return;
}



/* Entry: 10938da84; end: 10938db0f;  */

undefined8 * FUN_10938da84(undefined4 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_110af4cf0;
  FUN_10938db10();
  uVar2 = *(uint *)((long)param_2 + 0x14);
  if (0 < (int)uVar2) {
    uVar5 = 0;
    lVar6 = param_2[1];
    iVar3 = *(int *)(param_2 + 3);
    iVar4 = *(int *)(param_2 + 2);
    do {
      if (0 < iVar4) {
        puVar1 = (undefined4 *)(lVar6 + uVar5 * (long)iVar3 * 4);
        puVar7 = puVar1;
        do {
          puVar8 = puVar7 + 1;
          *puVar7 = param_1;
          puVar7 = puVar8;
        } while (puVar8 < puVar1 + iVar4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar2);
  }
  return param_2;
}



/* Entry: 10938db10; end: 10938dbb7;  */

void FUN_10938db10(long param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (*param_2 == 0 && param_2[1] == 0) {
    if (*(long *)(param_1 + 8) != 0) {
      __ZdaPv();
    }
    *(long *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else if ((*param_2 != *(int *)(param_1 + 0x10)) || (param_2[1] != *(int *)(param_1 + 0x14))) {
    if (*(long *)(param_1 + 8) != 0) {
      __ZdaPv();
    }
    *(long *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    uVar1 = param_2[1] * *param_2;
    uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    if ((int)uVar1 < 0) {
      uVar4 = 0xffffffffffffffff;
    }
    __Znam();
    uVar3 = *(undefined8 *)param_2;
    *(ulong *)(param_1 + 8) = uVar4;
    uVar2 = (undefined4)uVar3;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    *(int *)(param_1 + 0x14) = (int)((ulong)uVar3 >> 0x20);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  return;
}



/* Entry: 10938dbb8; end: 10938dc2f;  */

void FUN_10938dbb8(undefined8 *param_1,long param_2)

{
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  ulong uStack_28;
  
  uStack_28 = *(ulong *)(param_2 + 0x10) >> 0x20 | *(ulong *)(param_2 + 0x10) << 0x20;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_DAT_110af4b00;
  FUN_10938d9d4(param_1,&uStack_28);
  uStack_38 = param_1[2];
  uStack_40 = param_1[1];
  uStack_30 = *(undefined4 *)(param_1 + 3);
  ppuStack_48 = &PTR_FUN_110af4b70;
  FUN_10938dc9c(param_2,&ppuStack_48);
  return;
}



/* Entry: 10938dc30; end: 10938dc9b;  */

long FUN_10938dc30(long param_1,long param_2)

{
  if (param_1 != param_2) {
    if (*(long *)(param_1 + 8) != 0) {
      __ZdaPv();
    }
    *(long *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10938dc9c; end: 10938dedf;  */

void FUN_10938dc9c(long param_1,long param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined ***pppuVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  undefined **ppuStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined4 uStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined4 uStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  int iStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined4 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  ulong uStack_60;
  int iStack_58;
  
  pppuVar5 = &ppuStack_f0;
  uVar8 = *(ulong *)(param_1 + 0x10);
  uVar13 = uVar8 & 0xffffffff;
  uVar14 = uVar8 & 0xffffffff00000000;
  iVar12 = (int)(uVar8 >> 0x20);
  if ((uVar14 == 0x100000000 || uVar13 == 1) || (iVar7 = (int)uVar8, iVar7 * iVar12 * 3 < 0x800)) {
    if (0 < iVar12) {
      lVar6 = 0;
      lVar9 = *(long *)(param_2 + 8);
      iVar12 = *(int *)(param_2 + 0x18);
      do {
        if (0 < (int)uVar8) {
          lVar10 = 0;
          uVar13 = 0;
          lVar11 = 0;
          do {
            puVar1 = (undefined2 *)
                     (*(long *)(param_1 + 8) + lVar10 +
                     (long)*(int *)(param_1 + 0x18) * (long)(int)lVar6 * 2 +
                     (long)*(int *)(param_1 + 0x18) * (long)(int)lVar6);
            puVar2 = (undefined2 *)
                     (lVar9 + lVar6 * 3 +
                     (-(uVar13 >> 0x1f) & 0xfffffffe00000000 | uVar13 << 1) + (long)(int)uVar13);
            uVar4 = *puVar1;
            *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
            *puVar2 = uVar4;
            lVar11 = lVar11 + 1;
            uVar8 = *(ulong *)(param_1 + 0x10);
            uVar13 = (ulong)(uint)((int)uVar13 + iVar12);
            lVar10 = lVar10 + 3;
          } while (lVar11 < (int)uVar8);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < (long)uVar8 >> 0x20);
    }
  }
  else {
    if (iVar7 < iVar12) {
      lStack_68 = *(undefined8 *)(param_1 + 8);
      iStack_58 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = iVar12 / 2;
      uVar14 = (ulong)uVar3;
      uStack_60 = uVar13 | uVar14 << 0x20;
      ppuStack_70 = &PTR_FUN_110af4b70;
      uStack_c8 = *(undefined8 *)(param_2 + 8);
      uStack_b8 = *(undefined4 *)(param_2 + 0x18);
      uStack_c0 = uVar8 << 0x20 | uVar14;
      ppuStack_d0 = &PTR_FUN_110af4b70;
      FUN_10938dc9c(&ppuStack_70,&ppuStack_d0);
      iStack_58 = *(int *)(param_1 + 0x18);
      lStack_e8 = (-(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | uVar14 << 1) + (long)(int)uVar3;
      lStack_68 = *(long *)(param_1 + 8) + lStack_e8 * iStack_58;
      uStack_60 = uVar13 | (ulong)(iVar12 - uVar3) << 0x20;
      uStack_e0 = uVar8 << 0x20 | (ulong)(iVar12 - uVar3);
      uStack_d8 = *(undefined4 *)(param_2 + 0x18);
      lStack_e8 = *(long *)(param_2 + 8) + lStack_e8;
      ppuStack_f0 = &PTR_FUN_110af4b70;
    }
    else {
      lStack_68 = *(undefined8 *)(param_1 + 8);
      iStack_58 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = iVar7 / 2;
      uVar13 = (ulong)uVar3;
      uStack_60 = uVar14 | uVar13;
      ppuStack_70 = &PTR_FUN_110af4b70;
      uStack_80 = uVar8 >> 0x20 | uVar13 << 0x20;
      uStack_88 = *(undefined8 *)(param_2 + 8);
      uStack_78 = *(undefined4 *)(param_2 + 0x18);
      ppuStack_90 = &PTR_FUN_110af4b70;
      FUN_10938dc9c(&ppuStack_70,&ppuStack_90);
      iStack_58 = *(int *)(param_1 + 0x18);
      lVar6 = (-(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | uVar13 << 1) + (long)(int)uVar3;
      lStack_68 = *(long *)(param_1 + 8) + lVar6;
      uStack_60 = uVar14 | iVar7 - uVar3;
      uStack_a0 = uVar8 >> 0x20 | (ulong)(iVar7 - uVar3) << 0x20;
      iStack_98 = *(int *)(param_2 + 0x18);
      lStack_a8 = *(long *)(param_2 + 8) + lVar6 * iStack_98;
      ppuStack_b0 = &PTR_FUN_110af4b70;
      pppuVar5 = &ppuStack_b0;
    }
    ppuStack_70 = &PTR_FUN_110af4b70;
    FUN_10938dc9c(&ppuStack_70,pppuVar5);
  }
  return;
}



/* Entry: 10938dee0; end: 10938e02f;  */

void FUN_10938dee0(long param_1)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  if (0 < (int)((ulong)uVar7 >> 0x20)) {
    iVar6 = 0;
    do {
      if (1 < (long)(int)uVar7) {
        uVar5 = *(int *)(param_1 + 0x18) * iVar6;
        puVar1 = (undefined2 *)
                 (*(long *)(param_1 + 8) +
                 (-(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1) +
                 (long)(int)uVar5);
        puVar8 = (undefined2 *)((long)puVar1 + (long)(int)uVar7 * 3 + -3);
        do {
          puVar9 = (undefined2 *)((long)puVar1 + 3);
          uVar3 = *(undefined1 *)(puVar1 + 1);
          uVar4 = *puVar1;
          uVar2 = *(undefined1 *)(puVar8 + 1);
          *puVar1 = *puVar8;
          *(undefined1 *)(puVar1 + 1) = uVar2;
          *puVar8 = uVar4;
          *(undefined1 *)(puVar8 + 1) = uVar3;
          puVar8 = (undefined2 *)((long)puVar8 + -3);
          puVar1 = puVar9;
        } while (puVar9 < puVar8);
        uVar7 = *(undefined8 *)(param_1 + 0x10);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)((ulong)uVar7 >> 0x20));
  }
  return;
}



/* Entry: 10938e030; end: 10938e0a7;  */

void FUN_10938e030(undefined8 *param_1,long param_2)

{
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  ulong uStack_28;
  
  uStack_28 = *(ulong *)(param_2 + 0x10) >> 0x20 | *(ulong *)(param_2 + 0x10) << 0x20;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_110af4cf0;
  FUN_10938db10(param_1,&uStack_28);
  uStack_38 = param_1[2];
  uStack_40 = param_1[1];
  uStack_30 = *(undefined4 *)(param_1 + 3);
  ppuStack_48 = &PTR_FUN_110af4958;
  FUN_10938e0a8(param_2,&ppuStack_48);
  return;
}



/* Entry: 10938e0a8; end: 10938e2bb;  */

void FUN_10938e0a8(long param_1,long param_2)

{
  uint uVar1;
  undefined ***pppuVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **ppuStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined4 uStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined4 uStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  int iStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined4 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  ulong uStack_60;
  int iStack_58;
  
  pppuVar2 = &ppuStack_f0;
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar11 = uVar4 & 0xffffffff;
  uVar12 = uVar4 & 0xffffffff00000000;
  iVar10 = (int)(uVar4 >> 0x20);
  if ((uVar12 == 0x100000000 || uVar11 == 1) || (iVar3 = (int)uVar4, iVar3 * iVar10 * 4 < 0x800)) {
    if (0 < iVar10) {
      lVar5 = 0;
      puVar6 = *(undefined4 **)(param_2 + 8);
      iVar10 = *(int *)(param_2 + 0x18);
      lVar7 = *(long *)(param_1 + 8);
      iVar3 = *(int *)(param_1 + 0x18);
      do {
        if (0 < (int)uVar4) {
          lVar8 = 0;
          puVar9 = puVar6;
          do {
            *puVar9 = *(undefined4 *)(lVar7 + lVar8 * 4);
            lVar8 = lVar8 + 1;
            uVar4 = *(ulong *)(param_1 + 0x10);
            puVar9 = puVar9 + iVar10;
          } while (lVar8 < (int)uVar4);
        }
        lVar5 = lVar5 + 1;
        puVar6 = puVar6 + 1;
        lVar7 = lVar7 + (long)iVar3 * 4;
      } while (lVar5 < (long)uVar4 >> 0x20);
    }
  }
  else {
    if (iVar3 < iVar10) {
      lStack_68 = *(undefined8 *)(param_1 + 8);
      iStack_58 = *(undefined4 *)(param_1 + 0x18);
      uVar1 = iVar10 / 2;
      uStack_60 = uVar11 | (ulong)uVar1 << 0x20;
      ppuStack_70 = &PTR_FUN_110af4958;
      uStack_c8 = *(undefined8 *)(param_2 + 8);
      uStack_b8 = *(undefined4 *)(param_2 + 0x18);
      uStack_c0 = uVar4 << 0x20 | (ulong)uVar1;
      ppuStack_d0 = &PTR_FUN_110af4958;
      FUN_10938e0a8(&ppuStack_70,&ppuStack_d0);
      iStack_58 = *(int *)(param_1 + 0x18);
      lStack_68 = *(long *)(param_1 + 8) + (long)(int)(iStack_58 * uVar1) * 4;
      uStack_60 = uVar11 | (ulong)(iVar10 - uVar1) << 0x20;
      uStack_e0 = uVar4 << 0x20 | (ulong)(iVar10 - uVar1);
      uStack_d8 = *(undefined4 *)(param_2 + 0x18);
      lStack_e8 = *(long *)(param_2 + 8) + (long)(int)uVar1 * 4;
      ppuStack_f0 = &PTR_FUN_110af4958;
    }
    else {
      lStack_68 = *(undefined8 *)(param_1 + 8);
      iStack_58 = *(undefined4 *)(param_1 + 0x18);
      uVar1 = iVar3 / 2;
      uStack_60 = uVar12 | uVar1;
      ppuStack_70 = &PTR_FUN_110af4958;
      uStack_80 = uVar4 >> 0x20 | (ulong)uVar1 << 0x20;
      uStack_88 = *(undefined8 *)(param_2 + 8);
      uStack_78 = *(undefined4 *)(param_2 + 0x18);
      ppuStack_90 = &PTR_FUN_110af4958;
      FUN_10938e0a8(&ppuStack_70,&ppuStack_90);
      iStack_58 = *(int *)(param_1 + 0x18);
      lStack_68 = *(long *)(param_1 + 8) + (long)(int)uVar1 * 4;
      uStack_60 = uVar12 | iVar3 - uVar1;
      uStack_a0 = uVar4 >> 0x20 | (ulong)(iVar3 - uVar1) << 0x20;
      iStack_98 = *(int *)(param_2 + 0x18);
      lStack_a8 = *(long *)(param_2 + 8) + (long)(int)(iStack_98 * uVar1) * 4;
      ppuStack_b0 = &PTR_FUN_110af4958;
      pppuVar2 = &ppuStack_b0;
    }
    ppuStack_70 = &PTR_FUN_110af4958;
    FUN_10938e0a8(&ppuStack_70,pppuVar2);
  }
  return;
}



/* Entry: 10938e2bc; end: 10938e3c3;  */

void FUN_10938e2bc(long param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (0 < (int)(uVar6 >> 0x20)) {
    lVar3 = 0;
    lVar4 = *(long *)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar5 = (undefined4 *)(lVar4 + 4);
    do {
      uVar8 = -(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar6 & 0xffffffff) << 2;
      if (4 < (long)uVar8) {
        puVar7 = (undefined4 *)((lVar4 + lVar3 * iVar1 * 4 + uVar8) - 4);
        puVar9 = puVar5;
        do {
          uVar10 = puVar9[-1];
          puVar9[-1] = *puVar7;
          *puVar7 = uVar10;
          bVar2 = puVar9 < puVar7 + -1;
          puVar9 = puVar9 + 1;
          puVar7 = puVar7 + -1;
        } while (bVar2);
        uVar6 = *(ulong *)(param_1 + 0x10);
      }
      lVar3 = lVar3 + 1;
      puVar5 = puVar5 + iVar1;
    } while (lVar3 < (long)uVar6 >> 0x20);
  }
  return;
}



/* Entry: 10938e3c4; end: 10938e3fb;  */

void FUN_10938e3c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af4b90;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10938e3fc; end: 10938e4af;  */

void FUN_10938e3fc(long param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*param_2 == 0 && param_2[1] == 0) {
    if (*(long *)(param_1 + 8) != 0) {
      __ZdaPv();
    }
    *(long *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else if ((*param_2 != *(int *)(param_1 + 0x10)) || (param_2[1] != *(int *)(param_1 + 0x14))) {
    if (*(long *)(param_1 + 8) != 0) {
      __ZdaPv();
    }
    *(long *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    lVar4 = (long)param_2[1] * (long)*param_2 * 0xc;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (long)param_2[1] * (long)*param_2;
    if (SUB168(auVar1 * ZEXT816(0xc),8) != 0) {
      lVar4 = -1;
    }
    __Znam();
    uVar3 = *(undefined8 *)param_2;
    *(long *)(param_1 + 8) = lVar4;
    uVar2 = (undefined4)uVar3;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    *(int *)(param_1 + 0x14) = (int)((ulong)uVar3 >> 0x20);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  return;
}



/* Entry: 10938e4b0; end: 10938e70f;  */

long * FUN_10938e4b0(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *unaff_x25;
  ulong uVar7;
  
  plVar4 = param_1;
  func_0x000107c31944();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x25 = (long *)(uVar7 & (ulong)plVar4);
    }
    else {
      unaff_x25 = plVar4;
      if (plVar6 <= plVar4) {
        uVar5 = 0;
        if (plVar6 != (long *)0x0) {
          uVar5 = (ulong)plVar4 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar4 - uVar5 * (long)plVar6);
      }
    }
    plVar1 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar1 != (long *)0x0) {
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        plVar2 = (long *)plVar1[1];
        if (plVar2 == plVar4) {
          plVar2 = param_1;
          func_0x000104c4fbc4(param_1,plVar1 + 2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            return plVar1;
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar2 = (long *)((ulong)plVar2 & uVar7);
          }
          else if (plVar6 <= plVar2) {
            uVar5 = 0;
            if (plVar6 != (long *)0x0) {
              uVar5 = (ulong)plVar2 / (ulong)plVar6;
            }
            plVar2 = (long *)((long)plVar2 - uVar5 * (long)plVar6);
          }
          if (plVar2 != unaff_x25) break;
        }
      }
    }
  }
  plVar1 = (long *)0x78;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = (long)plVar4;
  lVar3 = *param_3;
  plVar1[3] = param_3[1];
  plVar1[2] = lVar3;
  lVar3 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  plVar1[0xc] = 0;
  plVar1[0xb] = 0;
  plVar1[0xe] = 0;
  plVar1[0xd] = 0;
  plVar1[4] = lVar3;
  plVar1[5] = (long)&PTR_DAT_1108a5c28;
  plVar1[6] = 0;
  plVar1[7] = 0;
  plVar1[8] = 0x100000001;
  plVar1[9] = 0;
  plVar1[10] = 0;
  *(undefined1 *)(plVar1 + 0xb) = 0;
  if ((plVar6 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))
     ) {
    uVar7 = 1;
    if ((long *)0x2 < plVar6) {
      uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    uVar7 = uVar7 | (long)plVar6 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    FUN_10937a3dc(param_1,uVar7);
    plVar6 = (long *)param_1[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar6 - 1U & (ulong)plVar4);
    }
    else {
      unaff_x25 = plVar4;
      if (plVar6 <= plVar4) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar4 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar4 - uVar7 * (long)plVar6);
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar1 = *plVar4;
    *plVar4 = (long)plVar1;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar4;
    if (*plVar1 == 0) goto LAB_10938e6cc;
    plVar4 = *(long **)(*plVar1 + 8);
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      plVar4 = (long *)((ulong)plVar4 & (long)plVar6 - 1U);
    }
    else if (plVar6 <= plVar4) {
      uVar7 = 0;
      if (plVar6 != (long *)0x0) {
        uVar7 = (ulong)plVar4 / (ulong)plVar6;
      }
      plVar4 = (long *)((long)plVar4 - uVar7 * (long)plVar6);
    }
    plVar4 = (long *)(*param_1 + (long)plVar4 * 8);
  }
  else {
    *plVar1 = *plVar4;
  }
  *plVar4 = (long)plVar1;
LAB_10938e6cc:
  param_1[3] = param_1[3] + 1;
  return plVar1;
}



/* Entry: 10938e710; end: 10938e7f3;  */

long FUN_10938e710(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10938e7f4; end: 10938e90b;  */

undefined8 * FUN_10938e7f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_110af4c80;
  func_0x00010938e870();
  if (0 < *(int *)((long)param_1 + 0x14)) {
    iVar1 = 0;
    do {
      _memset(param_1[1] + (long)*(int *)(param_1 + 3) * (long)iVar1,param_3,
              (long)*(int *)(param_1 + 2));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((long)param_1 + 0x14));
  }
  return param_1;
}



/* Entry: 10938e90c; end: 10938e983;  */

undefined8 * FUN_10938e90c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = 0xe0;
  __Znwm(0xe0);
  FUN_10938ee04();
  FUN_10938f294(param_1,uVar1);
  return param_1;
}



/* Entry: 10938e984; end: 10938e9c7;  */

long * FUN_10938e984(long *param_1)

{
  (**(code **)(**(long **)(*param_1 + 8) + 0x48))();
  FUN_10938f294(param_1,0);
  return param_1;
}



/* Entry: 10938e9c8; end: 10938ee03;  */

void FUN_10938e9c8(long param_1,long *param_2,long *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_118;
  int iStack_110;
  int iStack_10c;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  int *piStack_d8;
  long *plStack_d0;
  long alStack_c8 [8];
  undefined4 *puStack_88;
  undefined8 uStack_80;
  
  alStack_c8[5] = 0;
  alStack_c8[6] = 0;
  alStack_c8[7] = 0;
  alStack_c8[2] = 0;
  alStack_c8[3] = 0;
  alStack_c8[4] = 0;
  lVar10 = *param_2;
  if (0 < (int)((ulong)(param_2[1] - lVar10) >> 5)) {
    lVar11 = 0;
    do {
      lVar10 = lVar10 + lVar11 * 0x20;
      lStack_108 = *(long *)(lVar10 + 8);
      uVar4 = *(ulong *)(lVar10 + 0x10);
      iVar5 = *(int *)(lVar10 + 0x18);
      uStack_118 = (long *)0x242ff0000;
      iStack_110 = (int)(uVar4 >> 0x20);
      iStack_10c = (int)uVar4;
      lStack_f0 = 0;
      lStack_f8 = 0;
      lStack_e0 = 0;
      uStack_e8 = 0;
      alStack_c8[0] = 0;
      alStack_c8[1] = 0;
      lVar10 = (long)iStack_10c;
      lStack_100 = lStack_108;
      piStack_d8 = &iStack_110;
      plStack_d0 = alStack_c8;
      if ((lStack_108 == 0) && ((long)iStack_10c * (long)iStack_110 != 0)) {
        puVar9 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar9 = 1;
        puStack_88 = puVar9 + 1;
        uStack_80 = 0x1c;
        *(undefined1 *)(puVar9 + 8) = 0;
        *(undefined8 *)(puVar9 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar9 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar9 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar9 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&puStack_88,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
LAB_10938ed6c:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10938ed70);
        (*pcVar8)();
      }
      lVar3 = lVar10;
      if (uVar4 >> 0x20 != 1) {
        lVar3 = (long)iVar5;
      }
      alStack_c8[0] = lVar10;
      if (iVar5 != 0) {
        alStack_c8[0] = lVar3;
      }
      uVar2 = 0x42ff4000;
      if (lVar3 != lVar10 && iVar5 != 0) {
        uVar2 = 0x42ff0000;
      }
      uStack_118 = (long *)CONCAT44(2,uVar2);
      alStack_c8[1] = 1;
      lStack_f0 = lStack_108 + alStack_c8[0] * ((long)uVar4 >> 0x20);
      lStack_f8 = (lStack_f0 - alStack_c8[0]) + lVar10;
      FUN_10938ef5c(alStack_c8 + 5,&uStack_118);
      if (lStack_e0 != 0) {
        piVar1 = (int *)(lStack_e0 + 0x14);
        do {
          iVar5 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar5 + -1 == 0) {
          func_0x000109a848d4(&uStack_118);
        }
      }
      lStack_e0 = 0;
      lStack_100 = 0;
      lStack_108 = 0;
      lStack_f0 = 0;
      lStack_f8 = 0;
      if (0 < uStack_118._4_4_) {
        lVar10 = 0;
        do {
          piStack_d8[lVar10] = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < uStack_118._4_4_);
      }
      if (plStack_d0 != alStack_c8 && plStack_d0 != (long *)0x0) {
        _free(plStack_d0[-1]);
      }
      lVar10 = *param_3 + lVar11 * 0x20;
      lStack_108 = *(long *)(lVar10 + 8);
      uVar4 = *(ulong *)(lVar10 + 0x10);
      iVar5 = *(int *)(lVar10 + 0x18);
      uStack_118 = (long *)0x242ff0000;
      iStack_110 = (int)(uVar4 >> 0x20);
      iStack_10c = (int)uVar4;
      lStack_f0 = 0;
      lStack_f8 = 0;
      lStack_e0 = 0;
      uStack_e8 = 0;
      alStack_c8[0] = 0;
      alStack_c8[1] = 0;
      lVar10 = (long)iStack_10c;
      lStack_100 = lStack_108;
      if (lStack_108 == 0 && (long)iStack_10c * (long)iStack_110 != 0) {
        puVar9 = (undefined4 *)0x24;
        piStack_d8 = &iStack_110;
        plStack_d0 = alStack_c8;
        func_0x000107c2ae8c();
        *puVar9 = 1;
        puStack_88 = puVar9 + 1;
        uStack_80 = 0x1c;
        *(undefined1 *)(puVar9 + 8) = 0;
        *(undefined8 *)(puVar9 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar9 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar9 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar9 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&puStack_88,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
        goto LAB_10938ed6c;
      }
      lVar3 = lVar10;
      if (uVar4 >> 0x20 != 1) {
        lVar3 = (long)iVar5;
      }
      alStack_c8[0] = lVar10;
      if (iVar5 != 0) {
        alStack_c8[0] = lVar3;
      }
      uVar2 = 0x42ff4000;
      if (lVar3 != lVar10 && iVar5 != 0) {
        uVar2 = 0x42ff0000;
      }
      uStack_118 = (long *)CONCAT44(2,uVar2);
      alStack_c8[1] = 1;
      lStack_f0 = lStack_108 + alStack_c8[0] * ((long)uVar4 >> 0x20);
      lStack_f8 = (lStack_f0 - alStack_c8[0]) + lVar10;
      piStack_d8 = &iStack_110;
      plStack_d0 = alStack_c8;
      FUN_10938ef5c(alStack_c8 + 2,&uStack_118);
      if (lStack_e0 != 0) {
        piVar1 = (int *)(lStack_e0 + 0x14);
        do {
          iVar5 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar5 + -1 == 0) {
          func_0x000109a848d4(&uStack_118);
        }
      }
      lStack_e0 = 0;
      lStack_100 = 0;
      lStack_108 = 0;
      lStack_f0 = 0;
      lStack_f8 = 0;
      if (0 < uStack_118._4_4_) {
        lVar10 = 0;
        do {
          piStack_d8[lVar10] = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < uStack_118._4_4_);
      }
      if (plStack_d0 != alStack_c8 && plStack_d0 != (long *)0x0) {
        _free(plStack_d0[-1]);
      }
      lVar11 = lVar11 + 1;
      lVar10 = *param_2;
    } while (lVar11 < (int)((ulong)(param_2[1] - lVar10) >> 5));
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xf8))
            (*(long **)(param_1 + 8),alStack_c8 + 5,alStack_c8 + 2,param_1 + 0x10,param_1 + 0x70);
  uStack_118 = alStack_c8 + 2;
  FUN_1093702c4(&uStack_118);
  uStack_118 = alStack_c8 + 5;
  FUN_1093702c4(&uStack_118);
  return;
}



/* Entry: 10938ee04; end: 10938ef5b;  */

long * FUN_10938ee04(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lStack_40;
  long lStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = (long)(param_1 + 3);
  param_1[0xb] = (long)(param_1 + 0xc);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = (long)(param_1 + 0xf);
  param_1[0x17] = (long)(param_1 + 0x18);
  param_1[0x19] = 0;
  lVar6 = *param_2;
  param_1[0x1b] = param_2[1];
  param_1[0x1a] = lVar6;
  FUN_10939502c(&lStack_40);
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_1[1] = lStack_38;
  *param_1 = lStack_40;
  lStack_40 = 0;
  lStack_38 = 0;
  FUN_10938f3d4(&lStack_40);
  (**(code **)(*(long *)param_1[1] + 0x58))((long *)param_1[1],(int)param_1[0x1a]);
  (**(code **)(*(long *)param_1[1] + 0x88))((long *)param_1[1],(int)param_1[0x1b]);
  (**(code **)(*(long *)param_1[1] + 0x98))
            ((long *)param_1[1],*(undefined4 *)((long)param_1 + 0xdc));
  return param_1;
}


