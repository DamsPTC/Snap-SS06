/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109f5f2f0; end: 109f5f407;  */

void FUN_109f5f2f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((ulong)param_2 >> 0x3a != 0) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_4[2] = puVar1[2];
        param_4[1] = uVar3;
        *param_4 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        *(undefined4 *)(param_4 + 4) = *(undefined4 *)(puVar1 + 4);
        param_4[3] = uVar2;
        param_4[6] = 0;
        param_4[7] = 0;
        param_4[5] = 0;
        uVar2 = puVar1[5];
        param_4[6] = puVar1[6];
        param_4[5] = uVar2;
        param_4[7] = puVar1[7];
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1 = puVar1 + 8;
        param_4 = param_4 + 8;
      } while (puVar1 != param_3);
      do {
        FUN_109f5a474(param_2);
        param_2 = param_2 + 8;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 << 6);
  return;
}



/* Entry: 109f5f408; end: 109f5f46b;  */

void FUN_109f5f408(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x40;
        FUN_109f5a474(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 109f5f46c; end: 109f5f47f;  */

void FUN_109f5f46c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3b != 0) {
    func_0x000104c4f740();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        puStack_58[3] = puVar2[3];
        puVar2 = puVar2 + 4;
        puStack_58 = puStack_58 + 4;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
    FUN_109f5f56c(&puStack_80);
    return;
  }
  __Znwm((long)param_2 << 5);
  return;
}



/* Entry: 109f5f480; end: 109f5f56b;  */

void FUN_109f5f480(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  
  if ((ulong)param_2 >> 0x3b != 0) {
    func_0x000104c4f740();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        puStack_48[3] = puVar1[3];
        puVar1 = puVar1 + 4;
        puStack_48 = puStack_48 + 4;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
    FUN_109f5f56c(&uStack_70);
    return;
  }
  __Znwm((long)param_2 << 5);
  return;
}



/* Entry: 109f5f56c; end: 109f5f59f;  */

long FUN_109f5f56c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_109f5f5a0(param_1);
  }
  return param_1;
}



/* Entry: 109f5f5a0; end: 109f5f6a3;  */

/* WARNING: Removing unreachable block (ram,0x000109f5f5cc) */

void FUN_109f5f5a0(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x20
      ) {
  }
  return;
}



/* Entry: 109f5f6a4; end: 109f5f6b7;  */

void FUN_109f5f6a4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3b != 0) {
    func_0x000104c4f740();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        puStack_58[3] = puVar2[3];
        puVar2 = puVar2 + 4;
        puStack_58 = puStack_58 + 4;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
    FUN_109f5f7a4(&puStack_80);
    return;
  }
  __Znwm((long)param_2 << 5);
  return;
}



/* Entry: 109f5f6b8; end: 109f5f7a3;  */

void FUN_109f5f6b8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  
  if ((ulong)param_2 >> 0x3b != 0) {
    func_0x000104c4f740();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        puStack_48[3] = puVar1[3];
        puVar1 = puVar1 + 4;
        puStack_48 = puStack_48 + 4;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
    FUN_109f5f7a4(&uStack_70);
    return;
  }
  __Znwm((long)param_2 << 5);
  return;
}



/* Entry: 109f5f7a4; end: 109f5f7d7;  */

long FUN_109f5f7a4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_109f5f7d8(param_1);
  }
  return param_1;
}



/* Entry: 109f5f7d8; end: 109f5f8a3;  */

/* WARNING: Removing unreachable block (ram,0x000109f5f804) */

void FUN_109f5f7d8(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x20
      ) {
  }
  return;
}



/* Entry: 109f5f8a4; end: 109f5fc5b;  */

void FUN_109f5f8a4(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  long lVar6;
  
  if ((bRam00000001137e7d08 & 1) == 0) {
    iVar1 = 0x137e7d08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001137e8108 = 0;
      puRam00000001137e8118 = (undefined *)0x0;
      uRam00000001137e8110 = 3;
      puVar3 = &DAT_10f61d667;
      FUN_109f4f5c0();
      uRam00000001137e8120 = 1;
      puRam00000001137e8130 = (undefined *)0x0;
      uRam00000001137e8128 = 3;
      puVar4 = &UNK_10f61d751;
      puRam00000001137e8118 = puVar3;
      FUN_109f4f5c0();
      uRam00000001137e8138 = 2;
      puRam00000001137e8148 = (undefined *)0x0;
      uRam00000001137e8140 = 3;
      puVar3 = &UNK_10f55f5d4;
      puRam00000001137e8130 = puVar4;
      FUN_109f4f5c0();
      uRam00000001137e8150 = 3;
      puRam00000001137e8160 = (undefined *)0x0;
      uRam00000001137e8158 = 3;
      puVar4 = &UNK_10f61d75b;
      puRam00000001137e8148 = puVar3;
      FUN_109f4eccc();
      uRam00000001137e8168 = 4;
      puRam00000001137e8178 = (undefined *)0x0;
      uRam00000001137e8170 = 3;
      puVar3 = &UNK_10f55f5ed;
      puRam00000001137e8160 = puVar4;
      FUN_109f4f5c0();
      uRam00000001137e8180 = 5;
      puRam00000001137e8190 = (undefined *)0x0;
      uRam00000001137e8188 = 3;
      puVar4 = &UNK_10f61d767;
      puRam00000001137e8178 = puVar3;
      FUN_109f4ebd4();
      uRam00000001137e8198 = 6;
      puRam00000001137e81a8 = (undefined *)0x0;
      uRam00000001137e81a0 = 3;
      puVar3 = &UNK_10f55f5de;
      puRam00000001137e8190 = puVar4;
      FUN_109f4ebd4();
      uRam00000001137e81b0 = 7;
      puRam00000001137e81c0 = (undefined *)0x0;
      uRam00000001137e81b8 = 3;
      puVar4 = &UNK_10f61d776;
      puRam00000001137e81a8 = puVar3;
      FUN_109f50878();
      uRam00000001137e81c8 = 8;
      puRam00000001137e81d8 = (undefined *)0x0;
      uRam00000001137e81d0 = 3;
      puVar3 = &UNK_10f61d787;
      puRam00000001137e81c0 = puVar4;
      FUN_109f4eccc();
      uRam00000001137e81e0 = 9;
      puRam00000001137e81f0 = (undefined *)0x0;
      uRam00000001137e81e8 = 3;
      puVar4 = &UNK_10f61d793;
      puRam00000001137e81d8 = puVar3;
      FUN_109f50878();
      uRam00000001137e81f8 = 10;
      puRam00000001137e8208 = (undefined *)0x0;
      uRam00000001137e8200 = 3;
      puVar3 = &UNK_10f61d7a4;
      puRam00000001137e81f0 = puVar4;
      FUN_109f50438();
      uRam00000001137e8210 = 0xb;
      puRam00000001137e8220 = (undefined *)0x0;
      uRam00000001137e8218 = 3;
      puVar4 = &UNK_10f55f6a1;
      puRam00000001137e8208 = puVar3;
      FUN_109f508c0();
      uRam00000001137e8228 = 0xc;
      puRam00000001137e8238 = (undefined *)0x0;
      uRam00000001137e8230 = 3;
      puVar3 = &DAT_10f517cd7;
      puRam00000001137e8220 = puVar4;
      FUN_109f4fe58();
      puRam00000001137e8238 = puVar3;
      ___cxa_atexit(0x109f61040,0,0x100000000);
      ___cxa_guard_release(0x1137e7d08);
    }
  }
  puVar5 = (undefined4 *)0x1137e8108;
  lVar6 = 0x138;
  do {
    puVar2 = puVar5 + 2;
    FUN_109f5ef34(puVar2,param_1);
    if (((ulong)puVar2 & 1) != 0) {
      if (lVar6 != 0) goto LAB_109f5f908;
      break;
    }
    puVar5 = puVar5 + 6;
    lVar6 = lVar6 + -0x18;
  } while (lVar6 != 0);
  puVar5 = (undefined4 *)0x1137e8108;
LAB_109f5f908:
  *param_2 = *puVar5;
  return;
}



/* Entry: 109f5fc5c; end: 109f5fc93;  */

void FUN_109f5fc5c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_109f5a32c();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 109f5fc94; end: 109f5fca7;  */

void FUN_109f5fc94(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar3 = puVar2[3];
        *(undefined4 *)(puStack_58 + 4) = *(undefined4 *)(puVar2 + 4);
        puStack_58[3] = uVar3;
        puVar2 = puVar2 + 5;
        puStack_58 = puStack_58 + 5;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_109f5fdac(&puStack_80);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 109f5fca8; end: 109f5fdab;  */

void FUN_109f5fca8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        *(undefined4 *)(puStack_48 + 4) = *(undefined4 *)(puVar1 + 4);
        puStack_48[3] = uVar2;
        puVar1 = puVar1 + 5;
        puStack_48 = puStack_48 + 5;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_109f5fdac(&uStack_70);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 109f5fdac; end: 109f5fddf;  */

long FUN_109f5fdac(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_109f5fde0(param_1);
  }
  return param_1;
}



/* Entry: 109f5fde0; end: 109f5fee3;  */

/* WARNING: Removing unreachable block (ram,0x000109f5fe0c) */

void FUN_109f5fde0(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x28
      ) {
  }
  return;
}



/* Entry: 109f5fee4; end: 109f5fef7;  */

void FUN_109f5fee4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3b != 0) {
    func_0x000104c4f740();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        puStack_58[3] = puVar2[3];
        puVar2 = puVar2 + 4;
        puStack_58 = puStack_58 + 4;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
    FUN_109f5ffe4(&puStack_80);
    return;
  }
  __Znwm((long)param_2 << 5);
  return;
}



/* Entry: 109f5fef8; end: 109f5ffe3;  */

void FUN_109f5fef8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  
  if ((ulong)param_2 >> 0x3b != 0) {
    func_0x000104c4f740();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        puStack_48[3] = puVar1[3];
        puVar1 = puVar1 + 4;
        puStack_48 = puStack_48 + 4;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
    FUN_109f5ffe4(&uStack_70);
    return;
  }
  __Znwm((long)param_2 << 5);
  return;
}



/* Entry: 109f5ffe4; end: 109f60017;  */

long FUN_109f5ffe4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_109f60018(param_1);
  }
  return param_1;
}



/* Entry: 109f60018; end: 109f6011b;  */

/* WARNING: Removing unreachable block (ram,0x000109f60044) */

void FUN_109f60018(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x20
      ) {
  }
  return;
}



/* Entry: 109f6011c; end: 109f601ef;  */

void FUN_109f6011c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x98;
        FUN_109f5a0c8(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 109f601f0; end: 109f602c7;  */

/* WARNING: Possible PIC construction at 0x000109f60278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109f6027c) */

void FUN_109f601f0(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *unaff_x20;
  undefined1 **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_c8 [56];
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  puVar1 = auStack_60;
  ppuVar7 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar4 = *param_1;
  if (param_2 <= (undefined8 *)((param_1[2] - lVar4 >> 3) * -0x3333333333333333)) {
    return;
  }
  if (param_2 < (undefined8 *)0x666666666666667) {
    lVar6 = param_1[1];
    plVar2 = param_1;
    plStack_38 = param_1;
    FUN_109f602dc();
    lStack_50 = (long)plVar2 + (lVar6 - lVar4);
    plStack_40 = plVar2 + (long)param_2 * 5;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)param_2 + (lStack_50 - (long)param_3));
    uVar8 = 0x109f6027c;
    plVar3 = param_1;
    unaff_x20 = param_4;
    plStack_58 = plVar2;
    lStack_48 = lStack_50;
  }
  else {
    FUN_109f602c8();
    func_0x000109f60458(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_109f602c8;
    plVar3 = (long *)&DAT_10f62a4d8;
    ppuStack_70 = ppuVar7;
    func_0x000104c4f6cc();
    puVar1 = &stack0xffffffffffffff70;
    pcStack_78 = FUN_109f602dc;
    ppuVar7 = &puStack_80;
    if (param_2 < (undefined8 *)0x666666666666667) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)param_2 * 0x28);
      return;
    }
    uVar8 = 0x109f60320;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000104c4f740();
  }
  *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined1 ***)(puVar1 + -0x10) = ppuVar7;
  *(undefined8 *)(puVar1 + -8) = uVar8;
  *(undefined8 **)(puVar1 + -0x28) = param_4;
  *(undefined8 **)(puVar1 + -0x30) = param_4;
  *(long **)(puVar1 + -0x50) = plVar3;
  *(undefined1 **)(puVar1 + -0x48) = puVar1 + -0x30;
  *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x28;
  puVar5 = param_2;
  if (param_2 == param_3) {
    puVar1[-0x38] = 1;
  }
  else {
    do {
      uVar9 = puVar5[1];
      uVar8 = *puVar5;
      param_4[2] = puVar5[2];
      param_4[1] = uVar9;
      *param_4 = uVar8;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      uVar8 = puVar5[3];
      *(undefined4 *)(param_4 + 4) = *(undefined4 *)(puVar5 + 4);
      param_4[3] = uVar8;
      puVar5 = puVar5 + 5;
      param_4 = param_4 + 5;
    } while (puVar5 != param_3);
    *(undefined8 **)(puVar1 + -0x28) = param_4;
    puVar1[-0x38] = 1;
    do {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __ZdlPv(*param_2);
      }
      param_2 = param_2 + 5;
    } while (param_2 != param_3);
  }
  FUN_109f603e0(puVar1 + -0x50);
  return;
}



/* Entry: 109f602c8; end: 109f602db;  */

void FUN_109f602c8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar3 = puVar2[3];
        *(undefined4 *)(puStack_58 + 4) = *(undefined4 *)(puVar2 + 4);
        puStack_58[3] = uVar3;
        puVar2 = puVar2 + 5;
        puStack_58 = puStack_58 + 5;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_109f603e0(&puStack_80);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 109f602dc; end: 109f603df;  */

void FUN_109f602dc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        *(undefined4 *)(puStack_48 + 4) = *(undefined4 *)(puVar1 + 4);
        puStack_48[3] = uVar2;
        puVar1 = puVar1 + 5;
        puStack_48 = puStack_48 + 5;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_109f603e0(&uStack_70);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 109f603e0; end: 109f60413;  */

long FUN_109f603e0(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_109f60414(param_1);
  }
  return param_1;
}



/* Entry: 109f60414; end: 109f60517;  */

/* WARNING: Removing unreachable block (ram,0x000109f60440) */

void FUN_109f60414(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x28
      ) {
  }
  return;
}



/* Entry: 109f60518; end: 109f60563;  */

/* WARNING: Removing unreachable block (ram,0x000109f60544) */

void FUN_109f60518(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 109f60564; end: 109f605a3;  */

void FUN_109f60564(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_109f60518();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 109f605a4; end: 109f6065b;  */

/* WARNING: Possible PIC construction at 0x000109f6060c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109f60610) */

void FUN_109f605a4(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *unaff_x20;
  undefined1 **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_c8 [56];
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  puVar1 = auStack_60;
  ppuVar7 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar4 = *param_1;
  if (param_2 <= (undefined8 *)(param_1[2] - lVar4 >> 5)) {
    return;
  }
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar6 = param_1[1];
    plVar2 = param_1;
    plStack_38 = param_1;
    FUN_109f60670();
    lStack_50 = (long)plVar2 + (lVar6 - lVar4);
    plStack_40 = plVar2 + (long)param_2 * 4;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)param_2 + (lStack_50 - (long)param_3));
    uVar8 = 0x109f60610;
    plVar3 = param_1;
    unaff_x20 = param_4;
    plStack_58 = plVar2;
    lStack_48 = lStack_50;
  }
  else {
    FUN_109f6065c();
    func_0x000109f607d4(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_109f6065c;
    plVar3 = (long *)&DAT_10f62a4d8;
    ppuStack_70 = ppuVar7;
    func_0x000104c4f6cc();
    puVar1 = &stack0xffffffffffffff70;
    pcStack_78 = FUN_109f60670;
    ppuVar7 = &puStack_80;
    if ((ulong)param_2 >> 0x3b == 0) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)param_2 << 5);
      return;
    }
    uVar8 = 0x109f606a4;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000104c4f740();
  }
  *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined1 ***)(puVar1 + -0x10) = ppuVar7;
  *(undefined8 *)(puVar1 + -8) = uVar8;
  *(undefined8 **)(puVar1 + -0x28) = param_4;
  *(undefined8 **)(puVar1 + -0x30) = param_4;
  *(long **)(puVar1 + -0x50) = plVar3;
  *(undefined1 **)(puVar1 + -0x48) = puVar1 + -0x30;
  *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x28;
  puVar5 = param_2;
  if (param_2 == param_3) {
    puVar1[-0x38] = 1;
  }
  else {
    do {
      uVar9 = puVar5[1];
      uVar8 = *puVar5;
      param_4[2] = puVar5[2];
      param_4[1] = uVar9;
      *param_4 = uVar8;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      param_4[3] = puVar5[3];
      puVar5 = puVar5 + 4;
      param_4 = param_4 + 4;
    } while (puVar5 != param_3);
    *(undefined8 **)(puVar1 + -0x28) = param_4;
    puVar1[-0x38] = 1;
    do {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __ZdlPv(*param_2);
      }
      param_2 = param_2 + 4;
    } while (param_2 != param_3);
  }
  FUN_109f6075c(puVar1 + -0x50);
  return;
}



/* Entry: 109f6065c; end: 109f6066f;  */

void FUN_109f6065c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3b != 0) {
    func_0x000104c4f740();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        puStack_58[3] = puVar2[3];
        puVar2 = puVar2 + 4;
        puStack_58 = puStack_58 + 4;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
    FUN_109f6075c(&puStack_80);
    return;
  }
  __Znwm((long)param_2 << 5);
  return;
}



/* Entry: 109f60670; end: 109f6075b;  */

void FUN_109f60670(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  
  if ((ulong)param_2 >> 0x3b != 0) {
    func_0x000104c4f740();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        puStack_48[3] = puVar1[3];
        puVar1 = puVar1 + 4;
        puStack_48 = puStack_48 + 4;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
    FUN_109f6075c(&uStack_70);
    return;
  }
  __Znwm((long)param_2 << 5);
  return;
}



/* Entry: 109f6075c; end: 109f6078f;  */

long FUN_109f6075c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_109f60790(param_1);
  }
  return param_1;
}



/* Entry: 109f60790; end: 109f60893;  */

/* WARNING: Removing unreachable block (ram,0x000109f607bc) */

void FUN_109f60790(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x20
      ) {
  }
  return;
}



/* Entry: 109f60894; end: 109f608df;  */

/* WARNING: Removing unreachable block (ram,0x000109f608c0) */

void FUN_109f60894(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x20) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 109f608e0; end: 109f6091f;  */

void FUN_109f608e0(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_109f60894();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 109f60920; end: 109f60933;  */

undefined1  [16] FUN_109f60920(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  pcVar2 = "vector";
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar3 = param_2 << 4;
    __Znwm(lVar3);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000104c4f740();
  if (*pcVar2 == '\x02') {
    lVar3 = **(long **)(pcVar2 + 8);
    if (param_2 < (ulong)((*(long **)(pcVar2 + 8))[1] - lVar3 >> 4)) {
      auVar6._8_8_ = param_2;
      auVar6._0_8_ = lVar3 + param_2 * 0x10;
      return auVar6;
    }
    FUN_109f60b84();
  }
  else {
    uVar4 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_109f51088(pcVar2);
    func_0x000107c31940(auStack_90,pcVar2);
    func_0x00010928a5e0(auStack_78,&UNK_10f56caf4,auStack_90);
    func_0x00010937bbbc(uVar4,0x130,auStack_78);
    ___cxa_throw(uVar4,&PTR_DAT_110af4510,&DAT_10937bd14);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109f60ab4);
  (*pcVar1)();
}



/* Entry: 109f60934; end: 109f60967;  */

undefined1  [16] FUN_109f60934(char *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  if (*param_1 == '\x02') {
    lVar2 = **(long **)(param_1 + 8);
    if (param_2 < (ulong)((*(long **)(param_1 + 8))[1] - lVar2 >> 4)) {
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = lVar2 + param_2 * 0x10;
      return auVar5;
    }
    FUN_109f60b84();
  }
  else {
    uVar3 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_109f51088(param_1);
    func_0x000107c31940(auStack_80,param_1);
    func_0x00010928a5e0(auStack_68,&UNK_10f56caf4,auStack_80);
    func_0x00010937bbbc(uVar3,0x130,auStack_68);
    ___cxa_throw(uVar3,&PTR_DAT_110af4510,&DAT_10937bd14);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109f60ab4);
  (*pcVar1)();
}



/* Entry: 109f60968; end: 109f60b83;  */

long FUN_109f60968(char *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*param_1 == '\x02') {
    lVar1 = **(long **)(param_1 + 8);
    if (param_2 < (ulong)((*(long **)(param_1 + 8))[1] - lVar1 >> 4)) {
      return lVar1 + param_2 * 0x10;
    }
    FUN_109f60b84();
  }
  else {
    uVar3 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_109f51088(param_1);
    func_0x000107c31940(auStack_60,param_1);
    func_0x00010928a5e0(auStack_48,&UNK_10f56caf4,auStack_60);
    func_0x00010937bbbc(uVar3,0x130,auStack_48);
    ___cxa_throw(uVar3,&PTR_DAT_110af4510,&DAT_10937bd14);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109f60ab4);
  (*pcVar2)();
}



/* Entry: 109f60b84; end: 109f60b97;  */

void FUN_109f60b84(void)

{
  undefined *puVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000109262df8(&DAT_10f62a4d8);
  func_0x000107c31940(auStack_48,&UNK_10f61d91f);
  FUN_109f59c90(puVar1,auStack_48);
  FUN_109f5da58();
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  func_0x000107c31940(auStack_48,&DAT_10f491dce);
  FUN_109f59c90(puVar1,auStack_48);
  FUN_109f5da58();
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 109f60b98; end: 109f60c47;  */

void FUN_109f60b98(undefined8 param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c31940(auStack_38,&UNK_10f61d91f);
  FUN_109f59c90(param_1,auStack_38);
  FUN_109f5da58();
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  func_0x000107c31940(auStack_38,&DAT_10f491dce);
  FUN_109f59c90(param_1,auStack_38);
  FUN_109f5da58();
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 109f60c48; end: 109f60cff;  */

void FUN_109f60c48(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar2 = *param_1;
  if ((ulong)((param_1[2] - lVar2 >> 4) * -0x5555555555555555) < param_2) {
    if (0x555555555555555 < param_2) {
      func_0x0001092d32dc();
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_109f5dcc0(param_2,param_1);
      return;
    }
    lVar3 = param_1[1];
    plVar1 = param_1;
    plStack_38 = param_1;
    func_0x0001092d32f0();
    lVar2 = (long)plVar1 + (lVar3 - lVar2);
    lVar3 = lVar2 - (param_1[1] - *param_1);
    _memcpy(lVar3);
    lStack_58 = *param_1;
    *param_1 = lVar3;
    param_1[1] = lVar2;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar1 + param_2 * 6);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x000107c31958(&lStack_58);
  }
  return;
}



/* Entry: 109f60d00; end: 109f60d4b;  */

void FUN_109f60d00(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_109f5dcc0(param_2,param_1);
  return;
}



/* Entry: 109f60d4c; end: 109f60dbf;  */

undefined8 * FUN_109f60d4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  *(undefined1 *)((long)param_2 + 0x2f) = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  return param_1;
}



/* Entry: 109f60dc0; end: 109f60e23;  */

