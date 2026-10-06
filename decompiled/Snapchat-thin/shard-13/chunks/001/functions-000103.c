/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a107c14; end: 10a107e2b;  */

/* WARNING: Possible PIC construction at 0x00010a107c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a107c60) */
/* WARNING: Removing unreachable block (ram,0x00010a107c84) */

ulong FUN_10a107c14(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 < 0x11) {
    uStack_38 = 0;
    uStack_30 = 0;
    if (param_2 != 0) {
      puVar3 = &uStack_38;
      do {
        *(undefined1 *)puVar3 = *param_1;
        param_2 = param_2 - 1;
        param_1 = param_1 + 1;
        puVar3 = (undefined8 *)((long)puVar3 + 1);
      } while (param_2 != 0);
    }
    puVar3 = &uStack_38;
  }
  else {
    puVar3 = (undefined8 *)&UNK_10f63c976;
    FUN_10a00946c();
    ___stack_chk_fail();
  }
  puVar4 = puVar3;
  func_0x00010a107d98();
  bVar2 = *(byte *)((long)puVar3 + 10);
  if (bVar2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = 0xffffffbf;
    if (0x19 < bVar2 - 0x41) {
      lVar1 = -0x16;
    }
    lVar1 = (ulong)bVar2 + lVar1 + 0x1a;
    if (bVar2 - 0x61 < 0x1a) {
      lVar1 = (ulong)bVar2 + 0xffffff9f;
    }
    uVar5 = (lVar1 << 0x3c) + 0x1000000000000000;
  }
  return uVar5 | (ulong)puVar4;
}



/* Entry: 10a107e2c; end: 10a107ecf;  */

undefined8 *
FUN_10a107e2c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 3,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[5] = param_3[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  *(undefined4 *)(param_1 + 6) = param_4;
  return param_1;
}



/* Entry: 10a107ed0; end: 10a10803b;  */

undefined1  [16]
FUN_10a107ed0(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined *puStack_100;
  undefined8 **ppuStack_f8;
  undefined8 **ppuStack_f0;
  undefined1 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar9 = param_1[1] - *param_1;
  uVar7 = (lVar9 >> 4) * 0x6db6db6db6db6db7 + 1;
  if (uVar7 < 0x24924924924924a) {
    lVar6 = param_1[2] - *param_1 >> 4;
    uVar8 = lVar6 * -0x2492492492492492;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x124924924924923 < (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
      uVar8 = 0x249249249249249;
    }
    plStack_38 = param_1;
    if (uVar8 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10a108050();
    }
    puVar2 = (undefined8 *)((long)plVar3 + lVar9);
    uVar10 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar10;
    puVar2[2] = param_2[2];
    plStack_58 = plVar3;
    plStack_50 = puVar2;
    plStack_40 = plVar3 + uVar8 * 0xe;
    (**(code **)(param_2[3] + 0x10))(puVar2 + 3,param_2 + 3);
    uVar11 = param_2[0xb];
    uVar10 = param_2[10];
    puVar2[0xc] = param_2[0xc];
    puVar2[0xb] = uVar11;
    puVar2[10] = uVar10;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[10] = 0;
    *(undefined1 *)(puVar2 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    puVar1 = puVar2 + 0xe;
    lVar6 = *param_1;
    lVar9 = (long)puVar2 + (lVar6 - param_1[1]);
    plStack_48 = puVar1;
    FUN_10a108098(param_1,lVar6,param_1[1],lVar9);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar1;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar3 + uVar8 * 0xe);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    FUN_10a108284(&plStack_58);
    auVar12._8_8_ = lVar6;
    auVar12._0_8_ = puVar1;
    return auVar12;
  }
  FUN_10a10803c();
  FUN_10a108284(&plStack_58);
  __Unwind_Resume(param_1);
  puVar4 = &UNK_10f63bc0b;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x24924924924924a) {
    lVar9 = (long)param_2 * 0x70;
    __Znwm(lVar9);
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = lVar9;
    return auVar13;
  }
  func_0x000109ffded8();
  ppuVar5 = &puStack_100;
  ppuStack_f8 = &puStack_e0;
  ppuStack_f0 = &puStack_d8;
  puStack_100 = puVar4;
  puStack_e0 = param_4;
  for (puVar1 = param_2; puStack_d8 = param_4, puVar1 != param_3; puVar1 = puVar1 + 0xe) {
    uVar10 = *puVar1;
    param_4[1] = puVar1[1];
    *param_4 = uVar10;
    param_4[2] = puVar1[2];
    (**(code **)(puVar1[3] + 0x10))(param_4 + 3,puVar1 + 3);
    uVar11 = puVar1[0xb];
    uVar10 = puVar1[10];
    param_4[0xc] = puVar1[0xc];
    param_4[0xb] = uVar11;
    param_4[10] = uVar10;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined1 *)(param_4 + 0xd) = *(undefined1 *)(puVar1 + 0xd);
    param_4 = puStack_d8 + 0xe;
  }
  uStack_e8 = 1;
  FUN_10a108188(puVar4,param_2,param_3);
  FUN_10a1081dc(&puStack_100);
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = ppuVar5;
  return auVar14;
}



/* Entry: 10a10803c; end: 10a10804f;  */

void FUN_10a10803c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined1 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  puVar2 = &UNK_10f63bc0b;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x24924924924924a) {
    __Znwm((long)param_2 * 0x70);
    return;
  }
  func_0x000109ffded8();
  ppuStack_98 = &puStack_80;
  ppuStack_90 = &puStack_78;
  puStack_a0 = puVar2;
  puStack_80 = param_4;
  for (puVar1 = param_2; puStack_78 = param_4, puVar1 != param_3; puVar1 = puVar1 + 0xe) {
    uVar3 = *puVar1;
    param_4[1] = puVar1[1];
    *param_4 = uVar3;
    param_4[2] = puVar1[2];
    (**(code **)(puVar1[3] + 0x10))(param_4 + 3,puVar1 + 3);
    uVar4 = puVar1[0xb];
    uVar3 = puVar1[10];
    param_4[0xc] = puVar1[0xc];
    param_4[0xb] = uVar4;
    param_4[10] = uVar3;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined1 *)(param_4 + 0xd) = *(undefined1 *)(puVar1 + 0xd);
    param_4 = puStack_78 + 0xe;
  }
  uStack_88 = 1;
  FUN_10a108188(puVar2,param_2,param_3);
  FUN_10a1081dc(&puStack_a0);
  return;
}



/* Entry: 10a108050; end: 10a108097;  */

void FUN_10a108050(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  if (param_2 < (undefined8 *)0x24924924924924a) {
    __Znwm((long)param_2 * 0x70);
    return;
  }
  func_0x000109ffded8();
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_90 = param_1;
  puStack_70 = param_4;
  for (puVar1 = param_2; puStack_68 = param_4, puVar1 != param_3; puVar1 = puVar1 + 0xe) {
    uVar2 = *puVar1;
    param_4[1] = puVar1[1];
    *param_4 = uVar2;
    param_4[2] = puVar1[2];
    (**(code **)(puVar1[3] + 0x10))(param_4 + 3,puVar1 + 3);
    uVar3 = puVar1[0xb];
    uVar2 = puVar1[10];
    param_4[0xc] = puVar1[0xc];
    param_4[0xb] = uVar3;
    param_4[10] = uVar2;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined1 *)(param_4 + 0xd) = *(undefined1 *)(puVar1 + 0xd);
    param_4 = puStack_68 + 0xe;
  }
  uStack_78 = 1;
  FUN_10a108188(param_1,param_2,param_3);
  FUN_10a1081dc(&uStack_90);
  return;
}



/* Entry: 10a108098; end: 10a108187;  */

void FUN_10a108098(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  ppuStack_68 = &puStack_50;
  ppuStack_60 = &puStack_48;
  uStack_70 = param_1;
  puStack_50 = param_4;
  for (puVar1 = param_2; puStack_48 = param_4, puVar1 != param_3; puVar1 = puVar1 + 0xe) {
    uVar2 = *puVar1;
    param_4[1] = puVar1[1];
    *param_4 = uVar2;
    param_4[2] = puVar1[2];
    (**(code **)(puVar1[3] + 0x10))(param_4 + 3,puVar1 + 3);
    uVar3 = puVar1[0xb];
    uVar2 = puVar1[10];
    param_4[0xc] = puVar1[0xc];
    param_4[0xb] = uVar3;
    param_4[10] = uVar2;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined1 *)(param_4 + 0xd) = *(undefined1 *)(puVar1 + 0xd);
    param_4 = puStack_48 + 0xe;
  }
  uStack_58 = 1;
  FUN_10a108188(param_1,param_2,param_3);
  FUN_10a1081dc(&uStack_70);
  return;
}



/* Entry: 10a108188; end: 10a1081db;  */

void FUN_10a108188(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x70) {
    if (*(char *)(param_2 + 0x67) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x50));
    }
    (*(code *)**(undefined8 **)(param_2 + 0x18))((undefined8 *)(param_2 + 0x18));
  }
  return;
}



/* Entry: 10a1081dc; end: 10a108223;  */

undefined8 * FUN_10a1081dc(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    FUN_10a108224(*param_1,*(undefined8 *)param_1[2],*(undefined8 *)param_1[2],
                  *(undefined8 *)param_1[1],*(undefined8 *)param_1[1]);
  }
  return param_1;
}



/* Entry: 10a108224; end: 10a108283;  */

void FUN_10a108224(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  if (param_3 != param_5) {
    param_3 = param_3 + -0xb;
    do {
      if (*(char *)((long)param_3 + 0x4f) < '\0') {
        __ZdlPv(param_3[7]);
      }
      puVar1 = param_3 + -3;
      (**(code **)*param_3)(param_3);
      param_3 = param_3 + -0xe;
    } while (puVar1 != param_5);
  }
  return;
}



/* Entry: 10a108284; end: 10a1082b7;  */

long * FUN_10a108284(long *param_1)

{
  FUN_10a1082b8(param_1,param_1[1]);
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1082b8; end: 10a1083b7;  */

/* WARNING: Removing unreachable block (ram,0x00010a1082ec) */

void FUN_10a1082b8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x70;
    (*(code *)**(undefined8 **)(lVar1 + -0x58))((undefined8 *)(lVar1 + -0x58));
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return;
}



/* Entry: 10a1083b8; end: 10a10840f;  */

