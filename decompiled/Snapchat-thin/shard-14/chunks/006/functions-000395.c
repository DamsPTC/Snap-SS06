/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b507c68; end: 10b507cdf;  */

ulong FUN_10b507c68(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b507ce0; end: 10b507d27;  */

void FUN_10b507ce0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110cf76c0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b507d28; end: 10b507d2f;  */

void FUN_10b507d28(void)

{
  return;
}



/* Entry: 10b507d30; end: 10b507dff;  */

undefined8 * FUN_10b507d30(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf7770;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x000107c282d4(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_10b504dcc(param_1 + 5,param_2,param_3 + 0x28);
  lVar1 = param_3 + 0x48;
  FUN_10b508520();
  param_1[9] = lVar1;
  lVar1 = param_3 + 0x50;
  FUN_10b508520();
  param_1[10] = lVar1;
  lVar1 = param_3 + 0x58;
  FUN_10b508520();
  param_1[0xb] = lVar1;
  param_3 = param_3 + 0x60;
  FUN_10b508520();
  param_1[0xc] = param_3;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return param_1;
}



/* Entry: 10b507e00; end: 10b507e33;  */

long FUN_10b507e00(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b507e34(param_1);
  return param_1;
}



/* Entry: 10b507e34; end: 10b507e73;  */

undefined8 FUN_10b507e34(long param_1)

{
  char in_NG;
  char in_OV;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  FUN_10b504e1c(param_1 + 0x28);
  func_0x00010006804c(param_1 + 0x10);
  if (in_NG == in_OV) {
    func_0x0001002a998c(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 10b507e74; end: 10b507e77;  */

long FUN_10b507e74(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b507e34(param_1);
  return param_1;
}



/* Entry: 10b507e78; end: 10b507e8b;  */

void FUN_10b507e78(void)

{
  FUN_10b507e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b507e8c; end: 10b507e97;  */

undefined ** FUN_10b507e8c(void)

{
  return &PTR_DAT_110cf77b0;
}



/* Entry: 10b507e98; end: 10b507ef7;  */

void FUN_10b507e98(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  func_0x00010b504e9c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
  func_0x000107c3025c(param_1 + 0x58);
  func_0x000107c3025c(param_1 + 0x60);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b507ef8; end: 10b508167;  */

byte * FUN_10b507ef8(byte *param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  int *piVar9;
  undefined8 *puVar10;
  long lStack_58;
  undefined1 auStack_50 [16];
  
  lVar5 = (long)*(char *)((*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc) + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)((*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc) + 8);
  }
  pbVar2 = param_1;
  if (lVar5 != 0) {
    pbVar2 = param_3;
    func_0x00010b508544(param_3,1);
    param_2 = pbVar2;
  }
  uVar8 = *(uint *)(param_1 + 0x20);
  if (uVar8 != 0) {
    func_0x00010b50855c();
    pbVar7 = pbVar2 + 2;
    *pbVar2 = 0x12;
    for (; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
      pbVar7[-1] = (byte)uVar8 | 0x80;
      pbVar7 = pbVar7 + 1;
    }
    pbVar7[-1] = (byte)uVar8;
    piVar9 = *(int **)(param_1 + 0x18);
    piVar1 = piVar9 + *(int *)(param_1 + 0x10);
    do {
      func_0x00010b50855c();
      uVar6 = (ulong)*piVar9;
      pbVar7 = pbVar2;
      while( true ) {
        param_2 = pbVar7 + 1;
        if (uVar6 < 0x80) break;
        *pbVar7 = (byte)uVar6 | 0x80;
        uVar6 = uVar6 >> 7;
        pbVar7 = param_2;
      }
      piVar9 = piVar9 + 1;
      *pbVar7 = (byte)uVar6;
    } while (piVar9 < piVar1);
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar10[1];
    if (lVar5 != 0) {
      puVar3 = (undefined8 *)*puVar10;
      goto LAB_10b507fe8;
    }
  }
  else {
    puVar3 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) != '\0') {
LAB_10b507fe8:
      func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f776378);
      param_2 = param_3;
      func_0x00010b508544(param_3,3,puVar10);
    }
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar10[1];
    if (lVar5 == 0) goto LAB_10b508058;
    puVar3 = (undefined8 *)*puVar10;
  }
  else {
    puVar3 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_10b508058;
  }
  func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f7763ab);
  param_2 = param_3;
  func_0x00010b508544(param_3,4,puVar10);
LAB_10b508058:
  if (*(int *)(param_1 + 0x28) != 0) {
    if ((*(int *)(param_1 + 0x28) == 1) || ((param_3[0x3a] & 1) == 0)) {
      pbVar2 = (byte *)&lStack_58;
      func_0x00010564c19c(pbVar2);
      while (pbVar7 = pbVar2, lStack_58 != 0) {
        func_0x00010b50854c();
        pbVar2 = (byte *)&lStack_58;
        func_0x000107c27d54(pbVar2);
        param_2 = pbVar7;
      }
    }
    else {
      pbVar2 = (byte *)&lStack_58;
      FUN_10b504ec0(pbVar2);
      for (lStack_58 = lStack_58 << 4; lStack_58 != 0; lStack_58 = lStack_58 + -0x10) {
        func_0x00010b50854c();
        param_2 = pbVar2;
      }
      FUN_10b504e60(auStack_50);
    }
  }
  lVar5 = (long)*(char *)((*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc) + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)((*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc) + 8);
  }
  if (lVar5 != 0) {
    param_2 = param_3;
    func_0x00010b508544(param_3,6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    func_0x0001053930c4(param_3,lVar4,lVar5,param_2);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 10b508168; end: 10b5082c3;  */

long FUN_10b508168(long param_1)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long alStack_38 [3];
  
  lVar4 = 0;
  lVar2 = 0;
  for (lVar5 = (long)*(int *)(param_1 + 0x10); lVar5 != 0; lVar5 = lVar5 + -1) {
    lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x18) + (lVar4 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar2;
    lVar4 = lVar4 + 0x100000000;
  }
  lVar4 = 0;
  if (lVar2 != 0) {
    lVar4 = lVar2 + (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  lVar4 = lVar4 + (ulong)*(uint *)(param_1 + 0x28);
  plVar1 = alStack_38;
  func_0x00010564c19c();
  while (alStack_38[0] != 0) {
    lVar2 = alStack_38[0] + 8;
    FUN_10b504d78(lVar2,alStack_38[0] + 0x10);
    lVar4 = lVar2 + lVar4;
    plVar1 = alStack_38;
    func_0x000107c27d54();
  }
  func_0x00010b50858c(*(undefined8 *)(param_1 + 0x48));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = plVar1[1];
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b508574();
  }
  func_0x00010b50858c(*(undefined8 *)(param_1 + 0x50));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = plVar1[1];
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b508574();
  }
  func_0x00010b50858c(*(undefined8 *)(param_1 + 0x58));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = plVar1[1];
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b508574();
  }
  func_0x00010b50858c(*(undefined8 *)(param_1 + 0x60));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = plVar1[1];
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b508574();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x68) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b5082c4; end: 10b5082c7;  */

void FUN_10b5082c4(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  lVar1 = param_2 + 0x28;
  FUN_10b505080(param_1 + 0x28);
  func_0x00010b508568(*(undefined8 *)(param_2 + 0x48));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b508580();
    }
    func_0x000107c30248(param_1 + 0x48);
  }
  func_0x00010b508568(*(undefined8 *)(param_2 + 0x50));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b508580();
    }
    func_0x000107c30248(param_1 + 0x50);
  }
  func_0x00010b508568(*(undefined8 *)(param_2 + 0x58));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b508580();
    }
    func_0x000107c30248(param_1 + 0x58);
  }
  func_0x00010b508568(*(undefined8 *)(param_2 + 0x60));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b508580();
    }
    func_0x000107c30248(param_1 + 0x60);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5082c8; end: 10b5083bf;  */