void FUN_109f60dc0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x30;
        func_0x0001092d2e0c(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 109f60e24; end: 109f6116b;  */

void FUN_109f60e24(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x1137e87f0;
  lVar2 = -0x318;
  do {
    FUN_109f49928(lVar1,*(undefined1 *)(lVar1 + -8));
    lVar1 = lVar1 + -0x18;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0);
  return;
}



/* Entry: 109f6116c; end: 109f611bf;  */

undefined * FUN_109f6116c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
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
  
  FUN_10ae030a0(0,param_1);
  ppuVar6 = &PTR_PTR_1132ff328;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
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
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 109f611c0; end: 109f612ff;  */

void FUN_109f611c0(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar1 = param_1[3];
  uVar8 = uVar1 + param_3 * 4;
  uVar2 = *param_1;
  if (((char)param_1[9] == '\x01') && (uVar2 < param_1[2] + param_2 || param_1[1] < uVar8)) {
    lVar5 = 0;
    FUN_109ec5bd4(0,&UNK_10f620b54);
    _abort();
    if (*(int *)(lVar5 + 8) != 0) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        _free(*(undefined8 *)(*(long *)(lVar5 + 0x10) + lVar6));
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar7 < *(uint *)(lVar5 + 8));
    }
    _free(*(undefined8 *)(lVar5 + 0x10));
    if (*(long *)(lVar5 + 0x18) != 0) {
      _free(*(undefined8 *)(*(long *)(lVar5 + 0x18) + -8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(lVar5);
    return;
  }
  if (uVar2 < param_1[2] + param_2) {
    uVar2 = uVar2 + param_2 * 4;
    *param_1 = uVar2;
    uVar3 = *(undefined8 *)(param_1 + 4);
    _realloc(uVar3,(ulong)uVar2 * 0x28);
    *(undefined8 *)(param_1 + 4) = uVar3;
  }
  if (uVar8 <= param_1[1]) {
    return;
  }
  uVar8 = uVar8 + 0x10;
  param_1[1] = uVar8;
  lVar5 = *(long *)(param_1 + 6);
  uVar4 = (ulong)uVar1 << 2;
  uVar7 = (ulong)uVar8 * 4 + 0xc;
  if (uVar7 <= uVar4) {
    uVar4 = uVar7;
  }
  lVar6 = (ulong)uVar8 * 4 + 0x24;
  _malloc();
  if (lVar6 == 0) {
    uVar7 = 0;
LAB_109f612ac:
    if (lVar5 == 0) goto LAB_109f612bc;
  }
  else {
    uVar7 = lVar6 + 0x17U & 0xfffffffffffffff0;
    *(long *)(uVar7 - 8) = lVar6;
    if (((uVar1 == 0) || (lVar5 == 0)) || (uVar7 == 0)) goto LAB_109f612ac;
    _memcpy(uVar7,lVar5,uVar4);
  }
  _free(*(undefined8 *)(lVar5 + -8));
  uVar8 = param_1[1];
LAB_109f612bc:
  *(ulong *)(param_1 + 6) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(uVar7 + (ulong)uVar1 * 4,(ulong)(uVar8 - uVar1) << 2);
  return;
}



/* Entry: 109f61300; end: 109f6136f;  */

void FUN_109f61300(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      _free(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar1));
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x28;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  _free(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x18) != 0) {
    _free(*(undefined8 *)(*(long *)(param_1 + 0x18) + -8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 109f61370; end: 109f6167f;  */

int FUN_109f61370(undefined8 *param_1,uint param_2,char *param_3,uint param_4,int param_5,
                 undefined4 *param_6,long param_7,int param_8)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  
  uVar7 = *(uint *)((long)param_1 + 0xc);
  if (param_8 == 0) {
    uVar12 = param_4;
    if (((param_5 - 0x8f46U < 9) ||
        ((param_5 - 0x8fe9U < 0x16 && ((1 << (ulong)(param_5 - 0x8fe9U & 0x1f) & 0x387007U) != 0))))
       || ((uVar10 = uVar7, param_5 - 0x140aU < 6 &&
           ((1 << (ulong)(param_5 - 0x140aU & 0x1f) & 0x31U) != 0)))) {
      uVar10 = uVar7 + 1 & 0xfffffffe;
    }
  }
  else {
    uVar10 = uVar7 + 3 & 0xfffffffc;
    uVar12 = param_4 + 3 & 0xfffffffc;
  }
  iVar11 = *(int *)(param_1 + 1);
  FUN_109f611c0(param_1,1,(uVar12 - uVar7) + uVar10 + 3 >> 2);
  if ((param_1[2] == 0) || (param_1[3] == 0)) {
    *(undefined4 *)(param_1 + 1) = 0;
    iVar11 = -1;
    *param_1 = 0;
  }
  else {
    lVar9 = (long)iVar11;
    *(int *)(param_1 + 1) = iVar11 + 1;
    *(uint *)((long)param_1 + 0xc) = uVar10 + uVar12;
    puVar2 = (undefined8 *)(param_1[2] + lVar9 * 0x28);
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    uVar13 = (ulong)uVar12;
    _bzero(param_1[3] + (ulong)uVar10 * 4,uVar13);
    puVar2 = (undefined8 *)(param_1[2] + lVar9 * 0x28);
    pcVar4 = "";
    if (param_3 != (char *)0x0) {
      pcVar4 = param_3;
    }
    _strdup();
    *puVar2 = pcVar4;
    *(short *)((long)puVar2 + 0xc) = (short)param_4;
    bVar6 = 0x20;
    if (param_8 == 0) {
      bVar6 = 0;
    }
    *(byte *)(puVar2 + 1) = bVar6 | (byte)param_2 & 0x1f | *(byte *)(puVar2 + 1) & 0xc0;
    *(short *)((long)puVar2 + 10) = (short)param_5;
    *(uint *)(param_1[2] + lVar9 * 0x28 + 0x18) = uVar10;
    if (param_6 == (undefined4 *)0x0) {
      if (uVar12 != 0) {
        do {
          *(undefined4 *)(param_1[3] + (ulong)uVar10 * 4) = 0;
          uVar10 = uVar10 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    else if (param_4 < 4) {
      if (param_4 != 0) {
        uVar5 = (ulong)param_4;
        uVar7 = uVar10;
        do {
          *(undefined4 *)(param_1[3] + (ulong)uVar7 * 4) = *param_6;
          uVar7 = uVar7 + 1;
          uVar5 = uVar5 - 1;
          param_6 = param_6 + 1;
        } while (uVar5 != 0);
      }
      if (param_4 < uVar12) {
        lVar9 = uVar13 - param_4;
        uVar10 = uVar10 + param_4;
        do {
          *(undefined4 *)(param_1[3] + (ulong)uVar10 * 4) = 0;
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
    }
    else {
      _memcpy(param_1[3] + (ulong)uVar10 * 4,param_6,(ulong)param_4 << 2);
    }
    lVar9 = param_1[2];
    if (param_7 == 0) {
      *(undefined2 *)(lVar9 + (long)iVar11 * 0x28 + 0xe) = 0;
    }
    else {
      lVar8 = 0;
      do {
        *(undefined2 *)(lVar9 + (long)iVar11 * 0x28 + 0xe + lVar8) =
             *(undefined2 *)(param_7 + lVar8);
        lVar8 = lVar8 + 2;
      } while (lVar8 != 8);
    }
    if ((param_2 & 0xfffffffe) == 4) {
      lVar9 = lVar9 + (long)iVar11 * 0x28;
      iVar1 = *(int *)(lVar9 + 0x18) + (uint)*(ushort *)(lVar9 + 0xc);
      uVar7 = *(uint *)(param_1 + 5);
      if (*(uint *)(param_1 + 5) <= (uint)(iVar1 * 4)) {
        uVar7 = iVar1 * 4;
      }
      *(uint *)(param_1 + 5) = uVar7;
    }
    else {
      iVar1 = *(int *)((long)param_1 + 0x2c);
      if (iVar11 <= *(int *)((long)param_1 + 0x2c)) {
        iVar1 = iVar11;
      }
      iVar3 = *(int *)(param_1 + 6);
      if (*(int *)(param_1 + 6) <= iVar11) {
        iVar3 = iVar11;
      }
      *(int *)((long)param_1 + 0x2c) = iVar1;
      *(int *)(param_1 + 6) = iVar3;
    }
  }
  return iVar11;
}



/* Entry: 109f61680; end: 109f6173f;  */

void FUN_109f61680(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar1 = (undefined8 *)((long *)param_1[1])[1];
  param_1[1] = *(long *)param_1[1];
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  _free();
  while (puVar1 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)puVar1[2];
    lVar4 = *param_1;
    uVar5 = *puVar1;
    uVar2 = uVar5;
    (**(code **)(lVar4 + 8))(uVar5);
    FUN_109f64fdc(lVar4,uVar2,uVar5);
    if (puVar1[1] == 0) {
      if (lVar4 != 0) {
        lVar3 = *param_1;
        *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 0x18);
        *(ulong *)(lVar3 + 0x40) =
             CONCAT44((int)((ulong)*(undefined8 *)(lVar3 + 0x40) >> 0x20) + 1,
                      (int)*(undefined8 *)(lVar3 + 0x40) + -1);
      }
    }
    else {
      *(undefined8 *)(lVar4 + 0x10) = puVar1[1];
    }
    _free(puVar1);
    puVar1 = puVar6;
  }
  return;
}



/* Entry: 109f61740; end: 109f61797;  */

undefined8 * FUN_109f61740(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
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
  
  puVar1 = (undefined8 *)0x1;
  _calloc(1,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 **)(param_1 + 8) = puVar1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    return puVar1;
  }
  FUN_10ae030a0(0,&UNK_10f620bf5);
  ppuVar6 = &PTR_PTR_1132ff328;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
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
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar2 = 0;
    _clock_gettime_nsec_np();
    uVar3 = uVar2;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar3 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar1 = (undefined8 *)*ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar2;
    FUN_10ae0784c(puVar1,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar1);
    return puVar1;
  }
  return puVar1;
}



/* Entry: 109f61798; end: 109f617ff;  */

int FUN_109f61798(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar2 = param_2;
  (**(code **)(lVar3 + 8))(param_2);
  FUN_109f64fdc(lVar3,uVar2,param_2);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = (int)param_1[2] - *(int *)(*(long *)(lVar3 + 0x10) + 0x18);
  }
  return iVar1;
}



/* Entry: 109f61800; end: 109f61853;  */

void FUN_109f61800(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = param_2;
  (**(code **)(lVar2 + 8))(param_2);
  FUN_109f64fdc(lVar2,uVar1,param_2);
  return;
}



/* Entry: 109f61854; end: 109f61973;  */

undefined8 FUN_109f61854(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  
  lVar2 = param_2;
  _strlen(param_2);
  lVar1 = param_2;
  FUN_109f65540(param_2,lVar2);
  lVar2 = *param_1;
  FUN_109f64fdc(lVar2,lVar1,param_2);
  if ((lVar2 == 0) || (plVar5 = *(long **)(lVar2 + 0x10), plVar5 == (long *)0x0)) {
    lVar2 = param_2;
    _strlen(param_2);
    plVar3 = (long *)0x1;
    _calloc(1,lVar2 + 0x29);
    if (plVar3 != (long *)0x0) {
      plVar5 = plVar3 + 5;
      *plVar3 = (long)plVar5;
      _strcpy(plVar5,param_2);
      func_0x000109f650c0(*param_1,lVar1,plVar5,plVar3);
      iVar4 = (int)param_1[2];
      goto LAB_109f6192c;
    }
  }
  else {
    iVar4 = (int)param_1[2];
    if ((int)plVar5[3] == iVar4) {
      return 0xffffffff;
    }
    plVar3 = (long *)0x1;
    _calloc(1,0x28);
    if (plVar3 != (long *)0x0) {
      *plVar3 = *plVar5;
      plVar3[1] = (long)plVar5;
      *(long **)(lVar2 + 0x10) = plVar3;
LAB_109f6192c:
      lVar2 = param_1[1];
      plVar3[2] = *(long *)(lVar2 + 8);
      plVar3[4] = param_3;
      *(int *)(plVar3 + 3) = iVar4;
      *(long **)(lVar2 + 8) = plVar3;
      return 0;
    }
  }
  FUN_109f6116c(&UNK_10f620c13);
  return 0xffffffff;
}



/* Entry: 109f61974; end: 109f619d7;  */

undefined8 FUN_109f61974(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = param_2;
  (**(code **)(lVar2 + 8))(param_2);
  FUN_109f64fdc(lVar2,uVar1,param_2);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x20) = param_3;
  }
  return uVar1;
}



/* Entry: 109f619d8; end: 109f61a9f;  */

undefined8 * FUN_109f619d8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x1;
  _calloc(1,0x18);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 0;
    FUN_109f64c74(0,FUN_109f65518,FUN_109f65668);
    *puVar1 = uVar2;
    FUN_109f61740(puVar1);
  }
  return puVar1;
}



/* Entry: 109f61aa0; end: 109f62ccb;  */

/* WARNING: Possible PIC construction at 0x000109f62a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109f61f9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109f62a08) */
/* WARNING: Removing unreachable block (ram,0x000109f62b30) */
/* WARNING: Removing unreachable block (ram,0x000109f62c38) */
/* WARNING: Removing unreachable block (ram,0x000109f62b3c) */
/* WARNING: Removing unreachable block (ram,0x000109f62b54) */
/* WARNING: Removing unreachable block (ram,0x000109f62b64) */
/* WARNING: Removing unreachable block (ram,0x000109f62c40) */
/* WARNING: Removing unreachable block (ram,0x000109f62c74) */
/* WARNING: Removing unreachable block (ram,0x000109f62a34) */
/* WARNING: Removing unreachable block (ram,0x000109f61fa0) */
/* WARNING: Removing unreachable block (ram,0x000109f61fbc) */
/* WARNING: Removing unreachable block (ram,0x000109f61fc0) */
/* WARNING: Removing unreachable block (ram,0x000109f62048) */
/* WARNING: Removing unreachable block (ram,0x000109f62080) */
/* WARNING: Removing unreachable block (ram,0x000109f62084) */
/* WARNING: Removing unreachable block (ram,0x000109f6210c) */

ulong * FUN_109f61aa0(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                     ulong *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 uVar24;
  undefined7 uVar25;
  ulong *puVar26;
  ulong *puVar27;
  int *piVar28;
  ulong *puVar29;
  ulong *puVar30;
  uint uVar31;
  ulong *puVar32;
  uint uVar33;
  ulong *puVar34;
  ulong *puVar35;
  char cVar36;
  ulong uVar37;
  ulong uVar38;
  ulong *puVar39;
  ulong uVar40;
  ulong uVar41;
  undefined4 uVar42;
  ulong uVar43;
  undefined4 uVar44;
  uint *puVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong *unaff_x23;
  ulong *puVar50;
  ulong *unaff_x24;
  ulong *unaff_x25;
  long lVar51;
  undefined8 *unaff_x26;
  ulong *unaff_x27;
  ulong *unaff_x28;
  undefined8 ****ppppuVar52;
  undefined8 uVar53;
  byte bVar54;
  byte bVar55;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  char cStack_2d8;
  byte bStack_2d7;
  ulong auStack_2d0 [9];
  long lStack_288;
  ulong *puStack_280;
  ulong *puStack_278;
  undefined8 *puStack_270;
  ulong *puStack_268;
  ulong *puStack_260;
  ulong *puStack_258;
  ulong *puStack_250;
  ulong *puStack_248;
  ulong *puStack_240;
  ulong *puStack_238;
  undefined8 ***pppuStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  ulong *puStack_208;
  ulong *puStack_200;
  ulong *puStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  ulong *puStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  byte bStack_188;
  byte bStack_187;
  undefined8 uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  ulong *puStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  byte bStack_118;
  byte bStack_117;
  byte bStack_116;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  long lStack_78;
  
  ppppuVar52 = (undefined8 ****)&stack0xfffffffffffffff0;
  puVar26 = (ulong *)&uStack_220;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar27 = param_1;
  puVar50 = param_2;
  puVar39 = unaff_x23;
  puStack_1f8 = param_3;
  if (param_3 != (ulong *)0x0) {
    unaff_x26 = &uStack_180;
    uVar38 = (ulong)*(byte *)((long)param_1 + 0x89);
    uVar37 = (ulong)(byte)param_1[0x11];
    lVar51 = uVar37 + uVar38 * 0x40;
    unaff_x21 = param_2;
    unaff_x25 = param_2;
    unaff_x19 = param_1;
    if (lVar51 != 0) {
      unaff_x25 = (ulong *)(0x400 - lVar51);
      if (param_3 <= unaff_x25) {
        unaff_x25 = param_3;
      }
      unaff_x20 = unaff_x25;
      unaff_x22 = param_2;
      if ((byte)param_1[0x11] == 0) {
LAB_109f61ba0:
        if (unaff_x20 < (ulong *)0x41) {
          uVar37 = 0;
        }
        else {
          do {
            param_4 = (ulong *)param_1[8];
            param_5 = (ulong *)(ulong)(*(byte *)((long)param_1 + 0x8a) | (uVar38 & 0xff) == 0);
            FUN_109f62ccc(param_1 + 4,unaff_x22,0x40);
            uVar31 = *(byte *)((long)param_1 + 0x89) + 1;
            uVar38 = (ulong)uVar31;
            *(char *)((long)param_1 + 0x89) = (char)uVar31;
            unaff_x22 = unaff_x22 + 8;
            unaff_x20 = unaff_x20 + -8;
          } while ((ulong *)0x40 < unaff_x20);
          uVar37 = (ulong)(byte)param_1[0x11];
        }
      }
      else {
        puVar27 = (ulong *)(0x40 - uVar37);
        if (unaff_x25 <= (ulong *)(0x40 - uVar37)) {
          puVar27 = unaff_x25;
        }
        puVar50 = param_1 + 9;
        _memcpy((long)puVar50 + uVar37,param_2,puVar27);
        uVar31 = (uint)(byte)param_1[0x11] + (int)puVar27;
        uVar37 = (ulong)uVar31;
        *(char *)(param_1 + 0x11) = (char)uVar31;
        unaff_x22 = (ulong *)((long)param_2 + (long)puVar27);
        unaff_x20 = (ulong *)((long)unaff_x25 - (long)puVar27);
        if (unaff_x20 != (ulong *)0x0) {
          param_4 = (ulong *)param_1[8];
          param_5 = (ulong *)(ulong)(*(byte *)((long)param_1 + 0x8a) |
                                    *(char *)((long)param_1 + 0x89) == '\0');
          FUN_109f62ccc(param_1 + 4,puVar50,0x40);
          uVar31 = *(byte *)((long)param_1 + 0x89) + 1;
          uVar38 = (ulong)uVar31;
          *(char *)((long)param_1 + 0x89) = (char)uVar31;
          *(undefined1 *)(param_1 + 0x11) = 0;
          param_1[10] = 0;
          *puVar50 = 0;
          param_1[0xc] = 0;
          param_1[0xb] = 0;
          param_1[0xe] = 0;
          param_1[0xd] = 0;
          param_1[0x10] = 0;
          param_1[0xf] = 0;
          goto LAB_109f61ba0;
        }
      }
      puVar39 = (ulong *)(0x40 - (uVar37 & 0xff));
      if (unaff_x20 <= puVar39) {
        puVar39 = unaff_x20;
      }
      unaff_x24 = param_1 + 9;
      puVar27 = (ulong *)((long)unaff_x24 + (uVar37 & 0xff));
      puVar50 = unaff_x22;
      param_3 = puVar39;
      _memcpy();
      uVar31 = (uint)(byte)param_1[0x11] + (int)puVar39;
      bVar54 = (byte)uVar31;
      *(byte *)(param_1 + 0x11) = bVar54;
      puStack_1f8 = (ulong *)((long)puStack_1f8 - (long)unaff_x25);
      if (puStack_1f8 == (ulong *)0x0) goto LAB_109f62574;
      uStack_178 = param_1[5];
      uStack_180 = param_1[4];
      uStack_168 = param_1[7];
      uStack_170 = param_1[6];
      uStack_150 = param_1[10];
      uStack_158 = *unaff_x24;
      uStack_140 = param_1[0xc];
      uStack_148 = param_1[0xb];
      uStack_130 = param_1[0xe];
      uStack_138 = param_1[0xd];
      uStack_120 = param_1[0x10];
      uStack_128 = param_1[0xf];
      bStack_117 = *(byte *)((long)param_1 + 0x8a) | *(char *)((long)param_1 + 0x89) == '\0' | 2;
      param_4 = (ulong *)param_1[8];
      uStack_e8 = param_1[5];
      uStack_f0 = param_1[4];
      uStack_d8 = param_1[7];
      uStack_e0 = param_1[6];
      unaff_x22 = &uStack_f0;
      param_5 = (ulong *)(ulong)bStack_117;
      puStack_160 = param_4;
      bStack_118 = bVar54;
      FUN_109f62ccc(&uStack_f0,&uStack_158,uVar31 & 0xff);
      uVar41 = uStack_e8;
      uVar38 = uStack_f0;
      unaff_x28 = (ulong *)(uStack_f0 & 0xffffffff);
      unaff_x27 = (ulong *)(uStack_f0 >> 0x20);
      unaff_x21 = (ulong *)(uStack_e8 & 0xffffffff);
      uVar37 = param_1[8];
      bVar54 = POPCOUNT((char)uVar37) + POPCOUNT((char)(uVar37 >> 8)) +
               POPCOUNT((char)(uVar37 >> 0x10)) + POPCOUNT((char)(uVar37 >> 0x18)) +
               POPCOUNT((char)(uVar37 >> 0x20)) + POPCOUNT((char)(uVar37 >> 0x28)) +
               POPCOUNT((char)(uVar37 >> 0x30)) + POPCOUNT((char)(uVar37 >> 0x38));
      unaff_x23 = (ulong *)(ulong)bVar54;
      uVar37 = (ulong)(byte)param_1[0x12];
      uVar40 = uVar37;
      puVar27 = (ulong *)((long)param_2 + (long)unaff_x25);
      uVar44 = uStack_e8._4_4_;
      uVar46 = (undefined4)uStack_e0;
      uVar47 = uStack_e0._4_4_;
      uVar49 = (undefined4)uStack_d8;
      uVar48 = uStack_d8._4_4_;
      if ((uint)bVar54 < (uint)(byte)param_1[0x12]) {
        uStack_218 = uStack_e8._4_4_;
        uStack_214 = (undefined4)uStack_e0;
        uStack_210 = uStack_e0._4_4_;
        uStack_20c = (undefined4)uStack_d8;
        puStack_208 = (ulong *)CONCAT44(puStack_208._4_4_,uStack_d8._4_4_);
        unaff_x26 = (undefined8 *)0x40;
        puStack_200 = (ulong *)((long)param_2 + (long)unaff_x25);
        do {
          uStack_e8 = param_1[1];
          uStack_f0 = *param_1;
          uStack_d8 = param_1[3];
          uStack_e0 = param_1[2];
          unaff_x20 = (ulong *)((long)param_1 + (long)(int)uVar37 * 0x20 + 0x91);
          uStack_c0 = unaff_x20[-7];
          uStack_c8 = unaff_x20[-8];
          uStack_b0 = unaff_x20[-5];
          uStack_b8 = unaff_x20[-6];
          uStack_a0 = unaff_x20[-3];
          uStack_a8 = unaff_x20[-4];
          uStack_90 = unaff_x20[-1];
          uStack_98 = unaff_x20[-2];
          uStack_88 = 0x40;
          uStack_d0 = 0;
          uVar31 = *(byte *)((long)param_1 + 0x8a) | 4;
          param_5 = (ulong *)(ulong)uVar31;
          uStack_87 = (undefined1)uVar31;
          uStack_1e8 = param_1[1];
          uStack_1f0 = *param_1;
          uStack_1d8 = param_1[3];
          uStack_1e0 = param_1[2];
          param_4 = (ulong *)0x0;
          FUN_109f62ccc(&uStack_1f0,&uStack_c8,0x40);
          *(undefined4 *)(unaff_x20 + -8) = (undefined4)uStack_1f0;
          *(undefined4 *)((long)unaff_x20 + -0x3c) = uStack_1f0._4_4_;
          unaff_x20[-6] = uStack_1e0;
          unaff_x20[-7] = uStack_1e8;
          *(undefined4 *)(unaff_x20 + -5) = (undefined4)uStack_1d8;
          *(undefined4 *)((long)unaff_x20 + -0x24) = uStack_1d8._4_4_;
          uVar31 = (byte)param_1[0x12] - 1;
          uVar40 = (ulong)uVar31;
          *(char *)(param_1 + 0x12) = (char)uVar31;
          uVar37 = (ulong)(uVar31 & 0xff);
        } while ((uint)bVar54 < (uVar31 & 0xff));
        puVar27 = puStack_200;
        uVar44 = uStack_218;
        uVar46 = uStack_214;
        uVar47 = uStack_210;
        uVar49 = uStack_20c;
        uVar48 = puStack_208._0_4_;
      }
      uVar37 = 0;
      uVar43 = uVar40 & 0xff;
      *(char *)((long)param_1 + uVar43 * 0x20 + 0x92) = (char)(uVar38 >> 8);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0x93) = (char)(uVar38 >> 0x10);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0x91) = (char)uVar38;
      *(char *)((long)param_1 + uVar43 * 0x20 + 0x94) = (char)(uVar38 >> 0x18);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0x96) = (char)(uVar38 >> 0x28);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0x97) = (char)(uVar38 >> 0x30);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0x95) = (char)(uVar38 >> 0x20);
      *(char *)(param_1 + uVar43 * 4 + 0x13) = (char)(uVar38 >> 0x38);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0x99) = (char)uVar41;
      *(char *)((long)param_1 + uVar43 * 0x20 + 0x9a) = (char)(uVar41 >> 8);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0x9b) = (char)(uVar41 >> 0x10);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0x9c) = (char)(uVar41 >> 0x18);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0x9d) = (char)uVar44;
      *(char *)((long)param_1 + uVar43 * 0x20 + 0x9e) = (char)((uint)uVar44 >> 8);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0x9f) = (char)((uint)uVar44 >> 0x10);
      *(char *)(param_1 + uVar43 * 4 + 0x14) = (char)((uint)uVar44 >> 0x18);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0xa1) = (char)uVar46;
      *(char *)((long)param_1 + uVar43 * 0x20 + 0xa2) = (char)((uint)uVar46 >> 8);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0xa3) = (char)((uint)uVar46 >> 0x10);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0xa4) = (char)((uint)uVar46 >> 0x18);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0xa5) = (char)uVar47;
      *(char *)((long)param_1 + uVar43 * 0x20 + 0xa6) = (char)((uint)uVar47 >> 8);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0xa7) = (char)((uint)uVar47 >> 0x10);
      *(char *)(param_1 + uVar43 * 4 + 0x15) = (char)((uint)uVar47 >> 0x18);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0xa9) = (char)uVar49;
      *(char *)((long)param_1 + uVar43 * 0x20 + 0xaa) = (char)((uint)uVar49 >> 8);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0xab) = (char)((uint)uVar49 >> 0x10);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0xac) = (char)((uint)uVar49 >> 0x18);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0xad) = (char)uVar48;
      *(char *)((long)param_1 + uVar43 * 0x20 + 0xae) = (char)((uint)uVar48 >> 8);
      *(char *)((long)param_1 + uVar43 * 0x20 + 0xaf) = (char)((uint)uVar48 >> 0x10);
      *(char *)(param_1 + uVar43 * 4 + 0x16) = (char)((uint)uVar48 >> 0x18);
      *(char *)(param_1 + 0x12) = (char)uVar40 + '\x01';
      param_1[5] = param_1[1];
      param_1[4] = *param_1;
      param_1[7] = param_1[3];
      param_1[6] = param_1[2];
      param_1[8] = param_1[8] + 1;
      param_1[10] = 0;
      *unaff_x24 = 0;
      param_1[0xc] = 0;
      param_1[0xb] = 0;
      param_1[0xe] = 0;
      param_1[0xd] = 0;
      param_1[0x10] = 0;
      param_1[0xf] = 0;
      *(undefined2 *)(param_1 + 0x11) = 0;
      unaff_x25 = puVar27;
    }
    unaff_x24 = puStack_1f8;
    if ((ulong *)0x400 < puStack_1f8) {
      unaff_x27 = (ulong *)((long)param_1 + 0x91);
      unaff_x28 = &uStack_f0;
      puStack_208 = &uStack_158;
      unaff_x23 = (ulong *)param_1[8];
      unaff_x26 = (undefined8 *)0x40;
      do {
        puVar27 = unaff_x25;
        puVar50 = (ulong *)(1L << ((LZCOUNT((ulong)unaff_x24 | 1) ^ 0x3fU) & 0x3f));
        do {
          unaff_x22 = puVar50;
          puVar50 = (ulong *)((ulong)unaff_x22 >> 1);
        } while (((long)unaff_x22 - 1U & (long)unaff_x23 << 10) != 0);
        if ((ulong *)0x400 < unaff_x22) {
          param_5 = (ulong *)(ulong)*(byte *)((long)param_1 + 0x8a);
          uVar53 = 0x109f61fa0;
          puVar50 = unaff_x22;
          param_6 = &uStack_180;
          puVar39 = unaff_x23;
          unaff_x25 = puVar27;
          goto SUB_109f62968;
        }
        bVar54 = *(byte *)((long)param_1 + 0x8a);
        uStack_178 = param_1[1];
        uStack_180 = *param_1;
        uStack_168 = param_1[3];
        uStack_170 = param_1[2];
        puStack_208[1] = 0;
        *puStack_208 = 0;
        puStack_208[3] = 0;
        puStack_208[2] = 0;
        puStack_208[5] = 0;
        puStack_208[4] = 0;
        puStack_208[7] = 0;
        puStack_208[6] = 0;
        *(undefined2 *)(puStack_208 + 8) = 0;
        puVar50 = unaff_x22;
        puStack_200 = puVar27;
        puStack_1f8 = unaff_x24;
        puStack_160 = unaff_x23;
        bStack_116 = bVar54;
        if (unaff_x22 < (ulong *)0x41) {
          uVar37 = 0;
        }
        else {
          bVar54 = 0;
          do {
            FUN_109f62ccc(&uStack_180,puVar27,0x40,puStack_160,bStack_116 | bVar54 == 0);
            bVar54 = bStack_117 + 1;
            puVar27 = puVar27 + 8;
            puVar50 = puVar50 + -8;
            bStack_117 = bVar54;
          } while ((ulong *)0x40 < puVar50);
          uVar37 = (ulong)bStack_118;
        }
        param_4 = puStack_160;
        puVar29 = puStack_208;
        puVar39 = (ulong *)(0x40 - uVar37);
        if (puVar50 <= (ulong *)(0x40 - uVar37)) {
          puVar39 = puVar50;
        }
        _memcpy((long)puStack_208 + uVar37,puVar27,puVar39);
        uStack_1e8 = uStack_178;
        uStack_1f0 = uStack_180;
        uStack_1d8 = uStack_168;
        uStack_1e0 = uStack_170;
        uStack_1c0 = puVar29[1];
        uStack_1c8 = *puVar29;
        uStack_1b0 = puVar29[3];
        uStack_1b8 = puVar29[2];
        uStack_1a0 = puVar29[5];
        uStack_1a8 = puVar29[4];
        uStack_190 = puVar29[7];
        uStack_198 = puVar29[6];
        uVar31 = (uint)bStack_118 + (int)puVar39;
        bStack_188 = (byte)uVar31;
        bStack_187 = bStack_116 | bStack_117 == 0 | 2;
        uStack_e8 = uStack_178;
        uStack_f0 = uStack_180;
        uStack_d8 = uStack_168;
        uStack_e0 = uStack_170;
        puVar27 = &uStack_f0;
        puVar50 = &uStack_1c8;
        param_3 = (ulong *)(ulong)(uVar31 & 0xff);
        param_5 = (ulong *)(ulong)bStack_187;
        puStack_1d0 = param_4;
        bStack_118 = bStack_188;
        FUN_109f62ccc();
        uVar37 = uStack_f0;
        bVar54 = POPCOUNT((char)puStack_160) + POPCOUNT((char)((ulong)puStack_160 >> 8)) +
                 POPCOUNT((char)((ulong)puStack_160 >> 0x10)) +
                 POPCOUNT((char)((ulong)puStack_160 >> 0x18)) +
                 POPCOUNT((char)((ulong)puStack_160 >> 0x20)) +
                 POPCOUNT((char)((ulong)puStack_160 >> 0x28)) +
                 POPCOUNT((char)((ulong)puStack_160 >> 0x30)) +
                 POPCOUNT((char)((ulong)puStack_160 >> 0x38));
        unaff_x20 = (ulong *)(ulong)bVar54;
        uVar38 = (ulong)(byte)param_1[0x12];
        uVar44 = (undefined4)uStack_e8;
        uVar46 = uStack_e8._4_4_;
        uVar47 = (undefined4)uStack_e0;
        uVar49 = uStack_e0._4_4_;
        uVar48 = (undefined4)uStack_d8;
        uVar42 = uStack_d8._4_4_;
        if ((uint)bVar54 < (uint)(byte)param_1[0x12]) {
          uStack_220 = (undefined4)uStack_e8;
          uStack_21c = uStack_e8._4_4_;
          uStack_218 = (undefined4)uStack_e0;
          uStack_214 = uStack_e0._4_4_;
          uStack_210 = (undefined4)uStack_d8;
          uStack_20c = uStack_d8._4_4_;
          uVar41 = uVar38;
          do {
            uStack_e8 = param_1[1];
            uStack_f0 = *param_1;
            uStack_d8 = param_1[3];
            uStack_e0 = param_1[2];
            unaff_x21 = unaff_x27 + (long)(int)uVar41 * 4;
            uStack_c0 = unaff_x21[-7];
            uStack_c8 = unaff_x21[-8];
            uStack_b0 = unaff_x21[-5];
            uStack_b8 = unaff_x21[-6];
            uStack_a0 = unaff_x21[-3];
            uStack_a8 = unaff_x21[-4];
            uStack_90 = unaff_x21[-1];
            uStack_98 = unaff_x21[-2];
            uStack_88 = 0x40;
            uStack_d0 = 0;
            uVar31 = *(byte *)((long)param_1 + 0x8a) | 4;
            param_5 = (ulong *)(ulong)uVar31;
            uStack_87 = (undefined1)uVar31;
            uStack_108 = param_1[1];
            uStack_110 = *param_1;
            uStack_f8 = param_1[3];
            uStack_100 = param_1[2];
            puVar27 = &uStack_110;
            puVar50 = &uStack_c8;
            param_3 = (ulong *)0x40;
            param_4 = (ulong *)0x0;
            FUN_109f62ccc();
            *(undefined4 *)(unaff_x21 + -8) = (undefined4)uStack_110;
            *(undefined4 *)((long)unaff_x21 + -0x3c) = uStack_110._4_4_;
            unaff_x21[-6] = uStack_100;
            unaff_x21[-7] = uStack_108;
            *(undefined4 *)(unaff_x21 + -5) = (undefined4)uStack_f8;
            *(undefined4 *)((long)unaff_x21 + -0x24) = uStack_f8._4_4_;
            uVar31 = (byte)param_1[0x12] - 1;
            uVar38 = (ulong)uVar31;
            *(char *)(param_1 + 0x12) = (char)uVar31;
            uVar41 = (ulong)(uVar31 & 0xff);
            uVar44 = uStack_220;
            uVar46 = uStack_21c;
            uVar47 = uStack_218;
            uVar49 = uStack_214;
            uVar48 = uStack_210;
            uVar42 = uStack_20c;
          } while ((uint)bVar54 < (uVar31 & 0xff));
        }
        puVar39 = unaff_x27 + (uVar38 & 0xff) * 4;
        *(char *)((long)puVar39 + 1) = (char)(uVar37 >> 8);
        *(char *)((long)puVar39 + 2) = (char)(uVar37 >> 0x10);
        *(char *)puVar39 = (char)uVar37;
        *(char *)((long)puVar39 + 3) = (char)(uVar37 >> 0x18);
        *(char *)((long)puVar39 + 5) = (char)(uVar37 >> 0x28);
        *(char *)((long)puVar39 + 6) = (char)(uVar37 >> 0x30);
        *(char *)((long)puVar39 + 4) = (char)(uVar37 >> 0x20);
        *(char *)((long)puVar39 + 7) = (char)(uVar37 >> 0x38);
        *(char *)((long)puVar39 + 9) = (char)((uint)uVar44 >> 8);
        *(char *)((long)puVar39 + 10) = (char)((uint)uVar44 >> 0x10);
        *(char *)(puVar39 + 1) = (char)uVar44;
        *(char *)((long)puVar39 + 0xb) = (char)((uint)uVar44 >> 0x18);
        *(char *)((long)puVar39 + 0xd) = (char)((uint)uVar46 >> 8);
        *(char *)((long)puVar39 + 0xe) = (char)((uint)uVar46 >> 0x10);
        *(char *)((long)puVar39 + 0xc) = (char)uVar46;
        *(char *)((long)puVar39 + 0xf) = (char)((uint)uVar46 >> 0x18);
        *(char *)((long)puVar39 + 0x11) = (char)((uint)uVar47 >> 8);
        *(char *)((long)puVar39 + 0x12) = (char)((uint)uVar47 >> 0x10);
        *(char *)(puVar39 + 2) = (char)uVar47;
        *(char *)((long)puVar39 + 0x13) = (char)((uint)uVar47 >> 0x18);
        *(char *)((long)puVar39 + 0x15) = (char)((uint)uVar49 >> 8);
        *(char *)((long)puVar39 + 0x16) = (char)((uint)uVar49 >> 0x10);
        *(char *)((long)puVar39 + 0x14) = (char)uVar49;
        *(char *)((long)puVar39 + 0x17) = (char)((uint)uVar49 >> 0x18);
        *(char *)((long)puVar39 + 0x19) = (char)((uint)uVar48 >> 8);
        *(char *)((long)puVar39 + 0x1a) = (char)((uint)uVar48 >> 0x10);
        *(char *)(puVar39 + 3) = (char)uVar48;
        *(char *)((long)puVar39 + 0x1b) = (char)((uint)uVar48 >> 0x18);
        *(char *)((long)puVar39 + 0x1d) = (char)((uint)uVar42 >> 8);
        *(char *)((long)puVar39 + 0x1e) = (char)((uint)uVar42 >> 0x10);
        *(char *)((long)puVar39 + 0x1c) = (char)uVar42;
        *(char *)((long)puVar39 + 0x1f) = (char)((uint)uVar42 >> 0x18);
        *(char *)(param_1 + 0x12) = (char)uVar38 + '\x01';
        unaff_x23 = (ulong *)(param_1[8] + ((ulong)unaff_x22 >> 10));
        param_1[8] = (ulong)unaff_x23;
        unaff_x25 = (ulong *)((long)puStack_200 + (long)unaff_x22);
        unaff_x24 = (ulong *)((long)puStack_1f8 - (long)unaff_x22);
      } while ((ulong *)0x400 < unaff_x24);
      puVar39 = unaff_x23;
      if (unaff_x24 == (ulong *)0x0) goto LAB_109f62574;
      uVar37 = (ulong)(byte)param_1[0x11];
    }
    puVar39 = unaff_x23;
    if ((int)uVar37 == 0) {
LAB_109f62440:
      if (unaff_x24 < (ulong *)0x41) {
        bVar54 = 0;
      }
      else {
        cVar36 = *(char *)((long)param_1 + 0x89);
        do {
          param_4 = (ulong *)param_1[8];
          param_5 = (ulong *)(ulong)(*(byte *)((long)param_1 + 0x8a) | cVar36 == '\0');
          FUN_109f62ccc(param_1 + 4,unaff_x25,0x40);
          cVar36 = *(char *)((long)param_1 + 0x89) + '\x01';
          *(char *)((long)param_1 + 0x89) = cVar36;
          unaff_x25 = unaff_x25 + 8;
          unaff_x24 = unaff_x24 + -8;
        } while ((ulong *)0x40 < unaff_x24);
        bVar54 = (byte)param_1[0x11];
      }
    }
    else {
      puVar39 = (ulong *)(0x40 - uVar37);
      if (unaff_x24 <= (ulong *)(0x40 - uVar37)) {
        puVar39 = unaff_x24;
      }
      unaff_x22 = param_1 + 9;
      _memcpy((long)unaff_x22 + uVar37,unaff_x25,puVar39);
      bVar54 = (char)param_1[0x11] + (char)puVar39;
      *(byte *)(param_1 + 0x11) = bVar54;
      unaff_x25 = (ulong *)((long)unaff_x25 + (long)puVar39);
      unaff_x24 = (ulong *)((long)unaff_x24 - (long)puVar39);
      if (unaff_x24 != (ulong *)0x0) {
        param_4 = (ulong *)param_1[8];
        param_5 = (ulong *)(ulong)(*(byte *)((long)param_1 + 0x8a) |
                                  *(char *)((long)param_1 + 0x89) == '\0');
        FUN_109f62ccc(param_1 + 4,unaff_x22,0x40);
        *(char *)((long)param_1 + 0x89) = *(char *)((long)param_1 + 0x89) + '\x01';
        *(undefined1 *)(param_1 + 0x11) = 0;
        param_1[10] = 0;
        *unaff_x22 = 0;
        param_1[0xc] = 0;
        param_1[0xb] = 0;
        param_1[0xe] = 0;
        param_1[0xd] = 0;
        param_1[0x10] = 0;
        param_1[0xf] = 0;
        goto LAB_109f62440;
      }
    }
    unaff_x20 = (ulong *)0x40;
    puVar26 = (ulong *)(0x40 - (ulong)bVar54);
    if (unaff_x24 <= (ulong *)(0x40 - (ulong)bVar54)) {
      puVar26 = unaff_x24;
    }
    puVar27 = (ulong *)((long)param_1 + (ulong)bVar54 + 0x48);
    puVar50 = unaff_x25;
    param_3 = puVar26;
    _memcpy();
    *(char *)(param_1 + 0x11) = (char)param_1[0x11] + (char)puVar26;
    uVar37 = param_1[8];
    bVar55 = POPCOUNT((char)uVar37) + POPCOUNT((char)(uVar37 >> 8)) +
             POPCOUNT((char)(uVar37 >> 0x10)) + POPCOUNT((char)(uVar37 >> 0x18)) +
             POPCOUNT((char)(uVar37 >> 0x20)) + POPCOUNT((char)(uVar37 >> 0x28)) +
             POPCOUNT((char)(uVar37 >> 0x30)) + POPCOUNT((char)(uVar37 >> 0x38));
    unaff_x21 = (ulong *)(ulong)bVar55;
    bVar54 = (byte)param_1[0x12];
    if (bVar55 < bVar54) {
      unaff_x22 = (ulong *)((long)param_1 + 0x91);
      puVar39 = &uStack_f0;
      do {
        uStack_e8 = param_1[1];
        uStack_f0 = *param_1;
        uStack_d8 = param_1[3];
        uStack_e0 = param_1[2];
        unaff_x24 = unaff_x22 + (long)(int)(uint)bVar54 * 4;
        uStack_c0 = unaff_x24[-7];
        uStack_c8 = unaff_x24[-8];
        uStack_b0 = unaff_x24[-5];
        uStack_b8 = unaff_x24[-6];
        uStack_a0 = unaff_x24[-3];
        uStack_a8 = unaff_x24[-4];
        uStack_90 = unaff_x24[-1];
        uStack_98 = unaff_x24[-2];
        uStack_88 = 0x40;
        uStack_d0 = 0;
        uVar31 = *(byte *)((long)param_1 + 0x8a) | 4;
        param_5 = (ulong *)(ulong)uVar31;
        uStack_87 = (undefined1)uVar31;
        uStack_178 = param_1[1];
        uStack_180 = *param_1;
        uStack_168 = param_1[3];
        uStack_170 = param_1[2];
        puVar27 = &uStack_180;
        puVar50 = &uStack_c8;
        param_3 = (ulong *)0x40;
        param_4 = (ulong *)0x0;
        FUN_109f62ccc();
        *(undefined4 *)(unaff_x24 + -8) = (undefined4)uStack_180;
        *(undefined4 *)((long)unaff_x24 + -0x3c) = uStack_180._4_4_;
        unaff_x24[-6] = uStack_170;
        unaff_x24[-7] = uStack_178;
        *(undefined4 *)(unaff_x24 + -5) = (undefined4)uStack_168;
        *(undefined4 *)((long)unaff_x24 + -0x24) = uStack_168._4_4_;
        bVar54 = (char)param_1[0x12] - 1;
        *(byte *)(param_1 + 0x12) = bVar54;
      } while (bVar55 < bVar54);
    }
  }