bool FUN_10a1083b8(ulong param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1;
  if (iVar1 < 0) {
    ___maskrune(param_1,0x500);
    uVar2 = (uint)param_1;
  }
  else {
    uVar2 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (param_1 & 0xffffffff) * 4 + 0x3c) & 0x500
    ;
  }
  return iVar1 == 0x5f || uVar2 != 0;
}



/* Entry: 10a108410; end: 10a108443;  */

void FUN_10a108410(long param_1)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  func_0x000107c2b084(puVar1,param_1);
  *(undefined1 **)(param_1 + 0x10) = puVar1;
  return;
}



/* Entry: 10a108444; end: 10a108493;  */

long * FUN_10a108444(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *param_1 = 0;
  if ((lVar2 != 0) && (plVar1 = *(long **)param_1[1], plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2,0x12c8,8);
  }
  return param_1;
}



/* Entry: 10a108494; end: 10a1084cb;  */

void FUN_10a108494(long *param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2,*param_1 << 3,8);
  }
  return;
}



/* Entry: 10a1084cc; end: 10a10859b;  */

void FUN_10a1084cc(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a002a94(appuStack_150,param_1);
  appuStack_150[0] = &PTR_FUN_110b99e70;
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
  *puVar2 = &PTR_FUN_110b99e70;
  ___cxa_throw(puVar2,&PTR_DAT_110b99e48,FUN_10a002a90);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a108584);
  (*pcVar1)();
}



/* Entry: 10a10859c; end: 10a1085ff;  */

long * FUN_10a10859c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  FUN_10a108600();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar4 = (undefined8 *)param_1[1]; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    plVar2 = (long *)param_1[7];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,*puVar4,0xff0,8);
    }
  }
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    FUN_10a1087a0(param_1 + 4,lVar3,param_1[3] - lVar3 >> 3);
  }
  return param_1;
}



/* Entry: 10a108600; end: 10a108743;  */

void FUN_10a108600(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar4 = puVar2;
  if (*(undefined8 **)(param_1 + 0x10) != puVar2) {
    uVar7 = *(ulong *)(param_1 + 0x28);
    puVar8 = puVar2 + uVar7 / 0xaa;
    puVar5 = (undefined8 *)*puVar8;
    puVar10 = puVar5 + (uVar7 % 0xaa) * 3;
    uVar7 = *(long *)(param_1 + 0x30) + uVar7;
    puVar9 = (undefined8 *)(puVar2[uVar7 / 0xaa] + (uVar7 % 0xaa) * 0x18);
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    if (puVar10 != puVar9) {
      do {
        if (*(char *)((long)puVar10 + 0x17) < '\0') {
          __ZdlPv(*puVar10);
          puVar5 = (undefined8 *)*puVar8;
        }
        puVar10 = puVar10 + 3;
        if ((long)puVar10 - (long)puVar5 == 0xff0) {
          puVar8 = puVar8 + 1;
          puVar5 = (undefined8 *)*puVar8;
          puVar10 = puVar5;
        }
      } while (puVar10 != puVar9);
      puVar2 = *(undefined8 **)(param_1 + 8);
      puVar4 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar6 = (long)puVar4 - (long)puVar2;
  while (uVar7 = lVar6 >> 3, 2 < uVar7) {
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,*puVar2,0xff0,8);
      puVar2 = *(undefined8 **)(param_1 + 8);
      puVar4 = *(undefined8 **)(param_1 + 0x10);
    }
    puVar2 = puVar2 + 1;
    *(undefined8 **)(param_1 + 8) = puVar2;
    lVar6 = (long)puVar4 - (long)puVar2;
  }
  if (uVar7 == 1) {
    uVar3 = 0x55;
  }
  else {
    if (uVar7 != 2) {
      return;
    }
    uVar3 = 0xaa;
  }
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  return;
}



/* Entry: 10a108744; end: 10a10879f;  */

long * FUN_10a108744(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_10a1087a0(param_1 + 4,lVar1,param_1[3] - lVar1 >> 3);
  }
  return param_1;
}



/* Entry: 10a1087a0; end: 10a1087cf;  */

void FUN_10a1087a0(long *param_1,undefined8 param_2,long param_3)

{
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3 << 3,8);
  }
  return;
}



/* Entry: 10a1087d0; end: 10a108877;  */

undefined8 * FUN_10a1087d0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 9) == '\x01') {
    func_0x0001092ba41c(param_1);
    *(undefined1 *)(param_1 + 9) = 0;
  }
  *param_1 = *param_2;
  param_1[1] = &UNK_1053a6a3c;
  param_1[2] = &PTR_DAT_110ae9180;
  param_1[1] = param_2[1];
  plVar1 = param_2 + 2;
  (**(code **)(*plVar1 + 0x10))(param_1 + 2,plVar1);
  param_2[1] = &UNK_1053a6a3c;
  (**(code **)*plVar1)(plVar1);
  *plVar1 = (long)&PTR_DAT_110ae9180;
  *(undefined1 *)(param_1 + 9) = 1;
  return param_1;
}



/* Entry: 10a108878; end: 10a10894b;  */

undefined8 * FUN_10a108878(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[0x10] = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5ba0;
  param_1[0x16] = 0;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_1108a5a60;
  *param_1 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5b78;
  __ZNSt3__18ios_base4initEPv(param_1 + 0x10,param_1 + 3);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *param_1 = &PTR_SUB_1108a5a38;
  param_1[0x10] = &PTR_DAT_1108a5a88;
  param_1[2] = &PTR_DAT_1108a5a60;
  FUN_10a108ad4(param_1 + 3,param_2,param_3);
  return param_1;
}



/* Entry: 10a10894c; end: 10a108ad3;  */

long * FUN_10a10894c(long *param_1,undefined8 *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  char cStack_41;
  
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6sentryC1ERS3_b(&cStack_41,param_1,1);
  if (cStack_41 == '\x01') {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      *(undefined1 *)*param_2 = 0;
      param_2[1] = 0;
    }
    else {
      *(undefined1 *)param_2 = 0;
      *(undefined1 *)((long)param_2 + 0x17) = 0;
    }
    lVar4 = 0;
    do {
      plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
      pbVar1 = (byte *)plVar3[3];
      if (pbVar1 == (byte *)plVar3[4]) {
        (**(code **)(*plVar3 + 0x50))();
        uVar2 = (uint)plVar3;
        if (uVar2 == 0xffffffff) {
          uVar2 = 6;
          if (lVar4 != 0) {
            uVar2 = 2;
          }
          goto LAB_10a108a48;
        }
      }
      else {
        plVar3[3] = (long)(pbVar1 + 1);
        uVar2 = (uint)*pbVar1;
      }
      if ((param_3 & 0xff) == (uVar2 & 0xff)) {
        uVar2 = 0;
        goto LAB_10a108a48;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2,(int)(char)uVar2);
      lVar4 = lVar4 + -1;
    } while ((-1 < *(char *)((long)param_2 + 0x17)) || (param_2[1] != 0x7ffffffffffffff7));
    uVar2 = 4;
LAB_10a108a48:
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    __ZNSt3__18ios_base5clearEj(lVar4,*(uint *)(lVar4 + 0x20) | uVar2);
  }
  return param_1;
}



/* Entry: 10a108ad4; end: 10a108b8b;  */

long * FUN_10a108ad4(long *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = (long)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeC1Ev(param_1 + 1);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = (long)&PTR_DAT_11088d7b0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 8,param_2);
  FUN_10a002370(param_1);
  return param_1;
}



/* Entry: 10a108b8c; end: 10a108c2b;  */

long FUN_10a108b8c(long param_1)

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



/* Entry: 10a108c2c; end: 10a108d2f;  */

void FUN_10a108c2c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  func_0x000107c2b054(auStack_258,param_1);
  FUN_10a002a94(appuStack_150,auStack_258);
  appuStack_150[0] = &PTR_FUN_110ba4c80;
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
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
  *puVar2 = &PTR_FUN_110ba4c80;
  ___cxa_throw(puVar2,&PTR_DAT_110ba4c58,FUN_10a108d30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a108d00);
  (*pcVar1)();
}



/* Entry: 10a108d30; end: 10a108d33;  */

void FUN_10a108d30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a108d34; end: 10a108d47;  */