void FUN_10b5082c8(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  lVar1 = param_2 + 0x28;
  FUN_10b505080(param_1 + 0x28);
  func_0x00010b508568(*(undefined8 *)(param_2 + 0x48));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b508580();
    }
    func_0x000107c30248(param_1 + 0x48);
  }
  func_0x00010b508568(*(undefined8 *)(param_2 + 0x50));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b508580();
    }
    func_0x000107c30248(param_1 + 0x50);
  }
  func_0x00010b508568(*(undefined8 *)(param_2 + 0x58));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b508580();
    }
    func_0x000107c30248(param_1 + 0x58);
  }
  func_0x00010b508568(*(undefined8 *)(param_2 + 0x60));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b508580();
    }
    func_0x000107c30248(param_1 + 0x60);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5083c0; end: 10b5083ef;  */

void FUN_10b5083c0(void)

{
  FUN_10b508168();
  func_0x00010b508528();
  return;
}



/* Entry: 10b5083f0; end: 10b5083f7;  */

void FUN_10b5083f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x70;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x70);
  }
  *puVar1 = &PTR_FUN_110cf7770;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[6] = 0x100000000;
  puVar1[5] = 0x100000000;
  puVar1[7] = &DAT_10e5b4a18;
  puVar1[8] = param_2;
  puVar1[9] = &DAT_11383d918;
  puVar1[10] = &DAT_11383d918;
  puVar1[0xb] = &DAT_11383d918;
  puVar1[0xc] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  return;
}



/* Entry: 10b5083f8; end: 10b50851f;  */

undefined8 FUN_10b5083f8(long param_1)