LAB_109f62574:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar27;
  }
  ___stack_chk_fail();
  puStack_280 = unaff_x28;
  puStack_278 = unaff_x27;
  puStack_270 = unaff_x26;
  puStack_268 = unaff_x25;
  puStack_260 = unaff_x24;
  puStack_258 = puVar39;
  puStack_250 = unaff_x22;
  puStack_248 = unaff_x21;
  puStack_240 = unaff_x20;
  puStack_238 = unaff_x19;
  pppuStack_230 = ppppuVar52;
  uStack_228 = 0x109f625b0;
  ppppuVar52 = &pppuStack_230;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x23 = (ulong *)0x0;
  if (param_4 == (ulong *)0x0) goto LAB_109f6292c;
  uVar37 = (ulong)(byte)puVar27[0x12];
  unaff_x20 = param_3;
  if (uVar37 == 0) {
    bStack_2d7 = *(byte *)((long)puVar27 + 0x8a) | *(char *)((long)puVar27 + 0x89) == '\0' | 2;
    cStack_2d8 = (char)puVar27[0x11];
    uStack_320 = puVar27[8];
    uStack_338 = puVar27[5];
    uStack_340 = puVar27[4];
    uStack_328 = puVar27[7];
    uStack_330 = puVar27[6];
    puVar39 = &uStack_340;
    uStack_310 = puVar27[10];
    uStack_318 = puVar27[9];
    uStack_300 = puVar27[0xc];
    uStack_308 = puVar27[0xb];
    uStack_2f0 = puVar27[0xe];
    uStack_2f8 = puVar27[0xd];
    uStack_2e0 = puVar27[0x10];
    uStack_2e8 = puVar27[0xf];
    unaff_x22 = (ulong *)((ulong)puVar50 >> 6);
    unaff_x26 = (undefined8 *)((ulong)puVar50 & 0x3f);
    unaff_x24 = auStack_2d0;
    unaff_x25 = (ulong *)0x40;
    do {
      param_5 = (ulong *)(ulong)(bStack_2d7 | 8);
      param_6 = auStack_2d0;
      unaff_x23 = unaff_x22;
      FUN_109f63ad0(&uStack_340,&uStack_318,cStack_2d8);
      unaff_x21 = param_4;
      if ((ulong *)(0x40 - (long)unaff_x26) <= param_4) {
        unaff_x21 = (ulong *)(0x40 - (long)unaff_x26);
      }
      puVar50 = (ulong *)((long)unaff_x24 + (long)unaff_x26);
      puVar27 = unaff_x20;
      param_3 = unaff_x21;
      _memcpy();
      unaff_x26 = (undefined8 *)0x0;
      unaff_x20 = (ulong *)((long)unaff_x20 + (long)unaff_x21);
      unaff_x22 = (ulong *)((long)unaff_x22 + 1);
      param_4 = (ulong *)((long)param_4 - (long)unaff_x21);
    } while (param_4 != (ulong *)0x0);
    unaff_x19 = (ulong *)0x0;
    goto LAB_109f6292c;
  }
  if ((char)puVar27[0x11] == '\0' && *(char *)((long)puVar27 + 0x89) == '\0') {
    bStack_2d7 = *(byte *)((long)puVar27 + 0x8a) | 4;
    uStack_338 = puVar27[1];
    uStack_340 = *puVar27;
    uStack_328 = puVar27[3];
    uStack_330 = puVar27[2];
    uStack_320 = 0;
    cStack_2d8 = '@';
    uVar37 = uVar37 - 2;
    uStack_310 = *(ulong *)((long)puVar27 + uVar37 * 0x20 + 0x99);
    uStack_318 = *(ulong *)((long)puVar27 + uVar37 * 0x20 + 0x91);
    uStack_300 = *(ulong *)((long)puVar27 + uVar37 * 0x20 + 0xa9);
    uStack_308 = *(ulong *)((long)puVar27 + uVar37 * 0x20 + 0xa1);
    uStack_2f0 = *(ulong *)((long)puVar27 + uVar37 * 0x20 + 0xb9);
    uStack_2f8 = *(ulong *)((long)puVar27 + uVar37 * 0x20 + 0xb1);
    uStack_2e0 = *(ulong *)((long)puVar27 + uVar37 * 0x20 + 0xc9);
    uStack_2e8 = *(ulong *)((long)puVar27 + uVar37 * 0x20 + 0xc1);
    if (uVar37 != 0) goto LAB_109f62768;
  }
  else {
    uStack_320 = puVar27[8];
    bStack_2d7 = *(byte *)((long)puVar27 + 0x8a) | *(char *)((long)puVar27 + 0x89) == '\0' | 2;
    uStack_338 = puVar27[5];
    uStack_340 = puVar27[4];
    uStack_328 = puVar27[7];
    uStack_330 = puVar27[6];
    uStack_310 = puVar27[10];
    uStack_318 = puVar27[9];
    uStack_300 = puVar27[0xc];
    uStack_308 = puVar27[0xb];
    uStack_2f0 = puVar27[0xe];
    uStack_2f8 = puVar27[0xd];
    uStack_2e0 = puVar27[0x10];
    uStack_2e8 = puVar27[0xf];
    cStack_2d8 = (char)puVar27[0x11];
LAB_109f62768:
    lVar51 = uVar37 * 0x20 + 0x71;
    do {
      uVar37 = uVar37 - 1;
      puVar39 = (ulong *)((long)puVar27 + lVar51);
      uStack_358 = puVar39[1];
      uStack_360 = *puVar39;
      uStack_348 = puVar39[3];
      uStack_350 = puVar39[2];
      auStack_2d0[1] = uStack_338;
      auStack_2d0[0] = uStack_340;
      auStack_2d0[3] = uStack_328;
      auStack_2d0[2] = uStack_330;
      FUN_109f62ccc(auStack_2d0,&uStack_318,cStack_2d8,uStack_320,bStack_2d7);
      uVar38 = uStack_2e0;
      uStack_2f8 = auStack_2d0[0];
      uStack_2f0 = auStack_2d0[1];
      uStack_2e8 = auStack_2d0[2];
      uStack_2e0._3_5_ = SUB85(uVar38,3);
      uStack_2e0._0_3_ =
           CONCAT12((char)(auStack_2d0[3] >> 0x10),
                    CONCAT11((char)(auStack_2d0[3] >> 8),(undefined1)uStack_2e0));
      uStack_338 = puVar27[1];
      uStack_340 = *puVar27;
      uStack_328 = puVar27[3];
      uStack_330 = puVar27[2];
      uStack_310 = uStack_358;
      uStack_318 = uStack_360;
      uStack_2e0 = CONCAT71(uStack_2e0._1_7_,(char)auStack_2d0[3]);
      uStack_2e0._0_5_ =
           CONCAT14((char)(auStack_2d0[3] >> 0x20),
                    CONCAT13((char)(auStack_2d0[3] >> 0x18),(undefined3)uStack_2e0));
      uStack_2e0._7_1_ = SUB81(uVar38,7);
      uVar25 = CONCAT16((char)(auStack_2d0[3] >> 0x30),
                        (int6)CONCAT35((int3)(auStack_2d0[3] >> 0x28),(undefined5)uStack_2e0));
      uStack_2e0 = CONCAT17(uStack_2e0._7_1_,uVar25);
      uStack_320 = 0;
      uStack_300 = uStack_348;
      uStack_308 = uStack_350;
      uStack_2e0 = CONCAT17((char)(auStack_2d0[3] >> 0x38),uVar25);
      cStack_2d8 = '@';
      lVar51 = lVar51 + -0x20;
      bStack_2d7 = *(byte *)((long)puVar27 + 0x8a) | 4;
    } while (uVar37 != 0);
  }
  cStack_2d8 = 0x40;
  uStack_320 = 0;
  unaff_x22 = (ulong *)((ulong)puVar50 >> 6);
  unaff_x26 = (undefined8 *)((ulong)puVar50 & 0x3f);
  puVar39 = &uStack_340;
  unaff_x24 = auStack_2d0;
  unaff_x25 = (ulong *)0x40;
  do {
    param_5 = (ulong *)(ulong)(bStack_2d7 | 8);
    param_6 = auStack_2d0;
    unaff_x23 = unaff_x22;
    FUN_109f63ad0(&uStack_340,&uStack_318,cStack_2d8);
    unaff_x21 = param_4;
    if ((ulong *)(0x40 - (long)unaff_x26) <= param_4) {
      unaff_x21 = (ulong *)(0x40 - (long)unaff_x26);
    }
    puVar50 = (ulong *)((long)unaff_x24 + (long)unaff_x26);
    puVar27 = unaff_x20;
    param_3 = unaff_x21;
    _memcpy();
    unaff_x26 = (undefined8 *)0x0;
    unaff_x20 = (ulong *)((long)unaff_x20 + (long)unaff_x21);
    unaff_x22 = (ulong *)((long)unaff_x22 + 1);
    param_4 = (ulong *)((long)param_4 - (long)unaff_x21);
    unaff_x19 = (ulong *)0x0;
  } while (param_4 != (ulong *)0x0);
LAB_109f6292c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return puVar27;
  }
  uVar53 = 0x109f62968;
  ___stack_chk_fail();
  puVar26 = &uStack_360;
  param_1 = param_3;