void FUN_10a108d34(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a108d48; end: 10a108d57;  */

void FUN_10a108d48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba4ca8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a108d58; end: 10a108d77;  */

void FUN_10a108d58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba4ca8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a108d78; end: 10a108d93;  */

void FUN_10a108d78(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a108d94; end: 10a108e0b;  */

void FUN_10a108d94(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0cf094(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a108e0c; end: 10a108ed3;  */

void FUN_10a108e0c(undefined8 param_1,undefined4 param_2,undefined8 param_3,float *param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long lStack_58;
  ulong uStack_50;
  float fStack_48;
  float fStack_44;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  
  uStack_34 = param_2;
  FUN_10a108ed4(param_3,auStack_38,&uStack_34);
  lVar1 = 0;
  uStack_60 = 0;
  lStack_58 = (ulong)(uint)(param_4[1] + 0.0) << 0x20;
  uStack_50 = (ulong)(uint)(*param_4 + 0.0);
  _fStack_48 = CONCAT44(param_4[1] + 0.0,*param_4 + 0.0);
  do {
    FUN_10a108ed4(param_3,(long)&uStack_60 + lVar1,(long)&uStack_60 + lVar1 + 4);
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x20);
  lVar1 = 8;
  do {
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x20);
  return;
}



/* Entry: 10a108ed4; end: 10a108f3f;  */

void FUN_10a108ed4(uint *param_1,float *param_2,float *param_3)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = *param_1;
  lVar2 = ((ulong)uVar1 & 3) * 4;
  fVar3 = *(float *)(&UNK_10e49664c + lVar2);
  fVar4 = *param_2;
  fVar5 = *(float *)(&UNK_10e49663c + lVar2);
  fVar6 = *param_3;
  *param_3 = fVar3 * fVar6 + fVar4 * fVar5;
  *param_2 = -(fVar5 * fVar6) + fVar4 * fVar3;
  if ((uVar1 >> 2 & 1) != 0) {
    *param_3 = -*param_3;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    *param_2 = -*param_2;
    return;
  }
  return;
}



/* Entry: 10a108f40; end: 10a108fd3;  */

void FUN_10a108f40(long *param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 auStack_2c0 [264];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [264];
  char cStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_38;
  ulong uStack_30;
  byte bStack_28;
  
  (**(code **)(*param_1 + 0x1d8))(&uStack_38);
  if ((bStack_28 & 1) == 0) {
    FUN_10a108fd4(param_2);
    uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    FUN_10a1090c8(auStack_1b8,param_2);
    func_0x00010a0ec6dc(auStack_2c0,1);
    if (cStack_a0 == '\x01') {
      _memcpy(auStack_1a8,auStack_2c0,0x104);
    }
    else {
      _memcpy(auStack_1a8,auStack_2c0,0x108);
      cStack_a0 = '\x01';
    }
    puVar3 = (undefined8 *)0x140;
    ___cxa_allocate_exception();
    puVar4 = puVar3;
    __ZNSt13runtime_errorC2ERKS_();
    *puVar4 = &PTR_FUN_110b99e98;
    _memcpy(puVar4 + 2,auStack_1a8,0x110);
    *puVar3 = &PTR_FUN_110ba56c8;
    puVar3[0x25] = uStack_90;
    puVar3[0x24] = uStack_98;
    puVar3[0x27] = uStack_80;
    puVar3[0x26] = uStack_88;
    ___cxa_throw(puVar3,&PTR_DAT_110ba56a0,FUN_10a1090c4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1090a4);
    (*pcVar1)();
  }
  lVar2 = *param_3;
  uVar5 = param_3[1] - lVar2;
  if (uStack_30 < uVar5 || uStack_30 - uVar5 == 0) {
    if (uStack_30 < uVar5) {
      param_3[1] = lVar2 + uStack_30;
    }
  }
  else {
    func_0x000107c27d58(param_3,uStack_30 - uVar5);
    if (bStack_28 != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a108fcc);
      (*pcVar1)();
    }
    lVar2 = *param_3;
  }
  _memcpy(lVar2,uStack_38,uStack_30);
  return;
}



/* Entry: 10a108fd4; end: 10a1090c3;  */

void FUN_10a108fd4(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_280 [264];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [264];
  char cStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1090c8(auStack_178,param_1);
  func_0x00010a0ec6dc(auStack_280,1);
  if (cStack_60 == '\x01') {
    _memcpy(auStack_168,auStack_280,0x104);
  }
  else {
    _memcpy(auStack_168,auStack_280,0x108);
    cStack_60 = '\x01';
  }
  puVar2 = (undefined8 *)0x140;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_168,0x110);
  *puVar2 = &PTR_FUN_110ba56c8;
  puVar2[0x25] = uStack_50;
  puVar2[0x24] = uStack_58;
  puVar2[0x27] = uStack_40;
  puVar2[0x26] = uStack_48;
  ___cxa_throw(puVar2,&PTR_DAT_110ba56a0,FUN_10a1090c4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1090a4);
  (*pcVar1)();
}



/* Entry: 10a1090c4; end: 10a1090c7;  */

void FUN_10a1090c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a1090c8; end: 10a1091eb;  */

undefined8 * FUN_10a1090c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  FUN_109ffe064(auStack_70,*param_2,param_2[1]);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_58,&UNK_10f63b9fc,auStack_70);
  puVar1 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar1,&UNK_10f63cc0e,0x22);
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  lStack_30 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_10a002a94(param_1,&uStack_40);
  *param_1 = &PTR_FUN_110b99e70;
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  *param_1 = &PTR_FUN_110ba56c8;
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[0x25] = param_2[1];
  param_1[0x24] = uVar2;
  param_1[0x27] = uVar4;
  param_1[0x26] = uVar3;
  return param_1;
}



/* Entry: 10a1091ec; end: 10a1091ff;  */

void FUN_10a1091ec(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a109200; end: 10a1092cf;  */

void FUN_10a109200(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a002a94(appuStack_150,param_1);
  appuStack_150[0] = &PTR_FUN_110b99e70;
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
  *puVar2 = &PTR_FUN_110b99e70;
  ___cxa_throw(puVar2,&PTR_DAT_110b99e48,FUN_10a002a90);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1092b8);
  (*pcVar1)();
}



/* Entry: 10a1092d0; end: 10a10960f;  */

undefined1  [16] FUN_10a1092d0(void)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  ppuVar2 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  if (*ppuVar2 != (undefined *)0x0) {
    FUN_10a08e1c8(*ppuVar2 + 0x18);
  }
  lVar3 = 0x1f00;
  _glGetString();
  lVar4 = lVar3;
  _memchr();
  lVar1 = lVar3 + 0x7f;
  if (lVar4 != 0) {
    lVar1 = lVar4;
  }
  if (lVar1 - lVar3 != 0) {
    _memmove(0x113834c00,lVar3,lVar1 - lVar3);
  }
  uVar5 = 0x113834c00;
  _strlen(0x113834c00);
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = 0x113834c00;
  return auVar6;
}



/* Entry: 10a109610; end: 10a10961f;  */

void FUN_10a109610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba4f68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a109620; end: 10a10963f;  */

void FUN_10a109620(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba4f68;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a109640; end: 10a10964f;  */

void FUN_10a109640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a109648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a109650; end: 10a10987b;  */

undefined *** FUN_10a109650(undefined ***param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined ***pppuStack_50;
  undefined **ppuStack_48;
  code *pcStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR_FUN_110ba4ff8;
  pcStack_40 = FUN_10ae06e3c;
  pppuStack_30 = &ppuStack_48;
  ppuStack_68 = &PTR_DAT_110ba5098;
  uStack_60 = 0x10ae06ea4;
  *param_1 = &PTR_FUN_110c77890;
  param_1[1] = &PTR_FUN_110ba4ff8;
  param_1[4] = (undefined **)(param_1 + 1);
  param_1[2] = (undefined **)FUN_10ae06e3c;
  pppuStack_50 = &ppuStack_68;
  FUN_10a109a0c(param_1 + 5,&ppuStack_68);
  *(undefined4 *)(param_1 + 9) = 1;
  if (pppuStack_50 == &ppuStack_68) {
    lVar3 = 0x20;
LAB_10a109700:
    (**(code **)((long)*pppuStack_50 + lVar3))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_10a109700;
  }
  pppuVar1 = pppuStack_30;
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_10a10972c:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_10a10972c;
  }
  *param_1 = &PTR_FUN_110ba4fb8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  *pppuVar1 = &PTR_FUN_110c77890;
  pppuVar2 = (undefined ***)pppuVar1[8];
  if (pppuVar2 == pppuVar1 + 5) {
    lVar3 = 0x20;
  }
  else {
    if (pppuVar2 == (undefined ***)0x0) goto LAB_10a1097bc;
    lVar3 = 0x28;
  }
  (**(code **)((long)*pppuVar2 + lVar3))();
LAB_10a1097bc:
  pppuVar2 = (undefined ***)pppuVar1[4];
  if (pppuVar2 == pppuVar1 + 1) {
    lVar3 = 0x20;
  }
  else {
    if (pppuVar2 == (undefined ***)0x0) {
      return pppuVar1;
    }
    lVar3 = 0x28;
  }
  (**(code **)((long)*pppuVar2 + lVar3))();
  return pppuVar1;
}



/* Entry: 10a10987c; end: 10a109883;  */

void FUN_10a10987c(void)

{
  return;
}



/* Entry: 10a109884; end: 10a1098bb;  */