{
  char in_NG;
  char in_OV;
  undefined8 unaff_x19;
  
  FUN_10b504e1c(param_1 + 0x18);
  func_0x00010006804c(param_1);
  if (in_NG == in_OV) {
    func_0x0001002a998c(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 10b508520; end: 10b50886b;  */

ulong FUN_10b508520(ulong *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  if ((*param_1 & 3) == 0) {
    return *param_1;
  }
  puVar2 = (undefined8 *)(*param_1 & 0xfffffffffffffffc);
  if (unaff_x20 != 0) {
    puVar1 = &stack0xffffffffffffffe8;
    FUN_10b4bf19c(puVar1,&stack0xffffffffffffffe0,&stack0xffffffffffffffd8);
    return (ulong)puVar1 | 3;
  }
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    puVar2 = (undefined8 *)*puVar2;
  }
  func_0x000100063c9c();
  func_0x000107c60c50();
  return (ulong)puVar2 | 2;
}



/* Entry: 10b50886c; end: 10b508893;  */

long FUN_10b50886c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b508894; end: 10b5088e7;  */

undefined8 * FUN_10b508894(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cf7820;
  param_1[1] = param_2;
  *(undefined4 *)((long)param_1 + 0xec) = 0;
  func_0x00010b5094e8();
  func_0x00010b508598(param_1,param_3);
  return param_1;
}



/* Entry: 10b5088e8; end: 10b5088eb;  */

long FUN_10b5088e8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5088ec; end: 10b5088ff;  */

void FUN_10b5088ec(void)

{
  FUN_10b50886c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b508900; end: 10b50890b;  */

undefined ** FUN_10b508900(void)

{
  return &PTR_DAT_110cf7860;
}



/* Entry: 10b50890c; end: 10b508943;  */

void FUN_10b50890c(long param_1)

{
  ulong *puVar1;
  
  func_0x00010b5094e8();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b508944; end: 10b5090ef;  */

long * FUN_10b508944(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((char)param_1[2] == '\x01') {
    plVar2 = param_1;
    FUN_10b509440();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b509488();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x11) == '\x01') {
    FUN_10b509440();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b509488();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x12) == '\x01') {
    FUN_10b509440();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b509488();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x13) == '\x01') {
    FUN_10b509440();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b509488();
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b5094f4();
    func_0x0001088b96ec();
    param_2 = plVar2;
  }
  if ((int)param_1[3] != 0) {
    func_0x00010b5094f4();
    func_0x0001089f53c8();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x1c) == '\x01') {
    FUN_10b509440();
    plVar1 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar2);
    func_0x00010b509488();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x1d) == '\x01') {
    FUN_10b509440();
    plVar2 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar1);
    func_0x00010b509488();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x1e) == '\x01') {
    FUN_10b509440();
    plVar1 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar2);
    func_0x00010b509488();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x1f) == '\x01') {
    FUN_10b509440();
    plVar2 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar1);
    func_0x00010b509488();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((char)param_1[7] == '\x01') {
    FUN_10b509440();
    plVar1 = (long *)0x58;
    func_0x000107c280a8(0x58,plVar2);
    func_0x00010b509488();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((int)param_1[4] != 0) {
    FUN_10b509440();
    plVar2 = (long *)0x60;
    func_0x000107c280a8(0x60,plVar1);
    func_0x00010b5094a0();
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x24) != 0) {
    func_0x00010b5094f4();
    func_0x000109320b88();
    param_2 = plVar2;
  }
  if (param_1[5] != 0) {
    func_0x00010b5094f4();
    func_0x000106af6970();
    param_2 = plVar2;
  }
  if ((int)param_1[6] != 0) {
    func_0x00010b5094f4();
    func_0x00010932d954();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(int *)((long)param_1 + 0x34) != 0) {
    FUN_10b509440();
    plVar1 = (long *)0x80;
    func_0x000107c280a8(0x80,plVar2);
    func_0x00010b5094a0();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x39) == '\x01') {
    FUN_10b509440();
    plVar2 = (long *)0x88;
    func_0x000107c280a8(0x88,plVar1);
    func_0x00010b509488();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x3a) == '\x01') {
    FUN_10b509440();
    plVar1 = (long *)0x90;
    func_0x000107c280a8(0x90,plVar2);
    func_0x00010b509488();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x3c) != 0) {
    FUN_10b509440();
    plVar2 = (long *)0x98;
    func_0x000107c280a8(0x98,plVar1);
    func_0x00010b5094a0();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[8] != 0) {
    FUN_10b509440();
    plVar1 = (long *)0xa0;
    func_0x000107c280a8(0xa0,plVar2);
    func_0x00010b5094a0();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x44) != 0) {
    FUN_10b509440();
    plVar2 = (long *)0xa8;
    func_0x000107c280a8(0xa8,plVar1);
    func_0x00010b5094a0();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (param_1[9] != 0) {
    FUN_10b509440();
    plVar1 = (long *)0xb0;
    func_0x000107c280a8(0xb0,plVar2);
    func_0x00010b509494();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((int)param_1[10] != 0) {
    FUN_10b509440();
    plVar2 = (long *)0xb8;
    func_0x000107c280a8(0xb8,plVar1);
    func_0x00010b5094a0();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(int *)((long)param_1 + 0x54) != 0) {
    FUN_10b509440();
    plVar1 = (long *)0xc0;
    func_0x000107c280a8(0xc0,plVar2);
    func_0x00010b5094a0();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (param_1[0xb] != 0) {
    FUN_10b509440();
    plVar2 = (long *)0xc8;
    func_0x000107c280a8(200,plVar1);
    func_0x00010b509494();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x3b) == '\x01') {
    FUN_10b509440();
    plVar1 = (long *)0xd0;
    func_0x000107c280a8(0xd0,plVar2);
    func_0x00010b509488();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((int)param_1[0xf] != 0) {
    FUN_10b509440();
    plVar2 = (long *)0xd8;
    func_0x000107c280a8(0xd8,plVar1);
    func_0x00010b5094a0();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (param_1[0xc] != 0) {
    FUN_10b509440();
    plVar1 = (long *)0xe0;
    func_0x000107c280a8(0xe0,plVar2);
    func_0x00010b509494();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (param_1[0xd] != 0) {
    FUN_10b509440();
    plVar2 = (long *)0xe8;
    func_0x000107c280a8(0xe8,plVar1);
    func_0x00010b509494();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (param_1[0xe] != 0) {
    FUN_10b509440();
    plVar1 = (long *)0xf0;
    func_0x000107c280a8(0xf0,plVar2);
    func_0x00010b509494();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (param_1[0x10] != 0) {
    FUN_10b509440();
    plVar2 = (long *)0xf8;
    func_0x000107c280a8(0xf8,plVar1);
    func_0x00010b509494();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (param_1[0x11] != 0) {
    FUN_10b509440();
    plVar1 = (long *)0x100;
    func_0x000107c280a8(0x100,plVar2);
    func_0x00010b509494();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x7c) != 0) {
    FUN_10b509440();
    plVar2 = (long *)0x108;
    func_0x000107c280a8(0x108,plVar1);
    func_0x00010b5094a0();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[0x12] != 0) {
    FUN_10b509440();
    plVar1 = (long *)0x110;
    func_0x000107c280a8(0x110,plVar2);
    func_0x00010b5094a0();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x94) != 0) {
    FUN_10b509440();
    plVar2 = (long *)0x118;
    func_0x000107c280a8(0x118,plVar1);
    func_0x00010b5094a0();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[0x17] != 0) {
    FUN_10b509440();
    plVar1 = (long *)0x120;
    func_0x000107c280a8(0x120,plVar2);
    func_0x00010b5094a0();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (param_1[0x13] != 0) {
    FUN_10b509440();
    plVar2 = (long *)0x128;
    func_0x000107c280a8(0x128,plVar1);
    func_0x00010b509494();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (param_1[0x14] != 0) {
    FUN_10b509440();
    plVar1 = (long *)0x130;
    func_0x000107c280a8(0x130,plVar2);
    func_0x00010b509494();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (param_1[0x15] != 0) {
    FUN_10b509440();
    plVar2 = (long *)0x138;
    func_0x000107c280a8(0x138,plVar1);
    func_0x00010b509494();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (param_1[0x16] != 0) {
    FUN_10b509440();
    plVar1 = (long *)0x140;
    func_0x000107c280a8(0x140,plVar2);
    func_0x00010b509494();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (param_1[0x18] != 0) {
    FUN_10b509440();
    plVar2 = (long *)0x148;
    func_0x000107c280a8(0x148,plVar1);
    func_0x00010b509494();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (param_1[0x19] != 0) {
    FUN_10b509440();
    plVar1 = (long *)0x150;
    func_0x000107c280a8(0x150,plVar2);
    func_0x00010b509494();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (param_1[0x1a] != 0) {
    FUN_10b509440();
    plVar2 = (long *)0x158;
    func_0x000107c280a8(0x158,plVar1);
    func_0x00010b509494();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (param_1[0x1b] != 0) {
    FUN_10b509440();
    plVar1 = (long *)0x160;
    func_0x000107c280a8(0x160,plVar2);
    func_0x00010b509494();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0xbc) != 0) {
    FUN_10b509440();
    plVar2 = (long *)0x168;
    func_0x000107c280a8(0x168,plVar1);
    func_0x00010b5094a0();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0xe4) == '\x01') {
    FUN_10b509440();
    plVar1 = (long *)0x170;
    func_0x000107c280a8(0x170,plVar2);
    func_0x00010b509488();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0xe5) == '\x01') {
    FUN_10b509440();
    plVar2 = (long *)0x178;
    func_0x000107c280a8(0x178,plVar1);
    func_0x00010b509488();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[0x1c] != 0) {
    FUN_10b509440();
    plVar1 = (long *)0x180;
    func_0x000107c280a8(0x180,plVar2);
    func_0x00010b5094a0();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0xe6) == '\x01') {
    FUN_10b509440();
    plVar2 = (long *)0x188;
    func_0x000107c280a8(0x188,plVar1);
    func_0x00010b509488();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0xe7) == '\x01') {
    FUN_10b509440();
    plVar1 = (long *)0x190;
    func_0x000107c280a8(400,plVar2);
    func_0x00010b509488();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((char)param_1[0x1d] == '\x01') {
    FUN_10b509440();
    plVar2 = (long *)0x198;
    func_0x000107c280a8(0x198,plVar1);
    func_0x00010b509488();
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0xe9) == '\x01') {
    FUN_10b509440();
    param_2 = (long *)0x1a0;
    func_0x000107c280a8(0x1a0,plVar2);
    func_0x00010b509488();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b5090f0; end: 10b5093ef;  */

long FUN_10b5090f0(long param_1)

{
  int extraout_w8;
  long lVar1;
  int extraout_w9;
  long lVar2;
  long extraout_x10;
  ulong uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  func_0x00010b5094ac(0xfffffff7,
                      ((ushort)(byte)uVar4 * 2 & 0xff) +
                      (ushort)(byte)((char)((uint)uVar4 >> 0x10) * '\x02') +
                      ((ushort)(byte)((uint)uVar4 >> 8) * 2 & 0xff) +
                      (ushort)(byte)((char)((uint)uVar4 >> 0x18) * '\x02'));
  func_0x00010b5094ac();
  func_0x00010b50944c();
  func_0x00010b50944c();
  func_0x00010b5094ac();
  func_0x00010b50944c();
  func_0x00010b5094ac();
  func_0x00010b50944c();
  func_0x00010b50944c();
  func_0x00010b5094ac();
  func_0x00010b50944c();
  func_0x00010b50944c();
  lVar1 = extraout_x10;
  if (*(int *)(param_1 + 0xe0) != 0) {
    lVar1 = extraout_x10 +
            (ulong)((uint)(extraout_w9 + (int)LZCOUNT((long)*(int *)(param_1 + 0xe0)) * extraout_w8)
                   >> 6) + 2;
  }
  lVar2 = lVar1 + 3;
  if (*(char *)(param_1 + 0xe4) == '\0') {
    lVar2 = lVar1;
  }
  lVar1 = lVar2 + 3;
  if (*(char *)(param_1 + 0xe5) == '\0') {
    lVar1 = lVar2;
  }
  lVar2 = lVar1 + 3;
  if (*(char *)(param_1 + 0xe6) == '\0') {
    lVar2 = lVar1;
  }
  lVar1 = lVar2 + 3;
  if (*(char *)(param_1 + 0xe7) == '\0') {
    lVar1 = lVar2;
  }
  lVar2 = lVar1 + 3;
  if (*(char *)(param_1 + 0xe8) == '\0') {
    lVar2 = lVar1;
  }
  lVar1 = lVar2 + 3;
  if (*(char *)(param_1 + 0xe9) == '\0') {
    lVar1 = lVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0xec) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5093f0; end: 10b50943f;  */

undefined8 * FUN_10b5093f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0xf0;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0xf0);
  }
  *puVar1 = &PTR_FUN_110cf7820;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0xec) = 0;
  func_0x00010b5094e8();
  return puVar1;
}



/* Entry: 10b509440; end: 10b509557;  */

ulong * FUN_10b509440(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 10b509558; end: 10b50957f;  */

long FUN_10b509558(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b509580; end: 10b5095cb;  */

undefined8 * FUN_10b509580(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cf78d0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b509508(param_1,param_3);
  return param_1;
}



/* Entry: 10b5095cc; end: 10b5095cf;  */

long FUN_10b5095cc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5095d0; end: 10b5095e3;  */

void FUN_10b5095d0(void)

{
  FUN_10b509558();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5095e4; end: 10b509603;  */

undefined ** FUN_10b5095e4(void)

{
  return &PTR_DAT_110cf7910;
}



/* Entry: 10b509604; end: 10b509703;  */

long * FUN_10b509604(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  plVar1 = param_1;
  if ((int)param_1[2] != 0) {
    plVar2 = param_1;
    FUN_10b5097ec();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b5097f8();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    FUN_10b5097ec();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b5097f8();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((char)param_1[3] == '\x01') {
    FUN_10b5097ec();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b5097f8();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    FUN_10b5097ec();
    param_2 = (long *)(ulong)*(uint *)((long)param_1 + 0x1c);
    uVar3 = 0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x000107c280b8(param_2,uVar3);
  }
  if ((param_1[1] & 1U) != 0) {
    uVar6 = param_1[1] & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 10b509704; end: 10b5097a3;  */

long FUN_10b509704(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  lVar2 = (ulong)*(byte *)(param_1 + 0x18) * 2 + (ulong)uVar1;
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5097a4; end: 10b5097eb;  */

void FUN_10b5097a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110cf78d0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b5097ec; end: 10b50980b;  */

ulong * FUN_10b5097ec(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 10b50980c; end: 10b509883;  */

undefined8 * FUN_10b50980c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf7978;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = param_3 + 0x10;
  func_0x000107c2809c(lVar2,param_2);
  param_1[2] = lVar2;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x38);
  uVar4 = *(undefined8 *)(param_3 + 0x30);
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  param_1[4] = *(undefined8 *)(param_3 + 0x20);
  param_1[3] = uVar5;
  param_1[6] = uVar4;
  param_1[5] = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar1;
  return param_1;
}



/* Entry: 10b509884; end: 10b5098b3;  */

long FUN_10b509884(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5098b4; end: 10b5098b7;  */

long FUN_10b5098b4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5098b8; end: 10b5098cb;  */

void FUN_10b5098b8(void)

{
  FUN_10b509884();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5098cc; end: 10b5098d7;  */

undefined ** FUN_10b5098cc(void)

{
  return &PTR_DAT_110cf79b8;
}



/* Entry: 10b5098d8; end: 10b50991f;  */

void FUN_10b5098d8(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b509920; end: 10b509b8f;  */

long * FUN_10b509920(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  plVar1 = param_1;
  if ((int)param_1[3] != 0) {
    plVar2 = param_1;
    FUN_10b509e54();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b509e60();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    FUN_10b509e54();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b509e60();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[4] != 0) {
    FUN_10b509e54();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b509e60();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x24) != 0) {
    FUN_10b509e54();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b509e60();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[5] != 0) {
    FUN_10b509e54();
    plVar1 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x00010b509e60();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    FUN_10b509e54();
    plVar2 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar1);
    func_0x00010b509e60();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((char)param_1[7] == '\x01') {
    FUN_10b509e54();
    plVar1 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar2);
    func_0x00010b509e6c();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((int)param_1[6] != 0) {
    FUN_10b509e54();
    plVar2 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar1);
    func_0x00010b509e60();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(int *)((long)param_1 + 0x34) != 0) {
    FUN_10b509e54();
    plVar1 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar2);
    func_0x00010b509e60();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x39) == '\x01') {
    FUN_10b509e54();
    plVar2 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar1);
    func_0x00010b509e6c();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x3a) == '\x01') {
    FUN_10b509e54();
    plVar1 = (long *)0x58;
    func_0x000107c280a8(0x58,plVar2);
    func_0x00010b509e6c();
    param_2 = plVar1;
  }
  if (*(char *)((long)param_1 + 0x3b) == '\x01') {
    FUN_10b509e54();
    param_2 = (long *)0x60;
    func_0x000107c280a8(0x60,plVar1);
    func_0x00010b509e6c();
  }
  puVar8 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b509b4c;
    puVar3 = (undefined8 *)*puVar8;
  }
  else {
    puVar3 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b509b4c;
  }
  func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f7763da);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,0xd,puVar8,param_2);
  param_2 = plVar1;
LAB_10b509b4c:
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  uVar6 = param_1[1] & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar5) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar7 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar7 - iVar9);
      if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
      func_0x00010b4d5738();
      lVar4 = (long)param_2 + (long)iVar9;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar7);
  }
  _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar5);
}



/* Entry: 10b509b90; end: 10b509cdb;  */

void FUN_10b509b90(long param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  int extraout_w8;
  long lVar4;
  int extraout_w9;
  int extraout_w10;
  undefined4 uVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  cVar1 = *(char *)(uVar3 + 0x17);
  if (cVar1 < '\0') {
    if (*(long *)(uVar3 + 8) == 0) goto LAB_10b509bcc;
  }
  else if (cVar1 == '\0') goto LAB_10b509bcc;
  func_0x000107c282a0();
LAB_10b509bcc:
  func_0x00010b509e78(0xfffffff7);
  func_0x00010b509e78();
  iVar2 = extraout_w10;
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = extraout_w10 +
            ((uint)(extraout_w9 + (int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * extraout_w8) >> 6)
            + 1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar2 = iVar2 + ((uint)(extraout_w9 + (int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * extraout_w8
                           ) >> 6) + 1;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  iVar2 = ((ushort)((ushort)(byte)uVar5 * 2) & 0xff) +
          (uint)(byte)((char)((uint)uVar5 >> 0x10) * '\x02') +
          ((ushort)((ushort)(byte)((uint)uVar5 >> 8) * 2) & 0xff) +
          (uint)(byte)((char)((uint)uVar5 >> 0x18) * '\x02') + iVar2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar3 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(param_1 + 0x3c) = iVar2;
  return;
}



/* Entry: 10b509cdc; end: 10b509cdf;  */

void FUN_10b509cdc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  if (*(char *)(param_2 + 0x39) == '\x01') {
    *(undefined1 *)(param_1 + 0x39) = 1;
  }
  if (*(char *)(param_2 + 0x3a) == '\x01') {
    *(undefined1 *)(param_1 + 0x3a) = 1;
  }
  if (*(char *)(param_2 + 0x3b) == '\x01') {
    *(undefined1 *)(param_1 + 0x3b) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b509ce0; end: 10b509def;  */

void FUN_10b509ce0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  if (*(char *)(param_2 + 0x39) == '\x01') {
    *(undefined1 *)(param_1 + 0x39) = 1;
  }
  if (*(char *)(param_2 + 0x3a) == '\x01') {
    *(undefined1 *)(param_1 + 0x3a) = 1;
  }
  if (*(char *)(param_2 + 0x3b) == '\x01') {
    *(undefined1 *)(param_1 + 0x3b) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b509df0; end: 10b509df7;  */

void FUN_10b509df0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x40);
  }
  *puVar1 = &PTR_FUN_110cf7978;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 10b509df8; end: 10b509e53;  */

void FUN_10b509df8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x40);
  }
  *puVar1 = &PTR_FUN_110cf7978;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 10b509e54; end: 10b509ea7;  */

ulong * FUN_10b509e54(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  if (unaff_x21 < (ulong *)*unaff_x19) {
    return unaff_x21;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    unaff_x21 = (ulong *)((long)puVar2 + (long)((int)unaff_x21 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x21);
  return unaff_x21;
}



/* Entry: 10b509ea8; end: 10b509f0f;  */

undefined8 * FUN_10b509ea8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf7a20;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x00010598fd00(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b509f10; end: 10b509f43;  */

long FUN_10b509f10(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b509f44; end: 10b509f47;  */

long FUN_10b509f44(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b509f48; end: 10b509f5b;  */

void FUN_10b509f48(void)

{
  FUN_10b509f10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b509f5c; end: 10b509f67;  */

undefined ** FUN_10b509f5c(void)

{
  return &PTR_DAT_110cf7a60;
}



/* Entry: 10b509f68; end: 10b509fa3;  */

void FUN_10b509f68(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b509fa4; end: 10b50a107;  */

long * FUN_10b509fa4(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  
  lVar11 = 8;
  for (uVar10 = (ulong)(*(uint *)(param_1 + 0x18) &
                       ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
      uVar10 = uVar10 - 1) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    puVar2 = (ulong *)(param_1 + 0x10);
    if ((uVar6 & 1) != 0) {
      puVar2 = (ulong *)(uVar6 + lVar11 + -1);
    }
    puVar8 = (undefined8 *)*puVar2;
    lVar5 = (long)*(char *)((long)puVar8 + 0x17);
    puVar3 = puVar8;
    if (lVar5 < 0) {
      lVar5 = puVar8[1];
      puVar3 = (undefined8 *)*puVar8;
    }
    func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f77640d);
    lVar5 = (long)*(char *)((long)puVar8 + 0x17);
    if (((lVar5 < 0) && (lVar5 = puVar8[1], 0x7f < lVar5)) ||
       ((*param_3 - (long)param_2) + 0xe < lVar5)) {
      plVar4 = param_3;
      func_0x00010b4d5120(param_3,1,puVar8,param_2);
    }
    else {
      *(undefined1 *)param_2 = 10;
      *(char *)((long)param_2 + 1) = (char)lVar5;
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        puVar8 = (undefined8 *)*puVar8;
      }
      _memcpy((undefined1 *)((long)param_2 + 2),puVar8,lVar5);
      plVar4 = (long *)((undefined1 *)((long)param_2 + 2) + lVar5);
    }
    lVar11 = lVar11 + 8;
    param_2 = plVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar10 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar10 < 0) {
    lVar11 = *(long *)(uVar6 + 8);
    uVar10 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar11 = uVar6 + 8;
  }
  if ((long)(int)uVar10 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar11,uVar10 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar10);
  }
  while( true ) {
    iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar7 = (int)uVar10;
    uVar10 = (ulong)(uint)(iVar7 - iVar9);
    if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar9);
    param_2 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar7);
}



/* Entry: 10b50a108; end: 10b50a19b;  */

ulong FUN_10b50a108(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = (ulong)uVar2;
  lVar6 = 8;
  for (uVar5 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + lVar6 + -1);
    }
    uVar3 = *puVar1;
    func_0x000107c282a0();
    uVar4 = uVar3 + uVar4;
    lVar6 = lVar6 + 8;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    uVar4 = lVar6 + uVar4;
  }
  *(int *)(param_1 + 0x28) = (int)uVar4;
  return uVar4;
}



/* Entry: 10b50a19c; end: 10b50a19f;  */

void FUN_10b50a19c(long param_1,long param_2)

{
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b50a1a0; end: 10b50a1eb;  */

void FUN_10b50a1a0(long param_1,long param_2)

{
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b50a1ec; end: 10b50a1f3;  */

void FUN_10b50a1ec(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110cf7a20;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b50a1f4; end: 10b50a2cb;  */

void FUN_10b50a1f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110cf7a20;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b50a2cc; end: 10b50a2ff;  */

long FUN_10b50a2cc(long param_1)

{
  func_0x00010b50ac28();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x00010b50a244(param_1);
  }
  return param_1;
}



/* Entry: 10b50a300; end: 10b50a303;  */

long FUN_10b50a300(long param_1)

{
  func_0x00010b50ac28();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x00010b50a244(param_1);
  }
  return param_1;
}



/* Entry: 10b50a304; end: 10b50a317;  */

void FUN_10b50a304(void)

{
  FUN_10b50a2cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50a318; end: 10b50a327;  */

undefined8 FUN_10b50a318(undefined8 param_1)

{
  func_0x00010b50ac28();
  FUN_10b50a868(param_1);
  return param_1;
}



/* Entry: 10b50a328; end: 10b50a447;  */

void FUN_10b50a328(long param_1)

{
  ulong *puVar1;
  
  func_0x00010b50a244();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b50a448; end: 10b50a463;  */

long FUN_10b50a448(long param_1)

{
  long extraout_x8;
  
  FUN_10b50bc4c();
  func_0x00010b50ac10();
  return param_1 + extraout_x8;
}



/* Entry: 10b50a464; end: 10b50a61f;  */

void FUN_10b50a464(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) goto LAB_10b50a540;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      func_0x00010b50a244(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 2) {
        ppuVar1 = &PTR_PTR_1133804b8;
      }
      func_0x00010b50a564(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_10b50a540;
    }
    FUN_10b50ab30(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (iVar2 != 1) goto LAB_10b50a540;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 1) {
        ppuVar1 = &PTR_PTR_113380838;
      }
      FUN_10b50be84(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_10b50a540;
    }
    func_0x00010b50aaec(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  *(ulong *)(param_1 + 0x10) = uVar4;
LAB_10b50a540:
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b50a620; end: 10b50a64b;  */

long FUN_10b50a620(long param_1)

{
  func_0x00010b50ac28();
  FUN_10b50aa70(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b50a64c; end: 10b50a64f;  */

long FUN_10b50a64c(long param_1)

{
  func_0x00010b50ac28();
  FUN_10b50aa70(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b50a650; end: 10b50a663;  */

void FUN_10b50a650(void)

{
  FUN_10b50a620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50a664; end: 10b50a66f;  */

undefined ** FUN_10b50a664(void)

{
  return &PTR_DAT_110cf7bf8;
}



/* Entry: 10b50a670; end: 10b50a6af;  */

void FUN_10b50a670(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b50a6b0; end: 10b50a7eb;  */

long * FUN_10b50a6b0(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x18);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + (long)iVar5 * 8 + 7);
    }
    param_2 = (long *)0x1;
    func_0x00010b50ac3c(1,*puVar1,*(undefined4 *)(*puVar1 + 0x18));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        lVar2 = (long)param_2 + (long)iVar6;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 10b50a7ec; end: 10b50a83b;  */

void FUN_10b50a7ec(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b50a83c; end: 10b50a867;  */

undefined8 FUN_10b50a83c(undefined8 param_1)

{
  func_0x00010b50ac28();
  FUN_10b50a868(param_1);
  return param_1;
}



/* Entry: 10b50a868; end: 10b50a897;  */

void FUN_10b50a868(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c30570();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50a898; end: 10b50a8ab;  */

void FUN_10b50a898(void)

{
  FUN_10b50a83c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50a8ac; end: 10b50a8b7;  */

undefined ** FUN_10b50a8ac(void)

{
  return &PTR_DAT_110cf7c40;
}



/* Entry: 10b50a8b8; end: 10b50a8ff;  */

void FUN_10b50a8b8(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b51dca0(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b50a900; end: 10b50a9cf;  */

long * FUN_10b50a900(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b50a96c;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b50a96c;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f776436);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_10b50a96c:
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x00010b50ac3c(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if (*param_3 - (long)plVar2 < (long)(int)uVar4) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)plVar2) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar8);
      if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
      func_0x00010b4d5738();
      lVar3 = (long)plVar2 + (long)iVar8;
      plVar2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar2 + (long)iVar6);
  }
  _memcpy(plVar2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)plVar2 + (long)(int)uVar4);
}



/* Entry: 10b50a9d0; end: 10b50aa53;  */

long FUN_10b50a9d0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b50aa08;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b50aa08:
    lVar3 = 0;
    goto LAB_10b50aa0c;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b50aa0c:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_10b4f6568();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b50aa54; end: 10b50aa6f;  */

void FUN_10b50aa54(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x000107c30418(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b51dfcc();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b50aa70; end: 10b50aa9f;  */

long * FUN_10b50aa70(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b50aaa0; end: 10b50ab2f;  */

void FUN_10b50aaa0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110cf7b68;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b50ab30; end: 10b50abcf;  */

undefined8 * FUN_10b50ab30(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110cf7ac8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  lVar2 = param_2 + 0x18;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[3] = lVar2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c30418(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar1[4] = param_1;
  return puVar1;
}



/* Entry: 10b50abd0; end: 10b50ac57;  */

void FUN_10b50abd0(void)

{
  return;
}



/* Entry: 10b50ac58; end: 10b50ac8b;  */

long FUN_10b50ac58(long param_1)

{
  func_0x000107c39d08();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b50c808();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b50ac8c; end: 10b50ac8f;  */

long FUN_10b50ac8c(long param_1)

{
  func_0x000107c39d08();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b50c808();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b50ac90; end: 10b50aca3;  */

void FUN_10b50ac90(void)

{
  FUN_10b50ac58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50aca4; end: 10b50acaf;  */

undefined ** FUN_10b50aca4(void)

{
  return &PTR_DAT_110cf7f00;
}



/* Entry: 10b50acb0; end: 10b50ae5b;  */

void FUN_10b50acb0(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b50acf4(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b50ae5c; end: 10b50ae77;  */

long FUN_10b50ae5c(long param_1)

{
  long extraout_x8;
  
  FUN_10b50c9cc();
  func_0x00010b50d084();
  return param_1 + extraout_x8;
}



/* Entry: 10b50ae78; end: 10b50af07;  */

void FUN_10b50ae78(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b50d1f0();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_10b50cd5c();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      FUN_10b50af08();
      puVar2 = puVar3;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b50d200();
    if ((*puVar2 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b50af08; end: 10b50afd3;  */

void FUN_10b50af08(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x00010b50d1f0();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  FUN_10b50ca90();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x30);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x000107c30418();
        *(ulong **)(unaff_x21 + 0x30) = puVar2;
      }
      else {
        FUN_10b51dfcc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x38);
      if (puVar2 == (ulong *)0x0) {
        FUN_10b50cf0c();
        *(ulong **)(unaff_x21 + 0x38) = puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_10b50c6dc();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x21 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  func_0x00010b50d254();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b50d200();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b50afd4; end: 10b50afff;  */

long FUN_10b50afd4(long param_1)

{
  func_0x000107c39d08();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b50b000; end: 10b50b003;  */

long FUN_10b50b000(long param_1)

{
  func_0x000107c39d08();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b50b004; end: 10b50b017;  */

void FUN_10b50b004(void)

{
  FUN_10b50afd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50b018; end: 10b50b023;  */

undefined ** FUN_10b50b018(void)

{
  return &PTR_DAT_110cf7f68;
}