SUB_109f62968:
  while( true ) {
    puVar35 = param_6;
    puVar29 = puVar50;
    *(ulong **)((long)puVar26 + -0x60) = unaff_x28;
    *(ulong **)((long)puVar26 + -0x58) = unaff_x27;
    *(undefined8 **)((long)puVar26 + -0x50) = unaff_x26;
    *(ulong **)((long)puVar26 + -0x48) = unaff_x25;
    *(ulong **)((long)puVar26 + -0x40) = unaff_x24;
    *(ulong **)((long)puVar26 + -0x38) = puVar39;
    *(ulong **)((long)puVar26 + -0x30) = unaff_x22;
    *(ulong **)((long)puVar26 + -0x28) = unaff_x21;
    *(ulong **)((long)puVar26 + -0x20) = unaff_x20;
    *(ulong **)((long)puVar26 + -0x18) = unaff_x19;
    *(undefined8 *****)((long)puVar26 + -0x10) = ppppuVar52;
    *(undefined8 *)((long)puVar26 + -8) = uVar53;
    ppppuVar52 = (undefined8 ****)((long)puVar26 + -0x10);
    *(undefined8 *)((long)puVar26 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (puVar29 < (ulong *)0x401) break;
    uVar37 = LZCOUNT((long)puVar29 - 1U >> 10 | 1);
    puVar50 = (ulong *)(0x400L << ((uVar37 ^ 0x3f) & 0x3f));
    unaff_x26 = (undefined8 *)((long)puVar29 - (long)puVar50);
    unaff_x27 = (ulong *)((long)unaff_x23 + ((ulong)puVar50 >> 10));
    unaff_x28 = (ulong *)0x20;
    if (uVar37 != 0x3f) {
      unaff_x28 = (ulong *)0x40;
    }
    param_6 = (ulong *)((long)puVar26 + -0x1a0);
    uVar53 = 0x109f62a08;
    puVar26 = (ulong *)((long)puVar26 + -0x1b0);
    unaff_x19 = puVar35;
    unaff_x20 = puVar29;
    unaff_x21 = param_5;
    unaff_x22 = param_1;
    puVar39 = puVar50;
    unaff_x24 = puVar27;
    unaff_x25 = unaff_x23;
  }
  puVar50 = (ulong *)(ulong)(puVar29 == (ulong *)0x400);
  puVar39 = puVar29;
  if (puVar29 != (ulong *)0x400) {
    puVar39 = (ulong *)0x0;
  }
  *(ulong **)((long)puVar26 + -0xa8) = puVar27;
  *(ulong **)((long)puVar26 + -0x1a8) = puVar35;
  *(undefined1 *)((long)puVar26 + -0x1b0) = 2;
  piVar28 = (int *)((long)puVar26 + -0xa8);
  uVar31 = 0x10;
  puVar30 = puVar50;
  puVar32 = param_1;
  puVar34 = unaff_x23;
  FUN_109f64a10();
  uVar33 = (uint)puVar34;
  if (puVar39 < puVar29) {
    unaff_x26 = (undefined8 *)((long)puVar26 + -0x120);
    unaff_x27 = (ulong *)0x0;
    if (puVar29 != (ulong *)0x400) {
      unaff_x27 = puVar29;
    }
    puVar30 = param_1 + 1;
    uVar37 = *param_1;
    uVar41 = param_1[3];
    uVar38 = param_1[2];
    param_1 = (ulong *)((long)unaff_x23 + (long)puVar50);
    *(ulong *)((long)puVar26 + -0x198) = *puVar30;
    *(ulong *)((long)puVar26 + -0x1a0) = uVar37;
    *(ulong *)((long)puVar26 + -0x188) = uVar41;
    *(ulong *)((long)puVar26 + -400) = uVar38;
    unaff_x23 = (ulong *)((long)puVar26 + -0x178);
    *(undefined8 *)((long)puVar26 + -0x170) = 0;
    *(undefined8 *)((long)puVar26 + -0x178) = 0;
    *(undefined8 *)((long)puVar26 + -0x160) = 0;
    *(undefined8 *)((long)puVar26 + -0x168) = 0;
    *(undefined8 *)((long)puVar26 + -0x150) = 0;
    *(undefined8 *)((long)puVar26 + -0x158) = 0;
    *(undefined8 *)((long)puVar26 + -0x140) = 0;
    *(undefined8 *)((long)puVar26 + -0x148) = 0;
    *(undefined2 *)((long)puVar26 + -0x138) = 0;
    *(char *)((long)puVar26 + -0x136) = (char)param_5;
    param_5 = (ulong *)((long)puVar27 + (long)puVar39);
    *(ulong **)((long)puVar26 + -0x180) = param_1;
    if (unaff_x27 < (ulong *)0x41) {
      uVar37 = 0;
    }
    else {
      cVar36 = '\0';
      unaff_x27 = puVar29;
      do {
        FUN_109f62ccc((undefined1 *)((long)puVar26 + -0x1a0),param_5,0x40,
                      *(undefined8 *)((long)puVar26 + -0x180),
                      *(byte *)((long)puVar26 + -0x136) | cVar36 == '\0');
        cVar36 = *(char *)((long)puVar26 + -0x137) + '\x01';
        *(char *)((long)puVar26 + -0x137) = cVar36;
        param_5 = param_5 + 8;
        unaff_x27 = unaff_x27 + -8;
      } while ((ulong *)0x40 < unaff_x27);
      uVar37 = (ulong)*(byte *)((long)puVar26 + -0x138);
      param_1 = *(ulong **)((long)puVar26 + -0x180);
    }
    puVar50 = (ulong *)(0x40 - uVar37);
    if (unaff_x27 <= (ulong *)(0x40 - uVar37)) {
      puVar50 = unaff_x27;
    }
    _memcpy((long)unaff_x23 + uVar37,param_5,puVar50);
    *(undefined8 *)((long)puVar26 + -0x118) = *(undefined8 *)((long)puVar26 + -0x198);
    *(undefined8 *)((long)puVar26 + -0x120) = *(undefined8 *)((long)puVar26 + -0x1a0);
    *(undefined8 *)((long)puVar26 + -0x108) = *(undefined8 *)((long)puVar26 + -0x188);
    *(undefined8 *)((long)puVar26 + -0x110) = *(undefined8 *)((long)puVar26 + -400);
    *(undefined8 *)((long)puVar26 + -0xf0) = *(undefined8 *)((long)puVar26 + -0x170);
    *(ulong *)((long)puVar26 + -0xf8) = *unaff_x23;
    *(undefined8 *)((long)puVar26 + -0xe0) = *(undefined8 *)((long)puVar26 + -0x160);
    *(undefined8 *)((long)puVar26 + -0xe8) = *(undefined8 *)((long)puVar26 + -0x168);
    *(undefined8 *)((long)puVar26 + -0xd0) = *(undefined8 *)((long)puVar26 + -0x150);
    *(undefined8 *)((long)puVar26 + -0xd8) = *(undefined8 *)((long)puVar26 + -0x158);
    *(undefined8 *)((long)puVar26 + -0xc0) = *(undefined8 *)((long)puVar26 + -0x140);
    *(undefined8 *)((long)puVar26 + -200) = *(undefined8 *)((long)puVar26 + -0x148);
    bVar54 = *(byte *)((long)puVar26 + -0x138);
    uVar24 = (undefined1)((uint)bVar54 + (int)puVar50);
    *(undefined1 *)((long)puVar26 + -0x138) = uVar24;
    *(undefined1 *)((long)puVar26 + -0xb8) = uVar24;
    *(ulong **)((long)puVar26 + -0x100) = param_1;
    *(byte *)((long)puVar26 + -0xb7) =
         *(byte *)((long)puVar26 + -0x136) | *(char *)((long)puVar26 + -0x137) == '\0' | 2;
    *(undefined8 *)((long)puVar26 + -0x98) = *(undefined8 *)((long)puVar26 + -0x198);
    *(undefined8 *)((long)puVar26 + -0xa0) = *(undefined8 *)((long)puVar26 + -0x1a0);
    *(undefined8 *)((long)puVar26 + -0x88) = *(undefined8 *)((long)puVar26 + -0x188);
    *(undefined8 *)((long)puVar26 + -0x90) = *(undefined8 *)((long)puVar26 + -400);
    piVar28 = (int *)((long)puVar26 + -0xa0);
    puVar30 = (ulong *)((long)puVar26 + -0xf8);
    uVar31 = (uint)bVar54 + (int)puVar50 & 0xff;
    uVar33 = (uint)(byte)(*(byte *)((long)puVar26 + -0x136) |
                          *(char *)((long)puVar26 + -0x137) == '\0' | 2);
    puVar32 = param_1;
    FUN_109f62ccc();
    lVar51 = 0x20;
    if (puVar29 != (ulong *)0x400) {
      lVar51 = 0;
    }
    puVar4 = (undefined4 *)((long)puVar35 + lVar51);
    uVar44 = *(undefined4 *)((long)puVar26 + -0x9c);
    *puVar4 = *(undefined4 *)((long)puVar26 + -0xa0);
    puVar4[1] = uVar44;
    uVar53 = *(undefined8 *)((long)puVar26 + -0x98);
    *(undefined8 *)(puVar4 + 4) = *(undefined8 *)((long)puVar26 + -0x90);
    *(undefined8 *)(puVar4 + 2) = uVar53;
    uVar44 = *(undefined4 *)((long)puVar26 + -0x84);
    puVar4[6] = *(undefined4 *)((long)puVar26 + -0x88);
    puVar4[7] = uVar44;
    puVar50 = (ulong *)0x1;
    if (puVar29 == (ulong *)0x400) {
      puVar50 = (ulong *)0x2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)puVar26 + -0x78)) {
    ___stack_chk_fail();
    *(ulong **)((long)puVar26 + -0x210) = puVar39;
    *(ulong **)((long)puVar26 + -0x208) = unaff_x27;
    *(undefined8 **)((long)puVar26 + -0x200) = unaff_x26;
    *(ulong **)((long)puVar26 + -0x1f8) = unaff_x23;
    *(ulong **)((long)puVar26 + -0x1f0) = puVar27;
    *(ulong **)((long)puVar26 + -0x1e8) = puVar50;
    *(ulong **)((long)puVar26 + -0x1e0) = param_1;
    *(ulong **)((long)puVar26 + -0x1d8) = param_5;
    *(ulong **)((long)puVar26 + -0x1d0) = puVar29;
    *(ulong **)((long)puVar26 + -0x1c8) = puVar35;
    *(undefined8 *****)((long)puVar26 + -0x1c0) = ppppuVar52;
    *(code **)((long)puVar26 + -0x1b8) = FUN_109f62ccc;
    uVar37 = *puVar30;
    iVar15 = *(int *)((long)puVar30 + 4);
    *(int *)((long)puVar26 + -0x224) = (int)uVar37;
    *(int *)((long)puVar26 + -0x230) = iVar15;
    iVar16 = piVar28[1];
    uVar17 = piVar28[5];
    uVar1 = *piVar28 + (int)uVar37 + piVar28[4];
    uVar5 = uVar1 ^ (uint)puVar32;
    uVar2 = (uVar5 >> 0x10 | uVar5 << 0x10) + 0x6a09e667;
    uVar6 = uVar2 ^ piVar28[4];
    uVar1 = uVar1 + iVar15 + (uVar6 >> 0xc | uVar6 << 0x14);
    uVar7 = uVar1 ^ (uVar5 >> 0x10 | uVar5 << 0x10);
    uVar37 = puVar30[1];
    iVar15 = *(int *)((long)puVar30 + 0xc);
    *(int *)((long)puVar26 + -0x238) = (int)uVar37;
    *(int *)((long)puVar26 + -0x218) = iVar15;
    uVar5 = iVar16 + (int)uVar37 + uVar17;
    uVar8 = uVar5 ^ (uint)((ulong)puVar32 >> 0x20);
    uVar3 = (uVar8 >> 0x10 | uVar8 << 0x10) + 0xbb67ae85;
    uVar17 = uVar3 ^ uVar17;
    uVar5 = uVar5 + iVar15 + (uVar17 >> 0xc | uVar17 << 0x14);
    uVar9 = uVar5 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
    uVar3 = (uVar9 >> 8 | uVar9 << 0x18) + uVar3;
    uVar10 = uVar3 ^ (uVar17 >> 0xc | uVar17 << 0x14);
    uVar37 = puVar30[2];
    iVar15 = *(int *)((long)puVar30 + 0x14);
    *(int *)((long)puVar26 + -0x214) = (int)uVar37;
    *(int *)((long)puVar26 + -0x244) = iVar15;
    *(int **)((long)puVar26 + -600) = piVar28;
    iVar16 = piVar28[3];
    uVar18 = piVar28[7];
    uVar8 = piVar28[2] + (int)uVar37 + piVar28[6];
    uVar31 = uVar8 ^ uVar31;
    uVar17 = (uVar31 >> 0x10 | uVar31 << 0x10) + 0x3c6ef372;
    uVar11 = uVar17 ^ piVar28[6];
    uVar8 = uVar8 + iVar15 + (uVar11 >> 0xc | uVar11 << 0x14);
    uVar12 = uVar8 ^ (uVar31 >> 0x10 | uVar31 << 0x10);
    uVar17 = (uVar12 >> 8 | uVar12 << 0x18) + uVar17;
    uVar13 = uVar17 ^ (uVar11 >> 0xc | uVar11 << 0x14);
    iVar15 = (int)puVar30[3];
    iVar19 = *(int *)((long)puVar30 + 0x1c);
    *(int *)((long)puVar26 + -0x228) = iVar19;
    *(int *)((long)puVar26 + -0x220) = iVar15;
    uVar31 = iVar16 + iVar15 + uVar18;
    uVar33 = uVar31 ^ uVar33;
    uVar11 = (uVar33 >> 0x10 | uVar33 << 0x10) + 0xa54ff53a;
    uVar18 = uVar11 ^ uVar18;
    uVar31 = uVar31 + iVar19 + (uVar18 >> 0xc | uVar18 << 0x14);
    uVar14 = uVar31 ^ (uVar33 >> 0x10 | uVar33 << 0x10);
    uVar2 = (uVar7 >> 8 | uVar7 << 0x18) + uVar2;
    uVar37 = puVar30[4];
    iVar20 = *(int *)((long)puVar30 + 0x24);
    *(int *)((long)puVar26 + -0x240) = (int)uVar37;
    *(int *)((long)puVar26 + -0x23c) = iVar20;
    uVar33 = uVar1 + (int)uVar37 + (uVar10 >> 7 | uVar10 << 0x19);
    uVar1 = uVar33 ^ (uVar14 >> 8 | uVar14 << 0x18);
    uVar11 = (uVar14 >> 8 | uVar14 << 0x18) + uVar11;
    uVar17 = (uVar1 >> 0x10 | uVar1 << 0x10) + uVar17;
    uVar10 = uVar17 ^ (uVar10 >> 7 | uVar10 << 0x19);
    uVar33 = uVar33 + iVar20 + (uVar10 >> 0xc | uVar10 << 0x14);
    uVar14 = uVar33 ^ (uVar1 >> 0x10 | uVar1 << 0x10);
    uVar17 = (uVar14 >> 8 | uVar14 << 0x18) + uVar17;
    iVar16 = (int)puVar30[5];
    iVar21 = *(int *)((long)puVar30 + 0x2c);
    uVar1 = uVar5 + iVar16 + (uVar13 >> 7 | uVar13 << 0x19);
    uVar5 = uVar1 ^ (uVar7 >> 8 | uVar7 << 0x18);
    uVar7 = uVar11 ^ (uVar18 >> 0xc | uVar18 << 0x14);
    uVar11 = (uVar5 >> 0x10 | uVar5 << 0x10) + uVar11;
    uVar13 = uVar11 ^ (uVar13 >> 7 | uVar13 << 0x19);
    *(int *)((long)puVar26 + -0x25c) = iVar21;
    uVar1 = uVar1 + iVar21 + (uVar13 >> 0xc | uVar13 << 0x14);
    uVar18 = uVar1 ^ (uVar5 >> 0x10 | uVar5 << 0x10);
    uVar11 = (uVar18 >> 8 | uVar18 << 0x18) + uVar11;
    iVar19 = (int)puVar30[6];
    iVar22 = *(int *)((long)puVar30 + 0x34);
    uVar5 = uVar8 + iVar19 + (uVar7 >> 7 | uVar7 << 0x19);
    uVar8 = uVar2 ^ (uVar6 >> 0xc | uVar6 << 0x14);
    uVar6 = uVar5 ^ (uVar9 >> 8 | uVar9 << 0x18);
    uVar2 = (uVar6 >> 0x10 | uVar6 << 0x10) + uVar2;
    uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
    uVar5 = uVar5 + iVar22 + (uVar7 >> 0xc | uVar7 << 0x14);
    uVar37 = puVar30[7];
    iVar23 = *(int *)((long)puVar30 + 0x3c);
    *(int *)((long)puVar26 + -0x234) = (int)uVar37;
    uVar31 = uVar31 + (int)uVar37 + (uVar8 >> 7 | uVar8 << 0x19);
    uVar9 = uVar31 ^ (uVar12 >> 8 | uVar12 << 0x18);
    uVar3 = (uVar9 >> 0x10 | uVar9 << 0x10) + uVar3;
    uVar8 = uVar3 ^ (uVar8 >> 7 | uVar8 << 0x19);
    *(int *)((long)puVar26 + -0x24c) = iVar23;
    uVar31 = uVar31 + iVar23 + (uVar8 >> 0xc | uVar8 << 0x14);
    uVar6 = uVar5 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
    uVar9 = uVar31 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar2 = (uVar6 >> 8 | uVar6 << 0x18) + uVar2;
    uVar3 = (uVar9 >> 8 | uVar9 << 0x18) + uVar3;
    uVar8 = uVar3 ^ (uVar8 >> 0xc | uVar8 << 0x14);
    uVar33 = uVar33 + *(int *)((long)puVar26 + -0x238) + (uVar8 >> 7 | uVar8 << 0x19);
    uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
    uVar12 = uVar33 ^ (uVar18 >> 8 | uVar18 << 0x18);
    uVar2 = (uVar12 >> 0x10 | uVar12 << 0x10) + uVar2;
    uVar8 = uVar2 ^ (uVar8 >> 7 | uVar8 << 0x19);
    uVar33 = uVar33 + iVar15 + (uVar8 >> 0xc | uVar8 << 0x14);
    uVar12 = uVar33 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    uVar2 = (uVar12 >> 8 | uVar12 << 0x18) + uVar2;
    uVar10 = uVar17 ^ (uVar10 >> 0xc | uVar10 << 0x14);
    uVar1 = uVar1 + *(int *)((long)puVar26 + -0x218) + (uVar10 >> 7 | uVar10 << 0x19);
    uVar6 = uVar1 ^ (uVar6 >> 8 | uVar6 << 0x18);
    uVar3 = (uVar6 >> 0x10 | uVar6 << 0x10) + uVar3;
    uVar10 = uVar3 ^ (uVar10 >> 7 | uVar10 << 0x19);
    uVar1 = uVar1 + iVar16 + (uVar10 >> 0xc | uVar10 << 0x14);
    uVar6 = uVar1 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
    uVar3 = (uVar6 >> 8 | uVar6 << 0x18) + uVar3;
    uVar13 = uVar11 ^ (uVar13 >> 0xc | uVar13 << 0x14);
    iVar15 = *(int *)((long)puVar26 + -0x228);
    uVar5 = uVar5 + iVar15 + (uVar13 >> 7 | uVar13 << 0x19);
    uVar9 = uVar5 ^ (uVar9 >> 8 | uVar9 << 0x18);
    uVar17 = (uVar9 >> 0x10 | uVar9 << 0x10) + uVar17;
    uVar13 = uVar17 ^ (uVar13 >> 7 | uVar13 << 0x19);
    uVar5 = uVar5 + *(int *)((long)puVar26 + -0x224) + (uVar13 >> 0xc | uVar13 << 0x14);
    uVar31 = uVar31 + *(int *)((long)puVar26 + -0x214) + (uVar7 >> 7 | uVar7 << 0x19);
    uVar18 = uVar31 ^ (uVar14 >> 8 | uVar14 << 0x18);
    uVar11 = (uVar18 >> 0x10 | uVar18 << 0x10) + uVar11;
    uVar7 = uVar11 ^ (uVar7 >> 7 | uVar7 << 0x19);
    *(int *)((long)puVar26 + -0x21c) = iVar22;
    uVar31 = uVar31 + iVar22 + (uVar7 >> 0xc | uVar7 << 0x14);
    uVar9 = uVar5 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar18 = uVar31 ^ (uVar18 >> 0x10 | uVar18 << 0x10);
    uVar17 = (uVar9 >> 8 | uVar9 << 0x18) + uVar17;
    uVar11 = (uVar18 >> 8 | uVar18 << 0x18) + uVar11;
    uVar10 = uVar3 ^ (uVar10 >> 0xc | uVar10 << 0x14);
    uVar33 = uVar33 + *(int *)((long)puVar26 + -0x230) + (uVar10 >> 7 | uVar10 << 0x19);
    uVar13 = uVar17 ^ (uVar13 >> 0xc | uVar13 << 0x14);
    uVar18 = uVar33 ^ (uVar18 >> 8 | uVar18 << 0x18);
    uVar17 = (uVar18 >> 0x10 | uVar18 << 0x10) + uVar17;
    uVar10 = uVar17 ^ (uVar10 >> 7 | uVar10 << 0x19);
    uVar33 = uVar33 + iVar21 + (uVar10 >> 0xc | uVar10 << 0x14);
    uVar18 = uVar33 ^ (uVar18 >> 0x10 | uVar18 << 0x10);
    uVar17 = (uVar18 >> 8 | uVar18 << 0x18) + uVar17;
    *(int *)((long)puVar26 + -0x22c) = iVar19;
    uVar1 = uVar1 + iVar19 + (uVar13 >> 7 | uVar13 << 0x19);
    uVar7 = uVar11 ^ (uVar7 >> 0xc | uVar7 << 0x14);
    uVar12 = uVar1 ^ (uVar12 >> 8 | uVar12 << 0x18);
    uVar11 = (uVar12 >> 0x10 | uVar12 << 0x10) + uVar11;
    uVar13 = uVar11 ^ (uVar13 >> 7 | uVar13 << 0x19);
    uVar1 = uVar1 + *(int *)((long)puVar26 + -0x244) + (uVar13 >> 0xc | uVar13 << 0x14);
    uVar12 = uVar1 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    uVar11 = (uVar12 >> 8 | uVar12 << 0x18) + uVar11;
    uVar5 = uVar5 + iVar20 + (uVar7 >> 7 | uVar7 << 0x19);
    uVar8 = uVar2 ^ (uVar8 >> 0xc | uVar8 << 0x14);
    uVar6 = uVar5 ^ (uVar6 >> 8 | uVar6 << 0x18);
    uVar2 = (uVar6 >> 0x10 | uVar6 << 0x10) + uVar2;
    uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
    uVar5 = uVar5 + *(int *)((long)puVar26 + -0x234) + (uVar7 >> 0xc | uVar7 << 0x14);
    uVar31 = uVar31 + iVar23 + (uVar8 >> 7 | uVar8 << 0x19);
    uVar9 = uVar31 ^ (uVar9 >> 8 | uVar9 << 0x18);
    uVar3 = (uVar9 >> 0x10 | uVar9 << 0x10) + uVar3;
    uVar8 = uVar3 ^ (uVar8 >> 7 | uVar8 << 0x19);
    uVar31 = uVar31 + *(int *)((long)puVar26 + -0x240) + (uVar8 >> 0xc | uVar8 << 0x14);
    uVar6 = uVar5 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
    uVar9 = uVar31 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar2 = (uVar6 >> 8 | uVar6 << 0x18) + uVar2;
    uVar3 = (uVar9 >> 8 | uVar9 << 0x18) + uVar3;
    uVar8 = uVar3 ^ (uVar8 >> 0xc | uVar8 << 0x14);
    uVar33 = uVar33 + *(int *)((long)puVar26 + -0x218) + (uVar8 >> 7 | uVar8 << 0x19);
    uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
    uVar12 = uVar33 ^ (uVar12 >> 8 | uVar12 << 0x18);
    uVar2 = (uVar12 >> 0x10 | uVar12 << 0x10) + uVar2;
    uVar8 = uVar2 ^ (uVar8 >> 7 | uVar8 << 0x19);
    uVar33 = uVar33 + *(int *)((long)puVar26 + -0x214) + (uVar8 >> 0xc | uVar8 << 0x14);
    uVar12 = uVar33 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    uVar2 = (uVar12 >> 8 | uVar12 << 0x18) + uVar2;
    uVar10 = uVar17 ^ (uVar10 >> 0xc | uVar10 << 0x14);
    *(int *)((long)puVar26 + -0x248) = iVar16;
    uVar1 = uVar1 + iVar16 + (uVar10 >> 7 | uVar10 << 0x19);
    uVar6 = uVar1 ^ (uVar6 >> 8 | uVar6 << 0x18);
    uVar3 = (uVar6 >> 0x10 | uVar6 << 0x10) + uVar3;
    uVar10 = uVar3 ^ (uVar10 >> 7 | uVar10 << 0x19);
    uVar1 = uVar1 + iVar19 + (uVar10 >> 0xc | uVar10 << 0x14);
    uVar6 = uVar1 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
    uVar3 = (uVar6 >> 8 | uVar6 << 0x18) + uVar3;
    uVar13 = uVar11 ^ (uVar13 >> 0xc | uVar13 << 0x14);
    uVar5 = uVar5 + iVar22 + (uVar13 >> 7 | uVar13 << 0x19);
    uVar9 = uVar5 ^ (uVar9 >> 8 | uVar9 << 0x18);
    uVar17 = (uVar9 >> 0x10 | uVar9 << 0x10) + uVar17;
    uVar13 = uVar17 ^ (uVar13 >> 7 | uVar13 << 0x19);
    uVar5 = uVar5 + *(int *)((long)puVar26 + -0x238) + (uVar13 >> 0xc | uVar13 << 0x14);
    uVar31 = uVar31 + iVar15 + (uVar7 >> 7 | uVar7 << 0x19);
    uVar18 = uVar31 ^ (uVar18 >> 8 | uVar18 << 0x18);
    uVar11 = (uVar18 >> 0x10 | uVar18 << 0x10) + uVar11;
    uVar7 = uVar11 ^ (uVar7 >> 7 | uVar7 << 0x19);
    uVar31 = uVar31 + *(int *)((long)puVar26 + -0x234) + (uVar7 >> 0xc | uVar7 << 0x14);
    uVar9 = uVar5 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar18 = uVar31 ^ (uVar18 >> 0x10 | uVar18 << 0x10);
    uVar17 = (uVar9 >> 8 | uVar9 << 0x18) + uVar17;
    uVar11 = (uVar18 >> 8 | uVar18 << 0x18) + uVar11;
    uVar10 = uVar3 ^ (uVar10 >> 0xc | uVar10 << 0x14);
    uVar33 = uVar33 + *(int *)((long)puVar26 + -0x220) + (uVar10 >> 7 | uVar10 << 0x19);
    uVar13 = uVar17 ^ (uVar13 >> 0xc | uVar13 << 0x14);
    uVar18 = uVar33 ^ (uVar18 >> 8 | uVar18 << 0x18);
    uVar17 = (uVar18 >> 0x10 | uVar18 << 0x10) + uVar17;
    uVar10 = uVar17 ^ (uVar10 >> 7 | uVar10 << 0x19);
    uVar33 = uVar33 + *(int *)((long)puVar26 + -0x244) + (uVar10 >> 0xc | uVar10 << 0x14);
    uVar18 = uVar33 ^ (uVar18 >> 0x10 | uVar18 << 0x10);
    uVar17 = (uVar18 >> 8 | uVar18 << 0x18) + uVar17;
    uVar1 = uVar1 + *(int *)((long)puVar26 + -0x23c) + (uVar13 >> 7 | uVar13 << 0x19);
    uVar7 = uVar11 ^ (uVar7 >> 0xc | uVar7 << 0x14);
    uVar12 = uVar1 ^ (uVar12 >> 8 | uVar12 << 0x18);
    uVar11 = (uVar12 >> 0x10 | uVar12 << 0x10) + uVar11;
    uVar13 = uVar11 ^ (uVar13 >> 7 | uVar13 << 0x19);
    uVar1 = uVar1 + *(int *)((long)puVar26 + -0x224) + (uVar13 >> 0xc | uVar13 << 0x14);
    uVar12 = uVar1 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    uVar11 = (uVar12 >> 8 | uVar12 << 0x18) + uVar11;
    iVar19 = *(int *)((long)puVar26 + -0x25c);
    uVar5 = uVar5 + iVar19 + (uVar7 >> 7 | uVar7 << 0x19);
    uVar8 = uVar2 ^ (uVar8 >> 0xc | uVar8 << 0x14);
    uVar6 = uVar5 ^ (uVar6 >> 8 | uVar6 << 0x18);
    uVar2 = (uVar6 >> 0x10 | uVar6 << 0x10) + uVar2;
    uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
    iVar20 = *(int *)((long)puVar26 + -0x24c);
    uVar5 = uVar5 + iVar20 + (uVar7 >> 0xc | uVar7 << 0x14);
    uVar31 = uVar31 + *(int *)((long)puVar26 + -0x240) + (uVar8 >> 7 | uVar8 << 0x19);
    uVar9 = uVar31 ^ (uVar9 >> 8 | uVar9 << 0x18);
    uVar3 = (uVar9 >> 0x10 | uVar9 << 0x10) + uVar3;
    uVar8 = uVar3 ^ (uVar8 >> 7 | uVar8 << 0x19);
    uVar31 = uVar31 + *(int *)((long)puVar26 + -0x230) + (uVar8 >> 0xc | uVar8 << 0x14);
    uVar6 = uVar5 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
    uVar9 = uVar31 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar2 = (uVar6 >> 8 | uVar6 << 0x18) + uVar2;
    uVar3 = (uVar9 >> 8 | uVar9 << 0x18) + uVar3;
    uVar8 = uVar3 ^ (uVar8 >> 0xc | uVar8 << 0x14);
    uVar33 = uVar33 + iVar16 + (uVar8 >> 7 | uVar8 << 0x19);
    uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
    uVar12 = uVar33 ^ (uVar12 >> 8 | uVar12 << 0x18);
    uVar2 = (uVar12 >> 0x10 | uVar12 << 0x10) + uVar2;
    uVar8 = uVar2 ^ (uVar8 >> 7 | uVar8 << 0x19);
    uVar33 = uVar33 + iVar15 + (uVar8 >> 0xc | uVar8 << 0x14);
    uVar12 = uVar33 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    uVar2 = (uVar12 >> 8 | uVar12 << 0x18) + uVar2;
    uVar10 = uVar17 ^ (uVar10 >> 0xc | uVar10 << 0x14);
    uVar1 = uVar1 + *(int *)((long)puVar26 + -0x22c) + (uVar10 >> 7 | uVar10 << 0x19);
    uVar6 = uVar1 ^ (uVar6 >> 8 | uVar6 << 0x18);
    uVar3 = (uVar6 >> 0x10 | uVar6 << 0x10) + uVar3;
    uVar10 = uVar3 ^ (uVar10 >> 7 | uVar10 << 0x19);
    uVar1 = uVar1 + *(int *)((long)puVar26 + -0x23c) + (uVar10 >> 0xc | uVar10 << 0x14);
    uVar6 = uVar1 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
    uVar3 = (uVar6 >> 8 | uVar6 << 0x18) + uVar3;
    uVar13 = uVar11 ^ (uVar13 >> 0xc | uVar13 << 0x14);
    iVar21 = *(int *)((long)puVar26 + -0x234);
    uVar5 = uVar5 + iVar21 + (uVar13 >> 7 | uVar13 << 0x19);
    uVar9 = uVar5 ^ (uVar9 >> 8 | uVar9 << 0x18);
    uVar17 = (uVar9 >> 0x10 | uVar9 << 0x10) + uVar17;
    uVar13 = uVar17 ^ (uVar13 >> 7 | uVar13 << 0x19);
    uVar5 = uVar5 + *(int *)((long)puVar26 + -0x218) + (uVar13 >> 0xc | uVar13 << 0x14);
    uVar31 = uVar31 + *(int *)((long)puVar26 + -0x21c) + (uVar7 >> 7 | uVar7 << 0x19);
    uVar18 = uVar31 ^ (uVar18 >> 8 | uVar18 << 0x18);
    uVar11 = (uVar18 >> 0x10 | uVar18 << 0x10) + uVar11;
    uVar7 = uVar11 ^ (uVar7 >> 7 | uVar7 << 0x19);
    uVar31 = uVar31 + iVar20 + (uVar7 >> 0xc | uVar7 << 0x14);
    uVar9 = uVar5 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar18 = uVar31 ^ (uVar18 >> 0x10 | uVar18 << 0x10);
    uVar17 = (uVar9 >> 8 | uVar9 << 0x18) + uVar17;
    uVar11 = (uVar18 >> 8 | uVar18 << 0x18) + uVar11;
    uVar10 = uVar3 ^ (uVar10 >> 0xc | uVar10 << 0x14);
    uVar33 = uVar33 + *(int *)((long)puVar26 + -0x214) + (uVar10 >> 7 | uVar10 << 0x19);
    uVar13 = uVar17 ^ (uVar13 >> 0xc | uVar13 << 0x14);
    uVar18 = uVar33 ^ (uVar18 >> 8 | uVar18 << 0x18);
    uVar17 = (uVar18 >> 0x10 | uVar18 << 0x10) + uVar17;
    uVar10 = uVar17 ^ (uVar10 >> 7 | uVar10 << 0x19);
    uVar33 = uVar33 + *(int *)((long)puVar26 + -0x224) + (uVar10 >> 0xc | uVar10 << 0x14);
    uVar18 = uVar33 ^ (uVar18 >> 0x10 | uVar18 << 0x10);
    uVar17 = (uVar18 >> 8 | uVar18 << 0x18) + uVar17;
    uVar1 = uVar1 + iVar19 + (uVar13 >> 7 | uVar13 << 0x19);
    uVar7 = uVar11 ^ (uVar7 >> 0xc | uVar7 << 0x14);
    uVar12 = uVar1 ^ (uVar12 >> 8 | uVar12 << 0x18);
    uVar11 = (uVar12 >> 0x10 | uVar12 << 0x10) + uVar11;
    uVar13 = uVar11 ^ (uVar13 >> 7 | uVar13 << 0x19);
    iVar22 = *(int *)((long)puVar26 + -0x238);
    uVar1 = uVar1 + iVar22 + (uVar13 >> 0xc | uVar13 << 0x14);
    uVar12 = uVar1 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    uVar11 = (uVar12 >> 8 | uVar12 << 0x18) + uVar11;
    iVar15 = *(int *)((long)puVar26 + -0x244);
    iVar16 = *(int *)((long)puVar26 + -0x240);
    uVar5 = uVar5 + iVar15 + (uVar7 >> 7 | uVar7 << 0x19);
    uVar8 = uVar2 ^ (uVar8 >> 0xc | uVar8 << 0x14);
    uVar6 = uVar5 ^ (uVar6 >> 8 | uVar6 << 0x18);
    uVar2 = (uVar6 >> 0x10 | uVar6 << 0x10) + uVar2;
    uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
    uVar5 = uVar5 + iVar16 + (uVar7 >> 0xc | uVar7 << 0x14);
    uVar31 = uVar31 + *(int *)((long)puVar26 + -0x230) + (uVar8 >> 7 | uVar8 << 0x19);
    uVar9 = uVar31 ^ (uVar9 >> 8 | uVar9 << 0x18);
    uVar3 = (uVar9 >> 0x10 | uVar9 << 0x10) + uVar3;
    uVar8 = uVar3 ^ (uVar8 >> 7 | uVar8 << 0x19);
    uVar31 = uVar31 + *(int *)((long)puVar26 + -0x220) + (uVar8 >> 0xc | uVar8 << 0x14);
    uVar6 = uVar5 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
    uVar9 = uVar31 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar2 = (uVar6 >> 8 | uVar6 << 0x18) + uVar2;
    uVar3 = (uVar9 >> 8 | uVar9 << 0x18) + uVar3;
    uVar8 = uVar3 ^ (uVar8 >> 0xc | uVar8 << 0x14);
    uVar33 = uVar33 + *(int *)((long)puVar26 + -0x22c) + (uVar8 >> 7 | uVar8 << 0x19);
    uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
    uVar12 = uVar33 ^ (uVar12 >> 8 | uVar12 << 0x18);
    uVar2 = (uVar12 >> 0x10 | uVar12 << 0x10) + uVar2;
    uVar8 = uVar2 ^ (uVar8 >> 7 | uVar8 << 0x19);
    uVar33 = uVar33 + *(int *)((long)puVar26 + -0x21c) + (uVar8 >> 0xc | uVar8 << 0x14);
    uVar12 = uVar33 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    uVar2 = (uVar12 >> 8 | uVar12 << 0x18) + uVar2;
    uVar10 = uVar17 ^ (uVar10 >> 0xc | uVar10 << 0x14);
    uVar1 = uVar1 + *(int *)((long)puVar26 + -0x23c) + (uVar10 >> 7 | uVar10 << 0x19);
    uVar6 = uVar1 ^ (uVar6 >> 8 | uVar6 << 0x18);
    uVar3 = (uVar6 >> 0x10 | uVar6 << 0x10) + uVar3;
    uVar10 = uVar3 ^ (uVar10 >> 7 | uVar10 << 0x19);
    uVar1 = uVar1 + iVar19 + (uVar10 >> 0xc | uVar10 << 0x14);
    uVar6 = uVar1 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
    uVar3 = (uVar6 >> 8 | uVar6 << 0x18) + uVar3;
    uVar13 = uVar11 ^ (uVar13 >> 0xc | uVar13 << 0x14);
    uVar5 = uVar5 + iVar20 + (uVar13 >> 7 | uVar13 << 0x19);
    uVar9 = uVar5 ^ (uVar9 >> 8 | uVar9 << 0x18);
    uVar17 = (uVar9 >> 0x10 | uVar9 << 0x10) + uVar17;
    uVar13 = uVar17 ^ (uVar13 >> 7 | uVar13 << 0x19);
    uVar5 = uVar5 + *(int *)((long)puVar26 + -0x248) + (uVar13 >> 0xc | uVar13 << 0x14);
    uVar31 = uVar31 + iVar21 + (uVar7 >> 7 | uVar7 << 0x19);
    uVar18 = uVar31 ^ (uVar18 >> 8 | uVar18 << 0x18);
    uVar11 = (uVar18 >> 0x10 | uVar18 << 0x10) + uVar11;
    uVar7 = uVar11 ^ (uVar7 >> 7 | uVar7 << 0x19);
    uVar31 = uVar31 + iVar16 + (uVar7 >> 0xc | uVar7 << 0x14);
    uVar9 = uVar5 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar18 = uVar31 ^ (uVar18 >> 0x10 | uVar18 << 0x10);
    uVar17 = (uVar9 >> 8 | uVar9 << 0x18) + uVar17;
    uVar11 = (uVar18 >> 8 | uVar18 << 0x18) + uVar11;
    uVar10 = uVar3 ^ (uVar10 >> 0xc | uVar10 << 0x14);
    uVar33 = uVar33 + *(int *)((long)puVar26 + -0x228) + (uVar10 >> 7 | uVar10 << 0x19);
    uVar13 = uVar17 ^ (uVar13 >> 0xc | uVar13 << 0x14);
    uVar18 = uVar33 ^ (uVar18 >> 8 | uVar18 << 0x18);
    uVar17 = (uVar18 >> 0x10 | uVar18 << 0x10) + uVar17;
    uVar10 = uVar17 ^ (uVar10 >> 7 | uVar10 << 0x19);
    uVar33 = uVar33 + iVar22 + (uVar10 >> 0xc | uVar10 << 0x14);
    uVar18 = uVar33 ^ (uVar18 >> 0x10 | uVar18 << 0x10);
    uVar17 = (uVar18 >> 8 | uVar18 << 0x18) + uVar17;
    uVar1 = uVar1 + iVar15 + (uVar13 >> 7 | uVar13 << 0x19);
    uVar7 = uVar11 ^ (uVar7 >> 0xc | uVar7 << 0x14);
    uVar12 = uVar1 ^ (uVar12 >> 8 | uVar12 << 0x18);
    uVar11 = (uVar12 >> 0x10 | uVar12 << 0x10) + uVar11;
    uVar13 = uVar11 ^ (uVar13 >> 7 | uVar13 << 0x19);
    uVar1 = uVar1 + *(int *)((long)puVar26 + -0x218) + (uVar13 >> 0xc | uVar13 << 0x14);
    uVar12 = uVar1 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    uVar11 = (uVar12 >> 8 | uVar12 << 0x18) + uVar11;
    iVar20 = *(int *)((long)puVar26 + -0x224);
    uVar5 = uVar5 + iVar20 + (uVar7 >> 7 | uVar7 << 0x19);
    uVar8 = uVar2 ^ (uVar8 >> 0xc | uVar8 << 0x14);
    uVar6 = uVar5 ^ (uVar6 >> 8 | uVar6 << 0x18);
    uVar2 = (uVar6 >> 0x10 | uVar6 << 0x10) + uVar2;
    uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
    iVar23 = *(int *)((long)puVar26 + -0x230);
    uVar5 = uVar5 + iVar23 + (uVar7 >> 0xc | uVar7 << 0x14);
    uVar31 = uVar31 + *(int *)((long)puVar26 + -0x220) + (uVar8 >> 7 | uVar8 << 0x19);
    uVar9 = uVar31 ^ (uVar9 >> 8 | uVar9 << 0x18);
    uVar3 = (uVar9 >> 0x10 | uVar9 << 0x10) + uVar3;
    uVar8 = uVar3 ^ (uVar8 >> 7 | uVar8 << 0x19);
    uVar31 = uVar31 + *(int *)((long)puVar26 + -0x214) + (uVar8 >> 0xc | uVar8 << 0x14);
    uVar6 = uVar5 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
    uVar9 = uVar31 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar2 = (uVar6 >> 8 | uVar6 << 0x18) + uVar2;
    uVar3 = (uVar9 >> 8 | uVar9 << 0x18) + uVar3;
    uVar8 = uVar3 ^ (uVar8 >> 0xc | uVar8 << 0x14);
    uVar33 = uVar33 + *(int *)((long)puVar26 + -0x23c) + (uVar8 >> 7 | uVar8 << 0x19);
    uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
    uVar12 = uVar33 ^ (uVar12 >> 8 | uVar12 << 0x18);
    uVar2 = (uVar12 >> 0x10 | uVar12 << 0x10) + uVar2;
    uVar8 = uVar2 ^ (uVar8 >> 7 | uVar8 << 0x19);
    uVar33 = uVar33 + iVar21 + (uVar8 >> 0xc | uVar8 << 0x14);
    uVar12 = uVar33 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    uVar2 = (uVar12 >> 8 | uVar12 << 0x18) + uVar2;
    uVar10 = uVar17 ^ (uVar10 >> 0xc | uVar10 << 0x14);
    uVar1 = uVar1 + iVar19 + (uVar10 >> 7 | uVar10 << 0x19);
    uVar6 = uVar1 ^ (uVar6 >> 8 | uVar6 << 0x18);
    uVar3 = (uVar6 >> 0x10 | uVar6 << 0x10) + uVar3;
    uVar10 = uVar3 ^ (uVar10 >> 7 | uVar10 << 0x19);
    uVar1 = uVar1 + iVar15 + (uVar10 >> 0xc | uVar10 << 0x14);
    uVar6 = uVar1 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
    uVar3 = (uVar6 >> 8 | uVar6 << 0x18) + uVar3;
    uVar13 = uVar11 ^ (uVar13 >> 0xc | uVar13 << 0x14);
    uVar5 = uVar5 + iVar16 + (uVar13 >> 7 | uVar13 << 0x19);
    uVar9 = uVar5 ^ (uVar9 >> 8 | uVar9 << 0x18);
    uVar17 = (uVar9 >> 0x10 | uVar9 << 0x10) + uVar17;
    uVar13 = uVar17 ^ (uVar13 >> 7 | uVar13 << 0x19);
    uVar5 = uVar5 + *(int *)((long)puVar26 + -0x22c) + (uVar13 >> 0xc | uVar13 << 0x14);
    uVar31 = uVar31 + *(int *)((long)puVar26 + -0x24c) + (uVar7 >> 7 | uVar7 << 0x19);
    uVar18 = uVar31 ^ (uVar18 >> 8 | uVar18 << 0x18);
    uVar11 = (uVar18 >> 0x10 | uVar18 << 0x10) + uVar11;
    uVar7 = uVar11 ^ (uVar7 >> 7 | uVar7 << 0x19);
    uVar31 = uVar31 + iVar23 + (uVar7 >> 0xc | uVar7 << 0x14);
    uVar9 = uVar5 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar18 = uVar31 ^ (uVar18 >> 0x10 | uVar18 << 0x10);
    uVar17 = (uVar9 >> 8 | uVar9 << 0x18) + uVar17;
    uVar11 = (uVar18 >> 8 | uVar18 << 0x18) + uVar11;
    uVar10 = uVar3 ^ (uVar10 >> 0xc | uVar10 << 0x14);
    uVar33 = uVar33 + *(int *)((long)puVar26 + -0x21c) + (uVar10 >> 7 | uVar10 << 0x19);
    uVar13 = uVar17 ^ (uVar13 >> 0xc | uVar13 << 0x14);
    uVar18 = uVar33 ^ (uVar18 >> 8 | uVar18 << 0x18);
    uVar17 = (uVar18 >> 0x10 | uVar18 << 0x10) + uVar17;
    uVar10 = uVar17 ^ (uVar10 >> 7 | uVar10 << 0x19);
    uVar33 = uVar33 + *(int *)((long)puVar26 + -0x218) + (uVar10 >> 0xc | uVar10 << 0x14);
    uVar18 = uVar33 ^ (uVar18 >> 0x10 | uVar18 << 0x10);
    uVar17 = (uVar18 >> 8 | uVar18 << 0x18) + uVar17;
    uVar1 = uVar1 + iVar20 + (uVar13 >> 7 | uVar13 << 0x19);
    uVar7 = uVar11 ^ (uVar7 >> 0xc | uVar7 << 0x14);
    uVar12 = uVar1 ^ (uVar12 >> 8 | uVar12 << 0x18);
    uVar11 = (uVar12 >> 0x10 | uVar12 << 0x10) + uVar11;
    uVar13 = uVar11 ^ (uVar13 >> 7 | uVar13 << 0x19);
    uVar1 = uVar1 + *(int *)((long)puVar26 + -0x248) + (uVar13 >> 0xc | uVar13 << 0x14);
    uVar12 = uVar1 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    uVar11 = (uVar12 >> 8 | uVar12 << 0x18) + uVar11;
    uVar5 = uVar5 + iVar22 + (uVar7 >> 7 | uVar7 << 0x19);
    uVar8 = uVar2 ^ (uVar8 >> 0xc | uVar8 << 0x14);
    uVar6 = uVar5 ^ (uVar6 >> 8 | uVar6 << 0x18);
    uVar2 = (uVar6 >> 0x10 | uVar6 << 0x10) + uVar2;
    uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
    uVar5 = uVar5 + *(int *)((long)puVar26 + -0x220) + (uVar7 >> 0xc | uVar7 << 0x14);
    uVar31 = uVar31 + *(int *)((long)puVar26 + -0x214) + (uVar8 >> 7 | uVar8 << 0x19);
    uVar9 = uVar31 ^ (uVar9 >> 8 | uVar9 << 0x18);
    uVar3 = (uVar9 >> 0x10 | uVar9 << 0x10) + uVar3;
    uVar8 = uVar3 ^ (uVar8 >> 7 | uVar8 << 0x19);
    uVar31 = uVar31 + *(int *)((long)puVar26 + -0x228) + (uVar8 >> 0xc | uVar8 << 0x14);
    uVar6 = uVar5 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
    uVar9 = uVar31 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar2 = (uVar6 >> 8 | uVar6 << 0x18) + uVar2;
    uVar3 = (uVar9 >> 8 | uVar9 << 0x18) + uVar3;
    uVar8 = uVar3 ^ (uVar8 >> 0xc | uVar8 << 0x14);
    uVar33 = uVar33 + iVar19 + (uVar8 >> 7 | uVar8 << 0x19);
    uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
    uVar12 = uVar33 ^ (uVar12 >> 8 | uVar12 << 0x18);
    uVar2 = (uVar12 >> 0x10 | uVar12 << 0x10) + uVar2;
    uVar8 = uVar2 ^ (uVar8 >> 7 | uVar8 << 0x19);
    uVar33 = uVar33 + *(int *)((long)puVar26 + -0x24c) + (uVar8 >> 0xc | uVar8 << 0x14);
    uVar12 = uVar33 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    uVar2 = (uVar12 >> 8 | uVar12 << 0x18) + uVar2;
    uVar10 = uVar17 ^ (uVar10 >> 0xc | uVar10 << 0x14);
    uVar1 = uVar1 + iVar15 + (uVar10 >> 7 | uVar10 << 0x19);
    uVar6 = uVar1 ^ (uVar6 >> 8 | uVar6 << 0x18);
    uVar3 = (uVar6 >> 0x10 | uVar6 << 0x10) + uVar3;
    uVar13 = uVar11 ^ (uVar13 >> 0xc | uVar13 << 0x14);
    uVar10 = uVar3 ^ (uVar10 >> 7 | uVar10 << 0x19);
    uVar1 = uVar1 + iVar20 + (uVar10 >> 0xc | uVar10 << 0x14);
    uVar6 = uVar1 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
    uVar3 = (uVar6 >> 8 | uVar6 << 0x18) + uVar3;
    uVar5 = uVar5 + iVar23 + (uVar13 >> 7 | uVar13 << 0x19);
    uVar9 = uVar5 ^ (uVar9 >> 8 | uVar9 << 0x18);
    uVar17 = (uVar9 >> 0x10 | uVar9 << 0x10) + uVar17;
    uVar13 = uVar17 ^ (uVar13 >> 7 | uVar13 << 0x19);
    uVar5 = uVar5 + *(int *)((long)puVar26 + -0x23c) + (uVar13 >> 0xc | uVar13 << 0x14);
    uVar31 = uVar31 + iVar16 + (uVar7 >> 7 | uVar7 << 0x19);
    uVar18 = uVar31 ^ (uVar18 >> 8 | uVar18 << 0x18);
    uVar9 = uVar5 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar11 = (uVar18 >> 0x10 | uVar18 << 0x10) + uVar11;
    uVar7 = uVar11 ^ (uVar7 >> 7 | uVar7 << 0x19);
    uVar31 = uVar31 + *(int *)((long)puVar26 + -0x220) + (uVar7 >> 0xc | uVar7 << 0x14);
    uVar18 = uVar31 ^ (uVar18 >> 0x10 | uVar18 << 0x10);
    uVar17 = (uVar9 >> 8 | uVar9 << 0x18) + uVar17;
    uVar11 = (uVar18 >> 8 | uVar18 << 0x18) + uVar11;
    uVar10 = uVar3 ^ (uVar10 >> 0xc | uVar10 << 0x14);
    uVar13 = uVar17 ^ (uVar13 >> 0xc | uVar13 << 0x14);
    uVar33 = uVar33 + *(int *)((long)puVar26 + -0x234) + (uVar10 >> 7 | uVar10 << 0x19);
    uVar18 = uVar33 ^ (uVar18 >> 8 | uVar18 << 0x18);
    uVar17 = (uVar18 >> 0x10 | uVar18 << 0x10) + uVar17;
    uVar10 = uVar17 ^ (uVar10 >> 7 | uVar10 << 0x19);
    uVar33 = uVar33 + *(int *)((long)puVar26 + -0x248) + (uVar10 >> 0xc | uVar10 << 0x14);
    uVar18 = uVar33 ^ (uVar18 >> 0x10 | uVar18 << 0x10);
    uVar17 = (uVar18 >> 8 | uVar18 << 0x18) + uVar17;
    uVar7 = uVar11 ^ (uVar7 >> 0xc | uVar7 << 0x14);
    uVar1 = uVar1 + *(int *)((long)puVar26 + -0x238) + (uVar13 >> 7 | uVar13 << 0x19);
    uVar12 = uVar1 ^ (uVar12 >> 8 | uVar12 << 0x18);
    uVar11 = (uVar12 >> 0x10 | uVar12 << 0x10) + uVar11;
    uVar13 = uVar11 ^ (uVar13 >> 7 | uVar13 << 0x19);
    uVar1 = uVar1 + *(int *)((long)puVar26 + -0x22c) + (uVar13 >> 0xc | uVar13 << 0x14);
    uVar12 = uVar1 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    uVar11 = (uVar12 >> 8 | uVar12 << 0x18) + uVar11;
    uVar8 = uVar2 ^ (uVar8 >> 0xc | uVar8 << 0x14);
    uVar5 = uVar5 + *(int *)((long)puVar26 + -0x218) + (uVar7 >> 7 | uVar7 << 0x19);
    uVar6 = uVar5 ^ (uVar6 >> 8 | uVar6 << 0x18);
    uVar2 = (uVar6 >> 0x10 | uVar6 << 0x10) + uVar2;
    uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
    uVar5 = uVar5 + *(int *)((long)puVar26 + -0x214) + (uVar7 >> 0xc | uVar7 << 0x14);
    uVar31 = uVar31 + *(int *)((long)puVar26 + -0x228) + (uVar8 >> 7 | uVar8 << 0x19);
    uVar9 = uVar31 ^ (uVar9 >> 8 | uVar9 << 0x18);
    uVar6 = uVar5 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
    uVar3 = (uVar9 >> 0x10 | uVar9 << 0x10) + uVar3;
    uVar8 = uVar3 ^ (uVar8 >> 7 | uVar8 << 0x19);
    uVar14 = *(uint *)((long)puVar26 + -0x21c);
    uVar31 = uVar31 + uVar14 + (uVar8 >> 0xc | uVar8 << 0x14);
    uVar9 = uVar31 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar2 = (uVar6 >> 8 | uVar6 << 0x18) + uVar2;
    uVar3 = (uVar9 >> 8 | uVar9 << 0x18) + uVar3;
    uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
    uVar8 = uVar3 ^ (uVar8 >> 0xc | uVar8 << 0x14);
    puVar45 = *(uint **)((long)puVar26 + -600);
    *puVar45 = uVar2 ^ uVar33;
    puVar45[1] = uVar3 ^ uVar1;
    uVar33 = uVar17 ^ (uVar10 >> 0xc | uVar10 << 0x14);
    uVar1 = uVar11 ^ (uVar13 >> 0xc | uVar13 << 0x14);
    puVar45[2] = uVar17 ^ uVar5;
    puVar45[3] = uVar11 ^ uVar31;
    puVar45[4] = (uVar8 >> 7 | uVar8 << 0x19) ^ (uVar12 >> 8 | uVar12 << 0x18);
    puVar45[5] = (uVar33 >> 7 | uVar33 << 0x19) ^ (uVar6 >> 8 | uVar6 << 0x18);
    puVar45[6] = (uVar1 >> 7 | uVar1 << 0x19) ^ (uVar9 >> 8 | uVar9 << 0x18);
    puVar45[7] = (uVar7 >> 7 | uVar7 << 0x19) ^ (uVar18 >> 8 | uVar18 << 0x18);
    return (ulong *)(ulong)uVar14;
  }
  return puVar50;
}