void FUN_10a109884(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110ba4ff8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10a1098bc; end: 10a1098f7;  */

void FUN_10a1098bc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110ba4ff8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a1098f8; end: 10a109933;  */

long FUN_10a1098f8(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba5068);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a109934; end: 10a109947;  */

undefined ** FUN_10a109934(void)

{
  return &PTR_DAT_110ba5068;
}



/* Entry: 10a109948; end: 10a10997f;  */

void FUN_10a109948(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110ba5098;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10a109980; end: 10a1099c3;  */

void FUN_10a109980(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110ba5098;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a1099c4; end: 10a1099ff;  */

long FUN_10a1099c4(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba5108);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a109a00; end: 10a109a0b;  */

undefined ** FUN_10a109a00(void)

{
  return &PTR_DAT_110ba5108;
}



/* Entry: 10a109a0c; end: 10a109a6f;  */

long FUN_10a109a0c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 10a109a70; end: 10a109aaf;  */

void FUN_10a109a70(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a109ab0(lVar1 + 0x10);
    FUN_10a109ae0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a109ab0; end: 10a109adf;  */

long * FUN_10a109ab0(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10a109ae0; end: 10a109b37;  */

long FUN_10a109ae0(long param_1)

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



/* Entry: 10a109b38; end: 10a109ba7;  */

void FUN_10a109b38(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x48;
  __Znwm();
  FUN_10a109ba8();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a109ba8; end: 10a109bef;  */

undefined8 * FUN_10a109ba8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba4cf8;
  FUN_10a109c30(param_1 + 3);
  return param_1;
}



/* Entry: 10a109bf0; end: 10a109bff;  */

void FUN_10a109bf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba4cf8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a109c00; end: 10a109c1f;  */

void FUN_10a109c00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba4cf8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a109c20; end: 10a109c2f;  */

void FUN_10a109c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a109c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10a109c30; end: 10a109d07;  */

undefined8
FUN_10a109c30(undefined8 param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar2 = *param_2;
  plStack_28 = (long *)param_3[1];
  uStack_30 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  plStack_38 = (long *)param_4[1];
  uStack_40 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  FUN_10a0f2ec8(param_1,uVar2,&uStack_30,&uStack_40);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a109d08; end: 10a109d5f;  */

void FUN_10a109d08(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x48;
  __Znwm();
  FUN_10a109d60();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a109d60; end: 10a109da7;  */

undefined8 * FUN_10a109d60(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba4cf8;
  FUN_10a109da8(param_1 + 3);
  return param_1;
}



/* Entry: 10a109da8; end: 10a109ecb;  */

undefined8 * FUN_10a109da8(undefined8 *param_1,undefined1 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar3 = *param_2;
  puVar6 = param_1;
  FUN_109d22370();
  plStack_28 = (long *)puVar6[1];
  uStack_30 = *puVar6;
  if (puVar6[1] != 0) {
    plVar1 = (long *)(puVar6[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_109d22438();
  plStack_38 = (long *)puVar6[1];
  uStack_40 = *puVar6;
  if (puVar6[1] != 0) {
    plVar1 = (long *)(puVar6[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a0f2ec8(param_1,uVar3,&uStack_30,&uStack_40);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return param_1;
}



/* Entry: 10a109ecc; end: 10a109f13;  */

void FUN_10a109ecc(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x188;
  __Znwm();
  FUN_10a109f14();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a109f14; end: 10a109f5b;  */

undefined8 * FUN_10a109f14(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba4d48;
  FUN_10a109fb8(param_1 + 3);
  return param_1;
}



/* Entry: 10a109f5c; end: 10a109f6b;  */

void FUN_10a109f5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba4d48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a109f6c; end: 10a109f8b;  */

void FUN_10a109f6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba4d48;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a109f8c; end: 10a109fb3;  */

/* WARNING: Possible PIC construction at 0x00010a109fa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a109fa4) */

undefined8 * FUN_10a109f8c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plStack_58;
  
  *(undefined8 *)(param_1 + 0xd0) = &PTR_FUN_110b3ebc8;
  *(undefined ***)(param_1 + 0xe8) = &PTR_DAT_110b3ec18;
  *(undefined1 *)(param_1 + 0x100) = 1;
  lVar4 = *(long *)(param_1 + 0x110);
  plVar7 = (long *)(lVar4 + 0x10);
  do {
    lVar6 = *plVar7;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar4 + 0x18);
        goto LAB_109d18fb0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_109d18fb0:
      plVar7 = *(long **)(param_1 + 0x118);
      plStack_58 = plVar7;
      if (plVar7 == (long *)0x0) {
        FUN_109d1a244(&plStack_58);
      }
      else {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        FUN_109d1a244(&plStack_58);
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
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
      }
      if (*(char *)(param_1 + 0x187) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x170));
      }
      func_0x0001092ba41c(param_1 + 0x128);
      if (*(long *)(param_1 + 0x120) != 0) {
        func_0x0001092b4274();
      }
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
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
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = *(long **)(param_1 + 0x110);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 0x200000000;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 >> 0x21 == 1) {
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
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = *(long **)(param_1 + 0x108);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
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
          (**(code **)(*plVar7 + 0x10))(plVar7);
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
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
      }
      return (undefined8 *)(param_1 + 0xd0);
    }
  } while( true );
}



/* Entry: 10a109fb4; end: 10a109fb7;  */

void FUN_10a109fb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a109fb8; end: 10a10a0d3;  */

undefined8 * FUN_10a109fb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_38;
  
  puVar2 = &uStack_80;
  puVar3 = &uStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  puVar1 = param_1;
  FUN_109d1a80c();
  uStack_80 = *puVar1;
  puStack_78 = &UNK_1053a6a3c;
  ppuStack_70 = &PTR_DAT_110ae9180;
  FUN_109d228cc(param_1,&UNK_10f63cc31,0xf,1,&uStack_80);
  func_0x0001092ba41c();
  FUN_109d1a80c();
  uStack_80 = *puVar2;
  puStack_78 = &UNK_1053a6a3c;
  ppuStack_70 = &PTR_DAT_110ae9180;
  FUN_109d228cc(param_1 + 0x17,&UNK_10f63cc41,0xb,1,&uStack_80);
  func_0x0001092ba41c(&uStack_80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000109d18f34(param_1);
  __Unwind_Resume(puVar3);
  return puVar3;
}



/* Entry: 10a10a0d4; end: 10a10a0d7;  */

void FUN_10a10a0d4(void)

{
  return;
}



/* Entry: 10a10a0d8; end: 10a10a183;  */

void FUN_10a10a0d8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar7 + 0x38) + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(lVar7);
      }
    }
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    if (0 < *(int *)(lVar7 + 4)) {
      lVar5 = 0;
      lVar6 = *(long *)(lVar7 + 0x40);
      do {
        *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(lVar7 + 4));
    }
    lVar5 = *(long *)(lVar7 + 0x48);
    if (lVar5 != lVar7 + 0x50 && lVar5 != 0) {
      _free(*(undefined8 *)(lVar5 + -8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar7);
    return;
  }
  return;
}



/* Entry: 10a10a184; end: 10a10a19b;  */

void FUN_10a10a184(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a10a19c; end: 10a10a277;  */

void FUN_10a10a19c(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar8 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110ba4d88;
  puVar5 = (undefined8 *)0x60;
  __Znwm();
  uVar9 = *puVar8;
  uVar11 = puVar8[3];
  uVar10 = puVar8[2];
  iVar2 = *(int *)((long)puVar8 + 4);
  puVar5[1] = puVar8[1];
  *puVar5 = uVar9;
  puVar5[3] = uVar11;
  puVar5[2] = uVar10;
  uVar9 = puVar8[4];
  puVar5[5] = puVar8[5];
  puVar5[4] = uVar9;
  lVar6 = puVar8[7];
  uVar9 = puVar8[6];
  puVar5[7] = puVar8[7];
  puVar5[6] = uVar9;
  puVar5[10] = 0;
  puVar5[8] = puVar5 + 1;
  puVar5[9] = puVar5 + 10;
  puVar5[0xb] = 0;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar2 = *(int *)((long)puVar8 + 4);
  }
  if (iVar2 < 3) {
    puVar8 = (undefined8 *)puVar8[9];
    puVar7 = (undefined8 *)puVar5[9];
    *puVar7 = *puVar8;
    puVar7[1] = puVar8[1];
  }
  else {
    *(undefined4 *)((long)puVar5 + 4) = 0;
    func_0x000109a84868(puVar5,puVar8);
  }
  param_1[1] = puVar5;
  return;
}



/* Entry: 10a10a278; end: 10a10a2f3;  */

long * FUN_10a10a278(long param_1,undefined8 param_2)

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
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10a10a2f4; end: 10a10a3fb;  */

void FUN_10a10a2f4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  func_0x000107c2b054(auStack_258,param_1);
  FUN_10a10a400(auStack_150,auStack_258,param_2);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
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
  *puVar2 = &PTR_FUN_110ba5740;
  ___cxa_throw(puVar2,&PTR_DAT_110ba5718,FUN_10a10a3fc);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a10a3cc);
  (*pcVar1)();
}



/* Entry: 10a10a3fc; end: 10a10a3ff;  */

void FUN_10a10a3fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a10a400; end: 10a10a587;  */

/* WARNING: Removing unreachable block (ram,0x00010a10a4cc) */

undefined8 * FUN_10a10a400(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_98,&UNK_10f63cc59);
  puVar2 = auStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,&UNK_10f63cc63,8);
  uStack_78 = puVar2[1];
  uStack_80 = *puVar2;
  lStack_70 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  puVar3 = &uStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,puVar2,uVar1);
  uStack_58 = puVar3[1];
  uStack_60 = *puVar3;
  lStack_50 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar2 = &uStack_60;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,&UNK_10f63cc6c,0xc);
  uStack_38 = puVar2[1];
  uStack_40 = *puVar2;
  uStack_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  FUN_10a002a94(param_1,&uStack_40);
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  if (cStack_81 < '\0') {
    __ZdlPv(auStack_98[0]);
  }
  *param_1 = &PTR_FUN_110ba5740;
  return param_1;
}



/* Entry: 10a10a588; end: 10a10a59b;  */