/* Entry: 109f62ccc; end: 109f63acf;  */

void FUN_109f62ccc(uint *param_1,int *param_2,uint param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  
  iVar18 = *param_2;
  iVar26 = param_2[1];
  uVar1 = *param_1 + iVar18 + param_1[4];
  uVar6 = uVar1 ^ (uint)param_4;
  uVar2 = (uVar6 >> 0x10 | uVar6 << 0x10) + 0x6a09e667;
  uVar7 = uVar2 ^ param_1[4];
  uVar1 = uVar1 + iVar26 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar8 = uVar1 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
  iVar19 = param_2[2];
  iVar27 = param_2[3];
  uVar6 = param_1[1] + iVar19 + param_1[5];
  uVar9 = uVar6 ^ (uint)((ulong)param_4 >> 0x20);
  uVar3 = (uVar9 >> 0x10 | uVar9 << 0x10) + 0xbb67ae85;
  uVar10 = uVar3 ^ param_1[5];
  uVar6 = uVar6 + iVar27 + (uVar10 >> 0xc | uVar10 << 0x14);
  uVar11 = uVar6 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
  uVar3 = (uVar11 >> 8 | uVar11 << 0x18) + uVar3;
  uVar12 = uVar3 ^ (uVar10 >> 0xc | uVar10 << 0x14);
  iVar20 = param_2[4];
  iVar28 = param_2[5];
  uVar9 = param_1[2] + iVar20 + param_1[6];
  param_3 = uVar9 ^ param_3;
  uVar4 = (param_3 >> 0x10 | param_3 << 0x10) + 0x3c6ef372;
  uVar10 = uVar4 ^ param_1[6];
  uVar9 = uVar9 + iVar28 + (uVar10 >> 0xc | uVar10 << 0x14);
  uVar13 = uVar9 ^ (param_3 >> 0x10 | param_3 << 0x10);
  uVar4 = (uVar13 >> 8 | uVar13 << 0x18) + uVar4;
  uVar14 = uVar4 ^ (uVar10 >> 0xc | uVar10 << 0x14);
  iVar21 = param_2[6];
  iVar29 = param_2[7];
  uVar10 = param_1[3] + iVar21 + param_1[7];
  param_5 = uVar10 ^ param_5;
  uVar5 = (param_5 >> 0x10 | param_5 << 0x10) + 0xa54ff53a;
  uVar15 = uVar5 ^ param_1[7];
  uVar10 = uVar10 + iVar29 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar16 = uVar10 ^ (param_5 >> 0x10 | param_5 << 0x10);
  uVar2 = (uVar8 >> 8 | uVar8 << 0x18) + uVar2;
  iVar22 = param_2[8];
  iVar30 = param_2[9];
  uVar1 = uVar1 + iVar22 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar17 = uVar1 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar5 = (uVar16 >> 8 | uVar16 << 0x18) + uVar5;
  uVar4 = (uVar17 >> 0x10 | uVar17 << 0x10) + uVar4;
  uVar12 = uVar4 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar1 = uVar1 + iVar30 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar16 = uVar1 ^ (uVar17 >> 0x10 | uVar17 << 0x10);
  uVar4 = (uVar16 >> 8 | uVar16 << 0x18) + uVar4;
  iVar23 = param_2[10];
  iVar31 = param_2[0xb];
  uVar6 = uVar6 + iVar23 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar8 = uVar6 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar15 = uVar5 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar5 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar5;
  uVar14 = uVar5 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar6 = uVar6 + iVar31 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar5 = (uVar8 >> 8 | uVar8 << 0x18) + uVar5;
  iVar24 = param_2[0xc];
  iVar32 = param_2[0xd];
  uVar9 = uVar9 + iVar24 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar2 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar2;
  uVar15 = uVar2 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar9 = uVar9 + iVar32 + (uVar15 >> 0xc | uVar15 << 0x14);
  iVar25 = param_2[0xe];
  iVar33 = param_2[0xf];
  uVar10 = uVar10 + iVar25 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar13 = uVar10 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar3 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar10 = uVar10 + iVar33 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar13 = uVar10 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar2 = (uVar11 >> 8 | uVar11 << 0x18) + uVar2;
  uVar3 = (uVar13 >> 8 | uVar13 << 0x18) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar1 = uVar1 + iVar19 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar15 = uVar2 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar2 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar2;
  uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar1 = uVar1 + iVar21 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar2 = (uVar8 >> 8 | uVar8 << 0x18) + uVar2;
  uVar12 = uVar4 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar6 = uVar6 + iVar27 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar11 = uVar6 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar3 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar3;
  uVar12 = uVar3 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar6 = uVar6 + iVar23 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar11 = uVar6 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar3 = (uVar11 >> 8 | uVar11 << 0x18) + uVar3;
  uVar14 = uVar5 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar9 = uVar9 + iVar29 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar13 = uVar9 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar4 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar4;
  uVar14 = uVar4 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar9 = uVar9 + iVar18 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar10 = uVar10 + iVar20 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar16 = uVar10 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar5 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar5;
  uVar15 = uVar5 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar10 = uVar10 + iVar32 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar13 = uVar9 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar16 = uVar10 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar13 >> 8 | uVar13 << 0x18) + uVar4;
  uVar5 = (uVar16 >> 8 | uVar16 << 0x18) + uVar5;
  uVar12 = uVar3 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar1 = uVar1 + iVar26 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar14 = uVar4 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar4 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar4;
  uVar12 = uVar4 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar1 = uVar1 + iVar31 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar16 >> 8 | uVar16 << 0x18) + uVar4;
  uVar6 = uVar6 + iVar24 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar15 = uVar5 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar5 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar5;
  uVar14 = uVar5 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar6 = uVar6 + iVar28 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar5 = (uVar8 >> 8 | uVar8 << 0x18) + uVar5;
  uVar9 = uVar9 + iVar30 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar2 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar2;
  uVar15 = uVar2 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar9 = uVar9 + iVar25 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar10 = uVar10 + iVar33 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar13 = uVar10 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar3 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar10 = uVar10 + iVar22 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar13 = uVar10 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar2 = (uVar11 >> 8 | uVar11 << 0x18) + uVar2;
  uVar3 = (uVar13 >> 8 | uVar13 << 0x18) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar1 = uVar1 + iVar27 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar15 = uVar2 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar2 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar2;
  uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar1 = uVar1 + iVar20 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar2 = (uVar8 >> 8 | uVar8 << 0x18) + uVar2;
  uVar12 = uVar4 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar6 = uVar6 + iVar23 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar11 = uVar6 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar3 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar3;
  uVar12 = uVar3 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar6 = uVar6 + iVar24 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar11 = uVar6 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar3 = (uVar11 >> 8 | uVar11 << 0x18) + uVar3;
  uVar14 = uVar5 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar9 = uVar9 + iVar32 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar13 = uVar9 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar4 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar4;
  uVar14 = uVar4 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar9 = uVar9 + iVar19 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar10 = uVar10 + iVar29 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar16 = uVar10 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar5 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar5;
  uVar15 = uVar5 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar10 = uVar10 + iVar25 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar13 = uVar9 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar16 = uVar10 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar13 >> 8 | uVar13 << 0x18) + uVar4;
  uVar5 = (uVar16 >> 8 | uVar16 << 0x18) + uVar5;
  uVar12 = uVar3 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar1 = uVar1 + iVar21 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar14 = uVar4 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar4 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar4;
  uVar12 = uVar4 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar1 = uVar1 + iVar28 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar16 >> 8 | uVar16 << 0x18) + uVar4;
  uVar6 = uVar6 + iVar30 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar15 = uVar5 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar5 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar5;
  uVar14 = uVar5 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar6 = uVar6 + iVar18 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar5 = (uVar8 >> 8 | uVar8 << 0x18) + uVar5;
  uVar9 = uVar9 + iVar31 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar2 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar2;
  uVar15 = uVar2 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar9 = uVar9 + iVar33 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar10 = uVar10 + iVar22 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar13 = uVar10 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar3 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar10 = uVar10 + iVar26 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar13 = uVar10 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar2 = (uVar11 >> 8 | uVar11 << 0x18) + uVar2;
  uVar3 = (uVar13 >> 8 | uVar13 << 0x18) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar1 = uVar1 + iVar23 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar15 = uVar2 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar2 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar2;
  uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar1 = uVar1 + iVar29 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar2 = (uVar8 >> 8 | uVar8 << 0x18) + uVar2;
  uVar12 = uVar4 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar6 = uVar6 + iVar24 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar11 = uVar6 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar3 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar3;
  uVar12 = uVar3 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar6 = uVar6 + iVar30 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar11 = uVar6 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar3 = (uVar11 >> 8 | uVar11 << 0x18) + uVar3;
  uVar14 = uVar5 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar9 = uVar9 + iVar25 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar13 = uVar9 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar4 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar4;
  uVar14 = uVar4 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar9 = uVar9 + iVar27 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar10 = uVar10 + iVar32 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar16 = uVar10 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar5 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar5;
  uVar15 = uVar5 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar10 = uVar10 + iVar33 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar13 = uVar9 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar16 = uVar10 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar13 >> 8 | uVar13 << 0x18) + uVar4;
  uVar5 = (uVar16 >> 8 | uVar16 << 0x18) + uVar5;
  uVar12 = uVar3 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar1 = uVar1 + iVar20 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar14 = uVar4 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar4 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar4;
  uVar12 = uVar4 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar1 = uVar1 + iVar18 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar16 >> 8 | uVar16 << 0x18) + uVar4;
  uVar6 = uVar6 + iVar31 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar15 = uVar5 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar5 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar5;
  uVar14 = uVar5 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar6 = uVar6 + iVar19 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar5 = (uVar8 >> 8 | uVar8 << 0x18) + uVar5;
  uVar9 = uVar9 + iVar28 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar2 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar2;
  uVar15 = uVar2 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar9 = uVar9 + iVar22 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar10 = uVar10 + iVar26 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar13 = uVar10 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar3 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar10 = uVar10 + iVar21 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar13 = uVar10 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar2 = (uVar11 >> 8 | uVar11 << 0x18) + uVar2;
  uVar3 = (uVar13 >> 8 | uVar13 << 0x18) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar1 = uVar1 + iVar24 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar15 = uVar2 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar2 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar2;
  uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar1 = uVar1 + iVar32 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar2 = (uVar8 >> 8 | uVar8 << 0x18) + uVar2;
  uVar12 = uVar4 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar6 = uVar6 + iVar30 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar11 = uVar6 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar3 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar3;
  uVar12 = uVar3 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar6 = uVar6 + iVar31 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar11 = uVar6 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar3 = (uVar11 >> 8 | uVar11 << 0x18) + uVar3;
  uVar14 = uVar5 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar9 = uVar9 + iVar33 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar13 = uVar9 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar4 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar4;
  uVar14 = uVar4 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar9 = uVar9 + iVar23 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar10 = uVar10 + iVar25 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar16 = uVar10 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar5 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar5;
  uVar15 = uVar5 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar10 = uVar10 + iVar22 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar13 = uVar9 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar16 = uVar10 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar13 >> 8 | uVar13 << 0x18) + uVar4;
  uVar5 = (uVar16 >> 8 | uVar16 << 0x18) + uVar5;
  uVar12 = uVar3 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar1 = uVar1 + iVar29 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar14 = uVar4 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar4 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar4;
  uVar12 = uVar4 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar1 = uVar1 + iVar19 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar16 >> 8 | uVar16 << 0x18) + uVar4;
  uVar6 = uVar6 + iVar28 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar15 = uVar5 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar5 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar5;
  uVar14 = uVar5 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar6 = uVar6 + iVar27 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar5 = (uVar8 >> 8 | uVar8 << 0x18) + uVar5;
  uVar9 = uVar9 + iVar18 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar2 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar2;
  uVar15 = uVar2 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar9 = uVar9 + iVar26 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar10 = uVar10 + iVar21 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar13 = uVar10 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar3 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar10 = uVar10 + iVar20 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar13 = uVar10 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar2 = (uVar11 >> 8 | uVar11 << 0x18) + uVar2;
  uVar3 = (uVar13 >> 8 | uVar13 << 0x18) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar1 = uVar1 + iVar30 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar15 = uVar2 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar2 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar2;
  uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar1 = uVar1 + iVar25 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar2 = (uVar8 >> 8 | uVar8 << 0x18) + uVar2;
  uVar12 = uVar4 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar6 = uVar6 + iVar31 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar11 = uVar6 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar3 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar3;
  uVar12 = uVar3 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar6 = uVar6 + iVar28 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar11 = uVar6 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar3 = (uVar11 >> 8 | uVar11 << 0x18) + uVar3;
  uVar14 = uVar5 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar9 = uVar9 + iVar22 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar13 = uVar9 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar4 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar4;
  uVar14 = uVar4 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar9 = uVar9 + iVar24 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar10 = uVar10 + iVar33 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar16 = uVar10 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar5 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar5;
  uVar15 = uVar5 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar10 = uVar10 + iVar26 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar13 = uVar9 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar16 = uVar10 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar13 >> 8 | uVar13 << 0x18) + uVar4;
  uVar5 = (uVar16 >> 8 | uVar16 << 0x18) + uVar5;
  uVar12 = uVar3 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar1 = uVar1 + iVar32 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar14 = uVar4 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar4 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar4;
  uVar12 = uVar4 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar1 = uVar1 + iVar27 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar16 >> 8 | uVar16 << 0x18) + uVar4;
  uVar6 = uVar6 + iVar18 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar15 = uVar5 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar5 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar5;
  uVar14 = uVar5 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar6 = uVar6 + iVar23 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar5 = (uVar8 >> 8 | uVar8 << 0x18) + uVar5;
  uVar9 = uVar9 + iVar19 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar2 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar2;
  uVar15 = uVar2 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar9 = uVar9 + iVar21 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar10 = uVar10 + iVar20 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar13 = uVar10 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar3 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar10 = uVar10 + iVar29 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar13 = uVar10 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar2 = (uVar11 >> 8 | uVar11 << 0x18) + uVar2;
  uVar3 = (uVar13 >> 8 | uVar13 << 0x18) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar1 = uVar1 + iVar31 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar15 = uVar2 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar2 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar2;
  uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar1 = uVar1 + iVar33 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar2 = (uVar8 >> 8 | uVar8 << 0x18) + uVar2;
  uVar12 = uVar4 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar6 = uVar6 + iVar28 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar11 = uVar6 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar3 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar3;
  uVar14 = uVar5 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar12 = uVar3 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar6 = uVar6 + iVar18 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar11 = uVar6 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar3 = (uVar11 >> 8 | uVar11 << 0x18) + uVar3;
  uVar9 = uVar9 + iVar26 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar13 = uVar9 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar4 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar4;
  uVar14 = uVar4 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar9 = uVar9 + iVar30 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar10 = uVar10 + iVar22 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar16 = uVar10 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar13 = uVar9 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar5 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar5;
  uVar15 = uVar5 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar10 = uVar10 + iVar21 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar16 = uVar10 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar13 >> 8 | uVar13 << 0x18) + uVar4;
  uVar5 = (uVar16 >> 8 | uVar16 << 0x18) + uVar5;
  uVar12 = uVar3 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar14 = uVar4 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar1 = uVar1 + iVar25 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar16 = uVar1 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar4 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar4;
  uVar12 = uVar4 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar1 = uVar1 + iVar23 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar16 >> 8 | uVar16 << 0x18) + uVar4;
  uVar15 = uVar5 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar6 = uVar6 + iVar19 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar8 = uVar6 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar5 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar5;
  uVar14 = uVar5 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar6 = uVar6 + iVar24 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar5 = (uVar8 >> 8 | uVar8 << 0x18) + uVar5;
  uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar9 = uVar9 + iVar27 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar11 = uVar9 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar2 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar2;
  uVar15 = uVar2 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar9 = uVar9 + iVar20 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar10 = uVar10 + iVar29 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar13 = uVar10 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar11 = uVar9 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar3 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar10 = uVar10 + iVar32 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar13 = uVar10 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar2 = (uVar11 >> 8 | uVar11 << 0x18) + uVar2;
  uVar3 = (uVar13 >> 8 | uVar13 << 0x18) + uVar3;
  uVar15 = uVar2 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar7 = uVar3 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  *param_1 = uVar2 ^ uVar1;
  param_1[1] = uVar3 ^ uVar6;
  uVar1 = uVar4 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar6 = uVar5 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  param_1[2] = uVar4 ^ uVar9;
  param_1[3] = uVar5 ^ uVar10;
  param_1[4] = (uVar7 >> 7 | uVar7 << 0x19) ^ (uVar8 >> 8 | uVar8 << 0x18);
  param_1[5] = (uVar1 >> 7 | uVar1 << 0x19) ^ (uVar11 >> 8 | uVar11 << 0x18);
  param_1[6] = (uVar6 >> 7 | uVar6 << 0x19) ^ (uVar13 >> 8 | uVar13 << 0x18);
  param_1[7] = (uVar15 >> 7 | uVar15 << 0x19) ^ (uVar16 >> 8 | uVar16 << 0x18);
  return;
}



/* Entry: 109f63ad0; end: 109f64a0f;  */

void FUN_109f63ad0(uint *param_1,int *param_2,uint param_3,undefined8 param_4,uint param_5,
                  undefined1 *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  
  iVar18 = *param_2;
  iVar26 = param_2[1];
  uVar1 = *param_1 + iVar18 + param_1[4];
  uVar6 = uVar1 ^ (uint)param_4;
  uVar2 = (uVar6 >> 0x10 | uVar6 << 0x10) + 0x6a09e667;
  uVar7 = uVar2 ^ param_1[4];
  uVar1 = uVar1 + iVar26 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar8 = uVar1 ^ (uVar6 >> 0x10 | uVar6 << 0x10);
  iVar19 = param_2[2];
  iVar27 = param_2[3];
  uVar6 = param_1[1] + iVar19 + param_1[5];
  uVar9 = uVar6 ^ (uint)((ulong)param_4 >> 0x20);
  uVar3 = (uVar9 >> 0x10 | uVar9 << 0x10) + 0xbb67ae85;
  uVar10 = uVar3 ^ param_1[5];
  uVar6 = uVar6 + iVar27 + (uVar10 >> 0xc | uVar10 << 0x14);
  uVar11 = uVar6 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
  uVar3 = (uVar11 >> 8 | uVar11 << 0x18) + uVar3;
  uVar12 = uVar3 ^ (uVar10 >> 0xc | uVar10 << 0x14);
  iVar20 = param_2[4];
  iVar28 = param_2[5];
  uVar9 = param_1[2] + iVar20 + param_1[6];
  param_3 = uVar9 ^ param_3;
  uVar4 = (param_3 >> 0x10 | param_3 << 0x10) + 0x3c6ef372;
  uVar10 = uVar4 ^ param_1[6];
  uVar9 = uVar9 + iVar28 + (uVar10 >> 0xc | uVar10 << 0x14);
  uVar13 = uVar9 ^ (param_3 >> 0x10 | param_3 << 0x10);
  uVar4 = (uVar13 >> 8 | uVar13 << 0x18) + uVar4;
  uVar14 = uVar4 ^ (uVar10 >> 0xc | uVar10 << 0x14);
  iVar21 = param_2[6];
  iVar29 = param_2[7];
  uVar10 = param_1[3] + iVar21 + param_1[7];
  param_5 = uVar10 ^ param_5;
  uVar5 = (param_5 >> 0x10 | param_5 << 0x10) + 0xa54ff53a;
  uVar15 = uVar5 ^ param_1[7];
  uVar10 = uVar10 + iVar29 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar16 = uVar10 ^ (param_5 >> 0x10 | param_5 << 0x10);
  iVar22 = param_2[8];
  iVar30 = param_2[9];
  uVar1 = uVar1 + iVar22 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar17 = uVar1 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar2 = (uVar8 >> 8 | uVar8 << 0x18) + uVar2;
  uVar4 = (uVar17 >> 0x10 | uVar17 << 0x10) + uVar4;
  uVar12 = uVar4 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar5 = (uVar16 >> 8 | uVar16 << 0x18) + uVar5;
  uVar1 = uVar1 + iVar30 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar16 = uVar1 ^ (uVar17 >> 0x10 | uVar17 << 0x10);
  uVar4 = (uVar16 >> 8 | uVar16 << 0x18) + uVar4;
  iVar23 = param_2[10];
  iVar31 = param_2[0xb];
  uVar6 = uVar6 + iVar23 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar8 = uVar6 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar15 = uVar5 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar5 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar5;
  uVar14 = uVar5 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar6 = uVar6 + iVar31 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar5 = (uVar8 >> 8 | uVar8 << 0x18) + uVar5;
  iVar24 = param_2[0xc];
  iVar32 = param_2[0xd];
  uVar9 = uVar9 + iVar24 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar2 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar2;
  uVar15 = uVar2 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar9 = uVar9 + iVar32 + (uVar15 >> 0xc | uVar15 << 0x14);
  iVar25 = param_2[0xe];
  iVar33 = param_2[0xf];
  uVar10 = uVar10 + iVar25 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar13 = uVar10 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar3 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar10 = uVar10 + iVar33 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar13 = uVar10 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar2 = (uVar11 >> 8 | uVar11 << 0x18) + uVar2;
  uVar3 = (uVar13 >> 8 | uVar13 << 0x18) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar1 = uVar1 + iVar19 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar15 = uVar2 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar2 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar2;
  uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar1 = uVar1 + iVar21 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar2 = (uVar8 >> 8 | uVar8 << 0x18) + uVar2;
  uVar12 = uVar4 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar6 = uVar6 + iVar27 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar11 = uVar6 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar3 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar3;
  uVar12 = uVar3 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar6 = uVar6 + iVar23 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar11 = uVar6 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar3 = (uVar11 >> 8 | uVar11 << 0x18) + uVar3;
  uVar14 = uVar5 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar9 = uVar9 + iVar29 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar13 = uVar9 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar4 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar4;
  uVar14 = uVar4 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar9 = uVar9 + iVar18 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar10 = uVar10 + iVar20 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar16 = uVar10 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar5 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar5;
  uVar15 = uVar5 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar10 = uVar10 + iVar32 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar13 = uVar9 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar16 = uVar10 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar13 >> 8 | uVar13 << 0x18) + uVar4;
  uVar5 = (uVar16 >> 8 | uVar16 << 0x18) + uVar5;
  uVar12 = uVar3 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar1 = uVar1 + iVar26 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar14 = uVar4 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar4 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar4;
  uVar12 = uVar4 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar1 = uVar1 + iVar31 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar16 >> 8 | uVar16 << 0x18) + uVar4;
  uVar6 = uVar6 + iVar24 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar15 = uVar5 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar5 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar5;
  uVar14 = uVar5 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar6 = uVar6 + iVar28 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar5 = (uVar8 >> 8 | uVar8 << 0x18) + uVar5;
  uVar9 = uVar9 + iVar30 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar2 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar2;
  uVar15 = uVar2 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar9 = uVar9 + iVar25 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar10 = uVar10 + iVar33 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar13 = uVar10 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar3 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar10 = uVar10 + iVar22 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar13 = uVar10 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar2 = (uVar11 >> 8 | uVar11 << 0x18) + uVar2;
  uVar3 = (uVar13 >> 8 | uVar13 << 0x18) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar1 = uVar1 + iVar27 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar15 = uVar2 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar2 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar2;
  uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar1 = uVar1 + iVar20 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar2 = (uVar8 >> 8 | uVar8 << 0x18) + uVar2;
  uVar12 = uVar4 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar6 = uVar6 + iVar23 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar11 = uVar6 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar3 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar3;
  uVar12 = uVar3 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar6 = uVar6 + iVar24 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar11 = uVar6 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar3 = (uVar11 >> 8 | uVar11 << 0x18) + uVar3;
  uVar14 = uVar5 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar9 = uVar9 + iVar32 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar13 = uVar9 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar4 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar4;
  uVar14 = uVar4 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar9 = uVar9 + iVar19 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar10 = uVar10 + iVar29 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar16 = uVar10 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar5 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar5;
  uVar15 = uVar5 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar10 = uVar10 + iVar25 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar13 = uVar9 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar16 = uVar10 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar13 >> 8 | uVar13 << 0x18) + uVar4;
  uVar5 = (uVar16 >> 8 | uVar16 << 0x18) + uVar5;
  uVar12 = uVar3 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar1 = uVar1 + iVar21 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar14 = uVar4 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar4 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar4;
  uVar12 = uVar4 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar1 = uVar1 + iVar28 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar16 >> 8 | uVar16 << 0x18) + uVar4;
  uVar6 = uVar6 + iVar30 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar15 = uVar5 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar5 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar5;
  uVar14 = uVar5 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar6 = uVar6 + iVar18 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar5 = (uVar8 >> 8 | uVar8 << 0x18) + uVar5;
  uVar9 = uVar9 + iVar31 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar2 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar2;
  uVar15 = uVar2 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar9 = uVar9 + iVar33 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar10 = uVar10 + iVar22 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar13 = uVar10 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar3 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar10 = uVar10 + iVar26 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar13 = uVar10 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar2 = (uVar11 >> 8 | uVar11 << 0x18) + uVar2;
  uVar3 = (uVar13 >> 8 | uVar13 << 0x18) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar1 = uVar1 + iVar23 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar15 = uVar2 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar2 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar2;
  uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar1 = uVar1 + iVar29 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar2 = (uVar8 >> 8 | uVar8 << 0x18) + uVar2;
  uVar12 = uVar4 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar6 = uVar6 + iVar24 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar11 = uVar6 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar3 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar3;
  uVar12 = uVar3 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar6 = uVar6 + iVar30 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar11 = uVar6 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar3 = (uVar11 >> 8 | uVar11 << 0x18) + uVar3;
  uVar14 = uVar5 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar9 = uVar9 + iVar25 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar13 = uVar9 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar4 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar4;
  uVar14 = uVar4 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar9 = uVar9 + iVar27 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar10 = uVar10 + iVar32 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar16 = uVar10 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar5 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar5;
  uVar15 = uVar5 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar10 = uVar10 + iVar33 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar13 = uVar9 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar16 = uVar10 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar13 >> 8 | uVar13 << 0x18) + uVar4;
  uVar5 = (uVar16 >> 8 | uVar16 << 0x18) + uVar5;
  uVar12 = uVar3 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar1 = uVar1 + iVar20 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar14 = uVar4 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar4 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar4;
  uVar12 = uVar4 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar1 = uVar1 + iVar18 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar16 >> 8 | uVar16 << 0x18) + uVar4;
  uVar6 = uVar6 + iVar31 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar15 = uVar5 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar5 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar5;
  uVar14 = uVar5 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar6 = uVar6 + iVar19 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar5 = (uVar8 >> 8 | uVar8 << 0x18) + uVar5;
  uVar9 = uVar9 + iVar28 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar2 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar2;
  uVar15 = uVar2 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar9 = uVar9 + iVar22 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar10 = uVar10 + iVar26 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar13 = uVar10 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar3 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar10 = uVar10 + iVar21 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar13 = uVar10 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar2 = (uVar11 >> 8 | uVar11 << 0x18) + uVar2;
  uVar3 = (uVar13 >> 8 | uVar13 << 0x18) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar1 = uVar1 + iVar24 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar15 = uVar2 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar2 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar2;
  uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar1 = uVar1 + iVar32 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar2 = (uVar8 >> 8 | uVar8 << 0x18) + uVar2;
  uVar12 = uVar4 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar6 = uVar6 + iVar30 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar11 = uVar6 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar3 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar3;
  uVar12 = uVar3 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar6 = uVar6 + iVar31 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar11 = uVar6 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar3 = (uVar11 >> 8 | uVar11 << 0x18) + uVar3;
  uVar14 = uVar5 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar9 = uVar9 + iVar33 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar13 = uVar9 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar4 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar4;
  uVar14 = uVar4 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar9 = uVar9 + iVar23 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar10 = uVar10 + iVar25 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar16 = uVar10 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar5 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar5;
  uVar15 = uVar5 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar10 = uVar10 + iVar22 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar13 = uVar9 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar16 = uVar10 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar13 >> 8 | uVar13 << 0x18) + uVar4;
  uVar5 = (uVar16 >> 8 | uVar16 << 0x18) + uVar5;
  uVar12 = uVar3 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar1 = uVar1 + iVar29 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar14 = uVar4 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar4 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar4;
  uVar12 = uVar4 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar1 = uVar1 + iVar19 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar16 >> 8 | uVar16 << 0x18) + uVar4;
  uVar6 = uVar6 + iVar28 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar15 = uVar5 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar5 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar5;
  uVar14 = uVar5 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar6 = uVar6 + iVar27 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar5 = (uVar8 >> 8 | uVar8 << 0x18) + uVar5;
  uVar9 = uVar9 + iVar18 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar2 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar2;
  uVar15 = uVar2 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar9 = uVar9 + iVar26 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar10 = uVar10 + iVar21 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar13 = uVar10 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar3 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar10 = uVar10 + iVar20 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar13 = uVar10 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar2 = (uVar11 >> 8 | uVar11 << 0x18) + uVar2;
  uVar3 = (uVar13 >> 8 | uVar13 << 0x18) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar1 = uVar1 + iVar30 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar15 = uVar2 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar2 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar2;
  uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar1 = uVar1 + iVar25 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar2 = (uVar8 >> 8 | uVar8 << 0x18) + uVar2;
  uVar12 = uVar4 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar6 = uVar6 + iVar31 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar11 = uVar6 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar3 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar3;
  uVar12 = uVar3 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar6 = uVar6 + iVar28 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar11 = uVar6 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar3 = (uVar11 >> 8 | uVar11 << 0x18) + uVar3;
  uVar14 = uVar5 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar9 = uVar9 + iVar22 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar13 = uVar9 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar4 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar4;
  uVar14 = uVar4 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar9 = uVar9 + iVar24 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar10 = uVar10 + iVar33 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar16 = uVar10 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar5 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar5;
  uVar15 = uVar5 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar10 = uVar10 + iVar26 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar13 = uVar9 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar16 = uVar10 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar13 >> 8 | uVar13 << 0x18) + uVar4;
  uVar5 = (uVar16 >> 8 | uVar16 << 0x18) + uVar5;
  uVar12 = uVar3 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar1 = uVar1 + iVar32 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar14 = uVar4 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar4 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar4;
  uVar12 = uVar4 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar1 = uVar1 + iVar27 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar16 >> 8 | uVar16 << 0x18) + uVar4;
  uVar6 = uVar6 + iVar18 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar15 = uVar5 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar5 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar5;
  uVar14 = uVar5 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar6 = uVar6 + iVar23 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar5 = (uVar8 >> 8 | uVar8 << 0x18) + uVar5;
  uVar9 = uVar9 + iVar19 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar2 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar2;
  uVar15 = uVar2 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar9 = uVar9 + iVar21 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar10 = uVar10 + iVar20 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar13 = uVar10 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar3 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar10 = uVar10 + iVar29 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar11 = uVar9 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar13 = uVar10 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar2 = (uVar11 >> 8 | uVar11 << 0x18) + uVar2;
  uVar3 = (uVar13 >> 8 | uVar13 << 0x18) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar1 = uVar1 + iVar31 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar15 = uVar2 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar2 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar2;
  uVar7 = uVar2 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar1 = uVar1 + iVar33 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar8 = uVar1 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar2 = (uVar8 >> 8 | uVar8 << 0x18) + uVar2;
  uVar12 = uVar4 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar6 = uVar6 + iVar28 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar11 = uVar6 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar3 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar3;
  uVar14 = uVar5 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar12 = uVar3 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar6 = uVar6 + iVar18 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar11 = uVar6 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar3 = (uVar11 >> 8 | uVar11 << 0x18) + uVar3;
  uVar9 = uVar9 + iVar26 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar13 = uVar9 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar4 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar4;
  uVar14 = uVar4 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar9 = uVar9 + iVar30 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar10 = uVar10 + iVar22 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar16 = uVar10 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar13 = uVar9 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar5 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar5;
  uVar15 = uVar5 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar10 = uVar10 + iVar21 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar16 = uVar10 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar13 >> 8 | uVar13 << 0x18) + uVar4;
  uVar5 = (uVar16 >> 8 | uVar16 << 0x18) + uVar5;
  uVar12 = uVar3 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  uVar14 = uVar4 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar1 = uVar1 + iVar25 + (uVar12 >> 7 | uVar12 << 0x19);
  uVar16 = uVar1 ^ (uVar16 >> 8 | uVar16 << 0x18);
  uVar4 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar4;
  uVar12 = uVar4 ^ (uVar12 >> 7 | uVar12 << 0x19);
  uVar1 = uVar1 + iVar23 + (uVar12 >> 0xc | uVar12 << 0x14);
  uVar16 = uVar1 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
  uVar4 = (uVar16 >> 8 | uVar16 << 0x18) + uVar4;
  uVar15 = uVar5 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar6 = uVar6 + iVar19 + (uVar14 >> 7 | uVar14 << 0x19);
  uVar8 = uVar6 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar5 = (uVar8 >> 0x10 | uVar8 << 0x10) + uVar5;
  uVar14 = uVar5 ^ (uVar14 >> 7 | uVar14 << 0x19);
  uVar6 = uVar6 + iVar24 + (uVar14 >> 0xc | uVar14 << 0x14);
  uVar8 = uVar6 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar5 = (uVar8 >> 8 | uVar8 << 0x18) + uVar5;
  uVar7 = uVar2 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  uVar9 = uVar9 + iVar27 + (uVar15 >> 7 | uVar15 << 0x19);
  uVar11 = uVar9 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar2 = (uVar11 >> 0x10 | uVar11 << 0x10) + uVar2;
  uVar15 = uVar2 ^ (uVar15 >> 7 | uVar15 << 0x19);
  uVar9 = uVar9 + iVar20 + (uVar15 >> 0xc | uVar15 << 0x14);
  uVar10 = uVar10 + iVar29 + (uVar7 >> 7 | uVar7 << 0x19);
  uVar13 = uVar10 ^ (uVar13 >> 8 | uVar13 << 0x18);
  uVar11 = uVar9 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
  uVar3 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar3;
  uVar7 = uVar3 ^ (uVar7 >> 7 | uVar7 << 0x19);
  uVar10 = uVar10 + iVar32 + (uVar7 >> 0xc | uVar7 << 0x14);
  uVar13 = uVar10 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
  uVar2 = (uVar11 >> 8 | uVar11 << 0x18) + uVar2;
  uVar3 = (uVar13 >> 8 | uVar13 << 0x18) + uVar3;
  uVar1 = uVar2 ^ uVar1;
  param_6[1] = (char)(uVar1 >> 8);
  param_6[2] = (char)(uVar1 >> 0x10);
  *param_6 = (char)uVar1;
  param_6[3] = (char)(uVar1 >> 0x18);
  uVar6 = uVar3 ^ uVar6;
  param_6[5] = (char)(uVar6 >> 8);
  param_6[6] = (char)(uVar6 >> 0x10);
  param_6[4] = (char)uVar6;
  param_6[7] = (char)(uVar6 >> 0x18);
  uVar9 = uVar4 ^ uVar9;
  param_6[9] = (char)(uVar9 >> 8);
  param_6[10] = (char)(uVar9 >> 0x10);
  param_6[8] = (char)uVar9;
  param_6[0xb] = (char)(uVar9 >> 0x18);
  uVar10 = uVar5 ^ uVar10;
  param_6[0xd] = (char)(uVar10 >> 8);
  param_6[0xe] = (char)(uVar10 >> 0x10);
  uVar1 = uVar3 ^ (uVar7 >> 0xc | uVar7 << 0x14);
  param_6[0xc] = (char)uVar10;
  param_6[0xf] = (char)(uVar10 >> 0x18);
  uVar1 = (uVar1 >> 7 | uVar1 << 0x19) ^ (uVar8 >> 8 | uVar8 << 0x18);
  param_6[0x11] = (char)(uVar1 >> 8);
  param_6[0x12] = (char)(uVar1 >> 0x10);
  uVar6 = uVar4 ^ (uVar12 >> 0xc | uVar12 << 0x14);
  param_6[0x10] = (char)uVar1;
  param_6[0x13] = (char)(uVar1 >> 0x18);
  uVar1 = (uVar6 >> 7 | uVar6 << 0x19) ^ (uVar11 >> 8 | uVar11 << 0x18);
  param_6[0x15] = (char)(uVar1 >> 8);
  param_6[0x16] = (char)(uVar1 >> 0x10);
  param_6[0x14] = (char)uVar1;
  param_6[0x17] = (char)(uVar1 >> 0x18);
  uVar1 = uVar5 ^ (uVar14 >> 0xc | uVar14 << 0x14);
  uVar1 = (uVar1 >> 7 | uVar1 << 0x19) ^ (uVar13 >> 8 | uVar13 << 0x18);
  param_6[0x19] = (char)(uVar1 >> 8);
  param_6[0x1a] = (char)(uVar1 >> 0x10);
  param_6[0x18] = (char)uVar1;
  param_6[0x1b] = (char)(uVar1 >> 0x18);
  uVar1 = uVar2 ^ (uVar15 >> 0xc | uVar15 << 0x14);
  uVar1 = (uVar1 >> 7 | uVar1 << 0x19) ^ (uVar16 >> 8 | uVar16 << 0x18);
  param_6[0x1d] = (char)(uVar1 >> 8);
  param_6[0x1e] = (char)(uVar1 >> 0x10);
  param_6[0x1c] = (char)uVar1;
  param_6[0x1f] = (char)(uVar1 >> 0x18);
  *(uint *)(param_6 + 0x20) = uVar2 ^ *param_1;
  *(uint *)(param_6 + 0x24) = uVar3 ^ param_1[1];
  *(uint *)(param_6 + 0x28) = uVar4 ^ param_1[2];
  *(uint *)(param_6 + 0x2c) = uVar5 ^ param_1[3];
  *(uint *)(param_6 + 0x30) = param_1[4] ^ (uVar8 >> 8 | uVar8 << 0x18);
  *(uint *)(param_6 + 0x34) = param_1[5] ^ (uVar11 >> 8 | uVar11 << 0x18);
  *(uint *)(param_6 + 0x38) = param_1[6] ^ (uVar13 >> 8 | uVar13 << 0x18);
  *(uint *)(param_6 + 0x3c) = param_1[7] ^ (uVar16 >> 8 | uVar16 << 0x18);
  return;
}