void FUN_10a10a588(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a10a59c; end: 10a10a5f3;  */

long FUN_10a10a59c(long param_1)

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



/* Entry: 10a10a5f4; end: 10a10a603;  */

void FUN_10a10a5f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba4db8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a10a604; end: 10a10a623;  */

void FUN_10a10a604(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba4db8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a10a624; end: 10a10a667;  */

void FUN_10a10a624(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x70;
  FUN_10a10a66c(&lStack_28);
  FUN_10a10a718(param_1 + 0x48);
  func_0x00010a10a78c(param_1 + 0x20);
  return;
}



/* Entry: 10a10a668; end: 10a10a66b;  */

void FUN_10a10a668(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a10a66c; end: 10a10a6ab;  */

void FUN_10a10a66c(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a10a6ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a10a6ac; end: 10a10a717;  */

void FUN_10a10a6ac(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 8) != param_2) {
    puVar1 = *(undefined8 **)(param_1 + 8) + -0xb;
    do {
      if (*(char *)((long)puVar1 + 0x4f) < '\0') {
        __ZdlPv(puVar1[7]);
      }
      puVar2 = puVar1 + -3;
      (**(code **)*puVar1)(puVar1);
      puVar1 = puVar1 + -0xe;
    } while (puVar2 != param_2);
  }
  *(undefined8 **)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10a10a718; end: 10a10a7d3;  */

long * FUN_10a10a718(long *param_1)

{
  long lVar1;
  
  func_0x00010a10a750(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a10a7d4; end: 10a10aa03;  */

long * FUN_10a10a7d4(long param_1,long param_2)

{
  short sVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 ***pppuStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 ***pppuStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 ***pppuStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 ***pppuStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &UNK_10f63cc79;
  uStack_18 = 0x12;
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_20 = &UNK_10f63cc8c;
      uStack_18 = 0x21;
    }
    else {
      puStack_20 = &UNK_10f63cc8c;
      uStack_18 = 0x21;
      if (*(short *)(param_1 + 0xc) == 0x11) {
        if (*(int *)(param_1 + 8) == 8) {
          return (long *)**(undefined8 **)(param_1 + 0x10);
        }
        puStack_20 = &UNK_10f63ccae;
        uStack_18 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_20);
  ppuVar2 = &puStack_40;
  uStack_28 = 0x10a10a860;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (*(uint **)(param_2 + 0x10) != (uint *)0x0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)(param_2 + 0xc) == 2) {
        if (*(int *)(param_2 + 8) == 4) {
          return (long *)(ulong)**(uint **)(param_2 + 0x10);
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4();
  uStack_48 = 0x10a10a8ec;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (ppuVar2[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar2 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)ppuVar2 + 0xc) == 3) {
        if ((int)ppuVar2[1] == 4) {
          return (long *)ppuVar2;
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_60);
  ppuVar2 = &puStack_80;
  uStack_68 = 0x10a10a978;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (*(byte **)(param_2 + 0x10) != (byte *)0x0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)(param_2 + 0xc) == 1) {
        if (*(int *)(param_2 + 8) == 1) {
          return (long *)(ulong)**(byte **)(param_2 + 0x10);
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_b0;
  pcStack_88 = FUN_10a10aa04;
  puStack_b0 = &UNK_10f63cc79;
  uStack_a8 = 0x12;
  if (*(long *)((long)ppuVar2 + 0x10) != 0) {
    sVar1 = *(short *)((long)ppuVar2 + 0xc);
    lVar3 = (long)sVar1;
    if (sVar1 != 0x18) {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
      if (sVar1 != 6) goto LAB_10a10aaa4;
    }
    if (*(int *)((long)ppuVar2 + 8) == 4) {
      FUN_10a0f7058();
      puStack_b0 = &UNK_10f63ccae;
      uStack_a8 = 0x11;
      if (lVar3 == 4) {
        return (long *)(ulong)**(uint **)((long)ppuVar2 + 0x10);
      }
    }
    else {
      puStack_b0 = &UNK_10f63ccae;
      uStack_a8 = 0x11;
    }
  }
LAB_10a10aaa4:
  FUN_10a0edfc4(&puStack_b0);
  ppuVar2 = &puStack_d0;
  pcStack_b8 = FUN_10a10aaac;
  pppuStack_e0 = &pppuStack_c0;
  puStack_d0 = &UNK_10f63cc79;
  uStack_c8 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
    }
    else {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
      if (*(short *)(param_2 + 0xc) == 5) {
        if (*(int *)(param_2 + 8) == 8) {
          return (long *)ppuVar4;
        }
        puStack_d0 = &UNK_10f63ccae;
        uStack_c8 = 0x11;
      }
    }
  }
  pppuStack_c0 = &pppuStack_90;
  FUN_10a0edfc4(&puStack_d0);
  ppuVar4 = &puStack_f0;
  uStack_d8 = 0x10a10ab38;
  pppuStack_100 = &pppuStack_e0;
  puStack_f0 = &UNK_10f63cc79;
  uStack_e8 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
    }
    else {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
      if (*(short *)(param_2 + 0xc) == 7) {
        if (*(int *)(param_2 + 8) == 8) {
          return (long *)ppuVar2;
        }
        puStack_f0 = &UNK_10f63ccae;
        uStack_e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_f0);
  ppuVar2 = &puStack_110;
  uStack_f8 = 0x10a10abc4;
  pppuStack_120 = &pppuStack_100;
  puStack_110 = &UNK_10f63cc79;
  uStack_108 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
    }
    else {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
      if (*(short *)(param_2 + 0xc) == 8) {
        if (*(int *)(param_2 + 8) == 0xc) {
          return (long *)ppuVar4;
        }
        puStack_110 = &UNK_10f63ccae;
        uStack_108 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_130;
  uStack_118 = 0x10a10ac54;
  pppuStack_140 = &pppuStack_120;
  puStack_130 = &UNK_10f63cc79;
  uStack_128 = 0x12;
  if (ppuVar2[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar2 + 0xc) == 0x18) {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
    }
    else {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
      if (*(short *)((long)ppuVar2 + 0xc) == 0x20) {
        if ((int)ppuVar2[1] == 0x18) {
          return (long *)ppuVar2;
        }
        puStack_130 = &UNK_10f63ccae;
        uStack_128 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_130);
  ppuVar2 = &puStack_150;
  uStack_138 = 0x10a10ace4;
  pppuStack_160 = &pppuStack_140;
  puStack_150 = &UNK_10f63cc79;
  uStack_148 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
    }
    else {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
      if (*(short *)(param_2 + 0xc) == 9) {
        if (*(int *)(param_2 + 8) == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_150 = &UNK_10f63ccae;
        uStack_148 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_170;
  uStack_158 = 0x10a10ad74;
  pppuStack_180 = &pppuStack_160;
  puStack_170 = &UNK_10f63cc79;
  uStack_168 = 0x12;
  if (*(undefined8 **)((long)ppuVar2 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar2 + 0xc) == 0x18) {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
    }
    else {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
      if (*(short *)((long)ppuVar2 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar2 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar2 + 0x10);
        }
        puStack_170 = &UNK_10f63ccae;
        uStack_168 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar2 = &puStack_190;
  uStack_178 = 0x10a10ae00;
  pppuStack_1a0 = &pppuStack_180;
  puStack_190 = &UNK_10f63cc79;
  uStack_188 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
    }
    else {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_190 = &UNK_10f63ccae;
        uStack_188 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_1b0;
  uStack_198 = 0x10a10ae90;
  pppuStack_1c0 = &pppuStack_1a0;
  puStack_1b0 = &UNK_10f63cc79;
  uStack_1a8 = 0x12;
  if (*(undefined8 **)((long)ppuVar2 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar2 + 0xc) == 0x18) {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
    }
    else {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
      if (*(short *)((long)ppuVar2 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar2 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar2 + 0x10);
        }
        puStack_1b0 = &UNK_10f63ccae;
        uStack_1a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar2 = &puStack_1d0;
  uStack_1b8 = 0x10a10af1c;
  pppuStack_1e0 = &pppuStack_1c0;
  puStack_1d0 = &UNK_10f63cc79;
  uStack_1c8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
    }
    else {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_1d0 = &UNK_10f63ccae;
        uStack_1c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_1f0;
  uStack_1d8 = 0x10a10afa8;
  pppuStack_200 = &pppuStack_1e0;
  puStack_1f0 = &UNK_10f63cc79;
  uStack_1e8 = 0x12;
  if (*(undefined8 **)((long)ppuVar2 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar2 + 0xc) == 0x18) {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
    }
    else {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
      if (*(short *)((long)ppuVar2 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar2 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar2 + 0x10);
        }
        puStack_1f0 = &UNK_10f63ccae;
        uStack_1e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar2 = &puStack_210;
  uStack_1f8 = 0x10a10b038;
  pppuStack_220 = &pppuStack_200;
  puStack_210 = &UNK_10f63cc79;
  uStack_208 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
    }
    else {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_210 = &UNK_10f63ccae;
        uStack_208 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_230;
  uStack_218 = 0x10a10b0c4;
  pppuStack_240 = &pppuStack_220;
  puStack_230 = &UNK_10f63cc79;
  uStack_228 = 0x12;
  if (*(uint **)((long)ppuVar2 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar2 + 0xc) == 0x18) {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
    }
    else {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
      if (*(short *)((long)ppuVar2 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar2 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar2 + 0x10);
        }
        puStack_230 = &UNK_10f63ccae;
        uStack_228 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_230);
  ppuVar2 = &puStack_250;
  uStack_238 = 0x10a10b150;
  pppuStack_260 = &pppuStack_240;
  puStack_250 = &UNK_10f63cc79;
  uStack_248 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
    }
    else {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
      if (*(short *)(param_2 + 0xc) == 0xc) {
        if (*(int *)(param_2 + 8) == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_250 = &UNK_10f63ccae;
        uStack_248 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_270;
  uStack_258 = 0x10a10b1e0;
  pppuStack_280 = &pppuStack_260;
  puStack_270 = &UNK_10f63cc79;
  uStack_268 = 0x12;
  if (ppuVar2[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar2 + 0xc) == 0x18) {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
    }
    else {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
      if (*(short *)((long)ppuVar2 + 0xc) == 0x21) {
        if ((int)ppuVar2[1] == 0x20) {
          return (long *)ppuVar2;
        }
        puStack_270 = &UNK_10f63ccae;
        uStack_268 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_270);
  ppuVar2 = &puStack_290;
  uStack_278 = 0x10a10b270;
  pppuStack_2a0 = &pppuStack_280;
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  puStack_290 = &UNK_10f63cc79;
  uStack_288 = 0x12;
  if (puVar5 != (undefined8 *)0x0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_290 = &UNK_10f63cc8c;
      uStack_288 = 0x21;
    }
    else {
      puStack_290 = &UNK_10f63cc8c;
      uStack_288 = 0x21;
      if (*(short *)(param_2 + 0xc) == 0xb) {
        if (*(int *)(param_2 + 8) == 0x40) {
          uVar6 = *puVar5;
          uVar8 = puVar5[3];
          uVar7 = puVar5[2];
          extraout_x8[1] = puVar5[1];
          *extraout_x8 = uVar6;
          extraout_x8[3] = uVar8;
          extraout_x8[2] = uVar7;
          uVar6 = puVar5[4];
          uVar8 = puVar5[7];
          uVar7 = puVar5[6];
          extraout_x8[5] = puVar5[5];
          extraout_x8[4] = uVar6;
          extraout_x8[7] = uVar8;
          extraout_x8[6] = uVar7;
          return (long *)ppuVar4;
        }
        puStack_290 = &UNK_10f63ccae;
        uStack_288 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_290);
  ppuVar4 = &puStack_2b0;
  uStack_298 = 0x10a10b308;
  pppuStack_2c0 = &pppuStack_2a0;
  puStack_2b0 = &UNK_10f63cc79;
  uStack_2a8 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_2b0 = &UNK_10f63cc8c;
      uStack_2a8 = 0x21;
    }
    else {
      puStack_2b0 = &UNK_10f63cc8c;
      uStack_2a8 = 0x21;
      if (*(short *)(param_2 + 0xc) == 0x16) {
        if (*(int *)(param_2 + 8) == 0x10) {
          return (long *)ppuVar2;
        }
        puStack_2b0 = &UNK_10f63ccae;
        uStack_2a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_2b0);
  ppuVar2 = &puStack_2d0;
  uStack_2b8 = 0x10a10b398;
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  puStack_2d0 = &UNK_10f63cc79;
  uStack_2c8 = 0x12;
  if (puVar5 != (undefined8 *)0x0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_2d0 = &UNK_10f63cc8c;
      uStack_2c8 = 0x21;
    }
    else {
      puStack_2d0 = &UNK_10f63cc8c;
      uStack_2c8 = 0x21;
      if (*(short *)(param_2 + 0xc) == 10) {
        if (*(int *)(param_2 + 8) == 0x24) {
          uVar6 = *puVar5;
          uVar8 = puVar5[3];
          uVar7 = puVar5[2];
          extraout_x8_00[1] = puVar5[1];
          *extraout_x8_00 = uVar6;
          extraout_x8_00[3] = uVar8;
          extraout_x8_00[2] = uVar7;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar5 + 4);
          return (long *)ppuVar4;
        }
        puStack_2d0 = &UNK_10f63ccae;
        uStack_2c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar3 = (long)*ppuVar2;
  *ppuVar2 = (undefined *)0x0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar2;
}



/* Entry: 10a10aa04; end: 10a10aaab;  */

long * FUN_10a10aa04(long param_1,long param_2)

{
  short sVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 ***pppuStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 **ppuStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  ppuVar3 = &puStack_30;
  puStack_30 = &UNK_10f63cc79;
  uStack_28 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    sVar1 = *(short *)(param_1 + 0xc);
    lVar2 = (long)sVar1;
    if (sVar1 != 0x18) {
      puStack_30 = &UNK_10f63cc8c;
      uStack_28 = 0x21;
      if (sVar1 != 6) goto LAB_10a10aaa4;
    }
    if (*(int *)(param_1 + 8) == 4) {
      FUN_10a0f7058();
      puStack_30 = &UNK_10f63ccae;
      uStack_28 = 0x11;
      if (lVar2 == 4) {
        return (long *)(ulong)**(uint **)(param_1 + 0x10);
      }
    }
    else {
      puStack_30 = &UNK_10f63ccae;
      uStack_28 = 0x11;
    }
  }
LAB_10a10aaa4:
  FUN_10a0edfc4(&puStack_30);
  ppuVar4 = &puStack_50;
  pcStack_38 = FUN_10a10aaac;
  ppuStack_60 = &puStack_40;
  puStack_50 = &UNK_10f63cc79;
  uStack_48 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_50 = &UNK_10f63cc8c;
      uStack_48 = 0x21;
    }
    else {
      puStack_50 = &UNK_10f63cc8c;
      uStack_48 = 0x21;
      if (*(short *)(param_2 + 0xc) == 5) {
        if (*(int *)(param_2 + 8) == 8) {
          return (long *)ppuVar3;
        }
        puStack_50 = &UNK_10f63ccae;
        uStack_48 = 0x11;
      }
    }
  }
  puStack_40 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4(&puStack_50);
  ppuVar3 = &puStack_70;
  uStack_58 = 0x10a10ab38;
  pppuStack_80 = &ppuStack_60;
  puStack_70 = &UNK_10f63cc79;
  uStack_68 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_70 = &UNK_10f63cc8c;
      uStack_68 = 0x21;
    }
    else {
      puStack_70 = &UNK_10f63cc8c;
      uStack_68 = 0x21;
      if (*(short *)(param_2 + 0xc) == 7) {
        if (*(int *)(param_2 + 8) == 8) {
          return (long *)ppuVar4;
        }
        puStack_70 = &UNK_10f63ccae;
        uStack_68 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_70);
  ppuVar4 = &puStack_90;
  uStack_78 = 0x10a10abc4;
  pppuStack_a0 = &pppuStack_80;
  puStack_90 = &UNK_10f63cc79;
  uStack_88 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
    }
    else {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
      if (*(short *)(param_2 + 0xc) == 8) {
        if (*(int *)(param_2 + 8) == 0xc) {
          return (long *)ppuVar3;
        }
        puStack_90 = &UNK_10f63ccae;
        uStack_88 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_b0;
  uStack_98 = 0x10a10ac54;
  pppuStack_c0 = &pppuStack_a0;
  puStack_b0 = &UNK_10f63cc79;
  uStack_a8 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
    }
    else {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x20) {
        if ((int)ppuVar4[1] == 0x18) {
          return (long *)ppuVar4;
        }
        puStack_b0 = &UNK_10f63ccae;
        uStack_a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_b0);
  ppuVar4 = &puStack_d0;
  uStack_b8 = 0x10a10ace4;
  pppuStack_e0 = &pppuStack_c0;
  puStack_d0 = &UNK_10f63cc79;
  uStack_c8 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
    }
    else {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
      if (*(short *)(param_2 + 0xc) == 9) {
        if (*(int *)(param_2 + 8) == 0x10) {
          return (long *)ppuVar3;
        }
        puStack_d0 = &UNK_10f63ccae;
        uStack_c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_f0;
  uStack_d8 = 0x10a10ad74;
  pppuStack_100 = &pppuStack_e0;
  puStack_f0 = &UNK_10f63cc79;
  uStack_e8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
    }
    else {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_f0 = &UNK_10f63ccae;
        uStack_e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_110;
  uStack_f8 = 0x10a10ae00;
  pppuStack_120 = &pppuStack_100;
  puStack_110 = &UNK_10f63cc79;
  uStack_108 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
    }
    else {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar3 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_110 = &UNK_10f63ccae;
        uStack_108 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_130;
  uStack_118 = 0x10a10ae90;
  pppuStack_140 = &pppuStack_120;
  puStack_130 = &UNK_10f63cc79;
  uStack_128 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
    }
    else {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_130 = &UNK_10f63ccae;
        uStack_128 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_150;
  uStack_138 = 0x10a10af1c;
  pppuStack_160 = &pppuStack_140;
  puStack_150 = &UNK_10f63cc79;
  uStack_148 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
    }
    else {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar3 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_150 = &UNK_10f63ccae;
        uStack_148 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_170;
  uStack_158 = 0x10a10afa8;
  pppuStack_180 = &pppuStack_160;
  puStack_170 = &UNK_10f63cc79;
  uStack_168 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
    }
    else {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_170 = &UNK_10f63ccae;
        uStack_168 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_190;
  uStack_178 = 0x10a10b038;
  pppuStack_1a0 = &pppuStack_180;
  puStack_190 = &UNK_10f63cc79;
  uStack_188 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
    }
    else {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar3 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_190 = &UNK_10f63ccae;
        uStack_188 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_1b0;
  uStack_198 = 0x10a10b0c4;
  pppuStack_1c0 = &pppuStack_1a0;
  puStack_1b0 = &UNK_10f63cc79;
  uStack_1a8 = 0x12;
  if (*(uint **)((long)ppuVar4 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
    }
    else {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar4 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar4 + 0x10);
        }
        puStack_1b0 = &UNK_10f63ccae;
        uStack_1a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1b0);
  ppuVar4 = &puStack_1d0;
  uStack_1b8 = 0x10a10b150;
  pppuStack_1e0 = &pppuStack_1c0;
  puStack_1d0 = &UNK_10f63cc79;
  uStack_1c8 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
    }
    else {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
      if (*(short *)(param_2 + 0xc) == 0xc) {
        if (*(int *)(param_2 + 8) == 0x10) {
          return (long *)ppuVar3;
        }
        puStack_1d0 = &UNK_10f63ccae;
        uStack_1c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_1f0;
  uStack_1d8 = 0x10a10b1e0;
  pppuStack_200 = &pppuStack_1e0;
  puStack_1f0 = &UNK_10f63cc79;
  uStack_1e8 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
    }
    else {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x21) {
        if ((int)ppuVar4[1] == 0x20) {
          return (long *)ppuVar4;
        }
        puStack_1f0 = &UNK_10f63ccae;
        uStack_1e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1f0);
  ppuVar4 = &puStack_210;
  uStack_1f8 = 0x10a10b270;
  pppuStack_220 = &pppuStack_200;
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  puStack_210 = &UNK_10f63cc79;
  uStack_208 = 0x12;
  if (puVar5 != (undefined8 *)0x0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
    }
    else {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
      if (*(short *)(param_2 + 0xc) == 0xb) {
        if (*(int *)(param_2 + 8) == 0x40) {
          uVar6 = *puVar5;
          uVar8 = puVar5[3];
          uVar7 = puVar5[2];
          extraout_x8[1] = puVar5[1];
          *extraout_x8 = uVar6;
          extraout_x8[3] = uVar8;
          extraout_x8[2] = uVar7;
          uVar6 = puVar5[4];
          uVar8 = puVar5[7];
          uVar7 = puVar5[6];
          extraout_x8[5] = puVar5[5];
          extraout_x8[4] = uVar6;
          extraout_x8[7] = uVar8;
          extraout_x8[6] = uVar7;
          return (long *)ppuVar3;
        }
        puStack_210 = &UNK_10f63ccae;
        uStack_208 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_210);
  ppuVar3 = &puStack_230;
  uStack_218 = 0x10a10b308;
  pppuStack_240 = &pppuStack_220;
  puStack_230 = &UNK_10f63cc79;
  uStack_228 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
    }
    else {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
      if (*(short *)(param_2 + 0xc) == 0x16) {
        if (*(int *)(param_2 + 8) == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_230 = &UNK_10f63ccae;
        uStack_228 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_230);
  ppuVar4 = &puStack_250;
  uStack_238 = 0x10a10b398;
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  puStack_250 = &UNK_10f63cc79;
  uStack_248 = 0x12;
  if (puVar5 != (undefined8 *)0x0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
    }
    else {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
      if (*(short *)(param_2 + 0xc) == 10) {
        if (*(int *)(param_2 + 8) == 0x24) {
          uVar6 = *puVar5;
          uVar8 = puVar5[3];
          uVar7 = puVar5[2];
          extraout_x8_00[1] = puVar5[1];
          *extraout_x8_00 = uVar6;
          extraout_x8_00[3] = uVar8;
          extraout_x8_00[2] = uVar7;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar5 + 4);
          return (long *)ppuVar3;
        }
        puStack_250 = &UNK_10f63ccae;
        uStack_248 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar2 = (long)*ppuVar4;
  *ppuVar4 = (undefined *)0x0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar4;
}



/* Entry: 10a10aaac; end: 10a10b42f;  */

long * FUN_10a10aaac(long *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 ***pppuStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 ***pppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar1 = &puStack_20;
  puStack_20 = &UNK_10f63cc79;
  uStack_18 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_20 = &UNK_10f63cc8c;
      uStack_18 = 0x21;
    }
    else {
      puStack_20 = &UNK_10f63cc8c;
      uStack_18 = 0x21;
      if (*(short *)(param_2 + 0xc) == 5) {
        if (*(int *)(param_2 + 8) == 8) {
          return param_1;
        }
        puStack_20 = &UNK_10f63ccae;
        uStack_18 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_20);
  ppuVar2 = &puStack_40;
  uStack_28 = 0x10a10ab38;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)(param_2 + 0xc) == 7) {
        if (*(int *)(param_2 + 8) == 8) {
          return (long *)ppuVar1;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4(&puStack_40);
  ppuVar1 = &puStack_60;
  uStack_48 = 0x10a10abc4;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)(param_2 + 0xc) == 8) {
        if (*(int *)(param_2 + 8) == 0xc) {
          return (long *)ppuVar2;
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar2 = &puStack_80;
  uStack_68 = 0x10a10ac54;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (ppuVar1[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar1 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)ppuVar1 + 0xc) == 0x20) {
        if ((int)ppuVar1[1] == 0x18) {
          return (long *)ppuVar1;
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_80);
  ppuVar1 = &puStack_a0;
  uStack_88 = 0x10a10ace4;
  pppuStack_b0 = &pppuStack_90;
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)(param_2 + 0xc) == 9) {
        if (*(int *)(param_2 + 8) == 0x10) {
          return (long *)ppuVar2;
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar2 = &puStack_c0;
  uStack_a8 = 0x10a10ad74;
  pppuStack_d0 = &pppuStack_b0;
  puStack_c0 = &UNK_10f63cc79;
  uStack_b8 = 0x12;
  if (*(undefined8 **)((long)ppuVar1 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar1 + 0xc) == 0x18) {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
    }
    else {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
      if (*(short *)((long)ppuVar1 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar1 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar1 + 0x10);
        }
        puStack_c0 = &UNK_10f63ccae;
        uStack_b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar1 = &puStack_e0;
  uStack_c8 = 0x10a10ae00;
  pppuStack_f0 = &pppuStack_d0;
  puStack_e0 = &UNK_10f63cc79;
  uStack_d8 = 0x12;
  if (*(undefined8 **)((long)ppuVar2 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar2 + 0xc) == 0x18) {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
    }
    else {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
      if (*(short *)((long)ppuVar2 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar2 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar2 + 0x10);
        }
        puStack_e0 = &UNK_10f63ccae;
        uStack_d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar2 = &puStack_100;
  uStack_e8 = 0x10a10ae90;
  pppuStack_110 = &pppuStack_f0;
  puStack_100 = &UNK_10f63cc79;
  uStack_f8 = 0x12;
  if (*(undefined8 **)((long)ppuVar1 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar1 + 0xc) == 0x18) {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
    }
    else {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
      if (*(short *)((long)ppuVar1 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar1 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar1 + 0x10);
        }
        puStack_100 = &UNK_10f63ccae;
        uStack_f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar1 = &puStack_120;
  uStack_108 = 0x10a10af1c;
  pppuStack_130 = &pppuStack_110;
  puStack_120 = &UNK_10f63cc79;
  uStack_118 = 0x12;
  if (*(undefined8 **)((long)ppuVar2 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar2 + 0xc) == 0x18) {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
    }
    else {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
      if (*(short *)((long)ppuVar2 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar2 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar2 + 0x10);
        }
        puStack_120 = &UNK_10f63ccae;
        uStack_118 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar2 = &puStack_140;
  uStack_128 = 0x10a10afa8;
  pppuStack_150 = &pppuStack_130;
  puStack_140 = &UNK_10f63cc79;
  uStack_138 = 0x12;
  if (*(undefined8 **)((long)ppuVar1 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar1 + 0xc) == 0x18) {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
    }
    else {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
      if (*(short *)((long)ppuVar1 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar1 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar1 + 0x10);
        }
        puStack_140 = &UNK_10f63ccae;
        uStack_138 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar1 = &puStack_160;
  uStack_148 = 0x10a10b038;
  pppuStack_170 = &pppuStack_150;
  puStack_160 = &UNK_10f63cc79;
  uStack_158 = 0x12;
  if (*(undefined8 **)((long)ppuVar2 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar2 + 0xc) == 0x18) {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
    }
    else {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
      if (*(short *)((long)ppuVar2 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar2 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar2 + 0x10);
        }
        puStack_160 = &UNK_10f63ccae;
        uStack_158 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar2 = &puStack_180;
  uStack_168 = 0x10a10b0c4;
  pppuStack_190 = &pppuStack_170;
  puStack_180 = &UNK_10f63cc79;
  uStack_178 = 0x12;
  if (*(uint **)((long)ppuVar1 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar1 + 0xc) == 0x18) {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
    }
    else {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
      if (*(short *)((long)ppuVar1 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar1 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar1 + 0x10);
        }
        puStack_180 = &UNK_10f63ccae;
        uStack_178 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_180);
  ppuVar1 = &puStack_1a0;
  uStack_188 = 0x10a10b150;
  pppuStack_1b0 = &pppuStack_190;
  puStack_1a0 = &UNK_10f63cc79;
  uStack_198 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
    }
    else {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
      if (*(short *)(param_2 + 0xc) == 0xc) {
        if (*(int *)(param_2 + 8) == 0x10) {
          return (long *)ppuVar2;
        }
        puStack_1a0 = &UNK_10f63ccae;
        uStack_198 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar2 = &puStack_1c0;
  uStack_1a8 = 0x10a10b1e0;
  pppuStack_1d0 = &pppuStack_1b0;
  puStack_1c0 = &UNK_10f63cc79;
  uStack_1b8 = 0x12;
  if (ppuVar1[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar1 + 0xc) == 0x18) {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
    }
    else {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
      if (*(short *)((long)ppuVar1 + 0xc) == 0x21) {
        if ((int)ppuVar1[1] == 0x20) {
          return (long *)ppuVar1;
        }
        puStack_1c0 = &UNK_10f63ccae;
        uStack_1b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1c0);
  ppuVar1 = &puStack_1e0;
  uStack_1c8 = 0x10a10b270;
  pppuStack_1f0 = &pppuStack_1d0;
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  puStack_1e0 = &UNK_10f63cc79;
  uStack_1d8 = 0x12;
  if (puVar4 != (undefined8 *)0x0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
    }
    else {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
      if (*(short *)(param_2 + 0xc) == 0xb) {
        if (*(int *)(param_2 + 8) == 0x40) {
          uVar5 = *puVar4;
          uVar7 = puVar4[3];
          uVar6 = puVar4[2];
          extraout_x8[1] = puVar4[1];
          *extraout_x8 = uVar5;
          extraout_x8[3] = uVar7;
          extraout_x8[2] = uVar6;
          uVar5 = puVar4[4];
          uVar7 = puVar4[7];
          uVar6 = puVar4[6];
          extraout_x8[5] = puVar4[5];
          extraout_x8[4] = uVar5;
          extraout_x8[7] = uVar7;
          extraout_x8[6] = uVar6;
          return (long *)ppuVar2;
        }
        puStack_1e0 = &UNK_10f63ccae;
        uStack_1d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1e0);
  ppuVar2 = &puStack_200;
  uStack_1e8 = 0x10a10b308;
  pppuStack_210 = &pppuStack_1f0;
  puStack_200 = &UNK_10f63cc79;
  uStack_1f8 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_200 = &UNK_10f63cc8c;
      uStack_1f8 = 0x21;
    }
    else {
      puStack_200 = &UNK_10f63cc8c;
      uStack_1f8 = 0x21;
      if (*(short *)(param_2 + 0xc) == 0x16) {
        if (*(int *)(param_2 + 8) == 0x10) {
          return (long *)ppuVar1;
        }
        puStack_200 = &UNK_10f63ccae;
        uStack_1f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_200);
  ppuVar1 = &puStack_220;
  uStack_208 = 0x10a10b398;
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  puStack_220 = &UNK_10f63cc79;
  uStack_218 = 0x12;
  if (puVar4 != (undefined8 *)0x0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_220 = &UNK_10f63cc8c;
      uStack_218 = 0x21;
    }
    else {
      puStack_220 = &UNK_10f63cc8c;
      uStack_218 = 0x21;
      if (*(short *)(param_2 + 0xc) == 10) {
        if (*(int *)(param_2 + 8) == 0x24) {
          uVar5 = *puVar4;
          uVar7 = puVar4[3];
          uVar6 = puVar4[2];
          extraout_x8_00[1] = puVar4[1];
          *extraout_x8_00 = uVar5;
          extraout_x8_00[3] = uVar7;
          extraout_x8_00[2] = uVar6;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar4 + 4);
          return (long *)ppuVar2;
        }
        puStack_220 = &UNK_10f63ccae;
        uStack_218 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar3 = (long)*ppuVar1;
  *ppuVar1 = (undefined *)0x0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar1;
}



/* Entry: 10a10b430; end: 10a10b4ab;  */

long * FUN_10a10b430(long *param_1)

{
  long lVar1;
  
  func_0x00010a10b468(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a10b4ac; end: 10a10b57b;  */

void FUN_10a10b4ac(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x24;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar10 = param_1[1];
  if (param_2 <= uVar10) {
    if (param_2 < uVar10) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar10) goto LAB_10a10b4f4;
    }
    return;
  }
LAB_10a10b4f4:
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      plVar7 = param_1;
      func_0x000107c2b05c();
      plVar8 = (long *)param_1[1];
      if (plVar8 != (long *)0x0) {
        uVar10 = (long)plVar8 - 1;
        if (((ulong)plVar8 & uVar10) == 0) {
          unaff_x24 = (long *)(uVar10 & (ulong)plVar7);
        }
        else {
          unaff_x24 = plVar7;
          if (plVar8 <= plVar7) {
            uVar4 = 0;
            if (plVar8 != (long *)0x0) {
              uVar4 = (ulong)plVar7 / (ulong)plVar8;
            }
            unaff_x24 = (long *)((long)plVar7 - uVar4 * (long)plVar8);
          }
        }
        plVar5 = *(long **)(*param_1 + (long)unaff_x24 * 8);
        if (plVar5 != (long *)0x0) {
          for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
            plVar6 = (long *)plVar5[1];
            if (plVar6 == plVar7) {
              plVar6 = param_1;
              func_0x000107c2b068(param_1,plVar5 + 2,param_2);
              if (((ulong)plVar6 & 1) != 0) {
                return;
              }
            }
            else {
              if (((ulong)plVar8 & uVar10) == 0) {
                plVar6 = (long *)((ulong)plVar6 & uVar10);
              }
              else if (plVar8 <= plVar6) {
                uVar4 = 0;
                if (plVar8 != (long *)0x0) {
                  uVar4 = (ulong)plVar6 / (ulong)plVar8;
                }
                plVar6 = (long *)((long)plVar6 - uVar4 * (long)plVar8);
              }
              if (plVar6 != unaff_x24) break;
            }
          }
        }
      }
      plVar5 = (long *)0x30;
      __Znwm();
      *plVar5 = 0;
      plVar5[1] = (long)plVar7;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(plVar5 + 2,*param_3,param_3[1]);
      }
      else {
        lVar2 = *param_3;
        plVar5[3] = param_3[1];
        plVar5[2] = lVar2;
        plVar5[4] = param_3[2];
      }
      *(int *)(plVar5 + 5) = (int)param_3[3];
      if ((plVar8 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))) {
        uVar10 = 1;
        if ((long *)0x2 < plVar8) {
          uVar10 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
        }
        uVar10 = uVar10 | (long)plVar8 << 1;
        uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar10 <= uVar4) {
          uVar10 = uVar4;
        }
        FUN_10a10b4ac(param_1,uVar10);
        plVar8 = (long *)param_1[1];
        if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
          unaff_x24 = (long *)((long)plVar8 - 1U & (ulong)plVar7);
        }
        else {
          unaff_x24 = plVar7;
          if (plVar8 <= plVar7) {
            uVar10 = 0;
            if (plVar8 != (long *)0x0) {
              uVar10 = (ulong)plVar7 / (ulong)plVar8;
            }
            unaff_x24 = (long *)((long)plVar7 - uVar10 * (long)plVar8);
          }
        }
      }
      lVar2 = *param_1;
      plVar7 = *(long **)(lVar2 + (long)unaff_x24 * 8);
      if (plVar7 == (long *)0x0) {
        plVar7 = param_1 + 2;
        *plVar5 = *plVar7;
        *plVar7 = (long)plVar5;
        *(long **)(lVar2 + (long)unaff_x24 * 8) = plVar7;
        if (*plVar5 != 0) {
          plVar7 = *(long **)(*plVar5 + 8);
          if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
            plVar7 = (long *)((ulong)plVar7 & (long)plVar8 - 1U);
          }
          else if (plVar8 <= plVar7) {
            uVar10 = 0;
            if (plVar8 != (long *)0x0) {
              uVar10 = (ulong)plVar7 / (ulong)plVar8;
            }
            plVar7 = (long *)((long)plVar7 - uVar10 * (long)plVar8);
          }
          *(long **)(*param_1 + (long)plVar7 * 8) = plVar5;
        }
      }
      else {
        *plVar5 = *plVar7;
        *plVar7 = (long)plVar5;
      }
      param_1[3] = param_1[3] + 1;
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar10 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
      uVar10 = uVar10 + 1;
    } while (param_2 != uVar10);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar10 = plVar7[1];
      uVar4 = param_2 - 1;
      if ((param_2 & uVar4) == 0) {
        uVar10 = uVar10 & uVar4;
      }
      else if (param_2 <= uVar10) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar10 / param_2;
        }
        uVar10 = uVar10 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar7;
      while (plVar8 != (long *)0x0) {
        uVar9 = plVar8[1];
        if ((param_2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar5 = plVar8;
        if (uVar9 != uVar10) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar7;
            uVar10 = uVar9;
          }
          else {
            *plVar7 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar8;
            plVar5 = plVar7;
          }
        }
        plVar7 = plVar5;
        plVar8 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 10a10b57c; end: 10a10b6b7;  */

void FUN_10a10b57c(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *unaff_x24;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      plVar8 = param_1;
      func_0x000107c2b05c();
      plVar9 = (long *)param_1[1];
      if (plVar9 != (long *)0x0) {
        uVar4 = (long)plVar9 - 1;
        if (((ulong)plVar9 & uVar4) == 0) {
          unaff_x24 = (long *)(uVar4 & (ulong)plVar8);
        }
        else {
          unaff_x24 = plVar8;
          if (plVar9 <= plVar8) {
            uVar5 = 0;
            if (plVar9 != (long *)0x0) {
              uVar5 = (ulong)plVar8 / (ulong)plVar9;
            }
            unaff_x24 = (long *)((long)plVar8 - uVar5 * (long)plVar9);
          }
        }
        plVar6 = *(long **)(*param_1 + (long)unaff_x24 * 8);
        if (plVar6 != (long *)0x0) {
          for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            plVar7 = (long *)plVar6[1];
            if (plVar7 == plVar8) {
              plVar7 = param_1;
              func_0x000107c2b068(param_1,plVar6 + 2,param_2);
              if (((ulong)plVar7 & 1) != 0) {
                return;
              }
            }
            else {
              if (((ulong)plVar9 & uVar4) == 0) {
                plVar7 = (long *)((ulong)plVar7 & uVar4);
              }
              else if (plVar9 <= plVar7) {
                uVar5 = 0;
                if (plVar9 != (long *)0x0) {
                  uVar5 = (ulong)plVar7 / (ulong)plVar9;
                }
                plVar7 = (long *)((long)plVar7 - uVar5 * (long)plVar9);
              }
              if (plVar7 != unaff_x24) break;
            }
          }
        }
      }
      plVar6 = (long *)0x30;
      __Znwm();
      *plVar6 = 0;
      plVar6[1] = (long)plVar8;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(plVar6 + 2,*param_3,param_3[1]);
      }
      else {
        lVar2 = *param_3;
        plVar6[3] = param_3[1];
        plVar6[2] = lVar2;
        plVar6[4] = param_3[2];
      }
      *(int *)(plVar6 + 5) = (int)param_3[3];
      if ((plVar9 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))) {
        uVar4 = 1;
        if ((long *)0x2 < plVar9) {
          uVar4 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
        }
        uVar4 = uVar4 | (long)plVar9 << 1;
        uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar4 <= uVar5) {
          uVar4 = uVar5;
        }
        FUN_10a10b4ac(param_1,uVar4);
        plVar9 = (long *)param_1[1];
        if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
          unaff_x24 = (long *)((long)plVar9 - 1U & (ulong)plVar8);
        }
        else {
          unaff_x24 = plVar8;
          if (plVar9 <= plVar8) {
            uVar4 = 0;
            if (plVar9 != (long *)0x0) {
              uVar4 = (ulong)plVar8 / (ulong)plVar9;
            }
            unaff_x24 = (long *)((long)plVar8 - uVar4 * (long)plVar9);
          }
        }
      }
      lVar2 = *param_1;
      plVar8 = *(long **)(lVar2 + (long)unaff_x24 * 8);
      if (plVar8 == (long *)0x0) {
        plVar8 = param_1 + 2;
        *plVar6 = *plVar8;
        *plVar8 = (long)plVar6;
        *(long **)(lVar2 + (long)unaff_x24 * 8) = plVar8;
        if (*plVar6 != 0) {
          plVar8 = *(long **)(*plVar6 + 8);
          if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
            plVar8 = (long *)((ulong)plVar8 & (long)plVar9 - 1U);
          }
          else if (plVar9 <= plVar8) {
            uVar4 = 0;
            if (plVar9 != (long *)0x0) {
              uVar4 = (ulong)plVar8 / (ulong)plVar9;
            }
            plVar8 = (long *)((long)plVar8 - uVar4 * (long)plVar9);
          }
          *(long **)(*param_1 + (long)plVar8 * 8) = plVar6;
        }
      }
      else {
        *plVar6 = *plVar8;
        *plVar8 = (long)plVar6;
      }
      param_1[3] = param_1[3] + 1;
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar4 = plVar8[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar8;
      while (plVar9 != (long *)0x0) {
        uVar10 = plVar9[1];
        if ((param_2 & uVar5) == 0) {
          uVar10 = uVar10 & uVar5;
        }
        else if (param_2 <= uVar10) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar1 * param_2;
        }
        plVar6 = plVar9;
        if (uVar10 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar10 * 8) == 0) {
            *(long **)(lVar2 + uVar10 * 8) = plVar8;
            uVar4 = uVar10;
          }
          else {
            *plVar8 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + uVar10 * 8);
            **(long **)(lVar2 + uVar10 * 8) = (long)plVar9;
            plVar6 = plVar8;
          }
        }
        plVar8 = plVar6;
        plVar9 = (long *)*plVar6;
      }
    }
  }
  return;
}



/* Entry: 10a10b6b8; end: 10a10b933;  */

void FUN_10a10b6b8(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_x24;
  ulong uVar7;
  
  plVar5 = param_1;
  func_0x000107c2b05c();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x24 = (long *)(uVar7 & (ulong)plVar5);
    }
    else {
      unaff_x24 = plVar5;
      if (plVar6 <= plVar5) {
        uVar4 = 0;
        if (plVar6 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)plVar5 - uVar4 * (long)plVar6);
      }
    }
    plVar1 = *(long **)(*param_1 + (long)unaff_x24 * 8);
    if (plVar1 != (long *)0x0) {
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        plVar2 = (long *)plVar1[1];
        if (plVar2 == plVar5) {
          plVar2 = param_1;
          func_0x000107c2b068(param_1,plVar1 + 2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            return;
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar2 = (long *)((ulong)plVar2 & uVar7);
          }
          else if (plVar6 <= plVar2) {
            uVar4 = 0;
            if (plVar6 != (long *)0x0) {
              uVar4 = (ulong)plVar2 / (ulong)plVar6;
            }
            plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar6);
          }
          if (plVar2 != unaff_x24) break;
        }
      }
    }
  }
  plVar1 = (long *)0x30;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = (long)plVar5;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar1 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar1[3] = param_3[1];
    plVar1[2] = lVar3;
    plVar1[4] = param_3[2];
  }
  *(int *)(plVar1 + 5) = (int)param_3[3];
  if ((plVar6 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))
     ) {
    uVar7 = 1;
    if ((long *)0x2 < plVar6) {
      uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    uVar7 = uVar7 | (long)plVar6 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    FUN_10a10b4ac(param_1,uVar7);
    plVar6 = (long *)param_1[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar6 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x24 = plVar5;
      if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
    }
  }
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
    *(long **)(lVar3 + (long)unaff_x24 * 8) = plVar5;
    if (*plVar1 != 0) {
      plVar5 = *(long **)(*plVar1 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = plVar1;
    }
  }
  else {
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a10b934; end: 10a10b983;  */

void FUN_10a10b934(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(char *)(param_2 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x10));
    }
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a10b984; end: 10a10b9d7;  */

uint FUN_10a10b984(long *param_1,long *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = param_1[1] - *param_1;
  lVar5 = param_2[1] - *param_2;
  lVar6 = lVar5;
  if (lVar4 <= lVar5) {
    lVar6 = lVar4;
  }
  pbVar2 = (byte *)*param_1;
  pbVar3 = (byte *)*param_2;
  if (0 < lVar6) {
    do {
      if (*pbVar2 != *pbVar3) {
        uVar1 = 1;
        if (*pbVar2 < *pbVar3) {
          uVar1 = 0xffffffff;
        }
        return uVar1;
      }
      lVar6 = lVar6 + -1;
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar3 + 1;
    } while (lVar6 != 0);
  }
  uVar1 = (uint)(lVar5 < lVar4);
  if (lVar4 < lVar5) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