/* Entry: 109f64a10; end: 109f64b27;  */

long * FUN_109f64a10(ulong param_1,long *param_2,long param_3,long param_4,long *param_5,
                    long param_6,uint param_7,byte param_8,byte param_9,byte param_10,
                    undefined4 param_11,undefined4 *param_12)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 != 0) {
    plVar6 = param_2;
LAB_109f64a70:
    lVar7 = *plVar6;
    uStack_88 = param_5[1];
    uStack_90 = *param_5;
    uStack_78 = param_5[3];
    lStack_80 = param_5[2];
    lVar4 = param_4;
    bVar2 = param_9 | param_8;
    do {
      if (lVar4 + -1 == 0) {
        bVar2 = bVar2 | param_10;
      }
      else if (lVar4 == 0) goto LAB_109f64ac0;
      param_2 = &uStack_90;
      FUN_109f62ccc(param_2,lVar7,0x40,param_6,bVar2);
      lVar7 = lVar7 + 0x40;
      lVar4 = lVar4 + -1;
      bVar2 = param_8;
    } while( true );
  }
LAB_109f64aec:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_2;
  }
  ___stack_chk_fail();
  fVar8 = (float)param_1;
  uVar5 = (uint)fVar8 & 0x7fffff;
  uVar1 = (uint)fVar8 >> 0x17 & 0xff;
  if (uVar1 == 0 && (param_1 & 0x7fffff) == 0) {
    uVar5 = 0;
    iVar3 = 0;
    goto LAB_109f64b8c;
  }
  if (((param_1 & 0x7fffff) != 0) && (uVar1 == 0)) {
    uVar5 = 0;
    iVar3 = 0;
    goto LAB_109f64b8c;
  }
  if (((param_1 & 0x7fffff) == 0) && (uVar1 == 0xff)) {
LAB_109f64b64:
    uVar5 = 0;
  }
  else {
    if (((param_1 & 0x7fffff) == 0) || (uVar1 != 0xff)) {
      iVar3 = uVar1 - 0x70;
      if (uVar1 < 0x70 || iVar3 == 0) {
        iVar3 = 0;
        uVar5 = (uint)(long)(float)(int)(ABS(fVar8) * 16777216.0);
        goto LAB_109f64b8c;
      }
      if (uVar1 < 0x8f) {
        uVar5 = (uint)(long)(float)(int)((float)uVar5 / 8192.0);
        goto LAB_109f64b8c;
      }
      goto LAB_109f64b64;
    }
    if (uVar5 < 0x2001) {
      uVar5 = 0x2000;
    }
    uVar5 = uVar5 >> 0xd;
  }
  iVar3 = 0x1f;
LAB_109f64b8c:
  if (uVar5 == 0x400) {
    iVar3 = iVar3 + 1;
    uVar5 = 0;
  }
  return (long *)(ulong)((uVar5 | ((uint)fVar8 >> 0x1f) << 0xf | iVar3 << 10) & 0xffff);
LAB_109f64ac0:
  *param_12 = (undefined4)uStack_90;
  param_12[1] = uStack_90._4_4_;
  *(long *)(param_12 + 4) = lStack_80;
  *(ulong *)(param_12 + 2) = uStack_88;
  param_12[6] = (undefined4)uStack_78;
  param_12[7] = uStack_78._4_4_;
  param_6 = param_6 + (ulong)param_7;
  plVar6 = plVar6 + 1;
  param_12 = param_12 + 8;
  param_3 = param_3 + -1;
  param_1 = uStack_88;
  if (param_3 == 0) goto LAB_109f64aec;
  goto LAB_109f64a70;
}



/* Entry: 109f64b28; end: 109f64beb;  */

uint FUN_109f64b28(float param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1 & 0x7fffff;
  uVar1 = (uint)param_1 >> 0x17 & 0xff;
  if (uVar1 == 0 && uVar3 == 0) {
    uVar3 = 0;
    iVar2 = 0;
    goto LAB_109f64b8c;
  }
  if ((uVar3 != 0) && (uVar1 == 0)) {
    uVar3 = 0;
    iVar2 = 0;
    goto LAB_109f64b8c;
  }
  if ((uVar3 == 0) && (uVar1 == 0xff)) {
LAB_109f64b64:
    uVar3 = 0;
  }
  else {
    if ((uVar3 == 0) || (uVar1 != 0xff)) {
      iVar2 = uVar1 - 0x70;
      if (uVar1 < 0x70 || iVar2 == 0) {
        iVar2 = 0;
        uVar3 = (uint)(long)(float)(int)(ABS(param_1) * 16777216.0);
        goto LAB_109f64b8c;
      }
      if (uVar1 < 0x8f) {
        uVar3 = (uint)(long)(float)(int)((float)uVar3 / 8192.0);
        goto LAB_109f64b8c;
      }
      goto LAB_109f64b64;
    }
    if (uVar3 < 0x2001) {
      uVar3 = 0x2000;
    }
    uVar3 = uVar3 >> 0xd;
  }
  iVar2 = 0x1f;
LAB_109f64b8c:
  if (uVar3 == 0x400) {
    iVar2 = iVar2 + 1;
    uVar3 = 0;
  }
  return (uVar3 | ((uint)param_1 >> 0x1f) << 0xf | iVar2 << 10) & 0xffff;
}



/* Entry: 109f64bec; end: 109f64c73;  */

bool FUN_109f64bec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[4] = 0x300000005;
  param_1[6] = 0x5555555555555556;
  param_1[5] = 0x3333333333333334;
  param_1[7] = 2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  FUN_109f658b0(param_2,0x78);
  if (param_2 != (undefined8 *)0x0) {
    param_2[0xe] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    *param_2 = 0;
  }
  *param_1 = param_2;
  param_1[8] = 0;
  param_1[3] = &UNK_10e47d8e8;
  return param_2 != (undefined8 *)0x0;
}



/* Entry: 109f64c74; end: 109f64d63;  */

undefined8 * FUN_109f64c74(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_109f658b0(param_1,0x48);
  if (param_1 != (undefined8 *)0x0) {
    param_1[4] = 0x300000005;
    param_1[6] = 0x5555555555555556;
    param_1[5] = 0x3333333333333334;
    param_1[7] = 2;
    param_1[1] = param_2;
    param_1[2] = param_3;
    puVar1 = (undefined8 *)0xb0;
    _malloc();
    if (puVar1 == (undefined8 *)0x0) {
      *param_1 = 0;
      param_1[8] = 0;
      param_1[3] = &UNK_10e47d8e8;
      FUN_109f65aa4(param_1 + -6);
      FUN_109f65ae0(param_1 + -6);
      param_1 = (undefined8 *)0x0;
    }
    else {
      puVar1[4] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      *puVar1 = param_1 + -6;
      lVar2 = param_1[-5];
      puVar1[3] = lVar2;
      param_1[-5] = puVar1;
      if (lVar2 != 0) {
        *(undefined8 **)(lVar2 + 0x10) = puVar1;
      }
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[0x14] = 0;
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
      *param_1 = puVar1 + 6;
      param_1[8] = 0;
      param_1[3] = &UNK_10e47d8e8;
    }
  }
  return param_1;
}



/* Entry: 109f64d64; end: 109f64db3;  */

uint FUN_109f64d64(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 * -0x3d4d51c3 + 0x165667b5;
  uVar1 = (uVar1 >> 0xf | uVar1 * 0x20000) * 0x27d4eb2f;
  uVar1 = (uVar1 ^ uVar1 >> 0xf) * -0x7a143589;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51c3;
  return uVar1 ^ uVar1 >> 0x10;
}



/* Entry: 109f64db4; end: 109f64e53;  */

long * FUN_109f64db4(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  FUN_109f658b0(param_2,0x48);
  if (param_2 != (long *)0x0) {
    lVar7 = param_1[4];
    lVar4 = param_1[7];
    lVar3 = param_1[6];
    lVar2 = param_1[8];
    lVar6 = param_1[3];
    lVar5 = param_1[2];
    param_2[5] = param_1[5];
    param_2[4] = lVar7;
    lVar8 = param_1[1];
    lVar7 = *param_1;
    param_2[8] = lVar2;
    param_2[7] = lVar4;
    param_2[6] = lVar3;
    param_2[1] = lVar8;
    *param_2 = lVar7;
    param_2[3] = lVar6;
    param_2[2] = lVar5;
    plVar1 = param_2;
    FUN_109f658b0(param_2,(ulong)*(uint *)(param_2 + 4) * 0x18);
    *param_2 = (long)plVar1;
    if (plVar1 == (long *)0x0) {
      FUN_109f65aa4(param_2 + -6);
      FUN_109f65ae0(param_2 + -6);
      param_2 = (long *)0x0;
    }
    else {
      _memcpy();
    }
  }
  return param_2;
}



/* Entry: 109f64e54; end: 109f64fdb;  */

void FUN_109f64e54(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((param_2 != (code *)0x0) && (*(uint *)(param_1 + 4) != 0)) {
    lVar2 = *param_1;
    lVar1 = (ulong)*(uint *)(param_1 + 4) * 0x18;
    do {
      if ((*(long *)(lVar2 + 8) != 0) && (*(long *)(lVar2 + 8) != param_1[3])) {
        (*param_2)(lVar2);
        lVar2 = lVar2 + 0x18;
        lVar1 = *param_1 + (ulong)*(uint *)(param_1 + 4) * 0x18;
        if (lVar2 != lVar1) {
          do {
            if ((*(long *)(lVar2 + 8) != 0) && (*(long *)(lVar2 + 8) != param_1[3])) {
              (*param_2)(lVar2);
              lVar1 = *param_1 + (ulong)*(uint *)(param_1 + 4) * 0x18;
            }
            lVar2 = lVar2 + 0x18;
          } while (lVar2 != lVar1);
        }
        break;
      }
      lVar2 = lVar2 + 0x18;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != 0);
  }
  FUN_109f65aa4(param_1 + -6);
  lVar2 = param_1[-5];
  while (lVar2 != 0) {
    param_1[-5] = *(long *)(lVar2 + 0x18);
    FUN_109f65ae0();
    lVar2 = param_1[-5];
  }
  if ((code *)param_1[-2] != (code *)0x0) {
    (*(code *)param_1[-2])(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1 + -6);
  return;
}



/* Entry: 109f64fdc; end: 109f653b7;  */

uint * FUN_109f64fdc(long *param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  
  uVar6 = param_1[5] * (ulong)param_2;
  uVar3 = *(uint *)(param_1 + 4);
  uVar4 = *(uint *)((long)param_1 + 0x24);
  uVar7 = ((uVar6 & 0xffffffff) * (ulong)uVar3 >> 0x20) + (uVar6 >> 0x20) * (ulong)uVar3;
  uVar9 = uVar7 >> 0x20;
  uVar6 = param_1[6] * (ulong)param_2;
  while( true ) {
    puVar8 = (uint *)(*param_1 + uVar9 * 0x18);
    if (*(long *)(puVar8 + 2) == 0) {
      return (uint *)0x0;
    }
    if (((*(long *)(puVar8 + 2) != param_1[3]) && (*puVar8 == param_2)) &&
       (uVar5 = param_3, (*(code *)param_1[2])(), (uVar5 & 1) != 0)) break;
    uVar1 = (int)(((uVar6 & 0xffffffff) * (ulong)uVar4 >> 0x20) + (uVar6 >> 0x20) * (ulong)uVar4 >>
                 0x20) + 1 + (int)uVar9;
    uVar2 = 0;
    if (uVar3 <= uVar1) {
      uVar2 = uVar3;
    }
    uVar1 = uVar1 - uVar2;
    uVar9 = (ulong)uVar1;
    if (uVar1 == (uint)(uVar7 >> 0x20)) {
      return (uint *)0x0;
    }
  }
  return puVar8;
}



/* Entry: 109f653b8; end: 109f65413;  */

void FUN_109f653b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  (**(code **)(param_1 + 8))(param_2);
  lVar2 = param_1;
  FUN_109f64fdc(param_1,uVar1,param_2);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x40) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) + 1,
                  (int)*(undefined8 *)(param_1 + 0x40) + -1);
  }
  return;
}



/* Entry: 109f65414; end: 109f65517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_109f65414(byte *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined1 auVar6 [12];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar7 [16];
  undefined1 auVar12 [16];
  undefined1 auVar8 [16];
  
  if (param_2 < 0x10) {
    iVar5 = 0x165667b1;
  }
  else {
    pbVar3 = param_1 + (param_2 - 0xf);
    pbVar2 = param_1;
    auVar7 = _UNK_10e06d340;
    do {
      param_1 = pbVar2 + 0x10;
      uVar4 = auVar7._0_4_ + (int)*(undefined8 *)pbVar2 * -0x7a143589;
      uVar9 = auVar7._4_4_ + (int)((ulong)*(undefined8 *)pbVar2 >> 0x20) * -0x7a143589;
      uVar10 = auVar7._8_4_ + (int)*(undefined8 *)(pbVar2 + 8) * -0x7a143589;
      uVar11 = auVar7._12_4_ + (int)((ulong)*(undefined8 *)(pbVar2 + 8) >> 0x20) * -0x7a143589;
      auVar7._0_4_ = (uVar4 * 0x2000 + (uVar4 >> 0x13)) * -0x61c8864f;
      auVar7._4_4_ = (uVar9 * 0x2000 + (uVar9 >> 0x13)) * -0x61c8864f;
      auVar7._8_4_ = (uVar10 * 0x2000 + (uVar10 >> 0x13)) * -0x61c8864f;
      auVar7._12_4_ = (uVar11 * 0x2000 + (uVar11 >> 0x13)) * -0x61c8864f;
      pbVar2 = param_1;
    } while (param_1 < pbVar3);
    auVar12 = NEON_ushl(auVar7,_UNK_10e00f860,4);
    auVar1._12_4_ = 0x12;
    auVar1._0_12_ = _UNK_10e00f870;
    auVar7 = NEON_ushl(auVar7,auVar1,4);
    iVar5 = CONCAT13(auVar7[3] | auVar12[3],
                     CONCAT12(auVar7[2] | auVar12[2],
                              CONCAT11(auVar7[1] | auVar12[1],auVar7[0] | auVar12[0])));
    auVar6._0_8_ = CONCAT17(auVar7[7] | auVar12[7],
                            CONCAT16(auVar7[6] | auVar12[6],
                                     CONCAT15(auVar7[5] | auVar12[5],
                                              CONCAT14(auVar7[4] | auVar12[4],iVar5))));
    auVar6[8] = auVar7[8] | auVar12[8];
    auVar6[9] = auVar7[9] | auVar12[9];
    auVar6[10] = auVar7[10] | auVar12[10];
    auVar6[0xb] = auVar7[0xb] | auVar12[0xb];
    auVar8[0xc] = auVar7[0xc] | auVar12[0xc];
    auVar8._0_12_ = auVar6;
    auVar8[0xd] = auVar7[0xd] | auVar12[0xd];
    auVar8[0xe] = auVar7[0xe] | auVar12[0xe];
    auVar8[0xf] = auVar7[0xf] | auVar12[0xf];
    iVar5 = iVar5 + (int)((ulong)auVar6._0_8_ >> 0x20) + auVar6._8_4_ + auVar8._12_4_;
  }
  uVar4 = iVar5 + (int)param_2;
  for (param_2 = param_2 & 0xf; 3 < param_2; param_2 = param_2 - 4) {
    uVar4 = uVar4 + *(int *)param_1 * -0x3d4d51c3;
    uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) * 0x27d4eb2f;
    param_1 = param_1 + 4;
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar4 = uVar4 + (uint)*param_1 * 0x165667b1;
    uVar4 = (uVar4 >> 0x15 | uVar4 * 0x800) * -0x61c8864f;
    param_1 = param_1 + 1;
  }
  uVar4 = (uVar4 ^ uVar4 >> 0xf) * -0x7a143589;
  uVar4 = (uVar4 ^ uVar4 >> 0xd) * -0x3d4d51c3;
  return uVar4 ^ uVar4 >> 0x10;
}



/* Entry: 109f65518; end: 109f6553f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_109f65518(byte *param_1)

{
  undefined1 auVar1 [16];
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auVar8 [12];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar9 [16];
  undefined1 auVar14 [16];
  undefined1 auVar10 [16];
  
  pbVar2 = param_1;
  _strlen();
  if ((uint)pbVar2 < 0x10) {
    iVar7 = 0x165667b1;
  }
  else {
    pbVar4 = param_1 + (((ulong)pbVar2 & 0xffffffff) - 0xf);
    pbVar3 = param_1;
    auVar9 = _UNK_10e06d340;
    do {
      param_1 = pbVar3 + 0x10;
      uVar6 = auVar9._0_4_ + (int)*(undefined8 *)pbVar3 * -0x7a143589;
      uVar11 = auVar9._4_4_ + (int)((ulong)*(undefined8 *)pbVar3 >> 0x20) * -0x7a143589;
      uVar12 = auVar9._8_4_ + (int)*(undefined8 *)(pbVar3 + 8) * -0x7a143589;
      uVar13 = auVar9._12_4_ + (int)((ulong)*(undefined8 *)(pbVar3 + 8) >> 0x20) * -0x7a143589;
      auVar9._0_4_ = (uVar6 * 0x2000 + (uVar6 >> 0x13)) * -0x61c8864f;
      auVar9._4_4_ = (uVar11 * 0x2000 + (uVar11 >> 0x13)) * -0x61c8864f;
      auVar9._8_4_ = (uVar12 * 0x2000 + (uVar12 >> 0x13)) * -0x61c8864f;
      auVar9._12_4_ = (uVar13 * 0x2000 + (uVar13 >> 0x13)) * -0x61c8864f;
      pbVar3 = param_1;
    } while (param_1 < pbVar4);
    auVar14 = NEON_ushl(auVar9,_UNK_10e00f860,4);
    auVar1._12_4_ = 0x12;
    auVar1._0_12_ = _UNK_10e00f870;
    auVar9 = NEON_ushl(auVar9,auVar1,4);
    iVar7 = CONCAT13(auVar9[3] | auVar14[3],
                     CONCAT12(auVar9[2] | auVar14[2],
                              CONCAT11(auVar9[1] | auVar14[1],auVar9[0] | auVar14[0])));
    auVar8._0_8_ = CONCAT17(auVar9[7] | auVar14[7],
                            CONCAT16(auVar9[6] | auVar14[6],
                                     CONCAT15(auVar9[5] | auVar14[5],
                                              CONCAT14(auVar9[4] | auVar14[4],iVar7))));
    auVar8[8] = auVar9[8] | auVar14[8];
    auVar8[9] = auVar9[9] | auVar14[9];
    auVar8[10] = auVar9[10] | auVar14[10];
    auVar8[0xb] = auVar9[0xb] | auVar14[0xb];
    auVar10[0xc] = auVar9[0xc] | auVar14[0xc];
    auVar10._0_12_ = auVar8;
    auVar10[0xd] = auVar9[0xd] | auVar14[0xd];
    auVar10[0xe] = auVar9[0xe] | auVar14[0xe];
    auVar10[0xf] = auVar9[0xf] | auVar14[0xf];
    iVar7 = iVar7 + (int)((ulong)auVar8._0_8_ >> 0x20) + auVar8._8_4_ + auVar10._12_4_;
  }
  uVar6 = iVar7 + (uint)pbVar2;
  for (uVar5 = (ulong)pbVar2 & 0xf; 3 < uVar5; uVar5 = uVar5 - 4) {
    uVar6 = uVar6 + *(int *)param_1 * -0x3d4d51c3;
    uVar6 = (uVar6 >> 0xf | uVar6 * 0x20000) * 0x27d4eb2f;
    param_1 = param_1 + 4;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar6 = uVar6 + (uint)*param_1 * 0x165667b1;
    uVar6 = (uVar6 >> 0x15 | uVar6 * 0x800) * -0x61c8864f;
    param_1 = param_1 + 1;
  }
  uVar6 = (uVar6 ^ uVar6 >> 0xf) * -0x7a143589;
  uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51c3;
  return uVar6 ^ uVar6 >> 0x10;
}



/* Entry: 109f65540; end: 109f65667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_109f65540(byte *param_1,uint param_2)

{
  undefined1 auVar1 [16];
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auVar7 [12];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar8 [16];
  undefined1 auVar13 [16];
  undefined1 auVar9 [16];
  
  if (param_2 < 0x10) {
    iVar6 = 0x165667b1;
  }
  else {
    pbVar3 = param_1 + ((ulong)param_2 - 0xf);
    pbVar2 = param_1;
    auVar8 = _UNK_10e06d340;
    do {
      param_1 = pbVar2 + 0x10;
      uVar5 = auVar8._0_4_ + (int)*(undefined8 *)pbVar2 * -0x7a143589;
      uVar10 = auVar8._4_4_ + (int)((ulong)*(undefined8 *)pbVar2 >> 0x20) * -0x7a143589;
      uVar11 = auVar8._8_4_ + (int)*(undefined8 *)(pbVar2 + 8) * -0x7a143589;
      uVar12 = auVar8._12_4_ + (int)((ulong)*(undefined8 *)(pbVar2 + 8) >> 0x20) * -0x7a143589;
      auVar8._0_4_ = (uVar5 * 0x2000 + (uVar5 >> 0x13)) * -0x61c8864f;
      auVar8._4_4_ = (uVar10 * 0x2000 + (uVar10 >> 0x13)) * -0x61c8864f;
      auVar8._8_4_ = (uVar11 * 0x2000 + (uVar11 >> 0x13)) * -0x61c8864f;
      auVar8._12_4_ = (uVar12 * 0x2000 + (uVar12 >> 0x13)) * -0x61c8864f;
      pbVar2 = param_1;
    } while (param_1 < pbVar3);
    auVar13 = NEON_ushl(auVar8,_UNK_10e00f860,4);
    auVar1._12_4_ = 0x12;
    auVar1._0_12_ = _UNK_10e00f870;
    auVar8 = NEON_ushl(auVar8,auVar1,4);
    iVar6 = CONCAT13(auVar8[3] | auVar13[3],
                     CONCAT12(auVar8[2] | auVar13[2],
                              CONCAT11(auVar8[1] | auVar13[1],auVar8[0] | auVar13[0])));
    auVar7._0_8_ = CONCAT17(auVar8[7] | auVar13[7],
                            CONCAT16(auVar8[6] | auVar13[6],
                                     CONCAT15(auVar8[5] | auVar13[5],
                                              CONCAT14(auVar8[4] | auVar13[4],iVar6))));
    auVar7[8] = auVar8[8] | auVar13[8];
    auVar7[9] = auVar8[9] | auVar13[9];
    auVar7[10] = auVar8[10] | auVar13[10];
    auVar7[0xb] = auVar8[0xb] | auVar13[0xb];
    auVar9[0xc] = auVar8[0xc] | auVar13[0xc];
    auVar9._0_12_ = auVar7;
    auVar9[0xd] = auVar8[0xd] | auVar13[0xd];
    auVar9[0xe] = auVar8[0xe] | auVar13[0xe];
    auVar9[0xf] = auVar8[0xf] | auVar13[0xf];
    iVar6 = iVar6 + (int)((ulong)auVar7._0_8_ >> 0x20) + auVar7._8_4_ + auVar9._12_4_;
  }
  uVar5 = iVar6 + param_2;
  for (uVar4 = (ulong)param_2 & 0xf; 3 < uVar4; uVar4 = uVar4 - 4) {
    uVar5 = uVar5 + *(int *)param_1 * -0x3d4d51c3;
    uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) * 0x27d4eb2f;
    param_1 = param_1 + 4;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar5 = uVar5 + (uint)*param_1 * 0x165667b1;
    uVar5 = (uVar5 >> 0x15 | uVar5 * 0x800) * -0x61c8864f;
    param_1 = param_1 + 1;
  }
  uVar5 = (uVar5 ^ uVar5 >> 0xf) * -0x7a143589;
  uVar5 = (uVar5 ^ uVar5 >> 0xd) * -0x3d4d51c3;
  return uVar5 ^ uVar5 >> 0x10;
}



/* Entry: 109f65668; end: 109f65683;  */

bool FUN_109f65668(int param_1)

{
  _strcmp();
  return param_1 == 0;
}



/* Entry: 109f65684; end: 109f6568f;  */

bool FUN_109f65684(long param_1,long param_2)

{
  return param_1 == param_2;
}



/* Entry: 109f65690; end: 109f6572b;  */

void FUN_109f65690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lStack_860;
  long lStack_858;
  long lStack_850;
  long lStack_848;
  long lStack_838;
  undefined1 **ppuStack_830;
  code *pcStack_828;
  ulong uStack_820;
  uint auStack_810 [10];
  long lStack_7e8;
  undefined1 *puStack_7b0;
  code *pcStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined3 uStack_728;
  undefined5 uStack_725;
  undefined3 uStack_720;
  undefined8 uStack_71d;
  undefined1 uStack_710;
  long lStack_28;
  
  puVar1 = &uStack_7a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_798 = 0xa54ff53a3c6ef372;
  uStack_7a0 = 0xbb67ae856a09e667;
  uStack_788 = 0x5be0cd191f83d9ab;
  uStack_790 = 0x9b05688c510e527f;
  uStack_778 = 0xa54ff53a3c6ef372;
  uStack_780 = 0xbb67ae856a09e667;
  uStack_768 = 0x5be0cd191f83d9ab;
  uStack_770 = 0x9b05688c510e527f;
  uStack_710 = 0;
  uStack_758 = 0;
  uStack_760 = 0;
  uStack_748 = 0;
  uStack_750 = 0;
  uStack_738 = 0;
  uStack_740 = 0;
  uStack_728 = 0;
  uStack_730 = 0;
  uStack_71d = 0;
  uStack_725 = 0;
  uStack_720 = 0;
  FUN_109f61aa0(&uStack_7a0,param_1,param_2);
  lVar4 = 0;
  func_0x000109f625b0(&uStack_7a0,0,param_3,0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puStack_7b0 = &stack0xfffffffffffffff0;
  pcStack_7a8 = FUN_109f6572c;
  uVar5 = 0;
  uVar6 = 0;
  lStack_7e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_810[2] = 0;
  auStack_810[3] = 0;
  auStack_810[0] = 0;
  auStack_810[1] = 0;
  auStack_810[6] = 0;
  auStack_810[7] = 0;
  auStack_810[4] = 0;
  auStack_810[5] = 0;
  do {
    *(uint *)((long)auStack_810 + (uVar6 & 0xfffffffc)) =
         (uint)*(byte *)(lVar4 + uVar6) << (ulong)(uVar5 & 0x18) |
         *(uint *)((long)auStack_810 + (uVar6 & 0xfffffffc));
    uVar6 = uVar6 + 1;
    uVar5 = uVar5 + 8;
  } while (uVar6 != 0x20);
  lVar4 = 0;
  do {
    plVar3 = (long *)&UNK_10f624e18;
    if (lVar4 != 0) {
      plVar3 = (long *)&UNK_10f624e0f;
    }
    uStack_820 = (ulong)*(uint *)((long)auStack_810 + lVar4);
    puVar2 = (undefined1 *)puVar1;
    _fprintf();
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7e8) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_830 = &puStack_7b0;
  pcStack_828 = FUN_109f65808;
  uVar5 = 0;
  uVar6 = 0;
  lStack_838 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_858 = 0;
  lStack_860 = 0;
  lStack_848 = 0;
  lStack_850 = 0;
  do {
    *(uint *)((long)&lStack_860 + (uVar6 & 0xfffffffc)) =
         (uint)(byte)puVar2[uVar6] << (ulong)(uVar5 & 0x18) |
         *(uint *)((long)&lStack_860 + (uVar6 & 0xfffffffc));
    uVar6 = uVar6 + 1;
    uVar5 = uVar5 + 8;
  } while (uVar6 != 0x20);
  uVar6 = (ulong)(((lStack_860 == *plVar3 && lStack_858 == plVar3[1]) && lStack_850 == plVar3[2]) &&
                 lStack_848 == plVar3[3]);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_838) {
    return;
  }
  ___stack_chk_fail();
  plVar3 = (long *)((ulong)((long)plVar3 + 0x3f) & 0xfffffffffffffff0);
  _malloc();
  if (plVar3 != (long *)0x0) {
    plVar3[4] = 0;
    plVar3[1] = 0;
    *plVar3 = 0;
    plVar3[3] = 0;
    plVar3[2] = 0;
    if (uVar6 != 0) {
      *plVar3 = uVar6 - 0x30;
      lVar4 = *(long *)(uVar6 - 0x28);
      plVar3[3] = lVar4;
      *(long **)(uVar6 - 0x28) = plVar3;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 0x10) = plVar3;
      }
    }
  }
  return;
}



/* Entry: 109f6572c; end: 109f65807;  */

void FUN_109f6572c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  ulong uStack_80;
  uint auStack_70 [10];
  long lStack_48;
  
  uVar3 = 0;
  uVar4 = 0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_70[2] = 0;
  auStack_70[3] = 0;
  auStack_70[0] = 0;
  auStack_70[1] = 0;
  auStack_70[6] = 0;
  auStack_70[7] = 0;
  auStack_70[4] = 0;
  auStack_70[5] = 0;
  do {
    *(uint *)((long)auStack_70 + (uVar4 & 0xfffffffc)) =
         (uint)*(byte *)(param_2 + uVar4) << (ulong)(uVar3 & 0x18) |
         *(uint *)((long)auStack_70 + (uVar4 & 0xfffffffc));
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 + 8;
  } while (uVar4 != 0x20);
  lVar5 = 0;
  do {
    plVar2 = (long *)&UNK_10f624e18;
    if (lVar5 != 0) {
      plVar2 = (long *)&UNK_10f624e0f;
    }
    uStack_80 = (ulong)*(uint *)((long)auStack_70 + lVar5);
    lVar1 = param_1;
    _fprintf();
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puStack_90 = &stack0xfffffffffffffff0;
  pcStack_88 = FUN_109f65808;
  uVar3 = 0;
  uVar4 = 0;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_b8 = 0;
  lStack_c0 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  do {
    *(uint *)((long)&lStack_c0 + (uVar4 & 0xfffffffc)) =
         (uint)*(byte *)(lVar1 + uVar4) << (ulong)(uVar3 & 0x18) |
         *(uint *)((long)&lStack_c0 + (uVar4 & 0xfffffffc));
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 + 8;
  } while (uVar4 != 0x20);
  uVar4 = (ulong)(((lStack_c0 == *plVar2 && lStack_b8 == plVar2[1]) && lStack_b0 == plVar2[2]) &&
                 lStack_a8 == plVar2[3]);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  plVar2 = (long *)((ulong)((long)plVar2 + 0x3f) & 0xfffffffffffffff0);
  _malloc();
  if (plVar2 != (long *)0x0) {
    plVar2[4] = 0;
    plVar2[1] = 0;
    *plVar2 = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    if (uVar4 != 0) {
      *plVar2 = uVar4 - 0x30;
      lVar5 = *(long *)(uVar4 - 0x28);
      plVar2[3] = lVar5;
      *(long **)(uVar4 - 0x28) = plVar2;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 0x10) = plVar2;
      }
    }
  }
  return;
}



/* Entry: 109f65808; end: 109f658af;  */

void FUN_109f65808(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_18;
  
  uVar2 = 0;
  uVar4 = 0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_38 = 0;
  lStack_40 = 0;
  lStack_28 = 0;
  lStack_30 = 0;
  do {
    *(uint *)((long)&lStack_40 + (uVar4 & 0xfffffffc)) =
         (uint)*(byte *)(param_1 + uVar4) << (ulong)(uVar2 & 0x18) |
         *(uint *)((long)&lStack_40 + (uVar4 & 0xfffffffc));
    uVar4 = uVar4 + 1;
    uVar2 = uVar2 + 8;
  } while (uVar4 != 0x20);
  uVar4 = (ulong)(((lStack_40 == *param_2 && lStack_38 == param_2[1]) && lStack_30 == param_2[2]) &&
                 lStack_28 == param_2[3]);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  plVar1 = (long *)((long)param_2 + 0x3fU & 0xfffffffffffffff0);
  _malloc();
  if (plVar1 != (long *)0x0) {
    plVar1[4] = 0;
    plVar1[1] = 0;
    *plVar1 = 0;
    plVar1[3] = 0;
    plVar1[2] = 0;
    if (uVar4 != 0) {
      *plVar1 = uVar4 - 0x30;
      lVar3 = *(long *)(uVar4 - 0x28);
      plVar1[3] = lVar3;
      *(long **)(uVar4 - 0x28) = plVar1;
      if (lVar3 != 0) {
        *(long **)(lVar3 + 0x10) = plVar1;
      }
    }
  }
  return;
}



/* Entry: 109f658b0; end: 109f65943;  */

void FUN_109f658b0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x3fU & 0xfffffffffffffff0);
  _malloc();
  if (plVar1 != (long *)0x0) {
    plVar1[4] = 0;
    plVar1[1] = 0;
    *plVar1 = 0;
    plVar1[3] = 0;
    plVar1[2] = 0;
    if (param_1 != 0) {
      *plVar1 = param_1 + -0x30;
      lVar2 = *(long *)(param_1 + -0x28);
      plVar1[3] = lVar2;
      *(long **)(param_1 + -0x28) = plVar1;
      if (lVar2 != 0) {
        *(long **)(lVar2 + 0x10) = plVar1;
      }
    }
  }
  return;
}



/* Entry: 109f65944; end: 109f6595b;  */

void FUN_109f65944(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (long *)(param_2 + -0x30);
    plVar1 = plVar3;
    _realloc(plVar3,param_3 + 0x3fU & 0xfffffffffffffff0);
    if (plVar1 != (long *)0x0) {
      if ((plVar1 != plVar3) && (lVar2 = *plVar1, lVar2 != 0)) {
        if (*(long **)(lVar2 + 8) == plVar3) {
          *(long **)(lVar2 + 8) = plVar1;
        }
        if (plVar1[2] != 0) {
          *(long **)(plVar1[2] + 0x18) = plVar1;
        }
        if (plVar1[3] != 0) {
          *(long **)(plVar1[3] + 0x10) = plVar1;
        }
      }
      for (plVar3 = (long *)plVar1[1]; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[3]) {
        *plVar3 = (long)plVar1;
      }
    }
    return;
  }
  plVar1 = (long *)(param_3 + 0x3fU & 0xfffffffffffffff0);
  _malloc();
  if (plVar1 != (long *)0x0) {
    plVar1[4] = 0;
    plVar1[1] = 0;
    *plVar1 = 0;
    plVar1[3] = 0;
    plVar1[2] = 0;
    if (param_1 != 0) {
      *plVar1 = param_1 + -0x30;
      lVar2 = *(long *)(param_1 + -0x28);
      plVar1[3] = lVar2;
      *(long **)(param_1 + -0x28) = plVar1;
      if (lVar2 != 0) {
        *(long **)(lVar2 + 0x10) = plVar1;
      }
    }
  }
  return;
}



/* Entry: 109f6595c; end: 109f659db;  */

void FUN_109f6595c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + -0x30);
  plVar1 = plVar3;
  _realloc(plVar3,param_2 + 0x3fU & 0xfffffffffffffff0);
  if (plVar1 != (long *)0x0) {
    if ((plVar1 != plVar3) && (lVar2 = *plVar1, lVar2 != 0)) {
      if (*(long **)(lVar2 + 8) == plVar3) {
        *(long **)(lVar2 + 8) = plVar1;
      }
      if (plVar1[2] != 0) {
        *(long **)(plVar1[2] + 0x18) = plVar1;
      }
      if (plVar1[3] != 0) {
        *(long **)(plVar1[3] + 0x10) = plVar1;
      }
    }
    for (plVar3 = (long *)plVar1[1]; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[3]) {
      *plVar3 = (long)plVar1;
    }
  }
  return;
}



/* Entry: 109f659dc; end: 109f65a3f;  */

long FUN_109f659dc(long param_1,long param_2,ulong param_3,ulong param_4)

{
  if (param_2 != 0) {
    FUN_109f6595c(param_2,param_4);
    if (param_3 <= param_4 && param_4 - param_3 != 0) {
      _bzero(param_2 + param_3,param_4 - param_3);
    }
    return param_2;
  }
  FUN_109f658b0();
  if (param_1 != 0) {
    _bzero(param_1,param_4);
  }
  return param_1;
}



/* Entry: 109f65a40; end: 109f65a73;  */

long * FUN_109f65a40(long param_1,long param_2,ulong param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = CONCAT44(0,param_4);
  if (SUB168(auVar1 * auVar2,8) != 0) {
    return (long *)0x0;
  }
  lVar4 = param_3 * CONCAT44(0,param_4);
  if (param_2 == 0) {
    plVar3 = (long *)(lVar4 + 0x3fU & 0xfffffffffffffff0);
    _malloc();
    if (plVar3 != (long *)0x0) {
      plVar3[4] = 0;
      plVar3[1] = 0;
      *plVar3 = 0;
      plVar3[3] = 0;
      plVar3[2] = 0;
      if (param_1 != 0) {
        *plVar3 = param_1 + -0x30;
        lVar4 = *(long *)(param_1 + -0x28);
        plVar3[3] = lVar4;
        *(long **)(param_1 + -0x28) = plVar3;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar3;
        }
      }
      plVar3 = plVar3 + 6;
    }
    return plVar3;
  }
  plVar5 = (long *)(param_2 + -0x30);
  plVar3 = plVar5;
  _realloc(plVar5,lVar4 + 0x3fU & 0xfffffffffffffff0);
  if (plVar3 != (long *)0x0) {
    if ((plVar3 != plVar5) && (lVar4 = *plVar3, lVar4 != 0)) {
      if (*(long **)(lVar4 + 8) == plVar5) {
        *(long **)(lVar4 + 8) = plVar3;
      }
      if (plVar3[2] != 0) {
        *(long **)(plVar3[2] + 0x18) = plVar3;
      }
      if (plVar3[3] != 0) {
        *(long **)(plVar3[3] + 0x10) = plVar3;
      }
    }
    for (plVar5 = (long *)plVar3[1]; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[3]) {
      *plVar5 = (long)plVar3;
    }
    plVar3 = plVar3 + 6;
  }
  return plVar3;
}



/* Entry: 109f65a74; end: 109f65aa3;  */

void FUN_109f65a74(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  FUN_109f65aa4(param_1 + -0x30);
  lVar1 = *(long *)(param_1 + -0x28);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + -0x28) = *(undefined8 *)(lVar1 + 0x18);
    FUN_109f65ae0();
    lVar1 = *(long *)(param_1 + -0x28);
  }
  if (*(code **)(param_1 + -0x10) != (code *)0x0) {
    (**(code **)(param_1 + -0x10))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1 + -0x30);
  return;
}



/* Entry: 109f65aa4; end: 109f65adf;  */

void FUN_109f65aa4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[3];
    if (*(long **)(lVar2 + 8) == param_1) {
      *(long *)(lVar2 + 8) = lVar1;
    }
    lVar2 = param_1[2];
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x18) = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x10) = lVar2;
    }
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 109f65ae0; end: 109f65b2b;  */

void FUN_109f65ae0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar1 + 0x18);
    FUN_109f65ae0();
    lVar1 = *(long *)(param_1 + 8);
  }
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))(param_1 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 109f65b2c; end: 109f65b97;  */

void FUN_109f65b2c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (long *)(param_2 + -0x30);
    if (param_1 == 0) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        lVar1 = *(long *)(param_2 + -0x18);
        if (*(long **)(lVar2 + 8) == plVar3) {
          *(long *)(lVar2 + 8) = lVar1;
        }
        lVar2 = *(long *)(param_2 + -0x20);
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x18) = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x10) = lVar2;
        }
      }
      *plVar3 = 0;
      *(undefined8 *)(param_2 + -0x20) = 0;
      *(undefined8 *)(param_2 + -0x18) = 0;
      return;
    }
    FUN_109f65aa4(plVar3);
    *(long *)(param_2 + -0x30) = param_1 + -0x30;
    lVar2 = *(long *)(param_1 + -0x28);
    *(long *)(param_2 + -0x18) = lVar2;
    *(long **)(param_1 + -0x28) = plVar3;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 0x10) = plVar3;
    }
  }
  return;
}



/* Entry: 109f65b98; end: 109f65beb;  */

void FUN_109f65b98(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if ((param_2 != 0) && (plVar3 = *(long **)(param_2 + -0x28), plVar3 != (long *)0x0)) {
    plVar1 = plVar3;
    for (plVar2 = (long *)plVar3[3]; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[3]) {
      *plVar1 = param_1 + -0x30;
      plVar1 = plVar2;
    }
    *plVar1 = param_1 + -0x30;
    lVar4 = *(long *)(param_1 + -0x28);
    plVar1[3] = lVar4;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 0x10) = plVar1;
    }
    *(long **)(param_1 + -0x28) = plVar3;
    *(undefined8 *)(param_2 + -0x28) = 0;
  }
  return;
}



/* Entry: 109f65bec; end: 109f65c2b;  */

void FUN_109f65bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_109f658b0(param_1,param_3);
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)();
    return;
  }
  return;
}



/* Entry: 109f65c2c; end: 109f65cf7;  */

long FUN_109f65c2c(long param_1,long param_2)

{
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    _strlen();
    FUN_109f658b0(param_1,(int)param_2 + 1);
    _memcpy();
    *(undefined1 *)(param_1 + param_2) = 0;
  }
  return param_1;
}



/* Entry: 109f65cf8; end: 109f65d73;  */

bool FUN_109f65cf8(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = lVar2;
  _strlen();
  FUN_109f6595c(lVar2,lVar1 + param_3 + 1);
  if (lVar2 != 0) {
    _memcpy(lVar2 + lVar1,param_2,param_3);
    *(undefined1 *)(lVar2 + lVar1 + param_3) = 0;
    *param_1 = lVar2;
  }
  return lVar2 != 0;
}



/* Entry: 109f65d74; end: 109f65d9b;  */

void FUN_109f65d74(undefined8 param_1,undefined8 param_2)

{
  FUN_109f65d9c(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 109f65d9c; end: 109f65e1b;  */

long FUN_109f65d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  puVar1 = &uStack_39;
  uStack_38 = param_3;
  _vsnprintf(puVar1,1,param_2,param_3);
  FUN_109f658b0(param_1,(long)(int)puVar1 + 1);
  if (param_1 != 0) {
    _vsnprintf(param_1,(long)(int)puVar1 + 1,param_2,param_3);
  }
  return param_1;
}



/* Entry: 109f65e1c; end: 109f65e43;  */

void FUN_109f65e1c(undefined8 param_1,undefined8 param_2)

{
  FUN_109f65e44(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 109f65e44; end: 109f65e9b;  */

void FUN_109f65e44(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_38;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    _strlen();
  }
  lStack_38 = lVar1;
  FUN_109f65e9c(param_1,&lStack_38,param_2,param_3);
  return;
}



/* Entry: 109f65e9c; end: 109f65f6f;  */

void FUN_109f65e9c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_59;
  undefined8 uStack_58;
  
  if (*param_1 == 0) {
    lVar3 = 0;
    FUN_109f65d9c(0,param_3,param_4);
    *param_1 = lVar3;
    _strlen();
  }
  else {
    puVar1 = &uStack_59;
    uStack_58 = param_4;
    _vsnprintf(puVar1,1,param_3,param_4);
    lVar2 = *param_1;
    lVar3 = (long)(int)puVar1 + 1;
    FUN_109f6595c(lVar2,*param_2 + lVar3);
    if (lVar2 == 0) {
      return;
    }
    _vsnprintf(lVar2 + *param_2,lVar3,param_3,param_4);
    *param_1 = lVar2;
    lVar3 = *param_2 + (long)(int)puVar1;
  }
  *param_2 = lVar3;
  return;
}



/* Entry: 109f65f70; end: 109f65f97;  */

void FUN_109f65f70(void)

{
  FUN_109f65e9c();
  return;
}



/* Entry: 109f65f98; end: 109f6600b;  */

long FUN_109f65f98(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_109f658b0(param_1,0x210);
  if (param_1 != 0) {
    _bzero(param_1,0x210);
  }
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    *(long *)lVar1 = lVar1;
    *(long *)(lVar1 + 8) = lVar1;
    *(long *)(lVar1 + 0x10) = lVar1 + 0x10;
    *(long *)(lVar1 + 0x18) = lVar1 + 0x10;
    *(long *)(lVar1 + 0x20) = lVar1 + 0x20;
    *(long *)(lVar1 + 0x28) = lVar1 + 0x20;
    *(long *)(lVar1 + 0x30) = lVar1 + 0x30;
    *(long *)(lVar1 + 0x38) = lVar1 + 0x30;
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0x200);
  return param_1;
}



/* Entry: 109f6600c; end: 109f66193;  */

void FUN_109f6600c(short *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  
  if (param_3 < 3) {
    param_3 = 2;
  }
  uVar9 = param_3 + 3 & -param_3;
  uVar2 = ((param_2 + param_3) - 1 & -param_3) + uVar9;
  if (uVar2 < 0x201) {
    uVar4 = (int)uVar2 - 1;
    plVar3 = (long *)(param_1 + (ulong)(uVar4 >> 5) * 0x10);
    plVar7 = (long *)plVar3[3];
    if (plVar7 == plVar3 + 2) {
      uVar1 = (uVar4 & 0xffffffe0) + 0x20;
      uVar5 = 0;
      if (uVar1 != 0) {
        uVar5 = 0x7fc0 / uVar1;
      }
      psVar6 = param_1;
      FUN_109f658b0(param_1,uVar5 * uVar1 + 0x40);
      if (psVar6 == (short *)0x0) {
        return;
      }
      *(short **)psVar6 = param_1;
      *(short **)(psVar6 + 4) = psVar6 + 0x20;
      psVar6[8] = 0;
      psVar6[9] = 0;
      psVar6[10] = 0;
      psVar6[0xb] = 0;
      psVar6[0x1c] = 0;
      psVar6[0x1d] = 0;
      *(uint *)(psVar6 + 0x1e) = uVar5;
      *(long **)(psVar6 + 0x10) = plVar3;
      lVar8 = *plVar3;
      plVar7 = (long *)(psVar6 + 0xc);
      *plVar7 = lVar8;
      *(long **)(lVar8 + 8) = plVar7;
      *plVar3 = (long)plVar7;
      plVar10 = plVar3 + 2;
      lVar8 = *plVar10;
      *(long **)(psVar6 + 0x18) = plVar10;
      plVar7 = (long *)(psVar6 + 0x14);
      *plVar7 = lVar8;
      *(long **)(lVar8 + 8) = plVar7;
      *plVar10 = (long)plVar7;
      plVar7 = (long *)plVar3[3];
    }
    psVar6 = (short *)plVar7[-3];
    if (psVar6 == (short *)0x0) {
      psVar6 = (short *)plVar7[-4];
      *psVar6 = ((short)psVar6 - (short)plVar7) + 0x28;
      *(char *)(psVar6 + 1) = (char)(uVar4 >> 5);
      plVar7[-4] = plVar7[-4] + (ulong)((uVar4 & 0xffffffe0) + 0x20);
    }
    else {
      plVar7[-3] = *(long *)(psVar6 + 2);
    }
    iVar11 = (int)((ulong)plVar7[2] >> 0x20) + -1;
    plVar7[2] = CONCAT44(iVar11,(int)plVar7[2] + 1);
    if (iVar11 == 0) {
      lVar8 = *plVar7;
      plVar3 = (long *)plVar7[1];
      *(long **)(lVar8 + 8) = plVar3;
      *plVar3 = lVar8;
      *plVar7 = 0;
      plVar7[1] = 0;
    }
  }
  else {
    psVar6 = param_1;
    FUN_109f658b0();
    if (psVar6 == (short *)0x0) {
      return;
    }
    *(undefined1 *)(psVar6 + 1) = 0x10;
  }
  *(byte *)((long)psVar6 + 3) = *(byte *)(param_1 + 0x100) | 1;
  if (uVar9 != 4) {
    *(byte *)((long)psVar6 + (uVar9 - 1)) = (char)uVar9 + 0x7cU | 0x80;
  }
  return;
}



/* Entry: 109f66194; end: 109f66237;  */

long FUN_109f66194(long param_1,undefined8 param_2)

{
  FUN_109f6600c();
  if (param_1 != 0) {
    _bzero(param_1,param_2);
  }
  return param_1;
}



/* Entry: 109f66238; end: 109f66313;  */

void FUN_109f66238(ushort *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar2 = (long *)((long)param_1 - (ulong)*param_1);
  if ((int)plVar2[7] != 1) {
LAB_109f66278:
    uVar1 = *(uint *)((long)plVar2 + 0x3c);
    plVar4 = plVar2 + 5;
    if (uVar1 == 0) {
      lVar3 = *plVar2 + (ulong)(byte)param_1[1] * 0x20;
      plVar5 = *(long **)(lVar3 + 0x18);
      plVar2[5] = lVar3 + 0x10;
      plVar2[6] = (long)plVar5;
      *plVar5 = (long)plVar4;
      *(long **)(lVar3 + 0x18) = plVar4;
    }
    else {
      lVar3 = *plVar2;
      while ((plVar5 = (long *)plVar2[6],
             plVar5 != (long *)(lVar3 + (ulong)(byte)param_1[1] * 0x20 + 0x10) &&
             (*(uint *)((long)plVar5 + 0x14) < uVar1))) {
        lVar6 = plVar2[5];
        *(long **)(lVar6 + 8) = plVar5;
        *plVar5 = lVar6;
        plVar2[5] = (long)plVar5;
        plVar2[6] = 0;
        plVar7 = (long *)plVar5[1];
        plVar2[6] = (long)plVar7;
        *plVar7 = (long)plVar4;
        plVar5[1] = (long)plVar4;
      }
    }
    *(long *)(param_1 + 2) = plVar2[2];
    plVar2[2] = (long)param_1;
    plVar2[7] = CONCAT44((int)((ulong)plVar2[7] >> 0x20) + 1,(int)plVar2[7] + -1);
    return;
  }
  if (param_2 != 0) {
    plVar4 = (long *)plVar2[6];
    if ((plVar4 != (long *)0x0 && plVar4 != plVar2 + 5) && ((long *)plVar4[1] == plVar2 + 5))
    goto LAB_109f66278;
  }
  plVar4 = (long *)plVar2[6];
  if (plVar4 != (long *)0x0) {
    lVar3 = plVar2[5];
    *(long **)(lVar3 + 8) = plVar4;
    *plVar4 = lVar3;
    plVar2[5] = 0;
    plVar2[6] = 0;
  }
  lVar3 = plVar2[3];
  plVar4 = (long *)plVar2[4];
  *(long **)(lVar3 + 8) = plVar4;
  *plVar4 = lVar3;
  plVar2[3] = 0;
  plVar2[4] = 0;
  FUN_109f65aa4(plVar2 + -6);
  lVar3 = plVar2[-5];
  while (lVar3 != 0) {
    plVar2[-5] = *(long *)(lVar3 + 0x18);
    FUN_109f65ae0();
    lVar3 = plVar2[-5];
  }
  if ((code *)plVar2[-2] != (code *)0x0) {
    (*(code *)plVar2[-2])(plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(plVar2 + -6);
  return;
}



/* Entry: 109f66314; end: 109f6635b;  */

void FUN_109f66314(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *(byte *)(param_1 + 0x200) = *(byte *)(param_1 + 0x200) ^ 2;
  puVar3 = (undefined8 *)0x30;
  _malloc();
  puVar4 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[4] = 0;
    puVar4 = puVar3 + 6;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
  }
  *(undefined8 **)(param_1 + 0x208) = puVar4;
  if ((param_1 != 0) && (puVar3 = *(undefined8 **)(param_1 + -0x28), puVar3 != (undefined8 *)0x0)) {
    puVar1 = puVar3;
    for (puVar2 = (undefined8 *)puVar3[3]; puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)puVar2[3]) {
      *puVar1 = puVar4 + -6;
      puVar1 = puVar2;
    }
    *puVar1 = puVar4 + -6;
    lVar5 = puVar4[-5];
    puVar1[3] = lVar5;
    if (lVar5 != 0) {
      *(undefined8 **)(lVar5 + 0x10) = puVar1;
    }
    puVar4[-5] = puVar3;
    *(undefined8 *)(param_1 + -0x28) = 0;
  }
  return;
}


